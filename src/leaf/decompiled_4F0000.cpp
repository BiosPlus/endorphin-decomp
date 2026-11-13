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
extern "C" int mem_00924FF4;
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

// [0x004FDEF0] sub_004FDEF0 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FDEF0(void* self) {
    __asm {
        push -1
        push 0x008911A4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x34]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00665810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004FFE30] sub_004FFE30 (95 bytes)
extern "C" int mem_00924EF4;
typedef bool (__cdecl *LessStr_004FFE30)(const void*, const void*);
extern "C" void* __cdecl fn_004FFE30(char* first, char* last, const void* val) {
    int count = (int)((last - first) / 36);
    while (count > 0) {
        int half = count / 2;
        char* mid = first + half * 36;
        if (((LessStr_004FFE30)mem_00924EF4)(mid, val)) {
            first = mid + 36;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}

// [0x004F4EA0] sub_004F4EA0 (41 bytes)
extern "C" void ext_004C50C0();
extern "C" int mem_0094CE80;
extern "C" float __fastcall fn_004F4EA0(void* self) {
    float x = ((float (__cdecl*)(void))ext_004C50C0)();
    if (x == 0.0f) {
        x = *(float*)&mem_0094CE80;
    }
    return x;
}

// [0x004F4ED0] sub_004F4ED0 (44 bytes)
extern "C" void ext_004F4EA0();
extern "C" void ext_006A7256();
extern "C" __declspec(naked) void __fastcall fn_004F4ED0(void* self) {
    __asm {
        sub esp, 0x8
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp qword ptr [esp]
        call ext_004F4EA0
        fdivr qword ptr [esp]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        call ext_006A7256
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x8
        ret
    }
}

// [0x004F0A90] sub_004F0A90 (102 bytes)
extern "C" void ext_00661980();

extern "C" __declspec(naked) void __fastcall fn_004F0A90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88f426
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x4]
        mov ecx, edi
        mov dword ptr [esi], 0x9443bc
        call ext_00661980
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x8], eax
        xor eax, eax
        mov dword ptr [esi], 0x94c14c
        mov dword ptr [edi], 0x94c0f4
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], eax
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004FDAA0] sub_004FDAA0 (114 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_004FDAA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        mov edi, dword ptr [esp + 0x20]
        xor eax, eax
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        je skip_vcall
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [esp + 0x20]
        push eax
        call edx
        jmp store_result
    skip_vcall:
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
    store_result:
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 0x1c], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x20], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x004FDE10] sub_004FDE10 (127 bytes)
extern "C" void ext_006657F0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_004FDE10(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -0x1
        push 0x8911a4
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x0
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi], 0x94ec8c
        mov dword ptr [esi + 0x14], ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        mov dword ptr [esp + 0x10], 0x0
        call eax
        push eax
        lea ecx, [esi + 0x18]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004FDB40] sub_004FDB40 (129 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void __cdecl fn_004FDB40(void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp ebx, dword ptr [esp + 0x10]
        je done_4FDB40
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        lea edi, [ebp + 0x1c]
        lea esi, [ebx + 0x20]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_4FDB40:
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea eax, [esi - 0x4]
        cmp eax, edi
        je skip_4FDB40
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je null1_4FDB40
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esi - 0x4]
        push eax
        call edx
null1_4FDB40:
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi], eax
        cmp dword ptr [edi + 0x4], 0
        je zero_4FDB40
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp store_4FDB40
zero_4FDB40:
        mov dword ptr [esp + 0x18], 0
        lea eax, [esp + 0x18]
store_4FDB40:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax
skip_4FDB40:
        add ebx, 0x24
        add esi, 0x24
        cmp ebx, dword ptr [esp + 0x1c]
        jne loop_4FDB40
        pop edi
        pop esi
        pop ebp
done_4FDB40:
        pop ebx
        pop ecx
        ret
    }
}

// [0x004F0250] sub_004F0250 (78 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004F0250(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        lea ecx, [esi + 0x18]
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x24], eax
        call ext_004EFDF0
        mov edi, dword ptr [esi + 0x10]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x8
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk1
        call ebp
    L_chk1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
    L_chk2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x004F0430] sub_004F0430 (105 bytes)
extern "C" void ext_004EFDF0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F0430(void* self) {
    __asm {
        push -1
        push 0x88f3bb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea edi, [esi + 0x18]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        call ext_004EFDF0
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 0x4], ebx
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x4
        cmp eax, ebx
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_free:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004F04A0] sub_004F04A0 (103 bytes)
extern "C" void ext_004EF8B0();
extern "C" void ext_004F0250();
extern "C" __declspec(naked) void __fastcall fn_004F04A0(void* self) {
    __asm {
        push -1
        push 0x88f3e6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi], 0x94c0c8
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        lea edi, [esi + 0x18]
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        call ext_004EF8B0
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        mov ecx, esi
        mov byte ptr [esp + 0x18], 0x1
        call ext_004F0250
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004F1430] sub_004F1430 (98 bytes)
extern "C" void ext_004F0430();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004F1430(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f5f1430_top:
        test esi, esi
        je f5f1430_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f5f1430_after1
    f5f1430_call1:
        call ebp
    f5f1430_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f5f1430_ret
        test esi, esi
        mov edi, ebx
        jne f5f1430_a
        call ebp
    f5f1430_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f5f1430_b
        call ebp
    f5f1430_b:
        add ebx, 0x4
        test esi, esi
        jne f5f1430_c
        call ebp
    f5f1430_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f5f1430_d
        call ebp
    f5f1430_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f5f1430_top
        mov ecx, edi
        call ext_004F0430
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f5f1430_top
    f5f1430_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004F1BD0] sub_004F1BD0 (121 bytes)
extern "C" void ext_004F1430();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004F1BD0(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004F1430
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004FDBD0] sub_004FDBD0 (137 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __cdecl fn_004FDBD0(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je ret_dest_
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea esi, [ebx + 0x20]
        lea edi, [ebp + 0x20]
    loop_top_:
        sub ebx, 0x24
        sub ebp, 0x24
        push ebx
        mov ecx, ebp
        sub esi, 0x24
        sub edi, 0x24
        call dword ptr [mem_00924FDC]
        lea eax, [edi - 0x4]
        lea ecx, [esi - 0x4]
        cmp eax, ecx
        je skip_body_
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je no_old_
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [edi - 0x4]
        push eax
        call edx
    no_old_:
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        cmp dword ptr [esi], 0x0
        je null_new_
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 0x4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        jmp store_
    null_new_:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
    store_:
        mov eax, dword ptr [eax]
        mov dword ptr [edi - 0x4], eax
    skip_body_:
        cmp ebx, dword ptr [esp + 0x14]
        jne loop_top_
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    ret_dest_:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x004FFE90] sub_004FFE90 (93 bytes)
extern "C" void ext_004FDBD0();

extern "C" __declspec(naked) int __cdecl fn_004FFE90(int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_004FDBD0
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004F0340] sub_004F0340 (138 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00493D90();

extern "C" __declspec(naked) void __fastcall fn_004F0340(void* self) {
    __asm {
        push ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], esi
        je L_invalid
        cmp edi, dword ptr [esp + 0x20]
        je L_ok
L_invalid:
        call dword ptr [mem_00925134]
L_ok:
        mov ebp, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x24]
        cmp ebp, eax
        je L_ret
        mov ecx, dword ptr [esi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x3
        cmp eax, ecx
        push ebx
        lea ebx, [ebp + 8*edx]
        je L_nocopy
        mov edx, ebp
        sub edx, eax
L_copy:
        mov edi, dword ptr [eax]
        mov dword ptr [edx + eax], edi
        mov edi, dword ptr [eax + 0x4]
        mov dword ptr [edx + eax + 0x4], edi
        add eax, 0x8
        cmp eax, ecx
        jne L_copy
L_nocopy:
        mov edi, dword ptr [esi + 0x8]
        cmp ebx, edi
        mov esi, ebx
        je L_nodtor
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_dtor:
        mov ecx, esi
        call ext_00493D90
        add esi, 0x8
        cmp esi, edi
        jne L_dtor
L_nodtor:
        mov eax, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x8], ebx
        pop ebx
L_ret:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ecx
        ret 0x14
    }
}

// [0x004F06C0] sub_004F06C0 (59 bytes)
extern "C" void ext_004F0340();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004F06C0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m4f06c0_ok1
        call ebp
    m4f06c0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4f06c0_ok2
        call ebp
    m4f06c0_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_004F0340
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004F0B10] sub_004F0B10 (143 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F0B10(void* self) {
    __asm {
        push -1
        push 0x88f462
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0x1
        call ext_004026E0
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_free:
        test esi, esi
        mov dword ptr [esi + 0x10], 0
        mov dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x18], 0
        mov dword ptr [esp + 0x14], 0xffffffff
        je null_path
        lea ecx, [esi + 0x4]
        call ext_0065F440
        pop esi
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
null_path:
        xor ecx, ecx
        call ext_0065F440
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004FFD90] sub_004FFD90 (145 bytes)
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __cdecl fn_004FFD90(char* first, char* last, char* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, dword ptr [esp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea edi, [ebx + 0x20]
        lea esi, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_loop:
        push ebx
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        lea eax, [esi - 0x4]
        lea ecx, [edi - 0x4]
        cmp eax, ecx
        je L_skip
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_nodp
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esi - 0x4]
        push eax
        call edx
    L_nodp:
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        cmp dword ptr [edi], 0x0
        je L_null
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [edi - 0x4]
        push eax
        lea eax, [esp + 0x18]
        push eax
        call edx
        jmp L_store
    L_null:
        mov dword ptr [esp + 0x1c], 0x0
        lea eax, [esp + 0x1c]
    L_store:
        mov eax, dword ptr [eax]
        mov dword ptr [esi - 0x4], eax
    L_skip:
        add ebx, 0x24
        add ebp, 0x24
        add esi, 0x24
        add edi, 0x24
        cmp ebx, dword ptr [esp + 0x18]
        jne L_loop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    L_ret_first:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}

// [0x004FDD70] sub_004FDD70 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_004FDD70(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa40528
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x94ec74
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004F71B0] sub_004F71B0 (157 bytes)
// [0x004F71B0] sub_004F71B0 (157 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_004C5010();
extern "C" void ext_004F4EA0();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_004F71B0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0x10], ebx
        call ext_0065C640
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        call ext_004F4EA0
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x24]
        push ecx
        fdiv dword ptr [esp + 0x10]
        mov ecx, esi
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_004C5010
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004F01A0] sub_004F01A0 (176 bytes)
extern "C" void ext_004EFB20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __cdecl fn_004F01A0(int* a1, int* a2) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        push esi
        push edi
        jne L_cnt1
        xor esi, esi
        jmp L_cnt2
L_cnt1:
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov esi, edx
        shr esi, 0x1f
        add esi, edx
L_cnt2:
        mov ebx, dword ptr [esp + 0x18]
        mov edi, dword ptr [ebx + 0x4]
        test edi, edi
        jne L_cnt3
        xor eax, eax
        jmp L_cmp
L_cnt3:
        mov ecx, dword ptr [ebx + 0x8]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
L_cmp:
        cmp esi, eax
        jne L_fail
        cmp edi, dword ptr [ebx + 0x8]
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov eax, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edi
        push ebx
        push edx
        push esi
        call ext_004EFB20
        add esp, 0x18
        test al, al
        je L_fail
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
L_fail:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x004FAB30] sub_004FAB30 (238 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005B11F0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004FAB30(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [eax + 0x14]
        mov ecx, dword ptr [ecx + 0x34]
        push ebp
        push esi
        push edi
        call ext_005B11F0
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        call eax
        mov edi, eax
        mov eax, dword ptr [esi + 8]
        test eax, eax
        je loc_4fab93
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 2
        je loc_4fab93
        cmp byte ptr [esi + 0x20], 0
        jne loc_4fab93
        mov esi, dword ptr [edi + 4]
        test esi, esi
        je loc_4fab93
        mov eax, dword ptr [edi + 8]
        mov edx, eax
        sub edx, esi
        sar edx, 2
        je loc_4fab93
        cmp esi, eax
        mov ebp, dword ptr [mem_00925134]
        jbe loc_4fab88
        call ebp
    loc_4fab88:
        cmp esi, dword ptr [edi + 8]
        jb loc_4fab8f
        call ebp
    loc_4fab8f:
        mov eax, dword ptr [esi]
        jmp loc_4fabcc

    loc_4fab93:
        call ext_00594000
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov eax, dword ptr [esi + 0x23c]
        add esi, 0x238
        test eax, eax
        je loc_4fabba
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 2
        jne loc_4fabbc
    loc_4fabba:
        call ebp
    loc_4fabbc:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx]
        test eax, eax
        je loc_4fabca
        add eax, 4
        jmp loc_4fabcc
    loc_4fabca:
        xor eax, eax

    loc_4fabcc:
        mov edi, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [edi + 0x3d0], eax
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je loc_4fabfb
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne loc_4fabfd
    loc_4fabfb:
        call ebp
    loc_4fabfd:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xac]
        mov ecx, ebx
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x004FD8A0] sub_004FD8A0 (251 bytes)
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F650;
extern "C" int mem_00A9F8D0;
extern "C" int mem_00A9F678;
extern "C" int mem_00A9F7E8;
extern "C" int mem_00A9F7D4;
extern "C" int mem_00A9F940;
extern "C" int mem_00A9F930;

extern "C" __declspec(naked) void __fastcall fn_004FD8A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F650]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F8D0]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 8]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F678]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x10]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F7E8]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x18]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F7D4]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x14]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F940]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esi + 0x1c]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9F930]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        add esi, 0x1e
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_0046F930();
// [0x004F40C0] sub_004F40C0 (276 bytes)
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" void ext_00594000();
extern "C" void ext_00666120();
extern "C" int mem_00AD89B4;
extern "C" int mem_009542B8;

extern "C" __declspec(naked) void __fastcall fn_004F40C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L1
        cmp dword ptr [mem_00AD89B4], 0
        jne L2
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
    L2:
        add dword ptr [mem_00AD89B4], 1
    L1:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L3
        mov ebx, dword ptr [edi + 0x38]
    L3:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [esp + 0x2c]
        mov byte ptr [eax + 4], 1
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 0x14]
        mov esi, dword ptr [eax + 0x34]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xec]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L4
        push ebx
        mov ecx, edi
        call ext_00530290
    L4:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        pop ebx
        je L5
        sub dword ptr [mem_00AD89B4], 1
        jne L5
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
    L5:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    }
}

// [0x004F9EA0] sub_004F9EA0 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEA5B0;
extern "C" int mem_00AEA594;
extern "C" __declspec(naked) void __fastcall fn_004F9EA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008908be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEA5B0], al
        jne short L_done_004F9EA0
        or dword ptr [mem_00AEA5B0], eax
        push 0x00a3ffe0
        push offset mem_00AEA594
        mov dword ptr [esp + 0x10], 0
        call ext_00662610
        push 0x00919a90
        call ext_006A6C87
        add esp, 0Ch
    L_done_004F9EA0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEA594
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004FDCA0] sub_004FDCA0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEB248;
extern "C" int mem_00AEB22C;
extern "C" __declspec(naked) void __fastcall fn_004FDCA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x0089115e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB248], al
        jne short L_done_004FDCA0
        or dword ptr [mem_00AEB248], eax
        push 0x00a40484
        push offset mem_00AEB22C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00919c80
        call ext_006A6C87
        add esp, 0x0c
    L_done_004FDCA0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB22C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x004FDD00] sub_004FDD00 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEB268;
extern "C" int mem_00AEB24C;
extern "C" __declspec(naked) void __fastcall fn_004FDD00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x0089117e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AEB268], al
        jne short L_done_004FDD00
        or dword ptr [mem_00AEB268], eax
        push 0x00a353f8
        push offset mem_00AEB24C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00919c90
        call ext_006A6C87
        add esp, 0x0c
    L_done_004FDD00:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AEB24C
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x004F5040] sub_004F5040 (289 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_004C5010();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_0067DE10();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();

extern "C" __declspec(naked) void __fastcall fn_004F5040(void* self, int edx_unused, float a, float b, float c) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xa8
        _emit 0x03
        _emit 0x89
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, [eax+0x258]
        lea edi, [eax+0x258]
        mov eax, [ecx]
        mov edx, [eax+0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov [esp+0x20], ebx
        call ext_0065C640
        fld dword ptr [esp+0x44]
        mov dword ptr [esp+0x38], 0
        call ext_006A6EB0
        fstp dword ptr [esp+0xc]
        fld dword ptr [esp+0xc]
        fstp dword ptr [esp+0x18]
        fld dword ptr [esp+0x48]
        call ext_006A6EB0
        fstp dword ptr [esp+0x10]
        fld dword ptr [esp+0x10]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [esp+0x44]
        call ext_006A6EAA
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x44]
        fstp dword ptr [esp+0x14]
        fld dword ptr [esp+0xc]
        fstp dword ptr [esp+0x10]
        fld dword ptr [esp+0x48]
        call ext_006A6EAA
        fstp dword ptr [esp+0x44]
        fld dword ptr [esp+0x10]
        mov ecx, esi
        fld dword ptr [esp+0x40]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fmul dword ptr [esp+0x44]
        fstp dword ptr [esp+0x24]
        fld dword ptr [esp+0x14]
        fmul st, st(1)
        fstp dword ptr [esp+0x28]
        fmul dword ptr [esp+0x18]
        fmul dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x24]
        fstp dword ptr [esi]
        fld dword ptr [esp+0x28]
        fstp dword ptr [esi+4]
        fld dword ptr [esp+0x2c]
        fstp dword ptr [esi+8]
        call ext_0067DE10
        fld dword ptr [esp+0x40]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_004C5010
        mov ecx, edi
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp+0x38], -1
        call ext_0065C650
        mov ecx, [esp+0x30]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x30
        ret 0xc
    }
}

// [0x004F7110] sub_004F7110 (68 bytes)
extern "C" void ext_004F4EA0();
extern "C" void ext_004F4D90();
extern "C" void ext_004F5040();
extern "C" double mem_0094DDB8;
extern "C" __declspec(naked) void __fastcall fn_004F7110(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_004F4EA0
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        call ext_004F4D90
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        mov ecx, esi
        fld dword ptr [esp + 0x18]
        fmul qword ptr [mem_0094DDB8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_004F5040
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004F7160] sub_004F7160 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F7160(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        call ext_004F4EA0
        fstp dword ptr [esp + 0x8]
        mov ecx, esi
        call ext_004F4ED0
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        sub esp, 0xc
        fmul qword ptr [mem_0094DDB8]
        mov ecx, esi
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call ext_004F5040
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x004F3690] sub_004F3690 (297 bytes)
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" void ext_00594000();
extern "C" void ext_00666120();
extern "C" void ext_006AD190();
extern "C" int mem_00AD89B4;
extern "C" int mem_009542B8;

extern "C" __declspec(naked) void __fastcall fn_004F3690(void* self) {
    __asm {
        push -1
        push 0x88fe68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ebp, dword ptr [eax + 0x14]
        test ebp, ebp
        mov dword ptr [esp + 8], ebp
        mov byte ptr [esp + 0xc], 1
        je L_004F36DD
        cmp dword ptr [mem_00AD89B4], 0
        jne L_004F36D6
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 1
        call ext_00472350
    L_004F36D6:
        add dword ptr [mem_00AD89B4], 1
    L_004F36DD:
        push ebx
        push edi
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        mov ebx, dword ptr [mem_009542B8]
        mov dword ptr [esp + 0x20], 0
        call eax
        mov edi, eax
        test edi, edi
        je L_004F3709
        mov ebx, dword ptr [edi + 0x38]
    L_004F3709:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd4]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 0x38]
        call ext_00666120
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov byte ptr [eax + 4], 1
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edx + 0x14]
        call ext_006AD190
        mov ecx, dword ptr [esp + 0x2c]
        mov esi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        cmp byte ptr [esp + 0x30], 0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esi]
        push 1
        push ecx
        mov ecx, esi
        je L_004F3764
        mov edx, dword ptr [eax + 0xe4]
        jmp L_004F376A
    L_004F3764:
        mov edx, dword ptr [eax + 0xe8]
    L_004F376A:
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x3c]
        mov ecx, esi
        call edx
        test edi, edi
        je L_004F3781
        push ebx
        mov ecx, edi
        call ext_00530290
    L_004F3781:
        test ebp, ebp
        pop edi
        mov dword ptr [esp + 0x1c], -1
        pop ebx
        je L_004F37A6
        sub dword ptr [mem_00AD89B4], 1
        jne L_004F37A6
        mov ecx, ebp
        mov byte ptr [ebp + 0x153], 0
        call ext_0046F930
    L_004F37A6:
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0xc
    }
}

// [0x004FA2F0] sub_004FA2F0 (57 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004F9EA0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __fastcall fn_004FA2F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        sub esp, 0x44
        push esi
        mov esi, dword ptr [esp + 0x4c]
        push esi
        call edx
        test eax, eax
        jne L_004FA322
        push esi
        call ext_004F9EA0
        push eax
        lea ecx, [esp + 0xc]
        call ext_0041FF30
        push 0x9d3748
        lea eax, [esp + 0x8]
        push eax
        call ext_006A6DD2
    L_004FA322:
        pop esi
        add esp, 0x44
        ret 4
    }
}

// [0x004FFF70] sub_004FFF70 (45 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0067AFB0();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_004FFF70(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr [mem_00924FA0]
        push 0x94edbc
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, esi
        pop esi
        jmp ext_0067AFB0
    }
}

// [0x004FFFA0] sub_004FFFA0 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FFFA0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00924E90]
        push esi
        mov esi, ecx
        push eax
        mov byte ptr [esi + 0xa8], 0x1
        mov ecx, dword ptr [mem_00924FA0]
        push 0x94edd0
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, esi
        pop esi
        jmp ext_0067AFB0
    }
}

// [0x004FFFE0] sub_004FFFE0 (70 bytes)
extern "C" void ext_0067B050();
extern "C" int mem_00AEB918;
extern "C" __declspec(naked) void __fastcall fn_004FFFE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x4], 0
        je done
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x94ede4
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov byte ptr [mem_00AEB918], 1
        mov ecx, esi
        mov byte ptr [esi + 0x4], 0
        call ext_0067B050
        mov byte ptr [mem_00AEB918], 0
done:
        pop esi
        ret
    }
}

// [0x004FFEF0] sub_004FFEF0 (107 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00508BA0();
extern "C" void ext_00508BC0();
extern "C" void ext_0050AD20();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_004FFEF0(void* self) {
    __asm {
        cmp byte ptr [esp + 4], 0
        push ebx
        mov ebx, ecx
        je loc_4fff4c
        push edi
        lea edi, [ebx + 0xa4]
        mov ecx, edi
        call ext_00508BA0
        test eax, eax
        je loc_4fff4b
        mov eax, dword ptr [ebx + 0x13c]
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push esi
        mov esi, dword ptr [eax + 8]
        push ecx
        push esi
        push 0x94edac
        push edx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        mov ecx, edi
        call ext_00508BC0
        pop esi
    loc_4fff4b:
        pop edi
    loc_4fff4c:
        lea ecx, [ebx + 0xa4]
        call ext_0050AD20
        pop ebx
        ret 4
    }
}
