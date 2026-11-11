// Decompiled translation unit: src/Properties/PropInPlaceSpinbuttonEdit.cpp

// [0x00448920] Properties::PropInPlaceSpinbuttonEdit::vfunc_66 (45 bytes)
extern "C" void ext_006A5DA0();

extern "C" __declspec(naked) void __fastcall fn_00448920(void* self) {
    __asm {
        mov edx, dword ptr [esp + 4]
        cmp dword ptr [edx + 4], 0x100
        jne L_store
        lea eax, [ecx + 0x5c]
        test eax, eax
        jne L_load
        mov dword ptr [edx], eax
        mov dword ptr [esp + 4], edx
        jmp ext_006A5DA0
    L_load:
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [edx], eax
    L_store:
        mov dword ptr [esp + 4], edx
        jmp ext_006A5DA0
    }
}

// [0x00448B70] Properties::PropInPlaceSpinbuttonEdit::vfunc_2_off_54 (113 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_00665870();
extern "C" void ext_00665890();
extern "C" void ext_006AD180();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_00B5D200;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00448B70(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov byte ptr [esi + 0x9c], bl
        call ext_00665870
        mov ecx, eax
        call ext_00665890
        mov eax, dword ptr [esi + 0x78]
        cmp eax, ebx
        je L_end
        mov eax, dword ptr [eax + 0x19c]
        cmp eax, dword ptr [esi + 0x98]
        jne L_end
        mov ecx, dword ptr [esi + 0x74]
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [esi - 0x34]
        push ebx
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x74]
        call ext_006AD180
        add eax, 0x40
        push eax
        lea ecx, [esi + 0x90]
        call ext_0041CF50
    L_end:
        mov byte ptr [esi + 0x8c], bl
        pop esi
        pop ebx
        ret 4
    }
}
