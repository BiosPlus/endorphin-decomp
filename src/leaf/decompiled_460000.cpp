// Decompiled translation unit: src/leaf/decompiled_460000.cpp

extern "C" void ext_0046FE50();

// [0x00468750] sub_00468750 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468750(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x10 __asm _emit 0x00 // cmp byte ptr [ecx + 0x10], 0x0
        __asm _emit 0x75 __asm _emit 0x03 // jne +3
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x14 // mov ecx, dword ptr [ecx + 0x14]
        jmp ext_0046FE50
    }
}

extern "C" void ext_0046FE70();

// [0x00468770] sub_00468770 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468770(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x10 __asm _emit 0x00 // cmp byte ptr [ecx + 0x10], 0x0
        __asm _emit 0x75 __asm _emit 0x03 // jne +3
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x14 // mov ecx, dword ptr [ecx + 0x14]
        jmp ext_0046FE70
    }
}

extern "C" void ext_0044B150();
extern "C" int mem_00ACDB40;

// [0x00465EA0] sub_00465EA0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465EA0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00ACDB40]
        test eax, eax
        je done
        cmp dword ptr [eax + 0x20], 0x0
        je done
        mov eax, dword ptr [eax + 0x100]
        test eax, eax
        je done
        mov ecx, eax
        jmp ext_0044B150
    done:
        ret
    }
}

// [0x00467320] sub_00467320 (8 bytes)
extern "C" void ext_00467050();

extern "C" __declspec(naked) void __cdecl fn_00467320() {
    __asm {
        push 1
        call ext_00467050
        ret
    }
}

// [0x00467330] sub_00467330 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00467330() {
    __asm {
        push 0
        call ext_00467050
        ret
    }
}

// [0x00467380] sub_00467380 (8 bytes)
extern "C" void ext_00467340();

extern "C" __declspec(naked) void __cdecl fn_00467380() {
    __asm {
        push 0
        call ext_00467340
        ret
    }
}

// [0x00467390] sub_00467390 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00467390() {
    __asm {
        push 1
        call ext_00467340
        ret
    }
}

// [0x00469C50] sub_00469C50 (8 bytes)
extern "C" void ext_00469200();

extern "C" __declspec(naked) void __cdecl fn_00469C50() {
    __asm {
        push 0
        call ext_00469200
        ret
    }
}

// [0x00469C60] sub_00469C60 (8 bytes)
extern "C" void ext_00469200();

extern "C" __declspec(naked) void __cdecl fn_00469C60() {
    __asm {
        push 3
        call ext_00469200
        ret
    }
}

// [0x00469C70] sub_00469C70 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00469C70() {
    __asm {
        push 2
        call ext_00469200
        ret
    }
}

// [0x00469C80] sub_00469C80 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00469C80() {
    __asm {
        push 1
        call ext_00469200
        ret
    }
}

extern "C" void ext_004658C0();

// [0x00465B30] sub_00465B30 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_00465B30() {
    __asm {
        call ext_004658C0
        mov eax, dword ptr [eax + 0x58]
        ret
    }
}

// [0x0046FAC0] sub_0046FAC0 (10 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0046FAC0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push eax
        call ext_006A5C5C
        pop ecx
        ret
    }
}

// [0x00465B40] sub_00465B40 (12 bytes)
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_00465B40(void* self) {
    __asm {
        call fn_00465B30
        mov ecx, eax
        jmp ext_00468660
    }
}

extern "C" void ext_006A5C5C();

// [0x00462D40] sub_00462D40 (14 bytes)
extern "C" void __fastcall fn_00462D40(void* self) {
    void* p = *(void**)self;
    if (p) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
}

// [0x00466900] sub_00466900 (14 bytes)
extern "C" void ext_004667A0();
extern "C" __declspec(naked) void __fastcall fn_00466900(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [eax + 0x18]
        push 1
        call ext_004667A0
        ret
    }
}

// [0x00465950] sub_00465950 (16 bytes)
extern "C" void* ext_00594000();
extern "C" void __fastcall ext_00493F80(void* self);
extern "C" void __fastcall fn_00465950(void* self) {
    char* r = (char*)ext_00594000();
    ext_00493F80(r + 0x258);
}

extern "C" void ext_00477380();

// [0x004691C0] sub_004691C0 (16 bytes)
// C++ cannot express "call, then tail-jump with ecx loaded from eax", so use naked asm.
extern "C" __declspec(naked) void __fastcall fn_004691C0(void* self) {
    __asm {
        call ext_00594000                                   // e8 3b ae 12 00
        mov ecx, dword ptr [eax + 0x26c]                    // 8b 88 6c 02 00 00
        jmp ext_00477380                                    // e9 b0 e1 00 00
    }
}
