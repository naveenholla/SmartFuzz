/*--------------------------------------------------------------------*/
/*--- CatchConversions                           findRepMov.h      ---*/
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

/* --- Context data structure prototype --- */ 

typedef 
struct __findRepMovContext {
  int * subTmpVars;
  int * cmpZeroTmpVars;
} findRepMovContext; 

/* --- Function prototypes --- */ 

findRepMovContext * createRepMovContext(int numTmpVars); 
void destroyRepMovContext(findRepMovContext * context);
UInt checkTmpRepMov(UInt tmpName, findRepMovContext * context);
void findRepMovIRStmt(IRSB * bb, IRStmt * s, findRepMovContext * context, UInt tagVal);
void findRepMovIRExpr(IRSB * bb, IRStmt * s, findRepMovContext * context, UInt tagVal);
