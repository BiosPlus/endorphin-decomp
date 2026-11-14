// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/MoveState.cpp

// [0x00442C70] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_2 (25 bytes)
extern "C" void ext_0043C900();
extern "C" int mem_009256E0;

extern "C" __declspec(naked) void __fastcall fn_00442C70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x0
        call ext_0043C900
        call dword ptr [mem_009256E0]
        mov byte ptr [esi + 0x30], 0x0
        pop esi
        ret
    }
}

// [0x00443650] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7 (44 bytes)
extern "C" int mem_00925718;
extern "C" int mem_009256DC;

extern "C" __declspec(naked) void __fastcall fn_00443650(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x8
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x1c]
        push ecx
        push edx
        call dword ptr [mem_009256DC]
        test eax, eax
        setne al
        pop esi
        add esp, 0x8
        ret 0xc
    }
}

// [0x004439C0] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_0 (69 bytes)
extern "C" void ext_00442980();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_004439C0(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x10);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x10) = 0;
    *reinterpret_cast<int*>(p + 0x14) = 0;
    *reinterpret_cast<int*>(p + 0x18) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00442980)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x00442C90] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_4 (33 bytes)
extern "C" void ext_0041C880();
extern "C" void ext_0043F520();

extern "C" __declspec(naked) void __fastcall fn_00442C90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x0
        lea eax, [esi + 0xc]
        push eax
        call ext_0043F520
        mov ecx, dword ptr [esi + 0x4]
        push 0x0
        call ext_0041C880
        mov al, 0x1
        pop esi
        ret 0xc
    }
}

// [0x00443680] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_18 (37 bytes)
extern "C" void ext_00442CF0();

extern "C" bool __fastcall fn_00443680(void* self, int edx_unused, int a1) {
    unsigned char* eax = *reinterpret_cast<unsigned char**>(static_cast<unsigned char*>(self) + 0x8);
    unsigned char* ecx = *reinterpret_cast<unsigned char**>(eax + 0xa0);
    double d = *reinterpret_cast<double*>(ecx + 0x50);
    reinterpret_cast<void (__cdecl*)(int, void*, double)>(ext_00442CF0)(a1, eax, d);
    return false;
}

// [0x00443EE0] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_1 (422 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0043C900();
extern "C" void ext_0043C920();
extern "C" void ext_0043CDD0();
extern "C" void ext_004408E0();
extern "C" void ext_00440900();
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" void ext_00441060();
extern "C" void ext_00441090();
extern "C" void ext_004AFF30();
extern "C" void ext_00596660();
extern "C" void ext_006A5E00();
extern "C" int mem_00925718;
extern "C" int mem_009256D8;
extern "C" int mem_00925134;
extern "C" int mem_0092570C;

extern "C" __declspec(naked) void __fastcall fn_00443EE0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi + 0x1c]
        push eax
        mov byte ptr [edi + 0x30], 0x0
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [edi + 0x8]
        push 0x1
        call ext_0043C900
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        mov ebx, dword ptr [edi + 0x14]
        cmp dword ptr [edi + 0x10], ebx
        lea esi, [edi + 0xc]
        jbe L_a1
        call dword ptr [mem_00925134]
L_a1:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_a2
        call dword ptr [mem_00925134]
L_a2:
        push ebx
        push esi
        push ebp
        push esi
        lea edx, [esp + 0x48]
        push edx
        mov ecx, esi
        call ext_00596660
        mov ecx, dword ptr [edi + 0x8]
        mov eax, dword ptr [ecx + 0xa0]
        cmp byte ptr [eax + 0x88], 0x0
        mov dword ptr [esp + 0x30], eax
        jne L_a3
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        call ext_0041A920
        jmp L_a4
L_a3:
        call ext_0043C920
        push eax
        mov ecx, esi
        call ext_004AFF30
L_a4:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_a10
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je L_a10
        lea edx, [esp + 0x30]
        push edx
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [ecx + 0x20]
        lea eax, [esp + 0x30]
        push eax
        push edx
        call dword ptr [mem_0092570C]
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe L_a5
        call ebp
        cmp ebx, dword ptr [esi + 0x8]
L_a5:
        jb L_a6
        call ebp
L_a6:
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [ebx]
        fld qword ptr [eax + 0x50]
        push ecx
        mov ecx, dword ptr [edi + 0x8]
        fstp qword ptr [esp + 0x3c]
        call ext_0043CDD0
        fsubr qword ptr [esp + 0x38]
        fstp qword ptr [edi + 0x28]
        jmp L_a11
L_a10:
        mov ebp, dword ptr [mem_00925134]
L_a11:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_loop
        call ebp
        __asm _emit 0x8b
        __asm _emit 0xff
L_loop:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_a13
        call ebp
L_a13:
        cmp esi, esi
        je L_a14
        call ebp
L_a14:
        cmp ebx, edi
        je L_end
        cmp ebx, dword ptr [esi + 0x8]
        jb L_a15
        call ebp
L_a15:
        mov edi, dword ptr [ebx]
        mov ecx, edi
        call ext_00441040
        mov dword ptr [esp + 0x30], eax
        fild dword ptr [esp + 0x30]
        sub esp, 0x8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00441020
        mov dword ptr [esp + 0x38], eax
        fild dword ptr [esp + 0x38]
        sub esp, 0x8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_004408E0
        mov ecx, edi
        call ext_00441090
        mov dword ptr [esp + 0x30], eax
        fild dword ptr [esp + 0x30]
        sub esp, 0x8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00441060
        mov dword ptr [esp + 0x38], eax
        fild dword ptr [esp + 0x38]
        sub esp, 0x8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00440900
        cmp ebx, dword ptr [esi + 0x8]
        jb L_a16
        call ebp
L_a16:
        add ebx, 0x4
        jmp L_loop
L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
