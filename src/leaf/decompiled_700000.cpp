// Decompiled translation unit: src/leaf/decompiled_700000.cpp

// [0x007057B0] sub_007057B0 (16 bytes)
extern "C" void __stdcall ext_00783FD0(void* a1);

extern "C" __declspec(naked) void __fastcall fn_007057B0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x40]
        test ecx, ecx
        je done
        push eax
        call ext_00783FD0
    done:
        ret
    }
}

// [0x00703BE0] sub_00703BE0 (112 bytes)
// Four thunk bodies: body 1 at +0x00 returns ecx+0x1f8; body 2 at +0x10 returns [ecx+0x268];
// jmp at +0x20 to body 3 at +0x30 copies the double at *_HUGE into mem_00B5E9C8/CC;
// jmp at +0x50 to body 4 at +0x60 stores -(*_HUGE) into mem_00B5E9C0.
extern "C" int mem_00925284;
extern "C" int mem_00B5E9C8;
extern "C" int mem_00B5E9CC;
extern "C" int mem_00B5E9C0;
extern "C" __declspec(naked) void __fastcall fn_00703BE0(void* self) {
    __asm {
        lea eax, [ecx + 0x1f8]
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
        mov eax, dword ptr [ecx + 0x268]
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
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E9C8], ecx
        mov dword ptr [mem_00B5E9CC], edx
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
        fstp qword ptr [mem_00B5E9C0]
        ret
    }
}
