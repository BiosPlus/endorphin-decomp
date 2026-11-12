// Decompiled translation unit: src/AdvXMLParser/Attribute.cpp

extern "C" void ext_004701E0();

// [0x0063E220] AdvXMLParser::Attribute::vfunc_3 (23 bytes)
// If arg0 == 2, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E220(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 2
        jne not_two
        mov al, 1
        ret 4
    not_two:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

extern "C" void ext_00640EE0();
extern "C" int mem_00924FD8;
extern "C" int mem_00924ED0;

// [0x00640F50] AdvXMLParser::Attribute::vfunc_5 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_00640F50(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x4]
        push eax
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd4c
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        push esi
        mov ecx, edi
        call ext_00640EE0
        mov ecx, dword ptr [esi + 0x8]
        push 0x92b4a0
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

// [0x0063EE20] AdvXMLParser::Attribute::vfunc_1 (205 bytes)
// Builds a std::string in the hidden return buffer (a1): concatenates vfunc_4 results of each child pointer in the vector at this+0x24.
extern "C" __declspec(naked) void* __fastcall fn_0063EE20(void* self, int edx_unused, void* a1) {
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
        mov eax, dword ptr [eax + 0x4]
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
        mov ecx, dword ptr [esp + 0x30]
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
