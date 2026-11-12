// Decompiled translation unit: src/classes/NMColourButton.cpp

extern "C" void ext_006A5F4A();
extern "C" void ext_006A6004();
extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" int mem_009256C8;
extern "C" int mem_00925658;
extern "C" int mem_009242FC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x0044A470] NMColourButton::vfunc_80 (242 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044A470(void* self) {
    __asm {
        push -1
        push 0x87cee9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        test byte ptr [eax + 0x10], 1
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, 0x810
        je L_0044A4A0
        mov ecx, 0xa10
    L_0044A4A0:
        push ecx
        lea ebx, [eax + 0x1c]
        mov eax, dword ptr [eax + 0x18]
        push 4
        push ebx
        push eax
        call dword ptr [mem_009256C8]
        mov ecx, dword ptr [edi + 0x20]
        push ecx
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edx, dword ptr [edi + 0x54]
        mov esi, eax
        push edx
        push ebx
        mov ecx, esi
        call ext_006A6172
        lea ecx, [esp + 0x24]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x20], 0
        call ext_006A5F4A
        push 1
        mov ecx, esi
        call ext_006A6010
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x38]
        mov ebp, eax
        mov eax, dword ptr [edi + 0x58]
        push eax
        mov ecx, esi
        call edx
        mov edi, eax
        mov eax, dword ptr [esi]
        push 1
        push ebx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [edx + 0x70]
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        push edi
        mov ecx, esi
        call eax
        push ebp
        mov ecx, esi
        call ext_006A6010
        lea ecx, [esp + 0x24]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}
