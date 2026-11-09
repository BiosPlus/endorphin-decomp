// Decompiled translation unit: src/leaf/decompiled_4A0000.cpp

// [0x004AEC60] sub_004AEC60 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AEC60(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x04 // mov ecx, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x50 // mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}

// [0x004A2510] sub_004A2510 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A2510(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x14 // mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0xC6 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x01 // mov byte ptr [eax + 0x4], 0x1
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x1C // mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x04 // mov eax, dword ptr [edx + 0x4]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}

extern "C" int mem_00941484;

// [0x004A98D0] sub_004A98D0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A98D0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, 1
        mov dword ptr [eax], offset mem_00941484
        mov dword ptr [eax + 0x4], 0
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x004A5BE0] sub_004A5BE0 (25 bytes)
extern "C" void ext_00644F30();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004A5BE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00644F30
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}

// [0x004AECE0] sub_004AECE0 (25 bytes)
extern "C" void ext_00676C90();
extern "C" __declspec(naked) void __fastcall fn_004AECE0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00676C90
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}
