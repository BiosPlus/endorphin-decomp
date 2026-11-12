// Decompiled translation unit: src/AdvXMLParser/Element.cpp

extern "C" void ext_004701E0();

// [0x0063E3C0] AdvXMLParser::Element::vfunc_3 (23 bytes)
// If arg0 == 1, return with al unchanged (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E3C0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 1
        jne not_one
        mov al, al
        ret 4
    not_one:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

extern "C" void ext_00641F80();
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

// [0x0063EEF0] AdvXMLParser::Element::vfunc_2 (228 bytes)
// Builds a std::string in the hidden return buffer (a1): concatenates vfunc_2 results of each child pointer in the vector at this+0x24,
// then calls 0x00641F80 (this in ecx, buffer pointer pushed) when this+0x4c is clear.
extern "C" __declspec(naked) void* __fastcall fn_0063EEF0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8924b3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr [esp + 0xc], edi
        mov ebx, dword ptr [esp + 0x40]
        mov esi, ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x38], edi
        call dword ptr [mem_00924FE8]
        add esi, 0x24
        mov dword ptr [esp + 0x38], edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0xc], 0x1
        jbe chk_ok1
        call dword ptr [mem_00925134]
    chk_ok1:
        push ebp
    loop_top:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        jbe chk_ok2
        call dword ptr [mem_00925134]
    chk_ok2:
        cmp esi, esi
        je chk_ok3
        call dword ptr [mem_00925134]
    chk_ok3:
        cmp edi, ebp
        jae loop_done
        cmp edi, dword ptr [esi + 0x8]
        jb body
        call dword ptr [mem_00925134]
    body:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        lea edx, [esp + 0x18]
        push edx
        call eax
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x40], 0x1
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], 0x0
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call dword ptr [mem_00925134]
    next:
        add edi, 0x4
        jmp loop_top
    loop_done:
        mov ecx, dword ptr [esp + 0x14]
        cmp byte ptr [ecx + 0x4c], 0x0
        pop ebp
        jne skip_tail
        push ebx
        call ext_00641F80
        add esp, 0x4
    skip_tail:
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}
