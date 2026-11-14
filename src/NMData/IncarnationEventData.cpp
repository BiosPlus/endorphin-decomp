// Decompiled translation unit: src/NMData/IncarnationEventData.cpp

extern "C" void ext_004CEAC0();

// [0x004CF320] NMData::IncarnationEventData::vfunc_89 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CF320(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x17c], 0
        mov byte ptr [ecx + 0x188], 0
        je done
        push ecx
        mov ecx, dword ptr [ecx + 0x184]
        call ext_004CEAC0
    done:
        ret
    }
}

extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004CE860] NMData::IncarnationEventData::vfunc_0_off_154 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CE860(void* self, int edx_unused, int* a1, int* a2, int a3, int a4) {
    __asm {
        sub esp, 0xc
        push esi
        push 0
        push 0
        push 0x40
        lea ecx, [esp + 0x10]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], 1
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [eax + 0x8], ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

extern "C" void ext_004C3410();
extern "C" void ext_004CFDC0();
extern "C" void ext_004CFDE0();
extern "C" void ext_00671F30();

// [0x004CFE20] NMData::IncarnationEventData::vfunc_15 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CFE20(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x2ec
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je case_2ec
        sub eax, 0x2b
        je case_317
        push edx
        push esi
        call ext_004C3410
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    case_317:
        cmp dword ptr [ecx + 0x180], 4
        jne f30
        push ecx
        push esi
        call ext_004CFDE0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    f30:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    case_2ec:
        push ecx
        push esi
        call ext_004CFDC0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_004C2070();

// [0x004CE830] NMData::IncarnationEventData::vfunc_14 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_004CE830(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" void ext_006404E0();
extern "C" int mem_00A9EFB8;

// [0x004CE710] NMData::IncarnationEventData::vfunc_59 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CE710(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EFB8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004CFCA0] NMData::IncarnationEventData::vfunc_87 (58 bytes)
extern "C" void ext_004CE8D0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004CFCA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 184h]
        test ecx, ecx
        je short L_done
        push edi
        call ext_004CE8D0
        mov edi, dword ptr [esi + 184h]
        test edi, edi
        je short L_clear
        mov ecx, edi
        call ext_004CE8D0
        push edi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [esi + 184h], 0
        pop edi
    L_done:
        pop esi
        ret
    }
}

// [0x004CFE90] NMData::IncarnationEventData::vfunc_86 (98 bytes)
extern "C" void ext_004CE8D0();
extern "C" void ext_004CFCE0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004CFE90(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 12
        mov byte ptr [esi + 188h], 0
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je short L_null
        fld1
        mov dword ptr [eax], 0
        fstp dword ptr [eax + 8]
        mov dword ptr [eax + 4], 6
        mov ebx, eax
        jmp short L_check
    L_null:
        xor ebx, ebx
    L_check:
        mov edi, dword ptr [esi + 184h]
        cmp ebx, edi
        je short L_done
        test edi, edi
        je short L_done
        mov ecx, edi
        call ext_004CE8D0
        push edi
        call ext_006A5C5C
        add esp, 4
    L_done:
        push esi
        mov ecx, ebx
        mov dword ptr [esi + 184h], ebx
        call ext_004CFCE0
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x004CFC30] NMData::IncarnationEventData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004CFB10();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004CFC30(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 190h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004CFC30_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004CFB10
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004CFC30_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x004CE740] NMData::IncarnationEventData::vfunc_22 (109 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00640BC0();
extern "C" void ext_00427550();
extern "C" void ext_004C1DE0();
extern "C" int mem_00A9F898;
extern "C" int mem_00924FF0;
extern "C" int mem_00AE51C8;
extern "C" int mem_009473C0;

extern "C" __declspec(naked) void __fastcall fn_004CE740(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F898]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x180]
        lea edx, [ecx*8]
        sub edx, ecx
        lea ecx, [edx*4 + mem_00AE51C8]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        push offset mem_009473C0
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x18c]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 8
        push edi
        mov ecx, esi
        call ext_004C1DE0
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_0047A7F0();
extern "C" void ext_004CE950();
extern "C" int mem_00AE29D0;

struct Base0_004CEA40 { virtual void b0(); };
struct Base4_004CEA40 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual int v9();
};
struct Obj_004CEA40 : Base0_004CEA40, Base4_004CEA40 {};

// [0x004CEA40] NMData::IncarnationEventData::vfunc_84 (116 bytes)
extern "C" void __fastcall fn_004CEA40(void* self, int edx_unused, int arg0) {
    char* s = (char*)self;
    if (s[0x17c] == 0) {
        return;
    }
    if (arg0 != *(int*)(s + 0x15c)) {
        return;
    }
    if (s[0x188] != 0) {
        return;
    }
    char* obj = *(char**)(s + 0x168);
    if (*(int*)(obj + 0x5f4) == *(int*)(s + 0x180)) {
        return;
    }
    ((void (__thiscall*)(void*))ext_004CE950)(*(void**)(s + 0x184));
    if (*(int*)(s + 0x180) == 6) {
        int res = (*(Obj_004CEA40**)(s + 0x168))->v9();
        ((void (__thiscall*)(int, int, int))ext_0047A7F0)(mem_00AE29D0, arg0, res);
    }
    s[0x188] = 1;
}

extern "C" void ext_00406510();
extern "C" void ext_0040ECB0();
extern "C" void ext_00586A50();
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" int mem_00925134; /* "P{b" */
extern "C" int mem_009849C0; /* u32 0x0000000D */

// [0x004CFF00] NMData::IncarnationEventData::vfunc_81 (209 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CFF00(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x16c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_1
        call dword ptr [mem_00925134]
    L_1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_2
        call dword ptr [mem_00925134]
    L_2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_0040ECB0
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_3
        call dword ptr [mem_00925134]
    L_3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_4
        call dword ptr [mem_00925134]
    L_4:
        cmp esi, esi
        je L_5
        call dword ptr [mem_00925134]
    L_5:
        cmp ebx, edi
        pop ebx
        je L_done
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_6
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [esi + 0x8]
    L_6:
        jb L_7
        call dword ptr [mem_00925134]
    L_7:
        push edi
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        mov esi, eax
        mov dword ptr [ebp + 0x168], esi
        call ext_00594000
        mov edx, dword ptr [eax + 0x26c]
        mov eax, dword ptr [edx + 0x538]
        cmp eax, dword ptr [mem_009849C0]
        jae L_done
        push 0x1
        push 0x200000
        lea ecx, [esi + 0x4]
        call ext_00586A50
    L_done:
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret 0x4
    }
}
