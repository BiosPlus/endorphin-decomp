// Decompiled translation unit: src/classes/GWCPropertyHotKeyFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A6004();
extern "C" void ext_006A7BF0();
extern "C" void ext_006B0C10();
extern "C" void ext_006B4430();
extern "C" void ext_006B4440();
extern "C" void ext_006B4C20();
extern "C" void ext_006B4C30();
extern "C" int mem_00925694;
extern "C" int mem_00B5D20C;
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

// [0x006B1C50] GWCPropertyHotKeyFeel::vfunc_5 (521 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B1C50(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b787a
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [mem_00925694]
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x4]
        xor ebp, ebp
        cmp ebx, ebp
        jne short L_6B1CF5
        push 0x60
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov dword ptr [esp + 0x38], ebp
        je short L_6B1C9E
        mov ecx, eax
        call ext_006B4C30
        mov ebx, eax
        jmp short L_6B1CA0
L_6B1C9E:
        xor ebx, ebx
L_6B1CA0:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        mov eax, dword ptr [ebx]
        push ecx
        push edx
        mov edx, dword ptr [eax + 0x13c]
        lea ecx, [esp + 0x28]
        push ecx
        push 0x40000000
        mov ecx, ebx
        mov dword ptr [esp + 0x48], 0xffffffff
        mov dword ptr [esp + 0x30], ebp
        mov dword ptr [esp + 0x34], ebp
        mov dword ptr [esp + 0x38], ebp
        mov dword ptr [esp + 0x3c], ebp
        call edx
        mov ecx, dword ptr [edi + 0xc]
        call ext_006A7BF0
        test eax, eax
        je short L_6B1CE5
        mov eax, dword ptr [eax + 0x4]
L_6B1CE5:
        push 0x1
        push eax
        mov eax, dword ptr [ebx + 0x20]
        push 0x30
        push eax
        call esi
        mov dword ptr [edi + 0x4], ebx
        xor ebp, ebp
L_6B1CF5:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [mem_00B5D20C]
        mov eax, dword ptr [edi + 0xc]
        push ebp
        push ecx
        mov ecx, dword ptr [eax + 0x20]
        push edx
        push ecx
        call esi
        mov ecx, dword ptr [esp + 0x50]
        call ext_006B4440
        mov ecx, eax
        call ext_006B4430
        mov eax, dword ptr [eax]
        mov edx, eax
        xor ecx, ecx
        shr edx, 0x10
        mov ch, dl
        mov edx, dword ptr [ebx + 0x20]
        push ebp
        mov cl, al
        push ecx
        push 0x401
        push edx
        call esi
        mov ecx, dword ptr [esp + 0x48]
        mov eax, dword ptr [esp + 0x40]
        mov edx, dword ptr [ebx + 0x20]
        mov ebp, dword ptr [esp + 0x44]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [esp + 0x2c], ecx
        add ecx, -1
        add eax, 1
        push edx
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x24], eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov ecx, dword ptr [edi + 0xc]
        mov esi, eax
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x14], eax
        call ext_006A7BF0
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [edx + 0x30]
        mov ecx, esi
        call eax
        push 0x9334d0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [ebx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, ecx
        sub eax, dword ptr [esp + 0x1c]
        sub eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        add ebp, eax
        mov eax, dword ptr [esp + 0x28]
        push 0x1
        sub ecx, ebp
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        sub eax, ecx
        push eax
        push ebp
        push ecx
        mov ecx, ebx
        call ext_006A5E5A
        mov esi, dword ptr [esp + 0x50]
        push esi
        mov ecx, ebx
        call ext_006B4C20
        mov edx, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x44]
        push esi
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x5c]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x60]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        mov ecx, edi
        call ext_006B0C10
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x2c
        ret 0x14
    }
}
