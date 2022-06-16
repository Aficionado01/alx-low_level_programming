
int64_t __gmon_start__ = 0;

void fun_400460();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400460();
    }
    return;
}

void fun_400460() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x400456;

void fun_400450(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t checksum(unsigned char* rdi) {
    unsigned char* v2;
    int64_t v3;
    uint32_t eax4;
    uint32_t eax5;

    v2 = rdi;
    v3 = 0;
    while (eax4 = *v2, !!*reinterpret_cast<signed char*>(&eax4)) {
        eax5 = *v2;
        v3 = v3 + *reinterpret_cast<signed char*>(&eax5);
        ++v2;
    }
    return v3;
}

int64_t printf = 0x400446;

void fun_400440(int64_t rdi, int64_t rsi) {
    goto printf;
}

int64_t puts = 0x400436;

void fun_400430(int64_t rdi) {
    goto puts;
}

struct s0 {
    int64_t f0;
    unsigned char* f8;
};

int64_t main(int32_t edi, struct s0* rsi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400450(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_400515() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void __gmon_start__();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        __gmon_start__();
    }
    if (1)
        goto 0x400518;
    if (1)
        goto 0x400518;
    goto 0;
}

int64_t main(int32_t edi, struct s0* rsi) {
    unsigned char* rdi3;
    int64_t rax4;
    int64_t rax5;
    int64_t rsi6;

    if (edi == 2) {
        rdi3 = rsi->f8;
        rax4 = checksum(rdi3);
        if (rax4 == 0xad4) {
            fun_400430(0x4006c7);
            *reinterpret_cast<int32_t*>(&rax5) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        } else {
            fun_400430("Wrong password");
            *reinterpret_cast<int32_t*>(&rax5) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        }
    } else {
        rsi6 = rsi->f0;
        fun_400440("Usage: %s password\n", rsi6);
        *reinterpret_cast<int32_t*>(&rax5) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    return rax5;
}

void __libc_csu_fini() {
    return;
}

int64_t g601010 = 0;

void fun_400456() {
    goto g601010;
}

signed char __TMC_END__ = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return rax2;
}

void fun_400446() {
    goto 0x400420;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600e10 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_400436() {
    goto 0x400420;
}
