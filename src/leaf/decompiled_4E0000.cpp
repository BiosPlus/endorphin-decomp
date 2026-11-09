// Decompiled translation unit: src/leaf/decompiled_4E0000.cpp

// [0x004EE620] sub_004EE620 (15 bytes)
extern "C" void ext_004EE200();

extern "C" void __fastcall fn_004EE620(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x50) = a1;
    ext_004EE200();
}

// [0x004E9D70] sub_004E9D70 (17 bytes)
extern "C" void* __stdcall ext_00468180(int a, int b);
extern "C" void __fastcall ext_00469530(void* self);

extern "C" __declspec(naked) void __fastcall fn_004E9D70(void* self) {
    __asm {
        push 0
        push 5
        call ext_00468180
        mov ecx, eax
        call ext_00469530
        ret
    }
}

// [0x004E87D0] sub_004E87D0 (20 bytes)
extern "C" void ext_004E8570();

extern "C" void __fastcall fn_004E87D0(void* self, int edx_unused, int a1) {
    ((void (__cdecl*)(int, void*))ext_004E8570)(a1, (char*)self + 4);
}

// [0x004E5970] sub_004E5970 (24 bytes)
extern "C" void* __stdcall ext_006798D0(void* a, int b);
extern "C" void __fastcall ext_004E5850(void* self);

extern "C" __declspec(naked) void __fastcall fn_004E5970(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x93e1b8
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_004E5850
        pop ecx
        ret
    }
}

// [0x004E3DC0] sub_004E3DC0 (25 bytes)
extern "C" void __fastcall ext_004E35B0(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E3DC0(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_004E35B0(esi);
        ((void (__cdecl*)(void*))ext_006A5C5C)(esi);
    }
}

// [0x004E6610] sub_004E6610 (25 bytes)
extern "C" void __fastcall ext_004E5AE0(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E6610(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_004E5AE0(esi);
        ((void (__cdecl*)(void*))ext_006A5C5C)(esi);
    }
}

// [0x004EF890] sub_004EF890 (26 bytes)
extern "C" void ext_006A5C62();
extern "C" void __fastcall fn_004EF890(void* self) {
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x70);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x004EF8B0] sub_004EF8B0 (26 bytes)
extern "C" void __fastcall fn_004EF8B0(void* self) {
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x4c);
    if (p) {
        *(void**)p = p;
    }
    void** q = (void**)((char*)p + 4);
    if (q) {
        *q = p;
    }
}

// [0x004EFDB0] sub_004EFDB0 (28 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_004EFDB0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x48]
        test eax, eax
        je done
        add ecx, 4
        mov dword ptr [esp], ecx
        lea ecx, [esp]
        push ecx
        lea ecx, [eax + 4]
        call ext_00451670
done:
        pop ecx
        ret
    }
}

// [0x004E51C0] sub_004E51C0 (29 bytes)
extern "C" void __fastcall ext_004E5180(void* self);
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004E51C0(void* self) {
    char* esi = (char*)self;
    ext_004E5180(self);
    void* p = *(void**)(esi + 0x4);
    ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    *(int*)(esi + 0x4) = 0;
}
