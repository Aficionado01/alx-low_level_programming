
int64_t __gmon_start__ = 0;

void fun_400770();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400770();
    }
    return;
}

void fun_400770() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x400716;

void fun_400710(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
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

int64_t puts = 0x4006f6;

void fun_4006f0(int64_t rdi, void* rsi, int64_t* rdx) {
    goto puts;
}

int64_t strcmp = 0x400766;

int32_t fun_400760(int64_t rdi, void* rsi, int64_t* rdx) {
    goto strcmp;
}

int64_t __stack_chk_fail = 0x400756;

int64_t fun_400750(int64_t rdi, void* rsi, int64_t* rdx) {
    goto __stack_chk_fail;
}

int64_t strncmp = 0x400706;

int32_t fun_400700(int64_t rdi, void* rsi, int64_t* rdx) {
    goto strncmp;
}

int64_t MD5_Init = 0x4006d6;

void fun_4006d0(void* rdi, void* rsi, int64_t* rdx) {
    goto MD5_Init;
}

int64_t strlen = 0x400726;

int64_t fun_400720(int64_t rdi, void* rsi, int64_t* rdx) {
    goto strlen;
}

int64_t MD5_Update = 0x4006e6;

void fun_4006e0(void* rdi, int64_t rsi, int64_t rdx) {
    goto MD5_Update;
}

int64_t MD5_Final = 0x400746;

void fun_400740(void* rdi, int64_t* rsi) {
    goto MD5_Final;
}

int64_t sprintf = 0x400736;

void fun_400730(int64_t rdi, int64_t rsi, int64_t* rdx) {
    goto sprintf;
}

int64_t main(int32_t edi, void* rsi, int64_t* rdx);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400710(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_400825() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void strcmp();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        strcmp();
    }
    if (1) 
        goto 0x400828;
    if (1) 
        goto 0x400828;
    goto 0;
}

uint64_t g28;

int64_t main(int32_t edi, void* rsi, int64_t* rdx) {
    void* rbp4;
    int64_t* v5;
    uint64_t rax6;
    uint64_t v7;
    int64_t v8;
    int64_t rdi9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rax12;
    int64_t v13;
    int64_t rax14;
    int32_t v15;
    uint32_t eax16;
    int32_t eax17;
    uint64_t rcx18;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdx;
    rax6 = g28;
    v7 = rax6;
    v8 = 0;
    if (edi == 1) {
        while (*v5) {
            *reinterpret_cast<uint32_t*>(&rdx) = 20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("jennieandjayloveasm=");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
            rdi9 = *v5;
            eax10 = fun_400700(rdi9, "jennieandjayloveasm=", 20);
            if (!eax10) 
                goto addr_400910_4;
            ++v5;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>("Access Denied");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
        fun_4006f0("Access Denied", rsi, rdx);
        *reinterpret_cast<int32_t*>(&rax12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        goto addr_400a3b_7;
    }
    addr_40093a_8:
    if (v8) {
        v13 = v8 + 20;
        fun_4006d0(reinterpret_cast<int64_t>(rbp4) - 0xa0, rsi, rdx);
        rax14 = fun_400720(v13, rsi, rdx);
        fun_4006e0(reinterpret_cast<int64_t>(rbp4) - 0xa0, v13, rax14);
        rdx = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp4) - 0xa0);
        fun_400740(reinterpret_cast<int64_t>(rbp4) - 64, rdx);
        v15 = 0;
        while (v15 <= 15) {
            eax16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp4) + v15 - 64);
            *reinterpret_cast<uint32_t*>(&rdx) = *reinterpret_cast<unsigned char*>(&eax16);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
            fun_400730(reinterpret_cast<int64_t>(rbp4) - 48 + (v15 + v15), "%02x", rdx);
            ++v15;
        }
        rsi = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp4) - 48);
        eax17 = fun_400760("e99a18c428cb38d5f260853678922e03", rsi, rdx);
        if (!eax17) 
            goto addr_400a1b_13;
    } else {
        *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>("Access Denied");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
        fun_4006f0("Access Denied", rsi, rdx);
        *reinterpret_cast<int32_t*>(&rax12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        goto addr_400a3b_7;
    }
    *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>("Access Denied");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
    fun_4006f0("Access Denied", rsi, rdx);
    *reinterpret_cast<int32_t*>(&rax12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    addr_400a3b_7:
    rcx18 = v7 ^ g28;
    if (rcx18) {
        rax12 = fun_400750(rdi11, rsi, rdx);
    }
    return rax12;
    addr_400a1b_13:
    *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>("Access Granted");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = 0;
    fun_4006f0("Access Granted", rsi, rdx);
    *reinterpret_cast<int32_t*>(&rax12) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    goto addr_400a3b_7;
    addr_400910_4:
    v8 = *v5;
    goto addr_40093a_8;
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
            *reinterpret_cast<int64_t*>(0x600e00 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void __libc_csu_fini() {
    return;
}

int64_t g601010 = 0;

void fun_4006d6() {
    goto g601010;
}

void fun_400716() {
    goto 0x4006c0;
}

signed char _edata = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = _edata == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        _edata = 1;
    }
    return rax2;
}

void fun_4006f6() {
    goto 0x4006c0;
}

void fun_400766() {
    goto 0x4006c0;
}

void fun_400756() {
    goto 0x4006c0;
}

void fun_400706() {
    goto 0x4006c0;
}

void fun_400726() {
    goto 0x4006c0;
}

void fun_4006e6() {
    goto 0x4006c0;
}

void fun_400746() {
    goto 0x4006c0;
}

void fun_400736() {
    goto 0x4006c0;
}
