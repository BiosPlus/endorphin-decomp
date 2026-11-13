// Decompiled translation unit: src/ToolGraphics/TranslateHandleGraphic.cpp

extern "C" void ext_005528D0();
extern "C" void ext_00549950();
extern "C" void* mem_00AF6108;
extern "C" void* mem_00932468;
extern "C" void* mem_009552D0;
extern "C" void* mem_00956D58;
extern "C" void* mem_00993828;
extern "C" void (*mem_0092546C)();
extern "C" void (*mem_00925520)();
extern "C" void* mem_00940694;
extern "C" void (*mem_009253CC)();
extern "C" void (*mem_009254D0)();
extern "C" void* mem_00925490;
extern "C" void* mem_0092548C;
extern "C" void* mem_00925488;
extern "C" void (*mem_00925414)();
extern "C" void (*mem_009253D0)();
extern "C" void* mem_00955A30;
extern "C" void (*mem_009254CC)();
extern "C" void (*mem_00925404)();
extern "C" void (*mem_00925524)();
extern "C" void* mem_00955D14;
extern "C" void* mem_009324A4;
extern "C" void (*mem_0092551C)();
extern "C" void (*mem_009254B8)();
extern "C" void (*mem_009254B4)();
extern "C" void* mem_0092552C;

// [0x00549940] ToolGraphics::TranslateHandleGraphic::vfunc_1 (14 bytes)
extern "C" void __fastcall fn_00549940(void* self) {
    ext_005528D0();
    ((unsigned char*)self)[0x14] = 1;
}

// [0x0054A8F0] ToolGraphics::TranslateHandleGraphic::vfunc_4 (1815 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054A8F0(void* self) {
    __asm {
        sub	esp, 0x58
        mov	eax, dword ptr [mem_00AF6108]
        fld	dword ptr [eax + 0xc8]
        push	ebx
        push	ebp
        push	esi
        push	edi
        mov	edi, ecx
        fmul	dword ptr [edi + 0x8]
        push	0x4
        fmul	dword ptr [edi + 0x4]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [eax + 0xc4]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x1c]
        fld	qword ptr [mem_00932468]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x18]
        fld	qword ptr [mem_009552D0]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x14]
        fld	qword ptr [mem_00956D58]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x24]
        fmul	qword ptr [mem_00993828]
        fstp	dword ptr [esp + 0x20]
        call [mem_0092546C]
        fld	dword ptr [esp + 0x24]
        push	ecx
        fstp	dword ptr [esp]
        call [mem_00925520]
        cmp	dword ptr [esp + 0x6c], 0x1c02
        fld1
        fld	dword ptr [mem_00940694]
        fldz
        jne L_0054A984
        fstp	st(0)
        push	0x0
        fstp	st(1)
        fstp	st(0)
        call [mem_009253CC]
        jmp L_0054A9CA
L_0054A984:
        mov	eax, dword ptr [edi + 0x10]
        test	eax, eax
        je L_0054A9B0
        cmp	eax, 0x5
        je L_0054A9B0
        cmp	eax, 0x4
        je L_0054A9B0
        cmp	eax, 0x6
        je L_0054A9B0
        fstp	st(2)
        sub	esp, 0x10
        fstp	dword ptr [esp + 0xc]
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [edi + 0xc]
        jmp L_0054A9C1
L_0054A9B0:
        sub	esp, 0x10
        fxch	st(1)
        fstp	dword ptr [esp + 0xc]
        fstp	dword ptr [esp + 0x8]
        fst	dword ptr [esp + 0x4]
L_0054A9C1:
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054A9CA:
        mov	ebx, dword ptr [mem_00925490]
        push	0x1
        call	ebx
        fldz
        mov	esi, dword ptr [mem_0092548C]
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [esp]
        call	esi
        mov	ebp, dword ptr [mem_00925488]
        call	ebp
        cmp	byte ptr [edi + 0x14], 0x0
        je L_0054AA75
        call [mem_00925414]
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [esp]
        call [mem_009253D0]
        fldz
        sub	esp, 0x10
        fst	dword ptr [esp + 0xc]
        fld1
        fstp	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [mem_00955A30]
        fstp	dword ptr [esp]
        call [mem_009254CC]
        fld	dword ptr [esp + 0x1c]
        sub	esp, 0x8
        fstp	dword ptr [esp + 0x4]
        mov	ecx, edi
        fld	dword ptr [esp + 0x28]
        fstp	dword ptr [esp]
        call ext_00549950
        call [mem_00925404]
L_0054AA75:
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AA8F
        call [mem_00925524]
        push	0x1
        call [mem_009253CC]
        jmp L_0054AAE4
L_0054AA8F:
        mov	eax, dword ptr [edi + 0x10]
        cmp	eax, 0x1
        je L_0054AAC2
        cmp	eax, 0x5
        je L_0054AAC2
        cmp	eax, 0x3
        je L_0054AAC2
        cmp	eax, 0x6
        je L_0054AAC2
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        fstp	dword ptr [esp + 0xc]
        fldz
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x4]
        jmp L_0054AADB
L_0054AAC2:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        fstp	dword ptr [esp + 0xc]
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
        fst	dword ptr [esp + 0x4]
L_0054AADB:
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054AAE4:
        push	0x1
        call	ebx
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        cmp	byte ptr [edi + 0x14], 0x0
        je L_0054AB7D
        call [mem_00925414]
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x24]
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call [mem_009253D0]
        fldz
        sub	esp, 0x10
        fst	dword ptr [esp + 0xc]
        fstp	dword ptr [esp + 0x8]
        fld1
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [mem_00955D14]
        fstp	dword ptr [esp]
        call [mem_009254CC]
        fld	dword ptr [esp + 0x1c]
        sub	esp, 0x8
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x28]
        mov	ecx, edi
        fstp	dword ptr [esp]
        call ext_00549950
        call [mem_00925404]
L_0054AB7D:
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AB97
        call [mem_00925524]
        push	0x2
        call [mem_009253CC]
        jmp L_0054ABE8
L_0054AB97:
        mov	eax, dword ptr [edi + 0x10]
        cmp	eax, 0x2
        je L_0054ABC6
        cmp	eax, 0x3
        je L_0054ABC6
        cmp	eax, 0x4
        je L_0054ABC6
        cmp	eax, 0x6
        je L_0054ABC6
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x8]
        fldz
        jmp L_0054ABDB
L_0054ABC6:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        fstp	dword ptr [esp + 0xc]
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
L_0054ABDB:
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054ABE8:
        push	0x1
        call	ebx
        fld	dword ptr [esp + 0x14]
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fldz
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fld	dword ptr [esp + 0x18]
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fldz
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        cmp	byte ptr [edi + 0x14], 0x0
        je L_0054AC5F
        call [mem_00925414]
        fld	dword ptr [esp + 0x18]
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fldz
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call [mem_009253D0]
        fld	dword ptr [esp + 0x1c]
        sub	esp, 0x8
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x28]
        mov	ecx, edi
        fstp	dword ptr [esp]
        call ext_00549950
        call [mem_00925404]
L_0054AC5F:
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AC6F
        call [mem_00925524]
L_0054AC6F:
        fld	dword ptr [mem_009324A4]
        push	ecx
        fstp	dword ptr [esp]
        call [mem_00925520]
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AC93
        push	0x3
        call [mem_009253CC]
        jmp L_0054ACCD
L_0054AC93:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        cmp	dword ptr [edi + 0x10], 0x3
        fstp	dword ptr [esp + 0xc]
        jne L_0054ACB4
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
        fst	dword ptr [esp + 0x4]
        jmp L_0054ACC4
L_0054ACB4:
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x4]
        fldz
L_0054ACC4:
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054ACCD:
        push	0x3
        call	ebx
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fld	dword ptr [esp + 0x10]
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fldz
        fstp	dword ptr [esp]
        call	esi
        fld	dword ptr [esp + 0x10]
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fldz
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AD2F
        call [mem_00925524]
        push	0x4
        call [mem_009253CC]
        jmp L_0054AD69
L_0054AD2F:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        cmp	dword ptr [edi + 0x10], 0x4
        fstp	dword ptr [esp + 0xc]
        jne L_0054AD50
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
        fst	dword ptr [esp + 0x4]
        jmp L_0054AD60
L_0054AD50:
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x4]
        fldz
L_0054AD60:
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054AD69:
        push	0x3
        call	ebx
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp]
        call	esi
        fld	dword ptr [esp + 0x10]
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fldz
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fld	dword ptr [esp + 0x10]
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fldz
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054ADCB
        call [mem_00925524]
        push	0x5
        call [mem_009253CC]
        jmp L_0054AE05
L_0054ADCB:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        cmp	dword ptr [edi + 0x10], 0x5
        fstp	dword ptr [esp + 0xc]
        jne L_0054ADEC
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
        fst	dword ptr [esp + 0x4]
        jmp L_0054ADFC
L_0054ADEC:
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x4]
        fldz
L_0054ADFC:
        fstp	dword ptr [esp]
        call [mem_009254D0]
L_0054AE05:
        push	0x3
        call	ebx
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x1c]
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x1c]
        fstp	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AE5D
        call [mem_00925524]
L_0054AE5D:
        push	0x8
        call [mem_0092546C]
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AE7E
        push	0x6
        call [mem_009253CC]
        push	0x1b02
        jmp L_0054AEBD
L_0054AE7E:
        fld	dword ptr [mem_00940694]
        sub	esp, 0x10
        cmp	dword ptr [edi + 0x10], 0x6
        fstp	dword ptr [esp + 0xc]
        jne L_0054AE9F
        fldz
        fstp	dword ptr [esp + 0x8]
        fld1
        fst	dword ptr [esp + 0x4]
        jmp L_0054AEAF
L_0054AE9F:
        fld	dword ptr [edi + 0xc]
        fstp	dword ptr [esp + 0x8]
        fldz
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [edi + 0xc]
L_0054AEAF:
        fstp	dword ptr [esp]
        call [mem_009254D0]
        push	0x1b01
L_0054AEBD:
        push	0x404
        call [mem_0092551C]
        call [mem_00925414]
        fld	dword ptr [esp + 0x14]
        sub	esp, 0xc
        fst	dword ptr [esp + 0x8]
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call [mem_009253D0]
        fld1
        lea	eax, [esp + 0x28]
        fst	dword ptr [esp + 0x28]
        push	eax
        fldz
        push	0xba6
        fst	dword ptr [esp + 0x34]
        fst	dword ptr [esp + 0x38]
        fst	dword ptr [esp + 0x3c]
        fst	dword ptr [esp + 0x40]
        fst	dword ptr [esp + 0x48]
        fst	dword ptr [esp + 0x4c]
        fst	dword ptr [esp + 0x50]
        fst	dword ptr [esp + 0x54]
        fst	dword ptr [esp + 0x5c]
        fst	dword ptr [esp + 0x60]
        fst	dword ptr [esp + 0x64]
        fstp	dword ptr [esp + 0x68]
        fst	dword ptr [esp + 0x44]
        fst	dword ptr [esp + 0x58]
        fstp	dword ptr [esp + 0x6c]
        call [mem_009254B8]
        fld1
        lea	ecx, [esp + 0x28]
        fst	dword ptr [esp + 0x28]
        push	ecx
        fldz
        fst	dword ptr [esp + 0x3c]
        fst	dword ptr [esp + 0x4c]
        fst	dword ptr [esp + 0x30]
        fst	dword ptr [esp + 0x50]
        fst	dword ptr [esp + 0x34]
        fstp	dword ptr [esp + 0x44]
        fst	dword ptr [esp + 0x40]
        fstp	dword ptr [esp + 0x54]
        call [mem_009254B4]
        push	0x7
        call	ebx
        fld	dword ptr [esp + 0x14]
        fchs
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x2c]
        fldz
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x20]
        fst	dword ptr [esp + 0x4]
        fstp	dword ptr [esp]
        call	esi
        fldz
        sub	esp, 0xc
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [esp + 0x20]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp]
        call	esi
        call	ebp
        call [mem_00925404]
        cmp	dword ptr [esp + 0x6c], 0x1c02
        jne L_0054AFF3
        call [mem_00925524]
L_0054AFF3:
        mov	esi, dword ptr [mem_0092552C]
        call	esi
        call	esi
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0x58
        ret	0x8
    }
}
