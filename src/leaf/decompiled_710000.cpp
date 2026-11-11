// Decompiled translation unit: src/leaf/decompiled_710000.cpp

// [0x0071DE80] sub_0071DE80 (32 bytes)
// Stores two stack args into the object at self->[0x10] (+0x160, +0x164), then sets self->byte[0xC] = 1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_0071DE80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x160], edx
        mov dword ptr [eax + 0x164], esi
        mov byte ptr [ecx + 0xc], 0x1
        pop esi
        ret 0x8
    }
}

// [0x00711DA0] sub_00711DA0 (15 bytes)
// Calls sub_0071E680 (this in ecx), then stores the stack arg at [eax+0x28] of the callee's returned pointer (ret 4).
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711DA0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x28], ecx
        ret 0x4
    }
}

// [0x00711A70] sub_00711A70 (15 bytes)
extern "C" void __stdcall ext_00711CF0(int a1, int a2);
extern "C" void __stdcall fn_00711A70(int a1) {
    ext_00711CF0(0x20, a1);
}

// [0x00712150] sub_00712150 (16 bytes)
extern "C" int ext_00711DB0();
extern "C" bool __fastcall fn_00712150(void* self) {
    return ext_00711DB0() == 0x11;
}

// [0x00714910] sub_00714910 (16 bytes)
extern "C" void ext_007873F0();

extern "C" __declspec(naked) void __fastcall fn_00714910(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x00714940] sub_00714940 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00714940(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x28
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B010] sub_0071B010 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B010(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x10
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B040] sub_0071B040 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B040(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x30
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071C320] sub_0071C320 (16 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_0071C320(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x50
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x0071C300] sub_0071C300 (31 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_0071C300(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x9c]
        mov ecx, esi
        call ext_006B9950
        test al, al
        je short L_0071C316
        xor eax, eax
        pop esi
        ret
L_0071C316:
        mov ecx, esi
        call ext_006E7460
        pop esi
        ret
    }
}

// [0x00711DC0] sub_00711DC0 (32 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711DC0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 0xc], ecx
        ret 4
        __asm _emit 0x90                    // nop (padding inside the 32-byte unit)
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04   // mov edx, [esp+4]
        __asm _emit 0x8B __asm _emit 0x01                                     // mov eax, [ecx]
        __asm _emit 0x52                                                      // push edx
        __asm _emit 0xFF __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00  // call [eax+0x90]
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00                    // ret 4
    }
}

// [0x00711D40] sub_00711D40 (47 bytes)
// Calls sub_0071E680 (this in ecx), saves its result, invokes vtable slot 0x50 of stack arg 2 with self as the one arg,
// then stores stack args 1, 3, 4 into the returned object at +0x04, +0x10, +0x14 (ret 0x10).
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711D40(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x10]
        mov esi, eax
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x50]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esi + 0x10], edx
        mov dword ptr [esi + 0x14], eax
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x0071C210] sub_0071C210 (63 bytes)
extern "C" int mem_00996640;
extern "C" int mem_00993828;
extern "C" int mem_00993C80;

extern "C" __declspec(naked) double __fastcall fn_0071C210(void* self, int edx_unused, double a1, double a2, double a3) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        cmp dword ptr [eax + 0x408], 0x2
        jne other
        fld qword ptr [esp + 0xc]
        fmul qword ptr [mem_00996640]
        jmp done
    other:
        fld qword ptr [esp + 0x4]
        fmul qword ptr [mem_00996640]
        fmul qword ptr [eax + 0xd28]
    done:
        fdiv qword ptr [esp + 0x14]
        fmul qword ptr [mem_00993828]
        fld1
        fpatan
        fmul qword ptr [mem_00993C80]
        ret 0x18
    }
}

// [0x00710520] sub_00710520 (96 bytes)
// Two-thunk layout: body 1 at +0x00 returns mem_00B5EEB8; body 2 at +0x20 copies the double at *_HUGE into mem_00B5F070/74 via jmp over nop padding;
// body 3 at +0x40 stores -(*_HUGE) into mem_00B5F068.
extern "C" int mem_00B5EEB8;
extern "C" int mem_00925284;
extern "C" int mem_00B5F070;
extern "C" int mem_00B5F074;
extern "C" int mem_00B5F068;
extern "C" __declspec(naked) void __fastcall fn_00710520(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B5EEB8]
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5F070], ecx
        mov dword ptr [mem_00B5F074], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5F068]
        ret
    }
}

// [0x00714AE0] sub_00714AE0 (96 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5FA90;
extern "C" int mem_00B5FA94;
extern "C" int mem_00B5FA88;

// Three-thunk layout: body 1 at +0x00 returns [ecx+0xD8];
// body 2 at +0x20 copies the double at *_HUGE into mem_00B5FA90/94 via jmp over nop padding;
// body 3 at +0x50 stores -(*_HUGE) into mem_00B5FA88.
extern "C" __declspec(naked) void __fastcall fn_00714AE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xd8]
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5FA90], ecx
        mov dword ptr [mem_00B5FA94], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5FA88]
        ret
    }
}
