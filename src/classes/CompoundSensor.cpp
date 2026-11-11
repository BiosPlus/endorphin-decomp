// Decompiled translation unit: src/classes/CompoundSensor.cpp

// [0x005FF100] CompoundSensor::vfunc_24 (76 bytes)
extern "C" double __cdecl ext_005FF080(double a, double b, double c, double d, double e);
extern "C" double mem_00993830;

extern "C" __declspec(naked) float __fastcall fn_005FF100(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x3c
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x44]
        call edx
        sub esp, 0x28
        fstp qword ptr [esp + 0x20]
        fld1
        fstp qword ptr [esp + 0x18]
        fld qword ptr [mem_00993830]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esi + 0x20]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esi + 0x18]
        fstp qword ptr [esp]
        call ext_005FF080
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x64]
        add esp, 0x28
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
