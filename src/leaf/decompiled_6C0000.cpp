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

// [0x006C9550] sub_006C9550 (15 bytes)
extern "C" void __cdecl fn_006C9550() {
    ext_006C9960(0, 0, (int)0xaa8d3c);
}

// [0x006C9560] sub_006C9560 (15 bytes)
extern "C" void __cdecl fn_006C9560() {
    ext_006C9960(0, 0, (int)0xaa8d4c);
}

// [0x006C9570] sub_006C9570 (15 bytes)
extern "C" void __cdecl fn_006C9570() {
    ext_006C9960(0, 0, (int)0xaa8d5c);
}

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
