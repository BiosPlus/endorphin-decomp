// Decompiled translation unit: src/classes/ReshapeTool.cpp

// [0x00544AC0] ReshapeTool::vfunc_6_off_98 (24 bytes)
extern "C" void __fastcall ext_00543470(void* self);
extern "C" void* __fastcall fn_00544AC0(void* self, int edx_unused, int a1) {
    ext_00543470((char*)self - 0x98);
    return (char*)self - 0x94;
}

// [0x00544AE0] ReshapeTool::vfunc_32 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544AE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543470
        mov eax, dword ptr [esi + 0x9c]
        mov edx, dword ptr [eax + 0x80]
        lea ecx, [esi + 0x9c]
        pop esi
        jmp edx
    }
}

// [0x00544A10] ReshapeTool::vfunc_16 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544A10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x80]
        call edx
        mov eax, dword ptr [esi + 0x9c]
        lea ecx, [esi + 0x9c]
        pop esi
        mov eax, dword ptr [eax + 0x40]
        jmp eax
    }
}
