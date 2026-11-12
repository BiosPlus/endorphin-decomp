// Decompiled translation unit: src/classes/NMCIO.cpp

// [0x0056D920] NMCIO::vfunc_13 (61 bytes)
extern "C" void ext_006619D0();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_0056D920(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x420]
        mov eax, dword ptr [ecx + 0x4]
        push edi
        add eax, 0xcc
        push eax
        call ext_006619D0
        mov ecx, dword ptr [esi + 0x418]
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0xc]
        push 1
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x418]
        mov edx, dword ptr [edi + 0x24]
        push eax
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0056D860] NMCIO::vfunc_10 (190 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00B37F40;

extern "C" __declspec(naked) void __fastcall fn_0056D860(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        mov edx, dword ptr [esp + 0x48]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x414]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x1c]
        push edx
        call eax
        push 0xb3b084
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE0]
        push 0xb3b1d4
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esi + 0x414]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x5c]
        lea ecx, [eax + 0x4]
        lea eax, [esp + 0x20]
        push eax
        mov byte ptr [esp + 0x48], 0x1
        call edx
        mov esi, dword ptr [esi + 0x414]
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x60]
        lea ecx, [esi + 0x4]
        lea edx, [esp + 0x4]
        push edx
        call eax
        add dword ptr [mem_00B37F40], 0x1
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}
