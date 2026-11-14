// Decompiled translation unit: src/leaf/decompiled_6C0000.cpp

// [0x006C94F0] sub_006C94F0 (15 bytes)
extern "C" void __stdcall ext_006C9960(int a, int b, int c);

extern "C" void __cdecl fn_006C94F0() {
    ext_006C9960(0, 0, (int)0xaa8cf4);
}

// [0x006C9500] sub_006C9500 (15 bytes)
extern "C" void __cdecl fn_006C9500() {
    ext_006C9960(0, 0, (int)0xaa8d00);
}

// [0x006C9510] sub_006C9510 (15 bytes)
extern "C" void __cdecl fn_006C9510() {
    ext_006C9960(0, 0, (int)0xaa8d0c);
}

// [0x006C9520] sub_006C9520 (15 bytes)
extern "C" void __cdecl fn_006C9520() {
    ext_006C9960(0, 0, (int)0xaa8d10);
}

// [0x006C9530] sub_006C9530 (15 bytes)
extern "C" void __cdecl fn_006C9530() {
    ext_006C9960(0, 0, (int)0xaa8d1c);
}

// [0x006C9540] sub_006C9540 (15 bytes)
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
