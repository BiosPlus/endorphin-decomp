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

extern "C" void ext_006B9D20();

// [0x0070EA90] sub_0070EA90 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EA90(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0xc
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0070EA70] sub_0070EA70 (32 bytes)
extern "C" int __fastcall ext_006BADB0(void* obj);
extern "C" void ext_006B9EC0();
extern "C" void __fastcall fn_0070EA70(void* self, int edx_unused, void* a1) {
    if (a1) {
        *(void**)((char*)self + 8) = a1;
        int v = ext_006BADB0(a1);
        ((void (__thiscall *)(void*, int))ext_006B9EC0)((char*)self + 12, v);
    }
}

// [0x00708BD0] sub_00708BD0 (64 bytes)
extern "C" void ext_00708C10();
extern "C" void ext_00711BC0();
extern "C" void ext_00712150();
extern "C" void ext_00712160();
extern "C" void ext_007121A0();
extern "C" __declspec(naked) void __fastcall fn_00708BD0(void* self, int edx_unused, void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov ecx, ebx
        call ext_00712150
        test al, al
        jne loc_708C0B
        mov ecx, ebx
        call ext_00712160
        mov edi, eax
        dec edi
        js loc_708C0B
        push esi
loc_708BEE:
        push edi
        mov ecx, ebx
        call ext_007121A0
        mov esi, eax
        mov ecx, esi
        call ext_00711BC0
        push esi
        mov ecx, eax
        call ext_00708C10
        dec edi
        jns loc_708BEE
        pop esi
loc_708C0B:
        pop edi
        pop ebx
        ret 4
    }
}

extern "C" void ext_006C97B0();
extern "C" void ext_006C97D0();
extern "C" void ext_006C97F0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();

// [0x0070BB80] sub_0070BB80 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070BB80(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C97B0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C97D0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C97F0
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BC20] sub_0070BC20 (80 bytes)
extern "C" void ext_006C9810();
extern "C" void ext_006C9830();
extern "C" void ext_006C9850();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BC20(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9810
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9830
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9850
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BCC0] sub_0070BCC0 (80 bytes)
extern "C" void ext_006C9870();
extern "C" void ext_006C9890();
extern "C" void ext_006C98B0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BCC0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9870
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9890
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C98B0
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BD60] sub_0070BD60 (80 bytes)
extern "C" void ext_006C9750();
extern "C" void ext_006C9770();
extern "C" void ext_006C9790();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BD60(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9750
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9770
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9790
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070C860] sub_0070C860 (112 bytes)
extern "C" void ext_006B9EC0();
extern "C" int mem_00925284;
extern "C" int mem_00B5ED40;
extern "C" int mem_00B5ED44;
extern "C" int mem_00B5ED38;
extern "C" __declspec(naked) void __fastcall fn_0070C860(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaabd8c
        lea ecx, [esi + 0xf4]
        call ext_006B9EC0
        mov byte ptr [esi + 0x198], 0
        pop esi
        ret
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
        mov dword ptr [mem_00B5ED40], ecx
        mov dword ptr [mem_00B5ED44], edx
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
        fstp qword ptr [mem_00B5ED38]
        ret
    }
}

// [0x0070C060] sub_0070C060 (127 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BBD0();
extern "C" void ext_0077FB40();

extern "C" __declspec(naked) void __fastcall fn_0070C060(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BBD0
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0070C130] sub_0070C130 (127 bytes)
extern "C" void ext_0070BC70();

extern "C" __declspec(naked) void __fastcall fn_0070C130(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BC70
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

extern "C" void ext_0070BD10();

// [0x0070C200] sub_0070C200 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070C200(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BD10
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}
