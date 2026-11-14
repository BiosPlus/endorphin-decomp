// Decompiled translation unit: src/classes/GWCDateTimePropertyValue.cpp

// [0x006B3D40] GWCDateTimePropertyValue::vfunc_1 (123 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B3D40(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        add dword ptr [esp + 0x18], 0x2
        push ebx
        push esi
        push edi
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov esi, eax
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [edi]
        push 0x8024
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, edi
        call edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x1c
    }
}

// [0x006B4140] GWCDateTimePropertyValue::vfunc_2 (162 bytes)
extern "C" void ext_006B4090();
extern "C" int mem_009253BC;
extern "C" int mem_00924160;
extern "C" int mem_0092415C;
extern "C" int mem_009242F0;

extern "C" __declspec(naked) void* __fastcall fn_006B4140(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x114
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0xc8
        mov dword ptr [esp + 0x4], 0x0
        je L_convert
        cmp eax, 0xd2
        jne L_format
L_convert:
        mov eax, dword ptr [esi + 0x40]
        cmp dword ptr [eax + 0x8], 0x0
        jne L_format
        fld qword ptr [eax]
        lea ecx, [esp + 0x8]
        push ecx
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_009253BC]
L_format:
        mov ecx, esi
        call ext_006B4090
        test al, al
        push 0x100
        je L_date
        lea edx, [esp + 0x1c]
        push edx
        push 0x0
        lea eax, [esp + 0x14]
        push eax
        push 0x0
        push 0x400
        call dword ptr [mem_00924160]
        jmp L_done
L_date:
        lea ecx, [esp + 0x1c]
        push ecx
        push 0x0
        lea edx, [esp + 0x14]
        push edx
        push 0x1
        push 0x400
        call dword ptr [mem_0092415C]
L_done:
        mov esi, dword ptr [esp + 0x11c]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [mem_009242F0]
        mov eax, esi
        pop esi
        add esp, 0x114
        ret 0x4
    }
}

// [0x006B41F0] GWCDateTimePropertyValue::vfunc_4 (190 bytes)
extern "C" int mem_00924080;

extern "C" __declspec(naked) void* __fastcall fn_006B41F0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -1
        push 0x8b79c9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        push ebx
        push esi
        push edi
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x4]
        mov edi, dword ptr [esp + 0x2c]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], edx
        mov edx, dword ptr [eax + 0xc]
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 0x8], ecx
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esi + 0xc], edx
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0x0
        call edx
        mov ebx, eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, edi
        call eax
        add dword ptr [esi], 0x2
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        add eax, ecx
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x8], eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x10
    }
}

// [0x006B4310] GWCDateTimePropertyValue::vfunc_5 (210 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B42B0();
extern "C" int mem_00925310;

extern "C" __declspec(naked) void __fastcall fn_006B4310(void* self) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x34], 0x1
        jne L_006B4339
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0xc8
        je L_006B432D
        cmp eax, 0xd2
        jne L_006B4339
    L_006B432D:
        mov eax, dword ptr [esi + 0x40]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_006B4339:
        mov al, byte ptr [esp + 0x20]
        mov byte ptr [esi + 0x34], al
        test al, al
        mov eax, dword ptr [esi + 0x4]
        jne L_006B4367
        cmp eax, 0xc8
        je L_006B4359
        cmp eax, 0xd2
        jne L_006B43DB
    L_006B4359:
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x40], ecx
        pop esi
        add esp, 0x14
        ret 0x8
    L_006B4367:
        cmp eax, 0xc8
        je L_006B4375
        cmp eax, 0xd2
        jne L_006B43DB
    L_006B4375:
        push 0xc
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_006B4390
        fldz
        mov dword ptr [eax + 0x8], 0x0
        fstp qword ptr [eax]
        jmp L_006B4392
    L_006B4390:
        xor eax, eax
    L_006B4392:
        push 0x0
        mov dword ptr [esi + 0x40], eax
        call dword ptr [mem_00925310]
        fldz
        mov dword ptr [esp + 0xc], edx
        fstp qword ptr [esp + 0x10]
        add esp, 0x4
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x18], 0x0
        call ext_006B42B0
        mov esi, dword ptr [esi + 0x40]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x8], edx
    L_006B43DB:
        pop esi
        add esp, 0x14
        ret 0x8
    }
}
