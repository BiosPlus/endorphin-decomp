// Decompiled translation unit: src/leaf/decompiled_400000.cpp

// [0x00401B60] sub_00401B60 (27 bytes)
extern "C" int mem_00928ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_009251C0;

extern "C" __declspec(naked) void __fastcall fn_00401B60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0xc]
        mov dword ptr [esi], offset mem_00928ECC
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_009251C0]
    }
}

// [0x00401AC0] sub_00401AC0 (33 bytes)
extern "C" int __fastcall fn_00401AC0(void* self) {
    char** p = (char**)self;
    char* begin = p[1];
    if (begin == 0) {
        return 0;
    }
    return (int)(p[2] - begin) / 28;
}

// [0x0040A910] sub_0040A910 (33 bytes)
extern "C" int mem_00924494;

extern "C" __declspec(naked) void __fastcall fn_0040A910(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x68
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924494]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00407730] sub_00407730 (13 bytes)
extern "C" void ext_006A5EA8();

extern "C" int __fastcall fn_00407730(void* self, int edx_unused, int a1, int a2) {
    ext_006A5EA8();
    return 1;
}

// [0x00401040] sub_00401040 (14 bytes)
extern "C" void ext_006A5C5C(int);

extern "C" void __fastcall fn_00401040(void* self, int edx_unused, int a1) {
    ext_006A5C5C(a1);
}

// [0x00402CE0] sub_00402CE0 (15 bytes)
extern "C" void ext_004027B0();

extern "C" __declspec(naked) void __fastcall fn_00402CE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax]
        push eax
        push ecx
        push edx
        push ecx
        call ext_004027B0
        ret
    }
}

// [0x00407830] sub_00407830 (17 bytes)
extern "C" void ext_006A6004();
extern "C" int mem_00925658;

extern "C" __declspec(naked) void __fastcall fn_00407830(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        ret
    }
}

// [0x00407850] sub_00407850 (17 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_00925650;

extern "C" __declspec(naked) void __fastcall fn_00407850(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        ret
    }
}

// [0x00403160] sub_00403160 (20 bytes)
extern "C" void ext_006A3442();

extern "C" void* __fastcall fn_00403160(void* self, int edx_unused, int a1) {
    typedef void* (__stdcall *GetFrameFn)(void*, int);
    return ((GetFrameFn)ext_006A3442)(*(void**)((char*)self + 0x57c), a1);
}

// [0x0040BF00] sub_0040BF00 (20 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60D6();

extern "C" __declspec(naked) void __fastcall fn_0040BF00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60D6
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_0040B930();

// [0x0040BC10] sub_0040BC10 (21 bytes)
extern "C" void __fastcall fn_0040BC10(void* self) {
    ext_0040B930();
    void** vtbl = *(void***)self;
    typedef void (__fastcall *Fn)(void*);
    ((Fn)vtbl[0x168 / 4])(self);
}

// [0x0040D4E0] sub_0040D4E0 (23 bytes)
extern "C" void ext_0040C050();
extern "C" void* __fastcall fn_0040D4E0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_0040C050)(self, 0x24f);
    *(unsigned int*)self = 0x92b1ac;
    return self;
}

// [0x0040D9C0] sub_0040D9C0 (23 bytes)
extern "C" void ext_0040C050();
extern "C" int mem_0092B50C;

extern "C" __declspec(naked) void __fastcall fn_0040D9C0(void* self) {
    __asm {
        push esi
        push 0x24f
        mov esi, ecx
        call ext_0040C050
        mov dword ptr [esi], offset mem_0092B50C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0040E780] sub_0040E780 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E780(void* self) {
    __asm {
        push esi
        push 0x00ac87f8
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x0
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x0040E7A0] sub_0040E7A0 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E7A0(void* self) {
    __asm {
        push esi
        push 0x00ac8814
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x1
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x0040E7C0] sub_0040E7C0 (24 bytes)
extern "C" void ext_0040C510();
extern "C" void ext_0040E420();
extern "C" __declspec(naked) void __fastcall fn_0040E7C0(void* self) {
    __asm {
        push esi
        push 0x00ac8830
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_0040C510
        push 0x2
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        call ext_0040E420
        pop esi
        ret
    }
}

// [0x00401D80] sub_00401D80 (25 bytes)
extern "C" int mem_00928F28;
extern "C" void ext_00401C60();

extern "C" __declspec(naked) void __fastcall fn_00401D80(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00401C60
        mov dword ptr [esi], offset mem_00928F28
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00401E60] sub_00401E60 (25 bytes)
extern "C" int mem_00928ED8;
extern "C" void ext_00401E00();

extern "C" __declspec(naked) void __fastcall fn_00401E60(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00401E00
        mov dword ptr [esi], offset mem_00928ED8
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 4
    }
}

// [0x004024E0] sub_004024E0 (25 bytes)
extern "C" void ext_00401E00();
extern "C" int mem_00928EE4;

extern "C" __declspec(naked) void* __fastcall fn_004024E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00401E00
        mov dword ptr [esi], offset mem_00928EE4
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00401DE0] sub_00401DE0 (25 bytes)
extern "C" void ext_00403400();

extern "C" __declspec(naked) void __fastcall fn_00401DE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00403400
        push esi
        call ext_006A5C5C
        add esp, 0x4
done:
        pop esi
        ret
    }
}
