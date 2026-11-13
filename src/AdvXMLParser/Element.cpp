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

extern "C" void ext_00640930();
extern "C" void ext_00640CB0();
extern "C" void ext_00640CD0();
extern "C" void ext_00640EE0();
extern "C" int mem_00924EC0;
extern "C" int mem_00924ED0;

// [0x00640FA0] AdvXMLParser::Element::vfunc_5 (304 bytes)
extern "C" __declspec(naked) void __fastcall fn_00640FA0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], edi
        call ext_00640CB0
        mov ecx, dword ptr [esi + 0x8]
        push 0x3c
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924EC0]
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x4]
        push eax
        mov byte ptr [esi + 0x11], 0
        mov dword ptr [esp + 0x1c], eax
        call dword ptr [mem_00924FD8]
        mov ebp, dword ptr [edi + 0x40]
        add edi, 0x3c
        cmp ebp, dword ptr [edi + 0x8]
        jbe loc_640ff0
        call dword ptr [mem_00925134]
        jmp loc_640ff0

        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
loc_640ff0:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe loc_640ffe
        call dword ptr [mem_00925134]
loc_640ffe:
        cmp edi, edi
        je loc_641008
        call dword ptr [mem_00925134]
loc_641008:
        cmp ebp, ebx
        jae loc_641041
        mov ecx, dword ptr [esi + 0x8]
        push 0x20
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924EC0]
        cmp ebp, dword ptr [edi + 0x8]
        jb loc_641026
        call dword ptr [mem_00925134]
loc_641026:
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        push esi
        call edx
        cmp ebp, dword ptr [edi + 0x8]
        jb loc_64103c
        call dword ptr [mem_00925134]
loc_64103c:
        add ebp, 4
        jmp loc_640ff0

loc_641041:
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi + 0x28]
        test eax, eax
        je loc_641056
        mov ecx, dword ptr [edi + 0x2c]
        sub ecx, eax
        sar ecx, 2
        jne loc_641077
loc_641056:
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd54
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924ED0]
        mov ecx, esi
        call ext_00640930
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4

loc_641077:
        mov ecx, dword ptr [esi + 0x8]
        push 0x3e
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924EC0]
        push esi
        mov ecx, edi
        call ext_00640EE0
        mov ecx, esi
        call ext_00640CD0
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd50
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924ED0]
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x3e
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924EC0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}
