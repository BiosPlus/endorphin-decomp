// Decompiled translation unit: src/classes/HasBufferedTM.cpp

// [0x0065D190] HasBufferedTM::vfunc_2 (138 bytes)
extern "C" void ext_006A6C87(int);
extern "C" int mem_00B58EE0;
extern "C" float mem_00B58EA0;
extern "C" float mem_00B58EA4;
extern "C" float mem_00B58EA8;
extern "C" float mem_00B58EAC;
extern "C" float mem_00B58EB0;
extern "C" float mem_00B58EB4;
extern "C" float mem_00B58EB8;
extern "C" float mem_00B58EBC;
extern "C" float mem_00B58EC0;
extern "C" float mem_00B58EC4;
extern "C" float mem_00B58EC8;
extern "C" float mem_00B58ECC;
extern "C" float mem_00B58ED0;
extern "C" float mem_00B58ED4;
extern "C" float mem_00B58ED8;
extern "C" float mem_00B58EDC;

extern "C" __declspec(naked) void* __cdecl fn_0065D190(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B58EE0], al
        jne early_out
        fld1
        or dword ptr [mem_00B58EE0], eax
        fst dword ptr [mem_00B58EA0]
        push 0x9213a0
        fldz
        fst dword ptr [mem_00B58EA4]
        fst dword ptr [mem_00B58EA8]
        fst dword ptr [mem_00B58EAC]
        fst dword ptr [mem_00B58EB0]
        fst dword ptr [mem_00B58EB8]
        fst dword ptr [mem_00B58EBC]
        fst dword ptr [mem_00B58EC0]
        fst dword ptr [mem_00B58EC4]
        fst dword ptr [mem_00B58ECC]
        fst dword ptr [mem_00B58ED0]
        fst dword ptr [mem_00B58ED4]
        fstp dword ptr [mem_00B58ED8]
        fst dword ptr [mem_00B58EB4]
        fst dword ptr [mem_00B58EC8]
        fstp dword ptr [mem_00B58EDC]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B58EA0
        ret
    }
}

// [0x0065D220] HasBufferedTM::vfunc_1 (138 bytes)
extern "C" int mem_00B58F28;
extern "C" float mem_00B58EE8;
extern "C" float mem_00B58EEC;
extern "C" float mem_00B58EF0;
extern "C" float mem_00B58EF4;
extern "C" float mem_00B58EF8;
extern "C" float mem_00B58EFC;
extern "C" float mem_00B58F00;
extern "C" float mem_00B58F04;
extern "C" float mem_00B58F08;
extern "C" float mem_00B58F0C;
extern "C" float mem_00B58F10;
extern "C" float mem_00B58F14;
extern "C" float mem_00B58F18;
extern "C" float mem_00B58F1C;
extern "C" float mem_00B58F20;
extern "C" float mem_00B58F24;

extern "C" __declspec(naked) void* __cdecl fn_0065D220(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B58F28], al
        jne early_out
        fld1
        or dword ptr [mem_00B58F28], eax
        fst dword ptr [mem_00B58EE8]
        push 0x9213b0
        fldz
        fst dword ptr [mem_00B58EEC]
        fst dword ptr [mem_00B58EF0]
        fst dword ptr [mem_00B58EF4]
        fst dword ptr [mem_00B58EF8]
        fst dword ptr [mem_00B58F00]
        fst dword ptr [mem_00B58F04]
        fst dword ptr [mem_00B58F08]
        fst dword ptr [mem_00B58F0C]
        fst dword ptr [mem_00B58F14]
        fst dword ptr [mem_00B58F18]
        fst dword ptr [mem_00B58F1C]
        fstp dword ptr [mem_00B58F20]
        fst dword ptr [mem_00B58EFC]
        fst dword ptr [mem_00B58F10]
        fstp dword ptr [mem_00B58F24]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B58EE8
        ret
    }
}
