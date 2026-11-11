// Decompiled translation unit: src/classes/PoseTool.cpp

// [0x00545120] PoseTool::vfunc_23 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x88]
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x005451E0] PoseTool::vfunc_32 (22 bytes)
extern "C" void ext_00543470();
extern "C" __declspec(naked) void __fastcall fn_005451E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543470
        mov ecx, dword ptr [esi + 0xa0]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x68]
        pop esi
        jmp edx
    }
}

// [0x00545140] PoseTool::vfunc_24 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x00545170] PoseTool::vfunc_25 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545170(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x90]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x005453D0] PoseTool::vfunc_18_off_98 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_005453D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2b8]
        cmp eax, 1
        jne not_one
        mov ecx, dword ptr [ecx - 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x9c]
        jmp eax
    not_one:
        cmp eax, 2
        jne not_two
        mov ecx, dword ptr [ecx - 0x10]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa0]
        jmp edx
    not_two:
        ret 8
    }
}

// [0x00545440] PoseTool::vfunc_19_off_98 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545440(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi - 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb4]
        push edx
        call eax
        mov edx, dword ptr [esi - 0x98]
        mov eax, dword ptr [edx + 0x84]
        lea ecx, [esi - 0x98]
        call eax
        pop esi
        ret 4
    }
}

// [0x005451B0] PoseTool::vfunc_26 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_005451B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xa4]
        call edx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xa8]
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x00545370] PoseTool::vfunc_21 (52 bytes)
extern "C" __declspec(naked) int __fastcall fn_00545370(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx + 0x254]
        mov eax, dword ptr [eax + 0x44]
        mov dword ptr [ecx + 0x350], 0x2
        mov byte ptr [ecx + 0x338], 0x1
        add ecx, 0x254
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call eax
        mov eax, 0x1
        ret 0x8
    }
}

// [0x00545400] PoseTool::vfunc_22_off_98 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545400(void* self) {
    __asm {
        fld dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi - 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xb8]
        push ecx
        fstp dword ptr [esp]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        call eax
        mov edx, dword ptr [esi - 0x98]
        mov eax, dword ptr [edx + 0x84]
        lea ecx, [esi - 0x98]
        call eax
        pop esi
        ret 0xc
    }
}

// [0x00545200] PoseTool::vfunc_15 (62 bytes)
extern "C" void ext_005434F0();
extern "C" int __fastcall fn_00545200(void* self, int edx_unused, int a1, int a2, int a3) {
    typedef int (__thiscall *Callee)(void*, int, int, int);
    Callee f = (Callee)ext_005434F0;
    if (!f(*(void**)((char*)self + 0xa0), a1, a2, a3)) {
        f((char*)self + 0x254, a1, a2, a3);
    }
    return 1;
}

// [0x00545320] PoseTool::vfunc_18 (68 bytes)
extern "C" __declspec(naked) int __fastcall fn_00545320(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xa0]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        test al, al
        je ret_false
        cmp dword ptr [esi + 0x9c], 0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        mov ecx, esi
        jne flag_set
        push 1
        call edx
        mov eax, 1
        pop esi
        ret 8
    flag_set:
        push 0
        call edx
        mov eax, 1
        pop esi
        ret 8
    ret_false:
        xor eax, eax
        pop esi
        ret 8
    }
}

// [0x00545240] PoseTool::vfunc_16 (76 bytes)
extern "C" void ext_00543530();
extern "C" int __fastcall fn_00545240(void* self, int edx_unused, int a1, int a2) {
    typedef int (__thiscall *SubFn)(void*, int, int);
    typedef void (__thiscall *VFunc1)(void*, int, int);
    typedef void (__thiscall *VFunc2)(void*);
    char* s = (char*)self;
    *(int*)(s + 0x350) = 1;
    int r = ((SubFn)ext_00543530)(s + 0x254, a1, a2);
    if (r >= 0) {
        void** vt = *(void***)self;
        VFunc1 f = (VFunc1)vt[0x70 / 4];
        f(self, a1, r);
        void** vt2 = *(void***)(*(void**)(s + 0x88));
        VFunc2 g = (VFunc2)vt2[0xbc / 4];
        g(*(void**)(s + 0x88));
    }
    return 1;
}

// [0x005454D0] PoseTool::vfunc_5 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_005454D0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp edi, dword ptr [esi + 0x9c]
        je done
        mov ecx, dword ptr [esi + 0xa0]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x60]
        call edx
        cmp edi, 1
        jne else_branch
        lea eax, [esi + 0x16c]
        mov dword ptr [esi + 0xa0], eax
        mov dword ptr [esi + 0x9c], edi
        push edi
        jmp common
    else_branch:
        lea ecx, [esi + 0xa4]
        mov dword ptr [esi + 0xa0], ecx
        mov dword ptr [esi + 0x9c], 0
        push 0
    common:
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x80]
        mov ecx, esi
        call eax
    done:
        pop edi
        pop esi
        ret 4
    }
}
