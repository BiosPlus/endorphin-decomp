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
