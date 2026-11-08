// Decompiled translation unit: src/leaf/decompiled_410000.cpp

// [0x0041D830] sub_0041D830 (19 bytes)
extern "C" void ext_006A7CA0();

struct TailTarget {
    void tail(int a1);
};
typedef void (TailTarget::*TailFn)(int);

extern "C" void __fastcall fn_0041D830(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    *(int*)(p + 0x30) = a1;
    TailTarget* next = *(TailTarget**)(p + 0xc);
    TailFn f;
    *(void**)&f = (void*)ext_006A7CA0;
    (next->*f)(a1);
}

// [0x004137F0] sub_004137F0 (23 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_004137F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x00415F97] sub_00415F97 (28 bytes)
extern "C" int mem_00925680;

// Both conditional branches leave the 28-byte body (targets 0x415FBA / 0x415FB3),
// so they are emitted as fixed short-jump encodings to keep the rel8 bytes exact.
extern "C" __declspec(naked) void __fastcall fn_00415F97(void* self) {
    __asm {
        test eax, eax
        _emit 0x74
        _emit 0x1f
        mov ecx, dword ptr [ecx + 0x54]
        cmp ecx, -1
        _emit 0x75
        _emit 0x10
        pop esi
        pop ebx
        mov dword ptr [esp + 4], 0xf
        jmp dword ptr [mem_00925680]
    }
}

// [0x0041CCA0] sub_0041CCA0 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_0041CCA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x0092DD84
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}
