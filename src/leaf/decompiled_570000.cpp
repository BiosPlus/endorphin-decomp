// Decompiled translation unit: src/leaf/decompiled_570000.cpp

// [0x00573290] sub_00573290 (16 bytes)
extern "C" void __stdcall ext_006A6D5C(void* self, int a, int b, int c);

extern "C" void __fastcall fn_00573290(void* self) {
    ext_006A6D5C(self, 0x10, 3, 0x436f30);
}

// [0x00573490] sub_00573490 (22 bytes)
extern "C" void __fastcall fn_00573490(void* self, int edx_unused, void* a1) {
    ext_006A6D5C(a1, 0x10, 3, 0x436f30);
}

// [0x00579870] sub_00579870 (25 bytes)
extern "C" void ext_005796E0();

extern "C" void* __fastcall fn_00579870(void* self) {
    ext_005796E0();
    *(void**)self = (void*)0x957ea4;
    *((void**)self + 1) = (void*)0x957e98;
    return self;
}

// [0x00577480] sub_00577480 (34 bytes)
extern "C" int mem_00925134;

extern "C" unsigned int __fastcall fn_00577480(void* self) {
    unsigned int* p = (unsigned int*)self;
    unsigned int edi = p[1];
    void (__cdecl *inv)() = (void (__cdecl*)())mem_00925134;
    if (edi > p[2]) inv();
    if (edi >= p[2]) inv();
    return edi;
}

// [0x00574F10] sub_00574F10 (43 bytes)
extern "C" int mem_00925094;

extern "C" void __fastcall fn_00574F10(void* self, int edx_unused, void* os) {
    typedef void* (__thiscall *write_fn)(void*, const char*, int);
    char c = 0;
    int n = 0x20;
    do {
        (*(write_fn*)&mem_00925094)(os, &c, 1);
        n--;
    } while (n != 0);
}

// [0x00574F40] sub_00574F40 (43 bytes)
extern "C" void __fastcall fn_00574F40(void* self, int edx_unused, void* os) {
    typedef void* (__thiscall *write_fn)(void*, const char*, int);
    char c = 0;
    int n = 2;
    do {
        (*(write_fn*)&mem_00925094)(os, &c, 1);
        n--;
    } while (n != 0);
}

// [0x005761B0] sub_005761B0 (43 bytes)
extern "C" int mem_00925084;
extern "C" int mem_00925110;

extern "C" void* __fastcall fn_005761B0(void* self) {
    typedef void* (__thiscall *alloc_ctor_fn)(void*);
    typedef void* (__thiscall *alloc_copy_fn)(void*, const void*);
    char tmp;
    (*(alloc_ctor_fn*)&mem_00925084)(&tmp);
    (*(alloc_copy_fn*)&mem_00925110)(self, &tmp);
    unsigned int* p = (unsigned int*)self;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    return self;
}

// [0x005739E0] sub_005739E0 (43 bytes)
extern "C" void __stdcall fn_005739E0(void* begin, void* end) {
    char* esi = (char*)begin;
    char* edi = (char*)end;
    if (esi != edi) {
        do {
            ext_006A6D5C(esi, 0x10, 3, 0x436f30);
            esi += 0x30;
        } while (esi != edi);
    }
}

// [0x00577AE0] sub_00577AE0 (46 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00577AE0(void* dst, unsigned int count, const void* src) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        mov eax, edi
        mov ecx, ebp
        jbe done
        push esi
        mov esi, dword ptr [esp + 18h]
fill:
        mov dl, byte ptr [esi]
        mov byte ptr [ecx], dl
        sub eax, 1
        add ecx, 1
        test eax, eax
        ja fill
        pop esi
done:
        lea eax, [edi + ebp]
        pop edi
        pop ebp
        ret 0Ch
    }
}

// [0x00572680] sub_00572680 (49 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00572680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je skip
        push eax
        call ext_006A5C5C
        add esp, 4
    skip:
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], 0
        mov dword ptr [esi + 0x28], 0
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_00924FF4]
    }
}
