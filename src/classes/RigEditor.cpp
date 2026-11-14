// Decompiled translation unit: src/classes/RigEditor.cpp

// [0x00451390] RigEditor::vfunc_90 (29 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_00451140();

extern "C" __declspec(naked) void __fastcall fn_00451390(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00451140
        pop esi
        ret 0xc
    }
}

// [0x0044E520] RigEditor::vfunc_89 (214 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A6E9E();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_0044E520(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        push edi
        mov edi, ecx
        je L_else
        push 0x0
        push 0xa2e4d8
        push 0xa2e034
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e474
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e01c
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_else
L_then:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0xd64]
        jmp L_end
L_else:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0xd5c]
L_end:
        test eax, eax
        jne L_deref
        pop edi
        pop esi
        ret 0xc
L_deref:
        mov eax, dword ptr [eax+0x4]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0044E2A0] RigEditor::vfunc_63 (628 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0044E2A0(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4f8, p + 0xcf4);
    ddx(a1, 0x4ef, p + 0xac);
    ddx(a1, 0x4cc, p + 0x598);
    ddx(a1, 0x4cd, p + 0x5fc);
    ddx(a1, 0x7, p + 0x660);
    ddx(a1, 0x8, p + 0x6d4);
    ddx(a1, 0x4cb, p + 0x748);
    ddx(a1, 0x4, p + 0x79c);
    ddx(a1, 0x50a, p + 0x810);
    ddx(a1, 0x5, p + 0x884);
    ddx(a1, 0x6, p + 0x8f8);
    ddx(a1, 0x4ce, p + 0x96c);
    ddx(a1, 0x478, p + 0x9c0);
    ddx(a1, 0x4ec, p + 0xa14);
    ddx(a1, 0x4ed, p + 0xa68);
    ddx(a1, 0x4ee, p + 0xabc);
    ddx(a1, 0x434, p + 0xb10);
    ddx(a1, 0x436, p + 0xb64);
    ddx(a1, 0x435, p + 0xbb8);
    ddx(a1, 0x81b7, p + 0xc0c);
    ddx(a1, 0x507, p + 0xc80);
    ddx(a1, 0x4f9, p + 0x100);
    ddx(a1, 0x506, p + 0x154);
    ddx(a1, 0x4fa, p + 0x1a8);
    ddx(a1, 0x4fb, p + 0x1fc);
    ddx(a1, 0x4fc, p + 0x250);
    ddx(a1, 0x4fd, p + 0x2a4);
    ddx(a1, 0x4fe, p + 0x2f8);
    ddx(a1, 0x4ff, p + 0x34c);
    ddx(a1, 0x500, p + 0x3a0);
    ddx(a1, 0x501, p + 0x3f4);
    ddx(a1, 0x502, p + 0x448);
    ddx(a1, 0x503, p + 0x49c);
    ddx(a1, 0x504, p + 0x4f0);
    ddx(a1, 0x505, p + 0x544);
}

// [0x00453F50] RigEditor::vfunc_66 (101 bytes)
extern "C" void ext_00453C80();
extern "C" void ext_006A5F7A();
extern "C" void ext_006A60D0();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) int __fastcall fn_00453F50(void* self, int edx_unused, void* msg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0x100
        push edi
        mov edi, ecx
        jne L_not_100
        cmp dword ptr [esi + 0x8], 0xd
        jne L_not_d
        push 0x0
        push 0x1
        push 0xd
        call ext_00453C80
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4

    L_not_d:
        mov ecx, dword ptr [mem_00ACDB40]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x108]
        push esi
        call edx
        test eax, eax
        je L_def
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4

    L_not_100:
        cmp eax, 0x201
        jne L_def
        call ext_006A60D0

    L_def:
        push esi
        mov ecx, edi
        call ext_006A5F7A
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004535D0] RigEditor::vfunc_84 (75 bytes)
extern "C" void __fastcall ext_0044CD80(void*);
extern "C" void __fastcall ext_0044CE90(void*);
extern "C" void __fastcall ext_0044CEC0(void*);
extern "C" void __fastcall ext_0044D840(void*);
extern "C" void __fastcall ext_0044D8E0(void*);
extern "C" void __fastcall ext_0044FF40(void*);
extern "C" void __fastcall ext_004510E0(void*);
extern "C" void __fastcall ext_00452830(void*);
extern "C" void __fastcall ext_006A5FC8(void*);

extern "C" int __fastcall fn_004535D0(void* self) {
    ext_006A5FC8(self);
    ext_0044CD80(self);
    ext_0044CE90(self);
    ext_0044CEC0(self);
    ext_0044FF40(self);
    ext_0044D840(self);
    ext_0044D8E0(self);
    ext_00452830(self);
    ext_004510E0(self);
    *((unsigned char*)self + 0xA8) = 1;
    return 0;
}
