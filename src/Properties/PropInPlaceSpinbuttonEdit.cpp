// Decompiled translation unit: src/Properties/PropInPlaceSpinbuttonEdit.cpp

// [0x00448920] Properties::PropInPlaceSpinbuttonEdit::vfunc_66 (45 bytes)
extern "C" void ext_006A5DA0();

extern "C" __declspec(naked) void __fastcall fn_00448920(void* self) {
    __asm {
        mov edx, dword ptr [esp + 4]
        cmp dword ptr [edx + 4], 0x100
        jne L_store
        lea eax, [ecx + 0x5c]
        test eax, eax
        jne L_load
        mov dword ptr [edx], eax
        mov dword ptr [esp + 4], edx
        jmp ext_006A5DA0
    L_load:
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [edx], eax
    L_store:
        mov dword ptr [esp + 4], edx
        jmp ext_006A5DA0
    }
}
