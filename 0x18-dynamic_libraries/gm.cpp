
int64_t __gmon_start__ = 0;

void fun_400630();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400630();
    }
    return;
}

void fun_400630() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x4005e6;

void fun_4005e0(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
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

struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
};

int32_t check_input(struct s0* rdi, int32_t esi, int32_t edx) {
    struct s0* v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t eax9;

    v4 = rdi;
    v5 = esi;
    v6 = edx;
    v7 = 0;
    while (v7 < v6) {
        if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v4) + v7 * 4) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v4) + v7 * 4) == 0)) 
            goto addr_400785_4;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v4) + v7 * 4) > 75) 
            goto addr_400785_4;
        v8 = v7 + 1;
        while (v8 < v6) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v4) + v7 * 4) == *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v4) + v8 * 4)) 
                goto addr_4007c7_9;
            ++v8;
        }
        ++v7;
    }
    if (v6 != 5 || v5 > 0 && v5 <= 15) {
        eax9 = 1;
    } else {
        eax9 = 0;
    }
    addr_400808_15:
    return eax9;
    addr_400785_4:
    eax9 = 0;
    goto addr_400808_15;
    addr_4007c7_9:
    eax9 = 0;
    goto addr_400808_15;
}

int64_t rand = 0x400626;

int32_t fun_400620(struct s0* rdi, int32_t* rsi, ...) {
    goto rand;
}

void fun_4005c0(int64_t rdi, int64_t rsi);

void print_numbers(int32_t* rdi, int32_t esi) {
    int32_t* v3;
    int32_t v4;
    int32_t v5;
    int64_t rsi6;
    int64_t rsi7;

    v3 = rdi;
    v4 = esi;
    v5 = 0;
    while (v5 <= 4) {
        *reinterpret_cast<int32_t*>(&rsi6) = v3[v5];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        fun_4005c0("%d ", rsi6);
        ++v5;
    }
    *reinterpret_cast<int32_t*>(&rsi7) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    fun_4005c0("- %d\n", rsi7);
    return;
}

int64_t printf = 0x4005c6;

void fun_4005c0(int64_t rdi, int64_t rsi) {
    goto printf;
}

void fun_4005a0(int64_t rdi);

void check_result(int32_t* rdi, int32_t esi, int32_t* rdx, int32_t ecx) {
    int32_t* v5;
    int32_t v6;
    int32_t* v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;

    v5 = rdi;
    v6 = esi;
    v7 = rdx;
    v8 = ecx;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    while (v11 <= 4) {
        v12 = 0;
        while (v12 <= 4) {
            if (v5[v11] == v7[v12]) 
                goto addr_400a8f_6;
            ++v12;
        }
        addr_400a9f_8:
        ++v11;
        continue;
        addr_400a8f_6:
        ++v9;
        goto addr_400a9f_8;
    }
    if (v6 == v8) {
        v10 = 1;
    }
    if (v9 || v10 != 1) {
        if (v9 != 1 || v10 != 1) {
            if (v9 != 2 || v10 != 1) {
                if (v9 != 3 || v10) {
                    if (v9 != 3 || v10 != 1) {
                        if (v9 != 4 || v10) {
                            if (v9 != 4 || v10 != 1) {
                                if (v9 != 5 || v10) {
                                    if (v9 != 5 || v10 != 1) {
                                        fun_4005a0("Sorry, try again!");
                                    } else {
                                        fun_4005a0("Congratulations, you win the Jackpot!");
                                    }
                                } else {
                                    fun_4005a0("Congratulations, you win 1,000,000 points");
                                }
                            } else {
                                fun_4005a0("Congratulations, you win 5,000 points");
                            }
                        } else {
                            fun_4005a0("Congratulations, you win 500 points");
                        }
                    } else {
                        fun_4005a0("Congratulations, you win 50 points");
                    }
                } else {
                    fun_4005a0("Congratulations, you win 5 points");
                }
            } else {
                fun_4005a0("Congratulations, you win 5 points");
            }
        } else {
            fun_4005a0("Congratulations, you win 2 points");
        }
    } else {
        fun_4005a0("Congratulations, you win 1 point");
    }
    return;
}

int64_t puts = 0x4005a6;

void fun_4005a0(int64_t rdi) {
    goto puts;
}

int64_t dprintf = 0x4005d6;

void fun_4005d0(int32_t* rdi, int64_t rsi, int32_t* rdx) {
    goto dprintf;
}

int64_t __stack_chk_fail = 0x4005b6;

int64_t fun_4005b0(int32_t* rdi, int64_t rsi, int32_t* rdx) {
    goto __stack_chk_fail;
}

int32_t fun_400600(int64_t rdi);

void fun_4005f0(struct s0* rdi);

void pick_numbers(struct s0* rdi, int32_t* rsi) {
    struct s0* v3;
    int32_t* v4;
    int32_t eax5;
    struct s0* rdi6;
    int32_t eax7;
    int64_t rcx8;
    int64_t rdx9;
    int32_t eax10;
    int64_t rax11;
    int32_t eax12;
    int64_t rax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;

    v3 = rdi;
    v4 = rsi;
    eax5 = fun_400600(0);
    *reinterpret_cast<int32_t*>(&rdi6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    fun_4005f0(rdi6);
    eax7 = fun_400620(rdi6, rsi);
    *reinterpret_cast<int32_t*>(&rcx8) = eax7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx9) = __intrinsic();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    eax10 = (static_cast<int32_t>(rdx9 + rcx8) >> 3) - (*reinterpret_cast<int32_t*>(&rcx8) >> 31);
    *reinterpret_cast<int32_t*>(&rax11) = *reinterpret_cast<int32_t*>(&rcx8) - ((eax10 << 4) - eax10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    *v4 = static_cast<int32_t>(rax11 + 1);
    eax12 = fun_400620(rdi6, rsi);
    *reinterpret_cast<int32_t*>(&rax13) = eax12 - ((__intrinsic() >> 3) - (eax12 >> 31)) * 75;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    v3->f0 = static_cast<int32_t>(rax13 + 1);
    do {
        eax14 = fun_400620(rdi6, rsi, rdi6, rsi);
        v3->f4 = eax14 - ((__intrinsic() >> 3) - (eax14 >> 31)) * 75 + 1;
        *reinterpret_cast<int32_t*>(&rsi) = *v4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        rdi6 = v3;
        eax15 = check_input(rdi6, *reinterpret_cast<int32_t*>(&rsi), 2);
    } while (!eax15);
    do {
        eax16 = fun_400620(rdi6, rsi, rdi6, rsi);
        v3->f8 = eax16 - ((__intrinsic() >> 3) - (eax16 >> 31)) * 75 + 1;
        *reinterpret_cast<int32_t*>(&rsi) = *v4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        rdi6 = v3;
        eax17 = check_input(rdi6, *reinterpret_cast<int32_t*>(&rsi), 3);
    } while (!eax17);
    do {
        eax18 = fun_400620(rdi6, rsi, rdi6, rsi);
        v3->f12 = eax18 - ((__intrinsic() >> 3) - (eax18 >> 31)) * 75 + 1;
        *reinterpret_cast<int32_t*>(&rsi) = *v4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        rdi6 = v3;
        eax19 = check_input(rdi6, *reinterpret_cast<int32_t*>(&rsi), 4);
    } while (!eax19);
    do {
        eax20 = fun_400620(rdi6, rsi, rdi6, rsi);
        v3->f16 = eax20 - ((__intrinsic() >> 3) - (eax20 >> 31)) * 75 + 1;
        *reinterpret_cast<int32_t*>(&rsi) = *v4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        rdi6 = v3;
        eax21 = check_input(rdi6, *reinterpret_cast<int32_t*>(&rsi), 5);
    } while (!eax21);
    return;
}

int64_t atoi = 0x400616;

int32_t fun_400610(int64_t rdi, ...) {
    goto atoi;
}

int64_t srand = 0x4005f6;

void fun_4005f0(struct s0* rdi) {
    goto srand;
}

int64_t time = 0x400606;

int32_t fun_400600(int64_t rdi) {
    goto time;
}

struct s1 {
    signed char[8] pad8;
    int64_t f8;
    int64_t f16;
    int64_t f24;
    int64_t f32;
    int64_t f40;
    int64_t f48;
};

int64_t main(int32_t edi, struct s1* rsi, int32_t* rdx);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_4005e0(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_4006e5() {
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
        goto 0x4006e8;
    if (1) 
        goto 0x4006e8;
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
            *reinterpret_cast<int64_t*>(0x601e10 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g602010 = 0;

void fun_4005e6() {
    goto g602010;
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

void fun_400626() {
    goto 0x400590;
}

void fun_4005c6() {
    goto 0x400590;
}

void fun_4005a6() {
    goto 0x400590;
}

uint64_t g28;

int64_t main(int32_t edi, struct s1* rsi, int32_t* rdx) {
    void* rbp4;
    uint64_t rax5;
    int64_t rdi6;
    int64_t rdi7;
    int64_t rdi8;
    int64_t rdi9;
    int64_t rdi10;
    int64_t rdi11;
    int32_t eax12;
    int32_t eax13;
    int32_t v14;
    int64_t rsi15;
    int32_t v16;
    int32_t* rdi17;
    int64_t rax18;
    uint64_t rcx19;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = g28;
    if (edi == 7) {
        rdi6 = rsi->f8;
        fun_400610(rdi6);
        rdi7 = rsi->f16;
        fun_400610(rdi7, rdi7);
        rdi8 = rsi->f24;
        fun_400610(rdi8, rdi8);
        rdi9 = rsi->f32;
        fun_400610(rdi9, rdi9);
        rdi10 = rsi->f40;
        fun_400610(rdi10, rdi10);
        rdi11 = rsi->f48;
        eax12 = fun_400610(rdi11, rdi11);
        *reinterpret_cast<int32_t*>(&rdx) = 5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
        eax13 = check_input(reinterpret_cast<int64_t>(rbp4) - 64, eax12, 5);
        if (eax13) {
            pick_numbers(reinterpret_cast<int64_t>(rbp4) - 32, reinterpret_cast<int64_t>(rbp4) - 72);
            print_numbers(reinterpret_cast<int64_t>(rbp4) - 32, v14);
            *reinterpret_cast<int32_t*>(&rsi15) = v16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            rdx = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) - 64);
            rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) - 32);
            check_result(rdi17, *reinterpret_cast<int32_t*>(&rsi15), rdx, eax12);
            *reinterpret_cast<int32_t*>(&rax18) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>("Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdi17) = 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
            fun_4005d0(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n", 5);
            *reinterpret_cast<int32_t*>(&rax18) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>("Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi17) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
        fun_4005d0(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n", rdx);
        *reinterpret_cast<int32_t*>(&rax18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
    }
    rcx19 = rax5 ^ g28;
    if (rcx19) {
        rax18 = fun_4005b0(rdi17, rsi15, rdx);
    }
    return rax18;
}

void fun_4005d6() {
    goto 0x400590;
}

void fun_4005b6() {
    goto 0x400590;
}

void fun_400616() {
    goto 0x400590;
}

void fun_4005f6() {
    goto 0x400590;
}

void fun_400606() {
    goto 0x400590;
}
