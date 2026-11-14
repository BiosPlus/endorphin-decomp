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

// [0x00583580] Acclaim2MotionIO::vfunc_10 (171 bytes)
extern "C" void ext_00406FC0();
extern "C" void ext_00558A10();
extern "C" void ext_00559180();
extern "C" void ext_0055D2C0();
extern "C" void ext_0055D600();
extern "C" __declspec(dllimport) bool __fastcall imp_00924fec(void* str);
extern "C" __declspec(dllimport) void __fastcall imp_00924ea8(void* str);

extern "C" void __fastcall fn_00583580(void* self, int /*edx*/, int /*arg1*/) {
    typedef void (__thiscall *FnThisPtr)(void*, void*);
    typedef void (__thiscall *FnThisInt)(void*, int);
    typedef void (__thiscall *FnThisVoid)(void*);

    char* base = (char*)self;
    void* s = base + 0x568;
    if (!imp_00924fec(s)) {
        void* obj_5c = base + 0x5c;
        void* obj_584 = base + 0x584;
        ((FnThisPtr)ext_00558A10)(obj_584, obj_5c);
        ((FnThisInt)ext_00559180)(obj_584, *(int*)(base + 0x418));
        *(int*)(base + 0x998) = *(int*)(base + 0x414);
        *(int*)(base + 0x9a4) = *(int*)(base + 0x420);
        *(int*)(base + 0x9a8) = *(int*)(base + 0x424);
        void* obj_42c = base + 0x42c;
        ((FnThisVoid)ext_0055D600)(obj_42c);
        ((FnThisPtr)(*(void***)obj_584)[10])(obj_584, s);
        ((FnThisInt)ext_0055D2C0)(obj_42c, *(int*)(base + 0x998));
        ((FnThisPtr)ext_00406FC0)(obj_5c, base + 0x5e0);
        imp_00924ea8(s);
    }
}
