// Decompiled translation unit: src/leaf/decompiled_800000.cpp

extern "C" void ext_00859730();
extern "C" void ext_0080FB20();

// [0x0080FAE0] sub_0080FAE0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FAE0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je done
        push eax
        call ext_00859730
        pop ecx
    done:
        ret
    }
}

// [0x0080FB10] sub_0080FB10 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FB10(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_0080FB20
        add esp, 8
        ret
    }
}

// [0x00803990] sub_00803990 (44 bytes)
extern "C" void fn_00803980();

extern "C" void __cdecl fn_00803990(void* self, int a2, int a3, int a4) {
    int* p = reinterpret_cast<int*>(self);
    p[1] = a3;
    int cb = a4 ? a4 : reinterpret_cast<int>(&fn_00803980);
    p[3] = cb;
    p[0] = a2 - 4;
    p[2] = 0;
}

// [0x0080AC00] sub_0080AC00 (47 bytes)
extern "C" void ext_0080AC30();
extern "C" int mem_00B73C80;
extern "C" int mem_00B73C58;
extern "C" int mem_009242E4;

extern "C" __declspec(naked) void __cdecl fn_0080AC00() {
    __asm {
        call ext_0080AC30
        __asm _emit 0xE9 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp +6 (to 0x0080AC10)
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // padding
        mov eax, dword ptr [mem_00B73C80]
        test eax, eax
        je L_0080AC2E
        push offset mem_00B73C58
        call dword ptr [mem_009242E4]
        mov dword ptr [mem_00B73C80], 0x0
L_0080AC2E:
        ret
    }
}

// [0x00802D40] sub_00802D40 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802D40(void* self) {
    __asm {
        xor edx, edx
        push esi
    L_00802D40_top:
        mov eax, dword ptr [ecx + 0x4]
        mov esi, eax
        and esi, 0x80000003
        jns L_00802D40_a
        dec esi
        or esi, -0x4
        inc esi
    L_00802D40_a:
        je L_00802D40_cmp
        mov esi, eax
        and esi, 0x80000003
        jns L_00802D40_b
        dec esi
        or esi, -0x4
        inc esi
    L_00802D40_b:
        sub eax, esi
        add eax, 0x4
    L_00802D40_cmp:
        cmp edx, eax
        jge L_00802D40_done
        mov eax, dword ptr [ecx + 0x30]
        fld dword ptr [eax + 4*edx]
        mov esi, dword ptr [ecx + 0x40]
        fstp dword ptr [esi + 4*edx]
        add edx, 0x1
        jmp L_00802D40_top
    L_00802D40_done:
        pop esi
        ret
    }
}

// [0x00803B60] sub_00803B60 (67 bytes)
extern "C" __declspec(naked) float __fastcall fn_00803B60(void* self) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fadd dword ptr [esp]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}
