// Decompiled translation unit: src/classes/GWCPropertyButtonFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B4FF0();
extern "C" void ext_006B5AE0();
extern "C" void ext_006B6030();
extern "C" int mem_00B5D20C;
extern "C" int mem_00925694;

// [0x006B22A0] GWCPropertyButtonFeel::vfunc_5 (352 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B22A0(void* self) {
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
        mov ebp, dword ptr [esi + 0x4]
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        jne loc_6b2370
        push 0xe0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x2c], ebx
        je loc_6b22fe
        movzx ecx, byte ptr [esi + 0x11]
        movzx edx, byte ptr [esi + 0x12]
        push ecx
        movzx ecx, byte ptr [esi + 0x10]
        push edx
        push ecx
        mov ecx, eax
        call ext_006B4FF0
        mov ebp, eax
        jmp loc_6b2300
    loc_6b22fe:
        xor ebp, ebp
    loc_6b2300:
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_006A7BF0
        cmp eax, ebx
        jne loc_6b2318
        xor eax, eax
        jmp loc_6b231b
    loc_6b2318:
        mov eax, dword ptr [eax + 0x4]
    loc_6b231b:
        push eax
        lea ecx, [ebp + 0x5c]
        call ext_006A5FFE
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0x5c]
        push ebx
        push eax
        push ecx
        lea eax, [esp + 0x20]
        push eax
        push 0x40000000
        push 0x92f680
        push ebx
        mov ecx, ebp
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        call edx
        cmp byte ptr [esi + 0x13], bl
        je loc_6b236d
        cmp byte ptr [esi + 0x12], bl
        jne loc_6b236d
        push 0x928b5d
        mov ecx, ebp
        call ext_006A5F50
    loc_6b236d:
        mov dword ptr [esi + 0x4], ebp
    loc_6b2370:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [mem_00B5D20C]
        mov edx, dword ptr [esi + 0xc]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925694]
        mov ebx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        sub ebx, 0x1
        push 0x1
        mov ecx, ebx
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x3c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        mov ecx, ebp
        call ext_006A5E5A
        mov edi, dword ptr [esp + 0x44]
        push edi
        mov ecx, ebp
        call ext_006B5AE0
        mov eax, dword ptr [edi + 0x4c]
        push edi
        push eax
        mov ecx, ebp
        call ext_006B6030
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push edi
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ecx
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
