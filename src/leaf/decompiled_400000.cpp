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
