// Decompiled translation unit: src/classes/GWCPropertyCheckboxFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006B0C10();
extern "C" void ext_006B4840();
extern "C" void ext_006B4870();
extern "C" void ext_006B4C20();
extern "C" int mem_00B5D20C;
extern "C" int mem_00925694;

// [0x006B1AF0] GWCPropertyCheckboxFeel::vfunc_5 (268 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B1AF0(void* self) {
    __asm {
        push -0x1
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
        jne loc_6b1b74
        push 0x58
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x2c], ebx
        je loc_6b1b38
        mov ecx, eax
        call ext_006B4840
        mov edi, eax
        jmp loc_6b1b3a
    loc_6b1b38:
        xor edi, edi
    loc_6b1b3a:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        push 0x40000000
        mov ecx, edi
        mov dword ptr [esp + 0x3c], 0xffffffff
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        call ext_006B4870
        mov dword ptr [esi + 0x4], edi
        jmp loc_6b1b78
    loc_6b1b74:
        mov dword ptr [esp + 0x10], eax
    loc_6b1b78:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [mem_00B5D20C]
        mov edx, dword ptr [esi + 0xc]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925694]
        mov edi, dword ptr [esp + 0x40]
        mov ebx, dword ptr [esp + 0x38]
        mov ebp, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x3c]
        sub edi, 0x1
        push 0x1
        mov ecx, edi
        sub ecx, ebx
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        sub edx, ebp
        push edx
        push ebx
        push ebp
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_006B4C20
        mov ecx, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x3c]
        push ecx
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 0x4], ebx
        mov dword ptr [eax + 0x8], edx
        mov ecx, esi
        mov dword ptr [eax + 0xc], edi
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
