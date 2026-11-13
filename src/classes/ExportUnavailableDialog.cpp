// Decompiled translation unit: src/classes/ExportUnavailableDialog.cpp

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" void ext_006A5F44();

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_00461630(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x11c
        push ecx
        push 1
        push eax
        call ext_006A5F44
        ret 0x4
    }
}

extern "C" int mem_00ACB004;
extern "C" int mem_00A2ECDC;
extern "C" int mem_00A2ECE0;

// [0x00419770] ExportUnavailableDialog::vfunc_7_off_74 (40 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00419770(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00ACB004], al
        jne done
        or dword ptr [mem_00ACB004], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A2ECDC], eax
        mov dword ptr [mem_00A2ECE0], ecx
    done:
        mov eax, 0xa2ecd0
        ret
    }
}

extern "C" void __fastcall ext_006A6244(void* self);
extern "C" void ext_0040F230();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D0;
extern "C" int mem_0093A0E8;

// [0x00419730] ExportUnavailableDialog::vfunc_84 (52 bytes)
extern "C" int __fastcall fn_00419730(void* self) {
    ext_006A6244(self);
    ((void (__thiscall*)(void*, int, int, int, int))ext_0040F230)(
        (char*)self + 0x11c, mem_0093A0CC, mem_0093A0E8, mem_0093A0D0, mem_0093A0C8);
    return 1;
}
