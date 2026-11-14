// Decompiled translation unit: src/NMData/DisabledCollisionPairList.cpp

extern "C" void* ext_0060A520();
extern "C" void* ext_004C1BF0();
extern "C" void* ext_0055DA20();
extern "C" int mem_00924FC0;

// [0x0060A640] NMData::DisabledCollisionPairList::vfunc_13 (91 bytes)
// Stack args: out (sret buffer, returned in eax), name (const std::string&).
// Compares name against "DisabledCollisionPairs" via the imported
// operator==(const string&, const char*) (cdecl, add esp,8). On match builds the
// pair from ext_0060A520() and this+0x10; otherwise from ext_004C1BF0() and this+0x20,
// via the ret-8 pair ctor ext_0055DA20 (ecx = out).
extern "C" __declspec(naked) void* __fastcall fn_0060A640(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push 0x971fdc
        push eax
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je second
        add esi, 0x10
        push esi
        call ext_0060A520
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    second:
        add esi, 0x20
        push esi
        call ext_004C1BF0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0060B320] NMData::DisabledCollisionPairList::vfunc_0_off_4 (128 bytes)
extern "C" void ext_0060A240();
extern "C" void ext_0060B0F0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0060B320(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebp
        push esi
        lea esi, [ecx + 0xc]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov byte ptr [esp + 0xc], 0
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        cmp esi, esi
        je L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, edi
        push eax
        sub ecx, ebp
        sar ecx, 0x2
        push ecx
        push edi
        push ebp
        call ext_0060B0F0
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x10
        cmp dword ptr [esi + 0x4], edi
        mov byte ptr [esp + 0xc], 0
        jbe L4
        call dword ptr [mem_00925134]
    L4:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L5
        call dword ptr [mem_00925134]
    L5:
        mov edx, dword ptr [esp + 0xc]
        push edx
        push edi
        push ebp
        call ext_0060A240
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_004E8570();
extern "C" void ext_00596660();
extern "C" void ext_0060B460();
extern "C" void ext_006A5C5C();
extern "C" int mem_0087BA98;

// [0x0060B550] NMData::DisabledCollisionPairList::vfunc_1_off_8 (195 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060B550(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push offset mem_0087BA98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x24], ebp
        mov ecx, dword ptr [esp + 0x38]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x30], ebp
        call edx
        mov ecx, dword ptr [esp + 0x1c]
        mov edi, eax
        mov eax, dword ptr [esp + 0x20]
        cmp ecx, eax
        mov ebx, eax
        jbe L1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
    L1:
        cmp ecx, eax
        mov dword ptr [esp + 0x38], ecx
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        lea eax, [esp + 0x18]
        push ebx
        mov ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        push eax
        lea edx, [esp + 0x20]
        push edx
        mov ecx, eax
        call ext_00596660
        lea eax, [esp + 0x18]
        push edi
        push eax
        call ext_0060B460
        lea ecx, [esp + 0x20]
        push ecx
        add esi, 0x18
        push esi
        call ext_004E8570
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0x10
        pop edi
        pop esi
        cmp eax, ebp
        pop ebp
        pop ebx
        je L3
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L3:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x4
    }
}
