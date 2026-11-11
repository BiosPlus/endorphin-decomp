// Decompiled translation unit: src/leaf/decompiled_6E0000.cpp

#include <math.h>

// [0x006E0900] sub_006E0900 (32 bytes)
// Zero-initialise the object's 8 dwords, then store 1.0 (double) at offset 0x18.
extern "C" __declspec(naked) void __fastcall fn_006E0900(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret
    }
}

extern "C" void ext_006B9EC0();

// [0x006E6350] sub_006E6350 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6350(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4c
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E7430] sub_006E7430 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E7430(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x8
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E6880] sub_006E6880 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6880(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je done
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        call dword ptr [eax + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        push esi
        call dword ptr [eax + 0x128]
done:
        pop esi
        ret 8
    }
}

// [0x006E8750] sub_006E8750 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E8750(void* self, int edx_unused, double a1) {
    __asm {
        mov ecx, dword ptr [ecx]
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [ecx + 0x50]
        fnstsw ax
        test ah, 0x1
        je short L_store_arg
        mov eax, dword ptr [ecx + 0x50]
        mov dword ptr [ecx + 0x58], eax
        mov edx, dword ptr [ecx + 0x54]
        mov dword ptr [ecx + 0x5c], edx
        ret 0x8
L_store_arg:
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x58], eax
        mov dword ptr [ecx + 0x5c], edx
        ret 0x8
    }
}

extern "C" int mem_00925284;
extern "C" int mem_00B5E0C8;
extern "C" int mem_00B5E0CC;
extern "C" int mem_00B5E0C0;
extern "C" int mem_00B5DD98;
extern "C" int mem_00B5DD9C;
extern "C" int mem_00B5DD90;

// [0x006E6360] sub_006E6360 (80 bytes)
// Two incremental-link style thunks: each jumps over 11 nop padding to a body.
// Body 1: copy the double at *_HUGE into mem_00B5DD98/9C.
// Body 2: store -(*_HUGE) into mem_00B5DD90.
extern "C" __declspec(naked) void __fastcall fn_006E6360(void* self) {
    __asm {
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
        mov dword ptr [mem_00B5DD98], ecx
        mov dword ptr [mem_00B5DD9C], edx
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
        fstp qword ptr [mem_00B5DD90]
        ret
    }
}

// [0x006E7730] sub_006E7730 (80 bytes)
extern "C" void ext_007641C0();
extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_006E7730(void* self) {
    __asm {
        push -1
        push 0x008B967B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x90]
        mov dword ptr [esp + 0x10], 0x0
        call ext_007641C0
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006E4CD0] sub_006E4CD0 (95 bytes)
extern "C" double mem_00993CC8;
extern "C" double mem_00993828;
extern "C" double mem_009324A8;
extern "C" double mem_00993CC0;
extern "C" double mem_0092A270;
extern "C" int mem_00925294;
extern "C" __declspec(naked) double __cdecl fn_006E4CD0(double a, double b) {
    __asm {
        fld qword ptr [esp + 0xc]
        fsub qword ptr [esp + 0x4]
        lea eax, [esp + 0xc]
        push eax
        fmul qword ptr [mem_00993CC8]
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_00925294]
        fcom qword ptr [mem_00993828]
        add esp, 0xc
        fnstsw ax
        test ah, 0x41
        jne short L_skip_inc
        fld qword ptr [esp + 0xc]
        fadd qword ptr [mem_0092A270]
        fstp qword ptr [esp + 0xc]
L_skip_inc:
        fcomp qword ptr [mem_009324A8]
        fld qword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x1
        je short L_skip_dec
        fsub qword ptr [mem_0092A270]
L_skip_dec:
        fmul qword ptr [mem_00993CC0]
        fadd qword ptr [esp + 0x4]
        ret
    }
}

// [0x006EA340] sub_006EA340 (112 bytes)
// Thunk layout: body 1 at +0x00 returns [ecx+0xF0]; body 2 at +0x10 returns 10;
// jmp at +0x20 to body 3 at +0x30 copies the double at *_HUGE into mem_00B5E0C8/CC;
// jmp at +0x50 to body 4 at +0x60 stores -(*_HUGE) into mem_00B5E0C0.
extern "C" __declspec(naked) void __fastcall fn_006EA340(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xf0]
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
        mov eax, 0x0a
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
        mov dword ptr [mem_00B5E0C8], ecx
        mov dword ptr [mem_00B5E0CC], edx
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
        fstp qword ptr [mem_00B5E0C0]
        ret
    }
}
