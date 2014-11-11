/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from	FreeBSD
 */

#ifndef _MACH_SYSPROTO_H_
#define	_MACH_SYSPROTO_H_

#include <sys/signal.h>
#include <sys/acl.h>
#include <sys/cpuset.h>
#include <sys/_ffcounter.h>
#include <sys/_semaphore.h>
#include <sys/ucontext.h>
#include <sys/wait.h>

#include <bsm/audit_kevents.h>

struct proc;

struct thread;

#define	PAD_(t)	(sizeof(register_t) <= sizeof(t) ? \
		0 : sizeof(register_t) - sizeof(t))

#if BYTE_ORDER == LITTLE_ENDIAN
#define	PADL_(t)	0
#define	PADR_(t)	PAD_(t)
#else
#define	PADL_(t)	PAD_(t)
#define	PADR_(t)	0
#endif

#if defined(_KERNEL_OPT)
#endif
struct _kernelrpc_mach_vm_allocate_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char address_l_[PADL_(mach_vm_offset_t *)]; mach_vm_offset_t * address; char address_r_[PADR_(mach_vm_offset_t *)];
	char size_l_[PADL_(mach_vm_size_t)]; mach_vm_size_t size; char size_r_[PADR_(mach_vm_size_t)];
	char flags_l_[PADL_(int)]; int flags; char flags_r_[PADR_(int)];
};
struct _kernelrpc_mach_vm_deallocate_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char address_l_[PADL_(mach_vm_offset_t *)]; mach_vm_offset_t * address; char address_r_[PADR_(mach_vm_offset_t *)];
	char size_l_[PADL_(mach_vm_size_t)]; mach_vm_size_t size; char size_r_[PADR_(mach_vm_size_t)];
};
struct _kernelrpc_mach_vm_protect_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char address_l_[PADL_(mach_vm_offset_t)]; mach_vm_offset_t address; char address_r_[PADR_(mach_vm_offset_t)];
	char size_l_[PADL_(mach_vm_size_t)]; mach_vm_size_t size; char size_r_[PADR_(mach_vm_size_t)];
	char set_maximum_l_[PADL_(int)]; int set_maximum; char set_maximum_r_[PADR_(int)];
	char new_protection_l_[PADL_(vm_prot_t)]; vm_prot_t new_protection; char new_protection_r_[PADR_(vm_prot_t)];
};
struct _kernelrpc_mach_vm_map_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char address_l_[PADL_(mach_vm_offset_t *)]; mach_vm_offset_t * address; char address_r_[PADR_(mach_vm_offset_t *)];
	char size_l_[PADL_(mach_vm_size_t)]; mach_vm_size_t size; char size_r_[PADR_(mach_vm_size_t)];
	char mask_l_[PADL_(mach_vm_offset_t)]; mach_vm_offset_t mask; char mask_r_[PADR_(mach_vm_offset_t)];
	char flags_l_[PADL_(int)]; int flags; char flags_r_[PADR_(int)];
	char cur_protection_l_[PADL_(vm_prot_t)]; vm_prot_t cur_protection; char cur_protection_r_[PADR_(vm_prot_t)];
};
struct _kernelrpc_mach_port_allocate_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char right_l_[PADL_(mach_port_right_t)]; mach_port_right_t right; char right_r_[PADR_(mach_port_right_t)];
	char name_l_[PADL_(mach_port_name_t *)]; mach_port_name_t * name; char name_r_[PADR_(mach_port_name_t *)];
};
struct _kernelrpc_mach_port_destroy_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
};
struct _kernelrpc_mach_port_deallocate_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
};
struct _kernelrpc_mach_port_mod_refs_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char right_l_[PADL_(mach_port_right_t)]; mach_port_right_t right; char right_r_[PADR_(mach_port_right_t)];
	char delta_l_[PADL_(mach_port_delta_t)]; mach_port_delta_t delta; char delta_r_[PADR_(mach_port_delta_t)];
};
struct _kernelrpc_mach_port_move_member_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char member_l_[PADL_(mach_port_name_t)]; mach_port_name_t member; char member_r_[PADR_(mach_port_name_t)];
	char after_l_[PADL_(mach_port_name_t)]; mach_port_name_t after; char after_r_[PADR_(mach_port_name_t)];
};
struct _kernelrpc_mach_port_insert_right_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char poly_l_[PADL_(mach_port_name_t)]; mach_port_name_t poly; char poly_r_[PADR_(mach_port_name_t)];
	char polyPoly_l_[PADL_(mach_msg_type_name_t)]; mach_msg_type_name_t polyPoly; char polyPoly_r_[PADR_(mach_msg_type_name_t)];
};
struct _kernelrpc_mach_port_insert_member_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char pset_l_[PADL_(mach_port_name_t)]; mach_port_name_t pset; char pset_r_[PADR_(mach_port_name_t)];
};
struct _kernelrpc_mach_port_extract_member_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char pset_l_[PADL_(mach_port_name_t)]; mach_port_name_t pset; char pset_r_[PADR_(mach_port_name_t)];
};
struct _kernelrpc_mach_port_construct_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char options_l_[PADL_(mach_port_options_t)]; mach_port_options_t options; char options_r_[PADR_(mach_port_options_t)];
	char context_l_[PADL_(uint64_t)]; uint64_t context; char context_r_[PADR_(uint64_t)];
	char name_l_[PADL_(mach_port_name_t *)]; mach_port_name_t * name; char name_r_[PADR_(mach_port_name_t *)];
};
struct _kernelrpc_mach_port_destruct_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char srdelta_l_[PADL_(mach_port_delta_t)]; mach_port_delta_t srdelta; char srdelta_r_[PADR_(mach_port_delta_t)];
	char guard_l_[PADL_(uint64_t)]; uint64_t guard; char guard_r_[PADR_(uint64_t)];
};
struct mach_reply_port_args {
	register_t dummy;
};
struct mach_thread_self_trap_args {
	register_t dummy;
};
struct mach_task_self_trap_args {
	register_t dummy;
};
struct mach_host_self_trap_args {
	register_t dummy;
};
struct mach_msg_trap_args {
	char msg_l_[PADL_(mach_msg_header_t *)]; mach_msg_header_t * msg; char msg_r_[PADR_(mach_msg_header_t *)];
	char option_l_[PADL_(mach_msg_option_t)]; mach_msg_option_t option; char option_r_[PADR_(mach_msg_option_t)];
	char send_size_l_[PADL_(mach_msg_size_t)]; mach_msg_size_t send_size; char send_size_r_[PADR_(mach_msg_size_t)];
	char rcv_size_l_[PADL_(mach_msg_size_t)]; mach_msg_size_t rcv_size; char rcv_size_r_[PADR_(mach_msg_size_t)];
	char rcv_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t rcv_name; char rcv_name_r_[PADR_(mach_port_name_t)];
	char timeout_l_[PADL_(mach_msg_timeout_t)]; mach_msg_timeout_t timeout; char timeout_r_[PADR_(mach_msg_timeout_t)];
	char notify_l_[PADL_(mach_port_name_t)]; mach_port_name_t notify; char notify_r_[PADR_(mach_port_name_t)];
};
struct mach_msg_overwrite_trap_args {
	char msg_l_[PADL_(mach_msg_header_t *)]; mach_msg_header_t * msg; char msg_r_[PADR_(mach_msg_header_t *)];
	char option_l_[PADL_(mach_msg_option_t)]; mach_msg_option_t option; char option_r_[PADR_(mach_msg_option_t)];
	char send_size_l_[PADL_(mach_msg_size_t)]; mach_msg_size_t send_size; char send_size_r_[PADR_(mach_msg_size_t)];
	char rcv_size_l_[PADL_(mach_msg_size_t)]; mach_msg_size_t rcv_size; char rcv_size_r_[PADR_(mach_msg_size_t)];
	char rcv_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t rcv_name; char rcv_name_r_[PADR_(mach_port_name_t)];
	char timeout_l_[PADL_(mach_msg_timeout_t)]; mach_msg_timeout_t timeout; char timeout_r_[PADR_(mach_msg_timeout_t)];
	char notify_l_[PADL_(mach_port_name_t)]; mach_port_name_t notify; char notify_r_[PADR_(mach_port_name_t)];
	char rcv_msg_l_[PADL_(mach_msg_header_t *)]; mach_msg_header_t * rcv_msg; char rcv_msg_r_[PADR_(mach_msg_header_t *)];
	char scatter_list_size_l_[PADL_(mach_msg_size_t)]; mach_msg_size_t scatter_list_size; char scatter_list_size_r_[PADR_(mach_msg_size_t)];
};
struct mach_semaphore_signal_trap_args {
	char signal_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t signal_name; char signal_name_r_[PADR_(mach_port_name_t)];
};
struct mach_semaphore_signal_all_trap_args {
	char signal_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t signal_name; char signal_name_r_[PADR_(mach_port_name_t)];
};
struct mach_semaphore_signal_thread_trap_args {
	char signal_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t signal_name; char signal_name_r_[PADR_(mach_port_name_t)];
	char thread_l_[PADL_(mach_port_name_t)]; mach_port_name_t thread; char thread_r_[PADR_(mach_port_name_t)];
};
struct mach_semaphore_wait_trap_args {
	char wait_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t wait_name; char wait_name_r_[PADR_(mach_port_name_t)];
};
struct mach_semaphore_wait_signal_trap_args {
	char wait_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t wait_name; char wait_name_r_[PADR_(mach_port_name_t)];
	char signal_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t signal_name; char signal_name_r_[PADR_(mach_port_name_t)];
};
struct mach_semaphore_timedwait_trap_args {
	char wait_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t wait_name; char wait_name_r_[PADR_(mach_port_name_t)];
	char sec_l_[PADL_(unsigned int)]; unsigned int sec; char sec_r_[PADR_(unsigned int)];
	char nsec_l_[PADL_(mach_clock_res_t)]; mach_clock_res_t nsec; char nsec_r_[PADR_(mach_clock_res_t)];
};
struct mach_semaphore_timedwait_signal_trap_args {
	char wait_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t wait_name; char wait_name_r_[PADR_(mach_port_name_t)];
	char signal_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t signal_name; char signal_name_r_[PADR_(mach_port_name_t)];
	char sec_l_[PADL_(unsigned int)]; unsigned int sec; char sec_r_[PADR_(unsigned int)];
	char nsec_l_[PADL_(mach_clock_res_t)]; mach_clock_res_t nsec; char nsec_r_[PADR_(mach_clock_res_t)];
};
struct _kernelrpc_mach_port_guard_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char guard_l_[PADL_(uint64_t)]; uint64_t guard; char guard_r_[PADR_(uint64_t)];
	char strict_l_[PADL_(int)]; int strict; char strict_r_[PADR_(int)];
};
struct _kernelrpc_mach_port_unguard_trap_args {
	char target_l_[PADL_(mach_port_name_t)]; mach_port_name_t target; char target_r_[PADR_(mach_port_name_t)];
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char guard_l_[PADL_(uint64_t)]; uint64_t guard; char guard_r_[PADR_(uint64_t)];
};
struct mach_map_fd_args {
	char fd_l_[PADL_(int)]; int fd; char fd_r_[PADR_(int)];
	char offset_l_[PADL_(mach_vm_offset_t)]; mach_vm_offset_t offset; char offset_r_[PADR_(mach_vm_offset_t)];
	char va_l_[PADL_(mach_vm_offset_t *)]; mach_vm_offset_t * va; char va_r_[PADR_(mach_vm_offset_t *)];
	char findspace_l_[PADL_(mach_boolean_t)]; mach_boolean_t findspace; char findspace_r_[PADR_(mach_boolean_t)];
	char size_l_[PADL_(mach_vm_size_t)]; mach_vm_size_t size; char size_r_[PADR_(mach_vm_size_t)];
};
struct mach_task_name_for_pid_args {
	char target_tport_l_[PADL_(mach_port_name_t)]; mach_port_name_t target_tport; char target_tport_r_[PADR_(mach_port_name_t)];
	char pid_l_[PADL_(int)]; int pid; char pid_r_[PADR_(int)];
	char tn_l_[PADL_(mach_port_t *)]; mach_port_t * tn; char tn_r_[PADR_(mach_port_t *)];
};
struct mach_task_for_pid_args {
	char target_tport_l_[PADL_(mach_port_t)]; mach_port_t target_tport; char target_tport_r_[PADR_(mach_port_t)];
	char pid_l_[PADL_(int)]; int pid; char pid_r_[PADR_(int)];
	char t_l_[PADL_(mach_port_t *)]; mach_port_t * t; char t_r_[PADR_(mach_port_t *)];
};
struct mach_pid_for_task_args {
	char t_l_[PADL_(mach_port_t)]; mach_port_t t; char t_r_[PADR_(mach_port_t)];
	char pid_l_[PADL_(int *)]; int * pid; char pid_r_[PADR_(int *)];
};
struct mach_macx_swapon_args {
	char name_l_[PADL_(char *)]; char * name; char name_r_[PADR_(char *)];
	char flags_l_[PADL_(int)]; int flags; char flags_r_[PADR_(int)];
	char size_l_[PADL_(int)]; int size; char size_r_[PADR_(int)];
	char priority_l_[PADL_(int)]; int priority; char priority_r_[PADR_(int)];
};
struct mach_macx_swapoff_args {
	char name_l_[PADL_(char *)]; char * name; char name_r_[PADR_(char *)];
	char flags_l_[PADL_(int)]; int flags; char flags_r_[PADR_(int)];
};
struct mach_macx_triggers_args {
	char hi_water_l_[PADL_(int)]; int hi_water; char hi_water_r_[PADR_(int)];
	char low_water_l_[PADL_(int)]; int low_water; char low_water_r_[PADR_(int)];
	char flags_l_[PADL_(int)]; int flags; char flags_r_[PADR_(int)];
	char alert_port_l_[PADL_(mach_port_t)]; mach_port_t alert_port; char alert_port_r_[PADR_(mach_port_t)];
};
struct mach_macx_backing_store_suspend_args {
	char suspend_l_[PADL_(int)]; int suspend; char suspend_r_[PADR_(int)];
};
struct mach_macx_backing_store_recovery_args {
	char pid_l_[PADL_(int)]; int pid; char pid_r_[PADR_(int)];
};
struct mach_swtch_pri_args {
	char pri_l_[PADL_(int)]; int pri; char pri_r_[PADR_(int)];
};
struct mach_swtch_args {
	register_t dummy;
};
struct mach_syscall_thread_switch_args {
	char thread_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t thread_name; char thread_name_r_[PADR_(mach_port_name_t)];
	char option_l_[PADL_(int)]; int option; char option_r_[PADR_(int)];
	char option_time_l_[PADL_(mach_msg_timeout_t)]; mach_msg_timeout_t option_time; char option_time_r_[PADR_(mach_msg_timeout_t)];
};
struct mach_clock_sleep_trap_args {
	char clock_name_l_[PADL_(mach_port_name_t)]; mach_port_name_t clock_name; char clock_name_r_[PADR_(mach_port_name_t)];
	char sleep_type_l_[PADL_(mach_sleep_type_t)]; mach_sleep_type_t sleep_type; char sleep_type_r_[PADR_(mach_sleep_type_t)];
	char sleep_sec_l_[PADL_(int)]; int sleep_sec; char sleep_sec_r_[PADR_(int)];
	char sleep_nsec_l_[PADL_(int)]; int sleep_nsec; char sleep_nsec_r_[PADR_(int)];
	char wakeup_time_l_[PADL_(mach_timespec_t *)]; mach_timespec_t * wakeup_time; char wakeup_time_r_[PADR_(mach_timespec_t *)];
};
struct mach_timebase_info_args {
	char info_l_[PADL_(mach_timebase_info_t)]; mach_timebase_info_t info; char info_r_[PADR_(mach_timebase_info_t)];
};
struct mach_wait_until_args {
	char deadline_l_[PADL_(uint64_t)]; uint64_t deadline; char deadline_r_[PADR_(uint64_t)];
};
struct mk_timer_create_args {
	register_t dummy;
};
struct mk_timer_destroy_args {
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
};
struct mk_timer_arm_args {
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char expire_time_l_[PADL_(mach_absolute_time_t)]; mach_absolute_time_t expire_time; char expire_time_r_[PADR_(mach_absolute_time_t)];
};
struct mk_timer_cancel_args {
	char name_l_[PADL_(mach_port_name_t)]; mach_port_name_t name; char name_r_[PADR_(mach_port_name_t)];
	char result_time_l_[PADL_(mach_absolute_time_t *)]; mach_absolute_time_t * result_time; char result_time_r_[PADR_(mach_absolute_time_t *)];
};
#if defined(_KERNEL_OPT)
#endif
int	sys__kernelrpc_mach_vm_allocate_trap(struct thread *, struct _kernelrpc_mach_vm_allocate_trap_args *);
int	sys__kernelrpc_mach_vm_deallocate_trap(struct thread *, struct _kernelrpc_mach_vm_deallocate_trap_args *);
int	sys__kernelrpc_mach_vm_protect_trap(struct thread *, struct _kernelrpc_mach_vm_protect_trap_args *);
int	sys__kernelrpc_mach_vm_map_trap(struct thread *, struct _kernelrpc_mach_vm_map_trap_args *);
int	sys__kernelrpc_mach_port_allocate_trap(struct thread *, struct _kernelrpc_mach_port_allocate_trap_args *);
int	sys__kernelrpc_mach_port_destroy_trap(struct thread *, struct _kernelrpc_mach_port_destroy_trap_args *);
int	sys__kernelrpc_mach_port_deallocate_trap(struct thread *, struct _kernelrpc_mach_port_deallocate_trap_args *);
int	sys__kernelrpc_mach_port_mod_refs_trap(struct thread *, struct _kernelrpc_mach_port_mod_refs_trap_args *);
int	sys__kernelrpc_mach_port_move_member_trap(struct thread *, struct _kernelrpc_mach_port_move_member_trap_args *);
int	sys__kernelrpc_mach_port_insert_right_trap(struct thread *, struct _kernelrpc_mach_port_insert_right_trap_args *);
int	sys__kernelrpc_mach_port_insert_member_trap(struct thread *, struct _kernelrpc_mach_port_insert_member_trap_args *);
int	sys__kernelrpc_mach_port_extract_member_trap(struct thread *, struct _kernelrpc_mach_port_extract_member_trap_args *);
int	sys__kernelrpc_mach_port_construct_trap(struct thread *, struct _kernelrpc_mach_port_construct_trap_args *);
int	sys__kernelrpc_mach_port_destruct_trap(struct thread *, struct _kernelrpc_mach_port_destruct_trap_args *);
int	sys_mach_reply_port(struct thread *, struct mach_reply_port_args *);
int	sys_mach_thread_self_trap(struct thread *, struct mach_thread_self_trap_args *);
int	sys_mach_task_self_trap(struct thread *, struct mach_task_self_trap_args *);
int	sys_mach_host_self_trap(struct thread *, struct mach_host_self_trap_args *);
int	sys_mach_msg_trap(struct thread *, struct mach_msg_trap_args *);
int	sys_mach_msg_overwrite_trap(struct thread *, struct mach_msg_overwrite_trap_args *);
int	sys_mach_semaphore_signal_trap(struct thread *, struct mach_semaphore_signal_trap_args *);
int	sys_mach_semaphore_signal_all_trap(struct thread *, struct mach_semaphore_signal_all_trap_args *);
int	sys_mach_semaphore_signal_thread_trap(struct thread *, struct mach_semaphore_signal_thread_trap_args *);
int	sys_mach_semaphore_wait_trap(struct thread *, struct mach_semaphore_wait_trap_args *);
int	sys_mach_semaphore_wait_signal_trap(struct thread *, struct mach_semaphore_wait_signal_trap_args *);
int	sys_mach_semaphore_timedwait_trap(struct thread *, struct mach_semaphore_timedwait_trap_args *);
int	sys_mach_semaphore_timedwait_signal_trap(struct thread *, struct mach_semaphore_timedwait_signal_trap_args *);
int	sys__kernelrpc_mach_port_guard_trap(struct thread *, struct _kernelrpc_mach_port_guard_trap_args *);
int	sys__kernelrpc_mach_port_unguard_trap(struct thread *, struct _kernelrpc_mach_port_unguard_trap_args *);
int	sys_mach_map_fd(struct thread *, struct mach_map_fd_args *);
int	sys_mach_task_name_for_pid(struct thread *, struct mach_task_name_for_pid_args *);
int	sys_mach_task_for_pid(struct thread *, struct mach_task_for_pid_args *);
int	sys_mach_pid_for_task(struct thread *, struct mach_pid_for_task_args *);
int	sys_mach_macx_swapon(struct thread *, struct mach_macx_swapon_args *);
int	sys_mach_macx_swapoff(struct thread *, struct mach_macx_swapoff_args *);
int	sys_mach_macx_triggers(struct thread *, struct mach_macx_triggers_args *);
int	sys_mach_macx_backing_store_suspend(struct thread *, struct mach_macx_backing_store_suspend_args *);
int	sys_mach_macx_backing_store_recovery(struct thread *, struct mach_macx_backing_store_recovery_args *);
int	sys_mach_swtch_pri(struct thread *, struct mach_swtch_pri_args *);
int	sys_mach_swtch(struct thread *, struct mach_swtch_args *);
int	sys_mach_syscall_thread_switch(struct thread *, struct mach_syscall_thread_switch_args *);
int	sys_mach_clock_sleep_trap(struct thread *, struct mach_clock_sleep_trap_args *);
int	sys_mach_timebase_info(struct thread *, struct mach_timebase_info_args *);
int	sys_mach_wait_until(struct thread *, struct mach_wait_until_args *);
int	sys_mk_timer_create(struct thread *, struct mk_timer_create_args *);
int	sys_mk_timer_destroy(struct thread *, struct mk_timer_destroy_args *);
int	sys_mk_timer_arm(struct thread *, struct mk_timer_arm_args *);
int	sys_mk_timer_cancel(struct thread *, struct mk_timer_cancel_args *);

#ifdef COMPAT_43

#if defined(_KERNEL_OPT)
#endif

#endif /* COMPAT_43 */


#ifdef COMPAT_FREEBSD4

#if defined(_KERNEL_OPT)
#endif

#endif /* COMPAT_FREEBSD4 */


#ifdef COMPAT_FREEBSD6

#if defined(_KERNEL_OPT)
#endif

#endif /* COMPAT_FREEBSD6 */


#ifdef COMPAT_FREEBSD7

#if defined(_KERNEL_OPT)
#endif

#endif /* COMPAT_FREEBSD7 */

#define	MACH_SYS_AUE__kernelrpc_mach_vm_allocate_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_vm_deallocate_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_vm_protect_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_vm_map_trap	AUE_MMAP
#define	MACH_SYS_AUE__kernelrpc_mach_port_allocate_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_destroy_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_deallocate_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_mod_refs_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_move_member_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_insert_right_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_insert_member_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_extract_member_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_construct_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_destruct_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_reply_port	AUE_NULL
#define	MACH_SYS_AUE_mach_thread_self_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_task_self_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_host_self_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_msg_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_msg_overwrite_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_signal_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_signal_all_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_signal_thread_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_wait_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_wait_signal_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_timedwait_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_semaphore_timedwait_signal_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_guard_trap	AUE_NULL
#define	MACH_SYS_AUE__kernelrpc_mach_port_unguard_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_map_fd	AUE_NULL
#define	MACH_SYS_AUE_mach_task_name_for_pid	AUE_NULL
#define	MACH_SYS_AUE_mach_task_for_pid	AUE_NULL
#define	MACH_SYS_AUE_mach_pid_for_task	AUE_NULL
#define	MACH_SYS_AUE_mach_macx_swapon	AUE_NULL
#define	MACH_SYS_AUE_mach_macx_swapoff	AUE_NULL
#define	MACH_SYS_AUE_mach_macx_triggers	AUE_NULL
#define	MACH_SYS_AUE_mach_macx_backing_store_suspend	AUE_NULL
#define	MACH_SYS_AUE_mach_macx_backing_store_recovery	AUE_NULL
#define	MACH_SYS_AUE_mach_swtch_pri	AUE_NULL
#define	MACH_SYS_AUE_mach_swtch	AUE_NULL
#define	MACH_SYS_AUE_mach_syscall_thread_switch	AUE_NULL
#define	MACH_SYS_AUE_mach_clock_sleep_trap	AUE_NULL
#define	MACH_SYS_AUE_mach_timebase_info	AUE_NULL
#define	MACH_SYS_AUE_mach_wait_until	AUE_NULL
#define	MACH_SYS_AUE_mk_timer_create	AUE_NULL
#define	MACH_SYS_AUE_mk_timer_destroy	AUE_NULL
#define	MACH_SYS_AUE_mk_timer_arm	AUE_NULL
#define	MACH_SYS_AUE_mk_timer_cancel	AUE_NULL

#undef PAD_
#undef PADL_
#undef PADR_

#endif /* !_MACH_SYSPROTO_H_ */
