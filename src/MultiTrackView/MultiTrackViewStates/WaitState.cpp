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
extern "C" int mem_00925688;

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
