// Decompiled translation unit: src/leaf/decompiled_5E0000.cpp

extern "C" unsigned int __stdcall ext_005E0770(unsigned int a1);

// [0x005E0E20] sub_005E0E20 (23 bytes)
// __thiscall, ret 4: forwards arg0 to 0x005E0770 and stores the result at this+0x308.
extern "C" void __fastcall fn_005E0E20(void* self, int edx_unused, unsigned int a1) {
    *(unsigned int*)((char*)self + 0x308) = ext_005E0770(a1);
}

extern "C" void __fastcall ext_005E0670(void* self, int edx_unused, unsigned int a1);

// [0x005E0E40] sub_005E0E40 (23 bytes)
// __thiscall, ret 0: calls virtual slot +0xf8 on this, then passes the result to 0x005E0670 with this.
extern "C" __declspec(naked) void __fastcall fn_005E0E40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        call edx
        push eax
        mov ecx, esi
        call ext_005E0670
        pop esi
        ret
    }
}

extern "C" void __fastcall ext_005B11E0(void* self, int edx_unused, int a1);

// [0x005E2770] sub_005E2770 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single zero stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2770(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 0
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E27C0] sub_005E27C0 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single one-valued stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E27C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 1
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2810] sub_005E2810 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x11c, then calls 0x005B11E0 on (result+8) with a single two-valued stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2810(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 2
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2860] sub_005E2860 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2860(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x11c]
        call edx
        push 3
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E28B0] sub_005E28B0 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x124, then calls 0x005B11E0 on (result+8) with a single zero stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E28B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 0
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E2900] sub_005E2900 (27 bytes)
// __thiscall, ret 0: loads this+0x17c, calls its virtual slot +0x124, then calls 0x005B11E0 on (result+8) with a single 1 stack arg.
extern "C" __declspec(naked) void __fastcall fn_005E2900(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 1
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

extern "C" void __fastcall ext_005B11E0(void* self, int edx_unused, int a1);

// [0x005E2950] sub_005E2950 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E2950(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 2
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E29A0] sub_005E29A0 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E29A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x124]
        call edx
        push 3
        lea ecx, [eax + 0x8]
        call ext_005B11E0
        ret
    }
}

// [0x005E05C0] sub_005E05C0 (40 bytes)
extern "C" void __stdcall fn_005E05C0(float* self) {
    float z = 0.0f;
    self[3] = z;
    self[2] = z;
    self[1] = z;
    self[0] = z;
    self[4] = z;
    self[5] = z;
    self[6] = 1.0f;
    self[7] = z;
    self[8] = z;
    self[9] = z;
}
