// Decompiled translation unit: src/classes/CameraTool.cpp

// [0x00543470] CameraTool::vfunc_32 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543470(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x88], 0x0
        je done
        mov eax, dword ptr [ebx + 0x88]
        mov edx, dword ptr [ebx]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
        mov ecx, dword ptr [ebx + 0x88]
        mov edx, dword ptr [esi + 0x18]
        push eax
        call edx
        lea edx, [ebx + 0x4]
        mov ecx, 0x10
        mov esi, eax
        mov edi, edx
        rep movsd
        lea edi, [ebx + 0x44]
        mov ecx, 0x10
        mov esi, edx
        rep movsd
        pop edi
        pop esi
done:
        pop ebx
        ret
    }
}

// [0x005433F0] CameraTool::vfunc_33 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_005433F0(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov eax, dword ptr [esi + 0x88]
        mov edx, dword ptr [esi]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x78]
        call eax
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [edi + 0x18]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x8]
        pop edi
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x34]
        fld dword ptr [esp + 0x8]
        fst dword ptr [esi + 0x38]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x3c]
        fld1
        fst dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x80]
        fxch st(2)
        fstp dword ptr [esi + 0x74]
        fstp dword ptr [esi + 0x78]
        fstp dword ptr [esi + 0x7c]
done:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00543D70] CameraTool::vfunc_31 (140 bytes)
extern "C" int mem_00925424;
extern "C" int mem_00925438;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;
extern "C" int mem_00925418;
extern "C" void ext_00543C00();

extern "C" __declspec(naked) void __fastcall fn_00543D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        cmp dword ptr [esp + 0x4], 0x1c02
        push esi
        mov esi, ecx
        je done
        mov eax, dword ptr [esi + 0x84]
        mov ecx, dword ptr [eax + 0xf8]
        cmp ecx, dword ptr [eax + 0xfc]
        jne done
        cmp byte ptr [esi + 0xc4], 0x0
        je done
        push edi
        push 0xb50
        call dword ptr [mem_00925424]
        movzx edi, al
        test edi, edi
        je skip_enable
        push 0xb50
        call dword ptr [mem_00925438]
skip_enable:
        mov ecx, esi
        call ext_00543C00
        call dword ptr [mem_00925414]
        lea edx, [esi + 0x4]
        push edx
        call dword ptr [mem_009253C8]
        mov eax, dword ptr [esi + 0x98]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x98]
        push 0x1
        call edx
        call dword ptr [mem_00925404]
        test edi, edi
        pop edi
        je done
        push 0xb50
        call dword ptr [mem_00925418]
done:
        pop esi
        ret 0x8
    }
}
