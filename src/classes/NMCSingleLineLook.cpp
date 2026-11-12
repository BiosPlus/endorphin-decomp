// Decompiled translation unit: src/classes/NMCSingleLineLook.cpp

extern "C" int mem_0092431C;
extern "C" int mem_00924CA0;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;

// [0x006AFF20] NMCSingleLineLook::vfunc_2 (280 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AFF20(void* self) {
    __asm {
        push -1
        push 0x87eb59
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov dword ptr [edi], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 4], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0xc]
        mov dword ptr [edi + 8], edx
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 8]
        mov dword ptr [edi + 0xc], eax
        lea eax, [esp + 0x30]
        push eax
        call edx
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x1c], 0
        xor esi, esi
        call dword ptr [mem_0092431C]
        test eax, eax
        jle L_after_loop
    L_loop:
        push esi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924CA0]
        push esi
        lea ecx, [esp + 0x34]
        mov bl, al
        call dword ptr [mem_00924CA0]
        cmp al, 0x0d
        je L_nl
        cmp bl, 0x0a
        je L_nl
        lea ecx, [esp + 0x30]
        add esi, 1
        call dword ptr [mem_0092431C]
        cmp esi, eax
        jl L_loop
    L_after_loop:
        mov ebx, dword ptr [esp + 0x2c]
        test ebx, ebx
        mov esi, dword ptr [esp + 0x28]
        push ebp
        je L_nobp
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ebx
        mov ecx, esi
        call edx
        mov ebp, eax
        jmp L_c
    L_nl:
        add dword ptr [edi + 8], 1
        jmp L_end
    L_nobp:
        mov ebp, dword ptr [esp + 0x34]
    L_c:
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        test ebx, ebx
        je L_skip
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push ebp
        mov ecx, esi
        call eax
    L_skip:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esp + 0x10]
        lea eax, [ecx + edx + 2]
        mov dword ptr [edi + 8], eax
        pop ebp
    L_end:
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x10
    }
}
