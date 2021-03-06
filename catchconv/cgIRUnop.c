/*--------------------------------------------------------------------*/
/*--- CatchConversions                           cgIRUnop.c        ---*/
/*--------------------------------------------------------------------*/
/*
   Copyright (C) 2006-07 Regents of the University of California
   Contact: dmolnar@eecs.berkeley.edu

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307, USA.

   The GNU General Public License is contained in the file COPYING.
*/

/* _c_onstraint _g_eneration from Valgrind IR */ 
/*  contains code for handling unary operators */ 

#include "libvex_basictypes.h"
#include "libvex_ir.h"
#include "libvex.h"

#include "ca_vex_util.h"


#include "pub_tool_basics.h"
#include "pub_tool_libcassert.h"
#include "pub_tool_tooliface.h"
#include "pub_tool_vki.h" 

#include "pub_tool_libcprint.h"
#include "pub_tool_debuginfo.h" 
#include "pub_tool_libcbase.h"
#include "pub_tool_options.h"
#include "pub_tool_hashtable.h" 
#include "pub_tool_mallocfree.h"
#include "pub_tool_libcproc.h" 
#include "pub_tool_threadstate.h"

#include "ca_interval.h"
#include "isIR.h"
#include "ogIR.h" 
#include "ca_settings.h"
#include "trackmemIR.h" 
#include "cgIR.h" 
#include "ca_stats.h"
#include "catchconv.h" 


/*---------------------------------------------------------------*/
/*--- Generate STP  from VEX IR for unary ops                 ---*/
/*---------------------------------------------------------------*/


void cgEmit16Sto32(HWord lhsname, HWord argname, HWord tagVal);

HWord numUnhandledUnops = 0; 

/* "Gateway" emit function for all IR of the form */ 
/*            tX = op(tY)                         */ 
/* This function first checks to see whether the  */
/* lhs is tainted. If not, we do not emit a constraint. */
/* Then the function checks to see whether the argument is tainted. */
/* In principle, isIR.c should ensure that either both the arg and lhs */
/* are tainted, or neither are tainted. If we find a mismatch, raise */ 
/* a warning and continue. Otherwise, if both are tainted, call the */
/* appropriate unop constraint emit function. */ 

void cgEmitUnopConst(
		     IROp theop, 
		     HWord lhsname,  
		     HWord tagVal, 
		     HWord argval, 
		     HWord lhsval,
		     IRType lhsty
		   )
{
  HWord lhsSymP; 

  lhsSymP = isTmpSymbolicP(tagVal, lhsname); 

  if (! lhsSymP )
  {
    /* If LHS not symbolic, do not emit constraint. */ 
    return; 
  }

  cgDeclareTmpAtRunIfUndeclared(tagVal, lhsname, lhsty); 

  switch (theop)
  {
  case (Iop_32to8):
    cgEmit32to8Const(lhsname,argval, tagVal); 
    break; 
  case (Iop_32to16):
    cgEmit32to16Const(lhsname,argval, tagVal); 
    break;
  default:
    break; 
  }
}

/* void cgEmitUnopTmp(
		   IROp theop, 
		   HWord lhsname, 
		   HWord argname, 
		   HWord tagVal, 
		   IRType lhsty,
		   IRType argty,	  
		   HWord argval, 
		   HWord lhsval
		   )*/
void cgEmitUnopTmp(
		   cgArgs_EmitUnopTmp *extra_args,
		   HWord argval,
		   HWord lhsval
		   )
{

  // extracting arguments from struct extra_args
  IROp theop = extra_args->theop;
  HWord lhsname = extra_args->lhsname;
  HWord argname = extra_args->argname;
  HWord tagVal = extra_args->tagVal;
  IRType lhsty = extra_args->lhsty;
  IRType argty = extra_args->rhsty;
  /*
  VG_(printf)("The arguments are: %d %d %d %d %d %d\n",
	     extra_args->theop,
	      extra_args->lhsname,
	      extra_args->argname,
	      extra_args->tagVal,
	      extra_args->lhsty,
	      extra_args->rhsty);
  */

  HWord lhsSymP; 
  HWord argSymP; 

  lhsSymP = isTmpSymbolicP(tagVal, lhsname); 
  argSymP = isTmpSymbolicP(tagVal, argname); 

  if (! lhsSymP && ! argSymP )
  {
    /* If neither LHS nor argument are symbolic, do not emit constraint */
    /* Strictly speaking, because isIR.c flows taint from arg to LHS for */
    /* a unop, and because the taint map is updated before this is run, */
    /* we could get away with just checking lhsSymP.                    */ 
    return; 
  }
  
  cgDeclareTmpAtRunIfUndeclared(tagVal, argname, argty); 
  cgDeclareTmpAtRunIfUndeclared(tagVal, lhsname, lhsty); 

  

  switch (theop)
  {
  case (Iop_1Uto32):
    cgEmit1Uto32(lhsname, argname, tagVal); 
    break; 

  case (Iop_1Uto8):
    cgEmit1Uto8(lhsname, argname, tagVal); 
    break; 

  case (Iop_Not1):
    cgEmitNot1(lhsname, argname, tagVal); 
    break;

  case (Iop_Not32):
   cgEmitNot32(lhsname, argname, tagVal); 
   break;

  case (Iop_32to1):
    cgEmit32to1(lhsname, argname, tagVal); 
    break; 

  case (Iop_8Sto32):
    cgEmit8Sto32(lhsname, argname, tagVal); 
    break; 

  case (Iop_8Uto32):
    cgEmit8Uto32(lhsname, argname, tagVal); 
    break; 

  case (Iop_16Uto32):
    cgEmit16Uto32(lhsname, argname, tagVal); 
    break; 

  case (Iop_16Sto32):
    cgEmit16Sto32(lhsname, argname, tagVal); 
    break; 

  case (Iop_32to8):  
    cgEmit32to8Tmp(lhsname,argname, tagVal); 
    break; 

  case (Iop_64to32):
    cgEmit64loto32(lhsname, argname, tagVal);
    break; 

  case (Iop_64HIto32):
    cgEmit64HIto32(lhsname, argname, tagVal);
    break;

  case (Iop_32to16):
    cgEmit32to16Tmp(lhsname,argname, tagVal);
    break; 

  default: 
  break; 
  }
}


HWord cgIsSupportedUnop(IROp op)
{

  return ( op == Iop_1Uto32 ||
	   op == Iop_1Uto8 ||
	   op == Iop_Not1 ||
	   op == Iop_Not32 ||
	   op == Iop_32to1 ||
	   op == Iop_8Sto32 ||
	   op == Iop_8Uto32 ||
	   op == Iop_16Uto32 ||
	   op == Iop_16Sto32 ||
	   op == Iop_32to8 ||
	   op == Iop_64to32 ||
	   op == Iop_64HIto32 ||
	   op == Iop_32to16
	   );
}

void cgAddTmpUnopConstraints(IRSB * bb, IRStmt * s)
{
  IRExpr * rhs; 
  IRExpr * arg; 
  IROp theop; 
  IRDirty * d; 
  void * EmitFunction = NULL;
  IRExpr** args = NULL; 
  HWord lhsname; 
  HWord rhsname;
  HWord rhsval; 
  HWord lhsty, rhsty; 

  cgArgs_EmitUnopTmp *extra_args = NULL; // Extra arguments

  vassert(s); 
  vassert(s->tag == Ist_WrTmp); 
  rhs = s->Ist.WrTmp.data; 
  lhsname = (HWord)s->Ist.WrTmp.tmp;

  vassert(rhs->tag == Iex_Unop); 
  arg = rhs->Iex.Unop.arg; 
  theop = rhs->Iex.Unop.op; 

  /* We don't support all operations yet. Skip ones we don't. */ 
  if (! cgIsSupportedUnop(theop))
  {
    if (ca_output_comment)
    {
      VG_(printf)("XXX Unhandled unop: "); 
      ppIROp(theop); 
      VG_(printf)("\n"); 
    }
    numUnhandledUnops++; 
    return; 
  }


  vassert(arg->tag == Iex_RdTmp || arg->tag == Iex_Const); 

  lhsty = (HWord)bb->tyenv->types[lhsname]; 

  switch (arg->tag) 
  {
  case (Iex_RdTmp):
    EmitFunction = &cgEmitUnopTmp; 
    rhsname = (HWord)(arg->Iex.RdTmp.tmp);  

    rhsty = (HWord) bb->tyenv->types[rhsname]; 

    // taking care of extra arguments
    extra_args = VG_(malloc)("extraArgs", sizeof(cgArgs_EmitUnopTmp));
    // getStructOf(bb, extra_args); // store struct into hash table 
    extra_args->theop = theop;
    extra_args->lhsname = lhsname;
    extra_args->argname = rhsname;
    extra_args->tagVal = cgBBCounter;
    extra_args->lhsty = lhsty;
    extra_args->rhsty = rhsty;
    /*
    VG_(printf)("The arguments WHEN THEY ARE INIT are: %d %d %d %d %d %d\n",
		extra_args->theop,
		extra_args->lhsname,
		extra_args->argname,
		extra_args->tagVal,
		extra_args->lhsty,
		extra_args->rhsty);
    */

    /* args = mkIRExprVec_8(
			 mkIRExpr_HWord((HWord)theop),
			 mkIRExpr_HWord(lhsname),
			 mkIRExpr_HWord(rhsname), 
			 mkIRExpr_HWord(cgBBCounter),
			 mkIRExpr_HWord(lhsty), 
			 mkIRExpr_HWord(rhsty),		
			 IRExpr_RdTmp(arg->Iex.RdTmp.tmp),
			 IRExpr_RdTmp(s->Ist.Tmp.tmp)
			 ) 
    */

    args = mkIRExprVec_3(
			 mkIRExpr_HWord( (HWord) extra_args),
			 IRExpr_RdTmp(arg->Iex.RdTmp.tmp),                                                                        
                         IRExpr_RdTmp(s->Ist.WrTmp.tmp) 
			 );
    break; 
      
  case (Iex_Const):
    EmitFunction = &cgEmitUnopConst; 
    rhsval = cgConstToHword(arg); 

     args = mkIRExprVec_6(mkIRExpr_HWord((HWord)theop),
			  mkIRExpr_HWord(lhsname),
			  mkIRExpr_HWord(rhsval), 
			  mkIRExpr_HWord(cgBBCounter),
			  IRExpr_RdTmp(s->Ist.WrTmp.tmp),
			  mkIRExpr_HWord(lhsty)
			 ); 

    break; 
  default:
    vassert(0); 
  } 

  /*
    default:
      VG_(printf)("XXX Unhandled Unop :"); 
      ppIRExpr(rhs); 
      VG_(printf)("\n");
      break; 
  */ 

  if (EmitFunction != NULL && args != NULL)
    {
      d = unsafeIRDirty_0_N(0,
			"unopHandler",
			EmitFunction,
			args
			); 
      setHelperAnns(d); 
      addStmtToIRSB(bb,IRStmt_Dirty(d)); 

    }

  return; 
}

void cgEmit1Uto32(HWord lhsname, HWord argname, HWord tagVal)
{
  // ASSERT ( IF CVxtY THEN CVxtZ = 0hex00000001 ELSE CVxtZ = 0hex00000000 
  //              ENDIF); 

  VG_(printf)("ASSERT(IF ");
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(" THEN ");
  cgPrintTmpName(lhsname,tagVal);
   VG_(printf)(" = 0hex00000001 ELSE "); 
   cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = 0hex00000000 ENDIF);\n"); 
  return; 
}

void cgEmit1Uto8(HWord lhsname, HWord argname, HWord tagVal)
{
  // ASSERT ( IF CVxtY THEN CVxtZ = 0hex00000001 ELSE CVxtZ = 0hex00000000 
  //              ENDIF); 

  VG_(printf)("ASSERT(IF ");
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(" THEN ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)("[7:0]");
  VG_(printf)(" = 0hex01 ELSE "); 
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)("[7:0]");
  VG_(printf)(" = 0hex00 ENDIF);\n"); 
  return; 
}

void cgEmit32to1(HWord lhsname, HWord argname, HWord tagVal)
{
  // select bit [0] of arg
  // ASSERT (IF CVxytZ[0:0] = 0bin1 THEN dst ELSE NOT dst ENDIF)
 
  VG_(printf)("ASSERT(IF ");
  cgPrintTmpName(argname,tagVal);
  VG_(printf)("[0:0] = 0bin1 THEN ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" ELSE NOT ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" ENDIF );\n"); 
  return; 
}


void cgEmit64loto32(HWord lhsname, HWord argname, HWord tagVal)
{
  // ASSERT ( dst = src[31:0] )
  
  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)("[31:0]);\n"); 

}

void cgEmit64HIto32(HWord lhsname, HWord argname, HWord tagVal)
{
  // ASSERT ( dst = src[63:32] )

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)("[63:32]);\n"); 
  return;  
}

void cgEmit8Uto32(HWord lhsname, HWord argname, HWord tagVal)
{
  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(");\n"); 
  return; 
}

void cgEmit16Uto32(HWord lhsname, HWord argname, HWord tagVal)
{
  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = "); 
    cgPrintTmpName(argname,tagVal);
  VG_(printf)(");\n"); 
  return; 

}

void cgEmit16Sto32(HWord lhsname, HWord argname, HWord tagVal)
{

  // is argument always positive? 
  VG_(printf)("XXX QUERY(BVSGT( "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(" , 0hex00000000)); %% TYPE Conversion16Sto32 \n"); 

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = BVSX("); 
    cgPrintTmpName(argname,tagVal);
  VG_(printf)("[15:0],32));\n"); 
  return; 

}


void cgEmit32to8Tmp(HWord lhsname, HWord argname, HWord tagVal)
{

  // is argument always within size of dest? 
  VG_(printf)("XXX QUERY(BVLT( "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(" , 0hex000000FF));  %% TYPE Conversion32to8 \n"); 

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[7:0]");
  VG_(printf)(" = "); 
  cgPrintTmpName(argname,tagVal); 
  VG_(printf)("[7:0]");
  VG_(printf)(");\n"); 

}

void cgEmit32to16Tmp(HWord lhsname, HWord argname, HWord tagVal)
{

  // is argument always within dest size? 
  VG_(printf)("XXX QUERY(BVLT( "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)(" , 0hex0000FFFF)); %% TYPE Conversion32to16 \n");
 
  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[15:0]");
  VG_(printf)(" = "); 
  cgPrintTmpName(argname,tagVal); 
  VG_(printf)("[15:0]", argname);
  VG_(printf)(");\n"); 

}


void cgEmit32to8Const(HWord lhsname, HWord argval, HWord tagVal)
{

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[7:0]");
  VG_(printf)(" = "); 
  VG_(printf)(" 0hex",tagVal); 
  cgPrintHWord(argval,2); 
  VG_(printf)(" );\n"); 

  return; 
}


void cgEmit32to16Const(HWord lhsname, HWord argval, HWord tagVal)
{

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[15:0]");
  VG_(printf)(" = "); 
  VG_(printf)(" 0hex",tagVal); 
  cgPrintHWord(argval,4); 
  VG_(printf)(" );\n"); 

  return; 
}


void cgEmit8Sto32(HWord lhsname, HWord argname, HWord tagVal)
{

  // is argument always positive? 
  // remember, argument is 8-bit!
  VG_(printf)("XXX QUERY(BVSGE( "); 
  cgPrintTmpName(argname,tagVal);
  VG_(printf)("[7:0] , 0hex00));  %% TYPE Conversion8Sto32 \n");

  VG_(printf)("ASSERT(IF "),
  cgPrintTmpName(argname,tagVal);  
  VG_(printf)("[7:7] = 0bin1 THEN ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[31:8] = 0hexFFFFFF");
  VG_(printf)(" ELSE "),
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[31:8] = 0hex000000");
  VG_(printf)(" ENDIF );\n"); 

  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal); 
  VG_(printf)("[7:0]");
  VG_(printf)(" = ");
  cgPrintTmpName(argname,tagVal);  
  VG_(printf)("[7:0]");
  VG_(printf)(");\n"); 

  return; 
}


void cgEmitNot32(HWord lhsname, HWord argname, HWord tagVal)
{
  /* Emit QUERY asking if arg == INT_MIN */
  /* on 32-bit machine, -INT_MIN = INT_MIN */ 
  VG_(printf)("XXX QUERY( NOT(");
  cgPrintTmpName(argname, tagVal); 
  VG_(printf)(" = 0hex80000000 ));  %% TYPE ConversionNot32 \n"); 

  /* Now emit ASSERT for the negation. Fortunately negation is */
  /* built in to STP as the ~ operator.                        */ 
  VG_(printf)("ASSERT(");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" = ~ ");
  cgPrintTmpName(argname,tagVal); 
  VG_(printf)(" );\n");

  return; 
}




void cgEmitNot1(HWord lhsname, HWord argname, HWord tagVal)
{
  // ASSERT ( dst <=> NOT src)
  VG_(printf)("ASSERT( ");
  cgPrintTmpName(lhsname,tagVal);
  VG_(printf)(" <=> "); 
  VG_(printf)(" NOT ");
  cgPrintTmpName(argname,tagVal); 
  VG_(printf)(" );\n");

  return; 
}
