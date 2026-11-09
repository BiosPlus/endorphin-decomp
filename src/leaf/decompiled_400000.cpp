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
