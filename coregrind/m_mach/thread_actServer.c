/*
 * IDENTIFICATION:
 * stub generated Mon Jun 15 19:50:16 2009
 * with a MiG generated Tue Feb 19 02:01:43 PST 2008 by root@b75.local
 * OPTIONS: 
 */

/* Module thread_act */

#define	__MIG_check__Request__thread_act_subsystem__ 1
#define	__NDR_convert__Request__thread_act_subsystem__ 1

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* typedefs for all requests */

#ifndef __Request__thread_act_subsystem__defined
#define __Request__thread_act_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_terminate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flavor;
		mach_msg_type_number_t old_stateCnt;
	} __Request__act_get_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[144];
	} __Request__act_set_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_state_flavor_t flavor;
		mach_msg_type_number_t old_stateCnt;
	} __Request__thread_get_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_state_flavor_t flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[144];
	} __Request__thread_set_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_suspend_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_resume_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_abort_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_abort_safely_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_depress_abort_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int which_port;
	} __Request__thread_get_special_port_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t special_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int which_port;
	} __Request__thread_set_special_port_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_flavor_t flavor;
		mach_msg_type_number_t thread_info_outCnt;
	} __Request__thread_info_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_mask_t exception_mask;
		exception_behavior_t behavior;
		thread_state_flavor_t new_flavor;
	} __Request__thread_set_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		exception_mask_t exception_mask;
	} __Request__thread_get_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_mask_t exception_mask;
		exception_behavior_t behavior;
		thread_state_flavor_t new_flavor;
	} __Request__thread_swap_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		policy_t policy;
		mach_msg_type_number_t baseCnt;
		integer_t base[5];
		boolean_t set_limit;
	} __Request__thread_policy_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_policy_flavor_t flavor;
		mach_msg_type_number_t policy_infoCnt;
		integer_t policy_info[16];
	} __Request__thread_policy_set_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_policy_flavor_t flavor;
		mach_msg_type_number_t policy_infoCnt;
		boolean_t get_default;
	} __Request__thread_policy_get_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		/* end of the kernel processed data */
	} __Request__thread_sample_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t trace_status;
	} __Request__etap_trace_thread_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_set;
		/* end of the kernel processed data */
	} __Request__thread_assign_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_assign_default_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__thread_get_assignment_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t pset;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		policy_t policy;
		mach_msg_type_number_t baseCnt;
		integer_t base[5];
		mach_msg_type_number_t limitCnt;
		integer_t limit[1];
	} __Request__thread_set_policy_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__thread_act_subsystem__defined */

/* typedefs for all replies */

#ifndef __Reply__thread_act_subsystem__defined
#define __Reply__thread_act_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_terminate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[144];
	} __Reply__act_get_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__act_set_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[144];
	} __Reply__thread_get_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_set_state_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_suspend_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_resume_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_abort_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_abort_safely_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_depress_abort_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t special_port;
		/* end of the kernel processed data */
	} __Reply__thread_get_special_port_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_set_special_port_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t thread_info_outCnt;
		integer_t thread_info_out[12];
	} __Reply__thread_info_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_set_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t old_handlers[32];
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t masksCnt;
		exception_mask_t masks[32];
		exception_behavior_t old_behaviors[32];
		thread_state_flavor_t old_flavors[32];
	} __Reply__thread_get_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t old_handlers[32];
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t masksCnt;
		exception_mask_t masks[32];
		exception_behavior_t old_behaviors[32];
		thread_state_flavor_t old_flavors[32];
	} __Reply__thread_swap_exception_ports_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_policy_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_policy_set_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t policy_infoCnt;
		integer_t policy_info[16];
		boolean_t get_default;
	} __Reply__thread_policy_get_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_sample_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__etap_trace_thread_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_assign_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_assign_default_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t assigned_set;
		/* end of the kernel processed data */
	} __Reply__thread_get_assignment_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__thread_set_policy_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__thread_act_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion__thread_act_subsystem__defined
#define __ReplyUnion__thread_act_subsystem__defined
union __ReplyUnion__thread_act_subsystem {
	__Reply__thread_terminate_t Reply_thread_terminate;
	__Reply__act_get_state_t Reply_act_get_state;
	__Reply__act_set_state_t Reply_act_set_state;
	__Reply__thread_get_state_t Reply_thread_get_state;
	__Reply__thread_set_state_t Reply_thread_set_state;
	__Reply__thread_suspend_t Reply_thread_suspend;
	__Reply__thread_resume_t Reply_thread_resume;
	__Reply__thread_abort_t Reply_thread_abort;
	__Reply__thread_abort_safely_t Reply_thread_abort_safely;
	__Reply__thread_depress_abort_t Reply_thread_depress_abort;
	__Reply__thread_get_special_port_t Reply_thread_get_special_port;
	__Reply__thread_set_special_port_t Reply_thread_set_special_port;
	__Reply__thread_info_t Reply_thread_info;
	__Reply__thread_set_exception_ports_t Reply_thread_set_exception_ports;
	__Reply__thread_get_exception_ports_t Reply_thread_get_exception_ports;
	__Reply__thread_swap_exception_ports_t Reply_thread_swap_exception_ports;
	__Reply__thread_policy_t Reply_thread_policy;
	__Reply__thread_policy_set_t Reply_thread_policy_set;
	__Reply__thread_policy_get_t Reply_thread_policy_get;
	__Reply__thread_sample_t Reply_thread_sample;
	__Reply__etap_trace_thread_t Reply_etap_trace_thread;
	__Reply__thread_assign_t Reply_thread_assign;
	__Reply__thread_assign_default_t Reply_thread_assign_default;
	__Reply__thread_get_assignment_t Reply_thread_get_assignment;
	__Reply__thread_set_policy_t Reply_thread_set_policy;
};
#endif /* __RequestUnion__thread_act_subsystem__defined */
/* Forward Declarations */


mig_internal novalue _Xthread_terminate
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xact_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xact_set_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_set_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_suspend
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_resume
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_abort
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_abort_safely
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_depress_abort
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_get_special_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_set_special_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_info
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_set_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_get_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_swap_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_policy
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_policy_set
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_policy_get
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_sample
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xetap_trace_thread
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_assign
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_assign_default
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_get_assignment
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xthread_set_policy
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_terminate_t__defined)
#define __MIG_check__Request__thread_terminate_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_terminate_t(__attribute__((__unused__)) __Request__thread_terminate_t *In0P)
{

	typedef __Request__thread_terminate_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_terminate_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_terminate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_terminate
(
	thread_act_consume_ref_t target_act
);

/* Routine thread_terminate */
mig_internal novalue _Xthread_terminate
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_terminate_t __Request;
	typedef __Reply__thread_terminate_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_terminate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_terminate_t__defined */

	__DeclareRcvRpc(3600, "thread_terminate")
	__BeforeRcvRpc(3600, "thread_terminate")

#if	defined(__MIG_check__Request__thread_terminate_t__defined)
	check_result = __MIG_check__Request__thread_terminate_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_terminate_t__defined) */

	OutP->RetCode = thread_terminate(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3600, "thread_terminate")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__act_get_state_t__defined)
#define __MIG_check__Request__act_get_state_t__defined
#ifndef __NDR_convert__int_rep__Request__act_get_state_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__act_get_state_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__act_get_state_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__act_get_state_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__act_get_state_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__act_get_state_t__flavor__defined */


mig_internal kern_return_t __MIG_check__Request__act_get_state_t(__attribute__((__unused__)) __Request__act_get_state_t *In0P)
{

	typedef __Request__act_get_state_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__act_get_state_t__flavor__defined)
		__NDR_convert__int_rep__Request__act_get_state_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__act_get_state_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined)
		__NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt(&In0P->old_stateCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__act_get_state_t__old_stateCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__act_get_state_t__flavor__defined)
		__NDR_convert__char_rep__Request__act_get_state_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__act_get_state_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__act_get_state_t__flavor__defined)
		__NDR_convert__float_rep__Request__act_get_state_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__act_get_state_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__act_get_state_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine act_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t act_get_state
(
	thread_act_t target_act,
	int flavor,
	thread_state_t old_state,
	mach_msg_type_number_t *old_stateCnt
);

/* Routine act_get_state */
mig_internal novalue _Xact_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__act_get_state_t __Request;
	typedef __Reply__act_get_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__act_get_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__act_get_state_t__defined */

	__DeclareRcvRpc(3601, "act_get_state")
	__BeforeRcvRpc(3601, "act_get_state")

#if	defined(__MIG_check__Request__act_get_state_t__defined)
	check_result = __MIG_check__Request__act_get_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__act_get_state_t__defined) */

	OutP->old_stateCnt = 144;
	if (In0P->old_stateCnt < OutP->old_stateCnt)
		OutP->old_stateCnt = In0P->old_stateCnt;

	OutP->RetCode = act_get_state(In0P->Head.msgh_request_port, In0P->flavor, OutP->old_state, &OutP->old_stateCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 576) + (((4 * OutP->old_stateCnt)));

	__AfterRcvRpc(3601, "act_get_state")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__act_set_state_t__defined)
#define __MIG_check__Request__act_set_state_t__defined
#ifndef __NDR_convert__int_rep__Request__act_set_state_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__act_set_state_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__int_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__int_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__natural_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__act_set_state_t__new_state__defined */

#ifndef __NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined
#define	__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__act_set_state_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__act_set_state_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__char_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__char_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__natural_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__act_set_state_t__new_state__defined */

#ifndef __NDR_convert__float_rep__Request__act_set_state_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__act_set_state_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__float_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__float_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__natural_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__act_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__act_set_state_t__new_state__defined */


mig_internal kern_return_t __MIG_check__Request__act_set_state_t(__attribute__((__unused__)) __Request__act_set_state_t *In0P)
{

	typedef __Request__act_set_state_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 576)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt(&In0P->new_stateCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 576) + ((4 * In0P->new_stateCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined) || \
	defined(__NDR_convert__int_rep__Request__act_set_state_t__new_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__act_set_state_t__flavor__defined)
		__NDR_convert__int_rep__Request__act_set_state_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__act_set_state_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__act_set_state_t__new_state__defined)
		__NDR_convert__int_rep__Request__act_set_state_t__new_state(&In0P->new_state, In0P->NDR.int_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__int_rep__Request__act_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined) || \
	defined(__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__act_set_state_t__flavor__defined)
		__NDR_convert__char_rep__Request__act_set_state_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__act_set_state_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__act_set_state_t__new_state__defined)
		__NDR_convert__char_rep__Request__act_set_state_t__new_state(&In0P->new_state, In0P->NDR.char_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__char_rep__Request__act_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined) || \
	defined(__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__act_set_state_t__flavor__defined)
		__NDR_convert__float_rep__Request__act_set_state_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__act_set_state_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__act_set_state_t__new_state__defined)
		__NDR_convert__float_rep__Request__act_set_state_t__new_state(&In0P->new_state, In0P->NDR.float_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__float_rep__Request__act_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__act_set_state_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine act_set_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t act_set_state
(
	thread_act_t target_act,
	int flavor,
	thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine act_set_state */
mig_internal novalue _Xact_set_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[144];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__act_set_state_t __Request;
	typedef __Reply__act_set_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__act_set_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__act_set_state_t__defined */

	__DeclareRcvRpc(3602, "act_set_state")
	__BeforeRcvRpc(3602, "act_set_state")

#if	defined(__MIG_check__Request__act_set_state_t__defined)
	check_result = __MIG_check__Request__act_set_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__act_set_state_t__defined) */

	OutP->RetCode = act_set_state(In0P->Head.msgh_request_port, In0P->flavor, In0P->new_state, In0P->new_stateCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3602, "act_set_state")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_get_state_t__defined)
#define __MIG_check__Request__thread_get_state_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_get_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined */


mig_internal kern_return_t __MIG_check__Request__thread_get_state_t(__attribute__((__unused__)) __Request__thread_get_state_t *In0P)
{

	typedef __Request__thread_get_state_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined)
		__NDR_convert__int_rep__Request__thread_get_state_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_get_state_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined)
		__NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt(&In0P->old_stateCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_get_state_t__old_stateCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined)
		__NDR_convert__char_rep__Request__thread_get_state_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_get_state_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined)
		__NDR_convert__float_rep__Request__thread_get_state_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_get_state_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_get_state_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_get_state
(
	thread_act_t target_act,
	thread_state_flavor_t flavor,
	thread_state_t old_state,
	mach_msg_type_number_t *old_stateCnt
);

/* Routine thread_get_state */
mig_internal novalue _Xthread_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_state_flavor_t flavor;
		mach_msg_type_number_t old_stateCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_get_state_t __Request;
	typedef __Reply__thread_get_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_get_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_get_state_t__defined */

	__DeclareRcvRpc(3603, "thread_get_state")
	__BeforeRcvRpc(3603, "thread_get_state")

#if	defined(__MIG_check__Request__thread_get_state_t__defined)
	check_result = __MIG_check__Request__thread_get_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_get_state_t__defined) */

	OutP->old_stateCnt = 144;
	if (In0P->old_stateCnt < OutP->old_stateCnt)
		OutP->old_stateCnt = In0P->old_stateCnt;

	OutP->RetCode = thread_get_state(In0P->Head.msgh_request_port, In0P->flavor, OutP->old_state, &OutP->old_stateCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 576) + (((4 * OutP->old_stateCnt)));

	__AfterRcvRpc(3603, "thread_get_state")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_set_state_t__defined)
#define __MIG_check__Request__thread_set_state_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__int_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__int_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__char_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__char_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__char_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__float_rep__thread_act__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__float_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__thread_act__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined
#define	__NDR_convert__float_rep__Request__thread_set_state_t__new_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined */


mig_internal kern_return_t __MIG_check__Request__thread_set_state_t(__attribute__((__unused__)) __Request__thread_set_state_t *In0P)
{

	typedef __Request__thread_set_state_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 576)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt(&In0P->new_stateCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 576) + ((4 * In0P->new_stateCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_state_t__new_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined)
		__NDR_convert__int_rep__Request__thread_set_state_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_state_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined)
		__NDR_convert__int_rep__Request__thread_set_state_t__new_state(&In0P->new_state, In0P->NDR.int_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__int_rep__Request__thread_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined)
		__NDR_convert__char_rep__Request__thread_set_state_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_state_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined)
		__NDR_convert__char_rep__Request__thread_set_state_t__new_state(&In0P->new_state, In0P->NDR.char_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__char_rep__Request__thread_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined)
		__NDR_convert__float_rep__Request__thread_set_state_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_state_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined)
		__NDR_convert__float_rep__Request__thread_set_state_t__new_state(&In0P->new_state, In0P->NDR.float_rep, In0P->new_stateCnt);
#endif	/* __NDR_convert__float_rep__Request__thread_set_state_t__new_state__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_set_state_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_set_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_set_state
(
	thread_act_t target_act,
	thread_state_flavor_t flavor,
	thread_state_t new_state,
	mach_msg_type_number_t new_stateCnt
);

/* Routine thread_set_state */
mig_internal novalue _Xthread_set_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_state_flavor_t flavor;
		mach_msg_type_number_t new_stateCnt;
		natural_t new_state[144];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_set_state_t __Request;
	typedef __Reply__thread_set_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_set_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_set_state_t__defined */

	__DeclareRcvRpc(3604, "thread_set_state")
	__BeforeRcvRpc(3604, "thread_set_state")

#if	defined(__MIG_check__Request__thread_set_state_t__defined)
	check_result = __MIG_check__Request__thread_set_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_set_state_t__defined) */

	OutP->RetCode = thread_set_state(In0P->Head.msgh_request_port, In0P->flavor, In0P->new_state, In0P->new_stateCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3604, "thread_set_state")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_suspend_t__defined)
#define __MIG_check__Request__thread_suspend_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_suspend_t(__attribute__((__unused__)) __Request__thread_suspend_t *In0P)
{

	typedef __Request__thread_suspend_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_suspend_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_suspend */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_suspend
(
	thread_act_t target_act
);

/* Routine thread_suspend */
mig_internal novalue _Xthread_suspend
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_suspend_t __Request;
	typedef __Reply__thread_suspend_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_suspend_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_suspend_t__defined */

	__DeclareRcvRpc(3605, "thread_suspend")
	__BeforeRcvRpc(3605, "thread_suspend")

#if	defined(__MIG_check__Request__thread_suspend_t__defined)
	check_result = __MIG_check__Request__thread_suspend_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_suspend_t__defined) */

	OutP->RetCode = thread_suspend(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3605, "thread_suspend")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_resume_t__defined)
#define __MIG_check__Request__thread_resume_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_resume_t(__attribute__((__unused__)) __Request__thread_resume_t *In0P)
{

	typedef __Request__thread_resume_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_resume_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_resume */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_resume
(
	thread_act_t target_act
);

/* Routine thread_resume */
mig_internal novalue _Xthread_resume
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_resume_t __Request;
	typedef __Reply__thread_resume_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_resume_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_resume_t__defined */

	__DeclareRcvRpc(3606, "thread_resume")
	__BeforeRcvRpc(3606, "thread_resume")

#if	defined(__MIG_check__Request__thread_resume_t__defined)
	check_result = __MIG_check__Request__thread_resume_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_resume_t__defined) */

	OutP->RetCode = thread_resume(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3606, "thread_resume")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_abort_t__defined)
#define __MIG_check__Request__thread_abort_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_abort_t(__attribute__((__unused__)) __Request__thread_abort_t *In0P)
{

	typedef __Request__thread_abort_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_abort_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_abort
(
	thread_act_t target_act
);

/* Routine thread_abort */
mig_internal novalue _Xthread_abort
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_abort_t __Request;
	typedef __Reply__thread_abort_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_abort_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_abort_t__defined */

	__DeclareRcvRpc(3607, "thread_abort")
	__BeforeRcvRpc(3607, "thread_abort")

#if	defined(__MIG_check__Request__thread_abort_t__defined)
	check_result = __MIG_check__Request__thread_abort_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_abort_t__defined) */

	OutP->RetCode = thread_abort(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3607, "thread_abort")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_abort_safely_t__defined)
#define __MIG_check__Request__thread_abort_safely_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_abort_safely_t(__attribute__((__unused__)) __Request__thread_abort_safely_t *In0P)
{

	typedef __Request__thread_abort_safely_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_abort_safely_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_abort_safely */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_abort_safely
(
	thread_act_t target_act
);

/* Routine thread_abort_safely */
mig_internal novalue _Xthread_abort_safely
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_abort_safely_t __Request;
	typedef __Reply__thread_abort_safely_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_abort_safely_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_abort_safely_t__defined */

	__DeclareRcvRpc(3608, "thread_abort_safely")
	__BeforeRcvRpc(3608, "thread_abort_safely")

#if	defined(__MIG_check__Request__thread_abort_safely_t__defined)
	check_result = __MIG_check__Request__thread_abort_safely_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_abort_safely_t__defined) */

	OutP->RetCode = thread_abort_safely(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3608, "thread_abort_safely")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_depress_abort_t__defined)
#define __MIG_check__Request__thread_depress_abort_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_depress_abort_t(__attribute__((__unused__)) __Request__thread_depress_abort_t *In0P)
{

	typedef __Request__thread_depress_abort_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_depress_abort_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_depress_abort */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_depress_abort
(
	thread_act_t thread
);

/* Routine thread_depress_abort */
mig_internal novalue _Xthread_depress_abort
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_depress_abort_t __Request;
	typedef __Reply__thread_depress_abort_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_depress_abort_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_depress_abort_t__defined */

	__DeclareRcvRpc(3609, "thread_depress_abort")
	__BeforeRcvRpc(3609, "thread_depress_abort")

#if	defined(__MIG_check__Request__thread_depress_abort_t__defined)
	check_result = __MIG_check__Request__thread_depress_abort_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_depress_abort_t__defined) */

	OutP->RetCode = thread_depress_abort(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3609, "thread_depress_abort")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_get_special_port_t__defined)
#define __MIG_check__Request__thread_get_special_port_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined
#if	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined */

#ifndef __NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined
#if	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined */

#ifndef __NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined
#if	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined */


mig_internal kern_return_t __MIG_check__Request__thread_get_special_port_t(__attribute__((__unused__)) __Request__thread_get_special_port_t *In0P)
{

	typedef __Request__thread_get_special_port_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined)
		__NDR_convert__int_rep__Request__thread_get_special_port_t__which_port(&In0P->which_port, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_get_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined)
		__NDR_convert__char_rep__Request__thread_get_special_port_t__which_port(&In0P->which_port, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_get_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined)
		__NDR_convert__float_rep__Request__thread_get_special_port_t__which_port(&In0P->which_port, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_get_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_get_special_port_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_get_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_get_special_port
(
	thread_act_t thr_act,
	int which_port,
	mach_port_t *special_port
);

/* Routine thread_get_special_port */
mig_internal novalue _Xthread_get_special_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int which_port;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_get_special_port_t __Request;
	typedef __Reply__thread_get_special_port_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_get_special_port_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_get_special_port_t__defined */

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t special_portTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	kern_return_t RetCode;
	__DeclareRcvRpc(3610, "thread_get_special_port")
	__BeforeRcvRpc(3610, "thread_get_special_port")

#if	defined(__MIG_check__Request__thread_get_special_port_t__defined)
	check_result = __MIG_check__Request__thread_get_special_port_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_get_special_port_t__defined) */

#if	UseStaticTemplates
	OutP->special_port = special_portTemplate;
#else	/* UseStaticTemplates */
	OutP->special_port.disposition = 19;
	OutP->special_port.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = thread_get_special_port(In0P->Head.msgh_request_port, In0P->which_port, &OutP->special_port.name);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}

	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(3610, "thread_get_special_port")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_set_special_port_t__defined)
#define __MIG_check__Request__thread_set_special_port_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined
#if	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined
#if	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined
#if	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined
#define	__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined */


mig_internal kern_return_t __MIG_check__Request__thread_set_special_port_t(__attribute__((__unused__)) __Request__thread_set_special_port_t *In0P)
{

	typedef __Request__thread_set_special_port_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->special_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->special_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined)
		__NDR_convert__int_rep__Request__thread_set_special_port_t__which_port(&In0P->which_port, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined)
		__NDR_convert__char_rep__Request__thread_set_special_port_t__which_port(&In0P->which_port, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined)
		__NDR_convert__float_rep__Request__thread_set_special_port_t__which_port(&In0P->which_port, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_special_port_t__which_port__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_set_special_port_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_set_special_port */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_set_special_port
(
	thread_act_t thr_act,
	int which_port,
	mach_port_t special_port
);

/* Routine thread_set_special_port */
mig_internal novalue _Xthread_set_special_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t special_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int which_port;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_set_special_port_t __Request;
	typedef __Reply__thread_set_special_port_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_set_special_port_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_set_special_port_t__defined */

	__DeclareRcvRpc(3611, "thread_set_special_port")
	__BeforeRcvRpc(3611, "thread_set_special_port")

#if	defined(__MIG_check__Request__thread_set_special_port_t__defined)
	check_result = __MIG_check__Request__thread_set_special_port_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_set_special_port_t__defined) */

	OutP->RetCode = thread_set_special_port(In0P->Head.msgh_request_port, In0P->which_port, In0P->special_port.name);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3611, "thread_set_special_port")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_info_t__defined)
#define __MIG_check__Request__thread_info_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_info_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined
#define	__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined */

#ifndef __NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_info_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_flavor_t((thread_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_info_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_info_t__flavor__defined */


mig_internal kern_return_t __MIG_check__Request__thread_info_t(__attribute__((__unused__)) __Request__thread_info_t *In0P)
{

	typedef __Request__thread_info_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_info_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_info_t__flavor__defined)
		__NDR_convert__int_rep__Request__thread_info_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_info_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined)
		__NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt(&In0P->thread_info_outCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_info_t__thread_info_outCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_info_t__flavor__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_info_t__flavor__defined)
		__NDR_convert__char_rep__Request__thread_info_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_info_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_info_t__flavor__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_info_t__flavor__defined)
		__NDR_convert__float_rep__Request__thread_info_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_info_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_info_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_info
(
	thread_act_t target_act,
	thread_flavor_t flavor,
	thread_info_t thread_info_out,
	mach_msg_type_number_t *thread_info_outCnt
);

/* Routine thread_info */
mig_internal novalue _Xthread_info
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_flavor_t flavor;
		mach_msg_type_number_t thread_info_outCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_info_t __Request;
	typedef __Reply__thread_info_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_info_t__defined */

	__DeclareRcvRpc(3612, "thread_info")
	__BeforeRcvRpc(3612, "thread_info")

#if	defined(__MIG_check__Request__thread_info_t__defined)
	check_result = __MIG_check__Request__thread_info_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_info_t__defined) */

	OutP->thread_info_outCnt = 12;
	if (In0P->thread_info_outCnt < OutP->thread_info_outCnt)
		OutP->thread_info_outCnt = In0P->thread_info_outCnt;

	OutP->RetCode = thread_info(In0P->Head.msgh_request_port, In0P->flavor, OutP->thread_info_out, &OutP->thread_info_outCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 48) + (((4 * OutP->thread_info_outCnt)));

	__AfterRcvRpc(3612, "thread_info")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_set_exception_ports_t__defined)
#define __MIG_check__Request__thread_set_exception_ports_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__int_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__int_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_behavior_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__char_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__char_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_behavior_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__float_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__float_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_behavior_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined */


mig_internal kern_return_t __MIG_check__Request__thread_set_exception_ports_t(__attribute__((__unused__)) __Request__thread_set_exception_ports_t *In0P)
{

	typedef __Request__thread_set_exception_ports_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->new_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->new_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined)
		__NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined)
		__NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
		__NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined)
		__NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined)
		__NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
		__NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined)
		__NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined)
		__NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined)
		__NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_set_exception_ports_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_set_exception_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_set_exception_ports
(
	thread_act_t thread,
	exception_mask_t exception_mask,
	mach_port_t new_port,
	exception_behavior_t behavior,
	thread_state_flavor_t new_flavor
);

/* Routine thread_set_exception_ports */
mig_internal novalue _Xthread_set_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_mask_t exception_mask;
		exception_behavior_t behavior;
		thread_state_flavor_t new_flavor;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_set_exception_ports_t __Request;
	typedef __Reply__thread_set_exception_ports_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_set_exception_ports_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_set_exception_ports_t__defined */

	__DeclareRcvRpc(3613, "thread_set_exception_ports")
	__BeforeRcvRpc(3613, "thread_set_exception_ports")

#if	defined(__MIG_check__Request__thread_set_exception_ports_t__defined)
	check_result = __MIG_check__Request__thread_set_exception_ports_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_set_exception_ports_t__defined) */

	OutP->RetCode = thread_set_exception_ports(In0P->Head.msgh_request_port, In0P->exception_mask, In0P->new_port.name, In0P->behavior, In0P->new_flavor);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3613, "thread_set_exception_ports")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_get_exception_ports_t__defined)
#define __MIG_check__Request__thread_get_exception_ports_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__int_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__char_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__float_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined */


mig_internal kern_return_t __MIG_check__Request__thread_get_exception_ports_t(__attribute__((__unused__)) __Request__thread_get_exception_ports_t *In0P)
{

	typedef __Request__thread_get_exception_ports_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
		__NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_get_exception_ports_t__exception_mask__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
		__NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_get_exception_ports_t__exception_mask__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined)
		__NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_get_exception_ports_t__exception_mask__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_get_exception_ports_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_get_exception_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_get_exception_ports
(
	thread_act_t thread,
	exception_mask_t exception_mask,
	exception_mask_array_t masks,
	mach_msg_type_number_t *masksCnt,
	exception_handler_array_t old_handlers,
	exception_behavior_array_t old_behaviors,
	exception_flavor_array_t old_flavors
);

/* Routine thread_get_exception_ports */
mig_internal novalue _Xthread_get_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		exception_mask_t exception_mask;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_get_exception_ports_t __Request;
	typedef __Reply__thread_get_exception_ports_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;

#ifdef	__MIG_check__Request__thread_get_exception_ports_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_get_exception_ports_t__defined */

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t old_handlersTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	kern_return_t RetCode;
	mach_msg_type_number_t masksCnt;
	exception_handler_t old_handlers[32];
	exception_behavior_t old_behaviors[32];
	thread_state_flavor_t old_flavors[32];

	__DeclareRcvRpc(3614, "thread_get_exception_ports")
	__BeforeRcvRpc(3614, "thread_get_exception_ports")

#if	defined(__MIG_check__Request__thread_get_exception_ports_t__defined)
	check_result = __MIG_check__Request__thread_get_exception_ports_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_get_exception_ports_t__defined) */

	{
	    register	mach_msg_port_descriptor_t	*ptr;
	    register int	i;

	    ptr = &OutP->old_handlers[0];
	    for (i = 0; i < 32; ptr++, i++) {
#if	UseStaticTemplates
		*ptr = old_handlersTemplate;
#else	/* UseStaticTemplates */
		ptr->name = MACH_PORT_NULL;
		ptr->disposition = 19;
		ptr->type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */
	    }
	}


	masksCnt = 32;

	RetCode = thread_get_exception_ports(In0P->Head.msgh_request_port, In0P->exception_mask, OutP->masks, &masksCnt, old_handlers, old_behaviors, old_flavors);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
	{
	    register	mach_msg_port_descriptor_t	*ptr;
	    register int	i, j;

	    ptr = &OutP->old_handlers[0];
	    j = min(32, masksCnt);
	    for (i = 0; i < j; ptr++, i++) {
		ptr->name = old_handlers[i];
	    }
	}


	OutP->NDR = NDR_record;

	OutP->masksCnt = masksCnt;
	msgh_size_delta = ((4 * masksCnt));
	msgh_size = (mach_msg_size_t)(sizeof(Reply) - 384) + msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 128);
	(void)memcpy((char *) OutP->old_behaviors, (const char *) old_behaviors, 4 * masksCnt);
	msgh_size_delta = ((4 * masksCnt));
	msgh_size += msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 128);
	(void)memcpy((char *) OutP->old_flavors, (const char *) old_flavors, 4 * masksCnt);
	msgh_size += ((4 * masksCnt));

	OutP = (Reply *) OutHeadP;
	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = msgh_size;
	OutP->msgh_body.msgh_descriptor_count = 32;
	__AfterRcvRpc(3614, "thread_get_exception_ports")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_swap_exception_ports_t__defined)
#define __MIG_check__Request__thread_swap_exception_ports_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__int_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_mask_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__int_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_behavior_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */

#ifndef __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__char_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_mask_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__char_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_behavior_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#if	defined(__NDR_convert__float_rep__thread_act__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_mask_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__exception_mask_t((exception_mask_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */

#ifndef __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#if	defined(__NDR_convert__float_rep__thread_act__exception_behavior_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_behavior_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__exception_behavior_t((exception_behavior_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined */

#ifndef __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_state_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_state_flavor_t((thread_state_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined
#define	__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */


mig_internal kern_return_t __MIG_check__Request__thread_swap_exception_ports_t(__attribute__((__unused__)) __Request__thread_swap_exception_ports_t *In0P)
{

	typedef __Request__thread_swap_exception_ports_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->new_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->new_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined)
		__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined)
		__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
		__NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined)
		__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined)
		__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
		__NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined)
		__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask(&In0P->exception_mask, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__exception_mask__defined */
#if defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined)
		__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior(&In0P->behavior, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__behavior__defined */
#if defined(__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined)
		__NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor(&In0P->new_flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_swap_exception_ports_t__new_flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_swap_exception_ports_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_swap_exception_ports */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_swap_exception_ports
(
	thread_act_t thread,
	exception_mask_t exception_mask,
	mach_port_t new_port,
	exception_behavior_t behavior,
	thread_state_flavor_t new_flavor,
	exception_mask_array_t masks,
	mach_msg_type_number_t *masksCnt,
	exception_handler_array_t old_handlers,
	exception_behavior_array_t old_behaviors,
	exception_flavor_array_t old_flavors
);

/* Routine thread_swap_exception_ports */
mig_internal novalue _Xthread_swap_exception_ports
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_mask_t exception_mask;
		exception_behavior_t behavior;
		thread_state_flavor_t new_flavor;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_swap_exception_ports_t __Request;
	typedef __Reply__thread_swap_exception_ports_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;

#ifdef	__MIG_check__Request__thread_swap_exception_ports_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_swap_exception_ports_t__defined */

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t old_handlersTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	kern_return_t RetCode;
	mach_msg_type_number_t masksCnt;
	exception_handler_t old_handlers[32];
	exception_behavior_t old_behaviors[32];
	thread_state_flavor_t old_flavors[32];

	__DeclareRcvRpc(3615, "thread_swap_exception_ports")
	__BeforeRcvRpc(3615, "thread_swap_exception_ports")

#if	defined(__MIG_check__Request__thread_swap_exception_ports_t__defined)
	check_result = __MIG_check__Request__thread_swap_exception_ports_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_swap_exception_ports_t__defined) */

	{
	    register	mach_msg_port_descriptor_t	*ptr;
	    register int	i;

	    ptr = &OutP->old_handlers[0];
	    for (i = 0; i < 32; ptr++, i++) {
#if	UseStaticTemplates
		*ptr = old_handlersTemplate;
#else	/* UseStaticTemplates */
		ptr->name = MACH_PORT_NULL;
		ptr->disposition = 19;
		ptr->type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */
	    }
	}


	masksCnt = 32;

	RetCode = thread_swap_exception_ports(In0P->Head.msgh_request_port, In0P->exception_mask, In0P->new_port.name, In0P->behavior, In0P->new_flavor, OutP->masks, &masksCnt, old_handlers, old_behaviors, old_flavors);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
	{
	    register	mach_msg_port_descriptor_t	*ptr;
	    register int	i, j;

	    ptr = &OutP->old_handlers[0];
	    j = min(32, masksCnt);
	    for (i = 0; i < j; ptr++, i++) {
		ptr->name = old_handlers[i];
	    }
	}


	OutP->NDR = NDR_record;

	OutP->masksCnt = masksCnt;
	msgh_size_delta = ((4 * masksCnt));
	msgh_size = (mach_msg_size_t)(sizeof(Reply) - 384) + msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 128);
	(void)memcpy((char *) OutP->old_behaviors, (const char *) old_behaviors, 4 * masksCnt);
	msgh_size_delta = ((4 * masksCnt));
	msgh_size += msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 128);
	(void)memcpy((char *) OutP->old_flavors, (const char *) old_flavors, 4 * masksCnt);
	msgh_size += ((4 * masksCnt));

	OutP = (Reply *) OutHeadP;
	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = msgh_size;
	OutP->msgh_body.msgh_descriptor_count = 32;
	__AfterRcvRpc(3615, "thread_swap_exception_ports")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_policy_t__defined)
#define __MIG_check__Request__thread_policy_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#if	defined(__NDR_convert__int_rep__thread_act__policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_t__policy__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_t__base__defined
#if	defined(__NDR_convert__int_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__int_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__policy_base_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__int_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_t__base__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__baseCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__baseCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined
#if	defined(__NDR_convert__int_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__int_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__int_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#if	defined(__NDR_convert__char_rep__thread_act__policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_t__policy__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_t__base__defined
#if	defined(__NDR_convert__char_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__char_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__policy_base_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__char_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_t__base__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined
#if	defined(__NDR_convert__char_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__char_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__char_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#if	defined(__NDR_convert__float_rep__thread_act__policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__policy(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_t__policy__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_t__base__defined
#if	defined(__NDR_convert__float_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__float_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__policy_base_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__float_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_t__base__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined
#if	defined(__NDR_convert__float_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__float_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined
#define	__NDR_convert__float_rep__Request__thread_policy_t__set_limit(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined */


mig_internal kern_return_t __MIG_check__Request__thread_policy_t(__attribute__((__unused__)) __Request__thread_policy_t *In0P, __attribute__((__unused__)) __Request__thread_policy_t **In1PP)
{

	typedef __Request__thread_policy_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 20)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__thread_policy_t__baseCnt(&In0P->baseCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined */
	msgh_size_delta = (4 * In0P->baseCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 20) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 20);

#if	defined(__NDR_convert__int_rep__Request__thread_policy_t__policy__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_t__base__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_t__baseCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_policy_t__policy__defined)
		__NDR_convert__int_rep__Request__thread_policy_t__policy(&In0P->policy, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_t__policy__defined */
#if defined(__NDR_convert__int_rep__Request__thread_policy_t__base__defined)
		__NDR_convert__int_rep__Request__thread_policy_t__base(&In0P->base, In0P->NDR.int_rep, In0P->baseCnt);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_t__base__defined */
#if defined(__NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined)
		__NDR_convert__int_rep__Request__thread_policy_t__set_limit(&In1P->set_limit, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_t__set_limit__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_policy_t__policy__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_policy_t__base__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_policy_t__policy__defined)
		__NDR_convert__char_rep__Request__thread_policy_t__policy(&In0P->policy, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_t__policy__defined */
#if defined(__NDR_convert__char_rep__Request__thread_policy_t__base__defined)
		__NDR_convert__char_rep__Request__thread_policy_t__base(&In0P->base, In0P->NDR.char_rep, In0P->baseCnt);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_t__base__defined */
#if defined(__NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined)
		__NDR_convert__char_rep__Request__thread_policy_t__set_limit(&In1P->set_limit, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_t__set_limit__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_policy_t__policy__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_policy_t__base__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_policy_t__policy__defined)
		__NDR_convert__float_rep__Request__thread_policy_t__policy(&In0P->policy, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_t__policy__defined */
#if defined(__NDR_convert__float_rep__Request__thread_policy_t__base__defined)
		__NDR_convert__float_rep__Request__thread_policy_t__base(&In0P->base, In0P->NDR.float_rep, In0P->baseCnt);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_t__base__defined */
#if defined(__NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined)
		__NDR_convert__float_rep__Request__thread_policy_t__set_limit(&In1P->set_limit, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_t__set_limit__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_policy_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_policy */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_policy
(
	thread_act_t thr_act,
	policy_t policy,
	policy_base_t base,
	mach_msg_type_number_t baseCnt,
	boolean_t set_limit
);

/* Routine thread_policy */
mig_internal novalue _Xthread_policy
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		policy_t policy;
		mach_msg_type_number_t baseCnt;
		integer_t base[5];
		boolean_t set_limit;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_policy_t __Request;
	typedef __Reply__thread_policy_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_policy_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_policy_t__defined */

	__DeclareRcvRpc(3616, "thread_policy")
	__BeforeRcvRpc(3616, "thread_policy")

#if	defined(__MIG_check__Request__thread_policy_t__defined)
	check_result = __MIG_check__Request__thread_policy_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_policy_t__defined) */

	OutP->RetCode = thread_policy(In0P->Head.msgh_request_port, In0P->policy, In0P->base, In0P->baseCnt, In1P->set_limit);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3616, "thread_policy")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_policy_set_t__defined)
#define __MIG_check__Request__thread_policy_set_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__int_rep__thread_act__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__int_rep__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__char_rep__thread_act__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__char_rep__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__float_rep__thread_act__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__float_rep__thread_policy_t((thread_policy_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined
#define	__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined */


mig_internal kern_return_t __MIG_check__Request__thread_policy_set_t(__attribute__((__unused__)) __Request__thread_policy_set_t *In0P)
{

	typedef __Request__thread_policy_set_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 64)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt(&In0P->policy_infoCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 64) + ((4 * In0P->policy_infoCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_set_t__policy_infoCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined)
		__NDR_convert__int_rep__Request__thread_policy_set_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_set_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined)
		__NDR_convert__int_rep__Request__thread_policy_set_t__policy_info(&In0P->policy_info, In0P->NDR.int_rep, In0P->policy_infoCnt);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_set_t__policy_info__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined)
		__NDR_convert__char_rep__Request__thread_policy_set_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_set_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined)
		__NDR_convert__char_rep__Request__thread_policy_set_t__policy_info(&In0P->policy_info, In0P->NDR.char_rep, In0P->policy_infoCnt);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_set_t__policy_info__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined)
		__NDR_convert__float_rep__Request__thread_policy_set_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_set_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined)
		__NDR_convert__float_rep__Request__thread_policy_set_t__policy_info(&In0P->policy_info, In0P->NDR.float_rep, In0P->policy_infoCnt);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_set_t__policy_info__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_policy_set_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_policy_set */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_policy_set
(
	thread_act_t thread,
	thread_policy_flavor_t flavor,
	thread_policy_t policy_info,
	mach_msg_type_number_t policy_infoCnt
);

/* Routine thread_policy_set */
mig_internal novalue _Xthread_policy_set
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_policy_flavor_t flavor;
		mach_msg_type_number_t policy_infoCnt;
		integer_t policy_info[16];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_policy_set_t __Request;
	typedef __Reply__thread_policy_set_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_policy_set_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_policy_set_t__defined */

	__DeclareRcvRpc(3617, "thread_policy_set")
	__BeforeRcvRpc(3617, "thread_policy_set")

#if	defined(__MIG_check__Request__thread_policy_set_t__defined)
	check_result = __MIG_check__Request__thread_policy_set_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_policy_set_t__defined) */

	OutP->RetCode = thread_policy_set(In0P->Head.msgh_request_port, In0P->flavor, In0P->policy_info, In0P->policy_infoCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3617, "thread_policy_set")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_policy_get_t__defined)
#define __MIG_check__Request__thread_policy_get_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#if	defined(__NDR_convert__int_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined */

#ifndef __NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined
#if	defined(__NDR_convert__int_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__int_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__int_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#if	defined(__NDR_convert__char_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined
#if	defined(__NDR_convert__char_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__char_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__char_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#if	defined(__NDR_convert__float_rep__thread_act__thread_policy_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_policy_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_policy_flavor_t((thread_policy_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__thread_act__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined
#if	defined(__NDR_convert__float_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__float_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined
#define	__NDR_convert__float_rep__Request__thread_policy_get_t__get_default(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined */


mig_internal kern_return_t __MIG_check__Request__thread_policy_get_t(__attribute__((__unused__)) __Request__thread_policy_get_t *In0P)
{

	typedef __Request__thread_policy_get_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined)
		__NDR_convert__int_rep__Request__thread_policy_get_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_get_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined)
		__NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt(&In0P->policy_infoCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_get_t__policy_infoCnt__defined */
#if defined(__NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined)
		__NDR_convert__int_rep__Request__thread_policy_get_t__get_default(&In0P->get_default, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_policy_get_t__get_default__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined)
		__NDR_convert__char_rep__Request__thread_policy_get_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_get_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined)
		__NDR_convert__char_rep__Request__thread_policy_get_t__get_default(&In0P->get_default, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_policy_get_t__get_default__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined)
		__NDR_convert__float_rep__Request__thread_policy_get_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_get_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined)
		__NDR_convert__float_rep__Request__thread_policy_get_t__get_default(&In0P->get_default, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_policy_get_t__get_default__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_policy_get_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_policy_get */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_policy_get
(
	thread_act_t thread,
	thread_policy_flavor_t flavor,
	thread_policy_t policy_info,
	mach_msg_type_number_t *policy_infoCnt,
	boolean_t *get_default
);

/* Routine thread_policy_get */
mig_internal novalue _Xthread_policy_get
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		thread_policy_flavor_t flavor;
		mach_msg_type_number_t policy_infoCnt;
		boolean_t get_default;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_policy_get_t __Request;
	typedef __Reply__thread_policy_get_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
	unsigned int msgh_size_delta;

#ifdef	__MIG_check__Request__thread_policy_get_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_policy_get_t__defined */

	__DeclareRcvRpc(3618, "thread_policy_get")
	__BeforeRcvRpc(3618, "thread_policy_get")

#if	defined(__MIG_check__Request__thread_policy_get_t__defined)
	check_result = __MIG_check__Request__thread_policy_get_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_policy_get_t__defined) */

	OutP->policy_infoCnt = 16;
	if (In0P->policy_infoCnt < OutP->policy_infoCnt)
		OutP->policy_infoCnt = In0P->policy_infoCnt;

	OutP->RetCode = thread_policy_get(In0P->Head.msgh_request_port, In0P->flavor, OutP->policy_info, &OutP->policy_infoCnt, &In0P->get_default);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;

	msgh_size_delta = ((4 * OutP->policy_infoCnt));
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 64) + msgh_size_delta;
	OutP = (Reply *) ((pointer_t) OutP + msgh_size_delta - 64);

	OutP->get_default = In0P->get_default;

	OutP = (Reply *) OutHeadP;
	__AfterRcvRpc(3618, "thread_policy_get")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_sample_t__defined)
#define __MIG_check__Request__thread_sample_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_sample_t(__attribute__((__unused__)) __Request__thread_sample_t *In0P)
{

	typedef __Request__thread_sample_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->reply.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->reply.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_sample_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_sample */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_sample
(
	thread_act_t thread,
	mach_port_t reply
);

/* Routine thread_sample */
mig_internal novalue _Xthread_sample
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_sample_t __Request;
	typedef __Reply__thread_sample_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_sample_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_sample_t__defined */

	__DeclareRcvRpc(3619, "thread_sample")
	__BeforeRcvRpc(3619, "thread_sample")

#if	defined(__MIG_check__Request__thread_sample_t__defined)
	check_result = __MIG_check__Request__thread_sample_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_sample_t__defined) */

	OutP->RetCode = thread_sample(In0P->Head.msgh_request_port, In0P->reply.name);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3619, "thread_sample")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__etap_trace_thread_t__defined)
#define __MIG_check__Request__etap_trace_thread_t__defined
#ifndef __NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined
#if	defined(__NDR_convert__int_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__int_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined */

#ifndef __NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined
#if	defined(__NDR_convert__char_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__char_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined */

#ifndef __NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined
#if	defined(__NDR_convert__float_rep__thread_act__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__float_rep__thread_act__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined
#define	__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined */


mig_internal kern_return_t __MIG_check__Request__etap_trace_thread_t(__attribute__((__unused__)) __Request__etap_trace_thread_t *In0P)
{

	typedef __Request__etap_trace_thread_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined)
		__NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status(&In0P->trace_status, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__etap_trace_thread_t__trace_status__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined)
		__NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status(&In0P->trace_status, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__etap_trace_thread_t__trace_status__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined)
		__NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status(&In0P->trace_status, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__etap_trace_thread_t__trace_status__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__etap_trace_thread_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine etap_trace_thread */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t etap_trace_thread
(
	thread_act_t target_act,
	boolean_t trace_status
);

/* Routine etap_trace_thread */
mig_internal novalue _Xetap_trace_thread
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t trace_status;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__etap_trace_thread_t __Request;
	typedef __Reply__etap_trace_thread_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__etap_trace_thread_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__etap_trace_thread_t__defined */

	__DeclareRcvRpc(3620, "etap_trace_thread")
	__BeforeRcvRpc(3620, "etap_trace_thread")

#if	defined(__MIG_check__Request__etap_trace_thread_t__defined)
	check_result = __MIG_check__Request__etap_trace_thread_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__etap_trace_thread_t__defined) */

	OutP->RetCode = etap_trace_thread(In0P->Head.msgh_request_port, In0P->trace_status);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3620, "etap_trace_thread")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_assign_t__defined)
#define __MIG_check__Request__thread_assign_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_assign_t(__attribute__((__unused__)) __Request__thread_assign_t *In0P)
{

	typedef __Request__thread_assign_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->new_set.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->new_set.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_assign_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_assign */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_assign
(
	thread_act_t thread,
	processor_set_t new_set
);

/* Routine thread_assign */
mig_internal novalue _Xthread_assign
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t new_set;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_assign_t __Request;
	typedef __Reply__thread_assign_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_assign_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_assign_t__defined */

	__DeclareRcvRpc(3621, "thread_assign")
	__BeforeRcvRpc(3621, "thread_assign")

#if	defined(__MIG_check__Request__thread_assign_t__defined)
	check_result = __MIG_check__Request__thread_assign_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_assign_t__defined) */

	OutP->RetCode = thread_assign(In0P->Head.msgh_request_port, In0P->new_set.name);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3621, "thread_assign")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_assign_default_t__defined)
#define __MIG_check__Request__thread_assign_default_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_assign_default_t(__attribute__((__unused__)) __Request__thread_assign_default_t *In0P)
{

	typedef __Request__thread_assign_default_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_assign_default_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_assign_default */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_assign_default
(
	thread_act_t thread
);

/* Routine thread_assign_default */
mig_internal novalue _Xthread_assign_default
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_assign_default_t __Request;
	typedef __Reply__thread_assign_default_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_assign_default_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_assign_default_t__defined */

	__DeclareRcvRpc(3622, "thread_assign_default")
	__BeforeRcvRpc(3622, "thread_assign_default")

#if	defined(__MIG_check__Request__thread_assign_default_t__defined)
	check_result = __MIG_check__Request__thread_assign_default_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_assign_default_t__defined) */

	OutP->RetCode = thread_assign_default(In0P->Head.msgh_request_port);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3622, "thread_assign_default")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_get_assignment_t__defined)
#define __MIG_check__Request__thread_get_assignment_t__defined

mig_internal kern_return_t __MIG_check__Request__thread_get_assignment_t(__attribute__((__unused__)) __Request__thread_get_assignment_t *In0P)
{

	typedef __Request__thread_get_assignment_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_get_assignment_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_get_assignment */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_get_assignment
(
	thread_act_t thread,
	processor_set_name_t *assigned_set
);

/* Routine thread_get_assignment */
mig_internal novalue _Xthread_get_assignment
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_get_assignment_t __Request;
	typedef __Reply__thread_get_assignment_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_get_assignment_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_get_assignment_t__defined */

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t assigned_setTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	kern_return_t RetCode;
	__DeclareRcvRpc(3623, "thread_get_assignment")
	__BeforeRcvRpc(3623, "thread_get_assignment")

#if	defined(__MIG_check__Request__thread_get_assignment_t__defined)
	check_result = __MIG_check__Request__thread_get_assignment_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_get_assignment_t__defined) */

#if	UseStaticTemplates
	OutP->assigned_set = assigned_setTemplate;
#else	/* UseStaticTemplates */
	OutP->assigned_set.disposition = 19;
	OutP->assigned_set.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = thread_get_assignment(In0P->Head.msgh_request_port, &OutP->assigned_set.name);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}

	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(3623, "thread_get_assignment")
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__thread_act_subsystem__
#if !defined(__MIG_check__Request__thread_set_policy_t__defined)
#define __MIG_check__Request__thread_set_policy_t__defined
#ifndef __NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#if	defined(__NDR_convert__int_rep__thread_act__policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__policy_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#if	defined(__NDR_convert__int_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__int_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__policy_base_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__int_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_policy_t__base__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#if	defined(__NDR_convert__int_rep__thread_act__policy_limit_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__int_rep__thread_act__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__policy_limit_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__int_rep__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_act__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__thread_act__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined */

#ifndef __NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined
#if	defined(__NDR_convert__int_rep__thread_act__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt(a, f) \
	__NDR_convert__int_rep__thread_act__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined
#define	__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#if	defined(__NDR_convert__char_rep__thread_act__policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__policy_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#if	defined(__NDR_convert__char_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__char_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__policy_base_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__char_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_policy_t__base__defined */

#ifndef __NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#if	defined(__NDR_convert__char_rep__thread_act__policy_limit_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__char_rep__thread_act__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__policy_limit_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__char_rep__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_act__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__thread_act__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__char_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#if	defined(__NDR_convert__float_rep__thread_act__policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__policy_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__policy_t((policy_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__thread_act__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__policy(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#if	defined(__NDR_convert__float_rep__thread_act__policy_base_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__float_rep__thread_act__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__policy_base_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__float_rep__policy_base_t((policy_base_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__base(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_policy_t__base__defined */

#ifndef __NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#if	defined(__NDR_convert__float_rep__thread_act__policy_limit_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__float_rep__thread_act__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__policy_limit_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__float_rep__policy_limit_t((policy_limit_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_act__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__thread_act__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__thread_act__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__thread_act__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined
#define	__NDR_convert__float_rep__Request__thread_set_policy_t__limit(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined */


mig_internal kern_return_t __MIG_check__Request__thread_set_policy_t(__attribute__((__unused__)) __Request__thread_set_policy_t *In0P, __attribute__((__unused__)) __Request__thread_set_policy_t **In1PP)
{

	typedef __Request__thread_set_policy_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 24)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->pset.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->pset.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt(&In0P->baseCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined */
	msgh_size_delta = (4 * In0P->baseCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 24) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 20);

#if defined(__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt(&In1P->limitCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 24) + ((4 * In1P->limitCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_policy_t__baseCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined) || \
	defined(__NDR_convert__int_rep__Request__thread_set_policy_t__limitCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined)
		__NDR_convert__int_rep__Request__thread_set_policy_t__policy(&In0P->policy, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__thread_set_policy_t__policy__defined */
#if defined(__NDR_convert__int_rep__Request__thread_set_policy_t__base__defined)
		__NDR_convert__int_rep__Request__thread_set_policy_t__base(&In0P->base, In0P->NDR.int_rep, In0P->baseCnt);
#endif	/* __NDR_convert__int_rep__Request__thread_set_policy_t__base__defined */
#if defined(__NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined)
		__NDR_convert__int_rep__Request__thread_set_policy_t__limit(&In1P->limit, In0P->NDR.int_rep, In1P->limitCnt);
#endif	/* __NDR_convert__int_rep__Request__thread_set_policy_t__limit__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined) || \
	defined(__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined)
		__NDR_convert__char_rep__Request__thread_set_policy_t__policy(&In0P->policy, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__thread_set_policy_t__policy__defined */
#if defined(__NDR_convert__char_rep__Request__thread_set_policy_t__base__defined)
		__NDR_convert__char_rep__Request__thread_set_policy_t__base(&In0P->base, In0P->NDR.char_rep, In0P->baseCnt);
#endif	/* __NDR_convert__char_rep__Request__thread_set_policy_t__base__defined */
#if defined(__NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined)
		__NDR_convert__char_rep__Request__thread_set_policy_t__limit(&In1P->limit, In0P->NDR.char_rep, In1P->limitCnt);
#endif	/* __NDR_convert__char_rep__Request__thread_set_policy_t__limit__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined) || \
	defined(__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined)
		__NDR_convert__float_rep__Request__thread_set_policy_t__policy(&In0P->policy, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__thread_set_policy_t__policy__defined */
#if defined(__NDR_convert__float_rep__Request__thread_set_policy_t__base__defined)
		__NDR_convert__float_rep__Request__thread_set_policy_t__base(&In0P->base, In0P->NDR.float_rep, In0P->baseCnt);
#endif	/* __NDR_convert__float_rep__Request__thread_set_policy_t__base__defined */
#if defined(__NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined)
		__NDR_convert__float_rep__Request__thread_set_policy_t__limit(&In1P->limit, In0P->NDR.float_rep, In1P->limitCnt);
#endif	/* __NDR_convert__float_rep__Request__thread_set_policy_t__limit__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__thread_set_policy_t__defined) */
#endif /* __MIG_check__Request__thread_act_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine thread_set_policy */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t thread_set_policy
(
	thread_act_t thr_act,
	processor_set_t pset,
	policy_t policy,
	policy_base_t base,
	mach_msg_type_number_t baseCnt,
	policy_limit_t limit,
	mach_msg_type_number_t limitCnt
);

/* Routine thread_set_policy */
mig_internal novalue _Xthread_set_policy
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t pset;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		policy_t policy;
		mach_msg_type_number_t baseCnt;
		integer_t base[5];
		mach_msg_type_number_t limitCnt;
		integer_t limit[1];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__thread_set_policy_t __Request;
	typedef __Reply__thread_set_policy_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__thread_set_policy_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__thread_set_policy_t__defined */

	__DeclareRcvRpc(3624, "thread_set_policy")
	__BeforeRcvRpc(3624, "thread_set_policy")

#if	defined(__MIG_check__Request__thread_set_policy_t__defined)
	check_result = __MIG_check__Request__thread_set_policy_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__thread_set_policy_t__defined) */

	OutP->RetCode = thread_set_policy(In0P->Head.msgh_request_port, In0P->pset.name, In0P->policy, In0P->base, In0P->baseCnt, In1P->limit, In1P->limitCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(3624, "thread_set_policy")
}


extern boolean_t thread_act_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

extern mig_routine_t thread_act_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
const struct thread_act_subsystem {
	mig_server_routine_t 	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[25];
} thread_act_subsystem = {
	thread_act_server_routine,
	3600,
	3625,
	(mach_msg_size_t)sizeof(union __ReplyUnion__thread_act_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_terminate, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_terminate_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xact_get_state, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__act_get_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xact_set_state, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__act_set_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_get_state, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_get_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_set_state, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_set_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_suspend, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_suspend_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_resume, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_resume_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_abort, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_abort_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_abort_safely, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_abort_safely_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_depress_abort, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_depress_abort_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_get_special_port, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_get_special_port_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_set_special_port, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_set_special_port_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_info, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_info_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_set_exception_ports, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_set_exception_ports_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_get_exception_ports, 7, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_get_exception_ports_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_swap_exception_ports, 10, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_swap_exception_ports_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_policy, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_policy_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_policy_set, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_policy_set_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_policy_get, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_policy_get_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_sample, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_sample_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xetap_trace_thread, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__etap_trace_thread_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_assign, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_assign_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_assign_default, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_assign_default_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_get_assignment, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_get_assignment_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xthread_set_policy, 7, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__thread_set_policy_t)},
	}
};

mig_external boolean_t thread_act_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;

	if ((InHeadP->msgh_id > 3624) || (InHeadP->msgh_id < 3600) ||
	    ((routine = thread_act_subsystem.routine[InHeadP->msgh_id - 3600].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t thread_act_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 3600;

	if ((msgh_id > 24) || (msgh_id < 0))
		return 0;

	return thread_act_subsystem.routine[msgh_id].stub_routine;
}
