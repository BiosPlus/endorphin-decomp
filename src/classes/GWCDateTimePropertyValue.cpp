// Decompiled translation unit: src/classes/GWCDateTimePropertyValue.cpp

// [0x006B3D40] GWCDateTimePropertyValue::vfunc_1 (123 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B3D40(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        add dword ptr [esp + 0x18], 0x2
        push ebx
        push esi
        push edi
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov esi, eax
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [edi]
        push 0x8024
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, edi
        call edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x1c
    }
}
