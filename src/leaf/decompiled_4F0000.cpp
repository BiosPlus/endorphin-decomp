// Decompiled translation unit: src/leaf/decompiled_4F0000.cpp

// [0x004FD810] sub_004FD810 (17 bytes)
extern "C" void ext_0050E9F0();
extern "C" float __fastcall fn_004FD810(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050E9F0)((char*)self + 0x44);
    return tmp;
}

// [0x004FD830] sub_004FD830 (17 bytes)
extern "C" void ext_0050EA00();
extern "C" float __fastcall fn_004FD830(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050EA00)((char*)self + 0x44);
    return tmp;
}

// [0x004FD850] sub_004FD850 (17 bytes)
extern "C" void ext_0050EA10();
extern "C" float __fastcall fn_004FD850(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050EA10)((char*)self + 0x44);
    return tmp;
}

// [0x004F4D90] sub_004F4D90 (19 bytes)
#include <math.h>
extern "C" float __fastcall fn_004F4D90(void* self) {
    volatile float tmp;
    float* p = (float*)self;
    tmp = (float)atan2((double)p[2], (double)p[0]);
    return tmp;
}

// [0x004F4DB0] sub_004F4DB0 (20 bytes)
extern "C" void ext_004F4D90();
extern "C" double mem_0094CE70;
extern "C" float __fastcall fn_004F4DB0(void* self) {
    volatile float tmp;
    tmp = (float)((double)((float (__fastcall*)(void*))ext_004F4D90)(self) * mem_0094CE70);
    return tmp;
}

// [0x004F4F00] sub_004F4F00 (20 bytes)
extern "C" void ext_004F4ED0();
extern "C" double mem_0094CE70;
extern "C" float __fastcall fn_004F4F00(void* self) {
    volatile float tmp;
    tmp = (float)((double)((float (__fastcall*)(void*))ext_004F4ED0)(self) * mem_0094CE70);
    return tmp;
}

// [0x004F28C0] sub_004F28C0 (25 bytes)
extern "C" void ext_0065C650();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F28C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, dword ptr [esi]
        call ext_0065C650
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}

// [0x004FDC60] sub_004FDC60 (25 bytes)
extern "C" void ext_00661980();
extern "C" void ext_004FD870();
extern "C" void* __fastcall fn_004FDC60(void* self) {
    ((void (__fastcall*)(void*))ext_00661980)(self);
    *(void**)self = (void*)0x0094EBE4;
    ((void (__fastcall*)(void*))ext_004FD870)(self);
    return self;
}

// [0x004F02A0] sub_004F02A0 (29 bytes)
extern "C" void ext_004EFDF0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F02A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004EFDF0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov dword ptr [esi + 0x4], 0x0
        pop esi
        ret
    }
}

// [0x004F27E0] sub_004F27E0 (32 bytes)
extern "C" int mem_0094C42C;
extern "C" void ext_004F4D20();

extern "C" __declspec(naked) void* __fastcall fn_004F27E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_004F4D20
        mov dword ptr [esi], offset mem_0094C42C
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x004F2870] sub_004F2870 (32 bytes)
extern "C" void ext_004F9800();

typedef void* (__thiscall *Init8Fn)(void*, void*, void*);

extern "C" void* __fastcall fn_004F2870(void* self, int edx_unused, void* a1, void* a2) {
    ((Init8Fn)ext_004F9800)(self, a1, a2);
    *(void**)self = (void*)0x94c69c;
    return self;
}

// [0x004F2DE0] sub_004F2DE0 (32 bytes)
extern "C" void* __fastcall fn_004F2DE0(void* self, int edx_unused, void* a1, void* a2) {
    ((Init8Fn)ext_004F9800)(self, a1, a2);
    *(void**)self = (void*)0x94c99c;
    return self;
}

// [0x004FFD60] sub_004FFD60 (35 bytes)
extern "C" int mem_00AEB2D0;
extern "C" int mem_00AEB2CC;
extern "C" void* __cdecl fn_004FFD60() {
    if (!(mem_00AEB2D0 & 1)) {
        mem_00AEB2D0 |= 1;
        mem_00AEB2CC = 0x0094ECA4;
    }
    return (void*)&mem_00AEB2CC;
}

// [0x004FD870] sub_004FD870 (46 bytes)
extern "C" int mem_0093F8EC;
extern "C" void __fastcall fn_004FD870(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(float*)(p + 0x04) = *(float*)&mem_0093F8EC;
    *(int*)(p + 0x08) = 0;
    *(int*)(p + 0x10) = 0x64;
    *(int*)(p + 0x18) = 0x4B0;
    *(int*)(p + 0x14) = 0x7FFFFFFF;
    *(unsigned char*)(p + 0x1C) = 0;
    *(unsigned char*)(p + 0x1D) = 1;
    *(unsigned char*)(p + 0x1E) = 0;
}

// [0x004FDE90] sub_004FDE90 (83 bytes)
extern "C" void ext_00665810();
extern "C" __declspec(naked) void __fastcall fn_004FDE90(void* self) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov ecx, dword ptr [esi + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_release:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00665810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004F9190] sub_004F9190 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F20;
extern "C" int mem_00AE9F1C;

extern "C" __declspec(naked) void* __fastcall fn_004F9190(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8904ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F20], al
        jne L_done
        or dword ptr [mem_00AE9F20], eax
        mov ecx, offset mem_00AE9F1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F1C], 0x94ce8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F1C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F94F0] sub_004F94F0 (30 bytes)
extern "C" void ext_004F9190();

extern "C" __declspec(naked) void __fastcall fn_004F94F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9190
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F91F0] sub_004F91F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F28;
extern "C" int mem_00AE9F24;

extern "C" __declspec(naked) void* __fastcall fn_004F91F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89050e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F28], al
        jne L_done
        or dword ptr [mem_00AE9F28], eax
        mov ecx, offset mem_00AE9F24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F24], 0x94d03c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F24
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F9510] sub_004F9510 (30 bytes)
extern "C" void ext_004F91F0();

extern "C" __declspec(naked) void __fastcall fn_004F9510(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F91F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9250] sub_004F9250 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F30;
extern "C" int mem_00AE9F2C;

extern "C" __declspec(naked) void* __fastcall fn_004F9250(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89052e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F30], al
        jne L_done
        or dword ptr [mem_00AE9F30], eax
        mov ecx, offset mem_00AE9F2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F2C], 0x94d1ec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F2C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F92B0] sub_004F92B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F38;
extern "C" int mem_00AE9F34;

extern "C" __declspec(naked) void* __fastcall fn_004F92B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89054e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F38], al
        jne L_done
        or dword ptr [mem_00AE9F38], eax
        mov ecx, offset mem_00AE9F34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F34], 0x94d39c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F34
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F9530] sub_004F9530 (30 bytes)
extern "C" void ext_004F9250();

extern "C" __declspec(naked) void __fastcall fn_004F9530(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9250
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9550] sub_004F9550 (30 bytes)
extern "C" void ext_004F92B0();

extern "C" __declspec(naked) void __fastcall fn_004F9550(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F92B0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9310] sub_004F9310 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F40;
extern "C" int mem_00AE9F3C;

extern "C" __declspec(naked) void __fastcall fn_004F9310(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89056e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F40], al
        jne L_done
        or dword ptr [mem_00AE9F40], eax
        mov ecx, offset mem_00AE9F3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F3C], 0x94d54c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F3C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F9570] sub_004F9570 (30 bytes)
extern "C" void ext_004F9310();

extern "C" __declspec(naked) void __fastcall fn_004F9570(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9310
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9370] sub_004F9370 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F48;
extern "C" int mem_00AE9F44;

extern "C" __declspec(naked) void __fastcall fn_004F9370(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89058e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F48], al
        jne L_done
        or dword ptr [mem_00AE9F48], eax
        mov ecx, offset mem_00AE9F44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F44], 0x94d6fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F44
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F9590] sub_004F9590 (30 bytes)
extern "C" void ext_004F9370();

extern "C" __declspec(naked) void __fastcall fn_004F9590(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9370
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F93D0] sub_004F93D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F50;
extern "C" int mem_00AE9F4C;

extern "C" __declspec(naked) void __fastcall fn_004F93D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8905ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F50], al
        jne L_done
        or dword ptr [mem_00AE9F50], eax
        mov ecx, offset mem_00AE9F4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F4C], 0x94d8ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F4C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F95B0] sub_004F95B0 (30 bytes)
extern "C" void ext_004F93D0();

extern "C" __declspec(naked) void __fastcall fn_004F95B0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F93D0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9430] sub_004F9430 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F58;
extern "C" int mem_00AE9F54;

extern "C" __declspec(naked) void __fastcall fn_004F9430(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8905ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F58], al
        jne L_done
        or dword ptr [mem_00AE9F58], eax
        mov ecx, offset mem_00AE9F54
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F54], 0x94da5c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F54
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F95D0] sub_004F95D0 (30 bytes)
extern "C" void ext_004F9430();

extern "C" __declspec(naked) void __fastcall fn_004F95D0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9430
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004F9490] sub_004F9490 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F60;
extern "C" int mem_00AE9F5C;

extern "C" __declspec(naked) void __fastcall fn_004F9490(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8905ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE9F60], al
        jne L_done
        or dword ptr [mem_00AE9F60], eax
        mov ecx, offset mem_00AE9F5C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE9F5C], 0x94dc0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE9F5C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FF8E0] sub_004FF8E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB270;
extern "C" int mem_00AEB26C;

extern "C" __declspec(naked) void __fastcall fn_004FF8E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8911be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB270], al
        jne L_done
        or dword ptr [mem_00AEB270], eax
        mov ecx, offset mem_00AEB26C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB26C], 0x94e1c4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB26C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004F95F0] sub_004F95F0 (30 bytes)
extern "C" void ext_004F9490();

extern "C" __declspec(naked) void __fastcall fn_004F95F0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004F9490
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004FF940] sub_004FF940 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB278;
extern "C" int mem_00AEB274;

extern "C" __declspec(naked) void __fastcall fn_004FF940(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8911de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB278], al
        jne L_done
        or dword ptr [mem_00AEB278], eax
        mov ecx, offset mem_00AEB274
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB274], 0x94e29c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB274
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FF9A0] sub_004FF9A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB280;
extern "C" int mem_00AEB27C;

extern "C" __declspec(naked) void __fastcall fn_004FF9A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8911fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB280], al
        jne L_done
        or dword ptr [mem_00AEB280], eax
        mov ecx, offset mem_00AEB27C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB27C], 0x94e374
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB27C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFA00] sub_004FFA00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB288;
extern "C" int mem_00AEB284;

extern "C" __declspec(naked) void __fastcall fn_004FFA00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89121e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB288], al
        jne L_done
        or dword ptr [mem_00AEB288], eax
        mov ecx, offset mem_00AEB284
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB284], 0x94e44c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB284
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFA60] sub_004FFA60 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB290;
extern "C" int mem_00AEB28C;

extern "C" __declspec(naked) void __fastcall fn_004FFA60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89123e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB290], al
        jne L_done
        or dword ptr [mem_00AEB290], eax
        mov ecx, offset mem_00AEB28C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB28C], 0x94e524
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB28C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFAC0] sub_004FFAC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB298;
extern "C" int mem_00AEB294;

extern "C" __declspec(naked) void __fastcall fn_004FFAC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89125e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB298], al
        jne L_done
        or dword ptr [mem_00AEB298], eax
        mov ecx, offset mem_00AEB294
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB294], 0x94e5fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB294
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFB20] sub_004FFB20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2A0;
extern "C" int mem_00AEB29C;

extern "C" __declspec(naked) void __fastcall fn_004FFB20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89127e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2A0], al
        jne L_done
        or dword ptr [mem_00AEB2A0], eax
        mov ecx, offset mem_00AEB29C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB29C], 0x94e6d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB29C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFB80] sub_004FFB80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2A8;
extern "C" int mem_00AEB2A4;

extern "C" __declspec(naked) void __fastcall fn_004FFB80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89129e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2A8], al
        jne L_done
        or dword ptr [mem_00AEB2A8], eax
        mov ecx, offset mem_00AEB2A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB2A4], 0x94e7ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB2A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFBE0] sub_004FFBE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2B0;
extern "C" int mem_00AEB2AC;

extern "C" __declspec(naked) void __fastcall fn_004FFBE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8912be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2B0], al
        jne L_done
        or dword ptr [mem_00AEB2B0], eax
        mov ecx, offset mem_00AEB2AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB2AC], 0x94e884
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB2AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFC40] sub_004FFC40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2B8;
extern "C" int mem_00AEB2B4;

extern "C" __declspec(naked) void __fastcall fn_004FFC40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8912de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2B8], al
        jne L_done
        or dword ptr [mem_00AEB2B8], eax
        mov ecx, offset mem_00AEB2B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB2B4], 0x94e95c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB2B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFCA0] sub_004FFCA0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2C0;
extern "C" int mem_00AEB2BC;

extern "C" __declspec(naked) void __fastcall fn_004FFCA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8912fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2C0], al
        jne L_done
        or dword ptr [mem_00AEB2C0], eax
        mov ecx, offset mem_00AEB2BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB2BC], 0x94ea34
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB2BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004FFD00] sub_004FFD00 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2C8;
extern "C" int mem_00AEB2C4;

extern "C" __declspec(naked) void __fastcall fn_004FFD00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89131e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB2C8], al
        jne L_done
        or dword ptr [mem_00AEB2C8], eax
        mov ecx, offset mem_00AEB2C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AEB2C4], 0x94eb0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB2C4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
