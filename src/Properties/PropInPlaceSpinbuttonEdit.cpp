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

// [0x00448F30] Properties::PropInPlaceSpinbuttonEdit::vfunc_0_off_54 (172 bytes)
extern "C" void ext_00448C90();
extern "C" void ext_00448DD0();
extern "C" void ext_00665880();

extern "C" __declspec(naked) void __fastcall fn_00448F30(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x9c], 0
        je L_proceed
        mov byte ptr [esi + 0x9c], 0
        pop esi
        ret 4
    L_proceed:
        push edi
        call ext_00665870
        mov ecx, eax
        call ext_00665880
        mov ecx, dword ptr [esi + 0x74]
        call ext_006AD180
        mov edi, eax
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 0x48]
        cmp eax, 7
        je L_call_c90
        cmp eax, 8
        je L_call_c90
        push 0
        lea ecx, [esi - 0x54]
        call ext_00448DD0
        jmp L_after_call
    L_call_c90:
        push 0
        lea ecx, [esi - 0x54]
        call ext_00448C90
    L_after_call:
        cmp byte ptr [esi + 0x8c], 0
        lea ecx, [esi + 0x90]
        jne L_has_8c
        add edi, 0x40
        push edi
        call ext_0041CF50
        mov byte ptr [esi + 0x8c], 1
        jmp L_send_msg
    L_has_8c:
        push ecx
        lea ecx, [edi + 0x40]
        call ext_0041CF50
    L_send_msg:
        mov ecx, dword ptr [esi + 0x74]
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov edx, dword ptr [mem_00B5D200]
        push 0
        push eax
        mov eax, dword ptr [esi - 0x34]
        push edx
        push eax
        call dword ptr [mem_00925694]
        pop edi
        mov byte ptr [esi + 0x9c], 1
        pop esi
        ret 4
    }
}
