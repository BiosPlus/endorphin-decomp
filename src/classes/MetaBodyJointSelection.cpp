// Decompiled translation unit: src/classes/MetaBodyJointSelection.cpp

extern "C" void ext_004EC660();
extern "C" void ext_004ED6B0();
extern "C" void ext_004EE200();
extern "C" void ext_006A5C5C();
extern "C" void ext_00494000();
extern "C" void ext_004940E0();
extern "C" void ext_0041A920();
extern "C" void ext_0048AE00();
extern "C" void ext_004AC4B0();
extern "C" void ext_004EDC90();
extern "C" void ext_00596660();
extern "C" void ext_005A63F0();
extern "C" int mem_00925134;

// [0x004EE600] MetaBodyJointSelection::vfunc_1_off_4 (25 bytes)
// Forwards its stack argument to CharacterSelection::vfunc_1_off_4 with `this`, then calls sub_004EE200 on (this - 4).
extern "C" __declspec(naked) void __fastcall fn_004EE600(void* self, int edx_unused, int a0) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_004EC660
        lea ecx, [esi - 4]
        call ext_004EE200
        pop esi
        ret 4
    }
}

// [0x004EDC10] MetaBodyJointSelection::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_004EDC10(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x58);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x58) = 0;
    *reinterpret_cast<int*>(p + 0x5c) = 0;
    *reinterpret_cast<int*>(p + 0x60) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_004ED6B0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x004EC700] MetaBodyJointSelection::vfunc_0_off_18 (159 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EC700(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x8
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov ecx, dword ptr [edi + 0x20]
        push 0x0
        push 0x0
        mov dword ptr [esi + 0x4], ecx
        push 0x8
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esi], edx
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [eax + 0x8]
        push 0x1
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], edx
        call ext_004940E0
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax], 0x6
        mov ecx, dword ptr [edi + 0x20]
        mov dword ptr [esi + 0x4], ecx
        pop edi
        mov dword ptr [edx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x004EE080] MetaBodyJointSelection::vfunc_1_off_18 (379 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EE080(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x34]
        push esi
        lea esi, [ecx + 0x24]
        push edi
        mov dword ptr [esp + 0x10], ecx
        push esi
        mov ecx, ebp
        call edx
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        cmp esi, esi
        je L_c
        call dword ptr [mem_00925134]
L_c:
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        push eax
        push edi
        push ebx
        call ext_0048AE00
        mov edi, dword ptr [esp + 0x1c]
        add esp, 0xc
        lea ecx, [edi - 0x18]
        call ext_004EDC90
        mov esi, dword ptr [edi + 0x44]
        add edi, 0x3c
        cmp dword ptr [edi + 0x4], esi
        jbe L_d
        call dword ptr [mem_00925134]
L_d:
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_e
        call dword ptr [mem_00925134]
L_e:
        push esi
        push edi
        push ebx
        push edi
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        call ext_00596660
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x14]
        mov ecx, ebp
        call eax
        mov ebx, eax
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_f
        call dword ptr [mem_00925134]
L_f:
        mov ebp, esi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_g
        call dword ptr [mem_00925134]
L_g:
        cmp ebp, esi
        je L_end
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_h
        call dword ptr [mem_00925134]
L_h:
        mov esi, dword ptr [ebp]
        test esi, esi
        mov dword ptr [esp + 0x20], esi
        je L_null
L_inner:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x14]
        mov ecx, esi
        call eax
        test al, al
        jne L_found
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x10]
        push 0x0
        mov ecx, esi
        call eax
        mov esi, eax
        test esi, esi
        jne L_inner
        mov dword ptr [esp + 0x20], esi
        jmp L_null
L_found:
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], esi
        call ext_0041A920
L_null:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_i
        call dword ptr [mem_00925134]
L_i:
        add ebp, 0x4
        jmp L_loop
L_end:
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edx + 0x38]
        test ecx, ecx
        je L_j
        push edi
        push ebx
        call ext_005A63F0
L_j:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_k
        call dword ptr [mem_00925134]
L_k:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_l
        call dword ptr [mem_00925134]
L_l:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, ebx
        push eax
        sub ecx, esi
        sar ecx, 0x2
        push ecx
        push ebx
        push esi
        call ext_004AC4B0
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}
