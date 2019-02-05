// System call numbers
#define SYS_fork    1
#define SYS_exit    2
#define SYS_wait    3
#define SYS_pipe    4
#define SYS_read    5
#define SYS_kill    6
#define SYS_exec    7
#define SYS_fstat   8
#define SYS_chdir   9
#define SYS_dup    10
#define SYS_getpid 11
#define SYS_sbrk   12
#define SYS_sleep  13
#define SYS_uptime 14
#define SYS_open   15
#define SYS_write  16
#define SYS_mknod  17
#define SYS_unlink 18
#define SYS_link   19
#define SYS_mkdir  20
#define SYS_close  21
//Backtrace and ps
#define SYS_backtrace 22
#define SYS_getprocinfo 23
//thread_create
#define SYS_thread_create 24
#define SYS_thread_join 25
#define SYS_thread_exit 26
//Synchroniztion thread
#define SYS_thread_spin_init 27
#define SYS_thread_spin_lock 28
#define SYS_thread_spin_unlock 29
//Condition variable implementation
#define SYS_thread_create_sender 30
#define SYS_thread_create_receiver 31
#define SYS_thread_cond_wait 32
#define SYS_thread_cond_signal 33
