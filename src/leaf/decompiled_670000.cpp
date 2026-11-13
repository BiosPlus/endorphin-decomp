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

// [0x00676710] sub_00676710 (102 bytes)
extern "C" void ext_006616D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_00676710(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, ebp
        sub esi, ebx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        sar esi, 0x3
        test edi, edi
        jne chk_ok_00676710
        call dword ptr [mem_00925134]
    chk_ok_00676710:
        mov eax, dword ptr [esp + 0x20]
        lea eax, [eax + 8*esi]
        cmp eax, dword ptr [edi + 0x8]
        ja chk_fail_00676710
        cmp eax, dword ptr [edi + 0x4]
        jae chk_pass_00676710
    chk_fail_00676710:
        call dword ptr [mem_00925134]
    chk_pass_00676710:
        cmp ebx, ebp
        mov esi, ebx
        je done_00676710
        mov edi, dword ptr [esp + 0x20]
        sub edi, ebx
    loop_00676710:
        lea ecx, [edi + esi]
        push ecx
        mov ecx, esi
        call ext_006616D0
        test al, al
        je done_00676710
        add esi, 0x8
        cmp esi, ebp
        jne loop_00676710
    done_00676710:
        pop edi
        xor eax, eax
        cmp esi, ebp
        pop esi
        pop ebp
        sete al
        pop ebx
        ret
    }
}

// [0x0067DBF0] sub_0067DBF0 (103 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" __declspec(naked) void __fastcall fn_0067DBF0(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        fld dword ptr [esp + 0x8]
        push esi
        fchs
        mov esi, ecx
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
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
        fld dword ptr [esp + 0x4]
        fld st(0)
        fchs
        fstp dword ptr [esi + 0x4]
        fldz
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x18]
        fstp dword ptr [esi + 0x1c]
        fstp dword ptr [esi + 0xc]
        fstp dword ptr [esi + 0x10]
        fld1
        fstp dword ptr [esi + 0x20]
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0067F960] sub_0067F960 (104 bytes)
extern "C" int mem_00B5A120;
extern "C" int mem_00B5A124;
extern "C" int mem_00B5A11C;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0067F960(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B5A120]
        sub esp, 0x8
        test edx, edx
        je L_empty
        mov eax, dword ptr [mem_00B5A124]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 0x2
        jne L_nonempty
    L_empty:
        xor eax, eax
        add esp, 0x8
        ret
    L_nonempty:
        cmp edx, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        jbe L_skip1
        call ebx
        mov eax, dword ptr [mem_00B5A124]
        mov edx, dword ptr [mem_00B5A120]
    L_skip1:
        mov ecx, offset mem_00B5A11C
        push edi
        mov edi, ecx
        lea ecx, [esi - 0x4]
        cmp ecx, eax
        mov dword ptr [esp + 0x10], esi
        ja L_call2
        cmp ecx, edx
        jae L_skip2
    L_call2:
        call ebx
    L_skip2:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        pop edi
        jb L_skip3
        call ebx
    L_skip3:
        mov eax, dword ptr [esi]
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0067AB10] sub_0067AB10 (105 bytes)
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0067AB10(void* self) {
    __asm {
        push -1
        push 0x8828d1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x98c574
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0x0
        call ext_00403560
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esi], 0x98c56c
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00673C20] sub_00673C20 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00673C20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_00673C20
        call edi
    L_skip_call_00673C20:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 2Dh], 0
        je L_not_nil_00673C20
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_00673C20:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 2Dh], 0
        jne L_right_nil_00673C20
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 2Dh], 0
        jne L_store_left_00673C20
    L_leftmost_loop_00673C20:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 2Dh], 0
        je L_leftmost_loop_00673C20
    L_store_left_00673C20:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_00673C20:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 2Dh], 0
        jne L_done_00673C20
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop_00673C20:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_00673C20
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 2Dh], 0
        je L_loop_00673C20
    L_done_00673C20:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x0067C450] sub_0067C450 (113 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" __declspec(naked) void __fastcall fn_0067C450(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fld dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        call ext_006A6EAA
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x14]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fstp dword ptr [esi]
        fxch st(3)
        fmulp st(2), st
        fmulp st(2), st
        __asm _emit 0xde
        __asm _emit 0xe1
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x0067C4D0] sub_0067C4D0 (113 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" __declspec(naked) void __fastcall fn_0067C4D0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fld dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        call ext_006A6EAA
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        __asm _emit 0xde
        __asm _emit 0xe1
        fstp dword ptr [esi]
        fxch st(3)
        fmulp st(2), st
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esi + 0x4]
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x0067D9E0] sub_0067D9E0 (114 bytes)
extern "C" int __cdecl ext_005631C0(double, double);
extern "C" int __cdecl ext_0056B670(double, double, double);

extern "C" __declspec(naked) bool __fastcall fn_0067D9E0(float* self, int edx_unused, float a1) {
    __asm {
        push esi
        push edi
        xor edi, edi
        xor esi, esi
    OUTER_TOP:
        xor edx, edx
        jmp INNER_TOP
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    INNER_TOP:
        cmp edi, edx
        fld dword ptr [esp + 0xc]
        lea eax, [esi + edx]
        jne ELSE_BR
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld1
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 4*eax]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        jmp AFTER_CALL
    ELSE_BR:
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [ecx + 4*eax]
        fstp qword ptr [esp]
        call ext_005631C0
        add esp, 0x10
    AFTER_CALL:
        test al, al
        je RET_FALSE
        add edx, 0x1
        cmp edx, 0x3
        jl INNER_TOP
        add esi, 0x3
        add edi, 0x1
        cmp esi, 0x9
        jl OUTER_TOP
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    RET_FALSE:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x0067C3D0] sub_0067C3D0 (115 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" __declspec(naked) void __fastcall fn_0067C3D0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0xc
        fld dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        call ext_006A6EAA
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        __asm _emit 0xde
        __asm _emit 0xe1
        fstp dword ptr [esi + 0x4]
        fxch st(3)
        fmulp st(2), st
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x00672C20] sub_00672C20 (120 bytes)
extern "C" __declspec(naked) void __cdecl fn_00672C20(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
        jmp loop_head
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
loop_head:
        cmp dword ptr [esi + 0x28], 0x0
        lea eax, [esi + 0x24]
        mov dword ptr [esp + 0x10], 0x0
        je skip_call
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
skip_call:
        mov ecx, esi
        mov dword ptr [esp + 0x10], -0x1
        call dword ptr [mem_00924FF4]
        add esi, 0x2c
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne loop_head
done:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00672E70] sub_00672E70 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_00672E70(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00672E70
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00672C20
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00672E70:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

extern "C" int mem_00924EF4;

// [0x006724B0] sub_006724B0 (121 bytes)
extern "C" __declspec(naked) void __cdecl fn_006724B0(void** first, int hole, int top, void* val) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        lea eax, [ebx - 0x1]
        cdq
        sub eax, edx
        push esi
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x14], ebx
        jge l_direct_006724B0
        push edi
        mov edi, dword ptr [esp + 0x10]
        push ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    l_loop_006724B0:
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov ebp, dword ptr [edi + 4 * esi]
        call edx
        push eax
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebp
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je l_exit_006724B0
        mov eax, dword ptr [edi + 4 * esi]
        mov dword ptr [edi + 4 * ebx], eax
        lea eax, [esi - 0x1]
        cdq
        sub eax, edx
        mov ebx, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], ebx
        mov esi, eax
        jl l_loop_006724B0
    l_exit_006724B0:
        mov ecx, dword ptr [esp + 0x20]
        pop ebp
        mov dword ptr [edi + 4 * ebx], ecx
        pop edi
        pop esi
        pop ebx
        ret
    l_direct_006724B0:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr [eax + 4 * ebx], edx
        pop ebx
        ret
    }
}

// [0x0067DB10] sub_0067DB10 (125 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067DB10(void* self, int edx_unused, const float* src) {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [esp + 10h]
        fld dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0ch]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [ecx + 10h]
        fld dword ptr [eax + 18h]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [ecx + 20h]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 4]
        fld dword ptr [eax + 10h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 14h]
        fld dword ptr [eax + 1ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [ecx + 24h]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx + 8]
        fld dword ptr [eax + 14h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx + 18h]
        fld dword ptr [eax + 20h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [ecx + 28h]
        add esp, 0ch
        ret 4
    }
}

// [0x0067E650] sub_0067E650 (98 bytes)
extern "C" void ext_00658880();
extern "C" void ext_0067DB10();

extern "C" __declspec(naked) void __fastcall fn_0067E650(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fst dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp]
        call ext_00658880
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        call ext_0067DB10
        fldz
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x34]
        fstp dword ptr [esi + 0x38]
        fld1
        fstp dword ptr [esi + 0x3c]
        pop esi
        add esp, 0x24
        ret 0x4
    }
}

// [0x00673B90] sub_00673B90 (130 bytes)
// Walks the +0xC linked list of self; for each node builds a 2-dword temp {node+0x10, node+0x14},
// calls vfunc 6 on temp.first and, if that is false, returns vfunc 7 on temp.first (sets edi).
extern "C" void ext_006616B0();
extern "C" void ext_006616C0();
extern "C" void ext_00493D90();

extern "C" __declspec(naked) void __fastcall fn_00673B90(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b40d8
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push esi
        mov esi, dword ptr [ecx + 0xc]
        push edi
        xor edi, edi
    L_loop:
        test esi, esi
        je L_end
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x8], eax
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0xc], ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x1c], 0x0
        call ext_006616B0
        test al, al
        jne L_next
        lea ecx, [esp + 0x8]
        call ext_006616C0
        mov edi, eax
    L_next:
        mov esi, dword ptr [esi + 0xc]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_00493D90
        test edi, edi
        je L_loop
    L_end:
        mov ecx, dword ptr [esp + 0x14]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0067B930] sub_0067B930 (114 bytes)
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9FAE8;
extern "C" int mem_00A9FAEC;
extern "C" int mem_00A9FAF4;
extern "C" __declspec(naked) void __fastcall fn_0067B930(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9FAE8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9FAEC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9FAF4]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0x8
        push esi
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00673420] sub_00673420 (135 bytes)
extern "C" void ext_00672C20();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00673420(void* self) {
    __asm {
        push -0x1
        push 0x8b6814
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        lea ecx, [edi + 0x2c]
        mov dword ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi + 0x20]
        lea esi, [edi + 0x1c]
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr [esp + 0x18], bl
        je skip_00673420
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_00672C20
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
skip_00673420:
        mov ecx, edi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esp + 0x18], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00673720] sub_00673720 (35 bytes)
extern "C" void ext_00673420();

extern "C" __declspec(naked) void __fastcall fn_00673720(void* self, int edx_unused, void* begin, void* end) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done_673720
        __asm _emit 0x8B __asm _emit 0xFF // mov edi, edi
    loop_673720:
        mov ecx, esi
        call ext_00673420
        add esi, 0x50
        cmp esi, edi
        jne loop_673720
    done_673720:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00673750] sub_00673750 (70 bytes)
extern "C" __declspec(naked) void __fastcall fn_00673750(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done_673750
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip_673750
    loop_673750:
        mov ecx, esi
        call ext_00673420
        add esi, 0x50
        cmp esi, edi
        jne loop_673750
    skip_673750:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done_673750:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x006737B0] sub_006737B0 (123 bytes)
extern "C" void ext_0065F440();
extern "C" void ext_00672D10();
extern "C" void ext_00673750();

extern "C" __declspec(naked) void __fastcall fn_006737B0(void* self) {
    __asm {
        push -1
        push 0x008b3f8e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x0098bf2c
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x14], 0x2
        call ext_00673750
        mov eax, dword ptr [esi + 0x18]
        xor ebx, ebx
        cmp eax, ebx
        je L_006737F6
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_006737F6:
        lea ecx, [esi + 0x4]
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov byte ptr [esp + 0x14], bl
        call ext_00672D10
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006738D0] sub_006738D0 (138 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_006738D0(void* self) {
    __asm {
        push -1
        push 8B401Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea eax, [esp + 18h]
        push eax
        mov dword ptr [esp + 14h], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 34h]
        push ecx
        lea ecx, [esi + 1Ch]
        mov byte ptr [esp + 14h], 2
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 50h]
        mov edx, dword ptr [esp + 54h]
        xor eax, eax
        mov dword ptr [esi + 40h], ecx
        lea ecx, [esp + 18h]
        mov dword ptr [esi + 38h], edx
        mov dword ptr [esi + 3Ch], eax
        mov byte ptr [esp + 10h], al
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 10h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 40h
    }
}

extern "C" int mem_009241E0;

// [0x0067B090] sub_0067B090 (138 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067B090(void* self) {
    __asm {
        push -1
        push 008882e8h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov [esp+10h], edi
        mov ebx, [edi+8]
        cmp [edi+4], ebx
        mov ebp, [mem_00925134]
        mov dword ptr [esp+1ch], 0
        jbe L_0067B0C8
        call ebp
L_0067B0C8:
        mov esi, [edi+4]
        cmp esi, [edi+8]
        jbe L_0067B0D2
        call ebp
L_0067B0D2:
        cmp esi, ebx
        je L_0067B0EC
        mov ebp, [mem_009241E0]
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
L_0067B0E0:
        mov eax, [esi]
        push eax
        call ebp
        add esi, 4
        cmp esi, ebx
        jne L_0067B0E0
L_0067B0EC:
        mov eax, [edi+4]
        xor esi, esi
        cmp eax, esi
        je L_0067B0FE
        push eax
        call ext_006A5C5C
        add esp, 4
L_0067B0FE:
        mov ecx, [esp+14h]
        mov [edi+4], esi
        mov [edi+8], esi
        mov [edi+0ch], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x00672690] sub_00672690 (139 bytes)
extern "C" int mem_00924EF4;
extern "C" void ext_006724B0();
extern "C" __declspec(naked) void __cdecl fn_00672690(void** first, int hole, int len, void* val, void* comp) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        lea esi, [ebp + ebp + 0x2]
        cmp esi, eax
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], ebp
        jge l_after_loop_00672690
        push ebx
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    l_loop_00672690:
        mov ecx, dword ptr [edi + 4 * esi - 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov ebx, dword ptr [edi + 4 * esi]
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je l_noDec_00672690
        sub esi, 0x1
    l_noDec_00672690:
        mov eax, dword ptr [edi + 4 * esi]
        mov dword ptr [edi + 4 * ebp], eax
        mov ebp, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, dword ptr [esp + 0x1c]
        jl l_loop_00672690
        mov eax, dword ptr [esp + 0x1c]
        pop ebx
        cmp esi, eax
    l_after_loop_00672690:
        jne l_noSingle_00672690
        mov ecx, dword ptr [edi + 4 * eax - 0x4]
        mov dword ptr [edi + 4 * ebp], ecx
        lea ebp, [eax - 0x1]
    l_noSingle_00672690:
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push eax
        push ecx
        push ebp
        push edi
        call ext_006724B0
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x0067B1F0] sub_0067B1F0 (110 bytes)
extern "C" void ext_0067B050();
extern "C" void ext_0065C620();

extern "C" __declspec(naked) void __fastcall fn_0067B1F0(void* self) {
    __asm {
        push -1
        push 0x008b4a86
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 0x0098c5c8
        mov dword ptr [esp + 0x14], 1
        call ext_0067B050
        mov edi, dword ptr [esi + 0xc]
        test edi, edi
        mov byte ptr [esp + 0x14], 0
        je L_skip
        mov ecx, edi
        call ext_0067B090
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip:
        lea ecx, [esi + 8]
        mov dword ptr [esp + 0x14], -1
        call ext_0065C620
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006727D0] sub_006727D0 (63 bytes)
extern "C" void ext_00672690();

extern "C" void __cdecl fn_006727D0(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        ((void (__cdecl*)(unsigned int*, int, int, unsigned int, int))ext_00672690)(first, hole, len, first[hole], comp);
    }
}

// [0x00672BD0] sub_00672BD0 (74 bytes)
extern "C" void ext_00672690();

extern "C" __declspec(naked) void __cdecl fn_00672BD0(unsigned int* first, unsigned int* last, int comp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_00672690
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x14
        cmp eax, 0x1
        jg loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00676860] sub_00676860 (139 bytes)
extern "C" void ext_00676710();
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __cdecl fn_00676860(void* a, void* b) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne L_a_nonnull
        xor ecx, ecx
        jmp L_a_size_done
    L_a_nonnull:
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
    L_a_size_done:
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [ebx + 0x4]
        test esi, esi
        jne L_b_nonnull
        xor eax, eax
        jmp L_b_size_done
    L_b_nonnull:
        mov eax, dword ptr [ebx + 0x8]
        sub eax, esi
        sar eax, 0x3
    L_b_size_done:
        cmp ecx, eax
        jne L_not_equal
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        push ebp
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        mov edi, dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x14]
        cmp edi, dword ptr [eax + 0x8]
        jbe L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        push esi
        push ebx
        push ebp
        push edi
        call ext_00676710
        add esp, 0x18
        test al, al
        pop ebp
        je L_not_equal
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    L_not_equal:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x0067B4A0] sub_0067B4A0 (141 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067B410();
extern "C" int mem_00924290;
extern "C" int mem_00924288;
extern "C" __declspec(naked) void __stdcall fn_0067B4A0(int a0, void* self, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, dword ptr [esp + 0x28]
        push edi
        lea edi, [esi + 0x18]
        mov ecx, edi
        call ext_0065C640
        cmp byte ptr [esi + 0xc], 0x0
        jne skip_init_0067B4A0
        mov dword ptr [esp + 0x8], 0x0
        mov dword ptr [esp + 0xc], 0x2
        mov dword ptr [esp + 0x10], 0x1
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], 0xffffffff
        mov dword ptr [esp + 0x1c], 0xfffffffe
        call dword ptr [mem_00924290]
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je skip_prio_0067B4A0
        mov ecx, dword ptr [esp + 4*ecx + 0x8]
        push ecx
        push eax
        call dword ptr [mem_00924288]
    skip_prio_0067B4A0:
        mov byte ptr [esi + 0xc], 0x1
    skip_init_0067B4A0:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je call_0067B410_0067B4A0
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        test al, al
        jne done_0067B4A0
    call_0067B410_0067B4A0:
        mov ecx, esi
        call ext_0067B410
    done_0067B4A0:
        mov ecx, edi
        call ext_0065C650
        pop edi
        pop esi
        add esp, 0x18
        ret 0x14
    }
}

// [0x0067BEC0] sub_0067BEC0 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067BEC0(void* self, int edx_unused, void* out, void* mp) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fldz
        fst dword ptr [eax + 0x8]
        sub esp, 0x48
        fst dword ptr [eax + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0x54]
        fstp dword ptr [eax]
        push esi
        push edi
        mov edx, ecx
        fld dword ptr [edx + 0x4]
        mov esi, ebx
        fld dword ptr [edx]
        mov ecx, 0x9
        fld dword ptr [edx + 0x8]
        lea edi, [esp + 0x30]
        rep movsd
        mov esi, ebx
        mov ecx, 0x9
        lea edi, [esp + 0xc]
        rep movsd
        fld dword ptr [esp + 0x18]
        fmul st, st(3)
        fld dword ptr [esp + 0x30]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [esp + 0x24]
        fmul st, st(2)
        faddp st(1), st
        pop edi
        pop esi
        pop ebx
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fmul st, st(2)
        fld dword ptr [esp + 0x34]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esp + 0x1c]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fmulp st(2), st
        fld dword ptr [esp + 0x14]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esp + 0x44]
        faddp st(1), st
        fstp dword ptr [eax + 0x8]
        add esp, 0x48
        ret 0x8
    }
}

// [0x0067C8C0] sub_0067C8C0 (46 bytes)
extern "C" void ext_0067BEC0();
extern "C" __declspec(naked) void __fastcall fn_0067C8C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xc
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_0067BEC0
        fld dword ptr [eax]
        fstp dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x00677C70] sub_00677C70 (145 bytes)
extern "C" void ext_004F0340();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00677C70(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 40h]
        test eax, eax
        je skip_first
        lea ecx, [edi + 4]
        lea edx, [esp + 0Ch]
        mov dword ptr [esp + 0Ch], ecx
        push edx
        lea ecx, [eax + 4]
        call ext_00451670
    skip_first:
        lea esi, [edi + 20h]
        mov dword ptr [edi + 40h], 0
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe chk1_ok
        call dword ptr [mem_00925134]
    chk1_ok:
        push ebp
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe chk2_ok
        call dword ptr [mem_00925134]
    chk2_ok:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        call ext_004F0340
        lea esi, [edi + 30h]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        pop ebp
        jbe chk3_ok
        call dword ptr [mem_00925134]
    chk3_ok:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe chk4_ok
        call dword ptr [mem_00925134]
    chk4_ok:
        push edi
        push esi
        push ebx
        push esi
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006725F0] sub_006725F0 (148 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __cdecl fn_006725F0(void* first, void* mid, void* last) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        mov ebp, dword ptr [mem_00924EF4]
        push eax
        call ebp
        add esp, 8
        test al, al
        je short L_skip1
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
    L_skip1:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ecx]
        mov ebx, dword ptr [edx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        call ebp
        add esp, 8
        test al, al
        je short L_skip2
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx], edx
        mov dword ptr [esi], eax
    L_skip2:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov ebx, dword ptr [esi]
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        call ebp
        add esp, 8
        test al, al
        je short L_skip3
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
    L_skip3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00673E00] sub_00673E00 (154 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00673E00(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        mov edx, dword ptr [esp + 0x4]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [ecx + 0x8]
        sub esp, 0x44
        push esi
        mov esi, 0x3c3c3c3
        sub esi, eax
        cmp esi, edx
        pop esi
        jae ok
        push 0x92fa58
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4c], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp]
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0x1
        mov dword ptr [esp + 0x20], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9cdf20
        lea ecx, [esp + 0x20]
        push ecx
        mov byte ptr [esp + 0x54], 0x0
        mov dword ptr [esp + 0x24], 0x928ed8
        call ext_006A6DD2
ok:
        add eax, edx
        mov dword ptr [ecx + 0x8], eax
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x00675B70] sub_00675B70 (155 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_006616B0();
extern "C" void ext_00661840();
extern "C" void ext_00661860();

extern "C" __declspec(naked) void* __fastcall fn_00675B70(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -0x1
        push 0x8b43f1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push esi
        push edi
        mov dword ptr [esp + 0x8], 0x0
        mov edi, dword ptr [esp + 0x30]
        mov eax, dword ptr [edi + 0x4c]
        mov esi, dword ptr [esp + 0x24]
        push eax
        push esi
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x24], 0x1
        call ext_00661840
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x1
        call ext_006616B0
        test al, al
        je short L_skip
        add edi, 0x10
        push edi
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x30]
        call ext_00661860
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x4], edx
        call ext_00493D90
    L_skip:
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x1c], 0x0
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x10
    }
}

// [0x006782E0] sub_006782E0 (159 bytes)
// Two by-value std::string args (0x1c each, ret 0x38): a at +4, b at +0x20.
// Copies b into self+4 via a temporary, then calls the vtable slot 8 with a.c_str().
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_006782E0(void* self, int edx_unused, void* a, void* b) {
    __asm {
        push -0x1
        push 0x8b47eb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x50]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0x1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x30], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x1
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi]
        push 0x0
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [edi + 0x20]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x38
    }
}

// [0x0067AFB0] sub_0067AFB0 (160 bytes)
extern "C" void ext_0067ADB0();
extern "C" int mem_00925308;
extern "C" __declspec(naked) void __fastcall fn_0067AFB0(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0x8]
        mov ecx, ebx
        mov dword ptr [esp + 0x8], ebx
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_0067AE20
        test al, al
        je else_0067AFB0
        mov ecx, ebx
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    else_0067AFB0:
        push edi
        mov edi, dword ptr [esi + 0xc]
        lea eax, [edi + 0x14]
        push eax
        push 0x0
        push esi
        push offset ext_0067ADB0
        push 0x0
        push 0x0
        mov byte ptr [esi + 0x4], 0x1
        call dword ptr [mem_00925308]
        add esp, 0x18
        mov ecx, ebx
        mov dword ptr [edi + 0x10], eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00679770] sub_00679770 (161 bytes)
extern "C" void ext_004EBE30();
extern "C" void ext_00555470();

extern "C" __declspec(naked) void __fastcall fn_00679770(void* self) {
    __asm {
        push -1
        push 0x8b48cb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov al, byte ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov byte ptr [esi], al
        mov ecx, edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi + 0x4], 0x98c47c
        call ext_00555470
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x39], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], 0x0
        lea edi, [esi + 0x18]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi + 0x14], 0x94b890
        call ext_004EBE30
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x45], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], 0x0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006798D0] sub_006798D0 (91 bytes)
extern "C" void ext_00679770();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59EB8;
extern "C" __declspec(naked) void __fastcall fn_006798D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b490e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59EB8], al
        jne done_006798D0
        or dword ptr [mem_00B59EB8], eax
        push eax
        mov ecx, 0xb59e94
        mov dword ptr [esp + 0xc], 0x0
        call ext_00679770
        push 0x921a20
        call ext_006A6C87
        add esp, 0x4
    done_006798D0:
        mov ecx, dword ptr [esp]
        mov eax, 0xb59e94
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00679930] sub_00679930 (92 bytes)
extern "C" void ext_00679770();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59EE0;
extern "C" __declspec(naked) void __fastcall fn_00679930(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b492e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59EE0], al
        jne done_00679930
        or dword ptr [mem_00B59EE0], eax
        push 0x0
        mov ecx, 0xb59ebc
        mov dword ptr [esp + 0xc], 0x0
        call ext_00679770
        push 0x921a30
        call ext_006A6C87
        add esp, 0x4
    done_00679930:
        mov ecx, dword ptr [esp]
        mov eax, 0xb59ebc
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00672720] sub_00672720 (162 bytes)
extern "C" void ext_006725F0();

extern "C" __declspec(naked) void __cdecl fn_00672720(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [8*eax]
        mov dword ptr [esp + 0x1c], edx
        push ebx
        lea edi, [4*eax]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x24], eax
        call ext_006725F0
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_006725F0
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_006725F0
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_006725F0
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    small_path:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push esi
        push eax
        push ecx
        call ext_006725F0
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x0067B140] sub_0067B140 (162 bytes)
extern "C" void ext_0067B070();

extern "C" __declspec(naked) void __fastcall fn_0067B140(void* self) {
    __asm {
        push -1
        push 0x8b4a61
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x98c5c8
        call ext_0065C5F0
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esi + 0xc], 0
        push 0x18
        mov byte ptr [esp + 0x20], 1
        mov byte ptr [esi + 0x4], 0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        mov byte ptr [esp + 0x1c], 2
        je no_obj
        mov ecx, eax
        call ext_0067B070
        mov ebp, eax
        jmp after_obj
no_obj:
        xor ebp, ebp
after_obj:
        mov edi, dword ptr [esi + 0xc]
        cmp ebp, edi
        mov byte ptr [esp + 0x1c], 1
        je skip_release
        test edi, edi
        je skip_release
        mov ecx, edi
        call ext_0067B090
        push edi
        call ext_006A5C5C
        add esp, 0x4
skip_release:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0xc], ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00673AB0] sub_00673AB0 (166 bytes)
extern "C" void ext_00493D90();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00673AB0(void* self) {
    __asm {
        push -1
        push 0x8b40b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0x4c], 0
        lea eax, [esi + 0x48]
        mov dword ptr [esp + 0x10], 4
        je skip_a_673AB0
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_a_673AB0:
        cmp dword ptr [esi + 0x44], 0
        lea eax, [esi + 0x40]
        mov byte ptr [esp + 0x10], 3
        je skip_b_673AB0
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_b_673AB0:
        cmp dword ptr [esi + 0x38], 0
        lea eax, [esi + 0x34]
        mov byte ptr [esp + 0x10], 2
        je skip_c_673AB0
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_c_673AB0:
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0
        call ext_00493D90
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0067FA00] sub_0067FA00 (169 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_00671F30();
extern "C" int mem_00924FE8;
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void __fastcall fn_0067FA00(void* self) {
    __asm {
        push -1
        push 0x8b4ddd
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE8]
        xor edi, edi
        mov dword ptr [esi + 0x1c], edi
        mov byte ptr [esi + 0x20], 0x1
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], edi
        mov dword ptr [esi + 0x50], edi
        lea ebp, [esi + 0x54]
        mov dword ptr [ebp], edi
        mov eax, dword ptr [mem_00B599BC]
        mov dword ptr [ebp + 0x4], eax
        lea ecx, [esp + 0x10]
        push ecx
        mov byte ptr [esp + 0x24], 0x4
        call ext_00671F30
        add esp, 0x4
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x24], 0x5
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, edi
        mov byte ptr [esp + 0x20], 0x4
        je skip_0067FA00
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
    skip_0067FA00:
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x006751B0] sub_006751B0 (129 bytes)
extern "C" void ext_0067FA00();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void __fastcall fn_006751B0(void* self) {
    __asm {
        push -1
        push 0x89dbe5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE8]
        xor ebx, ebx
        push 0x98c11c
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], ebx
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x14], 0x1
        call ext_0067FA00
        mov dword ptr [esi + 0x94], ebx
        mov eax, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x98], eax
        mov dword ptr [esi + 0x9c], ebx
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0xa0], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0xa4], bl
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0067D840] sub_0067D840 (179 bytes)
extern "C" void ext_0067B7F0();
extern "C" __declspec(naked) void __fastcall fn_0067D840(void* self) {
    __asm {
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0067B7F0
        fld dword ptr [esi + 4]
        fmul dword ptr [esi + 14h]
        lea edi, [esi + 0ch]
        fld dword ptr [edi + 4]
        lea ebx, [esi + 18h]
        fmul dword ptr [esi + 8]
        mov ecx, ebx
        fsubp st(1), st
        fstp dword ptr [esp + 0ch]
        fld dword ptr [edi]
        fmul dword ptr [esi + 8]
        fld dword ptr [edi + 8]
        fmul dword ptr [esi]
        fsubp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [edi + 4]
        fmul dword ptr [esi]
        fld dword ptr [edi]
        fmul dword ptr [esi + 4]
        fsubp st(1), st
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 0ch]
        fstp dword ptr [ebx]
        fld dword ptr [esp + 10h]
        fstp dword ptr [ebx + 4]
        fld dword ptr [esp + 14h]
        fstp dword ptr [ebx + 8]
        call ext_0067B7F0
        fld dword ptr [esi + 8]
        mov ecx, edi
        fmul dword ptr [ebx + 4]
        fld dword ptr [esi + 4]
        fmul dword ptr [ebx + 8]
        fsubp st(1), st
        fstp dword ptr [esp + 0ch]
        fld dword ptr [ebx + 8]
        fmul dword ptr [esi]
        fld dword ptr [ebx]
        fmul dword ptr [esi + 8]
        fsubp st(1), st
        fstp dword ptr [esp + 10h]
        fld dword ptr [esi + 4]
        fmul dword ptr [ebx]
        fld dword ptr [esi]
        fmul dword ptr [ebx + 4]
        fsubp st(1), st
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 0ch]
        fstp dword ptr [edi]
        fld dword ptr [esp + 10h]
        fstp dword ptr [edi + 4]
        fld dword ptr [esp + 14h]
        fstp dword ptr [edi + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        jmp ext_0067B7F0
    }
}

// [0x0067DDB0] sub_0067DDB0 (82 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067D840();
extern "C" void ext_0067DB10();
extern "C" __declspec(naked) void __fastcall fn_0067DDB0(void* self) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        lea ecx, [esp + 4]
        call ext_0067D840
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret
    }
}

extern "C" void ext_004769F0();

// [0x00672380] sub_00672380 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_00672380(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0x10]
        je else_path
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je else_path
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        push 0x98bef8
        jmp join_path
else_path:
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x10], edx
        push 0x98bef0
join_path:
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_004769F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xc8]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        push edi
        push esi
        call edx
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00670F10] sub_00670F10 (185 bytes)
extern "C" void ext_0065C620();
extern "C" int mem_00925134;
extern "C" int mem_0092524C;

extern "C" __declspec(naked) void __fastcall fn_00670F10(void* self) {
    __asm {
        push -0x1
        push 0x8b3c5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr [esp + 0x10], ebp
        mov edi, dword ptr [ebp + 0x8]
        cmp edi, dword ptr [ebp + 0xc]
        lea esi, [ebp + 0x4]
        mov dword ptr [esp + 0x1c], 0x0
        jbe L_chk1_00670F10
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_chk1_00670F10:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2_00670F10
        call dword ptr [mem_00925134]
    L_chk2_00670F10:
        cmp esi, esi
        je L_chk3_00670F10
        call dword ptr [mem_00925134]
    L_chk3_00670F10:
        cmp edi, ebx
        je L_loop_end_00670F10
        cmp edi, dword ptr [esi + 0x8]
        jb L_free_00670F10
        call dword ptr [mem_00925134]
    L_free_00670F10:
        mov eax, dword ptr [edi]
        push eax
        call dword ptr [mem_0092524C]
        add esp, 0x4
        cmp edi, dword ptr [esi + 0x8]
        jb L_next_00670F10
        call dword ptr [mem_00925134]
    L_next_00670F10:
        add edi, 0x4
        jmp L_chk1_00670F10
    L_loop_end_00670F10:
        lea ecx, [ebp + 0x14]
        call ext_0065C620
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        cmp eax, edi
        je L_skip_free_00670F10
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip_free_00670F10:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00671040] sub_00671040 (104 bytes)
extern "C" void ext_0065F440();
extern "C" void ext_00670F10();

extern "C" __declspec(naked) void __fastcall fn_00671040(void* self) {
    __asm {
        __asm _emit 0x6A __asm _emit 0xFF                                   // push -1
        __asm _emit 0x68 __asm _emit 0x78 __asm _emit 0x3C __asm _emit 0x8B __asm _emit 0x00 // push handler
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        __asm _emit 0x50                                                    // push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        __asm _emit 0x51                                                    // push ecx
        __asm _emit 0x56                                                    // push esi
        __asm _emit 0x8B __asm _emit 0xF1                                   // mov esi, ecx
        __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 // mov [esp+4], esi
        __asm _emit 0x8D __asm _emit 0x4E __asm _emit 0x08                  // lea ecx, [esi+8]
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov [esp+0x10], 0
        call ext_00670F10
        __asm _emit 0x85 __asm _emit 0xF6                                   // test esi, esi
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF // mov [esp+0x10], -1
        __asm _emit 0x74 __asm _emit 0x18                                   // je +0x18
        __asm _emit 0x8D __asm _emit 0x4E __asm _emit 0x04                  // lea ecx, [esi+4]
        call ext_0065F440
        __asm _emit 0x5E                                                    // pop esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x04 // mov ecx, [esp+4]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x10                  // add esp, 0x10
        __asm _emit 0xC3                                                    // ret
        __asm _emit 0x33 __asm _emit 0xC9                                   // xor ecx, ecx
        call ext_0065F440
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x08 // mov ecx, [esp+8]
        __asm _emit 0x5E                                                    // pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x10                  // add esp, 0x10
        __asm _emit 0xC3                                                    // ret
    }
}

// [0x0067C550] sub_0067C550 (194 bytes)
extern "C" void ext_006A6EA4();
extern "C" void ext_006A73C0();
extern "C" int mem_00957788;
extern "C" int mem_00957754;
extern "C" int mem_0098C634;
extern "C" int mem_0098C5F8;

extern "C" __declspec(naked) float __fastcall fn_0067C550(void* self) {
    __asm {
        sub esp, 0x8
        fld dword ptr [ecx]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne le0_0067C550
        fld dword ptr [esp]
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 0x1
        jne ylt0_0067C550
        call ext_006A6EA4
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        add esp, 0x8
        ret
ylt0_0067C550:
        call ext_006A6EA4
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fadd qword ptr [mem_00957788]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        add esp, 0x8
        ret
le0_0067C550:
        fld st(1)
        fucomp st(1)
        fnstsw ax
        test ah, 0x44
        jp ne_0067C550
        fstp st(0)
        fcomp dword ptr [esp]
        fnstsw ax
        test ah, 0x5
        jp else_0067C550
        fld dword ptr [mem_00957754]
        add esp, 0x8
        ret
else_0067C550:
        fld dword ptr [mem_0098C634]
        add esp, 0x8
        ret
ne_0067C550:
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp ret0_0067C550
        fstp st(1)
        fdivr dword ptr [esp]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        call ext_006A73C0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fadd qword ptr [mem_0098C5F8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        add esp, 0x8
        ret
ret0_0067C550:
        fstp st(0)
        add esp, 0x8
        ret
    }
}

// [0x00675110] sub_00675110 (153 bytes)
extern "C" void ext_0048B4C0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00675110(void* self) {
    __asm {
        push -1
        push 0x8b42ae
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0xa0], 0
        lea eax, [esi + 0x9c]
        mov dword ptr [esp + 0x10], 0x3
        je L_0067514F
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_0067514F:
        cmp dword ptr [esi + 0x98], 0
        lea eax, [esi + 0x94]
        mov byte ptr [esp + 0x10], 0x2
        je L_0067516E
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_0067516E:
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0048B4C0
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00675240] sub_00675240 (98 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00675240(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f675240_top:
        test esi, esi
        je f675240_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f675240_after1
    f675240_call1:
        call ebp
    f675240_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f675240_ret
        test esi, esi
        mov edi, ebx
        jne f675240_a
        call ebp
    f675240_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f675240_b
        call ebp
    f675240_b:
        add ebx, 0x4
        test esi, esi
        jne f675240_c
        call ebp
    f675240_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f675240_d
        call ebp
    f675240_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f675240_top
        mov ecx, edi
        call ext_00675110
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f675240_top
    f675240_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x006753D0] sub_006753D0 (90 bytes)
extern "C" void ext_00675240();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006753D0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m6753d0_ok1
        call ebp
    m6753d0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m6753d0_ok2
        call ebp
    m6753d0_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_00675240
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m6753d0_ok3
        call ebp
    m6753d0_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m6753d0_ok4
        call ebp
    m6753d0_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00675430] sub_00675430 (121 bytes)
extern "C" void ext_00675240();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00675430(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_00675240
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_004EF890();
extern "C" void ext_0067ADA0();
extern "C" int mem_00B59DB8;

// [0x006775F0] sub_006775F0 (199 bytes)
extern "C" __declspec(naked) void __fastcall fn_006775F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b4724
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x4], 0x93b424
        push edi
        mov dword ptr [esi + 0xc], ecx
        lea ebx, [esi + 0x14]
        xor edi, edi
        mov ecx, ebx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x98c194
        mov dword ptr [esi + 0x4], 0x98c18c
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0x10], edi
        call ext_004EF890
        mov dword ptr [ebx + 0x4], eax
        mov dword ptr [ebx + 0x8], edi
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esi + 0x24], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x4c], edi
        mov dword ptr [esi + 0x50], edi
        mov dword ptr [esi + 0x54], edi
        mov dword ptr [esi + 0x44], 0x98c178
        mov dword ptr [esi + 0x5c], edi
        mov dword ptr [esi + 0x60], edi
        mov dword ptr [esi + 0x64], edi
        mov dword ptr [esi + 0x68], edi
        mov byte ptr [esp + 0x1c], 4
        mov dword ptr [esi + 0x6c], edi
        mov dword ptr [esi + 0x70], edi
        call ext_0067ADA0
        mov dword ptr [esi + 0x74], eax
        mov dword ptr [esi + 0x78], edi
        cmp dword ptr [mem_00B59DB8], edi
        mov eax, esi
        jne short L_skip_set
        mov dword ptr [mem_00B59DB8], esi
    L_skip_set:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    }
}

// [0x00679F10] sub_00679F10 (203 bytes)
extern "C" void ext_00679EB0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_00679F10(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_00679F2C
        call dword ptr [mem_00925134]
    L_00679F2C:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00679F3A
        call dword ptr [mem_00925134]
    L_00679F3A:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00679EB0
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_00679F64
        call dword ptr [mem_00925134]
    L_00679F64:
        test esi, esi
        je L_00679F6C
        cmp esi, esi
        je L_00679F72
    L_00679F6C:
        call dword ptr [mem_00925134]
    L_00679F72:
        cmp ebx, edi
        je L_00679FB2
        test esi, esi
        jne L_00679F80
        call dword ptr [mem_00925134]
    L_00679F80:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_00679F8B
        call dword ptr [mem_00925134]
    L_00679F8B:
        mov eax, dword ptr [ebx]
        add eax, 0x10
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_00679FB2
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_00679FB2:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_00679FCA
        call dword ptr [mem_00925134]
    L_00679FCA:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x00678E10] sub_00678E10 (43 bytes)
extern "C" void ext_00505D50();
extern "C" void ext_00668D80();

extern "C" __declspec(naked) void __fastcall fn_00678E10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        add ecx, 0x4
        call ext_00668D80
        test eax, eax
        je L_ret0_00678E10
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, eax
        call ext_00505D50
        test eax, eax
        je L_ret0_00678E10
        mov eax, dword ptr [eax]
        ret 0xc
    L_ret0_00678E10:
        xor eax, eax
        ret 0xc
    }
}

// [0x00679FE0] sub_00679FE0 (101 bytes)
extern "C" void ext_00679F10();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00679FE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_00679F10
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0067A00A
        call ebp
    L_0067A00A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_0067A016
        cmp edi, esi
        je L_0067A018
    L_0067A016:
        call ebp
    L_0067A018:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0067A039
        test edi, edi
        jne L_0067A026
        call ebp
    L_0067A026:
        cmp esi, dword ptr [edi + 8]
        jb L_0067A02D
        call ebp
    L_0067A02D:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0067A039:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0067A050] sub_0067A050 (35 bytes)
struct SubObj_0067A050 {
    void* find(void* a1);
};

extern "C" void* __fastcall fn_0067A050(void* self, int edx_unused, void* a1) {
    SubObj_0067A050* obj1 = (SubObj_0067A050*)((char*)self + 0x24);
    void* res = obj1->find(a1);
    if (res) {
        return res;
    }
    SubObj_0067A050* obj2 = (SubObj_0067A050*)((char*)self + 0x14);
    return obj2->find(a1);
}

// [0x0067ED40] sub_0067ED40 (205 bytes)
extern "C" void ext_00517FC0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0067ECA0();
extern "C" int mem_00A9F498;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9FAC0;

extern "C" __declspec(naked) void __fastcall fn_0067ED40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [mem_00A9F498]
        sub esp, 0x24
        push esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je alt_path
        cmp eax, 0xb53b30
        je alt_path
        cmp eax, 0xb53ab0
        je alt_path
        cmp eax, 0xb53a70
        je alt_path
        cmp eax, 0xb53af0
        je alt_path
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x38], 0
        call ext_0067ECA0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        fld qword ptr [esp + 0x8]
        pop edi
        fstp qword ptr [esi]
        pop esi
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
alt_path:
        mov eax, dword ptr [mem_00A9FAC0]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x3c]
        push ecx
        push esi
        mov dword ptr [esp + 0x44], eax
        call ext_00517FC0
        mov ecx, dword ptr [esp + 0x34]
        add esp, 0x8
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0067C640] sub_0067C640 (101 bytes)
extern "C" void ext_00487A30();
extern "C" int mem_0098C638;
extern "C" int mem_0098C648;
extern "C" int mem_0098C658;

extern "C" __declspec(naked) void __fastcall fn_0067C640(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        fld dword ptr [edi]
        push offset mem_0098C658
        sub esp, 0x8
        mov esi, ecx
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x4]
        push offset mem_0098C648
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x8]
        push offset mem_0098C638
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x00670DE0] sub_00670DE0 (212 bytes)
extern "C" void ext_00670C50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00670DE0(void* self, int edx_unused, void* retVal, void* val) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_00670DFE
        call ebp
    L_00670DFE:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_00670E08
        call ebp
    L_00670E08:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ecx
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00670C50
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_00670E34
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00670E34:
        test esi, esi
        je L_00670E3C
        cmp esi, esi
        je L_00670E44
    L_00670E3C:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00670E44:
        cmp ebx, edi
        je L_00670E8F
        test esi, esi
        jne L_00670E4E
        call ebp
    L_00670E4E:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_00670E55
        call ebp
    L_00670E55:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ecx + 0x4]
        mov edi, dword ptr [eax + 0x4]
        cmp edx, edi
        jb L_00670E89
        jne L_00670E76
        mov ecx, dword ptr [ecx + 0x8]
        cmp ecx, dword ptr [eax + 0x8]
        setb al
        test al, al
        jne L_00670E89
    L_00670E76:
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0xc
        ret 0x8
    L_00670E89:
        mov ebp, dword ptr [mem_00925134]
    L_00670E8F:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_00670EA3
        call ebp
    L_00670EA3:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x0067EE80] sub_0067EE80 (222 bytes)
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0067ED10();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) float __fastcall fn_0067EE80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp + 0x38]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_special
        cmp eax, 0xb53b30
        je L_special
        cmp eax, 0xb53ab0
        je L_special
        cmp eax, 0xb53a70
        je L_special
        cmp eax, 0xb53af0
        je L_special
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x34], 0x0
        call ext_0067ED10
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        fld dword ptr [esp + 0x4]
        pop esi
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
L_special:
        mov eax, dword ptr [esp + 0x40]
        test eax, eax
        je L_zero
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x4], eax
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call ext_0046C0A0
        fld dword ptr [esp + 0x10]
        add esp, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
L_zero:
        mov ecx, dword ptr [esp + 0x28]
        fldz
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret
    }
}

// [0x006744B0] sub_006744B0 (223 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_00671F30();
extern "C" void ext_006720C0();
extern "C" int mem_00A9FA04;
extern "C" int mem_00A9F628;

extern "C" __declspec(naked) void __fastcall fn_006744B0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008B41E0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov byte ptr [esi + 0xa4], 0x0
        mov eax, dword ptr [mem_00A9FA04]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        push esi
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F628]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x1c]
        push edx
        call ext_004275E0
        lea eax, [esp + 0x18]
        push eax
        call ext_00671F30
        add esp, 0xc
        push eax
        lea ecx, [esi + 0x94]
        mov dword ptr [esp + 0x24], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        or edi, -0x1
        test ecx, ecx
        mov dword ptr [esp + 0x20], edi
        je short L_0067_4542
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
L_0067_4542:
        push 0x0
        lea ecx, [esp + 0xc]
        call ext_006720C0
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esi + 0x9c]
        mov dword ptr [esp + 0x24], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov dword ptr [esp + 0x20], edi
        pop edi
        pop esi
        je short L_0067_457E
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
L_0067_457E:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x0067EFD0] sub_0067EFD0 (104 bytes)
extern "C" unsigned int mem_00B5A094;
extern "C" unsigned int mem_00B5A0A4;
extern "C" float __cdecl ext_0067EE80(unsigned int a, unsigned int b, unsigned int c);

extern "C" float* __cdecl fn_0067EFD0(float* out, unsigned int key) {
    out[2] = 0.0f;
    out[1] = 0.0f;
    out[0] = 0.0f;
    if (key == 0xB53A34u || key == 0xB53B30u || key == 0xB53AB0u ||
        key == 0xB53A70u || key == 0xB53AF0u) {
        return out;
    }
    for (int esi = 0; esi < 0xC; esi += 4) {
        unsigned int a = *(unsigned int*)((char*)&mem_00B5A094 + esi);
        unsigned int b = *(unsigned int*)((char*)&mem_00B5A0A4 + esi);
        float r = ext_0067EE80(key, b, a);
        *(float*)((char*)out + esi) = r;
    }
    return out;
}

// [0x0067F080] sub_0067F080 (106 bytes)
extern "C" float* __cdecl fn_0067F080(float* out, unsigned int key) {
    out[3] = 0.0f;
    out[2] = 0.0f;
    out[1] = 0.0f;
    out[0] = 0.0f;
    if (key == 0xB53A34u || key == 0xB53B30u || key == 0xB53AB0u ||
        key == 0xB53A70u || key == 0xB53AF0u) {
        return out;
    }
    for (int esi = 0; esi < 0x10; esi += 4) {
        unsigned int a = *(unsigned int*)((char*)&mem_00B5A094 + esi);
        unsigned int b = *(unsigned int*)((char*)&mem_00B5A0A4 + esi);
        float r = ext_0067EE80(key, b, a);
        *(float*)((char*)out + esi) = r;
    }
    return out;
}

// [0x00673D00] sub_00673D00 (206 bytes)
extern "C" void ext_004ECB40();
extern "C" void ext_00661620();
extern "C" int mem_00924FE0;
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void __fastcall fn_00673D00(void* self) {
    __asm {
        push -1
        push 0x8b411d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], eax
        call ext_00661620
        xor ebx, ebx
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi + 0xc], ebx
        call ext_00661620
        mov ecx, dword ptr [esp + 0x2c]
        push ecx
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x20], 1
        call dword ptr [mem_00924FE0]
        mov ebp, dword ptr [esp + 0x28]
        cmp dword ptr [ebp + 0x4], ebx
        mov byte ptr [esp + 0x1c], 2
        lea edi, [esi + 0x34]
        lea eax, [esp + 0x24]
        je short loc_00673D75
        mov ecx, dword ptr [ebp + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push ebp
        push eax
        call edx
        jmp short loc_00673D79
loc_00673D75:
        mov dword ptr [esp + 0x24], ebx
loc_00673D79:
        mov eax, dword ptr [eax]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [edi + 0x4], ecx
        lea edx, [esi + 0x40]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x20], 3
        mov dword ptr [esi + 0x3c], ebx
        call ext_004ECB40
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x48], ebx
        mov eax, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esi + 0x50], ebx
        mov dword ptr [esi + 0x58], ebx
        pop edi
        mov dword ptr [esi + 0x60], ebx
        mov byte ptr [esi + 0x65], bl
        mov byte ptr [esi + 0x66], bl
        mov byte ptr [esi + 0x67], bl
        mov byte ptr [esi + 0x64], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

extern "C" void ext_00609850();
extern "C" int mem_00924EF4;

// [0x00672AD0] sub_00672AD0 (250 bytes)
extern "C" __declspec(naked) void __cdecl fn_00672AD0(void* first, void* last) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp ebx, eax
        je L_ret_ebx
        push edi
        lea edi, [ebx + 0x4]
        cmp edi, eax
        je L_ret_edi
        push ebp
        lea ebp, [edi + 0x4]
        push esi
        mov dword ptr [esp + 0x10], ebp

    L_loop_top:
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov esi, dword ptr [edi]
        call edx
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_check_prev
        cmp ebx, edi
        je L_next
        cmp edi, ebp
        je L_next
        push 0x0
        push 0x0
        push ebp
        push edi
        push ebx
        call ext_00609850
        add esp, 0x14
        jmp L_next

    L_check_prev:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov ebx, dword ptr [edi]
        lea esi, [ebp - 0x8]
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L_reload_ebx

    L_scan_loop:
        mov ecx, dword ptr [esi - 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        mov ebx, dword ptr [edi]
        mov ebp, esi
        sub esi, 0x4
        call edx
        push eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebx
        call edx
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_scan_loop

        cmp ebp, edi
        je L_reload_ebp
        cmp edi, dword ptr [esp + 0x10]
        je L_reload_ebp
        mov eax, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push eax
        push edi
        push ebp
        call ext_00609850
        add esp, 0x14

    L_reload_ebp:
        mov ebp, dword ptr [esp + 0x10]

    L_reload_ebx:
        mov ebx, dword ptr [esp + 0x18]

    L_next:
        add edi, 0x4
        add ebp, 0x4
        cmp edi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x10], ebp
        jne L_loop_top

        pop esi
        pop ebp
    L_ret_edi:
        pop edi
    L_ret_ebx:
        pop ebx
        pop ecx
        ret
    }
}

// [0x00679C80] sub_00679C80 (250 bytes)
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_00698810();
extern "C" void ext_008B3308();
extern "C" int mem_00B59F08;
extern "C" int mem_00924000;
extern "C" int mem_00924004;
extern "C" int mem_00924008;
extern "C" char mem_0098C4C4[];
extern "C" char mem_0098C4B0[];
extern "C" char mem_0098C4A0[];
extern "C" char mem_0098C490[];

extern "C" __declspec(naked) int __fastcall fn_00679C80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push offset ext_008B3308
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [mem_00B59F08]
        sub esp, 0x1c
        test eax, eax
        jne done
        push 0x100
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x4], eax
        call ext_0066A720
        lea eax, [esp]
        push eax
        push 1
        push 0
        push offset mem_0098C4C4
        push 0x80000002
        mov dword ptr [esp + 0x38], 0
        call dword ptr [mem_00924000]
        test eax, eax
        jne after
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x4]
        push edx
        mov edx, dword ptr [esp + 0x4]
        push eax
        mov dword ptr [esp + 0xc], ecx
        lea ecx, [esp + 0x10]
        push ecx
        push 0
        push offset mem_0098C4B0
        push edx
        mov dword ptr [esp + 0x20], 1
        call dword ptr [mem_00924004]
        test eax, eax
        jne close
        push offset mem_0098C4A0
        lea ecx, [esp + 0x10]
        call ext_00698810
        test eax, eax
        jne second
        mov dword ptr [mem_00B59F08], 1
        jmp close
second:
        push offset mem_0098C490
        lea ecx, [esp + 0x10]
        call ext_00698810
        neg eax
        sbb eax, eax
        and eax, -2
        add eax, 2
        mov dword ptr [mem_00B59F08], eax
close:
        mov eax, dword ptr [esp]
        push eax
        call dword ptr [mem_00924008]
after:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], -1
        call ext_0066A760
        mov eax, dword ptr [mem_00B59F08]
done:
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00679D80] sub_00679D80 (33 bytes)
extern "C" void ext_00679C80();
extern "C" char mem_0098C4F4;
extern "C" char mem_0098C4FC;
extern "C" char mem_0098C504;
extern "C" __declspec(naked) void* __cdecl fn_00679D80() {
    __asm {
        call ext_00679C80
        sub eax, 1
        je l1
        sub eax, 1
        je l2
        mov eax, offset mem_0098C504
        ret
    l2:
        mov eax, offset mem_0098C4FC
        ret
    l1:
        mov eax, offset mem_0098C4F4
        ret
    }
}

// [0x0067BF50] sub_0067BF50 (263 bytes)
extern "C" void ext_0067B7F0();
extern "C" int mem_00993830;

extern "C" __declspec(naked) void __fastcall fn_0067BF50(void* self, int edx_unused, float* out) {
    __asm {
        sub esp, 0x20
        fld dword ptr [ecx]
        push esi
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x4]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_branchB
        fstp st(0)
        fld dword ptr [ecx + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_esi2
        xor esi, esi
        jmp L_common
L_branchB:
        fstp st(1)
        mov esi, 0x1
        fld dword ptr [ecx + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_common
L_esi2:
        mov esi, 0x2
L_common:
        fld dword ptr [ecx]
        lea eax, [esp + 4*esi + 0xc]
        fstp dword ptr [esp + 0xc]
        xor edx, edx
        fld dword ptr [ecx + 0x4]
        test esi, esi
        fstp dword ptr [esp + 0x10]
        sete dl
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fmul qword ptr [mem_00993830]
        fstp dword ptr [eax]
        lea edx, [esp + 4*edx + 0xc]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ecx]
        fmulp st(2), st
        fld dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0x4]
        fmulp st(2), st
        fmul dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x28]
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [ecx + 0x8]
        call ext_0067B7F0
        pop esi
        add esp, 0x20
        ret 0x4
    }
}

// [0x0067D900] sub_0067D900 (218 bytes)
extern "C" void ext_0067BF50();
extern "C" __declspec(naked) void __fastcall fn_0067D900(void* self) {
    __asm {
        sub esp, 0x18
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        push edi
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0xc]
        push eax
        fstp dword ptr [esp + 0xc]
        mov esi, ecx
        call ext_0067BF50
        mov ecx, esi
        call ext_0067B7F0
        fld dword ptr [esp + 0x10]
        fld st(0)
        lea edi, [esi + 0x18]
        fmul dword ptr [esi + 0x4]
        mov ecx, edi
        fld dword ptr [esi + 0x8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x8]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fmulp st(4), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [edi + 0x8]
        call ext_0067B7F0
        fld dword ptr [esi + 0x8]
        lea ecx, [esi + 0xc]
        fmul dword ptr [edi + 0x4]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [edi + 0x8]
        fsubp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi]
        fmul dword ptr [edi + 0x8]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [edi]
        fsubp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x4]
        fmul dword ptr [edi]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esi]
        fsubp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [ecx + 0x8]
        call ext_0067B7F0
        pop edi
        pop esi
        add esp, 0x18
        ret
    }
}

// [0x0067DE10] sub_0067DE10 (82 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067D900();
extern "C" void ext_0067DB10();
extern "C" __declspec(naked) void __fastcall fn_0067DE10(void* self) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        lea ecx, [esp + 4]
        call ext_0067D900
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret
    }
}

// [0x0067C060] sub_0067C060 (269 bytes)
extern "C" void ext_0067B7F0();
extern "C" int mem_00993830;
extern "C" __declspec(naked) void __fastcall fn_0067C060(void* self, int edx_unused, void* in) {
    __asm {
        sub esp, 0x1c
        mov edx, dword ptr [esp + 0x20]
        fld dword ptr [edx]
        push esi
        fabs
        push edi
        fstp dword ptr [esp + 0x28]
        mov esi, ecx
        fld dword ptr [edx + 4]
        fabs
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 8]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp L1
        fstp st(0)
        fld dword ptr [edx + 8]
        fabs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fcompp
        fnstsw ax
        test ah, 5
        jp L3
        xor edi, edi
        jmp L4
    L1:
        fstp st(1)
        mov edi, 1
        fld dword ptr [edx + 8]
        fabs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fcompp
        fnstsw ax
        test ah, 5
        jnp L4
    L3:
        mov edi, 2
    L4:
        fld dword ptr [edx]
        xor ecx, ecx
        fstp dword ptr [esp + 0xc]
        lea eax, [esp + 4*edi + 0xc]
        fld dword ptr [edx + 4]
        test edi, edi
        fstp dword ptr [esp + 0x10]
        sete cl
        fld dword ptr [edx + 8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fmul qword ptr [mem_00993830]
        fstp dword ptr [eax]
        lea ecx, [esp + 4*ecx + 0xc]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [ecx]
        mov ecx, esi
        fld dword ptr [edx + 8]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edx + 4]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edx]
        fmulp st(2), st
        fld dword ptr [edx + 8]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx + 4]
        fmulp st(2), st
        fmul dword ptr [edx]
        fsubp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esi + 4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esi + 8]
        call ext_0067B7F0
        pop edi
        pop esi
        add esp, 0x1c
        ret 4
    }
}

// [0x00672530] sub_00672530 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59CE0;
extern "C" int mem_00B59CC4;

extern "C" __declspec(naked) void __fastcall fn_00672530(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3ede
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59CE0], al
        jne skip_init
        or dword ptr [mem_00B59CE0], eax
        push 0xa2f0cc
        push offset mem_00B59CC4
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x9218d0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59CC4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00674770] sub_00674770 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59DA0;
extern "C" int mem_00B59D84;

extern "C" __declspec(naked) void __fastcall fn_00674770(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b422e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59DA0], al
        jne skip_init
        or dword ptr [mem_00B59DA0], eax
        push 0xaa19c8
        push offset mem_00B59D84
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x9219c0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59D84
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00679DB0] sub_00679DB0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59F28;
extern "C" int mem_00B59F0C;

extern "C" __declspec(naked) void __fastcall fn_00679DB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b496e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59F28], al
        jne skip_init
        or dword ptr [mem_00B59F28], eax
        push 0xaa1fdc
        push offset mem_00B59F0C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x921a50
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59F0C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_005B28E0();
extern "C" int mem_0098C788;

// [0x0067EBB0] sub_0067EBB0 (167 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067EBB0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov byte ptr [esp + 0x10], 0x0
        mov eax, dword ptr [esp + 0x10]
        push eax
        push offset mem_0098C658
        mov esi, ecx
        lea ebp, [edi + 0x10]
        push ebp
        push edi
        lea ebx, [esi + 0x10]
        push ebx
        push esi
        lea ecx, [esp + 0x34]
        call ext_005B28E0
        mov byte ptr [esp + 0x18], 0x0
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push offset mem_0098C648
        lea edx, [ebp + 0x10]
        push edx
        push ebp
        lea eax, [ebx + 0x10]
        push eax
        push ebx
        lea ecx, [esp + 0x34]
        call ext_005B28E0
        mov byte ptr [esp + 0x18], 0x0
        mov edx, dword ptr [esp + 0x18]
        push edx
        lea eax, [edi + 0x20]
        push offset mem_0098C638
        lea edx, [eax + 0x10]
        push edx
        lea ecx, [esi + 0x20]
        push eax
        lea eax, [ecx + 0x10]
        push eax
        push ecx
        lea ecx, [esp + 0x34]
        call ext_005B28E0
        mov byte ptr [esp + 0x18], 0x0
        mov edx, dword ptr [esp + 0x18]
        push edx
        lea eax, [edi + 0x30]
        push offset mem_0098C788
        lea edx, [eax + 0x10]
        push edx
        lea ecx, [esi + 0x30]
        push eax
        lea eax, [ecx + 0x10]
        push eax
        push ecx
        lea ecx, [esp + 0x34]
        call ext_005B28E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xc
    }
}

// [0x0067A080] sub_0067A080 (110 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004276B0();
extern "C" void ext_00679DB0();
extern "C" void ext_00679FE0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_0067A080(void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_00679FE0
        test eax, eax
        jne done_0067A080
        lea eax, [esp + 0x4]
        push esi
        push eax
        call ext_004276B0
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0x0
        call ext_00679DB0
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x24]
        push ecx
        call ext_006A6DD2
done_0067A080:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x00673960] sub_00673960 (325 bytes)
extern "C" void ext_00404F00(); extern "C" int mem_00924FE8; extern "C" int mem_00924FE0; extern "C" int mem_00924FD8; extern "C" int mem_00924FF4; extern "C" int mem_00924ECC; extern "C" int mem_00924FD0; extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __fastcall fn_00673960(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b406e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], 0
        cmp dword ptr [esi + 0x38], 0
        jne L1
        mov esi, dword ptr [esp + 0x6c]
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 4
    L1:
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esi + 0x3c]
        test eax, eax
        mov dword ptr [esp + 0x64], 1
        je L2
        push eax
        lea eax, [esp + 0x28]
        push eax
        call ext_00404F00
        add esp, 8
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x68], 2
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 1
        call dword ptr [mem_00924FF4]
    L2:
        mov esi, dword ptr [esi + 0x38]
        test esi, esi
        je L5
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00924ECC]
        push edi
        mov edi, dword ptr [mem_00924FD0]
        mov bl, 3
    L3:
        cmp dword ptr [esi + 0x38], 0
        je L4
        push 0x92ab70
        lea ecx, [esp + 0x50]
        push esi
        push ecx
        call ebp
        lea edx, [esp + 0x20]
        push edx
        push eax
        lea eax, [esp + 0x44]
        push eax
        mov byte ptr [esp + 0x88], bl
        call edi
        add esp, 0x18
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x74], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esi + 0x38]
        test esi, esi
        jne L3
    L4:
        pop edi
        pop ebp
        pop ebx
    L5:
        mov esi, dword ptr [esp + 0x6c]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x64], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 4
    }
}

// [0x0067BA20] sub_0067BA20 (63 bytes)
extern "C" void ext_00575350();
extern "C" void ext_006936D0();
extern "C" __declspec(naked) void __fastcall fn_0067BA20(void* self) {
    __asm {
        sub esp, 0x10
        fldz
        mov eax, dword ptr [esp + 0x14]
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fstp dword ptr [esp + 0x8]
        lea ecx, [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push eax
        call ext_00575350
        push esi
        lea ecx, [esp + 0x8]
        call ext_006936D0
        pop esi
        add esp, 0x10
        ret 8
    }
}

// [0x0067DC60] sub_0067DC60 (98 bytes)
extern "C" void ext_005542B0();
extern "C" void ext_00658880();
extern "C" __declspec(naked) void __fastcall fn_0067DC60(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x48
        fldz
        push esi
        fst dword ptr [esp+0xc]
        push edi
        fst dword ptr [esp+0xc]
        push ecx
        fst dword ptr [esp+0x20]
        mov edi, ecx
        fst dword ptr [esp+0x18]
        lea ecx, [esp+0xc]
        fst dword ptr [esp+0x28]
        fstp dword ptr [esp+0x24]
        fld1
        fst dword ptr [esp+0xc]
        fst dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x58]
        fstp dword ptr [esp]
        call ext_00658880
        lea eax, [esp+8]
        push eax
        lea ecx, [esp+0x30]
        push ecx
        mov ecx, edi
        call ext_005542B0
        mov ecx, 9
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 4
    }
}

// [0x0067DCD0] sub_0067DCD0 (98 bytes)
extern "C" void ext_005542B0();
extern "C" void ext_0067DB90();
extern "C" __declspec(naked) void __fastcall fn_0067DCD0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x48
        fldz
        push esi
        fst dword ptr [esp+0xc]
        push edi
        fst dword ptr [esp+0xc]
        push ecx
        fst dword ptr [esp+0x20]
        mov edi, ecx
        fst dword ptr [esp+0x18]
        lea ecx, [esp+0xc]
        fst dword ptr [esp+0x28]
        fstp dword ptr [esp+0x24]
        fld1
        fst dword ptr [esp+0xc]
        fst dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x58]
        fstp dword ptr [esp]
        call ext_0067DB90
        lea eax, [esp+8]
        push eax
        lea ecx, [esp+0x30]
        push ecx
        mov ecx, edi
        call ext_005542B0
        mov ecx, 9
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 4
    }
}

// [0x0067DE70] sub_0067DE70 (92 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067DB10();
extern "C" void ext_0067DC60();
extern "C" __declspec(naked) void __fastcall fn_0067DE70(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        fld dword ptr [esp + 2ch]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 8]
        call ext_0067DC60
        lea ecx, [esp + 4]
        push ecx
        mov ecx, esi
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret 4
    }
}
