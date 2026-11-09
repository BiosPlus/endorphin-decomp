// Decompiled translation unit: src/leaf/decompiled_670000.cpp

// [0x0067F8F0] sub_0067F8F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067F8F0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je done_0067F8F0
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov esi, edx
        sub esi, ecx
        sar esi, 0x2
        pop esi
        je done_0067F8F0
        add edx, -0x4
        mov dword ptr [eax + 0x8], edx
    done_0067F8F0:
        pop ecx
        ret
    }
}

// [0x00678100] sub_00678100 (15 bytes)
extern "C" void ext_00677D10();
extern "C" void __fastcall fn_00678100(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x10) = a1;
    ext_00677D10();
}

// [0x00671F20] sub_00671F20 (15 bytes)
extern "C" void ext_00671F10();
extern "C" void ext_00693620();
extern "C" void ext_0068ED90();
extern "C" void __cdecl fn_00671F20() {
    ext_00671F10();
    ext_00693620();
    ext_0068ED90();
}

// [0x0067A220] sub_0067A220 (16 bytes)
extern "C" void ext_0041A920();
extern "C" __declspec(naked) void __fastcall fn_0067A220(void* self, int edx_unused, int a1) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x44
        call ext_0041A920
        ret 0x4
    }
}

// [0x00671F80] sub_00671F80 (18 bytes)
extern "C" int ext_00671100(int);
extern "C" void __fastcall fn_00671F80(void* self) {
    *(int*)((char*)self + 0x4) = ext_00671100(0);
}

// [0x00672080] sub_00672080 (18 bytes)
extern "C" void __fastcall ext_00671F80(void* self);
extern "C" void __fastcall fn_00672080(void* self, int edx_unused, float v) {
    void* saved = self;
    ext_00671F80(saved);
    *(float*)saved = v;
}

// [0x00671FA0] sub_00671FA0 (18 bytes)
extern "C" int ext_00671100(int);
extern "C" void __fastcall fn_00671FA0(void* self) {
    *(int*)((char*)self + 0x4) = ext_00671100(2);
}

// [0x006720A0] sub_006720A0 (18 bytes)
extern "C" void __fastcall ext_00671FA0(void* self);
extern "C" void __fastcall fn_006720A0(void* self, int edx_unused, unsigned char v) {
    void* saved = self;
    ext_00671FA0(saved);
    *(unsigned char*)saved = v;
}

// [0x00671FC0] sub_00671FC0 (18 bytes)
extern "C" void __fastcall fn_00671FC0(void* self) {
    *(int*)((char*)self + 0x4) = ext_00671100(1);
}

// [0x006720C0] sub_006720C0 (18 bytes)
extern "C" void ext_00671FC0();
extern "C" void __fastcall fn_006720C0(void* self, int edx_unused, int a1) {
    ext_00671FC0();
    *(int*)self = a1;
}

// [0x00671FE0] sub_00671FE0 (18 bytes)
extern "C" int ext_00671100(int);
extern "C" void __fastcall fn_00671FE0(void* self) {
    *(int*)((char*)self + 0x4) = ext_00671100(9);
}

// [0x00672190] sub_00672190 (18 bytes)
extern "C" void ext_00671FE0();
extern "C" void __fastcall fn_00672190(void* self, int edx_unused, int a1) {
    ext_00671FE0();
    *(int*)self = a1;
}

// [0x00672000] sub_00672000 (18 bytes)
extern "C" int ext_00671100(int);
extern "C" void __fastcall fn_00672000(void* self) {
    *(int*)((char*)self + 0x4) = ext_00671100(10);
}

// [0x006721B0] sub_006721B0 (18 bytes)
extern "C" void ext_00672000();
extern "C" __declspec(naked) void __fastcall fn_006721B0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00672000
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [esi], eax
        pop esi
        ret 4
    }
}

// [0x00679C60] sub_00679C60 (18 bytes)
extern "C" void ext_00679A60();
extern "C" void ext_00679BE0();
extern "C" __declspec(naked) void __cdecl fn_00679C60(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_00679BE0
        mov ecx, eax
        call ext_00679A60
        ret
    }
}

// [0x0067A350] sub_0067A350 (22 bytes)
extern "C" void ext_0067A260();
extern "C" __declspec(naked) void __fastcall fn_0067A350(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        lea eax, [ecx + 0x14]
        push eax
        call ext_0067A260
        ret 0x8
    }
}

// [0x0067A370] sub_0067A370 (22 bytes)
extern "C" void ext_0067A260();
extern "C" __declspec(naked) void __fastcall fn_0067A370(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        lea eax, [ecx + 0x24]
        push eax
        call ext_0067A260
        ret 0x8
    }
}

// [0x0067B050] sub_0067B050 (22 bytes)
extern "C" void ext_0067AE50();
extern "C" __declspec(naked) void __fastcall fn_0067B050(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov byte ptr [esi+4], 0
        call ext_0067AE50
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+8]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x00676C70] sub_00676C70 (24 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00676C70(void* self) {
    __asm {
        mov eax, dword ptr [esp+4]
        lea edx, [esp+4]
        push edx
        add ecx, 0x58
        mov dword ptr [esp+8], eax
        call ext_00451670
        ret 4
    }
}

// [0x00678110] sub_00678110 (24 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_00678110(void* self) {
    __asm {
        mov eax, dword ptr [esp+4]
        lea edx, [esp+4]
        push edx
        add ecx, 0x58
        mov dword ptr [esp+8], eax
        call ext_005A6300
        ret 4
    }
}

// [0x00679C40] sub_00679C40 (24 bytes)
extern "C" void ext_00679A60();
extern "C" void ext_00679BE0();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __cdecl fn_00679C40(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00679BE0
        mov ecx, eax
        call ext_00679A60
        ret
    }
}

// [0x0067AB90] sub_0067AB90 (25 bytes)
extern "C" void ext_00401C60();
extern "C" __declspec(naked) void __fastcall fn_0067AB90(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00401C60
        mov dword ptr [esi], 0x98c56c
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006752B0] sub_006752B0 (25 bytes)
extern "C" void __fastcall ext_00675110(void* self);
extern "C" void __cdecl ext_006A5C5C(void* p);
extern "C" void __fastcall fn_006752B0(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_00675110(p);
        ext_006A5C5C(p);
    }
}

// [0x0067B120] sub_0067B120 (25 bytes)
extern "C" void __fastcall ext_0067B090(void* self);
extern "C" void __cdecl ext_006A5C5C(void* p);
extern "C" void __fastcall fn_0067B120(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_0067B090(p);
        ext_006A5C5C(p);
    }
}

// [0x0067A670] sub_0067A670 (26 bytes)
extern "C" void ext_006A0680();
extern "C" void ext_006A0790();
extern "C" __declspec(naked) void __fastcall fn_0067A670(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push esi
        mov dword ptr [esi], 0x98816c
        call ext_006A0680
        mov ecx, eax
        call ext_006A0790
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00672E50] sub_00672E50 (27 bytes)
extern "C" void ext_00672C20();
extern "C" __declspec(naked) void __fastcall fn_00672E50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00672C20
        add esp, 0x10
        ret 0x8
    }
}
