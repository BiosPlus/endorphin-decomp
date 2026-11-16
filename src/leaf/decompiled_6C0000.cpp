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
