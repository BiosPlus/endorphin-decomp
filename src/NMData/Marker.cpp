// Decompiled translation unit: src/NMData/Marker.cpp

extern "C" __declspec(dllimport) void __fastcall imp_00924ea8(void* str);
extern "C" void __fastcall fn_0058A1A0(void* self);

// [0x00587F70] NMData::Marker::vfunc_33 (33 bytes)
extern "C" void __fastcall fn_00587F70(char* self) {
    *(int*)(self + 0x174) = 0;
    imp_00924ea8(self + 0x154);
    fn_0058A1A0(self);
}

// [0x00870930] NMData::Marker::vfunc_34 (116 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();

extern "C" __declspec(naked) int __fastcall fn_00870930(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0891da8h
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je short L_null
        lea eax, [esi + 0ch]
        jmp short L_cont
    L_null:
        xor eax, eax
    L_cont:
        push 0
        lea ecx, [esi + 4]
        push eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 2ch]
        call edx
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0d8h]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 24h]
        push eax
        call ext_00493E40
        mov edi, eax
        mov dword ptr [esp + 18h], edi
        push edi
        lea ecx, [esi + 0ch]
        mov dword ptr [esp + 14h], 0
        call ext_00528B90
        mov ecx, dword ptr [esp + 8]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0ch
        ret 4
    }
}

extern "C" int mem_00924FE4; extern "C" int mem_00B41AFC; extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0; extern "C" int mem_00924FD8; extern "C" int mem_00924FF4;
// [0x008704D0] NMData::Marker::vfunc_3 (351 bytes)
extern "C" __declspec(naked) void __fastcall fn_008704D0(void* self, int edx_unused, void* out) {
    __asm {
        push -1
        push 0x8c1d60
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov [esp+0xc], ebx
        mov eax, [esi+0x174]
        lea ecx, [eax+4]
        mov eax, [ecx]
        mov edx, [eax+0xc]
        push edi
        mov edi, [esp+0xb0]
        push edi
        mov [esp+0xac], ebx
        call edx
        mov [esp+0xa8], ebx
        mov ebx, 1
        push 0x92ab70
        lea ecx, [esp+0x88]
        mov [esp+0x14], ebx
        call dword ptr [mem_00924FE4]
        mov ebp, eax
        push 0x92ab70
        lea ecx, [esp+0x50]
        mov [esp+0xac], ebx
        call dword ptr [mem_00924FE4]
        mov ecx, [mem_00B41AFC]
        push ecx
        push eax
        lea edx, [esp+0x38]
        push edx
        mov byte ptr [esp+0xb4], 2
        call dword ptr [mem_00924ECC]
        push ebp
        mov ebp, [mem_00924FD0]
        push eax
        lea eax, [esp+0x28]
        push eax
        mov byte ptr [esp+0xc0], 3
        call ebp
        add esp, 0x18
        mov ebx, eax
        mov edx, [esi]
        mov eax, [edx+0x24]
        mov ecx, esi
        mov byte ptr [esp+0xa8], 4
        call eax
        push eax
        lea ecx, [esp+0x6c]
        push ebx
        push ecx
        call ebp
        add esp, 0xc
        push eax
        mov ecx, edi
        mov byte ptr [esp+0xac], 5
        call dword ptr [mem_00924FD8]
        lea ecx, [esp+0x68]
        mov byte ptr [esp+0xa8], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x14]
        mov byte ptr [esp+0xa8], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x30]
        mov byte ptr [esp+0xa8], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x4c]
        mov byte ptr [esp+0xa8], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+0x84]
        mov byte ptr [esp+0xa8], 0
        call dword ptr [mem_00924FF4]
        mov eax, edi
        pop edi
        pop esi
        mov ecx, [esp+0x98]
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x9c
        ret 4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0058F630();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067B930();
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F744;
extern "C" int mem_00A9F1B0;
extern "C" int mem_00A9F3B8;
extern "C" int mem_00B40640;

// [0x00870650] NMData::Marker::vfunc_21 (412 bytes)
extern "C" __declspec(naked) void __fastcall fn_00870650(void* self) {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        push esi
        mov edi, ecx
        call ext_0058F630
        mov eax, dword ptr mem_00A9F7F4
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je L_1
        cmp eax, 0B53B30h
        je L_1
        cmp eax, 0B53AB0h
        je L_1
        cmp eax, 0B53A70h
        je L_1
        cmp eax, 0B53AF0h
        je L_1
        mov dword ptr [edi + 170h], 0
        mov ecx, dword ptr mem_00A9F7F4
        jmp L_2
L_1:
        mov eax, dword ptr mem_00A9F744
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0B53A34h
        je L_3
        cmp eax, 0B53B30h
        je L_3
        cmp eax, 0B53AB0h
        je L_3
        cmp eax, 0B53A70h
        je L_3
        cmp eax, 0B53AF0h
        je L_3
        mov dword ptr [edi + 170h], 1
        mov ecx, dword ptr mem_00A9F744
L_2:
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea edx, [edi + 154h]
        push edx
        call ext_004275E0
        add esp, 8
L_3:
        mov eax, dword ptr mem_00A9F1B0
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_4
        cmp eax, 0B53B30h
        je L_4
        cmp eax, 0B53AB0h
        je L_4
        cmp eax, 0B53A70h
        je L_4
        cmp eax, 0B53AF0h
        jne L_5
L_4:
        mov eax, 0B53B30h
L_5:
        cmp eax, 0B53A34h
        je L_end
        cmp eax, 0B53B30h
        je L_end
        cmp eax, 0B53AB0h
        je L_end
        cmp eax, 0B53A70h
        je L_end
        cmp eax, 0B53AF0h
        je L_end
        fldz
        mov ecx, dword ptr mem_00A9F3B8
        push 1
        fst dword ptr [esp + 14h]
        push 0
        fst dword ptr [esp + 14h]
        push ecx
        fstp dword ptr [esp + 14h]
        mov ecx, eax
        call ext_0063F530
        cmp eax, 0B53A34h
        je L_6
        cmp eax, 0B53B30h
        je L_6
        cmp eax, 0B53AB0h
        je L_6
        cmp eax, 0B53A70h
        je L_6
        cmp eax, 0B53AF0h
        jne L_7
L_6:
        mov eax, 0B53B30h
L_7:
        push eax
        lea ecx, [esp + 0ch]
        call ext_0067B930
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr mem_00B40640
        mov edx, dword ptr [edx + 0ch]
        lea ecx, [edi + 4]
        push eax
        call edx
        fld dword ptr [esp + 8h]
        fstp dword ptr [eax + 30h]
        fld dword ptr [esp + 0ch]
        fstp dword ptr [eax + 34h]
        fld dword ptr [esp + 10h]
        fstp dword ptr [eax + 38h]
        fld1
        fstp dword ptr [eax + 3ch]
L_end:
        pop edi
        pop esi
        add esp, 0ch
        ret 4
    }
}
