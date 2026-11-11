// Decompiled translation unit: src/classes/GWCPropertiesFactory.cpp

// Decompiled translation unit: src/classes/GWCPropertiesFactory.cpp

extern "C" void ext_006A5C5C(void* p);
extern "C" void ext_006A5C62();
extern "C" void ext_006ADBF0();
extern "C" int mem_0099109C;

// [0x006A7A20] GWCPropertiesFactory::vfunc_0 (31 bytes)
// Scalar deleting destructor: set vtable to 0x0099090C, delete self if arg0 & 1, return self.
extern "C" void* __fastcall fn_006A7A20(void* self, int edx_unused, unsigned int flags) {
    *(unsigned int*)self = 0x0099090C;
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006B11B0] GWCPropertiesFactory::vfunc_1 (147 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B11B0(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 08B783Bh
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [mem_0099109C]
        jg loc_006B122F
        push 0x40
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je loc_006B11FD
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push ecx
        mov ecx, eax
        call ext_006ADBF0
        mov esi, eax
        jmp loc_006B11FF

    loc_006B11FD:
        xor esi, esi

    loc_006B11FF:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x14]
        test eax, eax
        sete cl
        mov dword ptr [esp + 0xc], -1
        push ecx
        push eax
        mov ecx, esi
        call edx
        mov eax, esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc

    loc_006B122F:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}
