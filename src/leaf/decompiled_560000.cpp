// Decompiled translation unit: src/leaf/decompiled_560000.cpp

// [0x005651A0] sub_005651A0 (15 bytes)
extern "C" void __stdcall ext_00564530(int, int);

extern "C" void __stdcall fn_005651A0(int a1) {
    ext_00564530(a1, 2);
}

// [0x00563220] sub_00563220 (24 bytes)
extern "C" int __fastcall ext_007C5610(void* self);

extern "C" unsigned char __fastcall fn_00563220(void* self, int edx_unused, int a1) {
    unsigned char result = 0;
    if (a1) {
        result = (ext_007C5610((void*)a1) == 0x14) ? 1 : 0;
    }
    return result;
}

// [0x00563240] sub_00563240 (24 bytes)
extern "C" unsigned char __stdcall fn_00563240(int a1) {
    unsigned char result = 0;
    if (a1) {
        result = (ext_007C5610((void*)a1) == 0x13) ? 1 : 0;
    }
    return result;
}

// [0x00563260] sub_00563260 (24 bytes)
extern "C" int __fastcall ext_007C5610(void* self);

extern "C" unsigned char __stdcall fn_00563260(void* p) {
    unsigned char r = 0;
    if (p) {
        r = (ext_007C5610(p) == 0x12) ? 1 : 0;
    }
    return r;
}

// [0x0056D820] sub_0056D820 (25 bytes)
extern "C" void ext_00558C10();
extern "C" void* __fastcall fn_0056D820(void* self) {
    ext_00558C10();
    *(unsigned int*)self = 0x009578D4;
    *((unsigned int*)self + 1) = 0x009578C8;
    return self;
}

// [0x00566380] sub_00566380 (25 bytes)
extern "C" void ext_00565120();
extern "C" void ext_00565F00();
extern "C" __declspec(naked) int __fastcall fn_00566380(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00565120
        push eax
        mov ecx, esi
        call ext_00565F00
        pop esi
        ret 4
    }
}

// [0x0056CDF0] sub_0056CDF0 (25 bytes)
extern "C" void __fastcall ext_00569D10(void* self);
extern "C" void ext_006A5C5C(void* a1);
extern "C" void __fastcall fn_0056CDF0(void* self) {
    void* p = *(void**)self;
    if (!p) {
        return;
    }
    ext_00569D10(p);
    ext_006A5C5C(p);
}

// [0x0056CE10] sub_0056CE10 (25 bytes)
extern "C" void __fastcall ext_00569D90(void* self);
extern "C" void ext_006A5C5C(void* a1);
extern "C" void __fastcall fn_0056CE10(void* self) {
    void* p = *(void**)self;
    if (!p) {
        return;
    }
    ext_00569D90(p);
    ext_006A5C5C(p);
}

// [0x005694F0] sub_005694F0 (27 bytes)
extern "C" void __cdecl ext_005693E0(int a1, int a2, void* self, int a4);
extern "C" __declspec(naked) void __fastcall fn_005694F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005693E0
        add esp, 0x10
        ret 8
    }
}

// [0x005649D0] sub_005649D0 (34 bytes)
extern "C" void ext_007C569A();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) bool __fastcall fn_005649D0(void* self, int edx_unused, void* str) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 494h]
        push eax
        call ext_007C569A
        test eax, eax
        sete al
        pop esi
        ret 4
    }
}

// [0x00563430] sub_00563430 (34 bytes)
extern "C" void ext_007C562E();
extern "C" void ext_007C5634();
extern "C" void __fastcall fn_00563430(void* ecx_unused, void* edx_unused, void* self, unsigned char visibility) {
    if (self == 0) return;
    void* vis = ((void* (__thiscall*)(void*))ext_007C5634)(self);
    if (vis == 0) return;
    ((void (__thiscall*)(void*, unsigned short))ext_007C562E)(vis, (unsigned short)visibility);
}

// [0x005631F0] sub_005631F0 (35 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_005631F0(void* ecx_unused, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        xor al, al
        test ecx, ecx
        je done
        call ext_007C5610
        cmp eax, 0x1b
        je yes
        cmp eax, 0x1c
        je yes
        xor al, al
        ret 4
    yes:
        mov al, 1
    done:
        ret 4
    }
}

// [0x005650F0] sub_005650F0 (39 bytes)
extern "C" void ext_007C5712();
extern "C" void ext_007C570C();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005650F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x478]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x494]
        push eax
        call ext_007C5712
        mov ecx, dword ptr [esi + 0x494]
        pop esi
        jmp ext_007C570C
    }
}

// [0x00564FE0] sub_00564FE0 (39 bytes)
extern "C" void ext_007C56E8();
extern "C" void ext_007C56E2();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00564FE0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x494]
        push esi
        call ext_007C56E8
        mov esi, eax
        test esi, esi
        je done
        mov ecx, 0B39FA0h
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_007C56E2
done:
        pop esi
        ret
    }
}

// [0x0056B900] sub_0056B900 (41 bytes)
extern "C" __declspec(naked) int __fastcall fn_0056B900(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x28]
        test edx, edx
        jne short L_nonzero
        xor eax, eax
        mov ecx, 1
        cmp ecx, eax
        sbb eax, eax
        neg eax
        ret
    L_nonzero:
        mov eax, dword ptr [ecx + 0x2c]
        sub eax, edx
        sar eax, 2
        mov ecx, 1
        cmp ecx, eax
        sbb eax, eax
        neg eax
        ret
    }
}
