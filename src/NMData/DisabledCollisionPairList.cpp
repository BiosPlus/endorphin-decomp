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
