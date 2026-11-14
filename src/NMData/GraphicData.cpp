// Decompiled translation unit: src/NMData/GraphicData.cpp

// [0x00587D10] NMData::GraphicData::vfunc_33 (22 bytes)
extern "C" void ext_005B5A10();
extern "C" void ext_0058A1A0();

extern "C" void __fastcall fn_00587D10(void* self) {
    typedef void (__fastcall *thiscall_fn)(void*);
    ((thiscall_fn)ext_005B5A10)(static_cast<char*>(self) + 0x154);
    ((thiscall_fn)ext_0058A1A0)(self);
}

// [0x0061FEF0] NMData::GraphicData::vfunc_6_off_C (67 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_0061FEF0(void* self, int edx_unused, float* out) {
    __asm {
        sub esp, 0x10
        add ecx, 0x148
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
        add esp, 0x10
        ret 0x4
    }
}

// [0x0061FEA0] NMData::GraphicData::vfunc_5_off_C (78 bytes)
extern "C" void ext_005B1B60();

extern "C" __declspec(naked) void __fastcall fn_0061FEA0(void* self, int edx_unused, float* v) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x148]
        call ext_005B1B60
        fldz
        cmp dword ptr [esi + 0x4], 0x0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        je skip_call
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x8]
        push edx
        call eax
skip_call:
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x0061FF40] NMData::GraphicData::vfunc_14 (60 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_0061FF40(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x9c
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        add ecx, 0x154
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00620120] NMData::GraphicData::vfunc_34 (139 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00620120(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891da8
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je short null_this
        lea eax, [esi + 0xc]
        jmp short after_this
null_this:
        xor eax, eax
after_this:
        mov edx, dword ptr [mem_00B40640]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x24]
        push eax
        call ext_00493E40
        mov edi, eax
        mov dword ptr [esp + 0x18], edi
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        call eax
        push edi
        lea ecx, [esi + 0xc]
        mov dword ptr [edi + 0x20], eax
        call ext_00528B90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x0061FE60] NMData::GraphicData::vfunc_4_off_C (56 bytes)
extern "C" void ext_005B1AB0();
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_0061FE60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x148]
        push eax
        mov ecx, edi
        call ext_005B1AB0
        cmp dword ptr [esi + 0x4], 0x0
        je skip_call
        mov ecx, dword ptr [esi + 0x4]
        push ebx
        mov ebx, dword ptr [ecx]
        mov ecx, edi
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebx + 0x34]
        push eax
        call edx
        pop ebx
skip_call:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00620040] NMData::GraphicData::vfunc_36 (90 bytes)
extern "C" void ext_005B1AB0();
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_00620040(void* self, int edx_unused, float* v) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 0x4]
        mov esi, ecx
        fld dword ptr [eax]
        push edi
        fstp dword ptr [esp + 0xc]
        lea edi, [esi + 0x154]
        fld dword ptr [eax]
        lea eax, [esp + 0x8]
        fstp dword ptr [esp + 0x10]
        push eax
        fld1
        mov ecx, edi
        fstp dword ptr [esp + 0x18]
        call ext_005B1AB0
        cmp dword ptr [esi + 0x10], 0x0
        je done
        mov ecx, dword ptr [esi + 0x10]
        push ebx
        mov ebx, dword ptr [ecx]
        mov ecx, edi
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ebx + 0x34]
        push eax
        call edx
        pop ebx
    done:
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_0058F650();
extern "C" void ext_005B44B0();
extern "C" void ext_006404E0();
extern "C" int mem_00A9EF74;

// [0x0061FE20] NMData::GraphicData::vfunc_22 (48 bytes)
extern "C" int __fastcall fn_0061FE20(void* self, int edx_unused, void* arg0) {
    int esi = ((int (__thiscall*)(void*, int))ext_006404E0)(arg0, mem_00A9EF74);
    ((void (__thiscall*)(void*, int))ext_005B44B0)((char*)self + 0x154, esi);
    ((void (__thiscall*)(void*, int))ext_0058F650)(self, esi);
    return esi;
}

extern "C" void ext_00587C80();
extern "C" void ext_006A5C62();

// [0x00620240] NMData::GraphicData::vfunc_17_off_C (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_00620240(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 1a0h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_00620240_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_00587C80
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_00620240_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x0061FF80] NMData::GraphicData::vfunc_21 (187 bytes)
extern "C" void ext_0058F630();
extern "C" void ext_005B18E0();
extern "C" void ext_005B5E50();
extern "C" void ext_0063F530();
extern "C" int mem_00A9EF58;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0061FF80(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        push esi
        mov edi, ecx
        call ext_0058F630
        mov eax, dword ptr [mem_00A9EF58]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_61ffdb
        cmp eax, 0xb53b30
        je loc_61ffdb
        cmp eax, 0xb53ab0
        je loc_61ffdb
        cmp eax, 0xb53a70
        je loc_61ffdb
        cmp eax, 0xb53af0
        jne loc_61ffe2
    loc_61ffdb:
        mov ebx, 0xb53b30
        jmp loc_61ffe4
    loc_61ffe2:
        mov ebx, eax
    loc_61ffe4:
        push 0x9349d8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        lea esi, [edi + 0x154]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0x0
        call ext_005B18E0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        push ebx
        mov ecx, esi
        call ext_005B5E50
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}
