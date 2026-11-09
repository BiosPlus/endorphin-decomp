// Decompiled translation unit: src/classes/PoseTool.cpp

// [0x00545120] PoseTool::vfunc_23 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x88]
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x005451E0] PoseTool::vfunc_32 (22 bytes)
extern "C" void ext_00543470();
extern "C" __declspec(naked) void __fastcall fn_005451E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00543470
        mov ecx, dword ptr [esi + 0xa0]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x68]
        pop esi
        jmp edx
    }
}

// [0x00545140] PoseTool::vfunc_24 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8c]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}
