// Decompiled translation unit: src/leaf/decompiled_670000.cpp

#include <math.h>

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

// [0x0067E110] sub_0067E110 (27 bytes)
extern "C" void ext_0067B8D0();
extern "C" __declspec(naked) void* __fastcall fn_0067E110(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        lea eax, [ecx + 0x20]
        push eax
        lea edx, [ecx + 0x10]
        push edx
        push ecx
        mov ecx, esi
        call ext_0067B8D0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00671840] sub_00671840 (28 bytes)
extern "C" void ext_006714E0();

typedef void* (__thiscall *Callee_006714E0)(void* self, int a, int b);

extern "C" void __fastcall fn_00671840(void* self, int edx_unused, void** a1) {
    if (*a1 == 0) {
        *a1 = ((Callee_006714E0)ext_006714E0)((char*)self + 4, 1, 0);
    }
}

// [0x006719A0] sub_006719A0 (28 bytes)
extern "C" void ext_006715C0();
extern "C" __declspec(naked) void __fastcall fn_006719A0(void* self, int edx_unused, int* out) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp dword ptr [esi], 0x0
        jne done_006719A0
        push 0x0
        push 0x0
        add ecx, 0x8
        call ext_006715C0
        mov dword ptr [esi], eax
    done_006719A0:
        pop esi
        ret 0x4
    }
}

// [0x00676830] sub_00676830 (28 bytes)
extern "C" void ext_00451670();
extern "C" void __fastcall fn_00676830(void* self) {
    typedef void (__thiscall *Callee)(void*, void*);
    char* p = static_cast<char*>(self);
    void* inner = *(void**)(p + 0x40);
    if (inner) {
        void* slot = p + 4;
        ((Callee)ext_00451670)(static_cast<char*>(inner) + 4, &slot);
    }
}

// [0x0067AE50] sub_0067AE50 (29 bytes)
extern "C" unsigned char __fastcall ext_0067AE20(void* self);
extern "C" int mem_00924274;
extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void* h, unsigned long ms);
extern "C" void __fastcall fn_0067AE50(void* self) {
    struct Obj { char pad[0x0c]; void* handle_owner; };
    if (ext_0067AE20(self)) {
        Obj* o = reinterpret_cast<Obj*>(self);
        void* h = *reinterpret_cast<void**>(reinterpret_cast<char*>(o->handle_owner) + 0x10);
        WaitForSingleObject(h, 0xFFFFFFFF);
    }
}

// [0x0067CD10] sub_0067CD10 (29 bytes)
extern "C" void ext_0067C8C0();
extern "C" void ext_0067C8F0();
extern "C" __declspec(naked) void __fastcall fn_0067CD10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_0067C8C0
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0067C8F0
        pop esi
        ret 0x8
    }
}

// [0x0067EB90] sub_0067EB90 (29 bytes)
extern "C" void ext_0067E820();
extern "C" void ext_0067E990();
extern "C" __declspec(naked) void __fastcall fn_0067EB90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_0067E820
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0067E990
        pop esi
        ret 0x8
    }
}

extern "C" int mem_009251E0;

// [0x0067EC70] sub_0067EC70 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067EC70(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 0x4]
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push ecx
        push 0x0098c7c0
        push edx
        push eax
        call dword ptr [mem_009251E0]
        add esp, 0x14
        ret 0x8
    }
}

// [0x0067ED10] sub_0067ED10 (35 bytes)
extern "C" int mem_00924FFC;
extern "C" int mem_0092530C;
extern "C" __declspec(naked) void __fastcall fn_0067ED10(void* self) {
    __asm {
        push esi
        push 0x10
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push 0x0
        call dword ptr [mem_00924FFC]
        push eax
        call dword ptr [mem_0092530C]
        add esp, 0xc
        mov dword ptr [esi], eax
        pop esi
        ret 0x4
    }
}

extern "C" void ext_00661980();
extern "C" int mem_0098C254;

// [0x00678890] sub_00678890 (36 bytes)
extern "C" void* __fastcall fn_00678890(void* self) {
    unsigned char* esi = (unsigned char*)self;
    ((void (__fastcall*)(void*))ext_00661980)(self);
    *(esi + 0x4) = 1;
    *(int*)(esi + 0x8) = 1;
    *(int*)esi = (int)&mem_0098C254;
    *(int*)(esi + 0xC) = 0;
    return self;
}

extern "C" int mem_00925134;

// [0x00673DD0] sub_00673DD0 (38 bytes)
extern "C" void* __fastcall fn_00673DD0(void* self) {
    int* s = (int*)self;
    void (*invalid_param)() = (void (*)())mem_00925134;
    if (s[0] == 0) {
        invalid_param();
    }
    int* p = (int*)s[0];
    if (s[1] == p[1]) {
        invalid_param();
    }
    return (char*)s[1] + 0xC;
}

// [0x0067AE20] sub_0067AE20 (38 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_0067AE20(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        call ext_0065C640
        mov eax, dword ptr [esi + 0xc]
        cmp dword ptr [eax + 0x10], 0x0
        mov ecx, edi
        setne bl
        call ext_0065C650
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret
    }
}

// [0x0067B3B0] sub_0067B3B0 (32 bytes)
extern "C" void __fastcall ext_0065C5F0(void* self);

extern "C" void* __fastcall fn_0067B3B0(void* self) {
    *(void**)self = (void*)0x0098C5EC;
    *((unsigned char*)self + 0xc) = 0;
    ext_0065C5F0((char*)self + 0x18);
    *(int*)((char*)self + 0x4) = 0;
    return self;
}

// [0x00671F50] sub_00671F50 (45 bytes)
extern "C" __declspec(naked) int __fastcall fn_00671F50(void* self, int edx_unused, void* other) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x4]
        cmp ecx, dword ptr [edx + 0x4]
        jne fail
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0xa8]
        push eax
        call edx
        test al, al
        pop esi
        je fail
        mov eax, 0x1
        ret 0x4
fail:
        xor eax, eax
        ret 0x4
    }
}

// [0x0067F9D0] sub_0067F9D0 (44 bytes)
extern "C" void __cdecl ext_0048A120(void* first, void* last, void* self);
extern "C" __declspec(naked) void __fastcall fn_0067F9D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je done_0067F9D0
        mov eax, dword ptr [esi + 0x8]
        mov edx, eax
        sub edx, ecx
        sar edx, 0x3
        je done_0067F9D0
        push esi
        push eax
        add eax, -0x8
        push eax
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], -0x8
    done_0067F9D0:
        pop esi
        pop ecx
        ret
    }
}

// [0x006799F0] sub_006799F0 (53 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_00924280;
extern "C" int mem_0092427C;
extern "C" __declspec(naked) void* __fastcall fn_006799F0(void* self) {
    __asm {
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je fail_006799F0
        lea eax, [edi + 0x10]
        push eax
        call dword ptr [mem_00924280]
        push edi
        call dword ptr [mem_0092427C]
        mov dword ptr [esi], edi
        pop edi
        mov eax, esi
        pop esi
        ret
    fail_006799F0:
        xor eax, eax
        mov dword ptr [esi], eax
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0067B3D0] sub_0067B3D0 (55 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_0067B3D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x18]
        mov ecx, edi
        call ext_0065C640
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x8], ecx
        mov ecx, dword ptr [esp + 0x14]
        xor eax, eax
        mov dword ptr [esi + 0x10], ecx
        mov ecx, edi
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x14], edx
        mov byte ptr [esi + 0xc], al
        call ext_0065C650
        pop edi
        pop esi
        ret 0x0c
    }
}

// [0x0067AEB0] sub_0067AEB0 (56 bytes)
extern "C" void ext_0067AEE8();
extern "C" int mem_00925134;
extern "C" int mem_00924260;
extern "C" __declspec(naked) int __fastcall fn_0067AEB0(void* self, int edx_unused, int a1) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        __asm _emit 0x7C __asm _emit 0x2F // jl short ext_0067AEE8 (next function; short rel8 kept for byte parity)
        push esi
        mov esi, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je call_invalid_0067AEB0
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb load_0067AEB0
    call_invalid_0067AEB0:
        call dword ptr [mem_00925134]
    load_0067AEB0:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + edi*4]
        pop esi
        pop edi
        mov dword ptr [esp + 0x4], ecx
        jmp dword ptr [mem_00924260]
    }
}

// [0x0067AEF0] sub_0067AEF0 (56 bytes)
extern "C" void ext_0067AF28();
extern "C" int mem_00925134;
extern "C" int mem_0092428C;
extern "C" __declspec(naked) void __fastcall fn_0067AEF0(void* self, int edx_unused, int idx) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        _emit 0x7c
        _emit 0x2f
        push esi
        mov esi, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*edi]
        pop esi
        pop edi
        mov dword ptr [esp + 0x4], ecx
        jmp dword ptr [mem_0092428C]
    }
}

// [0x0067AE70] sub_0067AE70 (58 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924274;
extern "C" __declspec(naked) void __fastcall fn_0067AE70(void* self, int edx_unused, int idx) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        jl done_0067AE70
        push esi
        mov esi, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je invalid_0067AE70
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb ok_0067AE70
    invalid_0067AE70:
        call dword ptr [mem_00925134]
    ok_0067AE70:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*edi]
        push -1
        push ecx
        call dword ptr [mem_00924274]
        pop esi
    done_0067AE70:
        pop edi
        ret 0x4
    }
}

// [0x0067B410] sub_0067B410 (58 bytes)
extern "C" int mem_00925734;
extern "C" int mem_00925724;
extern "C" __declspec(naked) void __fastcall fn_0067B410(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x4], 0x0
        je done_0067B410
        push edi
        lea edi, [esi + 0x18]
        mov ecx, edi
        call ext_0065C640
        mov eax, dword ptr [esi + 0x4]
        push eax
        call dword ptr [mem_00925734]
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        call dword ptr [mem_00925724]
        mov ecx, edi
        pop edi
        mov dword ptr [esi + 0x4], 0x0
        pop esi
        jmp ext_0065C650
    done_0067B410:
        pop esi
        ret
    }
}

// [0x0067DAD0] sub_0067DAD0 (59 bytes)
extern "C" void __fastcall fn_0067DAD0(void* self, int edx_unused, float* dst) {
    const float* src = (const float*)self;
    dst[0] = src[0];
    dst[3] = src[4];
    dst[6] = src[8];
    dst[1] = src[1];
    dst[4] = src[5];
    dst[7] = src[9];
    dst[2] = src[2];
    dst[5] = src[6];
    dst[8] = src[10];
}

// [0x00678130] sub_00678130 (61 bytes)
extern "C" double mem_0098C1D8;
extern "C" double mem_00955090;
extern "C" float __fastcall fn_00678130(void* self, int edx_unused, float a1) {
    int mode = *(int*)((char*)self + 0xc);
    if (mode == 0) {
        return (float)(a1 * mem_0098C1D8);
    }
    if (mode == 2) {
        return (float)(a1 / mem_00955090);
    }
    return a1;
}

// [0x00678170] sub_00678170 (62 bytes)
extern "C" int mem_0098C1D0;
extern "C" int mem_00993CC0;
extern "C" __declspec(naked) float __fastcall fn_00678170(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        cmp eax, 0x1
        jne check_two_00678170
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_0098C1D0]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    check_two_00678170:
        cmp eax, 0x2
        jne passthru_00678170
        fld dword ptr [esp + 0x4]
        fdiv qword ptr [mem_00993CC0]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    passthru_00678170:
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x006781B0] sub_006781B0 (63 bytes)
extern "C" int mem_0098C1D0;
extern "C" int mem_009576E8;
extern "C" float __fastcall fn_006781B0(void* self, int edx_unused, float a1) {
    int mode = *(int*)((char*)self + 0xc);
    if (mode == 0) {
        return (float)(a1 * *(double*)&mem_0098C1D0);
    }
    if (mode == 2) {
        return (float)(a1 * *(double*)&mem_009576E8 + a1 * *(double*)&mem_009576E8);
    }
    return a1;
}

// [0x0067ECA0] sub_0067ECA0 (66 bytes)
extern "C" int mem_00924FFC;
extern "C" int mem_0092530C;
extern "C" __declspec(naked) void __fastcall fn_0067ECA0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push 0x10
        push 0x0
        mov esi, ecx
        push 0x0
        mov ecx, edi
        call dword ptr [mem_00924FFC]
        mov ebx, dword ptr [mem_0092530C]
        push eax
        call ebx
        add esp, 0xc
        push 0x10
        push 0x0
        push 0x9
        mov ecx, edi
        mov dword ptr [esi + 0x4], eax
        call dword ptr [mem_00924FFC]
        push eax
        call ebx
        add esp, 0xc
        pop edi
        mov dword ptr [esi], eax
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0067F910] sub_0067F910 (66 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void* __fastcall fn_0067F910(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip_0067F910_a
        call ebp
skip_0067F910_a:
        lea eax, [edi - 0x8]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja call_0067F910_b
        cmp eax, dword ptr [esi + 0x4]
        jae skip_0067F910_c
call_0067F910_b:
        call ebp
skip_0067F910_c:
        lea esi, [edi - 0x8]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb skip_0067F910_d
        call ebp
skip_0067F910_d:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x00676780] sub_00676780 (70 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00676780(void* self) {
    __asm {
        push -1
        push 0x89a0fc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], edi
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00678520] sub_00678520 (70 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_00678520(void* self) {
    __asm {
        push -1
        push 0x8b4838
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x98c1f4
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00672D10] sub_00672D10 (71 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00672D10(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x00670EC0] sub_00670EC0 (72 bytes)
extern "C" int mem_008B3C5B;
extern "C" __declspec(naked) void __fastcall fn_00670EC0(void* self) {
    __asm {
        push -1
        push offset mem_008B3C5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], eax
        call ext_0065C5F0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00672810] sub_00672810 (73 bytes)
extern "C" void __cdecl ext_0041CDE0();
extern "C" __declspec(naked) void* __cdecl fn_00672810(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push esi
        push edi
        push ebx
        call ext_0041CDE0
        mov eax, edi
        sub eax, ebx
        add esp, 0x18
        sar eax, 0x5
        shl eax, 0x5
        pop edi
        add eax, esi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0067B450] sub_0067B450 (80 bytes)
extern "C" void ext_0065C620();
extern "C" void ext_0067B410();

extern "C" __declspec(naked) void __fastcall fn_0067B450(void* self) {
    __asm {
        push -1
        push 0x008B4A9B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0098C5EC
        mov dword ptr [esp + 0x10], 0x0
        call ext_0067B410
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], -1
        call ext_0065C620
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00678280] sub_00678280 (83 bytes)
extern "C" void ext_0065C660();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00678280(void* self) {
    __asm {
        push -1
        push 0x008B4838
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0098C1F4
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006721F0] sub_006721F0 (85 bytes)
extern "C" int mem_00B599BC;
extern "C" void ext_006721B0();
extern "C" __declspec(naked) void* __cdecl fn_006721F0(void* out, int arg) {
    __asm {
        push -0x1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x8], 0x1
        call ext_006721B0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00672250] sub_00672250 (85 bytes)
extern "C" void ext_00672190();
extern "C" __declspec(naked) void* __cdecl fn_00672250(void* out, int arg) {
    __asm {
        push -0x1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x8], 0x1
        call ext_00672190
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00670B30] sub_00670B30 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59864;
extern "C" int mem_00B59860;

extern "C" __declspec(naked) void* __fastcall fn_00670B30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3bfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59864], al
        jne L_done
        or dword ptr [mem_00B59864], eax
        mov ecx, offset mem_00B59860
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59860], 0x98b1a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59860
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00670B90] sub_00670B90 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5986C;
extern "C" int mem_00B59868;

extern "C" __declspec(naked) void* __fastcall fn_00670B90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3c1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5986C], al
        jne L_done
        or dword ptr [mem_00B5986C], eax
        mov ecx, offset mem_00B59868
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59868], 0x98b354
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59868
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00670BF0] sub_00670BF0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59874;
extern "C" int mem_00B59870;

extern "C" __declspec(naked) void* __fastcall fn_00670BF0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3c3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59874], al
        jne L_done
        or dword ptr [mem_00B59874], eax
        mov ecx, offset mem_00B59870
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59870], 0x98b504
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59870
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00670D80] sub_00670D80 (87 bytes)
extern "C" __declspec(naked) void __stdcall fn_00670D80(int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_head_00670D80:
        test esi, esi
        je L_inv1_00670D80
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_00670D80
    L_inv1_00670D80:
        call ebp
    L_ok1_00670D80:
        cmp edi, dword ptr [esp + 0x20]
        je L_done_00670D80
        test esi, esi
        mov ebx, edi
        jne L_ok2_00670D80
        call ebp
    L_ok2_00670D80:
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok3_00670D80
        call ebp
    L_ok3_00670D80:
        add edi, 0x4
        test esi, esi
        jne L_ok4_00670D80
        call ebp
    L_ok4_00670D80:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ok5_00670D80
        call ebp
    L_ok5_00670D80:
        mov eax, dword ptr [ebx]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        jmp L_head_00670D80
    L_done_00670D80:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00674EC0] sub_00674EC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59DB0;
extern "C" int mem_00B59DAC;

extern "C" __declspec(naked) void* __fastcall fn_00674EC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b426e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59DB0], al
        jne L_done
        or dword ptr [mem_00B59DB0], eax
        mov ecx, offset mem_00B59DAC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59DAC], 0x98bf74
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59DAC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00674F20] sub_00674F20 (30 bytes)
extern "C" void ext_00674EC0();

extern "C" __declspec(naked) void __fastcall fn_00674F20(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_00674EC0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

extern "C" void ext_00674F20();

// [0x00675000] sub_00675000 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00675000(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_00674F20
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00679EB0] sub_00679EB0 (88 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void** __cdecl fn_00679EB0(void** first, void** last, const void* value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub edi, ebx
        sar edi, 0x2
        test edi, edi
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        mov eax, dword ptr [ebx + 4 * esi]
        add eax, 0x10
        push ebp
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je not_less
        or eax, -1
        sub eax, esi
        lea ebx, [ebx + 4 * esi + 4]
        add edi, eax
        jmp next
    not_less:
        mov edi, esi
    next:
        test edi, edi
        jg loop_top
        pop esi
        pop ebp
    done:
        pop edi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00670FD0] sub_00670FD0 (88 bytes)
extern "C" void ext_00670EC0();
extern "C" void ext_0067A670();
extern "C" __declspec(naked) void __fastcall fn_00670FD0(void* self) {
    __asm {
        push -1
        push 0x008B3C78
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0067A670
        mov dword ptr [esi + 0x4], 0x0093BF24
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x0098B9FC
        mov dword ptr [esi + 0x4], 0x0098B9C8
        call ext_00670EC0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00672590] sub_00672590 (89 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00672590(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0x28], 0
        lea eax, [esi + 0x24]
        mov dword ptr [esp + 0x10], 0
        je skip_call
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_call:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00670C50] sub_00670C50 (90 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00670C50(void** first, void** last, void** val) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x8]
        sub ecx, edi
        sar ecx, 0x2
        test ecx, ecx
        jle ret_00670C50
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        mov ebp, dword ptr [eax]
        mov ebx, dword ptr [ebp + 0x4]
        push esi
        mov edi, edi
    loop_00670C50:
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 0x1
        mov edx, dword ptr [edi + 4*eax]
        mov esi, dword ptr [edx + 0x4]
        cmp esi, ebx
        jb right_00670C50
        jne left_00670C50
        mov edx, dword ptr [edx + 0x8]
        cmp edx, dword ptr [ebp + 0x8]
        setb dl
        test dl, dl
        je left_00670C50
    right_00670C50:
        or edx, -0x1
        sub edx, eax
        lea edi, [edi + 4*eax + 0x4]
        add ecx, edx
        jmp test_00670C50
    left_00670C50:
        mov ecx, eax
    test_00670C50:
        test ecx, ecx
        jg loop_00670C50
        pop esi
        pop ebp
        pop ebx
    ret_00670C50:
        mov eax, edi
        pop edi
        ret
    }
}

// [0x006788E0] sub_006788E0 (90 bytes)
extern "C" void ext_00678890();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59E80;
extern "C" __declspec(naked) void __fastcall fn_006788E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b485e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59E80], al
        jne done
        or dword ptr [mem_00B59E80], eax
        mov ecx, 0xb59e70
        mov dword ptr [esp + 0x8], 0x0
        call ext_00678890
        push 0x921a10
        call ext_006A6C87
        add esp, 0x4
    done:
        mov ecx, dword ptr [esp]
        mov eax, 0xb59e70
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006767D0] sub_006767D0 (86 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00924EA8;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006767D0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924EA8]
        mov ebx, dword ptr [edi + 0x28]
        cmp dword ptr [edi + 0x24], ebx
        lea esi, [edi + 0x20]
        jbe L_006767F3
        call dword ptr [mem_00925134]
    L_006767F3:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_00676801
        call dword ptr [mem_00925134]
    L_00676801:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov dword ptr [edi + 0x30], 0
        mov dword ptr [edi], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0067B8D0] sub_0067B8D0 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067B8D0(void* self, int edx_unused, const float* a, const float* b, const float* c) {
    __asm {
        fldz
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x1c]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x20]
        ret 0xc
    }
}

// [0x0067DB90] sub_0067DB90 (95 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" __declspec(naked) void __fastcall fn_0067DB90(void* self, int edx_unused, float a) {
    __asm {
        push ecx
        fld dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        call ext_006A6EB0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        call ext_006A6EAA
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi]
        fldz
        fst dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fchs
        fstp dword ptr [esi + 0x8]
        fxch st(1)
        fst dword ptr [esi + 0xc]
        fld1
        fstp dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x14]
        fstp dword ptr [esi + 0x1c]
        fstp dword ptr [esi + 0x18]
        fstp dword ptr [esi + 0x20]
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00679990] sub_00679990 (96 bytes)
extern "C" int mem_0092427C;
extern "C" double mem_00928E78;
extern "C" __declspec(naked) float __fastcall fn_00679990(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call dword ptr [mem_0092427C]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0xc], eax
        or eax, ecx
        mov dword ptr [esp + 0x10], ecx
        jne nonzero_00679990
        fldz
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x10
        ret
    nonzero_00679990:
        mov ecx, dword ptr [esp + 0x4]
        sub ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x8]
        sbb edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x4], ecx
        mov dword ptr [esp + 0x8], edx
        fild qword ptr [esp + 0x4]
        pop esi
        fmul qword ptr [mem_00928E78]
        fild qword ptr [esp + 0x8]
        fdivp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x10
        ret
    }
}

// [0x0067B860] sub_0067B860 (98 bytes)
extern "C" void ext_006A7250();
extern "C" void __fastcall fn_0067B860(void* self) {
    float* v = (float*)self;
    double x = (double)v[0];
    double y = (double)v[1];
    double z = (double)v[2];
    double len = sqrt(x * x + y * y + z * z);
    if (len != 0.0) {
        double inv = 1.0 / len;
        v[0] = (float)(x * inv);
        v[1] = (float)(y * inv);
        v[2] = (float)(z * inv);
    }
}

// [0x0067B7F0] sub_0067B7F0 (100 bytes)
extern "C" void ext_006A7250();
extern "C" void* __fastcall fn_0067B7F0(void* self) {
    float* v = (float*)self;
    double x = (double)v[0];
    double y = (double)v[1];
    double z = (double)v[2];
    double len = sqrt(x * x + y * y + z * z);
    if (len != 0.0) {
        double inv = 1.0 / len;
        v[0] = (float)(x * inv);
        v[1] = (float)(y * inv);
        v[2] = (float)(z * inv);
    }
    return self;
}

// [0x0067B530] sub_0067B530 (100 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00925730;
extern "C" int mem_0092572C;
extern "C" int mem_00925728;
extern "C" __declspec(naked) void __fastcall fn_0067B530(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x18]
        mov ecx, edi
        call ext_0065C640
        push 0x8
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00925730]
        mov ecx, dword ptr [esp + 0xc]
        mov ebx, dword ptr [esp + 0x10]
        xor edx, edx
        cmp edx, ecx
        sbb eax, eax
        and eax, ecx
        cmp eax, ebx
        jae skip_0067B530
        mov ebx, eax
    skip_0067B530:
        push ebx
        call dword ptr [mem_0092572C]
        mov eax, dword ptr [esi + 0x8]
        push 0x1
        push esi
        push 0x67b4a0
        push ebx
        push eax
        mov byte ptr [esi + 0xc], 0x0
        call dword ptr [mem_00925728]
        mov ecx, edi
        mov dword ptr [esi + 0x4], eax
        call ext_0065C650
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0067B5C0] sub_0067B5C0 (34 bytes)
extern "C" void ext_0067B530();
extern "C" int mem_00924248;
extern "C" __declspec(naked) void __fastcall fn_0067B5C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0067B530
        cmp dword ptr [esi + 0x4], 0x0
        je done_0067B5C0
        push edi
        mov edi, dword ptr [mem_00924248]
    wait_0067B5C0:
        push 0x32
        call edi
        cmp dword ptr [esi + 0x4], 0x0
        jne wait_0067B5C0
        pop edi
    done_0067B5C0:
        pop esi
        ret
    }
}

// [0x00673C90] sub_00673C90 (101 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00673C90(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [edi + 0x38]
        mov dword ptr [esi + 0x38], ecx
        mov edx, dword ptr [edi + 0x3c]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x3c], edx
        mov eax, dword ptr [edi + 0x40]
        mov dword ptr [esi + 0x40], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0067DA60] sub_0067DA60 (101 bytes)
extern "C" void __fastcall fn_0067DA60(void* self, int edx_unused, float* dst) {
    const float* src = (const float*)self;
    dst[0] = src[0];
    dst[4] = src[4];
    dst[8] = src[8];
    dst[12] = src[12];
    dst[1] = src[1];
    dst[5] = src[5];
    dst[9] = src[9];
    dst[13] = src[13];
    dst[2] = src[2];
    dst[6] = src[6];
    dst[10] = src[10];
    dst[14] = src[14];
    dst[3] = src[3];
    dst[7] = src[7];
    dst[11] = src[11];
    dst[15] = src[15];
}
