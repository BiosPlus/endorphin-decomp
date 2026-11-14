// Decompiled translation unit: src/NMData/CollisionModelData.cpp

// [0x005C3180] NMData::CollisionModelData::vfunc_62 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005C3180(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xb447f4
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005C38B0] NMData::CollisionModelData::vfunc_0_off_154 (54 bytes)
extern "C" void* __fastcall ext_00648480(void* self);

extern "C" __declspec(naked) void __fastcall fn_005C38B0(void* self, int edx_unused, int a1) {
    __asm {
        push edi
        mov edi, dword ptr [ecx + 0x18]
        test edi, edi
        je done
        mov eax, dword ptr [ecx - 0x150]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 0xfffffeb0
        push esi
        push edx
        call eax
        mov ecx, edi
        mov esi, eax
        call ext_00648480
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop esi
done:
        pop edi
        ret 0x4
    }
}

// [0x005C2FB0] NMData::CollisionModelData::vfunc_1_off_158 (55 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C2FB0(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        add ecx, 0xfffffeb4
        fstp dword ptr [esp]
        lea edx, [esp]
        fld dword ptr [eax + 0x4]
        push edx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x10]
        call eax
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C3840] NMData::CollisionModelData::vfunc_6_off_C (71 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005C3840(void* self, int edx_unused, float* out) {
    __asm {
        mov ecx, dword ptr [ecx + 0x150]
        sub esp, 0x10
        test ecx, ecx
        je short L_end
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
    L_end:
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C37E0] NMData::CollisionModelData::vfunc_5_off_C (82 bytes)
extern "C" void ext_005B1B60();

extern "C" __declspec(naked) void __fastcall fn_005C37E0(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x150]
        test ecx, ecx
        je done
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push esi
        call ext_005B1B60
        fldz
        cmp dword ptr [edi + 0x4], 0x0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x10]
        pop esi
        je done
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x4]
        push edx
        call eax
done:
        pop edi
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void __fastcall ext_00648470(void* p);
extern "C" void __fastcall ext_00648790(void* p);
extern "C" void __cdecl ext_006A5C5C(void* p);

// [0x005C8860] NMData::CollisionModelData::vfunc_64 (65 bytes)
extern "C" void __fastcall fn_005C8860(void* self) {
    char* s = (char*)self;
    if (*(void**)(s + 0x16C)) {
        ext_00648470(*(void**)(s + 0x16C));
        void* p = *(void**)(s + 0x16C);
        if (p) {
            ext_00648790(p);
            ext_006A5C5C(p);
        }
        *(void**)(s + 0x16C) = 0;
        *(unsigned char*)(s + 0x168) = 0;
    }
}

// [0x005C3E20] NMData::CollisionModelData::vfunc_14 (114 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_005C3E20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x9c
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je L_9c
        cmp eax, 0x199
        je L_199
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_199:
        cmp dword ptr [ecx + 0x15c], 0
        je L_zero
        push 0x199
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_9c:
        mov ecx, dword ptr [ecx + 0x15c]
        test ecx, ecx
        je L_zero
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_zero:
        push 0
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005C3AB0] NMData::CollisionModelData::vfunc_36 (141 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005C3AB0(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x15c], 0
        je done
        fldz
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push edi
        fst dword ptr [esp + 0x10]
        lea edi, [esi + 0xc]
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        lea ecx, [esp + 0x8]
        fmul dword ptr [esp + 0x8]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov eax, dword ptr [edi]
        fmul dword ptr [esp + 0x14]
        mov edx, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x14]
        call edx
        cmp dword ptr [esi + 0x10], 0
        je cleanup
        mov eax, dword ptr [esi + 0x10]
        mov edi, dword ptr [eax]
        mov ecx, dword ptr [esi + 0x15c]
        add edi, 0x34
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edi]
        push eax
        call edx
cleanup:
        pop edi
done:
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C4020] NMData::CollisionModelData::vfunc_33 (145 bytes)
// SEH-framed: builds a temporary std::string from a literal, assigns it into this+0x17C,
// destroys the temporary, sets the four flag fields (+0x198 dword, +0x19C..+0x19E = 1,
// +0x19F = 0), then tail-calls the base vfunc_33 via ext_005C3660 and unwinds the frame.
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" void ext_005C3660();

extern "C" __declspec(naked) void __fastcall fn_005C4020(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov al, 1
        mov ecx, esi
        mov dword ptr [esi + 0x198], 0
        mov byte ptr [esi + 0x19c], al
        mov byte ptr [esi + 0x19d], al
        mov byte ptr [esi + 0x19e], al
        mov byte ptr [esi + 0x19f], 0
        call ext_005C3660
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x005CCCF0] NMData::CollisionModelData::vfunc_15 (147 bytes)
extern "C" void ext_005C3010();
extern "C" void ext_005CC750();
extern "C" void ext_005CC770();
extern "C" void ext_005CC790();
extern "C" void ext_005CC7B0();

extern "C" __declspec(naked) void __fastcall fn_005CCCF0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x221
        push esi
        mov dword ptr [esp + 0x4], 0x0
        jg short L_jg
        je short L_221
        mov edx, eax
        sub edx, 0x21f
        je short L_21f
        sub edx, 0x1
        jne short L_default
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_005CC770
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_21f:
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_005CC750
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_221:
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_005CC790
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_jg:
        cmp eax, 0x373
        je short L_373
    L_default:
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        call ext_005C3010
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_373:
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        call ext_005CC7B0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005C37A0] NMData::CollisionModelData::vfunc_4_off_C (60 bytes)
extern "C" void ext_005B1AB0();
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005C37A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x150]
        test ecx, ecx
        je done
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_005B1AB0
        cmp dword ptr [esi + 0x4], 0
        je done
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x150]
        push edi
        mov edi, dword ptr [edx]
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x4]
        push eax
        mov eax, dword ptr [edi + 0x34]
        call eax
        pop edi
done:
        pop esi
        ret 0x4
    }
}

// [0x005C3B40] NMData::CollisionModelData::vfunc_38 (181 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C3B40(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x15c], 0
        je done
        fldz
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push edi
        fst dword ptr [esp + 0x10]
        lea edi, [esi + 0xc]
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi + 0x15c]
        mov eax, dword ptr [eax + 0x8]
        cmp eax, 0x5
        jne chk4
        mov ecx, dword ptr [esp + 0x1c]
        fld dword ptr [ecx]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        jmp after_scale
chk4:
        cmp eax, 0x4
        jne chk2
        mov edx, dword ptr [esp + 0x1c]
        fld dword ptr [edx]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        jmp after_scale
chk2:
        cmp eax, 0x2
        jne after_scale
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
after_scale:
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x14]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        call edx
        cmp dword ptr [esi + 0x10], 0
        je cleanup
        mov eax, dword ptr [esi + 0x10]
        mov edi, dword ptr [eax]
        mov ecx, dword ptr [esi + 0x15c]
        add edi, 0x34
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edi]
        push eax
        call edx
cleanup:
        pop edi
done:
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C87C0] NMData::CollisionModelData::vfunc_63 (160 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00648530();
extern "C" void ext_006486B0();

extern "C" __declspec(naked) void __fastcall fn_005C87C0(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        push edi
        push 60h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0Ch], eax
        test eax, eax
        mov dword ptr [esp + 18h], 0
        je zero_ebp_5C87C0
        mov ecx, eax
        call ext_006486B0
        mov ebp, eax
        jmp after_ebp_5C87C0
    zero_ebp_5C87C0:
        xor ebp, ebp
    after_ebp_5C87C0:
        mov edi, dword ptr [esi + 16Ch]
        cmp ebp, edi
        mov dword ptr [esp + 18h], 0FFFFFFFFh
        je skip_old_5C87C0
        test edi, edi
        je skip_old_5C87C0
        mov ecx, edi
        call ext_00648790
        push edi
        call ext_006A5C5C
        add esp, 4
    skip_old_5C87C0:
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebp
        mov dword ptr [esi + 16Ch], ebp
        call ext_00648530
        mov ecx, dword ptr [esp + 10h]
        pop edi
        mov byte ptr [esi + 168h], 0
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 0Ch
    }
}

// [0x005C2F70] NMData::CollisionModelData::vfunc_0_off_158 (53 bytes)
extern "C" void ext_00528B60();
extern "C" void ext_005866C0();
extern "C" void ext_00594000();
extern "C" __declspec(naked) void __fastcall fn_005C2F70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi - 0xc4]
        mov ecx, dword ptr [eax + 0x10]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        lea ecx, [esi - 0x14c]
        call ext_00528B60
        call ext_00594000
        push edi
        add eax, 0x258
        push eax
        lea ecx, [esi - 0x158]
        call ext_005866C0
        pop edi
        pop esi
        ret
    }
}

// [0x005C84C0] NMData::CollisionModelData::vfunc_34 (159 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" void ext_005B5AF0();

extern "C" __declspec(naked) void* __fastcall fn_005C84C0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x88d648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        xor eax, eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], eax
        mov ebx, dword ptr [esi + 0x15c]
        cmp ebx, eax
        mov dword ptr [esp + 0x18], eax
        je L_5c851c
        cmp byte ptr [esi + 0x160], al
        je L_5c851c
        lea ecx, [esi + 4]
        push eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        lea edi, [esi + 0xc]
        push edi
        call edx
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ebx
        call ext_00493E40
        mov esi, dword ptr [esi + 0x15c]
        mov dword ptr [eax + 0x20], esi
        jmp L_5c853b
    L_5c851c:
        lea ecx, [esi + 4]
        push eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        lea edi, [esi + 0xc]
        push edi
        call edx
        push eax
        call ext_005B5AF0
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        call ext_00493E40
    L_5c853b:
        mov ebx, eax
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x10], ebx
        call ext_00528B90
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_005BF400();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x005C31D0] NMData::CollisionModelData::vfunc_13_off_C (145 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C31D0(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8b56f9
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [esp + 0x30]
        test    ebx, ebx
        push    edi
        mov     edi, ecx
        je      L_fail
        mov     eax, dword ptr [edi - 0xc]
        mov     edx, dword ptr [eax + 0xf8]
        push    esi
        lea     esi, [edi - 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    edx
        push    eax
        lea     ecx, [edi + 8]
        mov     dword ptr [esp + 0x34], 0
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    dword ptr [mem_00924FF4]
        push    esi
        mov     ecx, ebx
        call    ext_005BF400
        pop     esi
        pop     edi
        mov     al, 1
        pop     ebx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     4
    L_fail:
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        xor     al, al
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     4
    }
}

// [0x005CC420] NMData::CollisionModelData::vfunc_17_off_C (99 bytes)
extern "C" void ext_005CC390();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005CC420(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 1a0h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_005CC420_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_005CC390
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_005CC420_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}
