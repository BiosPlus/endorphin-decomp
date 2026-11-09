// Decompiled translation unit: src/leaf/decompiled_650000.cpp

// [0x0065ACC0] sub_0065ACC0 (10 bytes)
// Calls sub_007C7150 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C7150(int value);

extern "C" void __fastcall fn_0065ACC0(void* self) {
    ext_007C7150(*(int*)self);
}

// [0x0065AF20] sub_0065AF20 (10 bytes)
// Calls sub_007C8BC0 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C8BC0(int value);

extern "C" void __fastcall fn_0065AF20(void* self) {
    ext_007C8BC0(*(int*)self);
}

// [0x0065C5E0] sub_0065C5E0 (10 bytes)
// Pushes &self->[+0x4c] as a single stack argument to sub_0065C3F0 (no caller cleanup), then returns.
extern "C" void ext_0065C3F0();

extern "C" __declspec(naked) void __fastcall fn_0065C5E0(void* self) {
    __asm {
        lea eax, [ecx + 0x4c]
        push eax
        call ext_0065C3F0
        ret
    }
}

// [0x0065B0F0] sub_0065B0F0 (11 bytes)
extern "C" void ext_007CCDF0(int value);

extern "C" void __fastcall fn_0065B0F0(void* self) {
    ext_007CCDF0(*(int*)((char*)self + 0x34));
}

// [0x0065BB70] sub_0065BB70 (11 bytes)
extern "C" void ext_007C8B90(int value);

extern "C" void __fastcall fn_0065BB70(void* self) {
    ext_007C8B90(*(int*)((char*)self + 0x18));
}

// [0x0065F2A0] sub_0065F2A0 (15 bytes)
// Loads ecx from the global mem_00B58FF4 and pushes the dword at [self] as one stack argument
// to sub_0066C030 (no caller cleanup), then returns. ecx must carry the global, which C++ can't express.
extern "C" void ext_0066C030();
extern "C" int mem_00B58FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F2A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [mem_00B58FF4]
        push eax
        call ext_0066C030
        ret
    }
}

// [0x0065BEF0] sub_0065BEF0 (16 bytes)
extern "C" void ext_007C7710();

extern "C" __declspec(naked) void __fastcall fn_0065BEF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x40]
        fldz
        push eax
        fstp dword ptr [ecx + 0x4]
        call ext_007C7710
        pop ecx
        ret
    }
}

// [0x0065D110] sub_0065D110 (16 bytes)
extern "C" void ext_006619D0();

extern "C" void __fastcall fn_0065D110(void* self) {
    typedef void (__thiscall *Fn)(void* thisp, void* arg);
    ((Fn)&ext_006619D0)((char*)self + 0xcc, (char*)self + 0x6c);
}

// [0x0065D120] sub_0065D120 (16 bytes)
extern "C" void __fastcall fn_0065D120(void* self) {
    typedef void (__thiscall *Fn)(void* thisp, void* arg);
    ((Fn)&ext_006619D0)((char*)self + 0x6c, (char*)self + 0xcc);
}

// [0x0065A980] sub_0065A980 (19 bytes)
extern "C" void ext_007C5FD0();

extern "C" void __fastcall fn_0065A980(void* self, int edx_unused, int a1) {
    typedef void (__cdecl *Fn)(int, int);
    ((Fn)&ext_007C5FD0)(*(int*)self, a1);
}

// [0x0065F260] sub_0065F260 (20 bytes)
extern "C" void ext_0065D5B0();
extern "C" void ext_0065F1F0();

extern "C" __declspec(naked) void __fastcall fn_0065F260(void* self) {
    __asm {
        push esi
        push 1
        push 1
        mov esi, ecx
        call ext_0065D5B0
        mov ecx, esi
        pop esi
        jmp ext_0065F1F0
    }
}

// [0x0065A8C0] sub_0065A8C0 (20 bytes)
extern "C" void ext_007C6790(int value);
extern "C" void ext_007C67D0(int value);

extern "C" void __fastcall fn_0065A8C0(void* self) {
    int value = *(int*)self;
    ext_007C6790(value);
    ext_007C67D0(value);
}

// [0x0065B100] sub_0065B100 (21 bytes)
// Loads the dword at [[self]+0x10] (via self->[+0x4]) and calls sub_007C8A70 cdecl with that value
// and the address of mem_00493D90 as its two stack arguments (caller cleans up).
extern "C" void __cdecl ext_007C8A70(int value, int addr);
extern "C" char mem_00493D90;

extern "C" void __fastcall fn_0065B100(void* self) {
    int obj = *(int*)((char*)self + 0x4);
    int value = *(int*)(obj + 0x10);
    ext_007C8A70(value, (int)&mem_00493D90);
}

// [0x0065D0F0] sub_0065D0F0 (23 bytes)
// Pushes its first stack argument to sub_0065D0C0 and its second to sub_0065D0E0 (both stdcall, callee cleans up), then returns 8.
extern "C" void __stdcall ext_0065D0C0(int value);
extern "C" void __stdcall ext_0065D0E0(int value);

extern "C" __declspec(naked) void __stdcall fn_0065D0F0(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0065D0C0
        mov edx, dword ptr [esp + 0x8]
        push edx
        call ext_0065D0E0
        ret 0x8
    }
}

// [0x0065AF30] sub_0065AF30 (24 bytes)
extern "C" void __cdecl ext_007C8C10(int a, int b);

extern "C" void __fastcall fn_0065AF30(void* self, int edx_unused, void* a1) {
    ext_007C8C10(*(int*)self, *(int*)(*(int*)((char*)a1 + 0x5c)));
}

// [0x0065BED0] sub_0065BED0 (24 bytes)
extern "C" void __cdecl ext_007C7310(int value);

extern "C" void __fastcall fn_0065BED0(void* self) {
    ext_007C7310(*(int*)((char*)self + 0x40));
    *(int*)((char*)self + 0x40) = 0;
}

// [0x0065F400] sub_0065F400 (24 bytes)
// Saves esi, calls sub_0065F310 with ecx loaded from the global mem_00B58FF4 and two stack args (0, 1),
// stores the result into [self], returns self in eax. ecx must carry the global, which C++ can't express.
extern "C" void ext_0065F310();
extern "C" int mem_00B58FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F400(void* self) {
    __asm {
        push esi
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [mem_00B58FF4]
        push 0x1
        call ext_0065F310
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0065C620] sub_0065C620 (25 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_009242E4;
extern "C" __declspec(naked) void __fastcall fn_0065C620(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done_0065C620
        push esi
        call dword ptr [mem_009242E4]
        push esi
        call ext_006A5C5C
        add esp, 4
    done_0065C620:
        pop esi
        ret
    }
}

// [0x0065BFA0] sub_0065BFA0 (25 bytes)
extern "C" void ext_0065BDA0();
extern "C" __declspec(naked) void* __fastcall fn_0065BFA0(void* self) {
    __asm {
        fldz
        mov dword ptr [ecx], 0x984928
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x24]
        fstp dword ptr [ecx + 0x20]
        call ext_0065BDA0
        mov eax, ecx
        ret
    }
}

// [0x0065D440] sub_0065D440 (26 bytes)
// Calls sub_006A5C62 with 0x6c as its single cdecl stack argument, then stores the returned pointer
// into itself and into eax+4 (each store guarded by a null test), and returns.
extern "C" void* __cdecl ext_006A5C62(int size);

extern "C" void __fastcall fn_0065D440(void* self) {
    void* p = ext_006A5C62(0x6c);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x0065C340] sub_0065C340 (26 bytes)
extern "C" void ext_007C9BC0();

extern "C" void __fastcall fn_0065C340(void* self, int edx_unused, int a1) {
    typedef int (__cdecl *Fn)(int);
    int r = ((Fn)ext_007C9BC0)(a1);
    *(int*)((char*)self + 0x8c) = r;
}

// [0x0065C260] sub_0065C260 (26 bytes)
// If the dword at [self+0x8c] is nonzero, passes it to sub_007D8700, then passes that result to sub_007C97F0.
extern "C" int __cdecl ext_007D8700(int value);
extern "C" void __cdecl ext_007C97F0(int value);

extern "C" void __fastcall fn_0065C260(void* self) {
    int v = *(int*)((char*)self + 0x8c);
    if (v) {
        int r = ext_007D8700(v);
        ext_007C97F0(r);
    }
}

// [0x0065AC90] sub_0065AC90 (28 bytes)
// Calls sub_0065F400 on &self->[+0x4] (ecx), zeroes [self] and [self+0x8], returns self in eax.
extern "C" void __fastcall ext_0065F400(void* self);

extern "C" void* __fastcall fn_0065AC90(void* self) {
    ext_0065F400((char*)self + 0x4);
    *(int*)self = 0;
    *(int*)((char*)self + 0x8) = 0;
    return self;
}
