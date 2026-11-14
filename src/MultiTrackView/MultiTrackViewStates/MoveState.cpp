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

// [0x00443C30] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_12 (685 bytes)
extern "C" void ext_00412E60();
extern "C" void ext_0043B400();
extern "C" void ext_0043BCA0();
extern "C" void ext_0043C070();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043F520();
extern "C" void ext_004407B0();
extern "C" void ext_00440920();
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" void ext_00443A10();
extern "C" void ext_00443AE0();
extern "C" int mem_00925134;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00443C30(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x74
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x30], 0x0
        push esi
        push edi
        mov dword ptr [esp + 0x4c], ebx
        je L_443C57
        mov byte ptr [ebx + 0x30], 0x0
        mov al, 0x1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    L_443C57:
        fldz
        mov ecx, dword ptr [ebx + 0x8]
        mov eax, dword ptr [ebx + 0x4]
        fstp qword ptr [esp + 0x58]
        fld qword ptr [ecx + 0xf0]
        mov edx, dword ptr [eax + 0xc]
        fstp qword ptr [esp + 0x78]
        push edx
        fld qword ptr [ecx + 0xe8]
        fstp qword ptr [esp + 0x74]
        call ext_0043CDD0
        fstp st(0)
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        push eax
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x53], 0x0
        call ext_00443A10
        fstp qword ptr [esp + 0x68]
        mov esi, dword ptr [ebx + 0x10]
        cmp esi, dword ptr [ebx + 0x14]
        lea edi, [ebx + 0xc]
        jbe L_443CAB
        call dword ptr [mem_00925134]
    L_443CAB:
        mov dword ptr [esp + 0x64], esi
        nop
    L_443CB0:
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x50], eax
        jbe L_443CC2
        call dword ptr [mem_00925134]
    L_443CC2:
        cmp edi, edi
        je L_443CCC
        call dword ptr [mem_00925134]
    L_443CCC:
        cmp esi, dword ptr [esp + 0x50]
        je L_443DB3
        cmp esi, dword ptr [edi + 0x8]
        jb L_443CE1
        call dword ptr [mem_00925134]
    L_443CE1:
        mov esi, dword ptr [esi]
        mov ecx, esi
        call ext_00441020
        mov ecx, esi
        mov dword ptr [esp + 0x50], eax
        call ext_00441040
        fld qword ptr [esp + 0x68]
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        mov dword ptr [esp + 0x5c], eax
        call ext_00440920
        mov ecx, esi
        call ext_00441020
        cmp eax, dword ptr [esp + 0x50]
        je L_443D96
        fld qword ptr [esp + 0x70]
        mov byte ptr [esp + 0x4b], 0x1
        fld st(0)
        fld1
        fadd st(1), st(0)
        fxch st(1)
        fcom qword ptr [esi + 0x50]
        fnstsw ax
        test ah, 0x41
        jne L_443D57
        fild dword ptr [esp + 0x50]
        fcomp st(3)
        fnstsw ax
        fstp st(2)
        test ah, 0x41
        jne L_443D59
        fstp st(0)
        fsubr qword ptr [esi + 0x50]
        fcom qword ptr [esp + 0x58]
        fnstsw ax
        test ah, 0x41
        je L_443D94
        fstp qword ptr [esp + 0x58]
        jmp L_443D96
    L_443D57:
        fstp st(0)
    L_443D59:
        fstp st(1)
        fld qword ptr [esp + 0x78]
        fld st(0)
        fsubrp st(2), st(0)
        fxch st(1)
        fcom qword ptr [esi + 0x58]
        fnstsw ax
        test ah, 0x5
        jp L_443D92
        fild dword ptr [esp + 0x54]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp L_443D94
        fsubr qword ptr [esi + 0x58]
        fcom qword ptr [esp + 0x58]
        fnstsw ax
        test ah, 0x5
        jnp L_443D94
        fstp qword ptr [esp + 0x58]
        jmp L_443D96
    L_443D92:
        fstp st(0)
    L_443D94:
        fstp st(0)
    L_443D96:
        mov edx, dword ptr [esp + 0x64]
        cmp edx, dword ptr [edi + 0x8]
        jb L_443DA5
        call dword ptr [mem_00925134]
    L_443DA5:
        add dword ptr [esp + 0x64], 0x4
        mov esi, dword ptr [esp + 0x64]
        jmp L_443CB0
    L_443DB3:
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        push eax
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x52], 0x0
        call ext_00443AE0
        test eax, eax
        mov dword ptr [esp + 0x54], eax
        je L_443E99
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_443DE1
        call dword ptr [mem_00925134]
    L_443DE1:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        mov dword ptr [esp + 0x64], ebx
        jbe L_443DF3
        call dword ptr [mem_00925134]
    L_443DF3:
        cmp edi, edi
        je L_443DFD
        call dword ptr [mem_00925134]
    L_443DFD:
        cmp ebx, esi
        je L_443E7B
        cmp ebx, dword ptr [edi + 0x8]
        jb L_443E0C
        call dword ptr [mem_00925134]
    L_443E0C:
        mov esi, dword ptr [ebx]
        cmp byte ptr [esi + 0x8f], 0x0
        je L_443E61
        mov ecx, esi
        call ext_004407B0
        mov edi, dword ptr [esi + 0x44]
        mov ebx, eax
        test ebx, ebx
        je L_443E5D
        test edi, edi
        je L_443E5D
        mov ecx, edi
        call ext_0043B400
        add eax, dword ptr [esp + 0x54]
        mov ecx, ebx
        push eax
        call ext_00412E60
        mov ebx, eax
        test ebx, ebx
        je L_443E5D
        cmp ebx, edi
        je L_443E5D
        push esi
        mov ecx, edi
        mov byte ptr [esp + 0x4e], 0x1
        call ext_0043BCA0
        push esi
        mov ecx, ebx
        call ext_0043C070
    L_443E5D:
        mov ebx, dword ptr [esp + 0x64]
    L_443E61:
        mov edi, dword ptr [esp + 0x4c]
        add edi, 0xc
        cmp ebx, dword ptr [edi + 0x8]
        jb L_443E73
        call dword ptr [mem_00925134]
    L_443E73:
        add ebx, 0x4
        jmp L_443DE1
    L_443E7B:
        cmp byte ptr [esp + 0x4a], 0x0
        mov ebx, dword ptr [esp + 0x4c]
        je L_443E99
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, ebx
        mov eax, dword ptr [edx + 0x4]
        mov edx, dword ptr [ebp + 0x10]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], edx
        jmp L_443EA8
    L_443E99:
        mov eax, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [ebp + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [eax + 0x10], ecx
    L_443EA8:
        cmp byte ptr [esp + 0x4b], 0x0
        jne L_443EB6
        cmp byte ptr [esp + 0x4a], 0x0
        je L_443ED2
    L_443EB6:
        mov ecx, dword ptr [ebx + 0x8]
        push 0x1
        push edi
        call ext_0043F520
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [eax + 0x20]
        push 0x1
        push 0x0
        push ecx
        call dword ptr [mem_00925688]
    L_443ED2:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}
