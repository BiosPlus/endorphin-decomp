// Decompiled translation unit: src/classes/NMColourSwatch.cpp

extern "C" void ext_006A5E5A();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_00925718;
extern "C" int mem_00925690;
extern "C" int mem_00934120;

// [0x0044A570] NMColourSwatch::vfunc_84 (188 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044A570(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        push offset mem_00934120
        mov ecx, esi
        mov edi, eax
        call ext_006A5F50
        mov eax, dword ptr [esi + 0x20]
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push 0x1
        push 0x80
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 0x0
        push 0x80
        push ecx
        call ebx
        lea edx, [esp + 0xc]
        push edx
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        push 0x1
        mov ecx, edx
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov ebx, edi
        sub ebx, ecx
        sub eax, edx
        add eax, dword ptr [esp + 0x18]
        sub ecx, edi
        add ecx, dword ptr [esp + 0x14]
        push ebx
        push eax
        push ecx
        mov ecx, esi
        call ext_006A5E5A
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x18
        ret
    }
}
