// Decompiled translation unit: src/classes/GWCPropertyListFeel.cpp

// [0x006B2960] GWCPropertyListFeel::vfunc_5 (324 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B6980();
extern "C" void ext_006B69B0();
extern "C" void ext_006B6F70();
extern "C" int mem_00B5D20C;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006B2960(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0x0]
        push 0x8b789a
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        jne L_6b2a19
        push 0xdc
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x2c], ebx
        je L_6b29b9
        movzx ecx, byte ptr [esi + 0x11]
        movzx edx, byte ptr [esi + 0x10]
        push ecx
        push edx
        mov ecx, eax
        call ext_006B69B0
        mov edi, eax
        jmp L_6b29bb
    L_6b29b9:
        xor edi, edi
    L_6b29bb:
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x2c], 0xffffffff
        mov dword ptr [esp + 0x10], edi
        call ext_006A7BF0
        cmp eax, ebx
        jne L_6b29d7
        xor eax, eax
        jmp L_6b29da
    L_6b29d7:
        mov eax, dword ptr [eax + 0x4]
    L_6b29da:
        push eax
        mov ecx, edi
        call ext_006B6980
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edi]
        push ebx
        push ecx
        push edx
        mov edx, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x20]
        push ecx
        push 0x40000000
        push 0x928b5d
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        call edx
        mov dword ptr [esi + 0x4], edi
        jmp L_6b2a1d
    L_6b2a19:
        mov dword ptr [esp + 0x10], eax
    L_6b2a1d:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [mem_00B5D20C]
        mov edx, dword ptr [esi + 0xc]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esp + 0x44]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_006B6F70
        mov ebx, dword ptr [esp + 0x40]
        mov ebp, dword ptr [esp + 0x38]
        mov edi, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x10]
        sub ebx, 0x1
        push 0x1
        mov edx, ebx
        add edi, 0x1
        sub edx, ebp
        push edx
        sub eax, edi
        push eax
        push ebp
        push edi
        call ext_006A5E5A
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x3c]
        push ecx
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edi
        mov dword ptr [eax + 0x4], ebp
        mov dword ptr [eax + 0x8], edx
        mov ecx, esi
        mov dword ptr [eax + 0xc], ebx
        call ext_006B0C10
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x20
        ret 0x14
    }
}
