// Decompiled translation unit: src/leaf/decompiled_6F0000.cpp

// [0x006F9DC0] sub_006F9DC0 (32 bytes)
// Store four stack args into the object: dwords at +0, +4, +8 and a byte at +0xC (ret 0x10).
extern "C" __declspec(naked) void __fastcall fn_006F9DC0(void* self, int edx_unused, int a1, int a2, int a3, unsigned char a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dl, byte ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov byte ptr [eax + 0xc], dl
        ret 0x10
    }
}

// [0x006FA350] sub_006FA350 (32 bytes)
// Returns self if arg0 is 0, 2 or 0xDE1947F3; otherwise returns NULL (ret 8).
extern "C" __declspec(naked) void* __fastcall fn_006FA350(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        je done
        cmp ecx, 0x2
        je done
        xor edx, edx
        cmp ecx, 0xde1947f3
        setne dl
        dec edx
        and eax, edx
    done:
        ret 0x8
    }
}

// [0x006F69B0] sub_006F69B0 (16 bytes)
extern "C" void ext_00782C40(int value);

extern "C" __declspec(naked) void __stdcall fn_006F69B0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C40
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6900] sub_006F6900 (16 bytes)
extern "C" void ext_00782C00();

extern "C" __declspec(naked) void __stdcall fn_006F6900(void* a) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C00
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6940] sub_006F6940 (16 bytes)
extern "C" void ext_00782C80(int value);

extern "C" __declspec(naked) void __stdcall fn_006F6940(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782C80
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6B40] sub_006F6B40 (16 bytes)
extern "C" void ext_00782CB0();

extern "C" __declspec(naked) void __stdcall fn_006F6B40(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782CB0
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F6E40] sub_006F6E40 (16 bytes)
extern "C" void ext_00782CD0();

extern "C" __declspec(naked) void __stdcall fn_006F6E40(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00782CD0
        add esp, 0x4
        ret 0x4
    }
}

// [0x006F79C0] sub_006F79C0 (24 bytes)
extern "C" void ext_00711DA0();
extern "C" __declspec(naked) void __fastcall fn_006F79C0(void* self, int edx_unused, int a1) {
    __asm {
        push 0x0
        call ext_00711DA0
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x5dc]
    }
}

// [0x006FA8F0] sub_006FA8F0 (47 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_006FA8F0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov eax, dword ptr [edi + 0x8]
        cmp eax, esi
        je L_same
        test eax, eax
        je L_skip
        mov edx, dword ptr [esi]
        push eax
        call dword ptr [edx + 0x54]
    L_skip:
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        call dword ptr [eax + 0x44]
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    L_same:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006F7970] sub_006F7970 (79 bytes)
// Unit holds two paths: a virtual call at [vtbl+0x8c] with 4 pushed args (ret 8), then
// padding and a cached-value getter that stores into *arg (ret 0x10).
extern "C" __declspec(naked) void __fastcall fn_006F7970(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push 0x0
        push 0x0
        lea edx, [esp + 0xc]
        push 0x0
        push edx
        call dword ptr [eax + 0x8c]
        ret 0x8
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je no_fn
        mov ecx, dword ptr [esi + 0x8]
        call eax
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x80], eax
        pop esi
        mov dword ptr [ecx], eax
        ret 0x10
    no_fn:
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x80]
        pop esi
        mov dword ptr [eax], edx
        ret 0x10
    }
}

// [0x006F7560] sub_006F7560 (80 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006F7560(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x19c]
        test ecx, ecx
        je zero
        mov eax, dword ptr [esi + 0x198]
        test eax, eax
        jne check1
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x8]
        cmp eax, 0x6
        jne check1
        mov eax, dword ptr [esi + 0x19c]
        pop esi
        ret
    check1:
        cmp dword ptr [esi + 0x198], 0x1
        jne zero
        mov ecx, dword ptr [esi + 0x19c]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x8]
        cmp eax, 0x8
        jne zero
        mov eax, dword ptr [esi + 0x19c]
        cmp eax, esi
        jne done
    zero:
        xor eax, eax
    done:
        pop esi
        ret
    }
}

// [0x006F8700] sub_006F8700 (80 bytes)
// Two incremental-link style thunks: each jumps over 11 nop padding to a body.
// Body 1: copy the double at *_HUGE into mem_00B5E260/64.
// Body 2: store -(*_HUGE) into mem_00B5E258.
extern "C" int mem_00925284;
extern "C" int mem_00B5E260;
extern "C" int mem_00B5E264;
extern "C" int mem_00B5E258;
extern "C" __declspec(naked) void __fastcall fn_006F8700(void* self) {
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
        mov dword ptr [mem_00B5E260], ecx
        mov dword ptr [mem_00B5E264], edx
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
        fstp qword ptr [mem_00B5E258]
        ret
    }
}
