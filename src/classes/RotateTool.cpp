// Decompiled translation unit: src/classes/RotateTool.cpp

// [0x00546760] RotateTool::vfunc_29 (31 bytes)
extern "C" void ext_005528A0();

extern "C" __declspec(naked) void __fastcall fn_00546760(void* self) {
    __asm {
        cmp byte ptr [ecx + 0xe4], 0x0
        je short not_set
        add ecx, 0xb8
        jmp ext_005528A0
    not_set:
        add ecx, 0x98
        jmp ext_005528A0
    }
}

// [0x00546780] RotateTool::vfunc_28 (92 bytes)
extern "C" void ext_00552860();

extern "C" __declspec(naked) void __fastcall fn_00546780(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp eax, 0x5
        push esi
        mov esi, ecx
        jne short not_five
        xor al, al
        mov byte ptr [esi + 0xe4], al
        mov byte ptr [esi + 0xe5], al
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        pop esi
        ret 0x8
    not_five:
        cmp byte ptr [esi + 0xe4], 0x0
        push eax
        je short not_flag
        lea ecx, [esi + 0xb8]
        call ext_00552860
        pop esi
        ret 0x8
    not_flag:
        lea ecx, [esi + 0x98]
        call ext_00552860
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        mov ecx, esi
        call edx
        pop esi
        ret 0x8
    }
}

// [0x005467E0] RotateTool::vfunc_21 (128 bytes)
extern "C" int mem_00940690;

extern "C" __declspec(naked) void __fastcall fn_005467E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0xe4]
        test al, al
        mov byte ptr [esi + 0xe6], 0x1
        jne short skip_read
        mov ecx, dword ptr [esp + 0xc]
        shr ecx, 0x3
        and cl, 0x1
        mov byte ptr [esi + 0xe6], cl
    skip_read:
        cmp byte ptr [esi + 0xe6], 0x0
        je short done
        test al, al
        sete al
        test al, al
        mov byte ptr [esi + 0xe4], al
        je short use_one
        fld dword ptr [mem_00940690]
        jmp short store_scale
    use_one:
        fld1
    store_scale:
        fstp dword ptr [esi + 0xa4]
        cmp byte ptr [esi + 0xe4], 0x0
        je short call_vfunc
        mov byte ptr [esi + 0xe5], 0x1
        jmp short tail
    call_vfunc:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x80]
        mov ecx, esi
        call eax
    tail:
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x5c]
        call eax
    done:
        mov eax, 0x1
        pop esi
        ret 0x8
    }
}

// [0x00546870] RotateTool::vfunc_32 (280 bytes)
extern "C" void ext_004F9950();
extern "C" void ext_00543470();
extern "C" void ext_00546570();

extern "C" __declspec(naked) void __fastcall fn_00546870(void* self) {
    __asm {
        sub esp, 0xa0
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea ebx, [ebp + 0x44]
        mov ecx, 0x10
        mov esi, ebx
        lea edi, [esp + 0x30]
        rep movsd
        mov ecx, ebp
        call ext_00543470
        mov ecx, 0x10
        mov esi, ebx
        lea edi, [esp + 0x70]
        lea eax, [esp + 0x20]
        rep movsd
        push eax
        lea ecx, [esp + 0x34]
        call ext_004F9950
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x78]
        call ext_004F9950
        mov ecx, eax
        call ext_00546570
        cmp byte ptr [ebp + 0xe4], 0x0
        mov bl, al
        jne short loc_546920
        cmp byte ptr [ebp + 0xe6], 0x0
        jne short loc_546920
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x38]
        mov ecx, ebp
        call eax
        test al, al
        jne short loc_546920
        test bl, bl
        lea ebx, [ebp + 0x4]
        je short loc_546912
loc_5468ed:
        fld dword ptr [ebx + 0x30]
        fstp dword ptr [ebp + 0xd4]
        fld dword ptr [ebx + 0x34]
        fstp dword ptr [ebp + 0xd8]
        fld dword ptr [ebx + 0x38]
        fstp dword ptr [ebp + 0xdc]
        fld1
        fstp dword ptr [ebp + 0xe0]
        jmp short loc_54694a
loc_546912:
        mov ecx, 0x10
        lea esi, [ebp + 0x44]
        mov edi, ebx
        rep movsd
        jmp short loc_5468ed
loc_546920:
        fld dword ptr [ebp + 0xd4]
        lea ebx, [ebp + 0x4]
        fstp dword ptr [ebx + 0x30]
        fld dword ptr [ebp + 0xd8]
        fstp dword ptr [ebx + 0x34]
        fld dword ptr [ebp + 0xdc]
        fstp dword ptr [ebx + 0x38]
        fld1
        fstp dword ptr [ebx + 0x3c]
        mov byte ptr [ebp + 0xe6], 0x0
loc_54694a:
        mov ecx, dword ptr [ebp + 0x88]
        test ecx, ecx
        je short loc_54697d
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x2c]
        call eax
        test al, al
        jne short loc_54697d
        fld1
        fst dword ptr [ebx]
        fldz
        fst dword ptr [ebx + 0x10]
        fst dword ptr [ebx + 0x20]
        fst dword ptr [ebx + 0x4]
        fst dword ptr [ebx + 0x24]
        fst dword ptr [ebx + 0x8]
        fstp dword ptr [ebx + 0x18]
        fst dword ptr [ebx + 0x14]
        fstp dword ptr [ebx + 0x28]
loc_54697d:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xa0
        ret
    }
}

// [0x00546610] RotateTool::vfunc_31 (335 bytes)
extern "C" void ext_005434C0();
extern "C" int mem_00925424;
extern "C" int mem_00925438;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_009253CC;
extern "C" int mem_00925524;
extern "C" int mem_00940694;
extern "C" int mem_009254D0;
extern "C" int mem_00925404;
extern "C" int mem_00925418;

extern "C" __declspec(naked) void __fastcall fn_00546610(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne done
        push ebx
        push ebp
        push edi
        push 0xb50
        call dword ptr [mem_00925424]
        movzx ebp, al
        test ebp, ebp
        je no_disable
        push 0xb50
        call dword ptr [mem_00925438]
    no_disable:
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x20]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esp + 0x10]
        cmp byte ptr [esi + 0xe4], 0x0
        fld dword ptr [esp + 0x10]
        fst dword ptr [esi + 0xa0]
        je take_else
        mov ebx, dword ptr [esp + 0x2c]
        fstp dword ptr [esi + 0xc0]
        mov eax, dword ptr [esi + 0xb8]
        mov edi, dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0xb8]
        push ebx
        push edi
        call edx
        cmp edi, 0x1c02
        jne not_select
        push 0x5
        call dword ptr [mem_009253CC]
        call dword ptr [mem_00925524]
        jmp tail
    not_select:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld1
        fst dword ptr [esp + 0x8]
        fldz
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        cmp edi, 0x1c00
        jne tail
        mov eax, dword ptr [esi + 0x98]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x98]
        push ebx
        push edi
        call edx
        jmp tail
    take_else:
        mov edx, dword ptr [esp + 0x2c]
        fstp st(0)
        mov eax, dword ptr [esi + 0x98]
        mov eax, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x98]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        call eax
    tail:
        call dword ptr [mem_00925404]
        pop edi
        test ebp, ebp
        pop ebp
        pop ebx
        je done
        push 0xb50
        call dword ptr [mem_00925418]
    done:
        pop esi
        add esp, 0x14
        ret 0x8
    }
}
