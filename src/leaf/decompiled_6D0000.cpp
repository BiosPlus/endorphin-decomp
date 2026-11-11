// Decompiled translation unit: src/leaf/decompiled_6D0000.cpp

#include <math.h>

// [0x006DBDF0] sub_006DBDF0 (32 bytes)
// 64-bit add: *out = *this + *in, where out = arg0 and in = arg1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_006DBDF0(void* self, int edx_unused, void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [ecx]
        mov edx, dword ptr [eax]
        add edx, esi
        mov esi, dword ptr [eax + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        adc esi, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], esi
        pop esi
        ret 0x8
    }
}

// [0x006DBE10] sub_006DBE10 (32 bytes)
// 64-bit subtract: *out = *this - *in, where out = arg0 and in = arg1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_006DBE10(void* self, int edx_unused, void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax]
        sub edx, esi
        mov esi, dword ptr [eax + 0x4]
        mov eax, dword ptr [esp + 0x8]
        sbb ecx, esi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        ret 0x8
    }
}

// [0x006DEF20] sub_006DEF20 (15 bytes)
extern "C" void __stdcall ext_006DEED0(int a, int b);

extern "C" void __stdcall fn_006DEF20(int a1) {
    ext_006DEED0(a1, 1);
}

// [0x006DAE00] sub_006DAE00 (47 bytes)
// Stores (__int64)((double)0x0A_C0E8D7B0 * a1) into *self (ret 8).
extern "C" void ext_00872828();
extern "C" __declspec(naked) void __fastcall fn_006DAE00(void* self, int edx_unused, double a1) {
    __asm {
        sub esp, 0x8
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        __asm _emit 0xB0 __asm _emit 0xD7 __asm _emit 0xE8 __asm _emit 0xC0
        mov dword ptr [esp + 0x4], 0xa
        __asm _emit 0xDF __asm _emit 0x6C __asm _emit 0x24 __asm _emit 0x00
        push esi
        mov esi, ecx
        fmul qword ptr [esp + 0x10]
        call ext_00872828
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop esi
        add esp, 0x8
        ret 0x8
    }
}

// [0x006D9790] sub_006D9790 (48 bytes)
// Linear search over 12 x 32-byte records starting at 0x00B5D910 (key at +0xC).
// Returns the record's dword at +0x10 for the matching key, otherwise 3.
extern "C" int mem_00B5D910;
extern "C" __declspec(naked) int __cdecl fn_006D9790(int key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, 0x3
        xor ecx, ecx
        mov edx, offset mem_00B5D910 + 0xc
    loop_top:
        cmp dword ptr [edx], esi
        je found
        inc ecx
        add edx, 0x20
        cmp ecx, 0xc
        jl loop_top
        pop esi
        ret
    found:
        shl ecx, 0x5
        add ecx, offset mem_00B5D910
        je done
        mov eax, dword ptr [ecx + 0x10]
    done:
        pop esi
        ret
    }
}

// [0x006D98A0] sub_006D98A0 (48 bytes)
// Linear search over 12 x 32-byte records starting at 0x00B5D910 (key at +0xC).
// Returns the record's dword at +0x8 for the matching key, otherwise 0x00B5D2C0.
extern "C" int mem_00B5D2C0;
extern "C" __declspec(naked) int __cdecl fn_006D98A0(int key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, offset mem_00B5D2C0
        xor ecx, ecx
        mov edx, offset mem_00B5D910 + 0xc
    loop_top:
        cmp dword ptr [edx], esi
        je found
        inc ecx
        add edx, 0x20
        cmp ecx, 0xc
        jl loop_top
        pop esi
        ret
    found:
        shl ecx, 0x5
        add ecx, offset mem_00B5D910
        je done
        mov eax, dword ptr [ecx + 0x8]
    done:
        pop esi
        ret
    }
}

// [0x006D2940] sub_006D2940 (96 bytes)
extern "C" int mem_00993810;

extern "C" __declspec(naked) bool __fastcall fn_006D2940(void* self, int edx_unused, void* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fsub qword ptr [edx]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        fld qword ptr [ecx + 0x8]
        fsub qword ptr [edx + 0x8]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        fld qword ptr [ecx + 0x10]
        fsub qword ptr [edx + 0x10]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 0x4
    L_fail_006D2940:
        mov eax, 0x1
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 0x4
    }
}

// [0x006D7500] sub_006D7500 (96 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5D780;
extern "C" int mem_00B5D784;
extern "C" int mem_00B5D778;
extern "C" __declspec(naked) void __fastcall fn_006D7500(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xfc]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        ret 0x4
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
        mov dword ptr [mem_00B5D780], ecx
        mov dword ptr [mem_00B5D784], edx
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
        fstp qword ptr [mem_00B5D778]
        ret
    }
}
