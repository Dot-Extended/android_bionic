// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter arm_system_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 0, 0, 124),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 138, 61, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 74, 31, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 24, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 10, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 8, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 7, 117, 116), //restart_syscall|exit|fork|read|write|open|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 9, 116, 115), //creat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 13, 114, 113), //unlink|execve|chdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 22, 113, 112), //lseek|getpid|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 33, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 26, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 25, 110, 109), //getuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 27, 109, 108), //ptrace
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 36, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 34, 107, 106), //access
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 40, 106, 105), //sync|kill|rename|mkdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 57, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 51, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 45, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 44, 102, 101), //dup|pipe|times
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 46, 101, 100), //brk
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 54, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 53, 99, 98), //acct|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 56, 98, 97), //ioctl|fcntl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 63, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 60, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 95, 94), //setpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 62, 94, 93), //umask|chroot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 66, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 65, 92, 91), //dup2|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 68, 91, 90), //setsid|sigaction
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 114, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 91, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 85, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 77, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 76, 86, 85), //sethostname|setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 80, 85, 84), //getrusage|gettimeofday|settimeofday
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 88, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 86, 83, 82), //readlink
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 89, 82, 81), //reboot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 96, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 94, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 93, 79, 78), //munmap|truncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 95, 78, 77), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 103, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 76, 75), //getpriority|setpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 106, 75, 74), //syslog|setitimer|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 128, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 118, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 116, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 115, 71, 70), //wait4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 70, 69), //sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 124, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 123, 68, 67), //fsync|sigreturn|clone|setdomainname|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 126, 67, 66), //adjtimex|mprotect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 136, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 130, 64, 63), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 134, 63, 62), //quotactl|getpgid|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 137, 62, 61), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 290, 31, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 183, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 168, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 150, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 149, 56, 55), //setfsuid|setfsgid|_llseek|getdents|_newselect|flock|msync|readv|writev|getsid|fdatasync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 164, 55, 54), //mlock|munlock|mlockall|munlockall|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|nanosleep|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 172, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 169, 53, 52), //poll
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 182, 52, 51), //prctl|rt_sigreturn|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|pread64|pwrite64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 199, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 190, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 188, 49, 48), //getcwd|capget|capset|sigaltstack|sendfile
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 48, 47), //vfork|ugetrlimit|mmap2|truncate64|ftruncate64|stat64|lstat64|fstat64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 213, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 212, 46, 45), //getuid32|getgid32|geteuid32|getegid32|setreuid32|setregid32|getgroups32|setgroups32|fchown32|setresuid32|getresuid32|setresgid32|getresgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 215, 45, 44), //setuid32|setgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 256, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 224, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 219, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 218, 41, 40), //getdents64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 222, 40, 39), //mincore|madvise|fcntl64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 250, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 249, 38, 37), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill|sendfile64|futex|sched_setaffinity|sched_getaffinity|io_setup|io_destroy|io_getevents|io_submit|io_cancel|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 254, 37, 36), //epoll_create|epoll_ctl|epoll_wait|remap_file_pages
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 270, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 269, 34, 33), //set_tid_address|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|statfs64|fstatfs64|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 271, 33, 32), //arm_fadvise64_64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 286, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 285, 31, 30), //waitid|socket|bind|connect|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 289, 30, 29), //getsockname|getpeername|socketpair
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 350, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 327, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 316, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 292, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 291, 25, 24), //sendto
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 298, 24, 23), //recvfrom|shutdown|setsockopt|getsockopt|sendmsg|recvmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 322, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 319, 22, 21), //inotify_init|inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 326, 21, 20), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 345, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 340, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 338, 18, 17), //fstatat64|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 344, 17, 16), //splice|sync_file_range2|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 348, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 347, 15, 14), //getcpu|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 349, 14, 13), //utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 390, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 372, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 369, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 367, 10, 9), //timerfd_create|eventfd|fallocate|timerfd_settime|timerfd_gettime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|recvmmsg|accept4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 370, 9, 8), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 380, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 378, 7, 6), //clock_adjtime|syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 388, 6, 5), //sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create|bpf|execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983045, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983042, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 394, 3, 2), //mlock2|copy_file_range|preadv2|pwritev2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983043, 2, 1), //__ARM_NR_cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983046, 1, 0), //__ARM_NR_set_tls
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm_system_filter_size = sizeof(arm_system_filter) / sizeof(struct sock_filter);
