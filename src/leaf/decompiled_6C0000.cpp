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
