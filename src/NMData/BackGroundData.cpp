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
