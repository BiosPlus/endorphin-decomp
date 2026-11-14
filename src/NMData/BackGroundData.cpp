// Decompiled translation unit: src/NMData/BackGroundData.cpp

extern "C" void ext_005A7FA0();

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// Pushes 0 and arg0 and tail-calls 0x005A7FA0 (callee cleans up), then returns popping arg0.
extern "C" __declspec(naked) void __stdcall fn_005A9960(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_005A7FA0
        ret 4
    }
}

// [0x005A98F0] NMData::BackGroundData::vfunc_6 (35 bytes)
// Constructs a std::string in the hidden return buffer (stack arg, ret 0x4) from a
// C string pointer loaded from a global, via the imported basic_string(const char*) ctor;
// returns the buffer in eax.
extern "C" int mem_00A9ED98;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005A98F0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9ED98]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0059F4F0] NMData::BackGroundData::vfunc_30_off_4 (36 bytes)
extern "C" void ext_0059E060();
extern "C" bool __fastcall fn_0059F4F0(void* self) {
    typedef unsigned char (__fastcall *CheckF)(void*);
    typedef unsigned char (__thiscall *VfF)(void*);
    void* obj = (char*)self - 4;
    if (((CheckF)ext_0059E060)(obj)) {
        if (((VfF)(*(void***)obj)[10])(obj)) {
            return false;
        }
    }
    return true;
}

// [0x005A9880] NMData::BackGroundData::vfunc_3_off_4 (37 bytes)
// Calls vtable slot 9 (+0x24) on self with a 0 argument, then copy-constructs the
// returned std::string into the hidden return buffer (stack arg, ret 0x4) via the
// imported basic_string copy ctor; returns the buffer in eax.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005A9880(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push esi
        mov dword ptr [esp + 0x4], 0
        call edx
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0059DB70] NMData::BackGroundData::vfunc_23_off_4 (38 bytes)
extern "C" int mem_0093BED0;
extern "C" int mem_0093BEDC;
typedef void* (__thiscall *AssignCStrF)(void* self, const char* s);
extern "C" AssignCStrF mem_00924FD4;
extern "C" void __fastcall fn_0059DB70(void* self, int edx_unused, int a1) {
    mem_00924FD4(static_cast<char*>(self) + 0x14, reinterpret_cast<const char*>(mem_0093BED0));
    mem_00924FD4(static_cast<char*>(self) + 0x30, reinterpret_cast<const char*>(mem_0093BEDC));
}

// [0x0059DD70] NMData::BackGroundData::vfunc_4_off_10 (40 bytes)
// Scales the float at self+0x4dc by *a1, then calls vtable slot 25 (+0x64) on the
// object at self-0xc with that product as a single float argument; returns its result.
extern "C" __declspec(naked) float __fastcall fn_0059DD70(void* self, int edx_unused, const float* a1) {
    __asm {
        mov eax, ecx
        fld dword ptr [eax + 0x4dc]
        mov edx, dword ptr [eax - 0xc]
        mov edx, dword ptr [edx + 0x64]
        lea ecx, [eax - 0xc]
        mov eax, dword ptr [esp + 0x4]
        fmul dword ptr [eax]
        push ecx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call edx
        ret 0x4
    }
}

// [0x0059FFD0] NMData::BackGroundData::vfunc_0_off_15C (35 bytes)
extern "C" void ext_0059FF10();
extern "C" int mem_00B40644;
extern "C" float __fastcall fn_0059FFD0(void* self) {
    typedef void* (__thiscall *LookupF)(void*, int);
    int key = *(int*)((char*)self + 0x4c0);
    if (key == 0x7fffffff) {
        return *(float*)((char*)self + 0x4bc);
    }
    void* p = ((LookupF)ext_0059FF10)((void*)mem_00B40644, key);
    return *(float*)p;
}

// [0x0059FF60] NMData::BackGroundData::vfunc_10_off_10 (109 bytes)
// Iterates a container of 4-byte element pointers from [self+0x74] (begin) to [self+0x78] (end),
// with the MSVC iterator checks (failure -> invalid_parameter_noinfo). For each element it calls
// subobject vtable slot 9 (+0x24) with arg a1, then slot 10 (+0x28) with (a1, 1).
// Stack args: a1 at [esp+4] on entry, one unused dword; ret 0x8.
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0059FF60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x74]
        cmp esi, dword ptr [edi + 0x78]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov ebp, dword ptr [esp + 0x14]
    L_top:
        mov ebx, dword ptr [edi + 0x78]
        cmp dword ptr [edi + 0x74], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, ebx
        je L_done
        cmp esi, dword ptr [edi + 0x78]
        mov ebx, dword ptr [mem_00925134]
        jb L_chk3
        call ebx
    L_chk3:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push ebp
        call edx
        cmp esi, dword ptr [edi + 0x78]
        jb L_chk4
        call ebx
    L_chk4:
        mov eax, dword ptr [esi]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push 1
        push ebp
        call edx
        cmp esi, dword ptr [edi + 0x78]
        jb L_chk5
        call ebx
    L_chk5:
        add esi, 4
        jmp L_top
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x0059F490] NMData::BackGroundData::vfunc_14_off_4 (84 bytes)
// If a2 == 0x14b and sub_0059E060(self-4) is true, calls sub_00661650(arg1) with self+0x61c
// and returns arg1; otherwise forwards (arg1, a2) to AxisDefineSensorData::vfunc_14 and returns arg1.
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_0059F490(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        cmp edi, 0x14b
        mov esi, ecx
        mov dword ptr [esp + 0x8], 0x0
        jne L_else
        lea ecx, [esi - 0x4]
        call ext_0059E060
        test al, al
        je L_else
        add esi, 0x61c
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_else:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0058F6B0
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005A1AA0] NMData::BackGroundData::vfunc_44_off_4 (125 bytes)
extern "C" int mem_00925134;
extern "C" void ext_0059E060();
extern "C" void ext_005E09D0();
extern "C" void ext_00673C20();
extern "C" __declspec(naked) void __fastcall fn_005A1AA0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        lea ecx, [esi - 4]
        call ext_0059E060
        test al, al
        je L_ret_005A1AA0
        mov eax, dword ptr [esi + 0x5a4]
        mov eax, dword ptr [eax]
        push ebp
        push edi
        lea edi, [esi + 0x5a0]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ebp
        push ebx
        nop
    L_loop_005A1AA0:
        test esi, esi
        mov ebx, dword ptr [edi + 4]
        je L_inv1_005A1AA0
        cmp esi, edi
        je L_ok1_005A1AA0
    L_inv1_005A1AA0:
        call dword ptr [mem_00925134]
    L_ok1_005A1AA0:
        cmp ebp, ebx
        je L_done_005A1AA0
        test esi, esi
        jne L_ok2_005A1AA0
        call dword ptr [mem_00925134]
    L_ok2_005A1AA0:
        cmp ebp, dword ptr [esi + 4]
        jne L_ok3_005A1AA0
        call dword ptr [mem_00925134]
    L_ok3_005A1AA0:
        mov ecx, dword ptr [ebp + 0x28]
        call ext_005E09D0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop_005A1AA0
    L_done_005A1AA0:
        pop ebx
        pop edi
        pop ebp
    L_ret_005A1AA0:
        pop esi
        add esp, 8
        ret
    }
}

extern "C" void ext_0058A200();
extern "C" void ext_00594000();
extern "C" void ext_005946C0();
extern "C" int mem_00924FF4;

// [0x0059D6A0] NMData::BackGroundData::vfunc_56_off_4 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059D6A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x5f4], 0
        je label_ret_zero
        call ext_00594000
        cmp dword ptr [esi + 0x5f4], eax
        jne label_ret_zero
        push 3
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x15c]
        call ext_0058A200
        mov ecx, dword ptr [esi + 0x5f4]
        push eax
        mov dword ptr [esp + 0x30], 0
        call ext_005946C0
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        fld dword ptr [esp + 4]
        pop esi
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret

    label_ret_zero:
        mov ecx, dword ptr [esp + 0x24]
        fldz
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0059E080] NMData::BackGroundData::vfunc_25_off_4 (337 bytes)
extern "C" void ext_00410390();
extern "C" void ext_00410420();
extern "C" void ext_00492520();
extern "C" void ext_00492540();
extern "C" void ext_00493EE0();
extern "C" void ext_00586660();
extern "C" void ext_00586D00();
extern "C" void ext_00594000();
extern "C" void ext_0059DE20();
extern "C" void ext_0059DE40();
extern "C" void ext_006AD940();
extern "C" int mem_00955998;
extern "C" int mem_009324A4;

extern "C" __declspec(naked) void __fastcall fn_0059E080(void* self) {
    __asm {
        sub esp, 0x1c
        fld dword ptr [mem_00955998]
        push esi
        mov esi, ecx
        fstp dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x5f4]
        fld dword ptr [mem_009324A4]
        test eax, eax
        fstp dword ptr [esp + 0x4]
        je loc_59e1ca
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492540
        test al, al
        jne loc_59e1ca
        fldz
        fcom dword ptr [esp + 0x24]
        fnstsw ax
        test ah, 0x5
        jp loc_59e1c8
        fcomp dword ptr [esi + 0x4e8]
        fnstsw ax
        test ah, 0x5
        jp loc_59e1ca
        push edi
        lea edi, [esi - 0x4]
        mov ecx, edi
        call ext_00410420
        test al, al
        je loc_59e120
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        call ext_0059DE20
        fld dword ptr [eax]
        lea edx, [esp + 0x14]
        fstp dword ptr [esp + 0x30]
        push edx
        lea eax, [esp + 0x34]
        push eax
        call ext_0059DE40
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x38]
        add esp, 0x10
loc_59e120:
        fld dword ptr [esp + 0x28]
        mov edx, dword ptr [esi + 0x15c]
        fdiv dword ptr [esi + 0x4e8]
        mov edx, dword ptr [edx + 0x94]
        lea ecx, [esi + 0x15c]
        lea eax, [esp + 0x14]
        push eax
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x20]
        fld1
        fstp dword ptr [esp + 0x24]
        call edx
        fld dword ptr [esp + 0x28]
        mov ecx, edi
        fstp dword ptr [esi + 0x4e8]
        call ext_00410390
        test al, al
        pop edi
        je loc_59e1a3
        mov eax, dword ptr [esi + 0x5f4]
        test eax, eax
        je loc_59e1a3
        mov eax, dword ptr [eax + 0x26c]
        push 0x0
        mov ecx, eax
        call ext_006AD940
        mov ecx, eax
        call ext_00492520
        test eax, eax
        je loc_59e1a3
        fld dword ptr [esi + 0x4e8]
        fstp dword ptr [eax + 0x4f0]
loc_59e1a3:
        mov ecx, esi
        call ext_00586D00
        mov ecx, esi
        call ext_00586660
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EE0
        pop esi
        add esp, 0x1c
        ret 0x4
loc_59e1c8:
        fstp st(0)
loc_59e1ca:
        pop esi
        add esp, 0x1c
        ret 0x4
    }
}

// [0x005A5400] NMData::BackGroundData::vfunc_6_off_4 (77 bytes)
extern "C" void ext_00479C80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005A5400(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 0x544]
        push esi
        lea esi, [ecx + 0x540]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], ecx
        jbe skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push ebp
        push esi
        push eax
        push esi
        push ebx
        push edi
        mov ecx, edi
        call ext_00479C80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x4
    }
}

// [0x0059F420] NMData::BackGroundData::vfunc_12_off_10 (99 bytes)
extern "C" void ext_00481BD0();
extern "C" void ext_004925B0();
extern "C" void ext_0059A660();
extern "C" void ext_006AD940();
extern "C" __declspec(naked) void __fastcall fn_0059F420(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x5e8]
        push edi
        lea edi, [esi - 0x10]
        mov ecx, edi
        call ext_0059E060
        test al, al
        je loc_0059F441
    loc_0059F439:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x8
    loc_0059F441:
        mov ecx, dword ptr [ebx + 0x26c]
        push edi
        call ext_006AD940
        mov ecx, eax
        call ext_004925B0
        test al, al
        jne loc_0059F439
        lea eax, [esi - 0x10]
        test eax, eax
        je loc_0059F464
        lea eax, [esi - 0xc]
        jmp loc_0059F466
    loc_0059F464:
        xor eax, eax
    loc_0059F466:
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_00481BD0
        add esi, 0x8
        push esi
        mov ecx, ebx
        call ext_0059A660
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x8
    }
}

// [0x005A2FB0] NMData::BackGroundData::vfunc_3 (823 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0058F650();
extern "C" void ext_005A0490();
extern "C" void ext_005A09D0();
extern "C" void ext_005A0AC0();
extern "C" void ext_005A13F0();
extern "C" void ext_005A1490();
extern "C" void ext_005A1530();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" void ext_00662810();
extern "C" void ext_00673C20();
extern "C" void ext_00675020();
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9FA74;
extern "C" int mem_00A9F558;
extern "C" int mem_009849A4;
extern "C" int mem_00A9F590;
extern "C" int mem_00A9F72C;
extern "C" int mem_00A9F068;
extern "C" int mem_00A9F26C;
extern "C" int mem_00A9EE74;
extern "C" int mem_00925134;
extern "C" int mem_00A9F200;
extern "C" int mem_00A9F224;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00924FEC;
extern "C" int mem_00A9F288;
extern "C" int mem_00A9EEC8;

extern "C" __declspec(naked) void __fastcall fn_005A2FB0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, ecx
        push esi
        lea ecx, [edi + 0x4]
        call ext_0058F650
        mov eax, dword ptr [mem_00A9F838]
        push eax
        mov ecx, esi
        call ext_00640110
        lea ebx, [edi + 0x18]
        mov ecx, ebx
        mov dword ptr [esp + 0x24], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x28]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9FA74]
        push ecx
        mov ecx, esi
        call ext_00640110
        lea ecx, [edi + 0x458]
        mov dword ptr [esp + 0x24], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x28]
        call ext_00427550
        lea edx, [edi + 0x490]
        push edx
        push 0x95e770
        push esi
        call ext_00662810
        lea eax, [edi + 0x4ac]
        push eax
        push 0x95e768
        push esi
        call ext_00662810
        mov ecx, dword ptr [mem_00A9F558]
        add esp, 0x18
        push ecx
        mov ecx, esi
        call ext_00640110
        mov edx, dword ptr [mem_009849A4]
        push edx
        push eax
        call ext_00640AA0
        add esp, 0x8
        cmp byte ptr [edi + 0x4e0], 0x0
        jne loc_005A3081
        mov eax, dword ptr [mem_00A9F590]
        push eax
        mov ecx, esi
        call ext_00640110
        push 0x93a808
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x28], eax
        call ext_00427550
    loc_005A3081:
        mov ecx, dword ptr [mem_00A9F72C]
        push ecx
        mov ecx, esi
        call ext_00640110
        movzx edx, byte ptr [edi + 0x4e6]
        push edx
        push eax
        call ext_00640A80
        add esp, 0x8
        push 0x95e754
        mov ecx, esi
        call ext_00640110
        mov ecx, dword ptr [edi + 0x4e8]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
        push 0x95e748
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x4ec]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        push 0x95e738
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x4f0]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F838]
        push ebx
        push edx
        push esi
        call ext_00662810
        mov eax, dword ptr [mem_00A9F068]
        push 0
        push 0
        push eax
        lea ecx, [edi + 0x5e0]
        push esi
        push ecx
        call ext_005A09D0
        mov edx, dword ptr [mem_00A9F26C]
        push 0
        push 0
        push edx
        lea eax, [edi + 0x550]
        push esi
        push eax
        call ext_005A09D0
        mov ecx, dword ptr [mem_00A9EE74]
        push 0
        push 0
        push ecx
        lea edx, [edi + 0x55c]
        push esi
        push edx
        call ext_005A0AC0
        add esp, 0x50
        push esi
        mov ecx, edi
        call ext_005A13F0
        push esi
        mov ecx, edi
        call ext_005A1490
        push esi
        mov ecx, edi
        call ext_005A1530
        mov ecx, dword ptr [edi + 0x590]
        mov ecx, dword ptr [ecx]
        lea eax, [edi + 0x58c]
        mov ebx, eax
        mov ebp, ecx
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebp
    loc_005A3181:
        test ebx, ebx
        mov edx, dword ptr [edi + 0x590]
        lea eax, [edi + 0x58c]
        mov dword ptr [esp + 0x1c], edx
        je loc_005A3199
        cmp ebx, eax
        je loc_005A319F
    loc_005A3199:
        call dword ptr [mem_00925134]
    loc_005A319F:
        cmp ebp, dword ptr [esp + 0x1c]
        je loc_005A3233
        test ebx, ebx
        jne loc_005A31B3
        call dword ptr [mem_00925134]
    loc_005A31B3:
        cmp ebp, dword ptr [ebx + 0x4]
        jne loc_005A31BE
        call dword ptr [mem_00925134]
    loc_005A31BE:
        mov ebx, dword ptr [ebp + 0x28]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x70]
        mov ecx, ebx
        call edx
        test al, al
        mov eax, dword ptr [mem_00A9F200]
        push 0
        mov ecx, esi
        push eax
        je loc_005A320E
        call ext_00640390
        mov ecx, dword ptr [mem_00A9F224]
        mov ebp, dword ptr [ebx]
        push ecx
        mov ecx, eax
        add ebp, 0x58
        call ext_006404E0
        mov edx, dword ptr [ebp]
        push eax
        mov ecx, ebx
        call edx
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
        jmp loc_005A3181
    loc_005A320E:
        call ext_00640390
        mov edx, dword ptr [ebx]
        push eax
        mov eax, dword ptr [edx + 0x58]
        mov ecx, ebx
        call eax
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x10]
        jmp loc_005A3181
    loc_005A3233:
        mov ecx, dword ptr [mem_00A9F0C0]
        push 0
        push 0
        push ecx
        lea edx, [edi + 0x598]
        push esi
        push edx
        call ext_005A09D0
        add esp, 0x14
        lea ecx, [edi + 0x2f8]
        call dword ptr [mem_00924FEC]
        test al, al
        je loc_005A3285
        lea ecx, [edi + 0x314]
        call dword ptr [mem_00924FEC]
        test al, al
        je loc_005A3285
        mov eax, dword ptr [edi + 0x334]
        test eax, eax
        je loc_005A32A9
        mov ecx, dword ptr [edi + 0x338]
        sub ecx, eax
        sar ecx, 2
        je loc_005A32A9
    loc_005A3285:
        mov edx, dword ptr [mem_00A9F288]
        mov ebx, dword ptr [edi + 0x160]
        lea ebp, [edi + 0x160]
        push edx
        mov ecx, esi
        add ebx, 0x58
        call ext_006404E0
        push eax
        mov eax, dword ptr [ebx]
        mov ecx, ebp
        call eax
    loc_005A32A9:
        mov ecx, dword ptr [mem_00A9EEC8]
        push 0
        push ecx
        mov ecx, esi
        call ext_00640390
        mov ecx, dword ptr [edi + 0x5fc]
        push eax
        call ext_00675020
        push 0
        push 0x95e720
        mov ecx, esi
        call ext_00640390
        push eax
        mov ecx, edi
        call ext_005A0490
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x005A5450] NMData::BackGroundData::vfunc_20 (346 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005A3540();
extern "C" void ext_005A4D60();
extern "C" void ext_005C0E70();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A5C62();
extern "C" int mem_0093BED0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_005A5450(void* self, int edx_unused, int arg1) {
    __asm {
        push -1
        push 0x8a1876
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x54
        mov eax, dword ptr [esp + 0x64]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov edi, ecx
        call ext_005A4D60
        mov ecx, dword ptr [mem_0093BED0]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        sub esp, 0x1c
        lea edx, [esp + 0x2c]
        mov ecx, esp
        mov dword ptr [esp + 0x90], esp
        push edx
        mov dword ptr [esp + 0x8c], 0
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x598]
        call ext_005DF5C0
        or ebx, -1
        lea ecx, [esp + 0x10]
        mov esi, eax
        mov dword ptr [esp + 0x6c], ebx
        call dword ptr [mem_00924FF4]
        test esi, esi
        jne L_5a558e
        push 0x220
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x74], eax
        test eax, eax
        mov dword ptr [esp + 0x6c], 1
        je L_5a54f9
        mov ecx, eax
        call ext_005C0E70
        mov esi, eax
        jmp L_5a54fb
    L_5a54f9:
        xor esi, esi
    L_5a54fb:
        mov eax, dword ptr [mem_0093BED0]
        push eax
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x70], ebx
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x5c]
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x70], 2
        call edx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x6c], ebx
        call dword ptr [mem_00924FF4]
        lea ebp, [edi + 0x160]
        mov dword ptr [esi + 0x20c], ebp
        mov eax, dword ptr [mem_0093BED0]
        push eax
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x48]
        push ecx
        lea ecx, [edi + 0x314]
        mov dword ptr [esp + 0x70], 3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x6c], ebx
        call dword ptr [mem_00924FF4]
        push 0
        push esi
        mov ecx, ebp
        mov dword ptr [edi + 0x38c], esi
        call ext_00587920
        push esi
        mov ecx, edi
        call ext_005A3540
    L_5a558e:
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        mov byte ptr [esi + 0x8c], 1
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 0x60
        ret 4
    }
}

// [0x005A4810] NMData::BackGroundData::vfunc_33_off_4 (713 bytes)
extern "C" void ext_00495A20();
extern "C" void ext_00587920();
extern "C" void ext_0058A1A0();
extern "C" void ext_00599E40();
extern "C" void ext_005A0910();
extern "C" void ext_005A0970();
extern "C" void ext_005AE480();
extern "C" int mem_009849A4;
extern "C" __declspec(naked) void __fastcall fn_005A4810(void* self) {
    __asm {
        fldz
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fstp dword ptr [esi + 0x4f0]
        push edi
        fld1
        lea edi, [esi + 0x594]
        fst dword ptr [esi + 0x4e8]
        xor ebx, ebx
        fstp dword ptr [esi + 0x4ec]
        mov byte ptr [esi + 0x4dc], bl
        mov byte ptr [esi + 0x4e0], bl
        mov byte ptr [esi + 0x4e2], 1
        mov dword ptr [esi + 0x4e4], 3
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x58c]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x588]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x5a4]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x5a0]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x550]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x54c]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x55c]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x558]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x568]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x564]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x574]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x570]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        mov dword ptr [edi + 8], edi
        mov eax, dword ptr [esi + 0x580]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x57c]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0970
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        lea ebp, [esi + 0x15c]
        mov dword ptr [edi + 8], edi
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x84]
        mov ecx, ebp
        call eax
        lea edi, [esi + 0x5dc]
        lea ecx, [esi - 4]
        mov dword ptr [esi + 0x2e8], ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        call ext_005A0910
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, edi
        call ext_005AE480
        mov eax, dword ptr [edi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax], eax
        mov edi, dword ptr [edi + 4]
        lea ecx, [esi + 0x61c]
        mov dword ptr [edi + 8], edi
        call ext_00495A20
        mov ecx, esi
        call ext_0058A1A0
        push ebx
        push ebp
        mov ecx, esi
        call ext_00587920
        fld1
        mov dword ptr [esi + 0x5ec], 6
        mov dword ptr [esi + 0x5f0], ebx
        mov byte ptr [esi + 0x4e0], bl
        mov ecx, dword ptr [mem_009849A4]
        fstp dword ptr [esi + 0x600]
        fldz
        mov dword ptr [esi + 0x5fc], ecx
        mov ecx, dword ptr [esi + 0x5f4]
        fstp dword ptr [esi + 0x614]
        cmp ecx, ebx
        je short done_5A4810
        add esi, 0x14
        push esi
        call ext_00599E40
    done_5A4810:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x005A6010] NMData::BackGroundData::vfunc_58_off_4 (276 bytes)
// SEH-framed (fs:[0] chain, handler 0x008b56f9); iterates a list rooted at self+0x594,
// calls the imported string ctor/empty/dtor and sub_0040ECB0 on non-empty strings.
extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005A6010(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        mov ebx, dword ptr [esp + 0x40]
        push ebp
        push esi
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        push edi
        mov ebp, ecx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        jbe L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        push esi
        push ebx
        push edi
        push ebx
        lea eax, [esp + 0x28]
        push eax
        mov ecx, ebx
        call ext_00406510
        mov eax, dword ptr [ebp + 0x598]
        mov eax, dword ptr [eax]
        lea edi, [ebp + 0x594]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebp
        jmp short L_loop
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop:
        test esi, esi
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x1c], ecx
        je L_chk4
        cmp esi, edi
        je L_chk5
L_chk4:
        call dword ptr [mem_00925134]
L_chk5:
        cmp ebp, dword ptr [esp + 0x1c]
        je L_done
        test esi, esi
        jne L_chk6
        call dword ptr [mem_00925134]
L_chk6:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_body
        call dword ptr [mem_00925134]
L_body:
        mov ecx, dword ptr [ebp + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_dtor
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebx
        call ext_0040ECB0
L_dtor:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop
L_done:
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret 4
    }
}
