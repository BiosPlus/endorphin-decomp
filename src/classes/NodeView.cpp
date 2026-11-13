// Decompiled translation unit: src/classes/NodeView.cpp

extern "C" bool __fastcall ext_00584C00(void* self);

struct NodeViewVt {
    void* v0;
    void* v1;
    bool (__thiscall *v2)(void* self, void* a, bool b);
};

// [0x004444E0] NodeView::vfunc_1_off_150 (49 bytes)
extern "C" bool __fastcall fn_004444E0(void* self, int edx_unused, void* arg) {
    if (!arg) {
        return false;
    }
    NodeViewVt* vt = *(NodeViewVt**)self;
    return vt->v2(self, arg, !ext_00584C00(arg));
}

// [0x00444520] NodeView::vfunc_2_off_150 (307 bytes)
extern "C" void ext_00430310();
extern "C" void ext_006A6E9E();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __stdcall fn_00444520(void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_nonnull
        xor al, al
        pop esi
        ret 0x8
    L_nonnull:
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x20]
        lea ecx, [esi + 0xc]
        push edx
        call eax
        push 0x0
        push 0xa2fc50
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c1
        push 0x5
        jmp L_end
    L_c1:
        push 0x0
        push 0xa2fc34
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c2
        push 0x7
        jmp L_end
    L_c2:
        push 0x0
        push 0xa2fc0c
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c3
        push 0x1
        jmp L_end
    L_c3:
        push 0x0
        push 0xa2fbe4
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c4
        push 0x2
        jmp L_end
    L_c4:
        push 0x0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c5
        push 0x4
        jmp L_end
    L_c5:
        push 0x0
        push 0xa2fb9c
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c6
        push 0xa
        jmp L_end
    L_c6:
        push 0x0
        push 0xa2fb78
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        push 0x0
        jne L_end
        push 0xa2fb54
        push 0xa2e2bc
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c7
        push 0xb
        jmp L_end
    L_c7:
        push 0xf
    L_end:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430310
        mov ecx, esi
        call ext_00584C00
        pop esi
        ret 0x8
    }
}

// [0x00446760] NodeView::vfunc_0_off_144 (41 bytes)
extern "C" void ext_00444480();
extern "C" void ext_00446710();

extern "C" void __fastcall fn_00446760(void* self, int edx_unused, int a1) {
    if (a1 == 1) {
        void* p = (char*)self - 0x144;
        reinterpret_cast<void (__fastcall*)(void*)>(ext_00446710)(p);
    } else if (a1 == 0) {
        void* p = (char*)self - 0x144;
        reinterpret_cast<void (__fastcall*)(void*)>(ext_00444480)(p);
    }
}
