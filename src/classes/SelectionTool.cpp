// Decompiled translation unit: src/classes/SelectionTool.cpp

// [0x0053F660] SelectionTool::vfunc_22 (37 bytes)
extern "C" __declspec(naked) int __fastcall fn_0053F660(void* self, int edx_unused, int a1, int a2) {
    __asm {
        cmp dword ptr [ecx + 0x88], 0x0
        je done
        test byte ptr [esp + 0x8], 0x11
        jne done
        mov ecx, dword ptr [ecx + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x40]
        call edx
    done:
        mov eax, 0x1
        ret 0x8
    }
}

// [0x0053F6C0] SelectionTool::vfunc_31 (113 bytes)
extern "C" void ext_005434C0();
extern "C" int mem_00925424;
extern "C" int mem_00925438;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;
extern "C" int mem_00925418;

extern "C" __declspec(naked) void __fastcall fn_0053F6C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        cmp dword ptr [esp + 0x4], 0x1c02
        push edi
        mov edi, ecx
        je done
        call ext_005434C0
        test al, al
        jne done
        push esi
        push 0xb50
        call dword ptr [mem_00925424]
        movzx esi, al
        test esi, esi
        je skip_disable
        push 0xb50
        call dword ptr [mem_00925438]
    skip_disable:
        call dword ptr [mem_00925414]
        lea eax, [edi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        mov edx, dword ptr [edi + 0x98]
        mov eax, dword ptr [edx + 0x58]
        lea ecx, [edi + 0x98]
        push 0x1
        call eax
        call dword ptr [mem_00925404]
        test esi, esi
        pop esi
        je done
        push 0xb50
        call dword ptr [mem_00925418]
    done:
        pop edi
        ret 0x8
    }
}

// [0x0053FA10] SelectionTool::vfunc_15 (181 bytes)
extern "C" void ext_00543630();

extern "C" __declspec(naked) int __fastcall fn_0053FA10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543630
        test byte ptr [esp + 0x10], 0x1
        je ret_zero
        test al, al
        jne ret_zero
        mov eax, dword ptr [esi + 0xd0]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], eax
        mov ecx, dword ptr [edx]
        mov dword ptr [esi + 0xc4], ecx
        mov ecx, dword ptr [esi + 0xb4]
        mov eax, dword ptr [ecx + 0x1d4]
        sub eax, dword ptr [esi + 0xd4]
        mov dword ptr [esi + 0xc0], eax
        mov ecx, dword ptr [ecx + 0x1d4]
        sub ecx, dword ptr [edx + 0x4]
        mov dword ptr [esi + 0xc8], ecx
        mov ecx, dword ptr [esi + 0xbc]
        cmp ecx, dword ptr [esi + 0xc4]
        jle loc_53fa8a
        mov edx, dword ptr [esi + 0xc4]
        mov dword ptr [esi + 0xbc], edx
        mov dword ptr [esi + 0xc4], ecx
    loc_53fa8a:
        mov eax, dword ptr [esi + 0xc0]
        cmp eax, dword ptr [esi + 0xc8]
        jle loc_53faac
        mov edx, dword ptr [esi + 0xc8]
        mov ecx, eax
        mov dword ptr [esi + 0xc0], edx
        mov dword ptr [esi + 0xc8], ecx
    loc_53faac:
        mov dword ptr [esi + 0xcc], 0x1
        mov eax, 0x1
        pop esi
        ret 0xc
    ret_zero:
        xor eax, eax
        pop esi
        ret 0xc
    }
}

// [0x0053F900] SelectionTool::vfunc_3 (90 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00640A50();
extern "C" void ext_00640AA0();
extern "C" int mem_00A9F8A0;
extern "C" int mem_00A44B84;
extern "C" int mem_00AF1420;
extern "C" int mem_00AF1424;
extern "C" int mem_00A9F6E0;

extern "C" __declspec(naked) void* __fastcall fn_0053F900(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F8A0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [mem_00A44B84]
        push ecx
        push eax
        call ext_00640A50
        mov eax, dword ptr [mem_00AF1420]
        add esp, 0x8
        test eax, eax
        jne loc_53f930
        xor esi, esi
        jmp loc_53f93b
    loc_53f930:
        mov esi, dword ptr [mem_00AF1424]
        sub esi, eax
        sar esi, 0x2
    loc_53f93b:
        mov edx, dword ptr [mem_00A9F6E0]
        push edx
        mov ecx, edi
        call ext_00640110
        push esi
        push eax
        call ext_00640AA0
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_004B69A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F8A0;
extern "C" int mem_00A9F6E0;
extern "C" int mem_00A44B84;
extern "C" int mem_00AF141C;

// [0x0053FB80] SelectionTool::vfunc_2 (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053FB80(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F8A0]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push offset mem_00A44B84
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9F6E0]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [esp + 0xc]
        add esp, 0x8
        push 0x0
        push edx
        mov ecx, offset mem_00AF141C
        call ext_004B69A0
        pop esi
        pop ecx
        ret 0x4
    }
}
