// Decompiled translation unit: src/AdvXMLParser/Document.cpp

extern "C" void ext_004701E0();
extern "C" void ext_00640840();

// [0x0063E940] AdvXMLParser::Document::vfunc_3 (23 bytes)
// If arg0 == 9, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E940(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 9
        jne not_nine
        mov al, 1
        ret 4
    not_nine:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x006408B0] AdvXMLParser::Document::vfunc_4 (8 bytes)
extern "C" __declspec(naked) void __fastcall fn_006408B0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_00640840
        ret 4
    }
}

// [0x0065F5E0] AdvXMLParser::Document::vfunc_1 (34 bytes)
// Constructs the std::string at a1 from an empty C string literal; returns a1.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_0065F5E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_00640940();
extern "C" void ext_00640EE0();
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;

// [0x006410D0] AdvXMLParser::Document::vfunc_5 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_006410D0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        xor bl, bl
        push 0x97cd6c
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x3c]
        push eax
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd5c
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        lea ecx, [edi + 0x58]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd58
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, esi
        call ext_00640940
        push esi
        mov ecx, edi
        call ext_00640EE0
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0063F070] AdvXMLParser::Document::vfunc_2 (220 bytes)
extern "C" void ext_00641E90();
extern "C" void ext_00641F10();
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0063F070(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b2653
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr [esp + 0x10], edi
        mov ebx, dword ptr [esp + 0x40]
        mov esi, ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x38], edi
        call dword ptr [mem_00924FE8]
        add esi, 0x24
        mov dword ptr [esp + 0x38], edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], 0x1
        jbe chk1
        call dword ptr [mem_00925134]
    chk1:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe chk2
        call dword ptr [mem_00925134]
    chk2:
        cmp esi, esi
        je chk3
        call dword ptr [mem_00925134]
    chk3:
        cmp edi, ebp
        jae done
        cmp edi, dword ptr [esi + 0x8]
        jb body
        call dword ptr [mem_00925134]
    body:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        lea edx, [esp + 0x14]
        push edx
        call eax
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x3c], 0x1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call dword ptr [mem_00925134]
    next:
        add edi, 0x4
        jmp chk1
    done:
        push ebx
        call ext_00641F10
        push ebx
        call ext_00641E90
        mov ecx, dword ptr [esp + 0x38]
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
    }
}
