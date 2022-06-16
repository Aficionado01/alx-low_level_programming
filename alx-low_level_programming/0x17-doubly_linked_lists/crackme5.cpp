
int64_t __gmon_start__ = 0;

void fun_4005a0();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_4005a0();
    }
    return;
}

void fun_4005a0() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x400566;

void fun_400560(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
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

uint32_t f1(uint32_t edi) {
    return (edi ^ 59) & 63;
}

struct s0 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    unsigned char f4;
    unsigned char f5;
};

uint32_t f3(struct s0* rdi, uint32_t esi) {
    struct s0* v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t eax7;

    v3 = rdi;
    v4 = esi;
    v5 = 1;
    v6 = 0;
    while (reinterpret_cast<int32_t>(v6) < reinterpret_cast<int32_t>(v4)) {
        eax7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v6);
        v5 = *reinterpret_cast<signed char*>(&eax7) * v5;
        ++v6;
    }
    return (v5 ^ 85) & 63;
}

void fun_400570(int64_t rdi);

uint32_t fun_400590(int64_t rdi);

uint32_t f4(struct s0* rdi, uint32_t esi) {
    struct s0* v3;
    uint32_t v4;
    uint32_t eax5;
    uint32_t v6;
    uint32_t v7;
    uint32_t eax8;
    uint32_t eax9;
    int64_t rdi10;
    uint32_t eax11;

    v3 = rdi;
    v4 = esi;
    eax5 = v3->f0;
    v6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax5)));
    v7 = 0;
    while (reinterpret_cast<int32_t>(v7) < reinterpret_cast<int32_t>(v4)) {
        eax8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v7);
        if (static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax8)) > reinterpret_cast<int32_t>(v6)) {
            eax9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v7);
            v6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax9)));
        }
        ++v7;
    }
    *reinterpret_cast<uint32_t*>(&rdi10) = v6 ^ 14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    fun_400570(rdi10);
    eax11 = fun_400590(rdi10);
    return eax11 & 63;
}

int64_t srand = 0x400576;

void fun_400570(int64_t rdi) {
    goto srand;
}

int64_t rand = 0x400596;

uint32_t fun_400590(int64_t rdi) {
    goto rand;
}

uint32_t f5(struct s0* rdi, uint32_t esi) {
    struct s0* v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;

    v3 = rdi;
    v4 = esi;
    v5 = 0;
    v6 = 0;
    while (reinterpret_cast<int32_t>(v6) < reinterpret_cast<int32_t>(v4)) {
        eax7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v6);
        eax8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v6);
        v5 = v5 + *reinterpret_cast<signed char*>(&eax8) * reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax7)));
        ++v6;
    }
    eax9 = v5;
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) ^ 0xef);
    return eax9 & 63;
}

uint32_t f6(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    signed char v4;
    uint32_t v5;
    int32_t v6;
    uint32_t eax7;
    uint32_t eax8;

    eax3 = *reinterpret_cast<int32_t*>(&rdi);
    v4 = *reinterpret_cast<signed char*>(&eax3);
    v5 = 0;
    v6 = 0;
    while (static_cast<int32_t>(v4) > v6) {
        eax7 = fun_400590(rdi);
        v5 = eax7;
        ++v6;
    }
    eax8 = v5;
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) ^ 0xe5);
    return eax8 & 63;
}

int32_t rand;

void fun_400580();

uint64_t g28;

struct s1 {
    signed char[8] pad8;
    struct s0* f8;
    struct s0* f16;
};

int64_t fun_400540(struct s0* rdi);

uint32_t f2(struct s0* rdi, uint32_t esi);

void fun_400530(int64_t rdi, int64_t rsi);

void fun_400550(int64_t rdi, int64_t rsi);

void segf() {
    void* rbp1;
    uint64_t rax2;
    struct s0* v3;
    struct s1* rsi4;
    struct s0* v5;
    int64_t rax6;
    int64_t rax7;
    uint32_t eax8;
    uint32_t edx9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t edx12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t edx15;
    uint32_t eax16;
    uint32_t eax17;
    uint32_t edx18;
    uint32_t eax19;
    int64_t rsi20;
    uint32_t eax21;
    uint32_t edx22;
    uint32_t eax23;
    uint32_t eax24;
    int64_t rdi25;
    uint32_t eax26;
    uint32_t edx27;
    uint32_t eax28;
    uint64_t rcx29;
    int64_t v30;

    rand = -1;
    fun_400580();
    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16 - 8 + 8 - 8);
    rax2 = g28;
    if (!0) {
        segf();
    }
    v3 = rsi4->f8;
    v5 = rsi4->f16;
    rax6 = fun_400540(v5);
    if (rax6 != 6) {
        segf();
    }
    rax7 = fun_400540(v3);
    eax8 = f1(*reinterpret_cast<uint32_t*>(&rax7));
    edx9 = v5->f0;
    eax10 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax8 - 80);
    if (*reinterpret_cast<signed char*>(&edx9) != *reinterpret_cast<signed char*>(&eax10)) {
        segf();
    }
    eax11 = f2(v3, *reinterpret_cast<uint32_t*>(&rax7));
    edx12 = v5->f1;
    eax13 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax11 - 80);
    if (*reinterpret_cast<signed char*>(&edx12) != *reinterpret_cast<signed char*>(&eax13)) {
        segf();
    }
    eax14 = f3(v3, *reinterpret_cast<uint32_t*>(&rax7));
    edx15 = v5->f2;
    eax16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax14 - 80);
    if (*reinterpret_cast<signed char*>(&edx15) != *reinterpret_cast<signed char*>(&eax16)) {
        segf();
    }
    eax17 = f4(v3, *reinterpret_cast<uint32_t*>(&rax7));
    edx18 = v5->f3;
    eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax17 - 80);
    if (*reinterpret_cast<signed char*>(&edx18) != *reinterpret_cast<signed char*>(&eax19)) {
        segf();
    }
    *reinterpret_cast<uint32_t*>(&rsi20) = *reinterpret_cast<uint32_t*>(&rax7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
    eax21 = f5(v3, *reinterpret_cast<uint32_t*>(&rsi20));
    edx22 = v5->f4;
    eax23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax21 - 80);
    if (*reinterpret_cast<signed char*>(&edx22) != *reinterpret_cast<signed char*>(&eax23)) {
        segf();
    }
    eax24 = v3->f0;
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<signed char*>(&eax24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = 0;
    eax26 = f6(rdi25, rsi20);
    edx27 = v5->f5;
    eax28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp1) + eax26 - 80);
    if (*reinterpret_cast<signed char*>(&edx27) != *reinterpret_cast<signed char*>(&eax28)) {
        segf();
    }
    fun_400530("Congrats!", rsi20);
    rcx29 = rax2 ^ g28;
    if (rcx29) {
        fun_400550("Congrats!", rsi20);
    }
    goto v30;
}

int64_t strlen = 0x400546;

int64_t fun_400540(struct s0* rdi) {
    goto strlen;
}

uint32_t f2(struct s0* rdi, uint32_t esi) {
    struct s0* v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t eax7;

    v3 = rdi;
    v4 = esi;
    v5 = 0;
    v6 = 0;
    while (reinterpret_cast<int32_t>(v6) < reinterpret_cast<int32_t>(v4)) {
        eax7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(v3) + v6);
        v5 = v5 + static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax7));
        ++v6;
    }
    return (v5 ^ 79) & 63;
}

int64_t __stack_chk_fail = 0x400556;

void fun_400550(int64_t rdi, int64_t rsi) {
    goto __stack_chk_fail;
}

int64_t exit = 0x400586;

void fun_400580() {
    goto exit;
}

int64_t puts = 0x400536;

void fun_400530(int64_t rdi, int64_t rsi) {
    goto puts;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400560(0x400881, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_400655() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void rand();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        rand();
    }
    if (1)
        goto 0x400658;
    if (1)
        goto 0x400658;
    goto 0;
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

void __libc_csu_fini() {
    return;
}

int64_t g601010 = 0;

void fun_400536() {
    goto g601010;
}

void fun_400566() {
    goto 0x400520;
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

void fun_400576() {
    goto 0x400520;
}

void fun_400596() {
    goto 0x400520;
}

void fun_400546() {
    goto 0x400520;
}

void fun_400556() {
    goto 0x400520;
}

void fun_400586() {
    goto 0x400520;
}
