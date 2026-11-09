// Decompiled translation unit: src/leaf/decompiled_530000.cpp

extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" void ext_0054D2A0();

// [0x00532C30] sub_00532C30 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532C30(void* self) {
    __asm {
        push esi
        push 0x1701
        mov esi, ecx
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        pop esi
        jmp edx
    }
}

// [0x00534380] sub_00534380 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00534380(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x38]
        lea eax, [ecx + 0x9c]
        mov dword ptr [ecx + 0x40c], eax
        mov dword ptr [ecx + 0x410], edx
        add ecx, 0x33c
        jmp ext_0054D2A0
    }
}

// [0x0053ACF0] sub_0053ACF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053ACF0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        and edx, esi
        cmp edx, esi
        sete dl
        cmp dl, byte ptr [esp + 0xc]
        je L_done
        xor eax, esi
        mov dword ptr [ecx + 0x4], eax
    L_done:
        pop esi
        ret 0x8
    }
}

// [0x00533D50] sub_00533D50 (33 bytes)
extern "C" int mem_009253E8;
extern "C" int mem_009547FC;
extern "C" void ext_00532B40();

extern "C" __declspec(naked) void __fastcall fn_00533D50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        mov dword ptr [esi], offset mem_009547FC
        je L_skip
        push 1
        push eax
        call dword ptr [mem_009253E8]
    L_skip:
        mov ecx, esi
        pop esi
        jmp ext_00532B40
    }
}

// [0x00533E00] sub_00533E00 (33 bytes)
extern "C" int mem_00954864;
extern "C" void ext_0054C5E0();

extern "C" __declspec(naked) void __fastcall fn_00533E00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        mov dword ptr [esi], offset mem_00954864
        je L_skip
        push 1
        push eax
        call dword ptr [mem_009253E8]
    L_skip:
        mov ecx, esi
        pop esi
        jmp ext_0054C5E0
    }
}

extern "C" void ext_0063E006();

// [0x00537EC0] sub_00537EC0 (9 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537EC0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push eax
        call ext_0063E006
        ret
    }
}

// [0x00533DC1] sub_00533DC1 (16 bytes)
extern "C" void ext_00538FC0();
extern "C" __declspec(naked) void __fastcall fn_00533DC1(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_00538FC0
        pop esi
        ret 0x4
    }
}

// [0x00533E71] sub_00533E71 (16 bytes)
extern "C" void ext_0054C160();
extern "C" __declspec(naked) void __fastcall fn_00533E71(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0054C160
        pop esi
        ret 4
    }
}

// [0x00530250] sub_00530250 (17 bytes)
extern "C" void ext_00541B50();

extern "C" __declspec(naked) void __fastcall fn_00530250(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0xB9 __asm _emit 0x3D __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // cmp byte ptr [ecx + 0x13d], 0x0
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC0 // sete al
        __asm _emit 0x50 // push eax
        call ext_00541B50
        ret
    }
}

// [0x00537360] sub_00537360 (17 bytes)
extern "C" void ext_005371F0();

extern "C" __declspec(naked) void __fastcall fn_00537360(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        call ext_005371F0
        lea ecx, [eax + 0x18]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        ret 0x10
    }
}

// [0x00538EE0] sub_00538EE0 (18 bytes)
extern "C" int mem_00955114;
extern "C" void ext_00532B60();
extern "C" void* __fastcall fn_00538EE0(void* self) {
    ext_00532B60();
    *(void**)self = (void*)&mem_00955114;
    return self;
}

// [0x0053B7E0] sub_0053B7E0 (18 bytes)
extern "C" int mem_00955714;
extern "C" void ext_00532B60();
extern "C" void* __fastcall fn_0053B7E0(void* self) {
    ext_00532B60();
    *(void**)self = (void*)&mem_00955714;
    return self;
}

// [0x0053C8F0] sub_0053C8F0 (18 bytes)
extern "C" int mem_00955B6C;
extern "C" void ext_00532B60();

extern "C" __declspec(naked) void __fastcall fn_0053C8F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00532B60
        mov dword ptr [esi], offset mem_00955B6C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00537E70] sub_00537E70 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00537E70(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x14);
    *(void**)self = (void*)0x954fb4;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00538CD0] sub_00538CD0 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00538CD0(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x14);
    *(void**)self = (void*)0x95509c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00538F00] sub_00538F00 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00538F00(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x18);
    *(void**)self = (void*)0x95517c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00532B40] sub_00532B40 (28 bytes)
extern "C" void ext_00528B90();
extern "C" __declspec(naked) void __fastcall fn_00532B40(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        mov dword ptr [eax], 0x9543e4
        je L_ret
        cmp dword ptr [ecx + 0x4], eax
        jne L_ret
        push 0
        call ext_00528B90
    L_ret:
        ret
    }
}

// [0x00538530] sub_00538530 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538530(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00532B60
        fld1
        mov al, 1
        fstp dword ptr [esi + 0x14]
        mov byte ptr [esi + 0x18], al
        mov byte ptr [esi + 0x19], al
        mov dword ptr [esi], 0x0095501c
        mov eax, esi
        pop esi
        ret
    }
}
