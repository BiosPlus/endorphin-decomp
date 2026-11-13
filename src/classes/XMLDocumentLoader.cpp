// Decompiled translation unit: src/classes/XMLDocumentLoader.cpp

extern "C" int mem_00928B5D;
extern "C" int mem_00936128;
extern "C" void ext_006408C0();

// [0x00682100] XMLDocumentLoader::vfunc_4 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00682100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 14h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        call edx
        test al, al
        mov eax, offset mem_00928B5D
        jne short L_nonzero
        mov eax, offset mem_00936128
    L_nonzero:
        push 0
        push eax
        mov eax, dword ptr [esp + 24h]
        push eax
        lea ecx, [esp + 10h]
        call ext_006408C0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 14h]
        lea eax, [esp + 4]
        push eax
        call edx
        pop esi
        add esp, 14h
        ret 8
    }
}

extern "C" int mem_008B5118;
extern "C" int mem_00B53B30;
extern "C" int mem_00B53A34;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AF0;
extern "C" void ext_00640390();
extern "C" void ext_00870E10();
extern "C" void ext_00870E30();
extern "C" void ext_008726F0();

// [0x00682020] XMLDocumentLoader::vfunc_2 (222 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00682020(void* self, int edx_unused, const char* a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008B5118
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push ebx
        mov ebx, dword ptr [esp + 34h]
        push esi
        mov esi, dword ptr [esp + 40h]
        test esi, esi
        push edi
        mov edi, ecx
        jne short L_68205D
        mov eax, ebx
        lea edx, [eax + 1]
        mov edi, edi
    L_682050:
        mov cl, byte ptr [eax]
        add eax, 1
        test cl, cl
        jne short L_682050
        sub eax, edx
        mov esi, eax
    L_68205D:
        lea ecx, [esp + 0Ch]
        call ext_00870E10
        push esi
        push ebx
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 3Ch], 0
        call ext_008726F0
        mov ecx, dword ptr [edi + 8]
        mov esi, eax
        cmp esi, ecx
        je short L_68208E
        test ecx, ecx
        je short L_68208E
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_68208E:
        mov eax, esi
        mov dword ptr [edi + 8], esi
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        jne short L_68209F
        mov eax, offset mem_00B53B30
    L_68209F:
        mov ecx, dword ptr [esp + 40h]
        test ecx, ecx
        je short L_6820D4
        push 0
        push ecx
        mov ecx, eax
        call ext_00640390
        cmp eax, offset mem_00B53A34
        je short L_6820D7
        cmp eax, offset mem_00B53B30
        je short L_6820D7
        cmp eax, offset mem_00B53AB0
        je short L_6820D7
        cmp eax, offset mem_00B53A70
        je short L_6820D7
        cmp eax, offset mem_00B53AF0
        je short L_6820D7
    L_6820D4:
        mov dword ptr [edi + 4], eax
    L_6820D7:
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 34h], -1
        call ext_00870E30
        mov ecx, dword ptr [esp + 2Ch]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 2Ch
        ret 0Ch
    }
}
