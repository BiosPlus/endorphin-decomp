// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/WaitState.cpp

extern "C" void ext_0043CD80();
extern "C" void ext_0043CA00();
extern "C" void ext_0043C900();
extern "C" void ext_0043C980();
extern "C" void ext_0043D900();
extern "C" void ext_0043E0F0();
extern "C" void ext_004429C0();
extern "C" void ext_0043C9D0();
extern "C" void ext_0043D620();
extern "C" void ext_006A60D0();
extern "C" void ext_0043CD60();
extern "C" void ext_0043CDA0();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043E140();
extern "C" void ext_0041C880();
extern "C" void ext_0043C950();
extern "C" int mem_00925688;
extern "C" int mem_00925718;
extern "C" int mem_0092570C;
extern "C" int mem_009256E4;

// [0x004432A0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_19 (36 bytes)
extern "C" unsigned char __fastcall fn_004432A0(void* self) {
    unsigned char* s = (unsigned char*)self;
    void* a = *(void**)(s + 0x8);
    ((void (__fastcall*)(void*))ext_0043CD80)(a);
    void* b = *(void**)(s + 0x8);
    s[0xC] = 0;
    void* wnd = *(void**)((unsigned char*)b + 0x20);
    ((void (__stdcall*)(void*, int, int))mem_00925688)(wnd, 0, 1);
    return 0;
}

// [0x00442AF0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_13 (42 bytes)
extern "C" unsigned char __fastcall fn_00442AF0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    unsigned char* s = (unsigned char*)self;
    ((void (__fastcall*)(void*))ext_004429C0)(self);
    ((void (__fastcall*)(void*, int, int, int, int, int))ext_0043C9D0)(*(void**)(s + 0x8), a2, a1, a2, a3, a4);
    return 1;
}

// [0x004429F0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_4 (77 bytes)
extern "C" unsigned char __fastcall fn_004429F0(void* self, int edx_unused, int a1, int a2, int a3) {
    unsigned char* s = (unsigned char*)self;
    if (a2 >= *(int*)(*(unsigned char**)(s + 0x8) + 0xfc)) goto done;
    {
        void* r = ((void* (__thiscall*)(void*, int*))ext_0043D620)(*(void**)(s + 0x8), &a2);
        if (!r) goto done;
        if (*(int*)((unsigned char*)r + 0x14) != *(int*)(s + 0x10)) goto done;
        void* c = *(void**)(s + 0x8);
        void** vt = *(void***)c;
        ((void (__thiscall*)(void*, int*, int))(*(void**)((unsigned char*)vt + 0x14c)))(c, &a2, a1);
    }
done:
    ((void (__thiscall*)(void*))ext_006A60D0)(*(void**)(s + 0x8));
    return 1;
}

// [0x00443180] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_5 (119 bytes)
extern "C" unsigned char __fastcall fn_00443180(void* self, int edx_unused, int a1, int a2, int a3) {
    unsigned char* s = (unsigned char*)self;
    ((void (__fastcall*)(void*))ext_004429C0)(self);
    void* r = ((void* (__thiscall*)(void*, int*))ext_0043D900)(*(void**)(s + 0x8), &a2);
    if (r) {
        ((void (__thiscall*)(void*, void*, int, int, int))ext_0043C980)(*(void**)(s + 0x8), r, a1, a2, a3);
        void* c = *(void**)(s + 0x8);
        void* wnd = *(void**)((unsigned char*)c + 0x20);
        ((void (__stdcall*)(void*, int, int))mem_00925688)(wnd, 0, 1);
    } else {
        r = ((void* (__thiscall*)(void*, int*))ext_0043D620)(*(void**)(s + 0x8), &a2);
        if (r) {
            ((void (__thiscall*)(void*, void*, int, int, int))ext_0043E0F0)(*(void**)(s + 0x8), r, a1, a2, a3);
        }
    }
    return 1;
}

// [0x00443200] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_12 (153 bytes)
extern "C" __declspec(naked) void __fastcall fn_00443200(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        cmp byte ptr [eax + 190h], 0
        je L_end
        push edi
        call ext_004429C0
        mov ecx, dword ptr [esi + 8]
        push 1
        mov byte ptr [esi + 0Ch], 1
        mov edx, dword ptr [ecx + 20h]
        push 0
        push edx
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 8]
        call ext_0043CA00
        mov ecx, dword ptr [esi + 8]
        lea eax, [esp + 10h]
        push eax
        xor edi, edi
        call ext_0043D900
        test eax, eax
        je L_skip
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0Ch]
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, eax
        call edx
        mov edi, eax
L_skip:
        mov ecx, dword ptr [esi + 8]
        push edi
        call ext_0043C900
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [ecx + 0FCh]
        pop edi
        jge L_end
        test byte ptr [esp + 8], 1
        je L_end
        lea edx, [esp + 0Ch]
        push edx
        call ext_0043D620
        test eax, eax
        je L_end
        mov ecx, dword ptr [eax + 14h]
        cmp ecx, dword ptr [esi + 10h]
        jne L_end
        mov byte ptr [eax + 38h], 1
L_end:
        mov al, 1
        pop esi
        ret 0Ch
    }
}

// [0x00442DC0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_20 (167 bytes)
extern "C" __declspec(naked) void __fastcall fn_00442DC0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0Dh], 0
        mov ecx, dword ptr [esi + 8]
        je L_else
        push 0
        call ext_0043CDA0
        mov ecx, dword ptr [esi + 8]
        call ext_0043CD80
        mov byte ptr [esi + 0Dh], 0
        jmp L_after
L_else:
        call ext_0043CD80
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 16Ch]
        push eax
        call ext_0043CD60
        mov ecx, dword ptr [esi + 8]
        push 1
        call ext_0043CDA0
        mov byte ptr [esi + 0Dh], 1
L_after:
        lea ecx, [esp + 4]
        push ecx
        call dword ptr [mem_00925718]
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 20h]
        lea edx, [esp + 4]
        push edx
        push ecx
        call dword ptr [mem_0092570C]
        push 1
        call dword ptr [mem_009256E4]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esp + 4]
        test ax, ax
        setl al
        cmp edx, dword ptr [ecx + 0FCh]
        jge L_ret
        test al, al
        je L_ret
        lea eax, [esp + 4]
        push eax
        call ext_0043D620
        test eax, eax
        je L_ret
        mov ecx, dword ptr [eax + 14h]
        cmp ecx, dword ptr [esi + 10h]
        jne L_ret
        mov byte ptr [eax + 38h], 1
L_ret:
        mov al, 1
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x00442B20] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_18 (51 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00442B20(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0Ch], 0
        je L_ret
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        add eax, 14h
        mov eax, dword ptr [eax]
        push eax
        call ext_0043CDD0
        mov ecx, dword ptr [esp + 8]
        sub esp, 8
        fstp qword ptr [esp]
        push ecx
        mov ecx, dword ptr [esi + 8]
        call ext_0043E140
L_ret:
        xor al, al
        pop esi
        ret 4
    }
}

// [0x004430A0] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_7 (221 bytes)
extern "C" void ext_0043C9B0();
extern "C" void ext_0043CEB0();
extern "C" void ext_0043D620();
extern "C" void ext_0043F460();
extern "C" void ext_004407B0();
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_004430A0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_004429C0
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [esp + 0x10]
        push eax
        call ext_0043D900
        mov edi, eax
        test edi, edi
        je L_443140
        test byte ptr [esp + 0xc], 0x8
        jne L_443140
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 0xa0], edi
        cmp byte ptr [edi + 0x88], 0
        jne L_4430EB
        cmp byte ptr [edi + 0x8e], 0
        je L_4430EB
        mov ecx, dword ptr [esi + 0x8]
        push edi
        call ext_0043F460
L_4430EB:
        mov ecx, dword ptr [esi + 0x8]
        push 0
        call ext_0043C9B0
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0x20]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx + 0x20]
        push edx
        call dword ptr [mem_0092568C]
        mov ecx, edi
        call ext_004407B0
        test eax, eax
        je L_443176
        mov ecx, edi
        call ext_004407B0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push edi
        mov ecx, eax
        call edx
        pop edi
        mov al, 1
        pop esi
        ret 0x0c
L_443140:
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [esp + 0x10]
        push eax
        call ext_0043D620
        mov edi, eax
        test edi, edi
        je L_443176
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        call ext_0043CEB0
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [ebx + 0x1c]
        push eax
        mov ecx, edi
        call edx
        pop ebx
L_443176:
        pop edi
        mov al, 1
        pop esi
        ret 0x0c
    }
}

// [0x00442A40] MultiTrackView::MultiTrackViewStates::WaitState::vfunc_6 (161 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00442A40(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        call ext_004429C0
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [ecx + 0FCh]
        jg L_big
        lea edx, [esp + 10h]
        push edx
        call ext_0043D620
        mov ecx, dword ptr [esi + 8]
        mov ebx, dword ptr [esp + 0Ch]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 14Ch]
        push ebx
        lea edx, [esp + 14h]
        push edx
        call eax
        jmp L_common
    L_big:
        push edi
        mov edi, dword ptr [mem_009256E4]
        push 12h
        call edi
        mov ebx, dword ptr [esp + 10h]
        shr eax, 0Fh
        test al, 1
        je L_b
        test bl, 4
        jne L_b
        push 2
        jmp L_call
    L_b:
        push 12h
        call edi
        shr eax, 0Fh
        test al, 1
        je L_pop
        test bl, 4
        je L_pop
        push 3
    L_call:
        mov ecx, dword ptr [esi + 4]
        call ext_0041C880
    L_pop:
        pop edi
    L_common:
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 8]
        call ext_0043D620
        test eax, eax
        je L_end
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 8]
        push ebx
        push eax
        call ext_0043C950
    L_end:
        pop esi
        mov al, 1
        pop ebx
        ret 0Ch
    }
}
