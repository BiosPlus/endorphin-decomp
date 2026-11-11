// Decompiled translation unit: src/NMData/Marker.cpp

extern "C" __declspec(dllimport) void __fastcall imp_00924ea8(void* str);
extern "C" void __fastcall fn_0058A1A0(void* self);

// [0x00587F70] NMData::Marker::vfunc_33 (33 bytes)
extern "C" void __fastcall fn_00587F70(char* self) {
    *(int*)(self + 0x174) = 0;
    imp_00924ea8(self + 0x154);
    fn_0058A1A0(self);
}

// [0x00870930] NMData::Marker::vfunc_34 (116 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();

extern "C" __declspec(naked) int __fastcall fn_00870930(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0891da8h
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je short L_null
        lea eax, [esi + 0ch]
        jmp short L_cont
    L_null:
        xor eax, eax
    L_cont:
        push 0
        lea ecx, [esi + 4]
        push eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 2ch]
        call edx
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0d8h]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 24h]
        push eax
        call ext_00493E40
        mov edi, eax
        mov dword ptr [esp + 18h], edi
        push edi
        lea ecx, [esi + 0ch]
        mov dword ptr [esp + 14h], 0
        call ext_00528B90
        mov ecx, dword ptr [esp + 8]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0ch
        ret 4
    }
}
