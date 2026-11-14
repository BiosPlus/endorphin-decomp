// Decompiled translation unit: src/classes/CSizingControlBarG.cpp

extern "C" void ext_00454D10();
typedef int (__stdcall *FnGetCursorPos)(void*);
typedef short (__stdcall *FnGetKeyState)(int);
typedef int (__stdcall *FnSendMessageA)(void*, unsigned int, unsigned int, unsigned int);
extern "C" FnGetCursorPos mem_00925718;
extern "C" FnGetKeyState mem_009255F4;
extern "C" FnSendMessageA mem_00925694;

// [0x00454DB0] CSizingControlBarG::vfunc_81 (187 bytes)
extern "C" __declspec(naked) void __fastcall fn_00454DB0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1a0]
        call edx
        test eax, eax
        je done
        push ebx
        push edi
        lea eax, [esp + 0xc]
        push eax
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, esi
        call ext_00454D10
        xor ecx, ecx
        cmp eax, 0x14
        sete cl
        push 0x1
        mov edi, ecx
        call dword ptr [mem_009255F4]
        mov ebx, dword ptr [esi + 0x10c]
        xor ecx, ecx
        test ax, ax
        setl cl
        test edi, edi
        je L1
        test ecx, ecx
        je L1
        mov eax, 0x1
        jmp L2
L1:
        xor eax, eax
L2:
        test edi, edi
        mov edx, dword ptr [esi + 0x110]
        mov dword ptr [esi + 0x10c], eax
        je L3
        test ecx, ecx
        jne L3
        mov ecx, 0x1
        jmp L4
L3:
        xor ecx, ecx
L4:
        pop edi
        xor eax, ebx
        mov dword ptr [esi + 0x110], ecx
        pop ebx
        jne L5
        xor ecx, edx
        jne L5
        xor eax, eax
        jmp L6
L5:
        mov eax, 0x1
L6:
        test eax, eax
        je done
        mov edx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0x85
        push edx
        call dword ptr [mem_00925694]
done:
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
