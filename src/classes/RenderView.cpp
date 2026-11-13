// Decompiled translation unit: src/classes/RenderView.cpp

extern "C" int mem_00ACDB40;
extern "C" int mem_00925690;
extern "C" int mem_00925134;

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044BF40(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x6c], 0x0
        __asm _emit 0x74 __asm _emit 0x1B // je 0x44bf61 (next function: jmp thunk)
        mov ecx, dword ptr [mem_00ACDB40]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x4], edx
        jmp dword ptr [mem_00925690]
    }
}

// [0x0044C260] RenderView::vfunc_0_off_60 (58 bytes)
extern "C" void ext_0044BC60();

extern "C" __declspec(naked) void __fastcall fn_0044C260(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov cl, byte ptr [eax]
        mov byte ptr [esi + 0x14], cl
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip_0044C260
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je skip_0044C260
        cmp byte ptr [esi + 0x14], 0x0
        sete cl
        mov byte ptr [eax + 0x85], cl
    skip_0044C260:
        lea ecx, [esi - 0x60]
        call ext_0044BC60
        pop esi
        ret 0x4
    }
}

// [0x0044C3A0] RenderView::vfunc_0_off_5C (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044C3A0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ebx, ecx
        mov byte ptr [ebx + 0x19], 0x0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        push edi
        mov ecx, esi
        call edx
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je skip_0044C3A0
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x1
        jne skip_0044C3A0
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jbe chk2_0044C3A0
        call ebp
        cmp esi, dword ptr [edi + 0x8]
chk2_0044C3A0:
        jb chk3_0044C3A0
        call ebp
chk3_0044C3A0:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        pop ebp
        je skip_0044C3A0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xf8]
        call edx
        cmp eax, 0x6
        jne skip_0044C3A0
        mov byte ptr [ebx + 0x19], 0x1
skip_0044C3A0:
        lea ecx, [ebx - 0x5c]
        call ext_0044BC60
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0044BE60] RenderView::vfunc_27 (158 bytes)
extern "C" int mem_00934DA0;
extern "C" int mem_009256C4;
extern "C" void ext_006A672A();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A6724();
extern "C" void ext_006A631C();

extern "C" __declspec(naked) void __fastcall fn_0044BE60(void* self) {
    __asm {
        sub esp, 0x28
        push esi
        mov esi, dword ptr [esp + 0x30]
        mov eax, dword ptr [esi + 0x20]
        or dword ptr [esi + 0x2c], 0x200
        and eax, 0xff7fffff
        or eax, 0x6000000
        push esi
        mov dword ptr [esi + 0x20], eax
        call ext_006A672A
        test eax, eax
        jne be90_0044BE60
        pop esi
        add esp, 0x28
        ret 0x4
    be90_0044BE60:
        push ebx
        push edi
        call ext_006A5EDE
        mov edi, dword ptr [eax + 0x8]
        mov ebx, dword ptr [mem_009256C4]
        lea ecx, [esp + 0xc]
        push ecx
        push offset mem_00934DA0
        push edi
        call ebx
        test eax, eax
        jne bee9_0044BE60
        mov eax, dword ptr [esi + 0x28]
        lea edx, [esp + 0xc]
        push edx
        push eax
        push edi
        call ebx
        test eax, eax
        je bee4_0044BE60
        or dword ptr [esp + 0xc], 0x23
        lea ecx, [esp + 0xc]
        push ecx
        mov dword ptr [esp + 0x34], offset mem_00934DA0
        mov dword ptr [esp + 0x2c], 0x0
        call ext_006A6724
        test eax, eax
        jne bee9_0044BE60
    bee4_0044BE60:
        call ext_006A631C
    bee9_0044BE60:
        pop edi
        pop ebx
        mov dword ptr [esi + 0x28], offset mem_00934DA0
        mov eax, 0x1
        pop esi
        add esp, 0x28
        ret 0x4
    }
}

// [0x0044C1B0] RenderView::vfunc_0_off_58 (127 bytes)
extern "C" void ext_0043A100();
extern "C" int mem_0092566C;
extern "C" int mem_00925630;

extern "C" __declspec(naked) void __fastcall fn_0044C1B0(void* self) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x1c]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        cmp ecx, -0x1
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x4], ecx
        mov dword ptr [esp + 0x8], eax
        jne loc_0044C201
        cmp eax, ecx
        jne loc_0044C201
        mov ecx, dword ptr [esi - 0x38]
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov eax, dword ptr [esp + 0x14]
        sub eax, dword ptr [esp + 0xc]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x18]
        sub eax, dword ptr [esp + 0x10]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esp + 0x8], eax
    loc_0044C201:
        mov eax, dword ptr [esi - 0x38]
        lea edx, [esp + 0x4]
        push edx
        push eax
        call dword ptr [mem_00925630]
        mov ecx, dword ptr [mem_00ACDB40]
        test ecx, ecx
        pop esi
        je loc_0044C229
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp]
        push edx
        push eax
        call ext_0043A100
    loc_0044C229:
        add esp, 0x18
        ret 0x4
    }
}
