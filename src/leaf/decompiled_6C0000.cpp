// Decompiled translation unit: src/leaf/decompiled_6C0000.cpp
extern "C" void ext_006C9D60();
extern "C" void ext_006CA060();

extern "C" void ext_006CA060();
extern "C" void __stdcall ext_006C9960(int a, int b, int c);

extern "C" void __cdecl fn_006C94F0() {
    ext_006C9960(0, 0, (int)0xaa8cf4);
}
extern "C" void ext_006C9DC0();
extern "C" void ext_006CC6F0();

extern "C" void ext_006CC6F0();
extern "C" void __cdecl fn_006C9500() {
    ext_006C9960(0, 0, (int)0xaa8d00);
}
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D30();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D03E0();

extern "C" void ext_006C9D30();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D03E0();
extern "C" void ext_006D80A0();
extern "C" void ext_007873F0();

extern "C" void ext_007873F0();
extern "C" void __cdecl fn_006C9520() {
    ext_006C9960(0, 0, (int)0xaa8d10);
}
extern "C" int mem_00925284;
extern "C" int mem_00B5D5F0;
extern "C" int mem_00B5D5F4;
extern "C" int mem_00B5D5F8;
extern "C" int mem_00B5D5FC;
extern "C" int mem_00B5D600;
extern "C" int mem_00B5D604;

extern "C" int mem_00B5D5F0;
extern "C" int mem_00B5D5F4;
extern "C" int mem_00B5D5F8;
extern "C" int mem_00B5D5FC;
extern "C" int mem_00B5D600;
extern "C" int mem_00B5D604;
extern "C" void __cdecl fn_006C9540() {
    ext_006C9960(0, 0, (int)0xaa8d2c);
}
extern "C" void ext_006C1B30();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;

extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;
extern "C" void ext_006C9C40();
extern "C" void ext_006C9D00();
extern "C" void ext_006C9DA0();
extern "C" void ext_006C9F20();
extern "C" void ext_00789BA0();
extern "C" void ext_0079E5B0();

extern "C" void ext_006C9D00();
extern "C" void ext_006C9DA0();
extern "C" void ext_006C9F20();
extern "C" void ext_00789BA0();
extern "C" void ext_0079E5B0();
extern "C" void ext_006C9CD0();
extern "C" void ext_00722DC0();

extern "C" void ext_00722DC0();
extern "C" void __cdecl fn_006C9570() {
    ext_006C9960(0, 0, (int)0xaa8d5c);
}
extern "C" void ext_006C4C90();
extern "C" void ext_006D23B0();

// [0x006C9580] sub_006C9580 (15 bytes)
extern "C" void __cdecl fn_006C9580() {
    ext_006C9960(0, 0, (int)0xaa8d64);
}

// [0x006C95F0] sub_006C95F0 (15 bytes)
extern "C" void __cdecl fn_006C95F0() {
    ext_006C9960(0, 0, (int)0xaa8d80);
}

// [0x006C9740] sub_006C9740 (15 bytes)
extern "C" void __cdecl fn_006C9740() {
    ext_006C9960(0, 0, (int)0xaa8db0);
}

// [0x006C98D0] sub_006C98D0 (15 bytes)
extern "C" void __cdecl fn_006C98D0() {
    ext_006C9960(0, 0, (int)0xaa8de0);
}

// [0x006C98E0] sub_006C98E0 (15 bytes)
extern "C" void __cdecl fn_006C98E0() {
    ext_006C9960(0, 0, (int)0xaa8de8);
}

// [0x006C98F0] sub_006C98F0 (15 bytes)
extern "C" void __cdecl fn_006C98F0() {
    ext_006C9960(0, 0, (int)0xaa8df8);
}

// [0x006C9600] sub_006C9600 (16 bytes)
extern "C" void __stdcall ext_006C99D0(int a, int b, int c);
extern "C" int mem_00AAC134;

extern "C" void __cdecl fn_006C9600() {
    ext_006C99D0(0, 0, mem_00AAC134);
}

// [0x006C9610] sub_006C9610 (16 bytes)
extern "C" int mem_00AAC138;

extern "C" void __cdecl fn_006C9610() {
    ext_006C99D0(0, 0, mem_00AAC138);
}

// [0x006C9A60] sub_006C9A60 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9A60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        or edx, eax
        mov eax, dword ptr [ecx + 0x10]
        inc eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [ecx + 0x10], eax
        mov eax, dword ptr [esp + 0x8]
        cmp eax, edx
        jl store_lo
        cmp edx, -1
        jne check_hi
store_lo:
        mov dword ptr [ecx + 0x8], eax
check_hi:
        cmp eax, dword ptr [ecx + 0xc]
        jle done
        mov dword ptr [ecx + 0xc], eax
done:
        ret 0x8
    }
}

// [0x006C3C10] sub_006C3C10 (80 bytes)
extern "C" __declspec(naked) void* __cdecl fn_006C3C10(void* out, const double* a, const double* b) {
    __asm {
        sub esp, 8
        mov ecx, dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x10]
        fld qword ptr [ecx]
        fmul qword ptr [eax+0x10]
        fld qword ptr [ecx+0x10]
        fmul qword ptr [eax]
        fsubp st(1), st
        fld qword ptr [ecx+0x8]
        fmul qword ptr [eax]
        fld qword ptr [eax+0x8]
        fmul qword ptr [ecx]
        fsubp st(1), st
        _emit 0xdd
        _emit 0x5c
        _emit 0x24
        _emit 0x00
        fld qword ptr [ecx+0x10]
        fmul qword ptr [eax+0x8]
        fld qword ptr [ecx+0x8]
        fmul qword ptr [eax+0x10]
        mov eax, dword ptr [esp+0xc]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov edx, dword ptr [esp+0x4]
        fsubp st(1), st
        mov dword ptr [eax+0x10], ecx
        mov dword ptr [eax+0x14], edx
        fstp qword ptr [eax]
        fstp qword ptr [eax+0x8]
        add esp, 8
        ret
    }
}

// [0x006C8E00] sub_006C8E00 (80 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5D5E8;
extern "C" int mem_00B5D5EC;
extern "C" int mem_00B5D5E0;
extern "C" __declspec(naked) void __fastcall fn_006C8E00(void* self) {
    __asm {
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+0x4]
        mov dword ptr [mem_00B5D5E8], ecx
        mov dword ptr [mem_00B5D5EC], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D5E0]
        ret
    }
}

// [0x006C8440] sub_006C8440 (80 bytes)
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_006C8440(void* self) {
    __asm {
        push -1
        push 0x008B8DDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xa8]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006D80A0
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006C4D70] sub_006C4D70 (64 bytes)
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_006C4D70(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x10
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        add ecx, 0x4d0
        mov dword ptr [esp + 0x4], edx
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x4]
        push edi
        mov edi, dword ptr [esp + 0x28]
        push edx
        push eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], edi
        call ext_006D2170
        pop edi
        pop esi
        add esp, 0x10
        ret 0x10
    }
}

// [0x006C8520] sub_006C8520 (744 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006BC380();
extern "C" void ext_00701C00();
extern "C" void ext_0071E680();

extern "C" __declspec(naked) void __fastcall fn_006C8520(void* self) {
    __asm {
        mov	eax, dword ptr [esp + 0x4]
        mov	edx, dword ptr [ecx]
        push	esi
        cmp	edx, dword ptr [eax]
        jne loc_006C854F
        mov	edx, dword ptr [ecx + 0x4]
        mov	esi, dword ptr [eax + 0x4]
        cmp	edx, esi
        jne loc_006C854F
        mov	edx, dword ptr [ecx + 0x8]
        mov	esi, dword ptr [eax + 0x8]
        cmp	edx, esi
        jne loc_006C854F
        mov	ecx, dword ptr [ecx + 0xc]
        mov	edx, dword ptr [eax + 0xc]
        cmp	ecx, edx
        jne loc_006C854F
        mov	al, 0x1
        pop	esi
        ret	0x4
    loc_006C854F:
        xor	al, al
        pop	esi
        ret	0x4
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	esi
        mov	esi, ecx
        mov	eax, dword ptr [esi + 0x50]
        test	eax, eax
        je loc_006C857F
        mov	ecx, dword ptr [esi + 0x8]
        call	eax
        mov	ecx, dword ptr [esp + 0x8]
        mov	byte ptr [esi + 0x80], al
        pop	esi
        mov	byte ptr [ecx], al
        ret	0x10
    loc_006C857F:
        mov	eax, dword ptr [esp + 0x8]
        mov	dl, byte ptr [esi + 0x80]
        pop	esi
        mov	byte ptr [eax], dl
        ret	0x10
        _emit 0x90
        push	ebx
        push	esi
        mov	esi, ecx
        push	edi
        mov	edi, dword ptr [esp + 0x10]
        push	0x0
        mov	eax, dword ptr [esi]
        lea	ebx, [esi + 0x80]
        push	ebx
        push	edi
        push	esi
        push	0x14
        push	0x0
        call	dword ptr [eax + 0x38]
        mov	eax, dword ptr [esi + 0x54]
        test	eax, eax
        je loc_006C85C8
        mov	ebx, dword ptr [esi + 0x8]
        mov	ecx, esi
        call ext_0071E680
        mov	cl, byte ptr [edi]
        push	ecx
        mov	ecx, ebx
        call	dword ptr [eax + 0x14]
        jmp loc_006C85CC
    loc_006C85C8:
        mov	dl, byte ptr [edi]
        mov	byte ptr [ebx], dl
    loc_006C85CC:
        mov	eax, dword ptr [esi]
        push	0x0
        push	0x0
        push	edi
        push	esi
        push	0x15
        push	0x0
        mov	ecx, esi
        call	dword ptr [eax + 0x38]
        pop	edi
        pop	esi
        pop	ebx
        ret	0x10
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	ebp
        mov	ebp, esp
        and	esp, -0x8
        sub	esp, 0x24
        push	esi
        mov	esi, ecx
        mov	eax, dword ptr [esi + 0x50]
        test	eax, eax
        je loc_006C8642
        mov	ecx, dword ptr [esi + 0x8]
        lea	edx, [esp + 0x8]
        push	edx
        call	eax
        mov	ecx, dword ptr [eax]
        mov	dword ptr [esi + 0x80], ecx
        mov	edx, dword ptr [eax + 0x4]
        mov	dword ptr [esi + 0x84], edx
        mov	ecx, dword ptr [eax + 0x8]
        mov	dword ptr [esi + 0x88], ecx
        mov	edx, dword ptr [eax + 0xc]
        mov	dword ptr [esi + 0x8c], edx
        mov	ecx, dword ptr [eax + 0x10]
        mov	dword ptr [esi + 0x90], ecx
        mov	edx, dword ptr [eax + 0x14]
        mov	dword ptr [esi + 0x94], edx
    loc_006C8642:
        mov	eax, dword ptr [ebp + 0x8]
        mov	ecx, dword ptr [esi + 0x80]
        mov	dword ptr [eax], ecx
        mov	edx, dword ptr [esi + 0x84]
        mov	dword ptr [eax + 0x4], edx
        mov	ecx, dword ptr [esi + 0x88]
        mov	dword ptr [eax + 0x8], ecx
        mov	edx, dword ptr [esi + 0x8c]
        mov	dword ptr [eax + 0xc], edx
        mov	ecx, dword ptr [esi + 0x90]
        mov	dword ptr [eax + 0x10], ecx
        mov	edx, dword ptr [esi + 0x94]
        mov	dword ptr [eax + 0x14], edx
        pop	esi
        mov	esp, ebp
        pop	ebp
        ret	0x10
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	ebx
        push	esi
        mov	esi, dword ptr [esp + 0xc]
        push	edi
        mov	edi, ecx
        push	0x0
        mov	eax, dword ptr [edi]
        lea	ebx, [edi + 0x80]
        push	ebx
        push	esi
        push	edi
        push	0x14
        push	0x0
        call	dword ptr [eax + 0x38]
        mov	eax, dword ptr [edi + 0x54]
        test	eax, eax
        je loc_006C8700
        mov	ecx, dword ptr [esi]
        sub	esp, 0x20
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	edx, dword ptr [esi + 0x4]
        mov	dword ptr [eax + 0x4], edx
        mov	ecx, dword ptr [esi + 0x8]
        mov	dword ptr [eax + 0x8], ecx
        mov	edx, dword ptr [esi + 0xc]
        mov	dword ptr [eax + 0xc], edx
        mov	ecx, dword ptr [esi + 0x10]
        mov	dword ptr [eax + 0x10], ecx
        mov	edx, dword ptr [esi + 0x14]
        mov	dword ptr [eax + 0x18], 0x0
        mov	ecx, edi
        mov	dword ptr [eax + 0x14], edx
        mov	dword ptr [eax + 0x1c], 0x3ff00000
        call ext_0071E680
        mov	ecx, edi
        mov	ebx, eax
        call ext_006BC380
        mov	ecx, eax
        call	dword ptr [ebx + 0x14]
        jmp loc_006C8722
    loc_006C8700:
        mov	eax, dword ptr [esi]
        mov	dword ptr [ebx], eax
        mov	ecx, dword ptr [esi + 0x4]
        mov	dword ptr [ebx + 0x4], ecx
        mov	edx, dword ptr [esi + 0x8]
        mov	dword ptr [ebx + 0x8], edx
        mov	eax, dword ptr [esi + 0xc]
        mov	dword ptr [ebx + 0xc], eax
        mov	ecx, dword ptr [esi + 0x10]
        mov	dword ptr [ebx + 0x10], ecx
        mov	edx, dword ptr [esi + 0x14]
        mov	dword ptr [ebx + 0x14], edx
    loc_006C8722:
        mov	eax, dword ptr [edi]
        push	0x0
        push	0x0
        push	esi
        push	edi
        push	0x15
        push	0x0
        mov	ecx, edi
        call	dword ptr [eax + 0x38]
        pop	edi
        pop	esi
        pop	ebx
        ret	0x10
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	ecx
        push	esi
        mov	esi, ecx
        mov	eax, dword ptr [esi + 0x50]
        test	eax, eax
        mov	dword ptr [esp + 0x4], eax
        je loc_006C875C
        mov	ecx, dword ptr [esi + 0x8]
        call	dword ptr [esp + 0x4]
        fstp	qword ptr [esi + 0x80]
    loc_006C875C:
        mov	eax, dword ptr [esp + 0xc]
        mov	ecx, dword ptr [esi + 0x80]
        mov	dword ptr [eax], ecx
        mov	edx, dword ptr [esi + 0x84]
        mov	dword ptr [eax + 0x4], edx
        pop	esi
        pop	ecx
        ret	0x10
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	ebx
        push	esi
        mov	esi, ecx
        push	edi
        mov	edi, dword ptr [esp + 0x10]
        push	0x0
        mov	eax, dword ptr [esi]
        lea	ebx, [esi + 0x80]
        push	ebx
        push	edi
        push	esi
        push	0x14
        push	0x0
        call	dword ptr [eax + 0x38]
        mov	eax, dword ptr [esi + 0x54]
        test	eax, eax
        je loc_006C87BC
        mov	ebx, dword ptr [esi + 0x8]
        mov	ecx, esi
        call ext_0071E680
        mov	ecx, dword ptr [edi + 0x4]
        mov	edx, dword ptr [edi]
        push	ecx
        push	edx
        mov	ecx, ebx
        call	dword ptr [eax + 0x14]
        jmp loc_006C87C6
    loc_006C87BC:
        mov	eax, dword ptr [edi]
        mov	dword ptr [ebx], eax
        mov	ecx, dword ptr [edi + 0x4]
        mov	dword ptr [ebx + 0x4], ecx
    loc_006C87C6:
        mov	edx, dword ptr [esi]
        push	0x0
        push	0x0
        push	edi
        push	esi
        push	0x15
        push	0x0
        mov	ecx, esi
        call	dword ptr [edx + 0x38]
        pop	edi
        pop	esi
        pop	ebx
        ret	0x10
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push	esi
        mov	esi, ecx
        call ext_00701C00
        test	byte ptr [esp + 0x8], 0x1
        je loc_006C87F8
        push	esi
        call ext_006A5C5C
        add	esp, 0x4
    loc_006C87F8:
        mov	eax, esi
        pop	esi
        ret	0x4
        _emit 0x90
        _emit 0x90
        mov	eax, dword ptr [ecx]
        jmp	dword ptr [eax + 0x29c]
    }
}

extern "C" void ext_006CA060();

// [0x006CA6B0] sub_006CA6B0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CA6B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        push eax
        call ext_006CA060
        mov esi, eax
        mov eax, dword ptr [esp + 0xc]
        mov ecx, 0xa
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006C3250] sub_006C3250 (48 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E6C30();

extern "C" __declspec(naked) void __stdcall fn_006C3250(void* a1) {
    __asm {
        push 0AA88ECh
        call ext_006BB1A0
        test eax, eax
        je short L_neg
        push esi
        mov esi, dword ptr [esp + 8]
        lea ecx, [esi + 10h]
        lea edx, [esi + 8]
        push ecx
        push edx
        push esi
        mov ecx, eax
        call ext_006E6C30
        mov eax, esi
        pop esi
        ret 4
L_neg:
        mov eax, dword ptr [esp + 4]
        ret 4
    }
}

// [0x006C32C0] sub_006C32C0 (48 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E6C30();

extern "C" __declspec(naked) void __stdcall fn_006C32C0(void* a1) {
    __asm {
        push 0AA88DCh
        call ext_006BB1A0
        test eax, eax
        je short L_neg
        push esi
        mov esi, dword ptr [esp + 8]
        lea ecx, [esi + 10h]
        lea edx, [esi + 8]
        push ecx
        push edx
        push esi
        mov ecx, eax
        call ext_006E6C30
        mov eax, esi
        pop esi
        ret 4
L_neg:
        mov eax, dword ptr [esp + 4]
        ret 4
    }
}

// [0x006C3330] sub_006C3330 (48 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E6C30();

extern "C" __declspec(naked) void __stdcall fn_006C3330(void* a1) {
    __asm {
        push 0AA88D0h
        call ext_006BB1A0
        test eax, eax
        je short L_neg
        push esi
        mov esi, dword ptr [esp + 8]
        lea ecx, [esi + 10h]
        lea edx, [esi + 8]
        push ecx
        push edx
        push esi
        mov ecx, eax
        call ext_006E6C30
        mov eax, esi
        pop esi
        ret 4
L_neg:
        mov eax, dword ptr [esp + 4]
        ret 4
    }
}

extern "C" void ext_007873F0();

// [0x006C2C60] sub_006C2C60 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C2C60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        add ecx, 0x118
        push eax
        mov dword ptr [esp + 0xc], 0
        call ext_007873F0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
    }
}

// [0x006C2DE0] sub_006C2DE0 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C2DE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        add ecx, 0x138
        push eax
        mov dword ptr [esp + 0xc], 0
        call ext_007873F0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
    }
}

// [0x006CC6F0] sub_006CC6F0 (79 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9D20();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();

extern "C" __declspec(naked) void __fastcall fn_006CC6F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006CA6A0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        dec ecx
        cmp eax, ecx
        jge short L_fail
        push eax
        mov ecx, esi
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 0x8
        jne short L_fail
        mov ecx, esi
        call ext_006C9CD0
        test ah, 0x0d
        je short L_fail
        mov ecx, esi
        call ext_006C9D20
        test eax, 0x1000000
        je short L_fail
        mov al, 0x1
        pop esi
        ret 0x4
L_fail:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006CC990] sub_006CC990 (79 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9D60();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();

extern "C" __declspec(naked) void __fastcall fn_006CC990(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006CA6A0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        dec ecx
        cmp eax, ecx
        jge short L_fail
        push eax
        mov ecx, esi
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 0x8
        jne short L_fail
        mov ecx, esi
        call ext_006C9CD0
        test ah, 0x0d
        je short L_fail
        mov ecx, esi
        call ext_006C9D60
        test eax, 0x10000000
        je short L_fail
        mov al, 0x1
        pop esi
        ret 0x4
    L_fail:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006C2860] sub_006C2860 (111 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) int __fastcall fn_006C2860(void* self, int edx_unused, char a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [mem_00B5D448]
        push edi
        mov dword ptr [esp + 0x10], ecx
        call dword ptr [eax + 0xc]
        cmp esi, -0x1
        mov edi, eax
        je L_skip
        cmp esi, dword ptr [mem_00B5E400]
        je L_skip
        push esi
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov edi, dword ptr [eax + 0x14]
        jmp L_after
    L_skip:
        mov edi, dword ptr [edi + 0x14]
    L_after:
        mov ebx, dword ptr [esp + 0x18]
        mov ebp, edi
        test bl, bl
        je L_end
        xor esi, esi
        test edi, edi
        jle L_end
    L_loop:
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        push esi
        call ext_006C28D0
        mov ecx, eax
        call ext_006C2860
        add ebp, eax
        inc esi
        cmp esi, edi
        jl L_loop
    L_end:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x006C35D0] sub_006C35D0 (112 bytes)
extern "C" void ext_006C2720();
extern "C" void ext_006C4550();

extern "C" __declspec(naked) void* __fastcall fn_006C35D0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        test al, al
        mov esi, ecx
        jne body
        lea eax, [ebx + 0x10]
        mov edx, dword ptr [esi + 0xf0]
        mov ecx, eax
        shl ecx, 0x5
        sub ecx, eax
        shl ecx, 0x4
        cmp byte ptr [ecx + edx], 0x0
        jne done
body:
        push edi
        mov ecx, esi
        mov edi, esi
        call ext_006C2720
        test eax, eax
        je after
loop_top:
        mov ecx, edi
        call ext_006C2720
        mov edi, eax
        mov ecx, edi
        call ext_006C2720
        test eax, eax
        jne loop_top
after:
        push ebx
        mov ecx, edi
        call ext_006C4550
        pop edi
done:
        mov ecx, dword ptr [esi + 0xf0]
        mov eax, ebx
        shl eax, 0x5
        sub eax, ebx
        pop esi
        shl eax, 0x4
        pop ebx
        lea eax, [eax + ecx + 0x1e80]
        ret 0x8
    }
}

extern "C" void __fastcall ext_006C2F30(void*, int, int);
extern "C" void* __fastcall ext_006C3070(void*);
extern "C" int __fastcall ext_006C3180(void*);
extern "C" int __fastcall ext_006C31E0(void*);
extern "C" void __fastcall ext_006F52F0(void*, int, int);
extern "C" int __fastcall ext_00715550(void*);

// [0x006C2F50] sub_006C2F50 (223 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006C2F50(void* self, int, void* arg0) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x0c]
        mov eax, dword ptr [esi + 0x158]
        cmp edi, eax
        jne L_6C2F69
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    L_6C2F69:
        push ebx
        mov ebx, eax
        test ebx, ebx
        mov dword ptr [esi + 0x158], edi
        je L_6C2F7D
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax + 0x0c]
    L_6C2F7D:
        test edi, edi
        je L_6C2F9B
        mov ecx, dword ptr [edi + 0x04]
        test ecx, ecx
        je L_6C2F8F
        push 0x0
        call fn_006C2F50
    L_6C2F8F:
        mov ecx, dword ptr [esi + 0x158]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x08]
    L_6C2F9B:
        mov ecx, esi
        call ext_006C3070
        test eax, eax
        je L_6C2FD0
        mov ecx, esi
        call ext_006C3070
        mov ecx, eax
        call ext_00715550
        cmp eax, 0x2
        je L_6C2FCC
        mov ecx, esi
        call ext_006C3070
        mov ecx, eax
        call ext_00715550
        cmp eax, 0x3
        jne L_6C2FD0
    L_6C2FCC:
        push 0x1
        jmp L_6C2FD2
    L_6C2FD0:
        push 0x0
    L_6C2FD2:
        mov ecx, esi
        call ext_006F52F0
        mov ecx, esi
        call ext_006C31E0
        test eax, eax
        jne L_6C301E
        mov ecx, esi
        call ext_006C3180
        test eax, eax
        jne L_6C301E
        mov ecx, esi
        call ext_006C3070
        test eax, eax
        je L_6C300D
        mov ecx, esi
        call ext_006C3070
        mov ecx, eax
        call ext_00715550
        cmp eax, 0x1
        je L_6C301E
    L_6C300D:
        push 0x1
        mov ecx, esi
        call ext_006C2F30
        mov eax, ebx
        pop ebx
        pop edi
        pop esi
        ret 0x4
    L_6C301E:
        push 0x0
        mov ecx, esi
        call ext_006C2F30
        mov eax, ebx
        pop ebx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006CCBF0] sub_006CCBF0 (303 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CBF00();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00872828();
extern "C" int mem_00993838;
extern "C" int mem_00991558;

__declspec(naked) void fn_006CCBF0() {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        jne L_006CCC10
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_006CCC10:
        cmp eax, 0x1
        jne L_006CCC2F
        push 0x0
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_006CCC2F:
        mov ecx, esi
        call ext_006CA6A0
        mov ebp, dword ptr [esp + 0x2c]
        dec eax
        cmp ebp, eax
        jl L_006CCC60
        mov ecx, esi
        call ext_006CA6A0
        dec eax
        mov ecx, esi
        push eax
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_006CCC60:
        fild dword ptr [esp + 0x2c]
        call ext_00872828
        mov ebx, eax
        mov ecx, esi
        push ebx
        call ext_006CA060
        inc ebp
        mov edi, eax
        mov dword ptr [esp + 0x2c], ebp
        fild dword ptr [esp + 0x2c]
        call ext_00872828
        push eax
        mov ecx, esi
        call ext_006CA060
        mov ecx, edi
        mov ebp, eax
        call ext_006C9C30
        sub eax, 0x2
        je L_006CCD0E
        sub eax, 0x2
        je L_006CCCB3
        sub eax, 0x4
        je L_006CCCB3
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_006CCCB3:
        lea eax, [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_006C9F00
        lea ecx, [esp + 0x18]
        push eax
        lea edx, [esp + 0x24]
        push ecx
        push edx
        mov ecx, ebp
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp dword ptr [esp + 0x2c]
        push ebx
        mov ecx, esi
        call ext_006CBF00
        fmul dword ptr [esp + 0x2c]
        mov ecx, edi
        fmul qword ptr [mem_00991558]
        fstp dword ptr [esp + 0x2c]
        call ext_006C9E80
        pop edi
        pop esi
        fadd dword ptr [esp + 0x24]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_006CCD0E:
        mov ecx, edi
        call ext_006C9E80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x006CBBD0] sub_006CBBD0 (479 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CC4F0();
extern "C" void ext_006D03E0();
extern "C" void ext_00722CA0();

extern "C" __declspec(naked) void __fastcall fn_006CBBD0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        mov ebx, ecx
        test ebp, ebp
        jle L_end
        call ext_006CA6A0
        cmp ebp, eax
        jg L_end
        push esi
        lea eax, [ebp - 0x1]
        push edi
        mov dword ptr [ebx + 0x48], 0xffffffff
        push eax
        mov ecx, ebx
        mov dword ptr [ebx + 0x4c], 0x7fffffff
        call ext_006CA060
        mov ecx, ebx
        mov esi, eax
        xor edi, edi
        call ext_006CA6A0
        cmp ebp, eax
        jge L_1
        push ebp
        mov ecx, ebx
        call ext_006CA060
        mov edi, eax
L_1:
        mov ecx, esi
        call ext_006C9C30
        sub eax, 0x2
        je L_6cbd5e
        sub eax, 0x2
        je L_6cbd5e
        sub eax, 0x4
        jne L_6cbd6c
        mov ecx, esi
        call ext_006C9CD0
        cmp eax, 0x900
        ja L_6cbced
        je L_6cbc71
        cmp eax, 0x100
        je L_6cbc71
        cmp eax, 0x400
        je L_6cbcf4
        jmp L_6cbd6c
L_6cbc71:
        test edi, edi
        je L_6cbccb
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_6cbc8d
        mov ecx, edi
        call ext_006C9CD0
        test ah, 0x1
        jne L_6cbc99
L_6cbc8d:
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        je L_6cbca3
L_6cbc99:
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        jmp L_6cbd63
L_6cbca3:
        fld dword ptr [esp + 0x28]
        push ebp
        lea edx, [esp + 0x14]
        fstp qword ptr [esp + 0x14]
        push ebx
        lea eax, [esp + 0x20]
        push edx
        push eax
        call ext_00722CA0
        fld qword ptr [esp + 0x28]
        add esp, 0xc
        fstp dword ptr [esp]
        jmp L_6cbd63
L_6cbccb:
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push 0x1
        mov ecx, esi
        call ext_006C9DF0
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
L_6cbced:
        cmp eax, 0xc00
        jne L_6cbd6c
L_6cbcf4:
        test edi, edi
        je L_6cbd3c
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_6cbd17
        mov ecx, edi
        call ext_006C9CD0
        test ah, 0x1
        je L_6cbd17
        mov edx, dword ptr [esp + 0x28]
        push edx
        jmp L_6cbd63
L_6cbd17:
        fld dword ptr [esp + 0x28]
        push ebp
        lea eax, [esp + 0x1c]
        fstp qword ptr [esp + 0x1c]
        push ebx
        lea ecx, [esp + 0x18]
        push eax
        push ecx
        call ext_00722CA0
        fld qword ptr [esp + 0x20]
        add esp, 0xc
        fstp dword ptr [esp]
        jmp L_6cbd63
L_6cbd3c:
        mov edx, dword ptr [esp + 0x28]
        mov ecx, esi
        push edx
        push 0x1
        call ext_006C9DF0
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
L_6cbd5e:
        mov eax, dword ptr [esp + 0x28]
        push eax
L_6cbd63:
        push 0x1
        mov ecx, esi
        call ext_006C9DF0
L_6cbd6c:
        test edi, edi
        je L_6cbd9b
        cmp edi, esi
        je L_6cbd9b
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_6cbd9b
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x400
        jne L_6cbd9b
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push ebp
        mov ecx, ebx
        call ext_006CC4F0
L_6cbd9b:
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
L_end:
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006CAEF0] sub_006CAEF0 (671 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" int mem_00993830;
extern "C" int mem_009324A8;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_006CAEF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 24h]
        test ecx, ecx
        jne L_10
        fld qword ptr [mem_00993830]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret 0Ch
L_10:
        mov ebp, dword ptr [esp + 3Ch]
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 10h], edi
        jne L_21
        lea ebp, [esi + 44h]
L_21:
        mov eax, dword ptr [ebp]
        test eax, eax
        jl L_35
        cmp eax, ecx
        mov edi, eax
        jl L_31
        lea edi, [ecx - 1]
L_31:
        mov dword ptr [esp + 10h], edi
L_35:
        lea eax, [esp + 18h]
        mov ecx, esi
        push eax
        push edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [eax + 4]
        cmp ecx, edx
        jl L_AE
        jg L_68
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jb L_AE
L_68:
        lea eax, [esp + 18h]
        mov ecx, esi
        push eax
        push edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [eax]
        cmp ecx, edx
        jne L_A2
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [eax + 4]
        cmp edx, ecx
        jne L_A2
        fild dword ptr [esp + 10h]
        mov dword ptr [ebp], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret 0Ch
L_A2:
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [esp + 3Ch], edi
        dec eax
        cmp edi, eax
        jge L_B095
L_B2:
        lea ecx, [esp + 18h]
        lea ebx, [edi + 1]
        push ecx
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [eax + 4]
        cmp edx, ecx
        jl L_F0
        jg L_E0
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [eax]
        cmp ecx, edx
        jbe L_F0
L_E0:
        mov edx, dword ptr [esi + 24h]
        mov edi, ebx
        dec edx
        cmp edi, edx
        jge L_B091
        jmp L_B2
L_F0:
        lea eax, [esp + 18h]
        mov ecx, esi
        push eax
        push edi
        mov dword ptr [esp + 44h], edi
        lea ebx, [edi + 1]
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 10h]
        push eax
        lea edx, [esp + 24h]
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        lea eax, [esp + 20h]
        mov ecx, esi
        push eax
        push edi
        mov dword ptr [ebp], ebx
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 28h]
        push eax
        push ecx
        lea ecx, [esp + 3Ch]
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp qword ptr [esp + 18h]
        lea ecx, [esp + 10h]
        call ext_006DADE0
        fdivr qword ptr [esp + 18h]
        fiadd dword ptr [esp + 3Ch]
        fcom qword ptr [mem_009324A8]
        fnstsw ax
        test ah, 1
        je L_185
        pop edi
        pop esi
        fstp st(0)
        fld qword ptr [mem_009324A8]
        pop ebp
        pop ebx
        add esp, 20h
        ret 0Ch
L_B091:
        mov dword ptr [esp + 3Ch], edi
L_B095:
        mov edx, dword ptr [esi + 24h]
        pop edi
        mov dword ptr [ebp], edx
        fild dword ptr [esi + 24h]
        pop esi
        pop ebp
        pop ebx
        fsub qword ptr [mem_00993828]
        add esp, 20h
        ret 0Ch
L_AE:
        test edi, edi
        jle L_178
L_B6:
        lea eax, [esp + 28h]
        lea ebx, [edi - 1]
        push eax
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [eax + 4]
        cmp ecx, edx
        jg L_F0B
        jl L_E4
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jae L_F0B
L_E4:
        mov edi, ebx
        test edi, edi
        jle L_178
        jmp L_B6
L_F0B:
        lea eax, [esp + 28h]
        lea ebx, [edi - 1]
        push eax
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 44h], ebx
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 18h]
        push eax
        lea edx, [esp + 24h]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        lea eax, [esp + 28h]
        mov ecx, esi
        push eax
        push ebx
        mov dword ptr [ebp], ebx
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 20h]
        push eax
        push ecx
        lea ecx, [esp + 3Ch]
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp qword ptr [esp + 10h]
        lea ecx, [esp + 18h]
        call ext_006DADE0
        fdivr qword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fiadd dword ptr [esp + 2Ch]
        add esp, 20h
        ret 0Ch
L_178:
        fld qword ptr [mem_009324A8]
        mov dword ptr [ebp], 0
L_185:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret 0Ch
    }
}

extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA7E0();
extern "C" void ext_006C3030();
extern "C" void ext_006C4CF0();
extern "C" void ext_006C8490();
extern "C" void ext_006C9330();
extern "C" void ext_006C9360();
extern "C" void ext_006CA0E0();
extern "C" void ext_006CA2D0();
extern "C" void ext_006CD330();
extern "C" void ext_006D2200();
extern "C" void ext_006DC370();
extern "C" void ext_006DC3C0();
extern "C" void ext_006DD040();
extern "C" void ext_006DD1D0();
extern "C" void ext_006DDC90();
extern "C" void ext_006DEED0();
extern "C" void ext_00708000();
extern "C" void ext_00711A50();
extern "C" void ext_00712000();

extern "C" int mem_008BCB18;
extern "C" int mem_009251D0;
extern "C" int mem_00AA88C4;
extern "C" int mem_00AA88D0;
extern "C" int mem_00AA88DC;
extern "C" int mem_00AA88EC;
extern "C" int mem_00AA8C98;
extern "C" int mem_00AA8C9C;
extern "C" int mem_00AA8CA0;
extern "C" int mem_00AA8CA4;
extern "C" int mem_00AA8CA8;
extern "C" int mem_00AA8CAC;
extern "C" int mem_00AA8CB0;
extern "C" int mem_00AA8CB8;
extern "C" int mem_00AAC0D4;
extern "C" int mem_00AAC100;
extern "C" int mem_00AAC104;
extern "C" int mem_00AAC108;

// [0x006C4DB0] sub_006C4DB0 (2128 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C4DB0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 8h]
        push esi
        push edi
        mov edi, ecx
        push eax
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 10h]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call ext_006C4CF0
        mov esi, eax
        cmp esi, -1
        je L_6C4DE2
        push esi
        lea ecx, [edi + 4D0h]
        call ext_006D2200
    L_6C4DE2:
        mov eax, esi
        pop edi
        pop esi
        ret 10h
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push esi
        mov esi, ecx
        lea ecx, [esi + 168h]
        call ext_006C8490
        lea ecx, [esi + 290h]
        call ext_006C8490
        mov eax, dword ptr [esp + 8h]
        mov ecx, esi
        push eax
        call ext_006DC370
        pop esi
        ret 4h
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push esi
        mov esi, ecx
        lea ecx, [esi + 168h]
        call ext_006C8490
        lea ecx, [esi + 290h]
        call ext_006C8490
        mov eax, dword ptr [esp + 8h]
        mov ecx, esi
        push eax
        call ext_006DC3C0
        pop esi
        ret 4h
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0h]
        push eax
        mov dword ptr fs:[0h], esp
        sub esp, 0B0h
        push ebx
        push edi
        push 0h
        push 0h
        push 0h
        mov edi, ecx
        push offset mem_00AA8CB8
        mov dword ptr [esp + 44h], 3F800000h
        mov dword ptr [esp + 48h], 0h
        mov dword ptr [esp + 4Ch], 0h
        mov dword ptr [esp + 64h], 0h
        mov dword ptr [esp + 68h], 3F800000h
        mov dword ptr [esp + 6Ch], 0h
        mov dword ptr [esp + 50h], 0h
        mov dword ptr [esp + 54h], 0h
        mov dword ptr [esp + 58h], 3F800000h
        mov dword ptr [esp + 70h], 3F400000h
        mov dword ptr [esp + 74h], 0h
        mov dword ptr [esp + 78h], 0h
        call ext_006DDC90
        mov ecx, dword ptr [esp + 0D8h]
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 24h], 0h
        push offset mem_00AA8CB0
        mov dword ptr [esp + 2Ch], 0h
        mov dword ptr [esp + 20h], 0h
        mov dword ptr [esp + 24h], 0h
        mov dword ptr [esp + 18h], 0h
        mov dword ptr [esp + 1Ch], 0h
        mov dword ptr [esp + 30h], 0h
        mov dword ptr [esp + 34h], 3FF00000h
        call ext_006C9330
        push eax
        call dword ptr [mem_009251D0]
        mov ecx, dword ptr [edi + 0F0h]
        add esp, 8h
        test eax, eax
        push offset mem_00AA88EC
        mov dword ptr [esp + 18h], 0h
        sete bl
        mov dword ptr [esp + 1Ch], 0h
        mov dword ptr [esp + 20h], 0h
        mov dword ptr [esp + 24h], 0h
        mov dword ptr [esp + 28h], 0h
        mov dword ptr [esp + 2Ch], 0h
        call ext_00708000
        test eax, eax
        mov dword ptr [esp + 0Ch], eax
        je L_6C4FA3
        mov edx, dword ptr [eax]
        push 0h
        push 0h
        lea ecx, [esp + 1Ch]
        push 0h
        push ecx
        mov ecx, eax
        call dword ptr [edx + 88h]
    L_6C4FA3:
        mov edx, dword ptr [mem_00AAC100]
        push ebp
        push esi
        push 0h
        push 1h
        push edx
        push offset mem_00AA8CAC
        call ext_006DDC90
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA8
        mov esi, eax
        call ext_006DDC90
        add esp, 20h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 1Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea eax, [esp + 3Ch]
        mov ecx, ebp
        push eax
        call ext_006CA2D0
        test bl, bl
        je L_6C5014
        mov ecx, dword ptr [esp + 14h]
        push ebp
        push 0h
        push ecx
        mov ecx, edi
        call ext_006DD1D0
    L_6C5014:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA4
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 24h]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea ecx, [esp + 5Ch]
        push ecx
        mov ecx, ebp
        call ext_006CA2D0
        test bl, bl
        je L_6C5078
        mov edx, dword ptr [esp + 14h]
        push ebp
        push 1h
        push edx
        mov ecx, edi
        call ext_006DD1D0
    L_6C5078:
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA0
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 2Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea edx, [esp + 48h]
        mov ecx, ebp
        push edx
        call ext_006CA2D0
        test bl, bl
        je L_6C50DC
        mov eax, dword ptr [esp + 14h]
        push ebp
        push 2h
        push eax
        mov ecx, edi
        call ext_006DD1D0
    L_6C50DC:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [esp + 18h]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [edi + 0F0h]
        push offset mem_00AA88DC
        mov dword ptr [esp + 20h], 0h
        mov dword ptr [esp + 24h], 0h
        mov dword ptr [esp + 28h], 0h
        mov dword ptr [esp + 2Ch], 0h
        mov dword ptr [esp + 30h], 0h
        mov dword ptr [esp + 34h], 0h
        call ext_00708000
        test eax, eax
        mov dword ptr [esp + 14h], eax
        je L_6C514F
        mov edx, dword ptr [eax]
        push 0h
        push 0h
        lea ecx, [esp + 24h]
        push 0h
        push ecx
        mov ecx, eax
        call dword ptr [edx + 88h]
    L_6C514F:
        mov edx, dword ptr [mem_00AAC108]
        push 0h
        push 2h
        push edx
        push offset mem_00AA8C9C
        call ext_006DDC90
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA8
        mov esi, eax
        call ext_006DDC90
        add esp, 20h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 1Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea eax, [esp + 3Ch]
        mov ecx, ebp
        push eax
        call ext_006CA2D0
        test bl, bl
        je L_6C51BE
        mov ecx, dword ptr [esp + 14h]
        push ebp
        push 0h
        push ecx
        mov ecx, edi
        call ext_006DD1D0
    L_6C51BE:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA4
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 24h]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea ecx, [esp + 5Ch]
        push ecx
        mov ecx, ebp
        call ext_006CA2D0
        test bl, bl
        je L_6C5222
        mov edx, dword ptr [esp + 14h]
        push ebp
        push 1h
        push edx
        mov ecx, edi
        call ext_006DD1D0
    L_6C5222:
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA0
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 2Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea edx, [esp + 48h]
        mov ecx, ebp
        push edx
        call ext_006CA2D0
        test bl, bl
        je L_6C5286
        mov eax, dword ptr [esp + 14h]
        push ebp
        push 2h
        push eax
        mov ecx, edi
        call ext_006DD1D0
    L_6C5286:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [esp + 18h]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [edi + 0F0h]
        push offset mem_00AA88D0
        mov dword ptr [esp + 20h], 0h
        mov dword ptr [esp + 24h], 3FF00000h
        mov dword ptr [esp + 28h], 0h
        mov dword ptr [esp + 2Ch], 3FF00000h
        mov dword ptr [esp + 30h], 0h
        mov dword ptr [esp + 34h], 3FF00000h
        call ext_00708000
        test eax, eax
        mov dword ptr [esp + 14h], eax
        je L_6C52F9
        mov edx, dword ptr [eax]
        push 0h
        push 0h
        lea ecx, [esp + 24h]
        push 0h
        push ecx
        mov ecx, eax
        call dword ptr [edx + 88h]
    L_6C52F9:
        mov edx, dword ptr [mem_00AAC104]
        push 0h
        push 3h
        push edx
        push offset mem_00AA8C98
        call ext_006DDC90
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA8
        mov esi, eax
        call ext_006DDC90
        add esp, 20h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 1Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea eax, [esp + 3Ch]
        mov ecx, ebp
        push eax
        call ext_006CA2D0
        test bl, bl
        je L_6C5368
        mov ecx, dword ptr [esp + 14h]
        push ebp
        push 0h
        push ecx
        mov ecx, edi
        call ext_006DD1D0
    L_6C5368:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA4
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 24h]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea ecx, [esp + 5Ch]
        push ecx
        mov ecx, ebp
        call ext_006CA2D0
        test bl, bl
        je L_6C53CC
        mov edx, dword ptr [esp + 14h]
        push ebp
        push 1h
        push edx
        mov ecx, edi
        call ext_006DD1D0
    L_6C53CC:
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 8h]
        push 0h
        push 0h
        push 0h
        push offset mem_00AA8CA0
        call ext_006DDC90
        add esp, 10h
        mov dword ptr [esp + 10h], eax
        call ext_006CA0E0
        mov ecx, dword ptr [esp + 10h]
        mov ebp, eax
        push 0h
        push ebp
        call ext_006DEED0
        fld qword ptr [esp + 2Ch]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp]
        call ext_006CD330
        lea edx, [esp + 48h]
        mov ecx, ebp
        push edx
        call ext_006CA2D0
        test bl, bl
        je L_6C5430
        mov eax, dword ptr [esp + 14h]
        push ebp
        push 2h
        push eax
        mov ecx, edi
        call ext_006DD1D0
    L_6C5430:
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [esp + 18h]
        push esi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 8h]
        mov ecx, dword ptr [edi + 0F0h]
        push offset mem_00AA88C4
        mov dword ptr [esp + 58h], 0h
        mov dword ptr [esp + 5Ch], 3FF00000h
        call ext_00708000
        test eax, eax
        mov dword ptr [esp + 14h], eax
        je L_6C5483
        mov edx, dword ptr [eax]
        push 0h
        push 0h
        lea ecx, [esp + 5Ch]
        push 0h
        push ecx
        mov ecx, eax
        call dword ptr [edx + 88h]
    L_6C5483:
        mov edx, dword ptr [mem_00AAC0D4]
        push 0h
        push 1h
        push edx
        push offset mem_00AA88C4
        call ext_006DDC90
        add esp, 10h
        mov ebp, eax
        call ext_006CA0E0
        mov esi, eax
        push 0h
        push esi
        mov ecx, ebp
        call ext_006DEED0
        fld qword ptr [esp + 54h]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006CD330
        lea eax, [esp + 68h]
        mov ecx, esi
        push eax
        call ext_006CA2D0
        test bl, bl
        je L_6C54DC
        mov ecx, dword ptr [esp + 14h]
        push esi
        push 0h
        push ecx
        mov ecx, edi
        call ext_006DD1D0
    L_6C54DC:
        mov ebx, dword ptr [esp + 0D0h]
        mov ecx, ebx
        call ext_006C9360
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 8h]
        mov ecx, ebx
        call ext_006C9360
        mov edx, dword ptr [eax]
        push ebp
        mov ecx, eax
        call dword ptr [edx + 8h]
        mov eax, dword ptr [edi + 0F0h]
        xor ebp, ebp
        mov eax, dword ptr [eax + 0C0h]
        test eax, eax
        mov dword ptr [esp + 18h], eax
        jle L_6C55CB
    L_6C551F:
        mov ecx, dword ptr [edi + 0F0h]
        mov edx, dword ptr [ecx + 0D0h]
        mov esi, dword ptr [edx + ebp*4]
        mov ecx, esi
        call ext_00711A50
        test al, al
        je L_6C55BE
        mov ecx, esi
        call ext_00712000
        push eax
        lea ecx, [esp + 78h]
        call ext_006B9D80
        push offset mem_00AA88EC
        lea ecx, [esp + 78h]
        mov dword ptr [esp + 0CCh], 0h
        call ext_006BA7E0
        test al, al
        je L_6C55AA
        push offset mem_00AA88DC
        lea ecx, [esp + 78h]
        call ext_006BA7E0
        test al, al
        je L_6C55AA
        push offset mem_00AA88D0
        lea ecx, [esp + 78h]
        call ext_006BA7E0
        test al, al
        je L_6C55AA
        push offset mem_00AA88C4
        lea ecx, [esp + 78h]
        call ext_006BA7E0
        test al, al
        je L_6C55AA
        push ebx
        push esi
        mov ecx, edi
        call ext_006DD040
    L_6C55AA:
        lea ecx, [esp + 74h]
        mov dword ptr [esp + 0C8h], -1
        call ext_006B9D70
    L_6C55BE:
        mov eax, dword ptr [esp + 18h]
        inc ebp
        cmp ebp, eax
        jl L_6C551F
    L_6C55CB:
        mov ecx, edi
        call ext_006C3030
        pop esi
        pop ebp
        test eax, eax
        je L_6C55E7
        mov ecx, edi
        call ext_006C3030
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, eax
        call dword ptr [edx + 10h]
    L_6C55E7:
        mov ecx, dword ptr [esp + 0B8h]
        pop edi
        pop ebx
        mov dword ptr fs:[0h], ecx
        add esp, 0BCh
        ret 4h
    }
}

// [0x006C9320] sub_006C9320 (16 bytes)
extern "C" void __stdcall ext_006B9EC0(void* a1);
extern "C" __declspec(naked) void __stdcall fn_006C9320(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006CA4F0] sub_006CA4F0 (16 bytes)
extern "C" void ext_006D0370();
extern "C" __declspec(naked) void __cdecl fn_006CA4F0() {
    __asm {
        push 0x0
        call ext_006D0370
        ret
    }
}

// [0x006C3450] sub_006C3450 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_006C3450(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea eax, [edx + eax + 0x1d18]
        ret 4
    }
}

// [0x006C3470] sub_006C3470 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_006C3470(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea eax, [edx + eax + 0x1d38]
        ret 4
    }
}

// [0x006C3500] sub_006C3500 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_006C3500(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea eax, [edx + eax + 0x1d78]
        ret 4
    }
}

// [0x006C3590] sub_006C3590 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_006C3590(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea eax, [edx + eax + 0x1d98]
        ret 4
    }
}

// [0x006C35B0] sub_006C35B0 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_006C35B0(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea eax, [edx + eax + 0x1dd8]
        ret 4
    }
}

// [0x006C3EC0] sub_006C3EC0 (32 bytes)
extern "C" double __cdecl fn_006C3EC0(const double* a, const double* b) {
    return (a[2] * b[2] + a[1] * b[1]) + a[0] * b[0];
}

// [0x006C8490] sub_006C8490 (32 bytes)
extern "C" void __fastcall fn_006C8490(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(int*)(p + 0x8) = 0;
    *(int*)(p + 0x4) = 0;
    *(int*)(p + 0x0) = 0;
    *(unsigned char*)(p + 0x21) = 0;
    *(unsigned char*)(p + 0x20) = 0;
}

// [0x006C9A40] sub_006C9A40 (32 bytes)
extern "C" void __fastcall fn_006C9A40(void* self) {
    // [0x006C9A40]
    int* p = (int*)self;
    p[0] = 0;
    p[3] = -1;
    p[2] = -1;
    p[4] = 0;
}

// [0x006C9A90] sub_006C9A90 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9A90(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], 0x3eaaaaab
        mov byte ptr [eax + 0x8], cl
        mov dword ptr [eax + 0xc], ecx
        mov byte ptr [eax + 0x10], cl
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x006C9CE0] sub_006C9CE0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9CE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        xor edx, esi
        pop esi
        and edx, 0x100
        xor edx, eax
        mov dword ptr [ecx + 0x10], edx
        ret 0x4
    }
}

// [0x006C9D00] sub_006C9D00 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9D00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        xor edx, esi
        pop esi
        and edx, 0xf00
        xor edx, eax
        mov dword ptr [ecx + 0x10], edx
        ret 0x4
    }
}

// [0x006C9DA0] sub_006C9DA0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9DA0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        xor edx, esi
        pop esi
        and edx, 0x300000
        xor edx, eax
        mov dword ptr [ecx + 0x10], edx
        ret 0x4
    }
}

// [0x006C9F00] sub_006C9F00 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9F00(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x4], ecx
        ret 0x4
    }
}

// [0x006CA2D0] sub_006CA2D0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CA2D0(void* self, int edx_unused, const int* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je SHORT done_006CA2D0
        mov edx, dword ptr [eax]
        add ecx, 0x8
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], eax
done_006CA2D0:
        ret 0x4
    }
}

// [0x006CE060] sub_006CE060 (32 bytes)
extern "C" int __fastcall fn_006CE060(void* self) {
    unsigned char* p = static_cast<unsigned char*>(self);
    *reinterpret_cast<int*>(p + 0x48) = -1;
    *reinterpret_cast<int*>(p + 0x4c) = 0x7fffffff;
    *reinterpret_cast<int*>(p + 0x50) = 0;
    return 0;
}

// [0x006CE080] sub_006CE080 (32 bytes)
// [0x006CE080]
extern "C" __declspec(naked) void __fastcall fn_006CE080(void* self, int edx_unused, int a1, int a2, double d) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        fld qword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x48], eax
        mov dword ptr [ecx + 0x4c], edx
        fstp dword ptr [ecx + 0x50]
        xor eax, eax
        ret 0x10
    }
}

// [0x006CE0A0] sub_006CE0A0 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_006CE0A0(void* self) {
    __asm {
        lea eax, [ecx + 0x48]
        mov ecx, dword ptr [ecx + 0x48]
        cmp ecx, -1
        jne short L_NOTMAX
        cmp dword ptr [eax + 0x4], 0x7fffffff
        je short L_ZERO
    L_NOTMAX:
        mov eax, 1
        ret
    L_ZERO:
        xor eax, eax
        ret
    }
}

// [0x006C59C0] sub_006C59C0 (32 bytes)
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006C59C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x104]
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 4*ecx]
        call ext_006E7460
        ret 0x4
    }
}

// [0x006C9F80] sub_006C9F80 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9F80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push -0x1
        push 0x10
        mov dword ptr [ecx + 0x30], eax
        call ext_006D03E0
        ret 0x4
    }
}

// [0x006C9FB0] sub_006C9FB0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9FB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push -0x1
        push 0x10
        mov dword ptr [ecx + 0x34], eax
        call ext_006D03E0
        ret 0x4
    }
}

// [0x006C9FE0] sub_006C9FE0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9FE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push -0x1
        push 0x10
        mov dword ptr [ecx + 0x38], eax
        call ext_006D03E0
        ret 0x4
    }
}

// [0x006CA000] sub_006CA000 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CA000(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push -0x1
        push 0x10
        mov dword ptr [ecx + 0x3c], eax
        call ext_006D03E0
        ret 0x4
    }
}

// [0x006CD330] sub_006CD330 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CD330(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push -1
        push 1
        mov dword ptr [esi + 0x14], eax
        call ext_006D03E0
        mov eax, dword ptr [esi + 0x18]
        inc eax
        mov dword ptr [esi + 0x18], eax
        pop esi
        ret 0x4
    }
}

// [0x006C9340] sub_006C9340 (32 bytes)
extern "C" void ext_006E5150();
extern "C" __declspec(naked) void __fastcall fn_006C9340(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x4c]
        push eax
        push edx
        call ext_006E5150
        ret 0x8
    }
}

// [0x006C9370] sub_006C9370 (32 bytes)
extern "C" void __cdecl fn_006C9370() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8cac, (int)0xaa8ca8);
}

// [0x006C9390] sub_006C9390 (32 bytes)
extern "C" void __cdecl fn_006C9390() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8cac, (int)0xaa8ca4);
}

// [0x006C93B0] sub_006C93B0 (32 bytes)
extern "C" void __cdecl fn_006C93B0() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8cac, (int)0xaa8ca0);
}

// [0x006C93D0] sub_006C93D0 (32 bytes)
extern "C" void __cdecl fn_006C93D0() {
    ext_006C9960((int)0xaa8ca8, (int)0xaa8c9c, (int)0xaa8cb8);
}

// [0x006C93F0] sub_006C93F0 (32 bytes)
extern "C" void __cdecl fn_006C93F0() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8c9c, (int)0xaa8ca4);
}

// [0x006C9410] sub_006C9410 (32 bytes)
extern "C" void __cdecl fn_006C9410() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8c9c, (int)0xaa8ca0);
}

// [0x006C9430] sub_006C9430 (32 bytes)
extern "C" void __cdecl fn_006C9430() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8c98, (int)0xaa8ca8);
}

// [0x006C9450] sub_006C9450 (32 bytes)
extern "C" void __cdecl fn_006C9450() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8c98, (int)0xaa8ca4);
}

// [0x006C9470] sub_006C9470 (32 bytes)
extern "C" void __cdecl fn_006C9470() {
    ext_006C9960((int)0xaa8cb8, (int)0xaa8c98, (int)0xaa8ca0);
}

// [0x006C9490] sub_006C9490 (32 bytes)
extern "C" void __cdecl fn_006C9490() {
    ext_006C9960(0, (int)0xaa8cec, (int)0xaa8ca8);
}

// [0x006C94B0] sub_006C94B0 (32 bytes)
extern "C" void __cdecl fn_006C94B0() {
    ext_006C9960(0, (int)0xaa8cec, (int)0xaa8ca4);
}

// [0x006C94D0] sub_006C94D0 (32 bytes)
extern "C" void __cdecl fn_006C94D0() {
    ext_006C9960(0, (int)0xaa8cec, (int)0xaa8ca0);
}

// [0x006C9590] sub_006C9590 (32 bytes)
extern "C" void __cdecl fn_006C9590() {
    ext_006C9960(0, (int)0xaa8ca8, (int)0xaa8d70);
}

// [0x006C95B0] sub_006C95B0 (32 bytes)
extern "C" void __cdecl fn_006C95B0() {
    ext_006C9960(0, (int)0xaa8d70, (int)0xaa8ca4);
}

// [0x006C95D0] sub_006C95D0 (32 bytes)
extern "C" void __cdecl fn_006C95D0() {
    ext_006C9960(0, (int)0xaa8d70, (int)0xaa8ca0);
}

// [0x006C9620] sub_006C9620 (32 bytes)
extern "C" void __cdecl fn_006C9620() {
    ext_006C9960(0, (int)0xaa8d90, (int)0xaa8ca8);
}

// [0x006C9640] sub_006C9640 (32 bytes)
extern "C" void __cdecl fn_006C9640() {
    ext_006C9960(0, (int)0xaa8d90, (int)0xaa8ca4);
}

// [0x006C9660] sub_006C9660 (32 bytes)
extern "C" void __cdecl fn_006C9660() {
    ext_006C9960(0, (int)0xaa8d90, (int)0xaa8ca0);
}

// [0x006C9680] sub_006C9680 (32 bytes)
extern "C" void __cdecl fn_006C9680() {
    ext_006C9960(0, (int)0xaa8d9c, (int)0xaa8ca8);
}

// [0x006C96A0] sub_006C96A0 (32 bytes)
extern "C" void __cdecl fn_006C96A0() {
    ext_006C9960(0, (int)0xaa8d9c, (int)0xaa8ca4);
}

// [0x006C96C0] sub_006C96C0 (32 bytes)
extern "C" void __cdecl fn_006C96C0() {
    ext_006C9960(0, (int)0xaa8d9c, (int)0xaa8ca0);
}

// [0x006C96E0] sub_006C96E0 (32 bytes)
extern "C" void __cdecl fn_006C96E0() {
    ext_006C9960(0, (int)0xaa8da8, (int)0xaa8ca8);
}

// [0x006C9700] sub_006C9700 (32 bytes)
extern "C" void __cdecl fn_006C9700() {
    ext_006C9960(0, (int)0xaa8da8, (int)0xaa8ca4);
}

// [0x006C9720] sub_006C9720 (32 bytes)
extern "C" void __cdecl fn_006C9720() {
    ext_006C9960(0, (int)0xaa8da8, (int)0xaa8ca0);
}

// [0x006C9750] sub_006C9750 (32 bytes)
extern "C" void __cdecl fn_006C9750() {
    ext_006C9960(0, (int)0xaa8db8, (int)0xaa8ca8);
}

// [0x006C9770] sub_006C9770 (32 bytes)
extern "C" void __cdecl fn_006C9770() {
    ext_006C9960(0, (int)0xaa8db8, (int)0xaa8ca4);
}

// [0x006C9790] sub_006C9790 (32 bytes)
extern "C" void __cdecl fn_006C9790() {
    ext_006C9960(0, (int)0xaa8db8, (int)0xaa8ca0);
}

// [0x006C97B0] sub_006C97B0 (32 bytes)
extern "C" void __cdecl fn_006C97B0() {
    ext_006C9960(0, (int)0xaa8dc4, (int)0xaa8ca8);
}

// [0x006C97D0] sub_006C97D0 (32 bytes)
extern "C" void __cdecl fn_006C97D0() {
    ext_006C9960(0, (int)0xaa8dc4, (int)0xaa8ca4);
}

// [0x006C97F0] sub_006C97F0 (32 bytes)
extern "C" void __cdecl fn_006C97F0() {
    ext_006C9960(0, (int)0xaa8dc4, (int)0xaa8ca0);
}

// [0x006C9810] sub_006C9810 (32 bytes)
extern "C" void __cdecl fn_006C9810() {
    ext_006C9960(0, (int)0xaa8dcc, (int)0xaa8ca8);
}

// [0x006C9830] sub_006C9830 (32 bytes)
extern "C" void __cdecl fn_006C9830() {
    ext_006C9960(0, (int)0xaa8dcc, (int)0xaa8ca4);
}

// [0x006C9850] sub_006C9850 (32 bytes)
extern "C" void __cdecl fn_006C9850() {
    ext_006C9960(0, (int)0xaa8dcc, (int)0xaa8ca0);
}

// [0x006C9870] sub_006C9870 (32 bytes)
extern "C" void __cdecl fn_006C9870() {
    ext_006C9960(0, (int)0xaa8dd4, (int)0xaa8ca8);
}

// [0x006C9890] sub_006C9890 (32 bytes)
extern "C" void __cdecl fn_006C9890() {
    ext_006C9960(0, (int)0xaa8dd4, (int)0xaa8ca4);
}

// [0x006C98B0] sub_006C98B0 (32 bytes)
extern "C" void __cdecl fn_006C98B0() {
    ext_006C9960(0, (int)0xaa8ca0, (int)0xaa8dd4);
}

// [0x006CA520] sub_006CA520 (32 bytes)
extern "C" void ext_006D0370();
extern "C" __declspec(naked) void __fastcall fn_006CA520(void* self) {
    __asm {
        mov dword ptr [ecx + 0x48], 0xffffffff
        mov dword ptr [ecx + 0x4c], 0x7fffffff
        mov edx, dword ptr [ecx + 0x18]
        push 0x1
        inc edx
        mov dword ptr [ecx + 0x18], edx
        call ext_006D0370
        ret
    }
}

// [0x006CA500] sub_006CA500 (32 bytes)
extern "C" void ext_006CA570();
extern "C" __declspec(naked) void __fastcall fn_006CA500(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0x0
        call ext_006D0370
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006CA570
        pop esi
        ret 0x4
    }
}

// [0x006C25B0] sub_006C25B0 (48 bytes)
extern "C" void* __fastcall fn_006C25B0(void* self, int edx_unused, const int* src) {
    int* dst = (int*)self;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    return self;
}

// [0x006C3040] sub_006C3040 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3062
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 1
        jne short L_006C3062
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
L_006C3062:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C3070] sub_006C3070 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3070(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3092
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 2
        jne short L_006C3092
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C3092:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C30F0] sub_006C30F0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C30F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3112
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 4
        jne short L_006C3112
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C3112:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C3120] sub_006C3120 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3120(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3142
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 5
        jne short L_006C3142
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C3142:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C3150] sub_006C3150 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3150(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3172
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 6
        jne short L_006C3172
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C3172:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C3180] sub_006C3180 (48 bytes)
// [0x006C3180] sub_006C3180 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3180(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C31A2
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 7
        jne short L_006C31A2
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C31A2:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C31B0] sub_006C31B0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C31B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C31D2
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 8
        jne short L_006C31D2
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C31D2:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C31E0] sub_006C31E0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C31E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je short L_006C3202
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 9
        jne short L_006C3202
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
    L_006C3202:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C3360] sub_006C3360 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3360(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, eax
        shl edx, 0x5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        mov ecx, dword ptr [esp + 0x8]
        shl edx, 0x4
        mov dword ptr [edx + eax + 0x1f04], ecx
        ret 0x8
    }
}

// [0x006C3390] sub_006C3390 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3390(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, eax
        shl edx, 0x5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        mov ecx, dword ptr [esp + 0x8]
        shl edx, 0x4
        mov dword ptr [edx + eax + 0x1e78], ecx
        ret 0x8
    }
}

// [0x006C33C0] sub_006C33C0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C33C0(void* self, int edx_unused, int idx, int* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, eax
        shl edx, 0x5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 0x4
        mov ecx, dword ptr [edx + eax + 0x1e78]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [edx], ecx
        ret 0x8
    }
}

// [0x006C33F0] sub_006C33F0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C33F0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, eax
        shl edx, 0x5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        mov cl, byte ptr [esp + 0x8]
        shl edx, 0x4
        mov byte ptr [edx + eax + 0x1e7c], cl
        ret 0x8
    }
}

// [0x006C3EE0] sub_006C3EE0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3EE0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        fld qword ptr [esp + 0xc]
        fmul qword ptr [ecx]
        fstp qword ptr [eax]
        fld qword ptr [esp + 0xc]
        fmul qword ptr [ecx + 0x8]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [esp + 0xc]
        fmul qword ptr [ecx + 0x10]
        fstp qword ptr [eax + 0x10]
        ret
    }
}

// [0x006C9D30] sub_006C9D30 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9D30(void* self, int edx_unused, unsigned int a1, unsigned int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [ecx + 0x10]
        and eax, 0x3000000
        mov edx, eax
        not edx
        and edx, esi
        mov esi, dword ptr [esp + 0x8]
        and esi, eax
        or edx, esi
        pop esi
        mov dword ptr [ecx + 0x10], edx
        ret 0x8
    }
}

// [0x006C9D70] sub_006C9D70 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9D70(void* self, int edx_unused, unsigned int a1, unsigned int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [ecx + 0x10]
        and eax, 0x30000000
        mov edx, eax
        not edx
        and edx, esi
        mov esi, dword ptr [esp + 0x8]
        and esi, eax
        or edx, esi
        pop esi
        mov dword ptr [ecx + 0x10], edx
        ret 0x8
    }
}

// [0x006C9DC0] sub_006C9DC0 (48 bytes)
extern "C" float mem_0099381C;

extern "C" __declspec(naked) float __fastcall fn_006C9DC0(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x2
        jge scaled
        fld dword ptr [ecx + 4*eax + 0x14]
        ret 0x4
scaled:
        movsx eax, word ptr [ecx + 2*eax + 0x18]
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        fmul dword ptr [mem_0099381C]
        ret 0x4
    }
}

// [0x006C9F20] sub_006C9F20 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9F20(void* self, int edx_unused, unsigned char flag) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        test al, al
        mov eax, dword ptr [ecx + 0x10]
        je short fn_006C9F20_clear
        and eax, 0xfff1ffff
        or eax, 0x10000
        mov dword ptr [ecx + 0x10], eax
        ret 0x4
fn_006C9F20_clear:
        and eax, 0xfff0ffff
        mov dword ptr [ecx + 0x10], eax
        ret 0x4
    }
}

// [0x006CA090] sub_006CA090 (48 bytes)
extern "C" int mem_00B5D768;
extern "C" int mem_009251D8; /* "&|b" */
extern "C" __declspec(naked) void __fastcall fn_006CA090(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [mem_00B5D768]
        sub edx, ecx
        mov dword ptr [mem_00B5D768], edx
    done:
        push eax
        call dword ptr [mem_009251D8]
        pop ecx
        ret
    }
}

// [0x006C2830] sub_006C2830 (48 bytes)
extern "C" void ext_006FBC70();

extern "C" __declspec(naked) void* __fastcall fn_006C2830(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        test esi, esi
        je done
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0xc]
        mov ecx, eax
        call ext_006FBC70
done:
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_006D2390();

// [0x006C2CB0] sub_006C2CB0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006C2CB0(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x118
        mov dword ptr [esp + 0x4], 0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006C2E30] sub_006C2E30 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006C2E30(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x138
        mov dword ptr [esp + 0x4], 0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006CA540] sub_006CA540 (48 bytes)
extern "C" void ext_006D0370();
extern "C" __declspec(naked) void __fastcall fn_006CA540(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x48], 0xffffffff
        mov dword ptr [ecx + 0x4c], 0x7fffffff
        mov edx, dword ptr [ecx + 0x18]
        inc edx
        push 0x1
        mov dword ptr [ecx + 0x24], eax
        mov dword ptr [ecx + 0x18], edx
        call ext_006D0370
        ret 0x4
    }
}

// [0x006C3420] sub_006C3420 (48 bytes)
extern "C" void ext_006C78B0();
extern "C" void ext_00714990();

extern "C" __declspec(naked) void __fastcall fn_006C3420(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4c8]
        test eax, eax
        je short loc_fallback
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        call ext_00714990
        ret 0x4
loc_fallback:
        mov edx, dword ptr [esp + 0x4]
        push edx
        call ext_006C78B0
        ret 0x4
    }
}

// [0x006C9900] sub_006C9900 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9900(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        call ext_006C9960
        test eax, eax
        je short loc_fail
        mov ecx, eax
        call ext_006CA6A0
        test eax, eax
        je short loc_fail
        mov al, 0x1
        ret 0xc
loc_fail:
        xor al, al
        ret 0xc
    }
}

// [0x006C9930] sub_006C9930 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9930(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        call ext_006C99D0
        test eax, eax
        je short loc_fail
        mov ecx, eax
        call ext_006CA6A0
        test eax, eax
        je short loc_fail
        mov al, 0x1
        ret 0xc
    loc_fail:
        xor al, al
        ret 0xc
    }
}

// [0x006CA020] sub_006CA020 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CA020(void* self, int edx_unused, int v) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, 0x51eb851f
        imul edi
        mov esi, edx
        mov ecx, dword ptr [ecx + 0x20]
        sar esi, 3
        mov eax, esi
        shr eax, 31
        add esi, eax
        mov eax, edi
        cdq
        mov edi, 25
        idiv edi
        mov eax, dword ptr [ecx + 4*esi]
        pop edi
        pop esi
        lea edx, [edx + 4*edx]
        lea eax, [eax + 8*edx]
        ret 0x4
    }
}

// [0x006C9BF0] sub_006C9BF0 (64 bytes)
extern "C" void __fastcall fn_006C9BF0(void* self, int edx_unused, void* src) {
    int* d = (int*)self;
    int* s = (int*)src;
    d[0] = s[0];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[8] = s[8];
}

// [0x006CE020] sub_006CE020 (64 bytes)
extern "C" void ext_006CD350();

extern "C" __declspec(naked) float __fastcall fn_006CE020(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 0x48]
        jne L_call
        cmp ebx, dword ptr [esi + 0x4c]
        je L_ret
L_call:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, esi
        push eax
        push ebx
        push edi
        call ext_006CD350
        fstp dword ptr [esi + 0x50]
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], ebx
L_ret:
        fld dword ptr [esi + 0x50]
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006C2ED0] sub_006C2ED0 (64 bytes)
extern "C" void ext_00708000();
extern "C" int mem_0092A278;

extern "C" __declspec(naked) int __fastcall fn_006C2ED0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xf0]
        push 0xaa88c4
        call ext_00708000
        test eax, eax
        je short L_zero_006C2ED0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x7c]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne short L_zero_006C2ED0
        mov eax, 1
        ret
L_zero_006C2ED0:
        xor eax, eax
        ret
    }
}

// [0x006C3210] sub_006C3210 (64 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E69A0();

extern "C" __declspec(naked) void __fastcall fn_006C3210(void* self, int edx_unused, void* a1) {
    __asm {
        push 0xaa88ec
        call ext_006BB1A0
        test eax, eax
        je done
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [edx + 0x14]
        push ecx
        mov ecx, dword ptr [edx + 0x10]
        push ecx
        mov ecx, dword ptr [edx + 0xc]
        push ecx
        mov ecx, dword ptr [edx + 0x8]
        push ecx
        mov ecx, dword ptr [edx + 0x4]
        mov edx, dword ptr [edx]
        push ecx
        push edx
        mov ecx, eax
        call ext_006E69A0
    done:
        ret 0x4
    }
}

// [0x006C32F0] sub_006C32F0 (64 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E69A0();

extern "C" __declspec(naked) void __fastcall fn_006C32F0(void* self, int edx_unused, void* a1) {
    __asm {
        push 0xaa88d0
        call ext_006BB1A0
        test eax, eax
        je done
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [edx + 0x14]
        push ecx
        mov ecx, dword ptr [edx + 0x10]
        push ecx
        mov ecx, dword ptr [edx + 0xc]
        push ecx
        mov ecx, dword ptr [edx + 0x8]
        push ecx
        mov ecx, dword ptr [edx + 0x4]
        mov edx, dword ptr [edx]
        push ecx
        push edx
        mov ecx, eax
        call ext_006E69A0
    done:
        ret 0x4
    }
}

// [0x006C3280] sub_006C3280 (64 bytes)
extern "C" void ext_006BB1A0();
extern "C" void ext_006E69A0();

extern "C" __declspec(naked) void __fastcall fn_006C3280(void* self, int edx_unused, int* p) {
    __asm {
        push 0xaa88dc
        call ext_006BB1A0
        test eax, eax
        je done
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [edx + 0x14]
        push ecx
        mov ecx, dword ptr [edx + 0x10]
        push ecx
        mov ecx, dword ptr [edx + 0xc]
        push ecx
        mov ecx, dword ptr [edx + 0x8]
        push ecx
        mov ecx, dword ptr [edx + 0x4]
        mov edx, dword ptr [edx]
        push ecx
        push edx
        mov ecx, eax
        call ext_006E69A0
done:
        ret 0x4
    }
}

// [0x006CC6B0] sub_006CC6B0 (64 bytes)
extern "C" void ext_006C9D20();
extern "C" void ext_006CA060();

extern "C" __declspec(naked) bool __fastcall fn_006CC6B0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jle L_zero
        lea eax, [edi - 0x1]
        push ebx
        push eax
        call ext_006CA060
        push edi
        mov ecx, esi
        mov ebx, eax
        call ext_006CA060
        mov ecx, ebx
        call ext_006C9D20
        test eax, 0x2000000
        pop ebx
        je L_zero
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    L_zero:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006CC950] sub_006CC950 (64 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006CC950(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        test edi, edi
        jle short L_false_006CC950
        lea eax, [edi - 1]
        push ebx
        push eax
        call ext_006CA060
        push edi
        mov ecx, esi
        mov ebx, eax
        call ext_006CA060
        mov ecx, ebx
        call ext_006C9D60
        test eax, 20000000h
        pop ebx
        je short L_false_006CC950
        pop edi
        mov al, 1
        pop esi
        ret 4
L_false_006CC950:
        pop edi
        xor al, al
        pop esi
        ret 4
    }
}

// [0x006CCAB0] sub_006CCAB0 (64 bytes)
extern "C" void ext_006C9DC0();
extern "C" void ext_006CC950();

extern "C" __declspec(naked) void __fastcall fn_006CCAB0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp+16]
        mov esi, ecx
        push edi
        mov dword ptr [esp+12], 0
        call ext_006CC950
        test al, al
        je short L_fail
        dec edi
        mov ecx, esi
        push edi
        call ext_006CA060
        push 5
        mov ecx, eax
        call ext_006C9DC0
        pop edi
        pop esi
        pop ecx
        ret 4
    L_fail:
        fld dword ptr [esp+8]
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006CC810] sub_006CC810 (64 bytes)
extern "C" void ext_006CC6B0();
extern "C" void ext_006CA060();
extern "C" void ext_006C9DC0();

extern "C" __declspec(naked) float __fastcall fn_006CC810(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], 0x3eaaaaab
        call ext_006CC6B0
        test al, al
        je short L_fail_006CC810
        dec edi
        mov ecx, esi
        push edi
        call ext_006CA060
        push 3
        mov ecx, eax
        call ext_006C9DC0
        pop edi
        pop esi
        pop ecx
        ret 4
L_fail_006CC810:
        fld dword ptr [esp + 0x8]
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006CC850] sub_006CC850 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CC850(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], 0x3eaaaaab
        call ext_006CC6F0
        test al, al
        je short L_else
        push edi
        mov ecx, esi
        call ext_006CA060
        push 2
        mov ecx, eax
        call ext_006C9DC0
        pop edi
        pop esi
        pop ecx
        ret 4
L_else:
        fld dword ptr [esp + 0x8]
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006CCAF0] sub_006CCAF0 (64 bytes)
extern "C" void ext_006C9DC0();
extern "C" void ext_006CC990();

extern "C" __declspec(naked) void __fastcall fn_006CCAF0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], 0
        call ext_006CC990
        test al, al
        je fail_path
        push edi
        mov ecx, esi
        call ext_006CA060
        push 4
        mov ecx, eax
        call ext_006C9DC0
        pop edi
        pop esi
        pop ecx
        ret 4
fail_path:
        fld dword ptr [esp + 8]
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006C30A0] sub_006C30A0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C30A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        je fail_path
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 0x4
        je ret_obj
        mov ecx, dword ptr [esi + 0x158]
        mov edx, dword ptr [ecx]
        call dword ptr [edx]
        cmp eax, 0x5
        je ret_obj
        mov ecx, dword ptr [esi + 0x158]
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp eax, 0x6
        jne fail_path
ret_obj:
        mov eax, dword ptr [esi + 0x158]
        pop edi
        pop esi
        ret
fail_path:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006C84B0] sub_006C84B0 (80 bytes)
extern "C" void ext_006C8510();
extern "C" void ext_00714570();

extern "C" __declspec(naked) void __fastcall fn_006C84B0(void* self) {
    __asm {
        push -1
        push 008B8DFBh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 8]
        call ext_00714570
        mov ecx, esi
        mov dword ptr [esp + 10h], 0
        call ext_006C8510
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x006C92D0] sub_006C92D0 (80 bytes)
extern "C" void ext_006DEEA0();
extern "C" void ext_006C92D0();

extern "C" __declspec(naked) void __fastcall fn_006C92D0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ebp, ecx
        push edi
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        mov edi, eax
        dec edi
        js done_label
        push ebx
loop_label:
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ebx, eax
        mov ecx, ebx
        call ext_006DEEA0
        cmp eax, 8
        jne skip_label
        push ebx
        mov ecx, ebp
        call ext_006C92D0
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x10]
skip_label:
        dec edi
        jns loop_label
        pop ebx
done_label:
        pop edi
        pop esi
        pop ebp
        ret 4
    }
}

// [0x006C27E0] sub_006C27E0 (80 bytes)
extern "C" void ext_006C2720();
extern "C" void ext_006C2830();
extern "C" void ext_006FB650();

extern "C" __declspec(naked) void __fastcall fn_006C27E0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test esi, esi
        jne short L_006C27F3
        pop edi
        xor al, al
        pop esi
        ret 4
L_006C27F3:
        mov ecx, esi
        call ext_006C2720
        test eax, eax
        je short L_006C280D
        push esi
        mov ecx, esi
        call ext_006C2720
        mov ecx, eax
        call ext_006C2830
L_006C280D:
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 0Ch]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0Ch]
        mov ecx, eax
        call ext_006FB650
        pop edi
        pop esi
        ret 4
    }
}

// [0x006C2CE0] sub_006C2CE0 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006FC200();
extern "C" void ext_006FB650();

extern "C" __declspec(naked) void __fastcall fn_006C2CE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        push edi
        je L_ret
        mov edi, dword ptr [eax + 0xf0]
        test edi, edi
        je L_ret
        mov ecx, dword ptr [ecx + 0xf0]
        push 0xaa8920
        call ext_00708000
        mov esi, eax
        test esi, esi
        je L_ret
        push edi
        mov ecx, esi
        call ext_006FC200
        test al, al
        jne L_ret
        push 0
        push edi
        mov ecx, esi
        call ext_006FB650
    L_ret:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006C2B60] sub_006C2B60 (80 bytes)
extern "C" void ext_006FB650();
extern "C" void ext_006FC200();
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_006C2B60(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        push edi
        je done
        mov edi, dword ptr [eax + 0xf0]
        test edi, edi
        je done
        mov ecx, dword ptr [ecx + 0xf0]
        push 0xaa8934
        call ext_00708000
        mov esi, eax
        test esi, esi
        je done
        push edi
        mov ecx, esi
        call ext_006FC200
        test al, al
        jne done
        push 0
        push edi
        mov ecx, esi
        call ext_006FB650
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x006C42E0] sub_006C42E0 (96 bytes)
extern "C" int mem_0092A278;
extern "C" __declspec(naked) int __cdecl fn_006C42E0(const double* m) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld qword ptr [eax + 0x30]
        fmul qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        fmul qword ptr [eax + 0x28]
        fsubp st(1), st
        fld qword ptr [eax + 0x10]
        fmul qword ptr [eax + 0x20]
        fld qword ptr [eax + 0x30]
        fmul qword ptr [eax]
        fsubp st(1), st
        fld qword ptr [eax]
        fmul qword ptr [eax + 0x28]
        fld qword ptr [eax + 0x20]
        fmul qword ptr [eax + 0x8]
        fsubp st(1), st
        fmul qword ptr [eax + 0x50]
        fxch st(1)
        fmul qword ptr [eax + 0x48]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [eax + 0x40]
        faddp st(1), st
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        jne short fn_006C42E0_zero
        mov eax, 0x1
        ret
    fn_006C42E0_zero:
        xor eax, eax
        ret
    }
}

// [0x006C7B60] sub_006C7B60 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C7B60(void* out, void* mat, void* vec) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 08h]
        fld qword ptr [eax]
        fld qword ptr [eax + 08h]
        fld qword ptr [eax + 10h]
        fld st(0)
        fmul qword ptr [ecx + 40h]
        fld st(2)
        fmul qword ptr [ecx + 20h]
        mov eax, dword ptr [esp + 04h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fadd qword ptr [ecx + 60h]
        fstp qword ptr [eax]
        fld st(0)
        fmul qword ptr [ecx + 48h]
        fld st(2)
        fmul qword ptr [ecx + 28h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx + 08h]
        faddp st(1), st
        fadd qword ptr [ecx + 68h]
        fstp qword ptr [eax + 08h]
        fmul qword ptr [ecx + 50h]
        fxch st(1)
        fmul qword ptr [ecx + 30h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 10h]
        faddp st(1), st
        fadd qword ptr [ecx + 70h]
        fstp qword ptr [eax + 10h]
        ret
    }
}

// [0x006C4A30] sub_006C4A30 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C4A30(void* out, void* mat, void* vec) {
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        fld     qword ptr [eax]
        fld     qword ptr [eax + 0x8]
        fld     qword ptr [eax + 0x10]
        fld     st(0)
        fmul    qword ptr [ecx + 0x40]
        fld     st(2)
        fmul    qword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x4]
        faddp   st(1), st
        fld     st(3)
        fmul    qword ptr [ecx]
        faddp   st(1), st
        fstp    qword ptr [eax]
        fld     st(0)
        fmul    qword ptr [ecx + 0x48]
        fld     st(2)
        fmul    qword ptr [ecx + 0x28]
        faddp   st(1), st
        fld     st(3)
        fmul    qword ptr [ecx + 0x8]
        faddp   st(1), st
        fstp    qword ptr [eax + 0x8]
        fmul    qword ptr [ecx + 0x50]
        fxch    st(1)
        fmul    qword ptr [ecx + 0x30]
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [ecx + 0x10]
        faddp   st(1), st
        fstp    qword ptr [eax + 0x10]
        ret
    }
}

// [0x006C81A0] sub_006C81A0 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C81A0() {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        fld qword ptr [edx]
        fld st(0)
        fmul qword ptr [ecx]
        fstp qword ptr [eax]
        fld st(0)
        fmul qword ptr [ecx + 0x8]
        fstp qword ptr [eax + 0x8]
        fmul qword ptr [ecx + 0x10]
        fstp qword ptr [eax + 0x10]
        fld qword ptr [edx + 0x8]
        fld st(0)
        fmul qword ptr [ecx + 0x20]
        fstp qword ptr [eax + 0x20]
        fld st(0)
        fmul qword ptr [ecx + 0x28]
        fstp qword ptr [eax + 0x28]
        fmul qword ptr [ecx + 0x30]
        fstp qword ptr [eax + 0x30]
        fld qword ptr [edx + 0x10]
        fld st(0)
        fmul qword ptr [ecx + 0x40]
        fstp qword ptr [eax + 0x40]
        fld st(0)
        fmul qword ptr [ecx + 0x48]
        fstp qword ptr [eax + 0x48]
        fmul qword ptr [ecx + 0x50]
        fstp qword ptr [eax + 0x50]
        ret
    }
}

// [0x006CA0E0] sub_006CA0E0 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006CA140();

// SEH-guarded allocation: push -1 / handler / prev-frame, alloc 0x98 bytes,
// if non-null construct via sub_006CA140, then unlink the SEH frame.
extern "C" __declspec(naked) void __fastcall fn_006CA0E0(void* self) {
    __asm {
        push    -1
        push    0x8b8fdb
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push    eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push    ecx
        push    0x98
        call    ext_006A5C62
        add     esp, 4
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        je      null_path
        mov     ecx, eax
        call    ext_006CA140
        mov     ecx, dword ptr [esp + 4]
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add     esp, 0x10
        ret
null_path:
        mov     ecx, dword ptr [esp + 4]
        xor     eax, eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add     esp, 0x10
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x006C9EA0] sub_006C9EA0 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DF0();

extern "C" __declspec(naked) void __fastcall fn_006C9EA0(void* self, int edx_unused, float scale) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006C9C30
        cmp eax, 8
        jne L_done
        mov ecx, esi
        call ext_006C9CD0
        cmp eax, 0x400
        je L_first
        cmp eax, 0xc00
        jne L_done
L_first:
        push 0
        mov ecx, esi
        call ext_006C9DC0
        fmul dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        push 0
        call ext_006C9DF0
        push 1
        mov ecx, esi
        call ext_006C9DC0
        fmul dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        push 1
        call ext_006C9DF0
L_done:
        pop esi
        ret 4
    }
}

// [0x006C59F0] sub_006C59F0 (96 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C59F0();

extern "C" __declspec(naked) void __fastcall fn_006C59F0(void* self, int edx_unused, int a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        test al, al
        mov al, byte ptr [edi + 0x4cc]
        je L_ret_flag
        test al, al
        je L_scan
L_true:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
L_scan:
        push 0
        mov ecx, edi
        call ext_006C2860
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle L_none
L_loop:
        push 1
        push esi
        mov ecx, edi
        call ext_006C28D0
        mov ecx, eax
        call ext_006C59F0
        test al, al
        jne L_true
        inc esi
        cmp esi, ebx
        jl L_loop
L_none:
        xor al, al
L_ret_flag:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006C4C90] sub_006C4C90 (96 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C4C90();
extern "C" void ext_006DC7E0();
extern "C" __declspec(naked) char __fastcall fn_006C4C90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        push ebp
        mov esi, ecx
        push eax
        call ext_006DC7E0
        xor edi, edi
        mov ecx, esi
        push edi
        mov bl, al
        call ext_006C2860
        test eax, eax
        jle done
loop_top:
        mov ecx, dword ptr [esp + 0x14]
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call ext_006C28D0
        mov ecx, eax
        call ext_006C4C90
        test al, al
        jne set_bl
        test bl, bl
        je skip_set
set_bl:
        mov bl, 0x1
skip_set:
        push 0
        mov ecx, esi
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl loop_top
done:
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006CCA50] sub_006CCA50 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D70();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D03E0();

extern "C" __declspec(naked) void __fastcall fn_006CCA50(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0x10]
        dec eax
        cmp ebx, eax
        jge done
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 8
        jne done
        mov al, byte ptr [esp + 0x14]
        push 0x10000000
        neg al
        sbb eax, eax
        mov ecx, edi
        and eax, 0x10000000
        push eax
        call ext_006C9D70
        push ebx
        push 0x10
        mov ecx, esi
        call ext_006D03E0
done:
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x006C4A90] sub_006C4A90 (112 bytes)
extern "C" void __cdecl fn_006C4A90(void* self) {
    unsigned int* p = (unsigned int*)self;
    p[0x78 / 4] = 0;
    p[0x50 / 4] = 0;
    p[0x28 / 4] = 0;
    p[0] = 0;
    p[0x70 / 4] = 0;
    p[0x68 / 4] = 0;
    p[0x60 / 4] = 0;
    p[0x58 / 4] = 0;
    p[0x48 / 4] = 0;
    p[0x40 / 4] = 0;
    p[0x38 / 4] = 0;
    p[0x30 / 4] = 0;
    p[0x20 / 4] = 0;
    p[0x18 / 4] = 0;
    p[0x10 / 4] = 0;
    p[0x08 / 4] = 0;
    p[0x7c / 4] = 0x3ff00000u;
    p[0x54 / 4] = 0x3ff00000u;
    p[0x2c / 4] = 0x3ff00000u;
    p[0x04 / 4] = 0x3ff00000u;
    p[0x74 / 4] = 0;
    p[0x6c / 4] = 0;
    p[0x64 / 4] = 0;
    p[0x5c / 4] = 0;
    p[0x4c / 4] = 0;
    p[0x44 / 4] = 0;
    p[0x3c / 4] = 0;
    p[0x34 / 4] = 0;
    p[0x24 / 4] = 0;
    p[0x1c / 4] = 0;
    p[0x14 / 4] = 0;
    p[0x0c / 4] = 0;
}

// [0x006CCB90] sub_006CCB90 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D70();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D03E0();

extern "C" __declspec(naked) void __fastcall fn_006CCB90(void* self) {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0xc]
        dec eax
        cmp ebx, eax
        jge L_end
        push esi
        push ebx
        mov ecx, edi
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 8
        jne L_skip
        push 0x10000000
        push 0x10000000
        mov ecx, esi
        call ext_006C9D70
        mov eax, dword ptr [esp + 0x14]
        mov ecx, esi
        push eax
        push 4
        call ext_006C9DF0
L_skip:
        push ebx
        push 0x10
        mov ecx, edi
        call ext_006D03E0
        pop esi
L_end:
        pop edi
        pop ebx
        ret 8
    }
}

// [0x006CC890] sub_006CC890 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D30();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA060();
extern "C" void ext_006D03E0();

extern "C" __declspec(naked) void __fastcall fn_006CC890(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test ebx, ebx
        jle done
        lea eax, [ebx - 1]
        push esi
        push eax
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 8
        jne skip
        push 0x2000000
        push 0x2000000
        mov ecx, esi
        call ext_006C9D30
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push 3
        mov ecx, esi
        call ext_006C9DF0
skip:
        push ebx
        push 0x10
        mov ecx, edi
        call ext_006D03E0
        pop esi
done:
        pop edi
        pop ebx
        ret 8
    }
}

// [0x006CC8F0] sub_006CC8F0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CC8F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0xc]
        dec eax
        cmp ebx, eax
        jge done
        push esi
        push ebx
        mov ecx, edi
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 0x8
        jne skip
        push 0x1000000
        push 0x1000000
        mov ecx, esi
        call ext_006C9D30
        mov eax, dword ptr [esp + 0x14]
        mov ecx, esi
        push eax
        push 0x2
        call ext_006C9DF0
skip:
        push ebx
        push 0x10
        mov ecx, edi
        call ext_006D03E0
        pop esi
done:
        pop edi
        pop ebx
        ret 0x8
    }
}

// [0x006CC7B0] sub_006CC7B0 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D30();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006D03E0();

extern "C" __declspec(naked) void __fastcall fn_006CC7B0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0x10]
        dec eax
        cmp ebx, eax
        jge short L_done
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne short L_done
        mov al, byte ptr [esp + 0x14]
        push 0x1000000
        neg al
        sbb eax, eax
        mov ecx, edi
        and eax, 0x1000000
        push eax
        call ext_006C9D30
        push ebx
        push 0x10
        mov ecx, esi
        call ext_006D03E0
L_done:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x006CCB30] sub_006CCB30 (96 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9D70();
extern "C" void ext_006C9DF0();
extern "C" void ext_006D03E0();
extern "C" __declspec(naked) void __fastcall fn_006CCB30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        test ebx, ebx
        jle L_done
        lea eax, [ebx - 0x1]
        push esi
        push eax
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_skip
        push 0x20000000
        push 0x20000000
        mov ecx, esi
        call ext_006C9D70
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push 0x5
        mov ecx, esi
        call ext_006C9DF0
L_skip:
        push ebx
        push 0x10
        mov ecx, edi
        call ext_006D03E0
        pop esi
L_done:
        pop edi
        pop ebx
        ret 0x8
    }
}

// [0x006C83D0] sub_006C83D0 (112 bytes)
extern "C" void ext_006C8490();
extern "C" void ext_00714570();

extern "C" __declspec(naked) void __fastcall fn_006C83D0(void* self) {
    __asm {
        push -1
        push 0x8b8db9
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi + 0x10], edi
        mov dword ptr [esi + 0x14], edi
        mov dword ptr [esi + 0x18], edi
        lea ecx, [esi + 0x28]
        mov dword ptr [esi + 0x1c], edi
        call ext_00714570
        lea ecx, [esi + 0xa8]
        mov dword ptr [esp + 0x14], edi
        call ext_00714570
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x1
        call ext_006C8490
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x006C3520] sub_006C3520 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C3520(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8c08e8
        push eax
        mov fs:[0], esp
        lea eax, [esp + 0x14]
        mov dword ptr [esp + 0x8], 0
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0xf0]
        shl edx, 4
        lea ecx, [edx + eax + 0x1d98]
        call ext_007873F0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006D80A0
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov fs:[0], ecx
        add esp, 0xc
        ret 0x24
    }
}

// [0x006C3490] sub_006C3490 (112 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_007873F0();

extern "C" __declspec(naked) void __fastcall fn_006C3490(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8c08e8h
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 14h]
        mov dword ptr [esp + 8], 0
        push eax
        mov eax, dword ptr [esp + 14h]
        mov edx, eax
        shl edx, 5
        sub edx, eax
        mov eax, dword ptr [ecx + 0f0h]
        shl edx, 4
        lea ecx, [edx + eax + 1d78h]
        call ext_007873F0
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 8], 0ffffffffh
        call ext_006D80A0
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0ch
        ret 24h
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x006C9DF0] sub_006C9DF0 (112 bytes)
extern "C" void ext_00872828();
extern "C" float mem_00957758;
extern "C" float mem_0099381C;
extern "C" float mem_00993818;

extern "C" __declspec(naked) void __fastcall fn_006C9DF0(void* self) {
    __asm {
        fld     dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        cmp     esi, 0x2
        mov     edi, ecx
        jge     L_hi
        fstp    dword ptr [edi + 4*esi + 0x14]
        pop     edi
        pop     esi
        ret     0x8
    L_hi:
        je      L_23
        cmp     esi, 0x3
        jne     L_28
    L_23:
        fcom    dword ptr [mem_00957758]
        fnstsw  ax
        test    ah, 0x41
        jne     L_28
        fstp    st(0)
        fld     dword ptr [mem_00957758]
        jmp     L_mul
    L_28:
        cmp     esi, 0x2
        je      L_32
        cmp     esi, 0x3
        jne     L_mul
    L_32:
        fcom    dword ptr [mem_0099381C]
        fnstsw  ax
        test    ah, 0x1
        je      L_mul
        fstp    st(0)
        fld     dword ptr [mem_0099381C]
    L_mul:
        fmul    dword ptr [mem_00993818]
        call    ext_00872828
        mov     word ptr [edi + 2*esi + 0x18], ax
        pop     edi
        pop     esi
        ret     0x8
    }
}

// [0x006C91E0] sub_006C91E0 (112 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006DE1A0();
extern "C" void ext_006E73B0();

extern "C" __declspec(naked) void* __fastcall fn_006C91E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 008B8E23h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 1Ch]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0Ch], esi
        call ext_006B9D20
        push 1
        push 00AA8CCCh
        lea ecx, [esi + 50h]
        mov dword ptr [esp + 1Ch], 0
        call ext_006E73B0
        mov ecx, dword ptr [edi + 4Ch]
        push 0
        mov byte ptr [esp + 18h], 1
        call ext_006DE1A0
        mov ecx, dword ptr [esp + 0Ch]
        mov dword ptr [esi + 4Ch], eax
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x006C2E60] sub_006C2E60 (112 bytes)
extern "C" void ext_00708000();
extern "C" __declspec(naked) void __fastcall fn_006C2E60(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xaa88c4
        mov ecx, dword ptr [esi + 0xf0]
        call ext_00708000
        mov ecx, dword ptr [esi + 0xf0]
        mov ebx, dword ptr [esp + 0x10]
        add ecx, 0x1c08
        push 0
        mov edi, eax
        push 0
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x18]
        push 0
        push edx
        mov byte ptr [esp + 0x20], bl
        call dword ptr [eax + 0x8c]
        test edi, edi
        je fn_006C2E60_done
        mov eax, dword ptr [edi]
        and ebx, 0xff
        mov dword ptr [esp + 0x10], ebx
        sub esp, 8
        fild dword ptr [esp + 0x18]
        mov ecx, edi
        fstp qword ptr [esp]
        call dword ptr [eax + 0x80]
fn_006C2E60_done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006C9170] sub_006C9170 (112 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006DDC90();
extern "C" void ext_006E73B0();

extern "C" __declspec(naked) void __fastcall fn_006C9170(void* self) {
    __asm {
        push -1
        push 0x8b8e23
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_006B9D80
        push 1
        push 0xaa8ccc
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x18], 0
        call ext_006E73B0
        push 0
        push 0
        push 0
        push 0xaa8ce0
        mov byte ptr [esp + 0x20], 1
        call ext_006DDC90
        mov ecx, dword ptr [esp + 0x18]
        add esp, 0x10
        mov dword ptr [esi + 0x4c], eax
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x006CAE80] sub_006CAE80 (112 bytes)
extern "C" void ext_006C9AB0();
extern "C" void ext_006CA020();
extern "C" void ext_006CA570();

extern "C" __declspec(naked) void __fastcall fn_006CAE80(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x24]
        lea eax, [edi + 0x1]
        push eax
        call ext_006CA570
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esp + 0x14]
        push 0x0
        mov edx, dword ptr [esp + 0x14]
        push 0x0
        push 0x3eaaaaab
        push 0x3eaaaaab
        push 0x0
        push 0x0
        inc eax
        push 0x0
        push 0x100
        mov dword ptr [esi + 0x24], eax
        mov eax, dword ptr [esp + 0x2c]
        push 0x8
        push ecx
        push edx
        push eax
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9AB0
        mov dword ptr [esi + 0x48], 0xffffffff
        mov dword ptr [esi + 0x4c], 0x7fffffff
        mov eax, dword ptr [esi + 0x18]
        inc eax
        mov dword ptr [esi + 0x18], eax
        mov eax, edi
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x006C9960] sub_006C9960 (112 bytes)
extern "C" void ext_006DE7C0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) int __fastcall fn_006C9960(void* self, int edx_unused, int a, int b, int c) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov ebx, ecx
        xor edi, edi
        test esi, esi
        mov ecx, dword ptr [ebx + 0x4c]
        je L1
        push esi
        call ext_006DE7C0
        mov ecx, eax
    L1:
        test ecx, ecx
        jne L2
        test esi, esi
        jne FAIL
    L2:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L3
        push esi
        call ext_006DE7C0
        mov ecx, eax
    L3:
        test ecx, ecx
        jne L4
        test esi, esi
        jne FAIL
    L4:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L5
        push eax
        call ext_006DE7C0
        mov ecx, eax
    L5:
        test ecx, ecx
        je FAIL
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne DONE
    FAIL:
        push 0
        lea ecx, [ebx + 0x50]
        call ext_006E7440
    DONE:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006CC740] sub_006CC740 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CC740(void* self, int edx_unused, int n, unsigned char flag) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        jle L_done
        lea eax, [edi - 0x1]
        push eax
        call ext_006CA060
        mov ecx, esi
        mov ebx, eax
        call ext_006CA6A0
        cmp edi, eax
        jge L_skip
        push edi
        mov ecx, esi
        call ext_006CA060
L_skip:
        mov ecx, ebx
        call ext_006C9C30
        cmp eax, 0x8
        jne L_done
        mov cl, byte ptr [esp + 0x14]
        push 0x2000000
        neg cl
        sbb ecx, ecx
        and ecx, 0x2000000
        push ecx
        mov ecx, ebx
        call ext_006C9D30
        push edi
        push 0x10
        mov ecx, esi
        call ext_006D03E0
L_done:
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x006CC9E0] sub_006CC9E0 (112 bytes)
extern "C" void ext_006C9D70();
extern "C" __declspec(naked) void __fastcall fn_006CC9E0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        jle done
        lea eax, [edi - 1]
        push eax
        call ext_006CA060
        mov ecx, esi
        mov ebx, eax
        call ext_006CA6A0
        cmp edi, eax
        jge skip1
        push edi
        mov ecx, esi
        call ext_006CA060
skip1:
        mov ecx, ebx
        call ext_006C9C30
        cmp eax, 8
        jne done
        mov cl, byte ptr [esp + 0x14]
        push 0x20000000
        neg cl
        sbb ecx, ecx
        and ecx, 0x20000000
        push ecx
        mov ecx, ebx
        call ext_006C9D70
        push edi
        push 0x10
        mov ecx, esi
        call ext_006D03E0
done:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x006C99D0] sub_006C99D0 (112 bytes)
extern "C" void ext_006DE7C0();
extern "C" void ext_006DE970();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) int __fastcall fn_006C99D0(void* self, int edx_unused, int a, int b, int c) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov ebx, ecx
        xor edi, edi
        test esi, esi
        mov ecx, dword ptr [ebx + 0x4c]
        je L1
        push esi
        call ext_006DE7C0
        mov ecx, eax
    L1:
        test ecx, ecx
        jne L2
        test esi, esi
        jne FAIL
    L2:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L3
        push esi
        call ext_006DE7C0
        mov ecx, eax
    L3:
        test ecx, ecx
        jne L4
        test esi, esi
        jne FAIL
    L4:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L5
        push eax
        call ext_006DE970
        mov ecx, eax
    L5:
        test ecx, ecx
        je FAIL
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne END
    FAIL:
        push 0
        lea ecx, [ebx + 0x50]
        call ext_006E7440
    END:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006C4CF0] sub_006C4CF0 (128 bytes)
extern "C" void ext_006C8520();

extern "C" __declspec(naked) void __fastcall fn_006C4CF0(void* self) {
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0x10
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        je L_fail_006C4CF0
        mov edi, dword ptr [ebp+0x4d0]
        mov ecx, dword ptr [esp+0x2c]
        mov edx, dword ptr [esp+0x30]
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [esp+0x28]
        xor esi, esi
        test edi, edi
        mov dword ptr [esp+0x14], eax
        mov dword ptr [esp+0x18], ecx
        mov dword ptr [esp+0x1c], edx
        jle L_fail_006C4CF0
        xor ebx, ebx
    L_loop_006C4CF0:
        mov eax, dword ptr [ebp+0x4e0]
        lea ecx, [esp+0x10]
        add eax, ebx
        push eax
        call ext_006C8520
        test al, al
        jne L_found_006C4CF0
        inc esi
        add ebx, 0x10
        cmp esi, edi
        jl L_loop_006C4CF0
    L_fail_006C4CF0:
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        add esp, 0x10
        ret 0x10
    L_found_006C4CF0:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006C9C40] sub_006C9C40 (128 bytes)
extern "C" void ext_006C9D70();

extern "C" __declspec(naked) void __fastcall fn_006C9C40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x10]
        and eax, 0xe
        cmp al, 0x8
        je skip
        cmp edi, 0x8
        jne skip
        push 0x3000000
        push 0x0
        call ext_006C9D30
        push 0x3eaaaaab
        push 0x2
        mov ecx, esi
        call ext_006C9DF0
        push 0x3eaaaaab
        push 0x3
        mov ecx, esi
        call ext_006C9DF0
        push 0x30000000
        push 0x0
        mov ecx, esi
        call ext_006C9D70
        push 0x0
        push 0x4
        mov ecx, esi
        call ext_006C9DF0
        push 0x0
        push 0x5
        mov ecx, esi
        call ext_006C9DF0
skip:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, eax
        xor ecx, edi
        pop edi
        and ecx, 0xe
        xor ecx, eax
        mov dword ptr [esi + 0x10], ecx
        pop esi
        ret 0x4
    }
}

// [0x006C5940] sub_006C5940 (128 bytes)
// Callee declarations: ext_006A5C62, ext_006B9D80, ext_006D2170 (MSVC inline asm resolves them by name).
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D80();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_006C5940(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+0x10], 0
        je L_null
        mov ecx, [esp+0x18]
        push ecx
        mov ecx, eax
        call ext_006B9D80
        jmp L_after
L_null:
        xor eax, eax
L_after:
        lea ecx, [esi+0xf4]
        mov [esp+0x18], eax
        lea edx, [esp+0x18]
        mov dword ptr [esp+0x10], -1
        mov eax, [ecx]
        push edx
        push eax
        call ext_006D2170
        mov ecx, [esp+8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x006C9250] sub_006C9250 (128 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006C92D0();
extern "C" void ext_006DEEA0();
extern "C" void ext_007641C0();

extern "C" __declspec(naked) void __fastcall fn_006C9250(void* self) {
    __asm {
        push -1
        push 0x8b8e23
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+4], esi
        mov ecx, dword ptr [esi+0x4c]
        mov dword ptr [esp+0x10], 1
        call ext_006DEEA0
        cmp eax, 8
        jne L_skip1
        mov eax, dword ptr [esi+0x4c]
        mov ecx, esi
        push eax
        call ext_006C92D0
L_skip1:
        mov ecx, dword ptr [esi+0x4c]
        test ecx, ecx
        je L_skip2
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx]
L_skip2:
        lea ecx, [esi+0x50]
        mov byte ptr [esp+0x10], 0
        call ext_007641C0
        mov ecx, esi
        mov dword ptr [esp+0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp+0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006C9B70] sub_006C9B70 (128 bytes)
extern "C" void ext_006C9C40();
extern "C" void ext_006C9D00();
extern "C" void ext_006C9DA0();
extern "C" void ext_006C9E70();
extern "C" void ext_006C9F20();
extern "C" void ext_00789BA0();
extern "C" void ext_0079E5B0();
extern "C" __declspec(naked) void __fastcall fn_006C9B70(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0079E5B0
        mov edx, dword ptr [esp + 0x10]
        mov ecx, esi
        push edx
        call ext_00789BA0
        push 0x8
        mov ecx, esi
        call ext_006C9C40
        push 0x200
        mov ecx, esi
        call ext_006C9D00
        mov eax, dword ptr [esp + 0x14]
        mov ecx, esi
        push eax
        push 0x0
        call ext_006C9E70
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push 0x1
        mov ecx, esi
        call ext_006C9E70
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, esi
        push edx
        push 0x2
        call ext_006C9E70
        push 0x0
        mov ecx, esi
        call ext_006C9F20
        push 0x0
        mov ecx, esi
        call ext_006C9DA0
        pop esi
        ret 0x18
    }
}

// [0x006CA250] sub_006CA250 (128 bytes)
extern "C" void ext_006CA2F0();
extern "C" void ext_006D03E0();
extern "C" void ext_006D2160();
extern "C" int mem_008B8E49;
extern "C" int mem_00993820;

extern "C" __declspec(naked) void __fastcall fn_006CA250(void* self) {
    __asm {
        push -1
        push offset mem_008B8E49
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], offset mem_00993820
        mov dword ptr [esp + 0x10], 1
        call ext_006CA2F0
        push -1
        push 0x200
        mov ecx, esi
        mov byte ptr [esi + 0x1c], 1
        mov byte ptr [esi + 0x1d], 1
        call ext_006D03E0
        lea ecx, [esi + 0x80]
        mov byte ptr [esp + 0x10], 0
        call ext_006D2160
        lea ecx, [esi + 0x68]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006CB860] sub_006CB860 (128 bytes)
extern "C" void ext_006C9A90();
extern "C" void ext_006CB190();
extern "C" void ext_006CBDB0();
extern "C" void ext_006CC6B0();
extern "C" void ext_006CC810();
extern "C" void ext_006CC950();
extern "C" void ext_006CCAB0();

extern "C" __declspec(naked) void __fastcall fn_006CB860(void* self) {
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x8]
        call    ext_006C9A90
        mov     edi, dword ptr [esp + 0x28]
        mov     ecx, esi
        push    edi
        call    ext_006CB190
        fstp    dword ptr [esp + 0x8]
        push    edi
        mov     ecx, esi
        call    ext_006CC810
        fstp    dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    ext_006CC6B0
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x14], al
        call    ext_006CCAB0
        fstp    dword ptr [esp + 0x14]
        push    edi
        mov     ecx, esi
        call    ext_006CC950
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], al
        call    ext_006CBDB0
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, 0x6
        fstp    dword ptr [esp + 0x1c]
        lea     esi, [esp + 0x8]
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     0x8
    }
}

// [0x006CC290] sub_006CC290 (128 bytes)
extern "C" void ext_006C9A90();
extern "C" void ext_006CBF00();
extern "C" void ext_006CC600();
extern "C" void ext_006CC6F0();
extern "C" void ext_006CC850();
extern "C" void ext_006CC990();
extern "C" void ext_006CCAF0();
extern "C" __declspec(naked) void __fastcall fn_006CC290(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x8]
        call    ext_006C9A90
        mov     edi, dword ptr [esp + 0x28]
        mov     ecx, esi
        push    edi
        call    ext_006CBF00
        fstp    dword ptr [esp + 0x8]
        push    edi
        mov     ecx, esi
        call    ext_006CC850
        fstp    dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    ext_006CC6F0
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x14], al
        call    ext_006CC990
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], al
        call    ext_006CCAF0
        fstp    dword ptr [esp + 0x14]
        push    edi
        mov     ecx, esi
        call    ext_006CC600
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, 0x6
        fstp    dword ptr [esp + 0x1c]
        lea     esi, [esp + 0x8]
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     0x8
    }
}

// [0x006CADF0] sub_006CADF0 (144 bytes)
extern "C" void ext_006C9AB0();
extern "C" void ext_006C9F60();
extern "C" void ext_006CABD0();
extern "C" void ext_006CD350();

extern "C" __declspec(naked) void __fastcall fn_006CADF0(void* self) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x18], edi
        mov dword ptr [esp+0x1c], edi
        call ext_006C9F60
        lea ecx, [esp+0x10]
        call ext_006C9F60
        mov ebp, dword ptr [esp+0x44]
        push edi
        push edi
        mov ebx, dword ptr [esp+0x44]
        push 0x3eaaaaab
        push 0x3eaaaaab
        push edi
        push edi
        push edi
        mov edi, dword ptr [esp+0x5c]
        push 0x100
        push 8
        push ebp
        push edi
        mov dword ptr [esi+0x48], 0xffffffff
        push ebx
        mov ecx, esi
        mov dword ptr [esi+0x4c], 0x7fffffff
        call ext_006CD350
        push ecx
        lea ecx, [esp+0x38]
        fstp dword ptr [esp]
        push edi
        push ebx
        call ext_006C9AB0
        lea eax, [esp+0x10]
        push ebp
        push eax
        push edi
        push ebx
        mov ecx, esi
        call ext_006CABD0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0xc
    }
}

// [0x006C3F10] sub_006C3F10 (160 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C3F10(void* dst, const void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], edx
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [eax + 0x20], edx
        mov edx, dword ptr [ecx + 0x24]
        mov dword ptr [eax + 0x24], edx
        mov edx, dword ptr [ecx + 0x28]
        mov dword ptr [eax + 0x28], edx
        mov edx, dword ptr [ecx + 0x2c]
        mov dword ptr [eax + 0x2c], edx
        mov edx, dword ptr [ecx + 0x30]
        mov dword ptr [eax + 0x30], edx
        mov edx, dword ptr [ecx + 0x34]
        mov dword ptr [eax + 0x34], edx
        mov edx, dword ptr [ecx + 0x40]
        mov dword ptr [eax + 0x40], edx
        mov edx, dword ptr [ecx + 0x44]
        mov dword ptr [eax + 0x44], edx
        mov edx, dword ptr [ecx + 0x48]
        mov dword ptr [eax + 0x48], edx
        mov edx, dword ptr [ecx + 0x4c]
        mov dword ptr [eax + 0x4c], edx
        mov edx, dword ptr [ecx + 0x50]
        mov dword ptr [eax + 0x50], edx
        mov edx, dword ptr [ecx + 0x54]
        mov dword ptr [eax + 0x54], edx
        mov edx, dword ptr [ecx + 0x60]
        mov dword ptr [eax + 0x60], edx
        mov edx, dword ptr [ecx + 0x64]
        mov dword ptr [eax + 0x64], edx
        mov edx, dword ptr [ecx + 0x68]
        mov dword ptr [eax + 0x68], edx
        mov edx, dword ptr [ecx + 0x6c]
        mov dword ptr [eax + 0x6c], edx
        mov edx, dword ptr [ecx + 0x70]
        mov dword ptr [eax + 0x70], edx
        mov ecx, dword ptr [ecx + 0x74]
        mov dword ptr [eax + 0x74], ecx
        ret
    }
}

// [0x006CA2F0] sub_006CA2F0 (176 bytes)
extern "C" void ext_006CA090();

extern "C" __declspec(naked) void __fastcall fn_006CA2F0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x48], 0xffffffff
        mov     dword ptr [esi + 0x4c], 0x7fffffff
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        je      L_after_loop
        mov     ecx, dword ptr [esi + 0x28]
        mov     eax, 0x51eb851f
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        push    edi
        shr     eax, 0x1f
        lea     edi, [edx + eax - 1]
        test    edi, edi
        jl      L_free_outer
    L_loop:
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [ecx + edi * 4]
        test    eax, eax
        je      L_next
        push    0x400
        push    eax
        call    ext_006CA090
        mov     edx, dword ptr [esi + 0x20]
        add     esp, 8
        mov     dword ptr [edx + edi * 4], 0
    L_next:
        dec     edi
        jns     L_loop
    L_free_outer:
        mov     ecx, dword ptr [esi + 0x28]
        mov     eax, 0x51eb851f
        add     ecx, 0x63f
        imul    ecx
        sar     edx, 9
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        shl     edx, 8
        push    edx
        push    ecx
        call    ext_006CA090
        add     esp, 8
        pop     edi
    L_after_loop:
        push    -1
        push    0x10
        mov     ecx, esi
        mov     dword ptr [esi + 0x20], 0
        mov     dword ptr [esi + 0x24], 0
        mov     dword ptr [esi + 0x28], 0
        mov     dword ptr [esi + 0x2c], 0xffffffff
        call    ext_006D03E0
        pop     esi
        ret
    }
}

// [0x006C1B10] sub_006C1B10 (19 bytes)
extern "C" void ext_006DC8E0();

extern "C" __declspec(naked) void __fastcall fn_006C1B10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x20f8]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x006CA060] sub_006CA060 (13 bytes)
extern "C" void ext_006CA020();
extern "C" __declspec(naked) void __stdcall fn_006CA060(int a) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006CA020
        ret 4
    }
}

// [0x006C1AF0] sub_006C1AF0 (18 bytes)
extern "C" void __stdcall ext_00705790(int a, int b);

extern "C" __declspec(naked) void __stdcall fn_006C1AF0(int a, int b) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_00705790
        ret 0x8
    }
}

// [0x006C8EB0] sub_006C8EB0 (36 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5D608;
extern "C" int mem_00B5D610;
extern "C" int mem_00B5D618;

extern "C" void __cdecl fn_006C8EB0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5D608 = -*p;
    *(double*)&mem_00B5D610 = -*p;
    *(double*)&mem_00B5D618 = -*p;
}

// [0x006C1BB0] sub_006C1BB0 (36 bytes)
extern "C" int mem_00AA8C8C;
extern "C" int mem_00AA8C94;

extern "C" __declspec(naked) void* __stdcall fn_006C1BB0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_case01
        dec eax
        je L_case01
        dec eax
        je L_case2
        xor eax, eax
        ret 0x4
    L_case2:
        mov eax, offset mem_00AA8C94
        ret 0x4
    L_case01:
        mov eax, offset mem_00AA8C8C
        ret 0x4
    }
}

// [0x006C0470] sub_006C0470 (44 bytes)
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;
extern "C" __declspec(naked) void __fastcall fn_006C0470(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5F060]
        __asm _emit 0x3B __asm _emit 0xC1 // cmp eax, ecx
        __asm _emit 0x75 __asm _emit 0x05 // jne +5
        __asm _emit 0xB0 __asm _emit 0x01 // mov al, 0x1
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
        cmp eax, dword ptr [mem_00B5EB78]
        __asm _emit 0x75 __asm _emit 0x05 // jne +5
        __asm _emit 0xB0 __asm _emit 0x01 // mov al, 0x1
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
        cmp eax, dword ptr [mem_00B5E400]
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC0 // sete al
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
    }
}

// [0x006C8F50] sub_006C8F50 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5D640;
extern "C" int mem_00B5D648;
extern "C" int mem_00B5D650;
extern "C" int mem_00B5D658;

extern "C" void __cdecl fn_006C8F50() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5D640 = -*p;
    *(double*)&mem_00B5D648 = -*p;
    *(double*)&mem_00B5D650 = -*p;
    *(double*)&mem_00B5D658 = -*p;
}

// [0x006C8E60] sub_006C8E60 (57 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C8E60() {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B5D5F0], ecx
        mov dword ptr [mem_00B5D5F4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B5D5F8], ecx
        mov dword ptr [mem_00B5D5FC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B5D600], ecx
        mov dword ptr [mem_00B5D604], edx
        ret
    }
}

// [0x006C04D0] sub_006C04D0 (57 bytes)
extern "C" int mem_00B5D448;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) bool __fastcall fn_006C04D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5D448]
        cmp eax, ecx
        jne L_006C04E3
        mov al, 0x1
        ret 0x4
    L_006C04E3:
        cmp eax, dword ptr [mem_00B5F060]
        jne L_006C04F0
        mov al, 0x1
        ret 0x4
    L_006C04F0:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_006C04FD
        mov al, 0x1
        ret 0x4
    L_006C04FD:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x006C0950] sub_006C0950 (63 bytes)
extern "C" void __fastcall fn_006C0950(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x6d0) = a1;
    *(int*)(p + 0x6d4) = a2;
    *(int*)(p + 0x6d8) = a3;
    *(int*)(p + 0x6dc) = a4;
    *(int*)(p + 0x6e0) = a5;
    *(int*)(p + 0x6e4) = a6;
}

// [0x006C0B10] sub_006C0B10 (63 bytes)
extern "C" void __fastcall fn_006C0B10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0xc38) = a1;
    *(int*)(p + 0xc3c) = a2;
    *(int*)(p + 0xc40) = a3;
    *(int*)(p + 0xc44) = a4;
    *(int*)(p + 0xc48) = a5;
    *(int*)(p + 0xc4c) = a6;
}

// [0x006C0540] sub_006C0540 (63 bytes)
extern "C" void __fastcall fn_006C0540(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x1e8) = a1;
    *(int*)(p + 0x1ec) = a2;
    *(int*)(p + 0x1f0) = a3;
    *(int*)(p + 0x1f4) = a4;
    *(int*)(p + 0x1f8) = a5;
    *(int*)(p + 0x1fc) = a6;
}

// [0x006C0810] sub_006C0810 (63 bytes)
extern "C" void __fastcall fn_006C0810(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x508) = a1;
    *(int*)(p + 0x50c) = a2;
    *(int*)(p + 0x510) = a3;
    *(int*)(p + 0x514) = a4;
    *(int*)(p + 0x518) = a5;
    *(int*)(p + 0x51c) = a6;
}

// [0x006C0BA0] sub_006C0BA0 (63 bytes)
extern "C" void __fastcall fn_006C0BA0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0xcd8) = a1;
    *(int*)(p + 0xcdc) = a2;
    *(int*)(p + 0xce0) = a3;
    *(int*)(p + 0xce4) = a4;
    *(int*)(p + 0xce8) = a5;
    *(int*)(p + 0xcec) = a6;
}

// [0x006C0660] sub_006C0660 (63 bytes)
extern "C" void __fastcall fn_006C0660(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x328) = a1;
    *(int*)(p + 0x32c) = a2;
    *(int*)(p + 0x330) = a3;
    *(int*)(p + 0x334) = a4;
    *(int*)(p + 0x338) = a5;
    *(int*)(p + 0x33c) = a6;
}

// [0x006C0780] sub_006C0780 (63 bytes)
extern "C" void __fastcall fn_006C0780(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x468) = a1;
    *(int*)(p + 0x46c) = a2;
    *(int*)(p + 0x470) = a3;
    *(int*)(p + 0x474) = a4;
    *(int*)(p + 0x478) = a5;
    *(int*)(p + 0x47c) = a6;
}

// [0x006C06F0] sub_006C06F0 (63 bytes)
extern "C" void __fastcall fn_006C06F0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x3c8) = a1;
    *(int*)(p + 0x3cc) = a2;
    *(int*)(p + 0x3d0) = a3;
    *(int*)(p + 0x3d4) = a4;
    *(int*)(p + 0x3d8) = a5;
    *(int*)(p + 0x3dc) = a6;
}

// [0x006C05D0] sub_006C05D0 (63 bytes)
extern "C" void __fastcall fn_006C05D0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x288) = a1;
    *(int*)(p + 0x28c) = a2;
    *(int*)(p + 0x290) = a3;
    *(int*)(p + 0x294) = a4;
    *(int*)(p + 0x298) = a5;
    *(int*)(p + 0x29c) = a6;
}

// [0x006C0C50] sub_006C0C50 (63 bytes)
extern "C" void __fastcall fn_006C0C50(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0xe00) = a1;
    *(int*)(p + 0xe04) = a2;
    *(int*)(p + 0xe08) = a3;
    *(int*)(p + 0xe0c) = a4;
    *(int*)(p + 0xe10) = a5;
    *(int*)(p + 0xe14) = a6;
}

// [0x006C08C0] sub_006C08C0 (63 bytes)
extern "C" void __fastcall fn_006C08C0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x630) = a1;
    *(int*)(p + 0x634) = a2;
    *(int*)(p + 0x638) = a3;
    *(int*)(p + 0x63c) = a4;
    *(int*)(p + 0x640) = a5;
    *(int*)(p + 0x644) = a6;
}

// [0x006C0F00] sub_006C0F00 (63 bytes)
extern "C" void __fastcall fn_006C0F00(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x1518) = a1;
    *(int*)(p + 0x151c) = a2;
    *(int*)(p + 0x1520) = a3;
    *(int*)(p + 0x1524) = a4;
    *(int*)(p + 0x1528) = a5;
    *(int*)(p + 0x152c) = a6;
}

// [0x006C0CE0] sub_006C0CE0 (63 bytes)
extern "C" void __fastcall fn_006C0CE0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0xea0) = a1;
    *(int*)(p + 0xea4) = a2;
    *(int*)(p + 0xea8) = a3;
    *(int*)(p + 0xeac) = a4;
    *(int*)(p + 0xeb0) = a5;
    *(int*)(p + 0xeb4) = a6;
}

// [0x006C10E0] sub_006C10E0 (63 bytes)
extern "C" void __fastcall fn_006C10E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x1988) = a1;
    *(int*)(p + 0x198c) = a2;
    *(int*)(p + 0x1990) = a3;
    *(int*)(p + 0x1994) = a4;
    *(int*)(p + 0x1998) = a5;
    *(int*)(p + 0x199c) = a6;
}

// [0x006C1200] sub_006C1200 (63 bytes)
extern "C" void __fastcall fn_006C1200(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x1ac8) = a1;
    *(int*)(p + 0x1acc) = a2;
    *(int*)(p + 0x1ad0) = a3;
    *(int*)(p + 0x1ad4) = a4;
    *(int*)(p + 0x1ad8) = a5;
    *(int*)(p + 0x1adc) = a6;
}

// [0x006C0F90] sub_006C0F90 (63 bytes)
extern "C" void __fastcall fn_006C0F90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x15b8) = a1;
    *(int*)(p + 0x15bc) = a2;
    *(int*)(p + 0x15c0) = a3;
    *(int*)(p + 0x15c4) = a4;
    *(int*)(p + 0x15c8) = a5;
    *(int*)(p + 0x15cc) = a6;
}

// [0x006C1170] sub_006C1170 (63 bytes)
extern "C" void __fastcall fn_006C1170(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x1a28) = a1;
    *(int*)(p + 0x1a2c) = a2;
    *(int*)(p + 0x1a30) = a3;
    *(int*)(p + 0x1a34) = a4;
    *(int*)(p + 0x1a38) = a5;
    *(int*)(p + 0x1a3c) = a6;
}

// [0x006C0730] sub_006C0730 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0730(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x3c8]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x3cc]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x3d0]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x3d4]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x3d8]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x3dc]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0610] sub_006C0610 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0610(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x288]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x28c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x290]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x294]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x298]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x29c]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0580] sub_006C0580 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0580(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x1e8]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x1ec]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x1f0]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x1f4]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x1f8]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x1fc]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C07C0] sub_006C07C0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C07C0(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x468]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x46c]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 0x470]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [ecx + 0x474]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x478]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x47c]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C0850] sub_006C0850 (74 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006C0850(void* self, int /*edx*/, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x508]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x50c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x510]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x514]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x518]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x51c]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0990] sub_006C0990 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0990(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x6d0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x6d4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x6d8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x6dc]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x6e0]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x6e4]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C0D20] sub_006C0D20 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0D20(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xea0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xea4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xea8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xeac]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0xeb0]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0xeb4]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0F40] sub_006C0F40 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0F40(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x1518]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x151c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x1520]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x1524]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x1528]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x152c]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C0BE0] sub_006C0BE0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0BE0(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xcd8]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xcdc]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xce0]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xce4]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0xce8]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0xcec]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0900] sub_006C0900 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0900(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x630]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x634]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x638]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x63c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x640]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x644]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C0C90] sub_006C0C90 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0C90(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xe00]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xe04]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xe08]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xe0c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0xe10]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0xe14]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C06A0] sub_006C06A0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C06A0(void* self, void* /*edx*/, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x328]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x32c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x330]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x334]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x338]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x33c]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x006C0B50] sub_006C0B50 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0B50(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xc38]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xc3c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xc40]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc44]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0xc48]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0xc4c]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C0FD0] sub_006C0FD0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C0FD0(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x15b8]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x15bc]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 0x15c0]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [ecx + 0x15c4]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x15c8]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x15cc]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C1120] sub_006C1120 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C1120(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x1988]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x198c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x1990]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x1994]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x1998]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x199c]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C11B0] sub_006C11B0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C11B0(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x1a28]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x1a2c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x1a30]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x1a34]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x1a38]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x1a3c]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 4
    }
}

// [0x006C1B40] sub_006C1B40 (77 bytes)
extern "C" __declspec(naked) void* __stdcall fn_006C1B40(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x6
        ja loc_6c1b88
        jmp dword ptr [4*eax + 0x6c1b90]
        mov eax, 0xaa8c80
        ret 0x4
        mov eax, 0xaa8c74
        ret 0x4
        mov eax, 0xaa8c68
        ret 0x4
        mov eax, 0xaa8c5c
        ret 0x4
        mov eax, 0xaa8c50
        ret 0x4
        mov eax, 0xaa8c44
        ret 0x4
        mov eax, 0xaa8c38
        ret 0x4
    loc_6c1b88:
        xor eax, eax
        ret 0x4
    }
}

// [0x006C78D0] sub_006C78D0 (100 bytes)
extern "C" void ext_006C3030();
extern "C" void ext_006D2170();

extern "C" __declspec(naked) void __fastcall fn_006C78D0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [esp + 0x14]
        xor esi, esi
        mov eax, dword ptr [edi + 0xf0]
        mov ebp, dword ptr [eax + 0xc0]
        test ebp, ebp
        jle done_loop
    loop_top:
        mov ecx, dword ptr [edi + 0xf0]
        mov edx, dword ptr [ecx + 0xd0]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, ebx
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ebx]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_006D2170
        inc esi
        cmp esi, ebp
        jl loop_top
    done_loop:
        mov ecx, edi
        call ext_006C3030
        test eax, eax
        je done_end
        mov ecx, edi
        call ext_006C3030
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, eax
        call dword ptr [edx + 0x18]
    done_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006CD650] sub_006CD650 (115 bytes)
extern "C" int mem_0092A270;

extern "C" __declspec(naked) float __cdecl fn_006CD650(void) {
    __asm {
        sub esp, 0Ch
        fld dword ptr [esp+1Ch]
        fsubr qword ptr [mem_0092A270]
        fstp dword ptr [esp+1Ch]
        fld dword ptr [esp+10h]
        fsubr qword ptr [mem_0092A270]
        fst qword ptr [esp+4]
        fld dword ptr [esp+1Ch]
        fmul st, st(1)
        fld dword ptr [esp+10h]
        fmul dword ptr [esp+18h]
        faddp st(1), st
        __asm _emit 0xd9 __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x00
        fld dword ptr [esp+1Ch]
        fmul dword ptr [esp+10h]
        fadd st, st(1)
        fmul st, st(1)
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        fmul dword ptr [esp+10h]
        faddp st(1), st
        fmul st, st(1)
        fld dword ptr [esp+18h]
        fmulp st(2), st
        fxch st(1)
        fmul dword ptr [esp+10h]
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        fmul qword ptr [esp+4]
        faddp st(1), st
        fst dword ptr [esp+18h]
        fmul dword ptr [esp+10h]
        faddp st(1), st
        fsub dword ptr [esp+14h]
        add esp, 0Ch
        ret
    }
}

// [0x006C90C0] sub_006C90C0 (166 bytes)
extern "C" int mem_00B5D6E0;
extern "C" int mem_00B5D6E8;
extern "C" int mem_00B5D6F0;
extern "C" int mem_00B5D6F8;
extern "C" int mem_00B5D700;
extern "C" int mem_00B5D708;
extern "C" int mem_00B5D710;
extern "C" int mem_00B5D718;
extern "C" int mem_00B5D720;
extern "C" int mem_00B5D728;
extern "C" int mem_00B5D730;
extern "C" int mem_00B5D738;
extern "C" int mem_00B5D740;
extern "C" int mem_00B5D748;
extern "C" int mem_00B5D750;
extern "C" int mem_00B5D758;

extern "C" void __cdecl fn_006C90C0() {
    *(double*)&mem_00B5D6E0 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D6E8 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D6F0 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D6F8 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D700 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D708 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D710 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D718 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D720 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D728 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D730 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D738 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D740 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D748 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D750 = -*(double*)mem_00925284;
    *(double*)&mem_00B5D758 = -*(double*)mem_00925284;
}

// [0x006C4B00] sub_006C4B00 (174 bytes)
struct Elem64 {
    int lo, hi;
};

struct Mat3x4d {
    Elem64 m[3][4];
};

extern "C" void __cdecl fn_006C4B00(Mat3x4d* dst, const Mat3x4d* src) {
    if (dst == src) {
        double t01 = *(double*)&dst->m[0][1];
        dst->m[0][1] = dst->m[1][0];
        *(double*)&dst->m[1][0] = t01;

        double t02 = *(double*)&dst->m[0][2];
        dst->m[0][2] = dst->m[2][0];
        *(double*)&dst->m[2][0] = t02;

        double t12 = *(double*)&dst->m[1][2];
        dst->m[1][2] = dst->m[2][1];
        *(double*)&dst->m[2][1] = t12;
        return;
    }
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[1][0];
    dst->m[0][2] = src->m[2][0];
    dst->m[1][0] = src->m[0][1];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[2][1];
    dst->m[2][0] = src->m[0][2];
    dst->m[2][1] = src->m[1][2];
    dst->m[2][2] = src->m[2][2];
}

// [0x006C2BB0] sub_006C2BB0 (176 bytes)
extern "C" void ext_006C1B30();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" void ext_00708000();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_006C2BB0(void* self) {
    __asm {
        mov ecx, [ecx + 0xf0]
        push esi
        push 0xaa8934
        call ext_00708000
        mov esi, eax
        test esi, esi
        je RET0
        mov eax, mem_00B5D448
        cmp eax, -1
        je LA
        cmp eax, mem_00B5E400
        je LA
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, [eax + 0x14]
        mov eax, mem_00B5D448
        jmp LB
LA:
        mov ecx, [esi + 0x14]
LB:
        test ecx, ecx
        jle RET0
        cmp eax, -1
        je LC
        cmp eax, mem_00B5E400
        je LC
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, [eax + 0x10]
        mov eax, [ecx + 4]
        test eax, eax
        je RET0
        mov edx, [eax]
        mov esi, [ecx]
        cmp edx, esi
        jne RET0
        jmp LD
LC:
        mov esi, [esi + 0x10]
        mov eax, [esi + 4]
        test eax, eax
        je RET0
        mov ecx, [eax]
        mov edx, [esi]
        cmp ecx, edx
        jne RET0
LD:
        mov eax, [eax + 4]
        test eax, eax
        je RET0
        mov ecx, eax
        call ext_006C1B30
        pop esi
        ret
RET0:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006C2D30] sub_006C2D30 (176 bytes)
extern "C" void ext_006C1B30();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" void ext_00708000();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;
// [VA] 0x006C2D30
extern "C" __declspec(naked) void __fastcall fn_006C2D30(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xf0]
        push esi
        push 0xaa8920
        call ext_00708000
        mov esi, eax
        test esi, esi
        je Lzero
        mov eax, dword ptr [mem_00B5D448]
        cmp eax, -1
        je L78
        cmp eax, dword ptr [mem_00B5E400]
        je L78
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 0x14]
        mov eax, dword ptr [mem_00B5D448]
        jmp L7b
    L78:
        mov ecx, dword ptr [esi + 0x14]
    L7b:
        test ecx, ecx
        jle Lzero
        cmp eax, -1
        je Lb1
        cmp eax, dword ptr [mem_00B5E400]
        je Lb1
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        je Lzero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne Lzero
        jmp Lc3
    Lb1:
        mov esi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je Lzero
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi]
        cmp ecx, edx
        jne Lzero
    Lc3:
        mov eax, dword ptr [eax + 4]
        test eax, eax
        je Lzero
        mov ecx, eax
        call ext_006C1B30
        pop esi
        ret
    Lzero:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006CC600] sub_006CC600 (176 bytes)
extern "C" void ext_006C9CD0();
extern "C" void ext_006CBF00();
extern "C" void ext_00722DC0();
extern "C" __declspec(naked) void __fastcall fn_006CC600(void* self, int dummy, int a) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr [esp + 0x10], 0
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 8
        jne L1
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x100
        je L2
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x900
        jne L1
    L2:
        push 0
        mov ecx, edi
        call ext_006C9DC0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
    L1:
        mov ecx, esi
        call ext_006CA6A0
        dec eax
        cmp ebx, eax
        jge L3
        push ebx
        mov ecx, esi
        call ext_006CBF00
        fstp qword ptr [esp + 0x14]
        push ebx
        lea eax, [esp + 0x18]
        push esi
        lea ecx, [esp + 0x14]
        push eax
        push ecx
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esp + 0x20], 0
        call ext_00722DC0
        fld qword ptr [esp + 0x1c]
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
    L3:
        fld dword ptr [esp + 0xc]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
    }
}

// [0x006CE800] sub_006CE800 (176 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006CA140();
extern "C" void ext_006CE720();
extern "C" __declspec(naked) void* __fastcall fn_006CE800(void* self, int dummy_edx, int a1, int a2, int a3, int a4) {
    __asm {
        push    -1
        push    0x8b8fdb
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, ecx
        push    0x98
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [esp + 0x14], esi
        je      L_after_ctor
        mov     ecx, eax
        call    ext_006CA140
        mov     esi, eax
    L_after_ctor:
        mov     ecx, dword ptr [esp + 0x1c]
        or      eax, -1
        cmp     ecx, 1
        mov     dword ptr [esp + 0x14], eax
        jne     L_copy
        cmp     dword ptr [esp + 0x20], 0x80000000
        jne     L_copy
        cmp     dword ptr [esp + 0x24], eax
        jne     L_copy
        cmp     dword ptr [esp + 0x28], 0x7fffffff
        jne     L_copy
        push    1
        push    edi
        mov     ecx, esi
        call    ext_006CE720
        jmp     L_done
    L_copy:
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [esi + 0x14], eax
        mov     ecx, dword ptr [edi + 0x40]
        mov     dword ptr [esi + 0x40], ecx
        mov     edx, dword ptr [edi + 0x48]
        mov     dword ptr [esi + 0x48], edx
        mov     eax, dword ptr [edi + 0x4c]
        mov     dword ptr [esi + 0x4c], eax
        mov     ecx, dword ptr [edi + 0x50]
        mov     dword ptr [esi + 0x50], ecx
        mov     edx, dword ptr [edi + 0x18]
        mov     dword ptr [esi + 0x18], edx
    L_done:
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, esi
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x006C4220] sub_006C4220 (192 bytes)
extern "C" void ext_006A73BA();
extern "C" int mem_00993800;
extern "C" int mem_009937F8;
extern "C" int mem_009937F0;
extern "C" int mem_009937E8;

extern "C" __declspec(naked) void __cdecl fn_006C4220(void* out, const void* in) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        fld qword ptr [esi + 0x10]
        fcomp qword ptr [mem_00993800]
        fnstsw ax
        test ah, 0x1
        jne L_6C4261
        fld qword ptr [esi + 0x48]
        fchs
        fld qword ptr [esi + 0x40]
        fchs
        fpatan
        mov eax, dword ptr [esp + 0x8]
        xor ecx, ecx
        pop esi
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0xc], 0xc0568000
        mov dword ptr [eax + 0x14], ecx
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [eax]
        ret
    L_6C4261:
        fld qword ptr [esi + 0x10]
        fcomp qword ptr [mem_009937F0]
        fnstsw ax
        test ah, 0x41
        je L_6C4299
        fld qword ptr [esi + 0x20]
        fld qword ptr [esi + 0x28]
        fpatan
        mov eax, dword ptr [esp + 0x8]
        xor ecx, ecx
        pop esi
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0xc], 0x40568000
        mov dword ptr [eax + 0x14], ecx
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [eax]
        ret
    L_6C4299:
        fld qword ptr [esi + 0x30]
        fld qword ptr [esi + 0x50]
        fpatan
        push edi
        mov edi, dword ptr [esp + 0xc]
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [edi]
        fld qword ptr [esi + 0x10]
        call ext_006A73BA
        fmul qword ptr [mem_009937E8]
        mov eax, edi
        fstp qword ptr [edi + 0x8]
        fld qword ptr [esi + 0x8]
        fld qword ptr [esi]
        fpatan
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [edi + 0x10]
        pop edi
        pop esi
        ret
    }
}

// [0x006C28D0] sub_006C28D0 (192 bytes)
extern "C" void ext_006C1B30();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5D448;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_006C28D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        push esi
        push edi
        call dword ptr [eax + 0ch]
        mov edi, eax
        test edi, edi
        je L_fail
        mov eax, dword ptr [mem_00B5D448]
        cmp eax, -1
        je L_nalt1
        cmp eax, dword ptr [mem_00B5E400]
        je L_nalt1
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 14h]
        mov eax, dword ptr [mem_00B5D448]
        jmp L_2911
    L_nalt1:
        mov ecx, dword ptr [edi + 14h]
    L_2911:
        mov esi, dword ptr [esp + 0ch]
        cmp esi, ecx
        jge L_fail
        cmp eax, -1
        je L_nalt2
        cmp eax, dword ptr [mem_00B5E400]
        je L_nalt2
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov edx, dword ptr [eax + 10h]
        lea ecx, [esi + 2*esi]
        mov eax, dword ptr [edx + 4*ecx + 4]
        lea ecx, [edx + 4*ecx]
        test eax, eax
        je L_fail
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_fail
        jmp L_296A
    L_nalt2:
        mov ecx, dword ptr [edi + 10h]
        lea eax, [esi + 2*esi]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        je L_fail
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_fail
    L_296A:
        mov eax, dword ptr [eax + 4]
        test eax, eax
        je L_fail
        mov ecx, eax
        call ext_006C1B30
        pop edi
        pop esi
        ret 4
    L_fail:
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x006C2720] sub_006C2720 (192 bytes)
extern "C" __declspec(naked) int __fastcall fn_006C2720(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push esi
        call dword ptr [eax + 0Ch]
        mov esi, eax
        test esi, esi
        je ret_zero

        mov eax, mem_00B5D448
        cmp eax, -1
        je use_esi_18
        cmp eax, mem_00B5E400
        je use_esi_18
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 18h]
        mov eax, mem_00B5D448
        jmp check_ecx

    use_esi_18:
        mov ecx, dword ptr [esi + 18h]

    check_ecx:
        test ecx, ecx
        jle ret_zero
        cmp eax, -1
        je use_esi_slot
        cmp eax, mem_00B5E400
        je use_esi_slot
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 10h]
        add eax, 10h
        lea ecx, [ecx + 2*ecx]
        mov eax, dword ptr [edx + 4*ecx + 4]
        lea ecx, [edx + 4*ecx]
        test eax, eax
        je ret_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne ret_zero
        jmp call_target

    use_esi_slot:
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        je ret_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne ret_zero

    call_target:
        mov eax, dword ptr [eax + 4]
        test eax, eax
        je ret_zero
        mov ecx, eax
        call ext_006C1B30
        pop esi
        ret

    ret_zero:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006C9AB0] sub_006C9AB0 (192 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C9AB0(void* self, int edx_pad,
    int a1, int a2, int a3, int a4, int a5, int a6,
    int a7, int a8, int a9, int a10, int a11, int a12) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0079E5B0
        mov edx, dword ptr [esp + 0x10]
        mov ecx, esi
        push edx
        call ext_00789BA0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, esi
        push eax
        call ext_006C9C40
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_006C9D00
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, esi
        push edx
        push 0x0
        call ext_006C9DF0
        mov eax, dword ptr [esp + 0x20]
        mov ecx, esi
        push eax
        push 0x1
        call ext_006C9DF0
        mov ecx, dword ptr [esp + 0x24]
        push 0x3000000
        push ecx
        mov ecx, esi
        call ext_006C9D30
        mov edx, dword ptr [esp + 0x28]
        mov ecx, esi
        push edx
        push 0x2
        call ext_006C9DF0
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, esi
        push eax
        push 0x3
        call ext_006C9DF0
        mov ecx, dword ptr [esp + 0x30]
        push ecx
        push 0x4
        mov ecx, esi
        call ext_006C9DF0
        mov edx, dword ptr [esp + 0x34]
        mov ecx, esi
        push edx
        push 0x5
        call ext_006C9DF0
        push 0x0
        mov ecx, esi
        call ext_006C9F20
        push 0x0
        mov ecx, esi
        call ext_006C9DA0
        pop esi
        ret 0x30
    }
}

// [0x006C7940] sub_006C7940 (199 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void __stdcall ext_006B9EC0(void* a1);

extern "C" __declspec(naked) void __fastcall fn_006C7940(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b963d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x9c
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0x158]
        mov dword ptr [esp + 0xa8], 1
        test ecx, ecx
        je L_else_6C7940
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x54]
        push edx
        call dword ptr [eax + 0x1c]
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xac], 2
        call ext_006B9E60
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xa8], 1
        call ext_006B9D70
        jmp L_join_6C7940
L_else_6C7940:
        push 0xaa8cc4
        lea ecx, [esp + 0xc]
        call ext_006B9EC0
L_join_6C7940:
        mov esi, dword ptr [esp + 0xb0]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0x4], 1
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xa8], 0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xa0]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 4
    }
}

// [0x006CC310] sub_006CC310 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_006CC310(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, ecx
        call    ext_006CA6A0
        mov     ebx, dword ptr [esp + 0x1c]
        dec     eax
        cmp     ebx, eax
        jge     L_early
        push    edi
        mov     dword ptr [esi + 0x48], 0xffffffff
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x4c], 0x7fffffff
        call    ext_006CA060
        mov     edi, eax
        mov     ecx, edi
        call    ext_006C9C30
        cmp     eax, 8
        jne     L_tail
        mov     ecx, edi
        call    ext_006C9CD0
        cmp     eax, 0x900
        ja      L_gt900
        je      L_float
        cmp     eax, 0x100
        je      L_float
        cmp     eax, 0x400
        je      L_dword
        push    ebx
        push    0x10
        mov     ecx, esi
        call    ext_006D03E0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     8
L_float:
        fld     dword ptr [esp + 0x24]
        push    ebx
        lea     eax, [esp + 0x18]
        fstp    qword ptr [esp + 0x18]
        push    esi
        lea     ecx, [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        call    ext_00722DC0
        fld     qword ptr [esp + 0x1c]
        add     esp, 0xc
        fstp    dword ptr [esp]
        jmp     L_store
L_gt900:
        cmp     eax, 0xc00
        jne     L_tail
L_dword:
        mov     edx, dword ptr [esp + 0x24]
        push    edx
L_store:
        push    0
        mov     ecx, edi
        call    ext_006C9DF0
L_tail:
        push    ebx
        push    0x10
        mov     ecx, esi
        call    ext_006D03E0
        pop     edi
L_early:
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     8
    }
}

// [0x006C4BB0] sub_006C4BB0 (214 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C4BB0(void* self) {
    __asm {
        sub esp, 0x18
        lea eax, [esp + 0x8]
        _emit 0x8d
        _emit 0x54
        _emit 0x24
        _emit 0x00
        push eax
        push edx
        mov dword ptr [esp + 0x8], 0xffffffff
        mov dword ptr [esp + 0xc], 0x7fffffff
        mov dword ptr [esp + 0x10], 0x1
        mov dword ptr [esp + 0x14], 0x80000000
        call ext_006C4C90
        test al, al
        je L_epi
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x4]
        push edi
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0x8], edi
        mov edi, dword ptr [ecx + 0x4]
        cmp edi, edx
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0xc], edi
        jg L_a
        jl L_b
        mov edx, dword ptr [ecx]
        cmp edx, esi
        jae L_a
    L_b:
        lea edx, [esp + 0x8]
        jmp L_c
    L_a:
        lea edx, [esp + 0x18]
    L_c:
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x4], edx
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0xc], edx
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x18], edi
        mov edi, dword ptr [ecx + 0x4]
        cmp edi, edx
        mov dword ptr [esp + 0x1c], edi
        jl L_d
        jg L_e
        mov edx, dword ptr [ecx]
        cmp edx, esi
        jbe L_d
    L_e:
        lea edx, [esp + 0x18]
        pop edi
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x4], edx
        pop esi
        add esp, 0x18
        ret 0x8
    L_d:
        lea edx, [esp + 0x8]
        pop edi
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x4], edx
        pop esi
    L_epi:
        add esp, 0x18
        ret 0x8
    }
}

// [0x006C3640] sub_006C3640 (208 bytes)
extern "C" void ext_006C35D0();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();

extern "C" __declspec(naked) void* __fastcall fn_006C3640(void* self, int edx_unused, void* sret, int a1, int a2) {
    __asm {
        push -1
        push 08c1a5fh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 24h
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 8], 0
        call ext_006D2370
        mov eax, dword ptr [esp + 44h]
        mov edi, dword ptr [esp + 40h]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr [esp + 3ch], 1
        call ext_006C35D0
        mov edx, dword ptr [esi + 0f0h]
        mov ecx, edi
        shl ecx, 5
        sub ecx, edi
        mov esi, dword ptr [esp + 3ch]
        shl ecx, 4
        lea eax, [ecx + edx + 1e80h]
        mov ecx, dword ptr [ecx + edx + 1ee0h]
        mov edx, dword ptr [eax + 64h]
        mov dword ptr [esp + 0ch], ecx
        mov dword ptr [esp + 10h], edx
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [eax + 6ch]
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], edx
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [eax + 74h]
        lea eax, [esp + 0ch]
        mov dword ptr [esp + 1ch], ecx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 24h], edx
        call ext_006D2390
        mov dword ptr [esp + 8], 1
        lea ecx, [esp + 0ch]
        mov byte ptr [esp + 34h], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 2ch]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 30h
        ret 0ch
    }
}

// [0x006CA140] sub_006CA140 (239 bytes)
extern "C" void ext_006C9A40();
extern "C" void ext_006CE060();
extern "C" void ext_006D03D0();
extern "C" void ext_006D2130();
extern "C" void ext_006DAE00();

extern "C" __declspec(naked) void __fastcall fn_006CA140(void* self) {
    __asm {
        push -1
        push 0x008b8e49
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, 1
        push edi
        mov [esi + 0x14], ebx
        mov [esi + 0x18], ebx
        mov byte ptr [esi + 0x1c], 1
        mov byte ptr [esi + 0x1d], 1
        mov [esi + 0x20], ebx
        mov [esi + 0x24], ebx
        mov [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], 0xffffffff
        mov [esi + 0x30], eax
        mov [esi + 0x34], ebx
        mov [esi + 0x38], eax
        mov [esi + 0x3c], ebx
        mov [esi + 0x40], ebx
        lea edi, [esi + 0x54]
        lea ebp, [esi + 0x68]
        mov [esi + 0x48], ebx
        push 4
        mov [esi + 0x4c], ebx
        push 0x10
        mov ecx, ebp
        mov [esp + 0x18], esi
        mov dword ptr [edi], 0x200
        mov byte ptr [edi + 4], bl
        call ext_006D2130
        lea eax, [ebp + 0x10]
        mov [ebp + 0x14], eax
        lea ebp, [esi + 0x80]
        push 4
        push 0x10
        mov ecx, ebp
        mov [esp + 0x24], ebx
        call ext_006D2130
        lea ecx, [ebp + 0x10]
        mov [ebp + 0x14], ecx
        mov eax, 0x3f800000
        mov ecx, esi
        mov byte ptr [esp + 0x1c], 1
        mov dword ptr [esi], 0x993820
        mov [esi + 0x8], eax
        mov [esi + 0xc], eax
        mov [esi + 0x10], eax
        mov [esi + 0x44], ebx
        call ext_006D03D0
        mov ecx, edi
        call ext_006C9A40
        mov ecx, esi
        call ext_006CE060
        push 0x3ee4f8b5
        push 0x88e368f1
        mov ecx, 0xb5d760
        call ext_006DAE00
        mov ecx, [esp + 0x14]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006CD6D0] sub_006CD6D0 (240 bytes)
extern "C" int mem_00993810;
extern "C" int mem_0092A278;

extern "C" __declspec(naked) float __cdecl fn_006CD6D0(void) {
    __asm {
        mov eax, dword ptr [esp + 8h]
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        mov edi, dword ptr [esp + 24h]
        push esi
        push edi
        push ebx
        push eax
        call dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 2Ch]
        push esi
        fstp dword ptr [esp + 3Ch]
        push edi
        push ebx
        push ecx
        call dword ptr [esp + 34h]
        fld dword ptr [esp + 48h]
        fabs
        fld st(1)
        fabs
        fcompp
        mov edx, dword ptr [esp + 38h]
        add esp, 20h
        fnstsw ax
        test ah, 41h
        jne loc_6CD734
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 1Ch]
        fstp dword ptr [esp + 28h]
        mov dword ptr [esp + 1Ch], ecx
        mov dword ptr [esp + 18h], edx
        fld dword ptr [esp + 1Ch]
        mov dword ptr [esp + 24h], eax
        jmp loc_6CD740
loc_6CD734:
        mov eax, dword ptr [esp + 1Ch]
        mov dword ptr [esp + 24h], edx
        mov dword ptr [esp + 18h], eax
loc_6CD740:
        mov ebp, 1
loc_6CD745:
        fld dword ptr [esp + 24h]
        fsub dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 18h]
        push esi
        push edi
        push ebx
        fmul st, st(1)
        fld st(1)
        fsub dword ptr [esp + 34h]
        mov dword ptr [esp + 30h], ecx
        fdivp st(1), st
        fstp dword ptr [esp + 28h]
        fstp dword ptr [esp + 34h]
        fld dword ptr [esp + 28h]
        fadd dword ptr [esp + 24h]
        fstp dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 24h]
        push edx
        call dword ptr [esp + 24h]
        fld dword ptr [esp + 2Ch]
        fabs
        fcomp qword ptr [mem_00993810]
        add esp, 10h
        fnstsw ax
        test ah, 1
        jne loc_6CD7A8
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 40h
        jne loc_6CD7A8
        inc ebp
        cmp ebp, 0Fh
        jle loc_6CD745
loc_6CD7A8:
        pop edi
        pop esi
        fstp st(0)
        fld dword ptr [esp + 10h]
        pop ebp
        pop ebx
        ret
    }
}

// [0x006CE720] sub_006CE720 (224 bytes)
extern "C" void ext_006CA2F0();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006D03E0();
extern "C" __declspec(naked) void __fastcall fn_006CE720(void* self, int edx_unused, void* src, int flag) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, ecx
        test al, al
        jne short L_6CE731
        call ext_006CA2F0
L_6CE731:
        mov ebx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ebx + 0x14]
        mov dword ptr [ebp + 0x14], eax
        mov al, byte ptr [esp + 0x10]
        test al, al
        je short L_6CE797
        mov ecx, dword ptr [ebx + 0x24]
        push ecx
        mov ecx, ebp
        call ext_006CA500
        mov eax, dword ptr [ebx + 0x24]
        test eax, eax
        je short L_6CE78C
        lea ecx, [eax - 0x1]
        mov eax, 0x51eb851f
        imul ecx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, 0x0
        js short L_6CE78C
        push esi
        push edi
L_6CE772:
        mov esi, dword ptr [ebx + 0x20]
        mov edi, dword ptr [ebp + 0x20]
        mov ecx, 0x100
        mov esi, dword ptr [esi + 4*eax]
        mov edi, dword ptr [edi + 4*eax]
        inc eax
        cmp eax, edx
        rep movsd
        jle short L_6CE772
        pop edi
        pop esi
L_6CE78C:
        mov ecx, dword ptr [ebx + 0x24]
        push ecx
        mov ecx, ebp
        call ext_006CA540
L_6CE797:
        lea edx, [ebx + 0x8]
        lea eax, [ebp + 0x8]
        push -1
        push 0x10
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [edx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [ebx + 0x40]
        mov dword ptr [ebp + 0x40], eax
        mov ecx, dword ptr [ebx + 0x48]
        mov dword ptr [ebp + 0x48], ecx
        mov edx, dword ptr [ebx + 0x4c]
        mov dword ptr [ebp + 0x4c], edx
        mov eax, dword ptr [ebx + 0x50]
        mov dword ptr [ebp + 0x50], eax
        mov ecx, dword ptr [ebx + 0x30]
        mov dword ptr [ebp + 0x30], ecx
        mov edx, dword ptr [ebx + 0x34]
        mov dword ptr [ebp + 0x34], edx
        mov eax, dword ptr [ebx + 0x38]
        mov edx, dword ptr [ebp + 0x18]
        mov dword ptr [ebp + 0x38], eax
        mov ecx, dword ptr [ebx + 0x3c]
        inc edx
        mov dword ptr [ebp + 0x3c], ecx
        mov ecx, ebp
        mov dword ptr [ebp + 0x18], edx
        call ext_006D03E0
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006C19F0] sub_006C19F0 (242 bytes)
extern "C" void ext_006C1B30(); extern "C" void ext_006C5600(); extern "C" void ext_006E7440(); extern "C" void ext_007025B0(); extern "C" void ext_00707A90(); extern "C" int mem_00B5D448;
extern "C" __declspec(naked) void __fastcall fn_006C19F0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr [esp + 0x20]
        cmp eax, ebp
        push edi
        jne L_6C1A79
        call ext_006C1B30
        mov ecx, dword ptr [mem_00B5D448]
        mov edi, eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x28], edi
        call dword ptr [eax + 0x14]
        test al, al
        je L_6C1A31
        mov ecx, esi
        call ext_006C1B30
        mov ecx, eax
        call ext_007025B0
        mov ebx, eax
        jmp L_6C1A33
    L_6C1A31:
        xor ebx, ebx
    L_6C1A33:
        test edi, edi
        je L_6C1A42
        mov ecx, edi
        call ext_007025B0
        mov edi, eax
        jmp L_6C1A44
    L_6C1A42:
        xor edi, edi
    L_6C1A44:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_6C1ABC
        cmp eax, 4
        je L_6C1AA6
        cmp eax, 8
        jne L_6C1A79
        mov eax, dword ptr [mem_00B5D448]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test al, al
        je L_6C1A79
        push 0
        push 0
    L_6C1A6B:
        mov ecx, esi
        call ext_006C1B30
        mov ecx, eax
        call ext_006C5600
    L_6C1A79:
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        push edx
        push eax
        push ecx
        mov ecx, ebp
        call ext_00707A90
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1c
    L_6C1AA6:
        mov eax, dword ptr [mem_00B5D448]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test al, al
        je L_6C1A79
        push 0
        push edi
        jmp L_6C1A6B
    L_6C1ABC:
        test ebx, ebx
        je L_6C1A79
        test edi, edi
        je L_6C1A79
        cmp ebx, edi
        jne L_6C1A79
        mov ecx, dword ptr [esp + 0x24]
        push 6
        add ecx, 0x4e8
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x1c
    }
}

// [0x006C4340] sub_006C4340 (256 bytes)
extern "C" int mem_00993808;

extern "C" __declspec(naked) void __cdecl fn_006C4340(void* out, double a, double b, double c) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        fld qword ptr [ebp + 0xc]
        fmul qword ptr [mem_00993808]
        lea eax, [ebp - 0x20]
        mov dword ptr [ebp - 0x4], eax
        fstp qword ptr [ebp + 0xc]
        fld qword ptr [ebp + 0xc]
        fsincos
        mov eax, dword ptr [ebp - 0x4]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x28]
        fstp qword ptr [ebp - 0x8]
        fld qword ptr [ebp + 0x14]
        fmul qword ptr [mem_00993808]
        lea ecx, [ebp - 0x18]
        mov dword ptr [ebp + 0x10], ecx
        fstp qword ptr [ebp + 0x14]
        fld qword ptr [ebp + 0x14]
        fsincos
        mov eax, dword ptr [ebp + 0x10]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x28]
        fstp qword ptr [ebp + 0x14]
        fld qword ptr [ebp + 0x1c]
        fmul qword ptr [mem_00993808]
        lea edx, [ebp - 0x10]
        mov dword ptr [ebp + 0x10], edx
        fstp qword ptr [ebp + 0x1c]
        fld qword ptr [ebp + 0x1c]
        fsincos
        mov eax, dword ptr [ebp + 0x10]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x8]
        fld qword ptr [ebp + 0x14]
        fmul st, st(1)
        fld qword ptr [ebp + 0x14]
        fmul qword ptr [ebp - 0x20]
        mov eax, dword ptr [ebp + 0x8]
        fstp qword ptr [ebp + 0xc]
        fld qword ptr [ebp - 0x10]
        fmul qword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ebp - 0x18]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ebp + 0x14]
        fchs
        fstp qword ptr [eax + 0x10]
        fld st(0)
        fmul qword ptr [ebp - 0x10]
        fld st(3)
        fmul qword ptr [ebp - 0x20]
        fsubp st(1), st
        fstp qword ptr [eax + 0x20]
        fmul st, st(2)
        fld qword ptr [ebp - 0x10]
        fmul qword ptr [ebp - 0x20]
        faddp st(1), st
        fstp qword ptr [eax + 0x28]
        fld qword ptr [ebp - 0x18]
        fmul st, st(1)
        fstp qword ptr [eax + 0x30]
        fld qword ptr [ebp + 0xc]
        fmul qword ptr [ebp - 0x10]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fstp qword ptr [eax + 0x40]
        fld qword ptr [ebp + 0xc]
        fmul st, st(2)
        fld qword ptr [ebp - 0x10]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [eax + 0x48]
        fstp st(0)
        fstp st(0)
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x20]
        fstp qword ptr [eax + 0x50]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006CA6D0] sub_006CA6D0 (256 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA060();
extern "C" void ext_006D03E0();

extern "C" __declspec(naked) void __fastcall fn_006CA6D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 10h
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        push esi
        mov esi, dword ptr [esp+20h]
        push edi
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_006C9F00
        mov ebx, dword ptr [esp+20h]
        mov dword ptr [edi+48h], 0xffffffff
        test ebx, ebx
        mov dword ptr [edi+4Ch], 0x7fffffff
        jle L_73A
        lea ecx, [esp+14h]
        lea edx, [ebx-1]
        push ecx
        push edx
        mov ecx, edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [eax+4]
        cmp ecx, edx
        jg L_73A
        jl L_72C
        mov edx, dword ptr [esp+0ch]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        ja L_73A
L_72C:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 10h
        ret 8
L_73A:
        mov eax, dword ptr [edi+24h]
        dec eax
        cmp ebx, eax
        jge L_77E
        lea ecx, [esp+14h]
        lea edx, [ebx+1]
        push ecx
        push edx
        mov ecx, edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp+10h]
        mov edx, dword ptr [eax+4]
        cmp ecx, edx
        jl L_77E
        jg L_770
        mov edx, dword ptr [esp+0ch]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jb L_77E
L_770:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 10h
        ret 8
L_77E:
        push ebx
        mov ecx, edi
        call ext_006CA020
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi+8]
        mov dword ptr [eax+8], edx
        mov ecx, dword ptr [esi+0ch]
        mov dword ptr [eax+0ch], ecx
        mov edx, dword ptr [esi+10h]
        mov dword ptr [eax+10h], edx
        lea ecx, [eax+14h]
        sub esi, eax
        mov eax, 4
L_7A6:
        mov edx, dword ptr [esi+ecx]
        mov dword ptr [ecx], edx
        add ecx, 4
        dec eax
        jne L_7A6
        push ebx
        push 10h
        mov ecx, edi
        call ext_006D03E0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ret 8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x006C4440] sub_006C4440 (272 bytes)
extern "C" int mem_00993808;

extern "C" __declspec(naked) void __cdecl fn_006C4440(void* out, const void* in) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [eax + 0x14]
        fld qword ptr [eax]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [eax + 0x8]
        fmul qword ptr [mem_00993808]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [ebp - 0x20], ecx
        lea ecx, [ebp - 0x18]
        mov dword ptr [ebp - 0x1c], edx
        mov dword ptr [ebp + 0xc], ecx
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [mem_00993808]
        lea edx, [ebp - 0x10]
        mov dword ptr [ebp + 0xc], edx
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x20]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [mem_00993808]
        lea eax, [ebp - 0x8]
        mov dword ptr [ebp + 0xc], eax
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x38]
        fsincos
        mov eax, dword ptr [ebp + 0xc]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x20]
        fmul st, st(1)
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [ebp - 0x18]
        mov eax, dword ptr [ebp + 0x8]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x8]
        fmul qword ptr [ebp - 0x10]
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ebp - 0x10]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ebp - 0x20]
        fchs
        fstp qword ptr [eax + 0x10]
        fld st(0)
        fmul qword ptr [ebp - 0x8]
        fld st(3)
        fmul qword ptr [ebp - 0x18]
        fsubp st(1), st
        fstp qword ptr [eax + 0x20]
        fmul st, st(2)
        fld qword ptr [ebp - 0x8]
        fmul qword ptr [ebp - 0x18]
        faddp st(1), st
        fstp qword ptr [eax + 0x28]
        fld qword ptr [ebp - 0x10]
        fmul st, st(1)
        fstp qword ptr [eax + 0x30]
        fld qword ptr [ebp - 0x28]
        fmul qword ptr [ebp - 0x8]
        fld st(2)
        fmul st, st(2)
        faddp st(1), st
        fstp qword ptr [eax + 0x40]
        fld qword ptr [ebp - 0x28]
        fmul st, st(2)
        fld qword ptr [ebp - 0x8]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [eax + 0x48]
        fstp st(0)
        fstp st(0)
        fld qword ptr [ebp - 0x10]
        fmul qword ptr [ebp - 0x18]
        fstp qword ptr [eax + 0x50]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006CC4F0] sub_006CC4F0 (272 bytes)
extern "C" void ext_00722D60();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA060();
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006D03E0();
extern "C" __declspec(naked) void __fastcall fn_006CC4F0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi + 0x48], 0xffffffff
        mov dword ptr [esi + 0x4c], 0x7fffffff
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0x20]
        dec eax
        cmp ebx, eax
        jge L_6CC593
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 8
        jne L_6CC5DF
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x900
        ja L_6CC567
        je L_6CC5D1
        cmp eax, 0x100
        je L_6CC5D1
        cmp eax, 0x400
        je L_6CC56E
        push ebx
        push 0x10
        mov ecx, esi
        call ext_006D03E0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
    L_6CC567:
        cmp eax, 0xc00
        jne L_6CC5DF
    L_6CC56E:
        fld dword ptr [esp + 0x24]
        push ebx
        lea ecx, [esp + 0x10]
        fstp qword ptr [esp + 0x10]
        push esi
        lea edx, [esp + 0x1c]
        push ecx
        push edx
        call ext_00722D60
        fld qword ptr [esp + 0x24]
        add esp, 0x0c
        fstp dword ptr [esp]
        jmp L_6CC5D6
    L_6CC593:
        mov ecx, esi
        call ext_006CA6A0
        dec eax
        cmp ebx, eax
        jne L_6CC5DF
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 8
        jne L_6CC5DF
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x100
        je L_6CC5D1
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x900
        jne L_6CC5DF
    L_6CC5D1:
        mov eax, dword ptr [esp + 0x24]
        push eax
    L_6CC5D6:
        push 0
        mov ecx, edi
        call ext_006C9DF0
    L_6CC5DF:
        push ebx
        push 0x10
        mov ecx, esi
        call ext_006D03E0
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
    }
}

// [0x006CC3E0] sub_006CC3E0 (272 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA6B0();
extern "C" void ext_006CC310();
extern "C" void ext_006CC4F0();
extern "C" void ext_006CC7B0();
extern "C" void ext_006CC8F0();
extern "C" void ext_006CCA50();
extern "C" void ext_006CCB90();
extern "C" __declspec(naked) void __fastcall fn_006CC3E0(void* self) {
    __asm {
        sub esp, 0x28
        push esi
        push edi
        mov esi, ecx
        call ext_006CA6A0
        mov edi, dword ptr [esp + 0x34]
        dec eax
        cmp edi, eax
        jge L_6CC489
        mov eax, dword ptr [esp + 0x3c]
        mov ecx, esi
        push eax
        push edi
        call ext_006CC8F0
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        push edi
        mov ecx, esi
        call ext_006CC7B0
        mov edx, dword ptr [esp + 0x44]
        mov ecx, esi
        push edx
        push edi
        call ext_006CCB90
        mov eax, dword ptr [esp + 0x48]
        mov ecx, esi
        push eax
        push edi
        call ext_006CCA50
        lea ecx, [esp + 0x8]
        push edi
        push ecx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 8
        jne L_6CC474
        lea edx, [esp + 0x8]
        push edi
        push edx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9CD0
        test ah, 1
        je L_6CC474
        mov eax, dword ptr [esp + 0x4c]
        mov ecx, esi
        push eax
        push edi
        call ext_006CC4F0
        pop edi
        pop esi
        add esp, 0x28
        ret 0x1c
    L_6CC474:
        mov ecx, dword ptr [esp + 0x38]
        push ecx
        push edi
        mov ecx, esi
        call ext_006CC310
        pop edi
        pop esi
        add esp, 0x28
        ret 0x1c
    L_6CC489:
        mov ecx, esi
        call ext_006CA6A0
        dec eax
        cmp edi, eax
        jne L_6CC4DD
        lea edx, [esp + 0x8]
        push edi
        push edx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 8
        jne L_6CC4DD
        lea eax, [esp + 0x8]
        push edi
        push eax
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9CD0
        test ah, 1
        je L_6CC4DD
        mov ecx, dword ptr [esp + 0x4c]
        push ecx
        push 0
        push edi
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9DF0
    L_6CC4DD:
        pop edi
        pop esi
        add esp, 0x28
        ret 0x1c
    }
}

// [0x006CBAC0] sub_006CBAC0 (272 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA6B0();
extern "C" void ext_006CB8E0();
extern "C" void ext_006CBBD0();
extern "C" void ext_006CC740();
extern "C" void ext_006CC890();
extern "C" void ext_006CC9E0();
extern "C" void ext_006CCB30();

extern "C" __declspec(naked) void __fastcall fn_006CBAC0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp+38h]
        test edi, edi
        mov esi, ecx
        jle L_exit
        call ext_006CA6A0
        cmp edi, eax
        jge L_exit
        mov eax, dword ptr [esp+40h]
        mov ecx, esi
        push eax
        push edi
        call ext_006CC890
        mov ecx, dword ptr [esp+44h]
        push ecx
        push edi
        mov ecx, esi
        call ext_006CC740
        mov edx, dword ptr [esp+48h]
        mov ecx, esi
        push edx
        push edi
        call ext_006CCB30
        mov eax, dword ptr [esp+4ch]
        mov ecx, esi
        push eax
        push edi
        call ext_006CC9E0
        lea ecx, [esp+0ch]
        push edi
        push ecx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 8
        jne L_47
        lea edx, [esp+0ch]
        push edi
        push edx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9CD0
        test ah, 1
        jne L_call_bbd0
    L_47:
        lea eax, [esp+0ch]
        push edi
        push eax
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 8
        je L_bbaf
        lea ebx, [edi-1]
        test ebx, ebx
        jl L_bbaf
        lea ecx, [esp+0ch]
        push ebx
        push ecx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        cmp eax, 8
        jne L_bbaf
        lea edx, [esp+0ch]
        push ebx
        push edx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9CD0
        test ah, 1
        je L_bbaf
    L_call_bbd0:
        mov eax, dword ptr [esp+50h]
        mov ecx, esi
        push eax
        push edi
        call ext_006CBBD0
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret 1ch
    L_bbaf:
        mov ecx, dword ptr [esp+3ch]
        push ecx
        push edi
        mov ecx, esi
        call ext_006CB8E0
    L_exit:
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret 1ch
    }
}

// [0x006C8F90] sub_006C8F90 (278 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C8F90(void* self) {
    __asm {
        // mov eax, [0x925284]
        _emit 0xA1
        _emit 0x84
        _emit 0x52
        _emit 0x92
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D660, B5D664
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x60
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x64
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D668, B5D66C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x68
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x6C
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D670, B5D674
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x70
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x74
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D678, B5D67C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x78
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x7C
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D680, B5D684
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x80
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x84
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D688, B5D68C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x88
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x8C
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D690, B5D694
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x90
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x94
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D698, B5D69C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0x98
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x9C
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6A0, B5D6A4
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xA0
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xA4
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6A8, B5D6AC
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xA8
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xAC
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6B0, B5D6B4
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xB0
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xB4
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6B8, B5D6BC
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xB8
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xBC
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6C0, B5D6C4
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xC0
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xC4
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6C8, B5D6CC
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xC8
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xCC
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6D0, B5D6D4
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xD0
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xD4
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        // mov ecx,[eax] / mov edx,[eax+4] / store to B5D6D8, B5D6DC
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x0D
        _emit 0xD8
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0xDC
        _emit 0xD6
        _emit 0xB5
        _emit 0x00
        _emit 0xC3
    }
}

// [0x006CCD20] sub_006CCD20 (288 bytes)
extern "C" int mem_00993838;
extern "C" int mem_00991558;
extern "C" void ext_006C9C30();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA060();
extern "C" void ext_006CB190();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00872828();

extern "C" __declspec(naked) void __fastcall fn_006CCD20(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        jne fn006CCD20_L40
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
fn006CCD20_L40:
        cmp eax, 1
        je fn006CCD20_L1CE1C
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        je fn006CCD20_L1CE1C
        fild dword ptr [esp + 0x2c]
        dec eax
        mov dword ptr [esp + 0x2c], eax
        fstp dword ptr [esp + 0x10]
        fild dword ptr [esp + 0x2c]
        call ext_00872828
        push eax
        mov ecx, esi
        call ext_006CA060
        fld dword ptr [esp + 0x10]
        mov edi, eax
        call ext_00872828
        mov ebx, eax
        mov ecx, esi
        push ebx
        call ext_006CA060
        mov ecx, edi
        mov ebp, eax
        call ext_006C9C30
        sub eax, 2
        je fn006CCD20_LCCE0B
        sub eax, 2
        je fn006CCD20_LCDB0
        sub eax, 4
        je fn006CCD20_LCDB0
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
fn006CCD20_LCDB0:
        lea eax, [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_006C9F00
        lea ecx, [esp + 0x18]
        push eax
        lea edx, [esp + 0x24]
        push ecx
        push edx
        mov ecx, ebp
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp dword ptr [esp + 0x2c]
        push ebx
        mov ecx, esi
        call ext_006CB190
        fmul dword ptr [esp + 0x2c]
        mov ecx, ebp
        fmul qword ptr [mem_00991558]
        fstp dword ptr [esp + 0x2c]
        call ext_006C9E80
        pop edi
        pop esi
        fsub dword ptr [esp + 0x24]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
fn006CCD20_LCCE0B:
        mov ecx, ebp
        call ext_006C9E80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
fn006CCD20_L1CE1C:
        push 0
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x006CA570] sub_006CA570 (304 bytes)
extern "C" void ext_006CA090();
extern "C" void ext_006CA0C0();
extern "C" __declspec(naked) void __fastcall fn_006CA570(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov eax, dword ptr [ebx + 0x28]
        push edi
        cmp ecx, eax
        jle L643
        add ecx, 0x63f
        mov eax, 0x51eb851f
        imul ecx
        sar edx, 0x9
        mov eax, edx
        push ebp
        shr eax, 0x1f
        add edx, eax
        mov ebp, edx
        shl ebp, 0x8
        push ebp
        call ext_006CA0C0
        mov ecx, ebp
        mov edx, eax
        mov esi, ecx
        xor eax, eax
        mov edi, edx
        add esp, 0x4
        shr ecx, 0x2
        rep stosd
        mov ecx, esi
        mov dword ptr [esp + 0x10], edx
        and ecx, 0x3
        rep stosb
        mov edi, dword ptr [ebx + 0x20]
        test edi, edi
        je L62E
        mov ecx, dword ptr [ebx + 0x28]
        test ecx, ecx
        je L62E
        mov eax, 0x51eb851f
        mov esi, edi
        imul ecx
        sar edx, 0x3
        mov eax, edx
        mov ecx, edx
        shr eax, 0x1f
        add ecx, eax
        mov eax, dword ptr [esp + 0x10]
        shl ecx, 0x2
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov esi, dword ptr [ebx + 0x20]
        mov ecx, dword ptr [ebx + 0x28]
        mov dword ptr [ebx + 0x20], eax
        add ecx, 0x63f
        mov eax, 0x51eb851f
        imul ecx
        sar edx, 0x9
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        shl edx, 0x8
        push edx
        push esi
        call ext_006CA090
        add esp, 0x8
        jmp L631
    L62E:
        mov dword ptr [ebx + 0x20], edx
    L631:
        shr ebp, 0x2
        lea eax, [ebp + 4*ebp]
        pop ebp
        lea ecx, [eax + 4*eax]
        mov dword ptr [ebx + 0x28], ecx
        mov ecx, dword ptr [esp + 0x14]
    L643:
        mov eax, dword ptr [ebx + 0x20]
        test eax, eax
        je L685
        dec ecx
        mov eax, 0x51eb851f
        imul ecx
        mov esi, dword ptr [ebx + 0x2c]
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        inc esi
        mov edi, edx
        cmp esi, edi
        jg L685
    L666:
        push 0x400
        call ext_006CA0C0
        mov ecx, dword ptr [ebx + 0x20]
        add esp, 0x4
        mov dword ptr [ecx + 4*esi], eax
        mov edx, dword ptr [ebx + 0x2c]
        inc edx
        inc esi
        cmp esi, edi
        mov dword ptr [ebx + 0x2c], edx
        jle L666
    L685:
        mov dword ptr [ebx + 0x48], 0xffffffff
        pop edi
        mov dword ptr [ebx + 0x4c], 0x7fffffff
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x006C25E0] sub_006C25E0 (320 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C25E0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8b8bd0
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x40
        push ebx
        push esi
        xor ebx, ebx
        push 0x3ff00000
        push ebx
        push ebx
        push ebx
        push ebx
        mov esi, ecx
        push ebx
        push ebx
        push ebx
        lea ecx, [esp + 0x28]
        call ext_006D23B0
        push 0x3ff00000
        push ebx
        push 0x3ff00000
        push ebx
        push 0x3ff00000
        push ebx
        push 0x3ff00000
        push ebx
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x70], ebx
        call ext_006D23B0
        lea eax, [esp + 0x8]
        lea ecx, [esi + 0x60]
        push eax
        mov byte ptr [esp + 0x54], 1
        call ext_007873F0
        push eax
        lea ecx, [esi + 0x20]
        call ext_007873F0
        push eax
        mov ecx, esi
        call ext_007873F0
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0xc0]
        call ext_007873F0
        push eax
        lea ecx, [esi + 0xa0]
        call ext_007873F0
        push eax
        lea ecx, [esi + 0x80]
        call ext_007873F0
        lea edx, [esp + 0x8]
        lea ecx, [esi + 0x40]
        push edx
        call ext_007873F0
        push eax
        lea ecx, [esi + 0xe0]
        call ext_007873F0
        lea eax, [esp + 0x8]
        lea ecx, [esi + 0x120]
        push eax
        mov dword ptr [esi + 0x160], ebx
        mov byte ptr [esi + 0x164], bl
        call ext_007873F0
        push eax
        lea ecx, [esi + 0x100]
        call ext_007873F0
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esi + 0x140]
        call ext_007873F0
        lea ecx, [esp + 0x28]
        mov byte ptr [esi + 0x1e8], bl
        mov dword ptr [esi + 0x1ec], 1
        mov byte ptr [esp + 0x50], bl
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop esi
        mov fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006CEBB0] sub_006CEBB0 (320 bytes)
extern "C" void ext_006CAEF0();
extern "C" void ext_006CE8B0();
extern "C" void ext_00872828();

// x87 rounding (ceil/floor via RC toggling + frndint) and CRT _ftol; asm mirrors the original encoding.
extern "C" __declspec(naked) int __fastcall fn_006CEBB0(void* self, int edx_unused, double a1, double a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        call ext_006CA6A0
        test eax, eax
        je L_fail
        push edi
        mov ecx, esi
        call ext_006CA6A0
        mov ecx, dword ptr [ebp+8]
        dec eax
        mov dword ptr [ebp-4], eax
        mov eax, dword ptr [ebp+0xc]
        push 0
        push eax
        push ecx
        mov ecx, esi
        call ext_006CAEF0
        mov eax, dword ptr [ebp+0x14]
        mov ecx, dword ptr [ebp+0x10]
        fstp qword ptr [ebp+8]
        lea edx, [ebp-4]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_006CAEF0
        mov edx, dword ptr [ebp+8]
        mov eax, dword ptr [ebp+0xc]
        fstp qword ptr [ebp+0x10]
        mov dword ptr [ebp-0xc], edx
        mov dword ptr [ebp-8], eax
        fld qword ptr [ebp-0xc]
        wait
        fnstcw word ptr [ebp-0xc]
        xor word ptr [ebp-0xc], 0x800
        fldcw word ptr [ebp-0xc]
        frndint
        xor word ptr [ebp-0xc], 0x800
        fldcw word ptr [ebp-0xc]
        fstp qword ptr [ebp-0x14]
        fld qword ptr [ebp-0x14]
        call ext_00872828
        mov ecx, dword ptr [ebp+0x10]
        mov edx, dword ptr [ebp+0x14]
        mov edi, eax
        mov dword ptr [ebp-0xc], ecx
        mov dword ptr [ebp-8], edx
        fld qword ptr [ebp-0xc]
        wait
        fnstcw word ptr [ebp-0xc]
        xor word ptr [ebp-0xc], 0x400
        fldcw word ptr [ebp-0xc]
        frndint
        xor word ptr [ebp-0xc], 0x400
        fldcw word ptr [ebp-0xc]
        fstp qword ptr [ebp-0x14]
        fld qword ptr [ebp-0x14]
        call ext_00872828
        mov edx, dword ptr [ebp+0xc]
        mov ecx, eax
        mov eax, dword ptr [ebp+8]
        mov dword ptr [ebp-8], edx
        mov dword ptr [ebp-0xc], eax
        fld qword ptr [ebp-0xc]
        wait
        fnstcw word ptr [ebp-0xc]
        xor word ptr [ebp-0xc], 0x800
        fldcw word ptr [ebp-0xc]
        frndint
        xor word ptr [ebp-0xc], 0x800
        fldcw word ptr [ebp-0xc]
        fstp qword ptr [ebp-0x14]
        fld qword ptr [ebp-0x14]
        fcomp qword ptr [ebp+8]
        fnstsw ax
        test ah, 0x40
        je L_skip1
        inc edi
L_skip1:
        mov eax, dword ptr [ebp+0x10]
        mov edx, dword ptr [ebp+0x14]
        mov dword ptr [ebp+8], eax
        mov dword ptr [ebp+0xc], edx
        fld qword ptr [ebp+8]
        wait
        fnstcw word ptr [ebp+8]
        xor word ptr [ebp+8], 0x400
        fldcw word ptr [ebp+8]
        frndint
        xor word ptr [ebp+8], 0x400
        fldcw word ptr [ebp+8]
        fstp qword ptr [ebp-0x14]
        fld qword ptr [ebp-0x14]
        fcomp qword ptr [ebp+0x10]
        fnstsw ax
        test ah, 0x40
        je L_skip2
        dec ecx
L_skip2:
        push ecx
        push edi
        mov ecx, esi
        call ext_006CE8B0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x10
L_fail:
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x006CAA90] sub_006CAA90 (320 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CADF0();
extern "C" void ext_006CAEF0();
extern "C" void ext_006CE020();
extern "C" void ext_006CE0C0();
extern "C" void ext_00872828();
extern "C" int mem_0092520C;
extern "C" int mem_0092A270;

extern "C" __declspec(naked) void __fastcall fn_006CAA90(void* self) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        push ebx
        push eax
        mov esi, ecx
        push ebp
        call ext_006CAEF0
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_0092520C]
        fstp qword ptr [esp + 0x18]
        add esp, 0x8
        mov ecx, esi
        call ext_006CA6A0
        mov dword ptr [esp + 0x24], eax
        fild dword ptr [esp + 0x24]
        fsub qword ptr [mem_0092A270]
        fcom qword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x1
        jne L_006CAAE6
        fstp st(0)
        fld qword ptr [esp + 0x10]
    L_006CAAE6:
        call ext_00872828
        mov ecx, esi
        mov edi, eax
        call ext_006CA6A0
        test eax, eax
        je L_006CABA8
        lea ecx, [esp + 0x10]
        push ecx
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F00
        mov edx, dword ptr [esp + 0x10]
        cmp edx, ebp
        jne L_006CAB24
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x20]
        cmp eax, ecx
        je L_006CAB9C
    L_006CAB24:
        test edi, edi
        jle L_006CAB42
        lea eax, [edi - 0x1]
        mov ecx, esi
        push eax
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C30
        mov ebp, eax
        lea eax, [edi - 0x1]
        push eax
        jmp L_006CAB56
    L_006CAB42:
        push 0x0
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C30
        mov ebp, eax
        push 0x0
    L_006CAB56:
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9CD0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ebx
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x30], eax
        call ext_006CE020
        mov ecx, 0x7fffffff
        push 0x0
        or eax, -0x1
        push 0x0
        push ecx
        push eax
        mov eax, dword ptr [esp + 0x34]
        push 0x1
        push 0x0
        push eax
        push ebp
        push ebx
        mov ecx, esi
        fstp st(0)
        call ext_006CE0C0
    L_006CAB9C:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    L_006CABA8:
        mov ecx, dword ptr [esp + 0x20]
        push ebx
        push ecx
        push ebp
        mov ecx, esi
        call ext_006CADF0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

// [0x006C7A10] sub_006C7A10 (327 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" void ext_006E7390();
extern "C" __declspec(naked) void __fastcall fn_006C7A10(void* self) {
    __asm {
        push -1
        push 0x8b8d87
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_006E72A0
        mov ecx, dword ptr [esi + 0x158]
        mov dword ptr [esp + 0x54], 1
        test ecx, ecx
        je L_else
        mov eax, dword ptr [ecx]
        lea edx, [esp + 0x2c]
        push edx
        call dword ptr [eax + 0x20]
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x58], 2
        call ext_006E7390
        mov dword ptr [esp + 0x2c], 0x993ce0
        mov eax, dword ptr [esp + 0x30]
        xor edi, edi
        test eax, eax
        mov byte ptr [esp + 0x54], 3
        jle L_after_loop1
    L_loop1:
        mov eax, dword ptr [esp + 0x40]
        mov esi, dword ptr [eax + 4*edi]
        test esi, esi
        je L_skip1
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
    L_skip1:
        mov eax, dword ptr [esp + 0x30]
        inc edi
        cmp edi, eax
        jl L_loop1
    L_after_loop1:
        lea ecx, [esp + 0x30]
        call ext_006D2250
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 1
        call ext_006D2160
        jmp L_join
    L_else:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push 0
        push 0xaa8cc4
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [edx + 8]
    L_join:
        mov ebp, dword ptr [esp + 0x5c]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call ext_006E72D0
        mov dword ptr [esp + 0xc], 1
        mov dword ptr [esp + 0x10], 0x993ce0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x54], 4
        jle L_after_loop2
    L_loop2:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + 4*edi]
        test esi, esi
        je L_skip2
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
    L_skip2:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl L_loop2
    L_after_loop2:
        lea ecx, [esp + 0x14]
        call ext_006D2250
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x54], 0
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x4c]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret 4
    }
}

// [0x006CA940] sub_006CA940 (336 bytes)
extern "C" void ext_006C9E90();
extern "C" void ext_006C9EA0();
extern "C" void ext_006C9F50();
extern "C" void ext_006C9F70();
extern "C" void ext_006CA020();
extern "C" void ext_006CA4F0();
extern "C" void ext_006CA520();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_006CA940(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0Ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        or eax, -1
        xor edi, edi
        mov byte ptr [esi + 1Dh], 0
        mov dword ptr [esi + 48h], eax
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esi + 4Ch], 7FFFFFFFh
        call ext_006CA6A0
        test eax, eax
        mov al, byte ptr [esp + 20h]
        jne L_998
        test al, al
        jne L_4B
        mov ecx, esi
        call ext_006C9F70
        fmul dword ptr [esp + 24h]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006CD330
        jmp L_4B
L_998:
        test al, al
        je L_9FA
        mov eax, dword ptr [esi + 24h]
        xor ebx, ebx
        cmp eax, edi
        jle L_4B
        mov ebp, dword ptr [esp + 24h]
L_9AD:
        push ebx
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9F50
        test al, al
        je L_9F0
        push ebx
        mov ecx, esi
        call ext_006CA020
        mov edi, eax
        push ebp
        mov ecx, edi
        call ext_006C9E90
        push ebp
        mov ecx, edi
        call ext_006C9EA0
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        jne L_9E8
        mov dword ptr [esp + 14h], ebx
        jmp L_9EC
L_9E8:
        mov dword ptr [esp + 18h], ebx
L_9EC:
        inc dword ptr [esp + 10h]
L_9F0:
        mov eax, dword ptr [esi + 24h]
        inc ebx
        cmp ebx, eax
        jl L_9AD
        jmp L_4B
L_9FA:
        mov ecx, esi
        call ext_006C9F70
        fmul dword ptr [esp + 24h]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006CD330
        cmp dword ptr [esi + 24h], edi
        jle L_A3B
        mov ebp, dword ptr [esp + 24h]
L_A19:
        push edi
        mov ecx, esi
        call ext_006CA020
        mov ebx, eax
        push ebp
        mov ecx, ebx
        call ext_006C9E90
        push ebp
        mov ecx, ebx
        call ext_006C9EA0
        mov eax, dword ptr [esi + 24h]
        inc edi
        cmp edi, eax
        jl L_A19
L_A3B:
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [esp + 14h], 0
        dec eax
        mov dword ptr [esp + 18h], eax
L_4B:
        mov ecx, esi
        mov byte ptr [esi + 1Dh], 1
        call ext_006CA4F0
        mov eax, dword ptr [esp + 14h]
        mov ecx, esi
        push eax
        push 10h
        call ext_006D03E0
        mov ecx, dword ptr [esp + 18h]
        push ecx
        push 10h
        mov ecx, esi
        call ext_006D03E0
        mov ecx, esi
        call ext_006CA520
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0Ch
        ret 8
    }
}

// [0x006CBDB0] sub_006CBDB0 (336 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DC0();
extern "C" void ext_006CA060();
extern "C" void ext_006CB190();
extern "C" void ext_00722D00();
extern "C" int mem_00993838;
extern "C" int mem_00943350;

extern "C" __declspec(naked) void __fastcall fn_006CBDB0(void* self) {
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     esi, ecx
        test    edi, edi
        mov     dword ptr [esp + 0x10], 0
        jle     cb_nonpos
        push    edi
        call    ext_006CA060
        lea     ebx, [edi - 1]
        mov     ecx, esi
        push    ebx
        mov     dword ptr [esp + 0x28], eax
        call    ext_006CA060
        mov     ebp, eax
        mov     ecx, ebp
        call    ext_006C9C30
        cmp     eax, 2
        jne     cb_not2
        fld     dword ptr [mem_00993838]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
cb_not2:
        mov     ecx, ebp
        call    ext_006C9C30
        cmp     eax, 4
        jne     cb_not4
        fld     dword ptr [mem_00943350]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
cb_not4:
        mov     ebp, dword ptr [esp + 0x24]
        mov     ecx, ebp
        call    ext_006C9C30
        cmp     eax, 8
        jne     cb_generic
        mov     ecx, ebp
        call    ext_006C9CD0
        cmp     eax, 0x100
        je      cb_special
        mov     ecx, ebp
        call    ext_006C9CD0
        cmp     eax, 0x900
        jne     cb_generic
cb_special:
        push    ebx
        mov     ecx, esi
        call    ext_006CA060
        push    1
        mov     ecx, eax
        call    ext_006C9DC0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
cb_generic:
        push    edi
        mov     ecx, esi
        call    ext_006CB190
        fstp    qword ptr [esp + 0x18]
        push    edi
        lea     eax, [esp + 0x1c]
        push    esi
        lea     ecx, [esp + 0x18]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        call    ext_00722D00
        fld     qword ptr [esp + 0x20]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
cb_nonpos:
        jne     cb_ret_local
        push    0
        mov     ecx, esi
        call    ext_006CA060
        mov     esi, eax
        mov     ecx, esi
        call    ext_006C9C30
        cmp     eax, 8
        jne     cb_ret_local
        mov     ecx, esi
        call    ext_006C9CD0
        cmp     eax, 0x100
        je      cb_zero_special
        mov     ecx, esi
        call    ext_006C9CD0
        cmp     eax, 0x900
        jne     cb_ret_local
cb_zero_special:
        push    0
        mov     ecx, esi
        call    ext_006C9DC0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
cb_ret_local:
        fld     dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}

// [0x006CA3A0] sub_006CA3A0 (336 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9C40();
extern "C" void ext_006C9DA0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006C9F50();
extern "C" void ext_006CA060();
extern "C" void ext_006CB190();
extern "C" void ext_006CB8E0();
extern "C" void ext_006CBF00();
extern "C" void ext_006CC310();
extern "C" void ext_006D03E0();
extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __fastcall fn_006CA3A0(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi + 0x48], 0xffffffff
        mov dword ptr [esi + 0x4c], 0x7fffffff
        mov edi, dword ptr [esi + 0x24]
        test edi, edi
        jle end_6CA3A0
        push ebx
        lea ebx, [edi - 1]
        push ebp
        mov dword ptr [esp + 0x10], ebx
loop_6CA3A0:
        mov al, byte ptr [esp + 0x20]
        test al, al
        je skip1_6CA3A0
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F50
        test al, al
        je next_6CA3A0
skip1_6CA3A0:
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9C30
        cmp dword ptr [esp + 0x24], eax
        je next_6CA3A0
        cmp edi, dword ptr [esi + 0x24]
        jge ge1_6CA3A0
        push ebx
        mov ecx, esi
        call ext_006CBF00
        jmp after1_6CA3A0
ge1_6CA3A0:
        fld qword ptr [mem_0092A278]
after1_6CA3A0:
        mov eax, dword ptr [esi + 0x24]
        fstp dword ptr [esp + 0x14]
        cmp edi, eax
        jge ge2_6CA3A0
        push edi
        mov ecx, esi
        call ext_006CB190
        jmp after2_6CA3A0
ge2_6CA3A0:
        fld qword ptr [mem_0092A278]
after2_6CA3A0:
        fstp dword ptr [esp + 0x18]
        push ebx
        mov ecx, esi
        call ext_006CA060
        mov ebp, eax
        mov eax, dword ptr [esi + 0x24]
        cmp edi, eax
        jge ge3_6CA3A0
        push edi
        mov ecx, esi
        call ext_006CA060
        mov ebx, eax
        jmp after3_6CA3A0
ge3_6CA3A0:
        xor ebx, ebx
after3_6CA3A0:
        push 0
        push 0
        mov ecx, ebp
        call ext_006C9DF0
        push 0
        push 1
        mov ecx, ebp
        call ext_006C9DF0
        mov eax, dword ptr [esp + 0x24]
        mov ecx, ebp
        push eax
        call ext_006C9C40
        push 0
        mov ecx, ebp
        call ext_006C9DA0
        test ebx, ebx
        je noebx_6CA3A0
        push 0
        mov ecx, ebx
        call ext_006C9DA0
noebx_6CA3A0:
        cmp edi, dword ptr [esi + 0x24]
        jge noupd_6CA3A0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        push edx
        mov ecx, esi
        call ext_006CC310
        mov eax, dword ptr [esp + 0x18]
        mov ecx, esi
        push eax
        push edi
        call ext_006CB8E0
noupd_6CA3A0:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push 0x10
        mov ecx, esi
        call ext_006D03E0
        cmp edi, dword ptr [esi + 0x24]
        jge tail_6CA3A0
        push edi
        push 0x10
        mov ecx, esi
        call ext_006D03E0
tail_6CA3A0:
        mov ebx, dword ptr [esp + 0x10]
next_6CA3A0:
        dec edi
        dec ebx
        test edi, edi
        mov dword ptr [esp + 0x10], ebx
        jg loop_6CA3A0
        pop ebp
        pop ebx
end_6CA3A0:
        pop edi
        pop esi
        add esp, 0xc
        ret 8
    }
}

// [0x006CA7D0] sub_006CA7D0 (368 bytes)
extern "C" void ext_006C9E80();
extern "C" void ext_006CB860();
extern "C" void ext_006CBAC0();
extern "C" int mem_0092528C;

extern "C" __declspec(naked) int __fastcall fn_006CA7D0(void* self, void* dummy, int idx) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x28]
        test esi, esi
        push edi
        mov ebx, ecx
        jl L_ret1
        mov eax, dword ptr [ebx + 0x24]
        cmp esi, eax
        jge L_ret1
        cmp eax, 0x1
        jne L_check_last
        push 0x0
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        fstp dword ptr [ebx + 0x14]
    L_check_last:
        mov eax, dword ptr [ebx + 0x24]
        dec eax
        cmp esi, eax
        jge L_after_shift
        lea ecx, [esi + 0x1]
        lea edx, [esp + 0x10]
        push ecx
        push edx
        mov ecx, ebx
        call ext_006CB860
        mov eax, 0x51eb851f
        mov ecx, 0x19
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, esi
        mov edi, edx
        cdq
        idiv ecx
        mov eax, 0x51eb851f
        mov ecx, edx
        mov edx, dword ptr [ebx + 0x24]
        dec edx
        imul edx
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        cmp ecx, 0x18
        mov ebp, edx
        jge L_check_pages
        mov edx, dword ptr [ebx + 0x20]
        lea eax, [ecx + 4*ecx]
        shl eax, 0x3
        mov edx, dword ptr [edx + 4*edi]
        mov esi, 0x3c0
        lea ecx, [ecx + 4*ecx + 0x5]
        sub esi, eax
        push esi
        lea ecx, [edx + 8*ecx]
        add edx, eax
        push ecx
        push edx
        call dword ptr [mem_0092528C]
        add esp, 0xc
    L_check_pages:
        cmp edi, ebp
        jge L_call_cbac0
        lea esi, [4*edi + 0x4]
        sub ebp, edi
    L_page_loop:
        mov eax, dword ptr [ebx + 0x20]
        mov ecx, dword ptr [esi + eax]
        mov eax, dword ptr [esi + eax - 0x4]
        add eax, 0x3c0
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], edx
        lea edx, [eax + 0x14]
        sub ecx, eax
        mov eax, 0x4
    L_inner_loop:
        mov edi, dword ptr [ecx + edx]
        mov dword ptr [edx], edi
        add edx, 0x4
        dec eax
        jne L_inner_loop
        mov eax, dword ptr [ebx + 0x20]
        push 0x3c0
        mov eax, dword ptr [eax + esi]
        lea ecx, [eax + 0x28]
        push ecx
        push eax
        call dword ptr [mem_0092528C]
        add esp, 0xc
        add esi, 0x4
        dec ebp
        jne L_page_loop
    L_call_cbac0:
        mov edx, dword ptr [esp + 0x2c]
        sub esp, 0x18
        mov ecx, 0x6
        lea esi, [esp + 0x28]
        mov edi, esp
        push edx
        rep movsd
        mov ecx, ebx
        call ext_006CBAC0
        mov esi, dword ptr [esp + 0x2c]
    L_after_shift:
        mov edx, dword ptr [ebx + 0x24]
        mov ecx, ebx
        dec edx
        dec esi
        push esi
        push 0x10
        mov dword ptr [ebx + 0x24], edx
        call ext_006D03E0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    L_ret1:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

// [0x006C1BE0] sub_006C1BE0 (457 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006BECD0();
extern "C" void ext_006C2080();
extern "C" void ext_006C2E60();
extern "C" void ext_006C2F10();
extern "C" void ext_006C83D0();
extern "C" void ext_006C84B0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2370();
extern "C" void ext_006DC200();
extern "C" void ext_006DCB40();
extern "C" void ext_006DCFD0();
extern "C" void ext_006E73B0();
extern "C" void ext_007149E0();

extern "C" __declspec(naked) void __fastcall fn_006C1BE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b8adc
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, [esp+0x24]
        mov [esp+0x10], esi
        lea ebp, [esi+0x4e8]
        push ebp
        push eax
        push ecx
        mov ecx, esi
        call ext_006DC200
        lea edi, [esi+0xf4]
        xor ebx, ebx
        push 4
        push 0x10
        mov ecx, edi
        mov [esp+0x24], ebx
        call ext_006D2130
        lea edx, [edi+0x10]
        mov [edi+0x14], edx
        lea ecx, [esi+0x118]
        mov byte ptr [esp+0x1c], 1
        mov [esi+0x10c], ebx
        mov [esi+0x110], ebx
        mov [esi+0x114], ebx
        call ext_006D2370
        lea ecx, [esi+0x138]
        mov byte ptr [esp+0x1c], 2
        call ext_006D2370
        lea ecx, [esi+0x168]
        mov byte ptr [esp+0x1c], 3
        mov [esi+0x158], ebx
        mov [esi+0x15c], ebx
        mov [esi+0x160], bl
        mov dword ptr [esi+0x164], 1
        call ext_006C83D0
        lea ecx, [esi+0x290]
        mov byte ptr [esp+0x1c], 4
        call ext_006C83D0
        lea ecx, [esi+0x3b8]
        mov byte ptr [esp+0x1c], 5
        call ext_006C84B0
        lea ecx, [esi+0x440]
        mov byte ptr [esp+0x1c], 6
        call ext_006C84B0
        lea edi, [esi+0x4d0]
        push 0x10
        push 0x10
        mov ecx, edi
        mov byte ptr [esp+0x24], 7
        mov [esi+0x4cc], bl
        call ext_006D2130
        lea eax, [edi+0x10]
        mov [edi+0x14], eax
        push 8
        push 0xaa87c4
        mov ecx, ebp
        mov byte ptr [esp+0x24], 8
        call ext_006E73B0
        push 0x2100
        mov byte ptr [esp+0x20], 9
        mov [esi+0x540], ebx
        mov dword ptr [esi], 0x9937a8
        call ext_006A5C62
        add esp, 4
        mov [esp+0x28], eax
        mov byte ptr [esp+0x1c], 0xa
        cmp eax, ebx
        je L_1BE0_a
        push esi
        mov ecx, eax
        call ext_006BECD0
        jmp L_1BE0_b
L_1BE0_a:
        xor eax, eax
L_1BE0_b:
        push 0xe0
        mov byte ptr [esp+0x20], 9
        mov [esi+0xf0], eax
        call ext_006A5C62
        add esp, 4
        mov [esp+0x28], eax
        cmp eax, ebx
        mov byte ptr [esp+0x1c], 0xb
        je L_1BE0_c
        push esi
        mov ecx, eax
        call ext_007149E0
        jmp L_1BE0_d
L_1BE0_c:
        xor eax, eax
L_1BE0_d:
        mov ecx, esi
        mov byte ptr [esp+0x1c], 9
        mov [esi+0x4c8], eax
        call ext_006C2080
        mov ecx, esi
        call ext_006DCB40
        push 1
        mov ecx, esi
        call ext_006C2E60
        push 3
        mov ecx, esi
        call ext_006C2F10
        mov ecx, esi
        call ext_006DCFD0
        mov ecx, [esp+0x14]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x006C8200] sub_006C8200 (464 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C8200(void* out, const double* a, const double* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        cmp eax, ecx
        jne else_path
        fld qword ptr [ecx]
        fld qword ptr [ecx + 32]
        fld qword ptr [ecx + 64]
        mov edx, dword ptr [esp + 12]
        fld st(0)
        fmul qword ptr [edx + 16]
        fld st(2)
        fmul qword ptr [edx + 8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax]
        fld st(0)
        fmul qword ptr [edx + 48]
        fld st(2)
        fmul qword ptr [edx + 40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 32]
        faddp st(1), st
        fstp qword ptr [eax + 32]
        fmul qword ptr [edx + 80]
        fxch st(1)
        fmul qword ptr [edx + 72]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 64]
        faddp st(1), st
        fstp qword ptr [eax + 64]
        fld qword ptr [ecx + 8]
        fld qword ptr [ecx + 40]
        fld qword ptr [ecx + 72]
        fld st(0)
        fmul qword ptr [edx + 16]
        fld st(2)
        fmul qword ptr [edx + 8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax + 8]
        fld st(0)
        fmul qword ptr [edx + 48]
        fld st(2)
        fmul qword ptr [edx + 40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 32]
        faddp st(1), st
        fstp qword ptr [eax + 40]
        fmul qword ptr [edx + 80]
        fxch st(1)
        fmul qword ptr [edx + 72]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 64]
        faddp st(1), st
        fstp qword ptr [eax + 72]
        fld qword ptr [ecx + 16]
        fld qword ptr [ecx + 48]
        fld qword ptr [ecx + 80]
        fld st(0)
        fmul qword ptr [edx + 16]
        fld st(2)
        fmul qword ptr [edx + 8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax + 16]
        fld st(0)
        fmul qword ptr [edx + 48]
        fld st(2)
        fmul qword ptr [edx + 40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 32]
        faddp st(1), st
        fstp qword ptr [eax + 48]
        fmul qword ptr [edx + 80]
        fxch st(1)
        fmul qword ptr [edx + 72]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 64]
        faddp st(1), st
        fstp qword ptr [eax + 80]
        ret
    else_path:
        mov edx, dword ptr [esp + 12]
        fld qword ptr [edx]
        fld qword ptr [edx + 8]
        fld qword ptr [edx + 16]
        fld st(1)
        fmul qword ptr [ecx + 32]
        fld st(1)
        fmul qword ptr [ecx + 64]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ecx + 8]
        fld st(2)
        fmul qword ptr [ecx + 40]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 72]
        faddp st(1), st
        fstp qword ptr [eax + 8]
        fxch st(2)
        fmul qword ptr [ecx + 16]
        fxch st(1)
        fmul qword ptr [ecx + 48]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 80]
        faddp st(1), st
        fstp qword ptr [eax + 16]
        fld qword ptr [edx + 32]
        fld qword ptr [edx + 40]
        fld qword ptr [edx + 48]
        fld st(1)
        fmul qword ptr [ecx + 32]
        fld st(1)
        fmul qword ptr [ecx + 64]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 32]
        fld st(2)
        fmul qword ptr [ecx + 8]
        fld st(2)
        fmul qword ptr [ecx + 40]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 72]
        faddp st(1), st
        fstp qword ptr [eax + 40]
        fxch st(2)
        fmul qword ptr [ecx + 16]
        fxch st(1)
        fmul qword ptr [ecx + 48]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 80]
        faddp st(1), st
        fstp qword ptr [eax + 48]
        fld qword ptr [edx + 64]
        fld qword ptr [edx + 72]
        fld qword ptr [edx + 80]
        fld st(1)
        fmul qword ptr [ecx + 32]
        fld st(1)
        fmul qword ptr [ecx + 64]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 64]
        fld st(2)
        fmul qword ptr [ecx + 8]
        fld st(2)
        fmul qword ptr [ecx + 40]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 72]
        faddp st(1), st
        fstp qword ptr [eax + 72]
        fxch st(2)
        fmul qword ptr [ecx + 16]
        fxch st(1)
        fmul qword ptr [ecx + 48]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 80]
        faddp st(1), st
        fstp qword ptr [eax + 80]
        ret
    }
}

// [0x006C2990] sub_006C2990 (464 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void __stdcall ext_006B9EC0(void* a1);
extern "C" void ext_006BA780();
extern "C" void ext_006BADB0();
extern "C" void ext_006BAF70();
extern "C" void ext_006C1B30();
extern "C" void ext_006C2990();
extern "C" void ext_006D57D0();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5D448;

extern "C" __declspec(naked) int __fastcall fn_006C2990(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008B9073
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x9c
        mov eax, dword ptr [mem_00B5D448]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0xf0]
        push edi
        push eax
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        lea ecx, [esp + 0x14]
        mov ebp, eax
        call ext_006B9D10
        mov eax, dword ptr [esp + 0xbc]
        lea ecx, [esp + 0x60]
        push eax
        xor edi, edi
        push 0x00AA8704
        push ecx
        mov dword ptr [esp + 0xc0], edi
        call ext_006D57D0
        add esp, 0xc
        cmp ebp, edi
        mov byte ptr [esp + 0xb4], 0x1
        je L_ZERO
        mov edx, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x10], edx
        jmp L_LOOP_CHK
L_ZERO:
        mov dword ptr [esp + 0x10], edi
L_LOOP_CHK:
        cmp dword ptr [esp + 0x10], edi
        jle L_FAIL
        mov ecx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, edi
        je L_FAIL
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_FAIL
        mov esi, dword ptr [eax + 0x4]
        cmp esi, edi
        je L_FAIL
        mov ebx, dword ptr [esp + 0xc0]
L_BODY:
        mov al, byte ptr [esp + 0xc4]
        mov ecx, esi
        test al, al
        je L_NOFLAG
        call ext_006C1B30
        mov ecx, eax
        call ext_006BAF70
        jmp L_AFTER_GET
L_NOFLAG:
        call ext_006C1B30
        mov ecx, eax
        call ext_006BADB0
L_AFTER_GET:
        push eax
        lea ecx, [esp + 0x18]
        call ext_006B9EC0
        lea eax, [esp + 0x60]
        lea ecx, [esp + 0x14]
        push eax
        call ext_006BA780
        test al, al
        jne L_MATCHED_ALT
        test bl, bl
        je L_NEXT
        mov ecx, dword ptr [esp + 0xc4]
        mov edx, dword ptr [esp + 0xbc]
        push ecx
        push ebx
        push edx
        mov ecx, esi
        call ext_006C1B30
        mov ecx, eax
        call ext_006C2990
        mov esi, eax
        test esi, esi
        jne L_RET_ESI
L_NEXT:
        inc edi
        js L_FAIL
        cmp edi, dword ptr [esp + 0x10]
        jge L_FAIL
        mov ecx, dword ptr [ebp + 0x10]
        lea eax, [edi + 2*edi]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_FAIL
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_FAIL
        mov esi, dword ptr [eax + 0x4]
        test esi, esi
        jne L_BODY
L_FAIL:
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xb4], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xb4], -1
        call ext_006B9D70
        xor eax, eax
L_EPI:
        mov ecx, dword ptr [esp + 0xac]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa8
        ret 0xc
L_MATCHED_ALT:
        mov ecx, esi
        call ext_006C1B30
        mov esi, eax
L_RET_ESI:
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xb4], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xb4], -1
        call ext_006B9D70
        mov eax, esi
        jmp L_EPI
    }
}

// [0x006CB8E0] sub_006CB8E0 (480 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CC310();
extern "C" void ext_006D03E0();
extern "C" void ext_00722D00();
extern "C" __declspec(naked) void __fastcall fn_006CB8E0(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        mov ebx, ecx
        test ebp, ebp
        jle L_epi_short
        push esi
        lea eax, [ebp - 0x1]
        push edi
        mov dword ptr [ebx + 0x48], 0xffffffff
        push eax
        mov dword ptr [ebx + 0x4c], 0x7fffffff
        call ext_006CA060
        mov ecx, ebx
        mov esi, eax
        xor edi, edi
        call ext_006CA6A0
        cmp ebp, eax
        jge L_925
        push ebp
        mov ecx, ebx
        call ext_006CA060
        mov edi, eax
    L_925:
        mov ecx, esi
        call ext_006C9C30
        sub eax, 0x2
        je L_ba63
        sub eax, 0x2
        je L_ba63
        sub eax, 0x4
        jne L_ba71
        mov ecx, esi
        call ext_006C9CD0
        cmp eax, 0x900
        ja L_b9e2
        je L_972
        cmp eax, 0x100
        je L_972
        cmp eax, 0x400
        je L_9ed
        jmp L_ba71
    L_972:
        test edi, edi
        je L_9c0
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_998
        mov ecx, edi
        call ext_006C9CD0
        test ah, 0x4
        je L_998
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        jmp L_ba68
    L_998:
        fld dword ptr [esp + 0x28]
        push ebp
        lea edx, [esp + 0x14]
        fstp qword ptr [esp + 0x14]
        push ebx
        lea eax, [esp + 0x20]
        push edx
        push eax
        call ext_00722D00
        fld qword ptr [esp + 0x28]
        add esp, 0xc
        fstp dword ptr [esp]
        jmp L_ba68
    L_9c0:
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push 0x1
        mov ecx, esi
        call ext_006C9DF0
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    L_b9e2:
        cmp eax, 0xc00
        jne L_ba71
    L_9ed:
        test edi, edi
        je L_ba41
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_ba09
        mov ecx, edi
        call ext_006C9CD0
        test ah, 0x4
        jne L_ba15
    L_ba09:
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        je L_ba1c
    L_ba15:
        mov edx, dword ptr [esp + 0x28]
        push edx
        jmp L_ba68
    L_ba1c:
        fld dword ptr [esp + 0x28]
        push ebp
        lea eax, [esp + 0x1c]
        fstp qword ptr [esp + 0x1c]
        push ebx
        lea ecx, [esp + 0x18]
        push eax
        push ecx
        call ext_00722D00
        fld qword ptr [esp + 0x20]
        add esp, 0xc
        fstp dword ptr [esp]
        jmp L_ba68
    L_ba41:
        mov edx, dword ptr [esp + 0x28]
        mov ecx, esi
        push edx
        push 0x1
        call ext_006C9DF0
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    L_ba63:
        mov eax, dword ptr [esp + 0x28]
        push eax
    L_ba68:
        push 0x1
        mov ecx, esi
        call ext_006C9DF0
    L_ba71:
        test edi, edi
        je L_baa0
        cmp edi, esi
        je L_baa0
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 0x8
        jne L_baa0
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x400
        jne L_baa0
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push ebp
        mov ecx, ebx
        call ext_006CC310
    L_baa0:
        push ebp
        push 0x10
        mov ecx, ebx
        call ext_006D03E0
        pop edi
        pop esi
    L_epi_short:
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006C7BC0] sub_006C7BC0 (496 bytes)
extern "C" __declspec(naked) void __fastcall fn_006C7BC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        sub esp, 8
        cmp eax, ecx
        jne alias_path
        fld qword ptr [ecx + 10h]
        fld qword ptr [ecx + 30h]
        fld qword ptr [ecx + 40h]
        fld qword ptr [ecx + 48h]
        fld qword ptr [ecx + 50h]
        mov edx, dword ptr [esp + 14h]
        push esi
        fld st(2)
        fmul qword ptr [edx + 40h]
        fld st(1)
        fmul qword ptr [edx + 50h]
        push edi
        faddp st(1), st
        fld st(2)
        fmul qword ptr [edx + 48h]
        faddp st(1), st
        fstp qword ptr [eax + 50h]
        fld st(2)
        fmul qword ptr [edx + 20h]
        fld st(1)
        fmul qword ptr [edx + 30h]
        faddp st(1), st
        fld st(2)
        fmul qword ptr [edx + 28h]
        faddp st(1), st
        fstp qword ptr [eax + 30h]
        fxch st(2)
        fmul qword ptr [edx]
        fxch st(2)
        fmul qword ptr [edx + 10h]
        faddp st(2), st
        fmul qword ptr [edx + 8h]
        faddp st(1), st
        fstp qword ptr [eax + 10h]
        fld qword ptr [ecx + 20h]
        fld qword ptr [ecx + 28h]
        fld st(1)
        fmul qword ptr [edx + 40h]
        fld st(1)
        fmul qword ptr [edx + 48h]
        mov esi, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 0ch]
        mov dword ptr [esp + 8], esi
        mov dword ptr [esp + 0ch], edi
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 50h]
        faddp st(1), st
        fstp qword ptr [eax + 48h]
        fld st(1)
        fmul qword ptr [edx + 20h]
        fld st(1)
        fmul qword ptr [edx + 28h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 30h]
        faddp st(1), st
        fstp qword ptr [eax + 28h]
        fxch st(1)
        fmul qword ptr [edx]
        fxch st(1)
        fmul qword ptr [edx + 8h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 10h]
        faddp st(1), st
        fstp qword ptr [eax + 8h]
        fld qword ptr [ecx]
        fld st(0)
        fmul qword ptr [edx + 40h]
        fld qword ptr [esp + 8]
        fmul qword ptr [edx + 48h]
        faddp st(1), st
        fld st(2)
        fmul qword ptr [edx + 50h]
        faddp st(1), st
        fstp qword ptr [eax + 40h]
        fld st(0)
        fmul qword ptr [edx + 20h]
        fld qword ptr [esp + 8]
        fmul qword ptr [edx + 28h]
        faddp st(1), st
        fld st(2)
        fmul qword ptr [edx + 30h]
        pop edi
        pop esi
        faddp st(1), st
        fstp qword ptr [eax + 20h]
        fmul qword ptr [edx]
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fmul qword ptr [edx + 8h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 10h]
        faddp st(1), st
        fstp qword ptr [eax]
        add esp, 8
        ret
    alias_path:
        mov edx, dword ptr [esp + 14h]
        fld qword ptr [edx]
        fld qword ptr [edx + 8h]
        fld qword ptr [edx + 10h]
        fld st(1)
        fmul qword ptr [ecx + 8h]
        fld st(1)
        fmul qword ptr [ecx + 10h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ecx + 20h]
        fld st(2)
        fmul qword ptr [ecx + 28h]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 30h]
        faddp st(1), st
        fstp qword ptr [eax + 8h]
        fxch st(2)
        fmul qword ptr [ecx + 40h]
        fxch st(1)
        fmul qword ptr [ecx + 48h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 50h]
        faddp st(1), st
        fstp qword ptr [eax + 10h]
        fld qword ptr [edx + 20h]
        fld qword ptr [edx + 28h]
        fld qword ptr [edx + 30h]
        fld st(1)
        fmul qword ptr [ecx + 8h]
        fld st(1)
        fmul qword ptr [ecx + 10h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 20h]
        fld st(2)
        fmul qword ptr [ecx + 20h]
        fld st(2)
        fmul qword ptr [ecx + 28h]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 30h]
        faddp st(1), st
        fstp qword ptr [eax + 28h]
        fxch st(2)
        fmul qword ptr [ecx + 40h]
        fxch st(1)
        fmul qword ptr [ecx + 48h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 50h]
        faddp st(1), st
        fstp qword ptr [eax + 30h]
        fld qword ptr [edx + 40h]
        fld qword ptr [edx + 48h]
        fld qword ptr [edx + 50h]
        fld st(1)
        fmul qword ptr [ecx + 8h]
        fld st(1)
        fmul qword ptr [ecx + 10h]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 40h]
        fld st(2)
        fmul qword ptr [ecx + 20h]
        fld st(2)
        fmul qword ptr [ecx + 28h]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 30h]
        faddp st(1), st
        fstp qword ptr [eax + 48h]
        fxch st(2)
        fmul qword ptr [ecx + 40h]
        fxch st(1)
        fmul qword ptr [ecx + 48h]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 50h]
        faddp st(1), st
        fstp qword ptr [eax + 50h]
        add esp, 8
        ret
    }
}

// [0x006C1350] sub_006C1350 (526 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_00714570();

// Naked: SEH-framed (push -1 / push handler / fs:[0]) sequence of member sub-object inits.
extern "C" __declspec(naked) void __fastcall fn_006C1350(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8b86b9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x14], esi
        call ext_006D2370
        lea edi, [esi + 0x20]
        mov dword ptr [esp + 0x60], 0
        mov ecx, edi
        call ext_006D2370
        lea ebp, [esi + 0x40]
        mov byte ptr [esp + 0x60], 1
        mov ecx, ebp
        call ext_006D2370
        lea ebx, [esi + 0x60]
        mov byte ptr [esp + 0x60], 2
        mov ecx, ebx
        call ext_006D2370
        lea ecx, [esi + 0x80]
        mov byte ptr [esp + 0x60], 3
        call ext_006D2370
        lea ecx, [esi + 0xa0]
        mov byte ptr [esp + 0x60], 4
        call ext_006D2370
        lea ecx, [esi + 0xc0]
        mov byte ptr [esp + 0x60], 5
        call ext_006D2370
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x60], 6
        call ext_006D2370
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x60], 7
        call ext_006D2370
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x60], 8
        call ext_006D2370
        lea ecx, [esi + 0x140]
        mov byte ptr [esp + 0x60], 9
        call ext_006D2370
        lea ecx, [esi + 0x168]
        mov byte ptr [esp + 0x60], 0xa
        call ext_00714570
        push 0x3ff00000
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x80], 0xb
        call ext_006D23B0
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        push 0x3ff00000
        push 0
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x80], 0xc
        call ext_006D23B0
        mov byte ptr [esp + 0x60], 0xd
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebx
        call ext_007873F0
        push eax
        mov ecx, edi
        call ext_007873F0
        push eax
        mov ecx, esi
        call ext_007873F0
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esi + 0xc0]
        call ext_007873F0
        push eax
        lea ecx, [esi + 0xa0]
        call ext_007873F0
        push eax
        lea ecx, [esi + 0x80]
        call ext_007873F0
        lea edx, [esp + 0x18]
        mov ecx, ebp
        push edx
        call ext_007873F0
        push eax
        lea ecx, [esi + 0xe0]
        call ext_007873F0
        lea eax, [esp + 0x18]
        lea ecx, [esi + 0x120]
        push eax
        mov dword ptr [esi + 0x160], 0
        mov byte ptr [esi + 0x164], 0
        call ext_007873F0
        push eax
        lea ecx, [esi + 0x100]
        call ext_007873F0
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esi + 0x140]
        call ext_007873F0
        lea ecx, [esp + 0x38]
        mov byte ptr [esi + 0x1e8], 0
        mov dword ptr [esi + 0x1ec], 1
        mov byte ptr [esp + 0x60], 0xc
        call ext_006D80A0
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x60], 0xb
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x58]
        mov eax, esi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006CABD0] sub_006CABD0 (544 bytes)
extern "C" void ext_006CA020();
extern "C" void ext_006CA0C0();
extern "C" void ext_006CA570();
extern "C" void ext_006CA6D0();
extern "C" void ext_006CAEF0();
extern "C" void ext_006D03E0();
extern "C" void ext_0079E5B0();
extern "C" void ext_00872828();
extern "C" int mem_0092528C;
extern "C" int mem_0092520C;

extern "C" __declspec(naked) void __fastcall fn_006CABD0(void* self) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 24h]
        inc eax
        push eax
        call ext_006CA570
        mov dword ptr [esi + 48h], 0ffffffffh
        mov dword ptr [esi + 4ch], 7fffffffh
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        jne NEAR PTR L_6cad78
        xor ebx, ebx
L_6cabfe:
        mov edi, dword ptr [esi + 24h]
        cmp ebx, edi
        jge NEAR PTR L_6cad02
        mov eax, 51eb851fh
        mov ecx, 19h
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, ebx
        mov ebp, edx
        cdq
        idiv ecx
        mov eax, 51eb851fh
        mov dword ptr [esp + 10h], ebp
        mov ecx, edx
        imul edi
        sar edx, 3
        mov eax, edx
        mov dword ptr [esp + 14h], ecx
        shr eax, 1fh
        add edx, eax
        mov edi, edx
        cmp edi, ebp
        jle NEAR PTR L_6cacd4
L_6cac4b:
        mov ecx, dword ptr [esi + 20h]
        cmp dword ptr [ecx + edi*4], 0
        jne SHORT L_6cac6e
        push 400h
        call ext_006CA0C0
        mov edx, dword ptr [esi + 20h]
        add esp, 4
        mov dword ptr [edx + edi*4], eax
        mov eax, dword ptr [esi + 2ch]
        inc eax
        mov dword ptr [esi + 2ch], eax
L_6cac6e:
        mov eax, dword ptr [esi + 20h]
        push 3c0h
        mov eax, dword ptr [eax + edi*4]
        push eax
        add eax, 28h
        push eax
        call dword ptr [mem_0092528C]
        mov ecx, dword ptr [esi + 20h]
        add esp, 0ch
        mov eax, dword ptr [ecx + edi*4 - 4]
        lea ecx, [ecx + edi*4]
        add eax, 3c0h
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 10h], edx
        lea edx, [ecx + 14h]
        sub eax, ecx
        mov ecx, 4
L_6cacb8:
        mov ebp, dword ptr [eax + edx]
        mov dword ptr [edx], ebp
        add edx, 4
        dec ecx
        jne SHORT L_6cacb8
        mov ebp, dword ptr [esp + 10h]
        dec edi
        cmp edi, ebp
        jg NEAR PTR L_6cac4b
        mov ecx, dword ptr [esp + 14h]
L_6cacd4:
        cmp ecx, 18h
        jge SHORT L_6cad02
        mov edx, dword ptr [esi + 20h]
        lea eax, [ecx + ecx*4]
        shl eax, 3
        mov ebp, dword ptr [edx + ebp*4]
        mov edx, 3c0h
        sub edx, eax
        lea ecx, [ecx + ecx*4 + 5]
        push edx
        add eax, ebp
        lea edx, [ebp + ecx*8]
        push eax
        push edx
        call dword ptr [mem_0092528C]
        add esp, 0ch
L_6cad02:
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esi + 24h]
        mov ecx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 28h]
        push eax
        inc edx
        push ecx
        mov ecx, edi
        mov dword ptr [esi + 24h], edx
        call ext_0079E5B0
        push ebx
        mov ecx, esi
        call ext_006CA020
        mov edx, dword ptr [edi]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [eax + 10h], ecx
        lea ecx, [eax + 14h]
        sub edi, eax
        mov eax, 4
L_6cad46:
        mov edx, dword ptr [edi + ecx]
        mov dword ptr [ecx], edx
        add ecx, 4
        dec eax
        jne SHORT L_6cad46
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        je SHORT L_6cad5b
        mov dword ptr [eax], ebx
L_6cad5b:
        mov edx, dword ptr [esi + 18h]
        push ebx
        inc edx
        push 10h
        mov ecx, esi
        mov dword ptr [esi + 18h], edx
        call ext_006D03E0
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0ch
        ret 10h
L_6cad78:
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_006CAEF0
        fstp qword ptr [esp + 14h]
        mov edi, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 14h]
        push edi
        push ebp
        call dword ptr [mem_0092520C]
        call ext_00872828
        push edi
        push ebp
        mov ebx, eax
        call dword ptr [mem_0092520C]
        fcomp qword ptr [esp + 24h]
        add esp, 10h
        fnstsw ax
        test ah, 40h
        je NEAR PTR L_6cabfe
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 28h]
        push ecx
        push edx
        mov ecx, edi
        call ext_0079E5B0
        push edi
        push ebx
        mov ecx, esi
        call ext_006CA6D0
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0ch
        ret 10h
    }
}

// [0x006C1DD0] sub_006C1DD0 (575 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006C8440();
extern "C" void ext_006C8500();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_006D80A0();
extern "C" void ext_006DC2C0();
extern "C" void ext_006F76E0();
extern "C" void ext_007641C0();

extern "C" __declspec(naked) void __fastcall fn_006C1DD0(void* self) {
    __asm {
        push -1
        push 08b8baah
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 09937a8h
        mov eax, dword ptr [edi + 4d0h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 24h], 9
        jle f6c1_after_loop
        xor ebp, ebp
        mov dword ptr [esp + 10h], eax
f6c1_loop:
        mov eax, dword ptr [edi + 4e0h]
        lea esi, [eax + ebp]
        mov eax, dword ptr [eax + ebp + 4]
        cmp eax, 3
        ja f6c1_next
        _emit 0ffh
        _emit 024h
        _emit 085h
        _emit 0
        _emit 0
        _emit 0
        _emit 0
f6c1_c0:
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi]
        lea ecx, [eax + eax*2]
        shl ecx, 3
        sub ecx, eax
        mov dword ptr [edx + ecx*8 + 1a0h], ebx
        jmp f6c1_next
f6c1_c1:
        mov ecx, dword ptr [esi]
        call ext_006F76E0
        mov esi, dword ptr [esi + 8]
        lea ecx, [esi + esi*4]
        shl ecx, 4
        mov dword ptr [eax + ecx + 0ch], ebx
        jmp f6c1_next
f6c1_c2:
        mov ecx, dword ptr [esi]
        call ext_006F76E0
        mov esi, dword ptr [esi + 8]
        lea edx, [esi + esi*2]
        mov dword ptr [eax + edx*4 + 3bbch], ebx
        jmp f6c1_next
f6c1_c3:
        mov ecx, dword ptr [esi]
        call ext_006F76E0
        mov ecx, dword ptr [esi + 8]
        lea edx, [ecx*8]
        sub edx, ecx
        mov ecx, dword ptr [esi + 0ch]
        lea edx, [ecx + edx*2]
        mov dword ptr [eax + edx*4 + 3dcch], ebx
f6c1_next:
        mov eax, dword ptr [esp + 10h]
        add ebp, 10h
        dec eax
        mov dword ptr [esp + 10h], eax
        jne f6c1_loop
f6c1_after_loop:
        mov esi, dword ptr [edi + 4c8h]
        cmp esi, ebx
        mov dword ptr [esp + 10h], esi
        je f6c1_L19
        lea ebp, [esi + 90h]
        mov dword ptr [esp + 18h], ebp
        lea ecx, [ebp + 28h]
        mov byte ptr [esp + 24h], 0ch
        call ext_006D80A0
        lea ecx, [ebp + 8]
        mov byte ptr [esp + 24h], 0bh
        call ext_006D80A0
        lea ebp, [esi + 48h]
        mov dword ptr [esp + 18h], ebp
        lea ecx, [ebp + 28h]
        mov byte ptr [esp + 24h], 0dh
        call ext_006D80A0
        lea ecx, [ebp + 8]
        mov byte ptr [esp + 24h], 0ah
        call ext_006D80A0
        lea ecx, [esi + 28h]
        mov byte ptr [esp + 24h], 0eh
        call ext_006D80A0
        lea ecx, [esi + 8]
        mov byte ptr [esp + 24h], 9
        call ext_006D80A0
        push esi
        call ext_006A5C5C
        add esp, 4
f6c1_L19:
        mov ecx, dword ptr [edi + 0f0h]
        mov dword ptr [edi + 4c8h], ebx
        push ebx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 4]
        mov esi, dword ptr [edi + 0f4h]
        lea ebp, [edi + 0f4h]
        cmp esi, ebx
        je f6c1_L5a
f6c1_L3b:
        mov ecx, dword ptr [ebp + 10h]
        dec esi
        mov ebx, dword ptr [ecx + esi*4]
        test ebx, ebx
        je f6c1_L56
        mov ecx, ebx
        call ext_006B9D70
        push ebx
        call ext_006A5C5C
        add esp, 4
f6c1_L56:
        test esi, esi
        jne f6c1_L3b
f6c1_L5a:
        mov ecx, ebp
        call ext_006D2250
        lea ecx, [edi + 4e8h]
        mov byte ptr [esp + 24h], 8
        call ext_007641C0
        lea ecx, [edi + 4d0h]
        mov byte ptr [esp + 24h], 7
        call ext_006D2160
        lea ecx, [edi + 440h]
        mov byte ptr [esp + 24h], 6
        call ext_006C8500
        lea ecx, [edi + 3b8h]
        mov byte ptr [esp + 24h], 5
        call ext_006C8500
        lea ecx, [edi + 290h]
        mov byte ptr [esp + 24h], 4
        call ext_006C8440
        lea ecx, [edi + 168h]
        mov byte ptr [esp + 24h], 3
        call ext_006C8440
        lea ecx, [edi + 138h]
        mov byte ptr [esp + 24h], 2
        call ext_006D80A0
        lea ecx, [edi + 118h]
        mov byte ptr [esp + 24h], 1
        call ext_006D80A0
        mov ecx, ebp
        mov byte ptr [esp + 24h], 0
        call ext_006D2160
        mov ecx, edi
        mov dword ptr [esp + 24h], -1
        call ext_006DC2C0
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret
    }
}

// [0x006C3C60] sub_006C3C60 (608 bytes)
extern "C" void ext_006C35D0();
extern "C" void ext_006C3C10();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __fastcall fn_006C3C60(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x008b8c2f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x64
        push esi
        mov esi, ecx
        push edi
        lea ecx, [ebp - 0x50]
        mov dword ptr [ebp - 0x10], 0x0
        call ext_006D2370
        mov eax, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0xc]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr [ebp - 0x4], 0x1
        call ext_006C35D0
        mov edx, dword ptr [esi + 0xf0]
        mov ecx, edi
        shl ecx, 0x5
        sub ecx, edi
        lea eax, [ebp - 0x70]
        shl ecx, 0x4
        lea esi, [ecx + edx + 0x1e80]
        lea edi, [esi + 0x20]
        push edi
        push esi
        push eax
        call ext_006C3C10
        fld qword ptr [ebp - 0x60]
        fmul qword ptr [esi + 0x50]
        fld qword ptr [ebp - 0x68]
        fmul qword ptr [esi + 0x48]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi + 0x14]
        add esp, 0xc
        faddp st(1), st
        fld qword ptr [ebp - 0x70]
        fmul qword ptr [esi + 0x40]
        faddp st(1), st
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        jne neg_path
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [ebp - 0x18], ecx
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ebp - 0x14], edx
        mov edx, dword ptr [esi]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x28], edx
        mov dword ptr [ebp - 0x24], eax
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x50]
        mov ecx, dword ptr [edi + 0x10]
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [edi + 0x8]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [edi]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        mov dword ptr [ebp - 0x14], eax
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fstp qword ptr [ebp - 0x48]
        mov ecx, dword ptr [esi + 0x50]
        mov edx, dword ptr [esi + 0x54]
        mov eax, dword ptr [esi + 0x48]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [esi + 0x4c]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [esi + 0x40]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [esi + 0x44]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        mov dword ptr [ebp - 0x14], eax
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        jmp join_path
neg_path:
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [esi]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        mov dword ptr [ebp - 0x14], eax
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fchs
        fstp qword ptr [ebp - 0x50]
        mov ecx, dword ptr [edi + 0x10]
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [edi + 0x8]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [edi]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        mov dword ptr [ebp - 0x14], eax
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fchs
        fstp qword ptr [ebp - 0x48]
        mov ecx, dword ptr [esi + 0x50]
        mov edx, dword ptr [esi + 0x54]
        mov eax, dword ptr [esi + 0x48]
        mov dword ptr [ebp - 0x28], ecx
        mov ecx, dword ptr [esi + 0x4c]
        mov dword ptr [ebp - 0x24], edx
        mov edx, dword ptr [esi + 0x40]
        mov dword ptr [ebp - 0x20], eax
        mov eax, dword ptr [esi + 0x44]
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x18], edx
        mov dword ptr [ebp - 0x14], eax
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x28]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x30]
        fchs
join_path:
        mov esi, dword ptr [ebp + 0x8]
        lea ecx, [ebp - 0x50]
        fstp qword ptr [ebp - 0x40]
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov dword ptr [ebp - 0x10], 0x1
        lea ecx, [ebp - 0x50]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006D80A0
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x006C3FB0] sub_006C3FB0 (624 bytes)
extern "C" __declspec(naked) void __cdecl fn_006C3FB0(void* out, const double* a, const double* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        cmp eax, ecx
        jne else_path
        fld qword ptr [ecx]
        fld qword ptr [ecx + 0x20]
        fld qword ptr [ecx + 0x40]
        mov edx, dword ptr [esp + 0xc]
        fld st(0)
        fmul qword ptr [edx + 0x10]
        fld st(2)
        fmul qword ptr [edx + 0x8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax]
        fld st(0)
        fmul qword ptr [edx + 0x30]
        fld st(2)
        fmul qword ptr [edx + 0x28]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x20]
        faddp st(1), st
        fstp qword ptr [eax + 0x20]
        fld st(0)
        fmul qword ptr [edx + 0x50]
        fld st(2)
        fmul qword ptr [edx + 0x48]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x40]
        faddp st(1), st
        fstp qword ptr [eax + 0x40]
        fmul qword ptr [edx + 0x70]
        fxch st(1)
        fmul qword ptr [edx + 0x68]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 0x60]
        faddp st(1), st
        fadd qword ptr [ecx + 0x60]
        fstp qword ptr [eax + 0x60]
        fld qword ptr [ecx + 0x8]
        fld qword ptr [ecx + 0x28]
        fld qword ptr [ecx + 0x48]
        fld st(0)
        fmul qword ptr [edx + 0x10]
        fld st(2)
        fmul qword ptr [edx + 0x8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax + 0x8]
        fld st(0)
        fmul qword ptr [edx + 0x30]
        fld st(2)
        fmul qword ptr [edx + 0x28]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x20]
        faddp st(1), st
        fstp qword ptr [eax + 0x28]
        fld st(0)
        fmul qword ptr [edx + 0x50]
        fld st(2)
        fmul qword ptr [edx + 0x48]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x40]
        faddp st(1), st
        fstp qword ptr [eax + 0x48]
        fmul qword ptr [edx + 0x70]
        fxch st(1)
        fmul qword ptr [edx + 0x68]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 0x60]
        faddp st(1), st
        fadd qword ptr [ecx + 0x68]
        fstp qword ptr [eax + 0x68]
        fld qword ptr [ecx + 0x10]
        fld qword ptr [ecx + 0x30]
        fld qword ptr [ecx + 0x50]
        fld st(0)
        fmul qword ptr [edx + 0x10]
        fld st(2)
        fmul qword ptr [edx + 0x8]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx]
        faddp st(1), st
        fstp qword ptr [eax + 0x10]
        fld st(0)
        fmul qword ptr [edx + 0x30]
        fld st(2)
        fmul qword ptr [edx + 0x28]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x20]
        faddp st(1), st
        fstp qword ptr [eax + 0x30]
        fld st(0)
        fmul qword ptr [edx + 0x50]
        fld st(2)
        fmul qword ptr [edx + 0x48]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [edx + 0x40]
        faddp st(1), st
        fstp qword ptr [eax + 0x50]
        fmul qword ptr [edx + 0x70]
        fxch st(1)
        fmul qword ptr [edx + 0x68]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [edx + 0x60]
        faddp st(1), st
        fadd qword ptr [ecx + 0x70]
        fstp qword ptr [eax + 0x70]
        ret
    else_path:
        mov edx, dword ptr [esp + 0xc]
        fld qword ptr [edx]
        fld qword ptr [edx + 0x8]
        fld qword ptr [edx + 0x10]
        fld st(1)
        fmul qword ptr [ecx + 0x20]
        fld st(1)
        fmul qword ptr [ecx + 0x40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax]
        fld st(2)
        fmul qword ptr [ecx + 0x8]
        fld st(2)
        fmul qword ptr [ecx + 0x28]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 0x48]
        faddp st(1), st
        fstp qword ptr [eax + 0x8]
        fxch st(1)
        fmul qword ptr [ecx + 0x30]
        fxch st(1)
        fmul qword ptr [ecx + 0x50]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 0x10]
        faddp st(1), st
        fstp qword ptr [eax + 0x10]
        fld qword ptr [edx + 0x20]
        fld qword ptr [edx + 0x28]
        fld qword ptr [edx + 0x30]
        fld st(1)
        fmul qword ptr [ecx + 0x20]
        fld st(1)
        fmul qword ptr [ecx + 0x40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 0x20]
        fld st(2)
        fmul qword ptr [ecx + 0x8]
        fld st(2)
        fmul qword ptr [ecx + 0x28]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 0x48]
        faddp st(1), st
        fstp qword ptr [eax + 0x28]
        fxch st(1)
        fmul qword ptr [ecx + 0x30]
        fxch st(1)
        fmul qword ptr [ecx + 0x50]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 0x10]
        faddp st(1), st
        fstp qword ptr [eax + 0x30]
        fld qword ptr [edx + 0x40]
        fld qword ptr [edx + 0x48]
        fld qword ptr [edx + 0x50]
        fld st(1)
        fmul qword ptr [ecx + 0x20]
        fld st(1)
        fmul qword ptr [ecx + 0x40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fstp qword ptr [eax + 0x40]
        fld st(2)
        fmul qword ptr [ecx + 0x8]
        fld st(2)
        fmul qword ptr [ecx + 0x28]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 0x48]
        faddp st(1), st
        fstp qword ptr [eax + 0x48]
        fxch st(1)
        fmul qword ptr [ecx + 0x30]
        fxch st(1)
        fmul qword ptr [ecx + 0x50]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 0x10]
        faddp st(1), st
        fstp qword ptr [eax + 0x50]
        fld qword ptr [edx + 0x60]
        fld qword ptr [edx + 0x68]
        fld qword ptr [edx + 0x70]
        fld st(1)
        fmul qword ptr [ecx + 0x20]
        fld st(1)
        fmul qword ptr [ecx + 0x40]
        faddp st(1), st
        fld st(3)
        fmul qword ptr [ecx]
        faddp st(1), st
        fadd qword ptr [ecx + 0x60]
        fstp qword ptr [eax + 0x60]
        fld st(2)
        fmul qword ptr [ecx + 0x8]
        fld st(2)
        fmul qword ptr [ecx + 0x28]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [ecx + 0x48]
        faddp st(1), st
        fadd qword ptr [ecx + 0x68]
        fstp qword ptr [eax + 0x68]
        fxch st(1)
        fmul qword ptr [ecx + 0x30]
        fxch st(1)
        fmul qword ptr [ecx + 0x50]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [ecx + 0x10]
        faddp st(1), st
        fadd qword ptr [ecx + 0x70]
        fstp qword ptr [eax + 0x70]
        ret
    }
}

// [0x006CDDB0] sub_006CDDB0 (624 bytes)
extern "C" int mem_009251DC;
extern "C" int mem_0092520C;
extern "C" int mem_0092A278;
extern "C" int mem_00991558;
extern "C" int mem_0092A270;
extern "C" int mem_00993840;
extern "C" int mem_00993838;
extern "C" void ext_006C9C30();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006CAEF0();
extern "C" void ext_006CB190();
extern "C" void ext_006CBF00();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00872828();

extern "C" __declspec(naked) void __fastcall fn_006CDDB0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 5Ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+0Ch], 0
        cmp dword ptr [esi+24h], 1
        jle L_6ce004
        mov eax, dword ptr [ebp+10h]
        mov ecx, dword ptr [ebp+0Ch]
        mov edx, dword ptr [ebp+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_006CAEF0
        fstp qword ptr [esp+30h]
        mov edi, dword ptr [esp+34h]
        mov ebx, dword ptr [esp+30h]
        push edi
        push ebx
        call dword ptr [mem_009251DC]
        fstp qword ptr [esp+28h]
        push edi
        push ebx
        call dword ptr [mem_0092520C]
        mov eax, dword ptr [esi+24h]
        add esp, 10h
        fstp qword ptr [esp+18h]
        dec eax
        mov dword ptr [esp+10h], eax
        fild dword ptr [esp+10h]
        fcomp qword ptr [esp+18h]
        fnstsw ax
        test ah, 1
        jne L_6ce004
        fld qword ptr [esp+20h]
        fcomp qword ptr [esp+18h]
        fnstsw ax
        test ah, 40h
        je L_6cde4e
        fld qword ptr [esp+18h]
        call ext_00872828
        push eax
        mov ecx, esi
        call ext_006CBF00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_6cde4e:
        fld qword ptr [esp+20h]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 1
        jne L_6ce004
        fld qword ptr [esp+20h]
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+18h], eax
        call ext_006CA060
        fld qword ptr [esp+18h]
        mov edi, eax
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+1Ch], eax
        call ext_006CA060
        mov ecx, edi
        mov ebx, eax
        call ext_006C9C30
        sub eax, 2
        je L_6cdff5
        sub eax, 2
        je L_6cdfa2
        sub eax, 4
        jne L_6ce004
        lea ecx, [esp+38h]
        push ecx
        mov ecx, edi
        call ext_006C9F00
        push eax
        lea edx, [esp+44h]
        lea eax, [esp+4Ch]
        push edx
        push eax
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp dword ptr [esp+0Ch]
        fld qword ptr [esp+30h]
        fsub qword ptr [esp+20h]
        mov ecx, edi
        fstp dword ptr [esp+10h]
        call ext_006C9E80
        fstp dword ptr [esp+20h]
        mov ecx, ebx
        call ext_006C9E80
        mov ecx, dword ptr [esp+14h]
        fstp dword ptr [esp+2Ch]
        push ecx
        mov ecx, esi
        call ext_006CBF00
        fmul dword ptr [esp+0Ch]
        mov edx, dword ptr [esp+18h]
        mov ecx, esi
        push edx
        fmul qword ptr [mem_00991558]
        fadd dword ptr [esp+24h]
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+30h]
        fstp qword ptr [esp+34h]
        call ext_006CB190
        fmul dword ptr [esp+0Ch]
        mov edx, 1
        fmul qword ptr [mem_00991558]
        fsubr qword ptr [esp+30h]
        fstp dword ptr [esp+28h]
L_6cdf4e:
        mov ecx, 3
        sub ecx, edx
        js L_6cdf85
        lea eax, [esp+20h]
        inc ecx
L_6cdf5c:
        cmp edx, 1
        jne L_6cdf68
        fld dword ptr [eax+4]
        fsub dword ptr [eax]
        jmp L_6cdf7d
L_6cdf68:
        fld dword ptr [esp+10h]
        fsubr qword ptr [mem_0092A270]
        fmul dword ptr [eax]
        fld dword ptr [esp+10h]
        fmul dword ptr [eax+4]
        faddp st(1), st
L_6cdf7d:
        fstp dword ptr [eax]
        add eax, 4
        dec ecx
        jne L_6cdf5c
L_6cdf85:
        inc edx
        cmp edx, 3
        jle L_6cdf4e
        fld dword ptr [esp+20h]
        fmul qword ptr [mem_00993840]
        fdiv dword ptr [esp+0Ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_6cdfa2:
        mov ecx, ebx
        call ext_006C9E80
        fstp dword ptr [esp+18h]
        mov ecx, edi
        call ext_006C9E80
        fsubr dword ptr [esp+18h]
        lea eax, [esp+50h]
        mov ecx, edi
        push eax
        fstp qword ptr [esp+34h]
        call ext_006C9F00
        lea ecx, [esp+58h]
        push eax
        lea edx, [esp+64h]
        push ecx
        push edx
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp+30h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_6cdff5:
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_6ce004:
        fld dword ptr [esp+0Ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
    }
}

// [0x006CDB40] sub_006CDB40 (624 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006CAEF0();
extern "C" void ext_006CB190();
extern "C" void ext_006CBF00();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00872828();
extern "C" int mem_009251DC;
extern "C" int mem_0092520C;
extern "C" int mem_0092A278;
extern "C" int mem_00991558;
extern "C" int mem_0092A270;
extern "C" int mem_00993840;
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_006CDB40(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 5Ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+0Ch], 0
        cmp dword ptr [esi+24h], 1
        jle L_zero
        mov eax, dword ptr [ebp+10h]
        mov ecx, dword ptr [ebp+0Ch]
        mov edx, dword ptr [ebp+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_006CAEF0
        fstp qword ptr [esp+30h]
        mov edi, dword ptr [esp+34h]
        mov ebx, dword ptr [esp+30h]
        push edi
        push ebx
        call dword ptr [mem_009251DC]
        fstp qword ptr [esp+28h]
        push edi
        push ebx
        call dword ptr [mem_0092520C]
        fst qword ptr [esp+28h]
        fld qword ptr [esp+30h]
        fcomp qword ptr [mem_0092A278]
        add esp, 10h
        fnstsw ax
        test ah, 1
        jne L_fpop_zero
        fld qword ptr [esp+20h]
        fcomp st(1)
        fnstsw ax
        test ah, 40h
        je L_branch2
        fstp st(0)
        fld qword ptr [esp+20h]
        call ext_00872828
        push eax
        mov ecx, esi
        call ext_006CB190
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_branch2:
        mov eax, dword ptr [esi+24h]
        dec eax
        mov dword ptr [esp+10h], eax
        fild dword ptr [esp+10h]
        fxch st(1)
        fcompp
        fnstsw ax
        test ah, 41h
        je L_zero
        fld qword ptr [esp+20h]
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+18h], eax
        call ext_006CA060
        fld qword ptr [esp+18h]
        mov edi, eax
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+1Ch], eax
        call ext_006CA060
        mov ecx, edi
        mov ebx, eax
        call ext_006C9C30
        sub eax, 2
        je L_85
        sub eax, 2
        je L_32
        sub eax, 4
        jne L_zero
        lea ecx, [esp+38h]
        push ecx
        mov ecx, edi
        call ext_006C9F00
        push eax
        lea edx, [esp+44h]
        lea eax, [esp+4Ch]
        push edx
        push eax
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp dword ptr [esp+0Ch]
        fld qword ptr [esp+30h]
        fsub qword ptr [esp+20h]
        mov ecx, edi
        fstp dword ptr [esp+10h]
        call ext_006C9E80
        fstp dword ptr [esp+20h]
        mov ecx, ebx
        call ext_006C9E80
        mov ecx, dword ptr [esp+14h]
        fstp dword ptr [esp+2Ch]
        push ecx
        mov ecx, esi
        call ext_006CBF00
        fmul dword ptr [esp+0Ch]
        mov edx, dword ptr [esp+18h]
        mov ecx, esi
        push edx
        fmul qword ptr [mem_00991558]
        fadd dword ptr [esp+24h]
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+30h]
        fstp qword ptr [esp+34h]
        call ext_006CB190
        fmul dword ptr [esp+0Ch]
        mov edx, 1
        fmul qword ptr [mem_00991558]
        fsubr qword ptr [esp+30h]
        fstp dword ptr [esp+28h]
L_outer:
        mov ecx, 3
        sub ecx, edx
        js L_outer_next
        lea eax, [esp+20h]
        inc ecx
L_inner:
        cmp edx, 1
        jne L_inner_else
        fld dword ptr [eax+4]
        fsub dword ptr [eax]
        jmp L_inner_store
L_inner_else:
        fld dword ptr [esp+10h]
        fsubr qword ptr [mem_0092A270]
        fmul dword ptr [eax]
        fld dword ptr [esp+10h]
        fmul dword ptr [eax+4]
        faddp st(1), st
L_inner_store:
        fstp dword ptr [eax]
        add eax, 4
        dec ecx
        jne L_inner
L_outer_next:
        inc edx
        cmp edx, 3
        jle L_outer
        fld dword ptr [esp+20h]
        fmul qword ptr [mem_00993840]
        fdiv dword ptr [esp+0Ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_32:
        mov ecx, ebx
        call ext_006C9E80
        fstp dword ptr [esp+18h]
        mov ecx, edi
        call ext_006C9E80
        fsubr dword ptr [esp+18h]
        lea eax, [esp+50h]
        mov ecx, edi
        push eax
        fstp qword ptr [esp+34h]
        call ext_006C9F00
        lea ecx, [esp+58h]
        push eax
        lea edx, [esp+64h]
        push ecx
        push edx
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp+30h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_85:
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
L_fpop_zero:
        fstp st(0)
L_zero:
        fld dword ptr [esp+0Ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0Ch
    }
}

// [0x006CD350] sub_006CD350 (767 bytes)
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006C9FA0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CB190();
extern "C" void ext_006CBF00();
extern "C" void ext_006CCE40();
extern "C" void ext_006CD7C0();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBDF0();
extern "C" void ext_006DBE10();
extern "C" void ext_006DBE30();
extern "C" void ext_006DEEC0();

extern "C" __declspec(naked) void __fastcall fn_006CD350(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x30
        push esi
        push edi
        mov esi, ecx
        call ext_006C9FA0
        xor edi, edi
        cmp eax, 4
        jne L_006CD4C1
        mov ecx, esi
        call ext_006CA6A0
        cmp eax, 1
        jle L_006CD4C1
        lea eax, [esp + 8]
        mov ecx, esi
        push eax
        push edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0xc]
        cmp ecx, eax
        jg L_006CD4C1
        jl L_006CD3AD
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 8]
        cmp edx, eax
        jae L_006CD4C1
    L_006CD3AD:
        lea eax, [esp + 8]
        lea ecx, [esp + 0x10]
        push eax
        lea edx, [esp + 0x24]
        push ecx
        push edx
        mov ecx, esi
        call ext_006CA6A0
        dec eax
        mov ecx, esi
        push eax
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov eax, dword ptr [esi + 0x34]
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006DBE30
        lea edx, [esp + 0x18]
        push eax
        push edx
        lea ecx, [esp + 0x10]
        call ext_006DBE10
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [eax + 4]
        cmp ecx, edx
        jg L_006CD478
        jl L_006CD412
        mov edx, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [eax]
        cmp edx, ecx
        jae L_006CD478
    L_006CD412:
        mov eax, dword ptr [esi + 0x34]
        cmp eax, -1
        je L_006CD478
        push eax
        lea eax, [esp + 0x2c]
        lea ecx, [esp + 0x14]
        push eax
        lea edx, [esp + 0x38]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        call ext_006DBE10
        mov ecx, eax
        call ext_006DBE30
        mov ecx, eax
        call ext_006DADE0
        fstp qword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        call ext_006CBF00
        fmul qword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        fstp dword ptr [esp + 0x48]
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        fadd dword ptr [esp + 0x44]
        pop edi
        pop esi
        add esp, 0x30
        ret 0xc
    L_006CD478:
        lea eax, [esp + 8]
        lea ecx, [esp + 0x30]
        push eax
        push ecx
        lea ecx, [esp + 0x44]
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fstp qword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        call ext_006CBF00
        fmul qword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        fstp dword ptr [esp + 0x48]
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        fadd dword ptr [esp + 0x44]
        pop edi
        pop esi
        add esp, 0x30
        ret 0xc
    L_006CD4C1:
        mov ecx, esi
        call ext_006DEEC0
        cmp eax, 4
        jne L_006CD61C
        mov ecx, esi
        call ext_006CA6A0
        cmp eax, 1
        jle L_006CD61C
        mov eax, dword ptr [esi + 0x24]
        lea edx, [esp + 8]
        dec eax
        push edx
        push eax
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov ecx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0xc]
        cmp ecx, eax
        jl L_006CD61C
        jg L_006CD51B
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 8]
        cmp edx, eax
        jbe L_006CD61C
    L_006CD51B:
        lea eax, [esp + 0x30]
        mov ecx, esi
        push eax
        push edi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        lea ecx, [esp + 0x18]
        push eax
        push ecx
        lea ecx, [esp + 0x10]
        call ext_006DBE10
        mov edx, dword ptr [esi + 0x3c]
        lea eax, [esp + 0x30]
        push edx
        push eax
        lea ecx, [esp + 0x20]
        call ext_006DBE30
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        lea ecx, [esp + 0x10]
        call ext_006DBDF0
        mov edx, dword ptr [esp + 0x40]
        mov ecx, dword ptr [eax + 4]
        cmp edx, ecx
        jl L_006CD5CB
        jg L_006CD576
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [eax]
        cmp ecx, edx
        jbe L_006CD5CB
    L_006CD576:
        mov edi, dword ptr [esi + 0x3c]
        cmp edi, -1
        je L_006CD5CB
        mov edx, dword ptr [esi + 0x24]
        mov ecx, esi
        dec edx
        push edx
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        fstp dword ptr [esp + 0x44]
        lea eax, [esp + 0x30]
        push edi
        push eax
        lea ecx, [esp + 0x20]
        call ext_006DBE30
        mov ecx, eax
        call ext_006DADE0
        mov ecx, dword ptr [esi + 0x24]
        fstp qword ptr [esp + 0x20]
        dec ecx
        push ecx
        mov ecx, esi
        call ext_006CB190
        fmul qword ptr [esp + 0x20]
        pop edi
        pop esi
        fadd dword ptr [esp + 0x3c]
        add esp, 0x30
        ret 0xc
    L_006CD5CB:
        mov edx, dword ptr [esi + 0x24]
        mov ecx, esi
        dec edx
        push edx
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        fstp dword ptr [esp + 0x44]
        lea eax, [esp + 8]
        lea ecx, [esp + 0x30]
        push eax
        push ecx
        lea ecx, [esp + 0x44]
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        mov edx, dword ptr [esi + 0x24]
        mov ecx, esi
        fstp qword ptr [esp + 0x20]
        dec edx
        push edx
        call ext_006CB190
        fmul qword ptr [esp + 0x20]
        pop edi
        pop esi
        fadd dword ptr [esp + 0x3c]
        add esp, 0x30
        ret 0xc
    L_006CD61C:
        mov eax, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x3c]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_006CCE40
        fstp qword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        call ext_006CD7C0
        pop edi
        pop esi
        add esp, 0x30
        ret 0xc
    }
}

// [0x006CE8B0] sub_006CE8B0 (768 bytes)
extern "C" void ext_006C9A90();
extern "C" void ext_006C9E80();
extern "C" void ext_006CA020();
extern "C" void ext_006CA090();
extern "C" void ext_006CA2F0();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA7D0();
extern "C" void ext_006CB860();
extern "C" void ext_006CBAC0();
extern "C" void ext_006CD330();
extern "C" void ext_006D03E0();
extern "C" int mem_0092528C;

extern "C" __declspec(naked) bool __fastcall fn_006CE8B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 48h
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call ext_006CA6A0
        test eax, eax
        je L_FAIL
        mov dword ptr [ebx+48h], 0ffffffffh
        push 0
        mov ecx, ebx
        mov dword ptr [ebx+4ch], 07fffffffh
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        mov esi, dword ptr [esp+60h]
        mov ebp, dword ptr [esp+5ch]
        fstp dword ptr [esp+24h]
        cmp esi, ebp
        jne L_E901
        push ebp
        mov ecx, ebx
        call ext_006CA7D0
        jmp L_EB75
L_E901:
        test ebp, ebp
        jne L_E91D
        mov ecx, ebx
        call ext_006CA6A0
        dec eax
        cmp esi, eax
        jne L_E91D
        mov ecx, ebx
        call ext_006CA2F0
        jmp L_EB75
L_E91D:
        cmp ebp, esi
        jge L_EB75
        lea ecx, [esp+28h]
        call ext_006C9A90
        inc esi
        mov ecx, ebx
        mov dword ptr [esp+18h], esi
        call ext_006CA6A0
        cmp esi, eax
        jge L_E958
        lea eax, [esp+40h]
        push esi
        push eax
        mov ecx, ebx
        call ext_006CB860
        mov ecx, 6
        mov esi, eax
        lea edi, [esp+28h]
        rep movsd
L_E958:
        mov eax, 051eb851fh
        mov esi, dword ptr [esp+18h]
        imul ebp
        mov eax, dword ptr [esp+5ch]
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, 19h
        mov ebp, edx
        cdq
        idiv ecx
        mov eax, 051eb851fh
        mov dword ptr [esp+1ch], ebp
        mov dword ptr [esp+20h], edx
        mov edx, dword ptr [ebx+2ch]
        mov dword ptr [esp+14h], edx
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, esi
        mov ecx, edx
        mov esi, 19h
        cdq
        idiv esi
        lea esi, [ebp+1]
        mov dword ptr [esp+10h], ecx
        cmp esi, ecx
        mov dword ptr [esp+18h], edx
        jge L_EA4B
        mov edi, esi
        cmp edi, ecx
        jge L_E9F0
L_E9C0:
        mov ecx, dword ptr [ebx+20h]
        push 400h
        mov edx, dword ptr [ecx+edi*4]
        push edx
        call ext_006CA090
        mov eax, dword ptr [ebx+20h]
        add esp, 8
        mov dword ptr [eax+edi*4], 0
        mov edx, dword ptr [ebx+2ch]
        mov eax, dword ptr [esp+10h]
        dec edx
        inc edi
        mov dword ptr [ebx+2ch], edx
        cmp edi, eax
        jl L_E9C0
        mov ecx, eax
L_E9F0:
        mov edi, dword ptr [esp+14h]
        mov eax, dword ptr [ebx+20h]
        mov edx, ecx
        shl edx, 1eh
        sub edx, ecx
        lea ecx, [eax+ecx*4]
        add edx, edi
        lea edx, [edx*4+4]
        push edx
        lea edx, [eax+esi*4]
        push ecx
        push edx
        call dword ptr [mem_0092528C]
        mov ecx, dword ptr [esp+1ch]
        mov edx, edi
        mov eax, edx
        add esp, 0ch
        sub eax, ecx
        mov dword ptr [esp+10h], esi
        lea edi, [eax+ebp+2]
        mov ebp, dword ptr [ebx+20h]
        sub edx, edi
        xor eax, eax
        inc edx
        lea edi, [ebp+edi*4]
        mov ebp, dword ptr [esp+1ch]
        mov ecx, edx
        rep stosd
        mov eax, dword ptr [esp+14h]
        mov ecx, esi
        sub eax, edx
        mov dword ptr [esp+14h], eax
L_EA4B:
        mov eax, dword ptr [esp+14h]
        mov esi, dword ptr [esp+18h]
        mov edi, dword ptr [esp+20h]
        mov edx, ecx
        cmp ecx, eax
        mov dword ptr [esp+10h], edx
        mov dword ptr [esp+18h], ebp
        jg L_EB3D
        jmp L_EA6F
L_EA6B:
        mov edx, dword ptr [esp+10h]
L_EA6F:
        cmp edi, esi
        jg L_EAD5
        lea eax, [esi+esi*4]
        mov ecx, 3e8h
        shl eax, 3
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebx+20h]
        mov edx, dword ptr [ecx+edx*4]
        lea ecx, [edi+edi*4]
        add edx, eax
        mov eax, dword ptr [ebx+20h]
        push edx
        mov edx, dword ptr [eax+ebp*4]
        lea eax, [edx+ecx*8]
        push eax
        call dword ptr [mem_0092528C]
        sub edi, esi
        mov eax, 051eb851fh
        add esp, 0ch
        xor esi, esi
        lea ecx, [edi+19h]
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, ecx
        add ebp, edx
        mov ecx, 19h
        cdq
        idiv ecx
        mov eax, dword ptr [esp+10h]
        mov dword ptr [esp+18h], ebp
        inc eax
        mov dword ptr [esp+10h], eax
        mov edi, edx
        jmp L_EB2D
L_EAD5:
        mov ecx, dword ptr [ebx+20h]
        lea eax, [edi+edi*4]
        shl eax, 3
        mov edx, dword ptr [ecx+edx*4]
        mov ebp, 3e8h
        sub ebp, eax
        push ebp
        lea ebp, [esi+esi*4]
        lea ecx, [edx+ebp*8]
        mov ebp, dword ptr [esp+1ch]
        push ecx
        mov ecx, dword ptr [ebx+20h]
        mov edx, dword ptr [ecx+ebp*4]
        add edx, eax
        push edx
        call dword ptr [mem_0092528C]
        sub esi, edi
        mov eax, 051eb851fh
        add esi, 19h
        add esp, 0ch
        imul esi
        sar edx, 3
        mov eax, edx
        inc ebp
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp+10h]
        add eax, edx
        mov dword ptr [esp+18h], ebp
        mov dword ptr [esp+10h], eax
        xor edi, edi
L_EB2D:
        mov ecx, dword ptr [esp+10h]
        mov eax, dword ptr [esp+14h]
        cmp ecx, eax
        jle L_EA6B
L_EB3D:
        mov eax, dword ptr [esp+5ch]
        mov ecx, dword ptr [esp+60h]
        mov edi, dword ptr [ebx+24h]
        mov edx, eax
        sub edx, ecx
        sub esp, 18h
        dec edx
        mov ecx, 6
        add edi, edx
        lea esi, [esp+40h]
        mov dword ptr [ebx+24h], edi
        mov edi, esp
        rep movsd
        push eax
        mov ecx, ebx
        call ext_006CBAC0
        push -1
        push 10h
        mov ecx, ebx
        call ext_006D03E0
L_EB75:
        mov ecx, ebx
        call ext_006CA6A0
        test eax, eax
        jne L_EB8C
        mov eax, dword ptr [esp+24h]
        mov ecx, ebx
        push eax
        call ext_006CD330
L_EB8C:
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 48h
        ret 8
L_FAIL:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 48h
        ret 8
    }
}

// [0x006C5600] sub_006C5600 (832 bytes)
extern "C" void ext_006C5600();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_006E8BF0();
extern "C" void ext_006E8C60();
extern "C" void ext_006E8EF0();
extern "C" void ext_006E8F70();
extern "C" void ext_006E90D0();
extern "C" void ext_006E9150();
extern "C" void ext_006E92B0();
extern "C" void ext_006E9390();
extern "C" void ext_006E98E0();
extern "C" void ext_007025B0();
extern "C" void ext_0071E380();
extern "C" void ext_0071E510();
extern "C" void ext_0071E670();
extern "C" void ext_0071E680();
extern "C" void ext_0071E690();
extern "C" void ext_0071E6A0();
extern "C" void ext_0071E6B0();
extern "C" void ext_0071E6C0();
extern "C" void ext_0071E6D0();
extern "C" void ext_0071E6E0();
extern "C" void ext_0071F070();

extern "C" __declspec(naked) void __fastcall fn_006C5600(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8b8c9bh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 11Ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        call ext_007025B0
        mov ebx, dword ptr [esp + 138h]
        mov ebp, eax
        cmp ebp, ebx
        jne L_6639
        mov al, 1
        jmp L_591E
L_6639:
        mov al, byte ptr [esp + 13Ch]
        lea ecx, [esp + 0Ch]
        dec al
        neg al
        sbb eax, eax
        not eax
        and eax, ebx
        push eax
        call ext_0071E380
        push esi
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 134h], 0
        call ext_0071F070
        lea ecx, [esp + 0Ch]
        call ext_0071E680
        cmp dword ptr [eax], 0
        je L_567B
        push 1
        jmp L_56AF
L_567B:
        lea ecx, [esp + 0Ch]
        call ext_0071E6C0
        cmp dword ptr [eax], 0
        je L_568D
        push 3
        jmp L_56AF
L_568D:
        lea ecx, [esp + 0Ch]
        call ext_0071E6E0
        cmp dword ptr [eax], 0
        je L_569F
        push 4
        jmp L_56AF
L_569F:
        lea ecx, [esp + 0Ch]
        call ext_0071E6A0
        cmp dword ptr [eax], 0
        je L_56D5
        push 2
L_56AF:
        lea ecx, [esi + 4E8h]
        call ext_006E7440
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 130h], -1
        call ext_0071E510
        xor al, al
        jmp L_591E
L_56D5:
        test ebp, ebp
        push edi
        je L_57DD
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E670
        cmp dword ptr [eax], 0
        jle L_5735
L_56EE:
        lea ecx, [esp + 10h]
        lea edi, [esi*4]
        call ext_0071E670
        mov eax, dword ptr [eax + 10h]
        mov ecx, ebp
        add eax, edi
        mov eax, dword ptr [eax]
        push eax
        call ext_006E8C60
        lea ecx, [esp + 10h]
        call ext_0071E670
        mov eax, dword ptr [eax + 10h]
        add eax, edi
        inc esi
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 10Ch], 0
        lea ecx, [esp + 10h]
        call ext_0071E670
        cmp esi, dword ptr [eax]
        jl L_56EE
L_5735:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E690
        cmp dword ptr [eax], 0
        jle L_576D
L_5745:
        lea ecx, [esp + 10h]
        call ext_0071E690
        mov edx, dword ptr [eax + 10h]
        mov ecx, ebp
        lea eax, [edx + esi*4]
        mov eax, dword ptr [edx + esi*4]
        push eax
        call ext_006E8F70
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E690
        cmp esi, dword ptr [eax]
        jl L_5745
L_576D:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E6B0
        cmp dword ptr [eax], 0
        jle L_57A5
L_577D:
        lea ecx, [esp + 10h]
        call ext_0071E6B0
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + esi*4]
        lea eax, [ecx + esi*4]
        push edx
        mov ecx, ebp
        call ext_006E9150
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E6B0
        cmp esi, dword ptr [eax]
        jl L_577D
L_57A5:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E6D0
        cmp dword ptr [eax], 0
        jle L_57DD
L_57B5:
        lea ecx, [esp + 10h]
        call ext_0071E6D0
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [eax + esi*4]
        lea eax, [eax + esi*4]
        push ecx
        mov ecx, ebp
        call ext_006E9390
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E6D0
        cmp esi, dword ptr [eax]
        jl L_57B5
L_57DD:
        test ebx, ebx
        je L_5907
        cmp byte ptr [esp + 140h], 1
        jne L_580C
        mov ecx, ebx
        call ext_006E7460
        test eax, eax
        je L_5805
        push 1
        push 0
        mov ecx, eax
        call ext_006C5600
L_5805:
        mov ecx, ebx
        call ext_006E98E0
L_580C:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E670
        cmp dword ptr [eax], 0
        jle L_585F
L_581C:
        lea ecx, [esp + 10h]
        lea edi, [esi*4]
        call ext_0071E670
        mov eax, dword ptr [eax + 10h]
        mov ecx, ebx
        add eax, edi
        mov edx, dword ptr [eax]
        push edx
        call ext_006E8BF0
        lea ecx, [esp + 10h]
        call ext_0071E670
        mov eax, dword ptr [eax + 10h]
        lea ecx, [esp + 10h]
        add eax, edi
        inc esi
        mov eax, dword ptr [eax]
        mov dword ptr [eax + 10Ch], ebx
        call ext_0071E670
        cmp esi, dword ptr [eax]
        jl L_581C
L_585F:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E690
        cmp dword ptr [eax], 0
        jle L_5897
L_586F:
        lea ecx, [esp + 10h]
        call ext_0071E690
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + esi*4]
        lea eax, [ecx + esi*4]
        push edx
        mov ecx, ebx
        call ext_006E8EF0
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E690
        cmp esi, dword ptr [eax]
        jl L_586F
L_5897:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E6B0
        cmp dword ptr [eax], 0
        jle L_58CF
L_58A7:
        lea ecx, [esp + 10h]
        call ext_0071E6B0
        mov eax, dword ptr [eax + 10h]
        mov ecx, dword ptr [eax + esi*4]
        lea eax, [eax + esi*4]
        push ecx
        mov ecx, ebx
        call ext_006E90D0
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E6B0
        cmp esi, dword ptr [eax]
        jl L_58A7
L_58CF:
        lea ecx, [esp + 10h]
        xor esi, esi
        call ext_0071E6D0
        cmp dword ptr [eax], 0
        jle L_5907
L_58DF:
        lea ecx, [esp + 10h]
        call ext_0071E6D0
        mov edx, dword ptr [eax + 10h]
        mov ecx, ebx
        lea eax, [edx + esi*4]
        mov eax, dword ptr [edx + esi*4]
        push eax
        call ext_006E92B0
        lea ecx, [esp + 10h]
        inc esi
        call ext_0071E6D0
        cmp esi, dword ptr [eax]
        jl L_58DF
L_5907:
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 134h], -1
        call ext_0071E510
        mov al, 1
        pop edi
L_591E:
        mov ecx, dword ptr [esp + 128h]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 128h
        ret 8
    }
}

// [0x006C1670] sub_006C1670 (892 bytes)
extern "C" void ext_006A6D5C();
extern "C" void ext_00705450();
extern "C" void ext_00711220();
extern "C" void ext_00712580();

extern "C" __declspec(naked) void __fastcall fn_006C1670(void* self) {
    __asm {
        push -1
        push 0x8b8a34
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        push 0x6c1580
        push 2
        lea eax, [esi+0x1d18]
        push 0x1f0
        push eax
        mov dword ptr [esp+0x20], 0x32
        call ext_006A6D5C
        lea ecx, [esi+0x1c90]
        mov byte ptr [esp+0x10], 0x31
        call ext_00711220
        lea ecx, [esi+0x1c08]
        mov byte ptr [esp+0x10], 0x30
        call ext_00711220
        lea ecx, [esi+0x1b78]
        mov byte ptr [esp+0x10], 0x2f
        call ext_00712580
        lea ecx, [esi+0x1ae8]
        mov byte ptr [esp+0x10], 0x2e
        call ext_00712580
        lea ecx, [esi+0x1a48]
        mov byte ptr [esp+0x10], 0x2d
        call ext_00711220
        lea ecx, [esi+0x19a8]
        mov byte ptr [esp+0x10], 0x2c
        call ext_00711220
        mov byte ptr [esp+0x10], 0x2b
        lea ecx, [esi+0x1908]
        call ext_00711220
        lea ecx, [esi+0x1880]
        mov byte ptr [esp+0x10], 0x2a
        call ext_00711220
        lea ecx, [esi+0x17f8]
        mov byte ptr [esp+0x10], 0x29
        call ext_00711220
        lea ecx, [esi+0x1770]
        mov byte ptr [esp+0x10], 0x28
        call ext_00711220
        lea ecx, [esi+0x16e8]
        mov byte ptr [esp+0x10], 0x27
        call ext_00711220
        lea ecx, [esi+0x1660]
        mov byte ptr [esp+0x10], 0x26
        call ext_00711220
        lea ecx, [esi+0x15d8]
        mov byte ptr [esp+0x10], 0x25
        call ext_00711220
        lea ecx, [esi+0x1538]
        mov byte ptr [esp+0x10], 0x24
        call ext_00711220
        lea ecx, [esi+0x1498]
        mov byte ptr [esp+0x10], 0x23
        call ext_00711220
        lea ecx, [esi+0x1410]
        mov byte ptr [esp+0x10], 0x22
        call ext_00711220
        lea ecx, [esi+0x1388]
        mov byte ptr [esp+0x10], 0x21
        call ext_00711220
        lea ecx, [esi+0x1300]
        mov byte ptr [esp+0x10], 0x20
        call ext_00711220
        lea ecx, [esi+0x1278]
        mov byte ptr [esp+0x10], 0x1f
        call ext_00711220
        lea ecx, [esi+0x11f0]
        mov byte ptr [esp+0x10], 0x1e
        call ext_00711220
        lea ecx, [esi+0x1168]
        mov byte ptr [esp+0x10], 0x1d
        call ext_00711220
        lea ecx, [esi+0x10e0]
        mov byte ptr [esp+0x10], 0x1c
        call ext_00711220
        lea ecx, [esi+0x1058]
        mov byte ptr [esp+0x10], 0x1b
        call ext_00711220
        lea ecx, [esi+0xfd0]
        mov byte ptr [esp+0x10], 0x1a
        call ext_00711220
        lea ecx, [esi+0xf48]
        mov byte ptr [esp+0x10], 0x19
        call ext_00711220
        lea ecx, [esi+0xec0]
        mov byte ptr [esp+0x10], 0x18
        call ext_00711220
        lea ecx, [esi+0xe20]
        mov byte ptr [esp+0x10], 0x17
        call ext_00711220
        lea ecx, [esi+0xd80]
        mov byte ptr [esp+0x10], 0x16
        call ext_00711220
        lea ecx, [esi+0xcf8]
        mov byte ptr [esp+0x10], 0x15
        call ext_00711220
        lea ecx, [esi+0xc58]
        mov byte ptr [esp+0x10], 0x14
        call ext_00711220
        lea ecx, [esi+0xbb8]
        mov byte ptr [esp+0x10], 0x13
        call ext_00711220
        lea ecx, [esi+0xb30]
        mov byte ptr [esp+0x10], 0x12
        call ext_00711220
        lea ecx, [esi+0xaa8]
        mov byte ptr [esp+0x10], 0x11
        call ext_00711220
        mov byte ptr [esp+0x10], 0x10
        lea ecx, [esi+0xa20]
        call ext_00711220
        lea ecx, [esi+0x998]
        mov byte ptr [esp+0x10], 0x0f
        call ext_00711220
        lea ecx, [esi+0x910]
        mov byte ptr [esp+0x10], 0x0e
        call ext_00711220
        lea ecx, [esi+0x888]
        mov byte ptr [esp+0x10], 0x0d
        call ext_00711220
        lea ecx, [esi+0x800]
        mov byte ptr [esp+0x10], 0x0c
        call ext_00711220
        lea ecx, [esi+0x778]
        mov byte ptr [esp+0x10], 0x0b
        call ext_00711220
        lea ecx, [esi+0x6f0]
        mov byte ptr [esp+0x10], 0x0a
        call ext_00711220
        lea ecx, [esi+0x650]
        mov byte ptr [esp+0x10], 0x09
        call ext_00711220
        lea ecx, [esi+0x5b0]
        mov byte ptr [esp+0x10], 0x08
        call ext_00711220
        lea ecx, [esi+0x528]
        mov byte ptr [esp+0x10], 0x07
        call ext_00711220
        lea ecx, [esi+0x488]
        mov byte ptr [esp+0x10], 0x06
        call ext_00711220
        lea ecx, [esi+0x3e8]
        mov byte ptr [esp+0x10], 0x05
        call ext_00711220
        lea ecx, [esi+0x348]
        mov byte ptr [esp+0x10], 0x04
        call ext_00711220
        lea ecx, [esi+0x2a8]
        mov byte ptr [esp+0x10], 0x03
        call ext_00711220
        lea ecx, [esi+0x208]
        mov byte ptr [esp+0x10], 0x02
        call ext_00711220
        lea ecx, [esi+0x168]
        mov byte ptr [esp+0x10], 0x01
        call ext_00711220
        lea ecx, [esi+0xe0]
        mov byte ptr [esp+0x10], 0x00
        call ext_00711220
        mov ecx, esi
        mov dword ptr [esp+0x10], -1
        call ext_00705450
        mov ecx, dword ptr [esp+0x8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006CD7C0] sub_006CD7C0 (896 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CC0();
extern "C" void ext_006C9D20();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA060();
extern "C" void ext_006CB190();
extern "C" void ext_006CBF00();
extern "C" void ext_006CC810();
extern "C" void ext_006CC850();
extern "C" void ext_006CD6D0();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00872828();
extern "C" int mem_009251DC;
extern "C" int mem_0092520C;
extern "C" int mem_00993838;
extern "C" int mem_0092A270;
extern "C" int mem_00991558;

extern "C" __declspec(naked) void __fastcall fn_006CD7C0(void* self, int edx_unused, double a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 5Ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi+24h]
        test eax, eax
        jne L_6CD7E1
        fld dword ptr [esi+14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CD7E1:
        cmp eax, 1
        jne L_6CD7FF
        push 0
        mov ecx, esi
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CD7FF:
        mov edi, dword ptr [ebp+0Ch]
        mov ebx, dword ptr [ebp+8]
        push edi
        push ebx
        call dword ptr [mem_009251DC]
        fstp qword ptr [esp+18h]
        push edi
        push ebx
        call dword ptr [mem_0092520C]
        fstp qword ptr [esp+38h]
        fld qword ptr [esp+20h]
        fcomp qword ptr [esp+38h]
        fld qword ptr [esp+20h]
        add esp, 10h
        fnstsw ax
        test ah, 40h
        je L_6CD850
        call ext_00872828
        push eax
        mov ecx, esi
        call ext_006CA060
        mov ecx, eax
        call ext_006C9E80
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CD850:
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+24h], eax
        call ext_006CA060
        fld qword ptr [esp+28h]
        mov edi, eax
        call ext_00872828
        push eax
        mov ecx, esi
        mov dword ptr [esp+20h], eax
        call ext_006CA060
        mov ecx, edi
        mov ebx, eax
        call ext_006C9C30
        sub eax, 2
        je L_6CDB11
        sub eax, 2
        je L_6CDADA
        sub eax, 4
        je L_6CD8A7
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CD8A7:
        mov ecx, edi
        call ext_006C9D20
        test eax, eax
        je L_6CDA00
        mov eax, dword ptr [esp+20h]
        mov ecx, esi
        push eax
        call ext_006CC850
        mov ecx, dword ptr [esp+1Ch]
        fstp qword ptr [esp+28h]
        push ecx
        mov ecx, esi
        call ext_006CC810
        fst qword ptr [esp+30h]
        push ecx
        fstp dword ptr [esp]
        fld qword ptr [esp+2Ch]
        push ecx
        fstp dword ptr [esp]
        fld qword ptr [ebp+8]
        fsub qword ptr [esp+18h]
        push ecx
        fstp dword ptr [esp]
        push 3F800000h
        push 0
        push 6CD650h
        call ext_006CD6D0
        fstp dword ptr [esp+28h]
        add esp, 18h
        lea edx, [esp+38h]
        mov ecx, edi
        push edx
        call ext_006C9F00
        push eax
        lea eax, [esp+44h]
        lea ecx, [esp+4Ch]
        push eax
        push ecx
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        mov edx, dword ptr [esp+20h]
        mov ecx, esi
        fstp dword ptr [esp+24h]
        push edx
        call ext_006CBF00
        fmul dword ptr [esp+24h]
        mov eax, dword ptr [esp+1Ch]
        mov ecx, esi
        push eax
        fmul qword ptr [esp+2Ch]
        fstp dword ptr [esp+2Ch]
        call ext_006CB190
        fmul dword ptr [esp+24h]
        mov ecx, edi
        fmul qword ptr [esp+30h]
        fstp dword ptr [esp+24h]
        call ext_006C9E80
        fstp dword ptr [esp+1Ch]
        mov ecx, ebx
        call ext_006C9E80
        fstp dword ptr [esp+20h]
        fld dword ptr [esp+1Ch]
        fadd dword ptr [esp+28h]
        fld dword ptr [esp+20h]
        fsub dword ptr [esp+24h]
        fstp dword ptr [esp+24h]
        fld dword ptr [esp+10h]
        fsubr qword ptr [mem_0092A270]
        fst qword ptr [esp+30h]
        fld st(1)
        fmul dword ptr [esp+10h]
        fld dword ptr [esp+24h]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+24h]
        fmul dword ptr [esp+10h]
        fld dword ptr [esp+20h]
        fmul st, st(2)
        faddp st(1), st
        fmul st, st(1)
        fld dword ptr [esp+28h]
        fmul dword ptr [esp+10h]
        faddp st(1), st
        fmul st, st(1)
        fld dword ptr [esp+1Ch]
        fmul dword ptr [esp+10h]
        fxch st(3)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fmul dword ptr [esp+10h]
        fld dword ptr [esp+28h]
        fmul qword ptr [esp+30h]
        faddp st(1), st
        fst dword ptr [esp+28h]
        fmul dword ptr [esp+10h]
        faddp st(2), st
        fstp st(0)
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CDA00:
        lea ecx, [esp+50h]
        push ecx
        mov ecx, edi
        call ext_006C9F00
        push eax
        lea edx, [esp+5Ch]
        lea eax, [esp+64h]
        push edx
        push eax
        mov ecx, ebx
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        mov ecx, dword ptr [esp+1Ch]
        fstp dword ptr [esp+28h]
        push ecx
        mov ecx, esi
        call ext_006CB190
        fmul dword ptr [esp+28h]
        mov edx, dword ptr [esp+20h]
        mov ecx, esi
        push edx
        fmul qword ptr [mem_00991558]
        fstp dword ptr [esp+28h]
        call ext_006CBF00
        fmul dword ptr [esp+28h]
        mov ecx, edi
        fmul qword ptr [mem_00991558]
        fstp dword ptr [esp+1Ch]
        call ext_006C9E80
        fstp dword ptr [esp+20h]
        mov ecx, ebx
        call ext_006C9E80
        fstp dword ptr [esp+28h]
        fld qword ptr [ebp+8]
        fsub qword ptr [esp+10h]
        fld dword ptr [esp+1Ch]
        fmul st, st(1)
        fadd dword ptr [esp+20h]
        fld dword ptr [esp+28h]
        fsub dword ptr [esp+24h]
        fst dword ptr [esp+28h]
        fsub dword ptr [esp+20h]
        fsub dword ptr [esp+1Ch]
        fmul st, st(2)
        fld dword ptr [esp+20h]
        fadd dword ptr [esp+1Ch]
        faddp st(1), st
        fst dword ptr [esp+20h]
        fsub st, st(1)
        fmul st, st(2)
        fxch st(1)
        faddp st(1), st
        fld dword ptr [esp+24h]
        fmul st, st(2)
        fadd dword ptr [esp+28h]
        fsub dword ptr [esp+20h]
        fmul st, st(2)
        fadd dword ptr [esp+20h]
        fsub st, st(1)
        fmulp st(2), st
        faddp st(1), st
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CDADA:
        mov ecx, ebx
        call ext_006C9E80
        fstp dword ptr [esp+28h]
        mov ecx, edi
        call ext_006C9E80
        fsubr dword ptr [esp+28h]
        fld qword ptr [ebp+8]
        fsub qword ptr [esp+10h]
        mov ecx, edi
        fmulp st(1), st
        fstp qword ptr [esp+30h]
        call ext_006C9E80
        fadd qword ptr [esp+30h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_6CDB11:
        mov ecx, edi
        call ext_006C9CC0
        cmp eax, 100h
        mov ecx, ebx
        je L_6CDB23
        mov ecx, edi
L_6CDB23:
        call ext_006C9E80
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x006CBF00] sub_006CBF00 (912 bytes)
extern "C" int mem_0092A270;
extern "C" int mem_00993828;
extern "C" int mem_00993838;
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9DC0();
extern "C" void ext_006C9E60();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CB190();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00722D60();

extern "C" __declspec(naked) void __fastcall fn_006CBF00(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x7c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0x90]
        dec eax
        cmp ebx, eax
        jl L_6CBF3C
        mov ecx, edi
        call ext_006CA6A0
        cmp eax, 1
        jle L_6CC27E
        push ebx
        mov ecx, edi
        call ext_006CB190
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
L_6CBF3C:
        push ebx
        mov ecx, edi
        call ext_006CA060
        mov esi, eax
        mov ecx, esi
        call ext_006C9C30
        sub eax, 2
        je L_6CC27E
        sub eax, 2
        je L_6CC21C
        sub eax, 4
        jne L_6CC27E
        mov ecx, esi
        call ext_006C9CD0
        cmp eax, 0x400
        ja L_6CC18C
        je L_6CC19E
        cmp eax, 0x100
        je L_6CC1B1
        cmp eax, 0x200
        jne L_6CC27E
        cmp ebx, 1
        jl L_6CC0E2
        lea eax, [ebx - 1]
        mov ecx, edi
        push eax
        call ext_006CA060
        inc ebx
        mov ecx, edi
        push ebx
        mov ebp, eax
        call ext_006CA060
        push 0x0
        mov ecx, esi
        mov edi, eax
        call ext_006C9E60
        fstp dword ptr [esp + 0x1c]
        push 0x1
        mov ecx, esi
        call ext_006C9E60
        fstp dword ptr [esp + 0x14]
        push 0x2
        mov ecx, esi
        call ext_006C9E60
        fstp dword ptr [esp + 0x10]
        mov ecx, edi
        call ext_006C9E80
        fstp dword ptr [esp + 0x18]
        mov ecx, esi
        call ext_006C9E80
        fsubr dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fsubr qword ptr [mem_0092A270]
        lea ecx, [esp + 0x2c]
        fmulp st(1), st
        fld dword ptr [esp + 0x14]
        fsubr qword ptr [mem_0092A270]
        push ecx
        mov ecx, esi
        fmulp st(1), st
        fstp qword ptr [esp + 0x28]
        call ext_006C9F00
        push eax
        lea edx, [esp + 0x38]
        lea eax, [esp + 0x40]
        push edx
        push eax
        mov ecx, edi
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp + 0x24]
        cmp ebp, esi
        fstp dword ptr [esp + 0x18]
        jne L_6CC060
        fld dword ptr [esp + 0x1c]
        fsubr qword ptr [mem_0092A270]
        fmul dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
L_6CC060:
        mov ecx, esi
        call ext_006C9E80
        fstp dword ptr [esp + 0x24]
        mov ecx, ebp
        call ext_006C9E80
        fsubr dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x10]
        fadd qword ptr [mem_0092A270]
        lea ecx, [esp + 0x44]
        fmulp st(1), st
        fld dword ptr [esp + 0x14]
        fadd qword ptr [mem_0092A270]
        push ecx
        mov ecx, ebp
        fmulp st(1), st
        fstp qword ptr [esp + 0x28]
        call ext_006C9F00
        push eax
        lea edx, [esp + 0x50]
        lea eax, [esp + 0x58]
        push edx
        push eax
        mov ecx, esi
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fadd dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fsubr qword ptr [mem_0092A270]
        fmulp st(1), st
        fmul qword ptr [mem_00993828]
        add esp, 0x7c
        ret 0x4
L_6CC0E2:
        inc ebx
        mov ecx, edi
        push ebx
        call ext_006CA060
        push 0x0
        mov ecx, esi
        mov edi, eax
        call ext_006C9E60
        fstp dword ptr [esp + 0x14]
        push 0x1
        mov ecx, esi
        call ext_006C9E60
        fstp dword ptr [esp + 0x18]
        push 0x2
        mov ecx, esi
        call ext_006C9E60
        fstp dword ptr [esp + 0x1c]
        mov ecx, edi
        call ext_006C9E80
        fstp dword ptr [esp + 0x24]
        mov ecx, esi
        call ext_006C9E80
        fsubr dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x1c]
        fsubr qword ptr [mem_0092A270]
        lea ecx, [esp + 0x5c]
        fmulp st(1), st
        fld dword ptr [esp + 0x18]
        fsubr qword ptr [mem_0092A270]
        push ecx
        mov ecx, esi
        fmulp st(1), st
        fstp qword ptr [esp + 0x28]
        call ext_006C9F00
        push eax
        lea edx, [esp + 0x68]
        lea eax, [esp + 0x70]
        push edx
        push eax
        mov ecx, edi
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fld dword ptr [esp + 0x4]
        fsubr qword ptr [mem_0092A270]
        fmulp st(1), st
        add esp, 0x7c
        ret 0x4
L_6CC18C:
        cmp eax, 0x900
        je L_6CC1B1
        cmp eax, 0xc00
        jne L_6CC27E
L_6CC19E:
        push 0x0
        mov ecx, esi
        call ext_006C9DC0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
L_6CC1B1:
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        call ext_006CA6A0
        cmp eax, 1
        jle L_6CC27E
        mov ecx, edi
        call ext_006CA6A0
        dec eax
        cmp ebx, eax
        jge L_6CC1FA
        push 0x0
        mov ecx, esi
        call ext_006C9DC0
        fstp qword ptr [esp + 0x24]
L_6CC1FA:
        push ebx
        lea ecx, [esp + 0x28]
        push edi
        lea edx, [esp + 0x24]
        push ecx
        push edx
        call ext_00722D60
        fld qword ptr [esp + 0x2c]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
L_6CC21C:
        inc ebx
        mov ecx, edi
        push ebx
        call ext_006CA060
        mov edi, eax
        mov ecx, edi
        call ext_006C9E80
        fstp dword ptr [esp + 0x24]
        mov ecx, esi
        call ext_006C9E80
        fsubr dword ptr [esp + 0x24]
        lea eax, [esp + 0x74]
        mov ecx, esi
        push eax
        fstp qword ptr [esp + 0x28]
        call ext_006C9F00
        lea ecx, [esp + 0x7c]
        push eax
        lea edx, [esp + 0x88]
        push ecx
        push edx
        mov ecx, edi
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr qword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
L_6CC27E:
        fld dword ptr [mem_00993838]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7c
        ret 0x4
    }
}
