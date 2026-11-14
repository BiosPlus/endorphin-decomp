// Decompiled translation unit: src/classes/VMCActionSaveDialog.cpp

// [0x00468040] VMCActionSaveDialog::vfunc_90 (303 bytes)
extern "C" void ext_006A6B4A();
extern "C" void ext_00447F20();
extern "C" void ext_00447FA0();
extern "C" void ext_004481F0();
extern "C" void ext_00594000();
extern "C" void ext_00598B10();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5F92();
extern "C" void ext_006A6454();
extern "C" void ext_006A6B44();
extern "C" int mem_00925694;
extern "C" int mem_00ACDB40;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009255E4;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_00468040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x881ce7
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x13c
        push esi
        push 0x431
        mov esi, ecx
        call ext_006A6B4A
        test eax, eax
        je L_468152
        mov eax, dword ptr [eax + 0x20]
        push 0x0
        push 0x0
        push 0xf0
        push eax
        call dword ptr [mem_00925694]
        test eax, eax
        je L_468152
        push 0x0
        lea ecx, [esp + 0x24]
        call ext_004481F0
        mov ecx, dword ptr [mem_00ACDB40]
        push ecx
        push 0x16a
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x150], 0x0
        call ext_006A5F92
        push 0x939cf4
        lea ecx, [esp + 0x24]
        call ext_006A5F50
        push 0x939f64
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x14c], 0x1
        call ext_00447FA0
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x148], 0x0
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x40]
        push eax
        call dword ptr [mem_009255E4]
        push 0x0
        lea ecx, [esp + 0x24]
        call ext_006A6454
        push 0x5
        lea ecx, [esp + 0x24]
        call ext_006A5E72
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        call dword ptr [mem_0092568C]
        lea edx, [esp + 0x94]
        push edx
        call ext_00594000
        mov ecx, eax
        call ext_00598B10
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x148], 0xffffffff
        call ext_00447F20
L_468152:
        mov ecx, esi
        call ext_006A6B44
        mov ecx, dword ptr [esp + 0x140]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x148
        ret
    }
}
