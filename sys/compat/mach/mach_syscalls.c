/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from	FreeBSD
 */

const char *mach_syscallnames[] = {
#if defined(_KERNEL_OPT)
#endif
	"#0",			/* 0 = nosys */
	"#1",			/* 1 = nosys */
	"#2",			/* 2 = nosys */
	"#3",			/* 3 = nosys */
	"#4",			/* 4 = nosys */
	"#5",			/* 5 = nosys */
	"#6",			/* 6 = nosys */
	"#7",			/* 7 = nosys */
	"#8",			/* 8 = nosys */
	"#9",			/* 9 = nosys */
	"#10",			/* 10 = nosys */
	"#11",			/* 11 = nosys */
	"#12",			/* 12 = nosys */
	"#13",			/* 13 = nosys */
	"#14",			/* 14 = nosys */
	"#15",			/* 15 = nosys */
	"#16",			/* 16 = nosys */
	"#17",			/* 17 = nosys */
	"#18",			/* 18 = nosys */
	"#19",			/* 19 = nosys */
	"#20",			/* 20 = nosys */
	"#21",			/* 21 = nosys */
	"#22",			/* 22 = nosys */
	"#23",			/* 23 = nosys */
	"#24",			/* 24 = nosys */
	"#25",			/* 25 = nosys */
	"mach_reply_port",			/* 26 = mach_reply_port */
	"mach_thread_self_trap",			/* 27 = mach_thread_self_trap */
	"mach_task_self_trap",			/* 28 = mach_task_self_trap */
	"mach_host_self_trap",			/* 29 = mach_host_self_trap */
	"#30",			/* 30 = nosys */
	"mach_msg_trap",			/* 31 = mach_msg_trap */
	"mach_msg_overwrite_trap",			/* 32 = mach_msg_overwrite_trap */
	"mach_semaphore_signal_trap",			/* 33 = mach_semaphore_signal_trap */
	"mach_semaphore_signal_all_trap",			/* 34 = mach_semaphore_signal_all_trap */
	"mach_semaphore_signal_thread_trap",			/* 35 = mach_semaphore_signal_thread_trap */
	"mach_semaphore_wait_trap",			/* 36 = mach_semaphore_wait_trap */
	"mach_semaphore_wait_signal_trap",			/* 37 = mach_semaphore_wait_signal_trap */
	"mach_semaphore_timedwait_trap",			/* 38 = mach_semaphore_timedwait_trap */
	"mach_semaphore_timedwait_signal_trap",			/* 39 = mach_semaphore_timedwait_signal_trap */
	"#40",			/* 40 = nosys */
	"mach_init_process",			/* 41 = mach_init_process */
	"#42",			/* 42 = nosys */
	"mach_map_fd",			/* 43 = mach_map_fd */
	"#44",			/* 44 = nosys */
	"mach_task_for_pid",			/* 45 = mach_task_for_pid */
	"mach_pid_for_task",			/* 46 = mach_pid_for_task */
	"#47",			/* 47 = nosys */
	"mach_macx_swapon",			/* 48 = mach_macx_swapon */
	"mach_macx_swapoff",			/* 49 = mach_macx_swapoff */
	"#50",			/* 50 = nosys */
	"mach_macx_triggers",			/* 51 = mach_macx_triggers */
	"#52",			/* 52 = nosys */
	"#53",			/* 53 = nosys */
	"#54",			/* 54 = nosys */
	"#55",			/* 55 = nosys */
	"#56",			/* 56 = nosys */
	"#57",			/* 57 = nosys */
	"#58",			/* 58 = nosys */
	"mach_swtch_pri",			/* 59 = mach_swtch_pri */
	"mach_swtch",			/* 60 = mach_swtch */
	"mach_syscall_thread_switch",			/* 61 = mach_syscall_thread_switch */
	"mach_clock_sleep_trap",			/* 62 = mach_clock_sleep_trap */
	"#63",			/* 63 = nosys */
	"#64",			/* 64 = nosys */
	"#65",			/* 65 = nosys */
	"#66",			/* 66 = nosys */
	"#67",			/* 67 = nosys */
	"#68",			/* 68 = nosys */
	"#69",			/* 69 = nosys */
	"#70",			/* 70 = nosys */
	"#71",			/* 71 = nosys */
	"#72",			/* 72 = nosys */
	"#73",			/* 73 = nosys */
	"#74",			/* 74 = nosys */
	"#75",			/* 75 = nosys */
	"#76",			/* 76 = nosys */
	"#77",			/* 77 = nosys */
	"#78",			/* 78 = nosys */
	"#79",			/* 79 = nosys */
	"#80",			/* 80 = nosys */
	"#81",			/* 81 = nosys */
	"#82",			/* 82 = nosys */
	"#83",			/* 83 = nosys */
	"#84",			/* 84 = nosys */
	"#85",			/* 85 = nosys */
	"#86",			/* 86 = nosys */
	"#87",			/* 87 = nosys */
	"#88",			/* 88 = nosys */
	"mach_timebase_info",			/* 89 = mach_timebase_info */
	"mach_wait_until",			/* 90 = mach_wait_until */
	"mach_timer_create",			/* 91 = mach_timer_create */
	"mach_timer_destroy",			/* 92 = mach_timer_destroy */
	"mach_timer_arm",			/* 93 = mach_timer_arm */
	"mach_timer_cancel",			/* 94 = mach_timer_cancel */
	"mach_get_time_base_info",			/* 95 = mach_get_time_base_info */
	"#96",			/* 96 = nosys */
	"#97",			/* 97 = nosys */
	"#98",			/* 98 = nosys */
	"#99",			/* 99 = nosys */
	"#100",			/* 100 = nosys */
	"#101",			/* 101 = nosys */
	"#102",			/* 102 = nosys */
	"#103",			/* 103 = nosys */
	"#104",			/* 104 = nosys */
	"#105",			/* 105 = nosys */
	"#106",			/* 106 = nosys */
	"#107",			/* 107 = nosys */
	"#108",			/* 108 = nosys */
	"#109",			/* 109 = nosys */
	"#110",			/* 110 = nosys */
	"#111",			/* 111 = nosys */
	"#112",			/* 112 = nosys */
	"#113",			/* 113 = nosys */
	"#114",			/* 114 = nosys */
	"#115",			/* 115 = nosys */
	"#116",			/* 116 = nosys */
	"#117",			/* 117 = nosys */
	"#118",			/* 118 = nosys */
	"#119",			/* 119 = nosys */
	"#120",			/* 120 = nosys */
	"#121",			/* 121 = nosys */
	"#122",			/* 122 = nosys */
	"#123",			/* 123 = nosys */
	"#124",			/* 124 = nosys */
	"#125",			/* 125 = nosys */
	"#126",			/* 126 = nosys */
	"#127",			/* 127 = nosys */
};
