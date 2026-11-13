// Decompiled translation unit: src/classes/Acclaim2MotionIO.cpp

// [0x0055BBF0] Acclaim2MotionIO::vfunc_48 (42 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0055BBF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0e4h]
        call edx
        test al, 1
        je L_false
        mov eax, dword ptr [esi + 584h]
        mov edx, dword ptr [eax + 0c0h]
        lea ecx, [esi + 584h]
        pop esi
        jmp edx
    L_false:
        xor al, al
        pop esi
        ret
    }
}

// [0x00582B60] Acclaim2MotionIO::vfunc_3 (38 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9ECE8;

extern "C" __declspec(naked) int __fastcall fn_00582B60(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9ECE8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640390
        push    eax
        mov     ecx, esi
        call    ext_00553720
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
