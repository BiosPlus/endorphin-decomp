// Decompiled translation unit: src/leaf/decompiled_430000.cpp

// [0x00430430] sub_00430430 (24 bytes)
// Reads byte at this+0xf4, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430430(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430450] sub_00430450 (24 bytes)
// Reads byte at this+0xf5, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430450(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf5]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430470] sub_00430470 (24 bytes)
// Reads byte at this+0xf6, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430470(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf6]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430FA0] sub_00430FA0 (28 bytes)
extern "C" void ext_006A64EA();
extern "C" int mem_00925660;

extern "C" __declspec(naked) void __fastcall fn_00430FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x160]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925660]
        mov ecx, esi
        pop esi
        jmp ext_006A64EA
    }
}

// [0x0043C620] sub_0043C620 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_0043C620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x00931EDC
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x0043CD60] sub_0043CD60 (32 bytes)
extern "C" int mem_00925664;

extern "C" __declspec(naked) void __fastcall fn_0043CD60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push 0
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push ecx
        call dword ptr [mem_00925664]
        mov dword ptr [esi + 0x138], eax
        pop esi
        ret 4
    }
}

// [0x0043C950] sub_0043C950 (33 bytes)
// If arg0 is non-null, calls its vtbl[9] (thiscall) with arg1..arg3 and returns the result.
extern "C" int __stdcall fn_0043C950(void* a0, int a1, int a2, int a3) {
    if (a0) {
        typedef int (__thiscall *VFn)(void*, int, int, int);
        return ((VFn)(*(void***)a0)[9])(a0, a1, a2, a3);
    }
}

// [0x0043C9D0] sub_0043C9D0 (33 bytes)
// Forwards arg1..arg4 to this->vtbl[0x154/4] (thiscall, not a tail jump) and returns its result.
extern "C" __declspec(naked) int __fastcall fn_0043C9D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x154]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        call eax
        ret 0x10
    }
}

// [0x00431310] sub_00431310 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping one stack argument.
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00431310(void* self) {
    __asm {
        call ext_006A5EA8
        ret 4
    }
}

// [0x0043CB80] sub_0043CB80 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping two stack arguments.
extern "C" __declspec(naked) void __fastcall fn_0043CB80(void* self) {
    __asm {
        call ext_006A5EA8
        ret 8
    }
}

// [0x00437DE0] sub_00437DE0 (8 bytes)
// Pushes 1 and calls sub_00437DC0 (cdecl, caller cleans up the argument).
extern "C" void ext_00437DC0();

extern "C" __declspec(naked) void __cdecl fn_00437DE0() {
    __asm {
        push 1
        call ext_00437DC0
        ret
    }
}

// [0x00434E30] sub_00434E30 (11 bytes)
// Pushes 0x92f9f8 and calls sub_004310E0 (cdecl, caller does not clean up the argument).
extern "C" void ext_004310E0();

extern "C" __declspec(naked) void __cdecl fn_00434E30() {
    __asm {
        push 0x92f9f8
        call ext_004310E0
        ret
    }
}

// [0x004302A0] sub_004302A0 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469A80();

extern "C" __declspec(naked) void __fastcall fn_004302A0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_00469A80
    }
}

// [0x00430330] sub_00430330 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046BF80();

extern "C" __declspec(naked) void __fastcall fn_00430330(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_0046BF80
    }
}

// [0x00430360] sub_00430360 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469040();
extern "C" __declspec(naked) void __fastcall fn_00430360(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_00469040
    }
}

// [0x004348F0] sub_004348F0 (13 bytes)
extern "C" void ext_004658C0();
extern "C" void ext_00462AA0();

extern "C" __declspec(naked) void __fastcall fn_004348F0(void* self) {
    __asm {
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        jmp ext_00462AA0
    }
}

// [0x00433FF0] sub_00433FF0 (14 bytes)
extern "C" void ext_0043DC90();
extern "C" __declspec(naked) void __fastcall fn_00433FF0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x108]
        push -1
        call ext_0043DC90
        ret
    }
}

// [0x004303A0] sub_004303A0 (15 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046BEC0();

extern "C" __declspec(naked) void __fastcall fn_004303A0(void* self) {
    __asm {
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046BEC0
        ret
    }
}

// [0x00430370] sub_00430370 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430370(void* self) {
    __asm {
        call ext_004658C0
        xor ecx, ecx
        cmp dword ptr [eax + 0x60], ecx
        sete cl
        mov al, cl
        ret
    }
}

// [0x00430D30] sub_00430D30 (16 bytes)
extern "C" void ext_004647D0();
extern "C" int mem_00AD6BC8;
extern "C" int mem_00ACDD94;

extern "C" void __fastcall fn_00430D30(void* self) {
    __asm {
        push offset mem_00ACDD94
        mov ecx, offset mem_00AD6BC8
        call ext_004647D0
    }
}

// [0x00430380] sub_00430380 (17 bytes)
extern "C" void ext_004658C0();
extern "C" __declspec(naked) unsigned char __fastcall fn_00430380(void* self) {
    __asm {
        call ext_004658C0
        xor ecx, ecx
        cmp dword ptr [eax + 0x60], 0x1
        sete cl
        mov al, cl
        ret
    }
}

// [0x004303B0] sub_004303B0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __fastcall fn_004303B0(void* self) {
    __asm {
        push 1
        push 0
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x004303D0] sub_004303D0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __cdecl fn_004303D0() {
    __asm {
        push 1
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x004303F0] sub_004303F0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __fastcall fn_004303F0(void* self) {
    __asm {
        push 0
        push 0
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x00430410] sub_00430410 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430410(void* self) {
    __asm {
        push 0
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

extern "C" void ext_0044B7C0();

// [0x00430310] sub_00430310 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430310(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0100h]
        test ecx, ecx
        je short done
        call ext_0044B7C0
done:
        ret 4
    }
}

extern "C" void ext_004444B0();

// [0x00433B70] sub_00433B70 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_00433B70(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0114h]
        test ecx, ecx
        je short done
        call ext_004444B0
done:
        ret 4
    }
}

// [0x00437DC0] sub_00437DC0 (18 bytes)
extern "C" void ext_00436FA0();

extern "C" __declspec(naked) void __stdcall fn_00437DC0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0x92f9f8
        push eax
        call ext_00436FA0
        ret 4
    }
}
