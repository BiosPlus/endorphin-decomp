// Decompiled translation unit: src/classes/NMCMultilineEditDlg.cpp

extern "C" void __stdcall ext_006A5F44(int a1, int a2, void* a3);

// [0x006B7E10] NMCMultilineEditDlg::vfunc_63 (25 bytes)
extern "C" void __fastcall fn_006B7E10(void* self, int edx_unused, int a1) {
    ext_006A5F44(a1, 0x2af8, (char*)self + 0x88);
}

// [0x006B7D60] NMCMultilineEditDlg::vfunc_87 (40 bytes)
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void __fastcall fn_006B7D60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x78]
        push eax
        lea ecx, [esi + 0x74]
        call dword ptr [mem_009244D4]
        cmp dword ptr [esi + 0x1a4], 0
        je done
        mov ecx, dword ptr [esi + 0x1a4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push esi
        call eax
    done:
        pop esi
        ret
    }
}

// [0x006B7CA0] NMCMultilineEditDlg::vfunc_84 (177 bytes)
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" int mem_0092431C;
extern "C" int mem_00924CA0;
extern "C" int mem_00924CD8;
extern "C" int mem_00924300;

extern "C" __declspec(naked) void __fastcall fn_006B7CA0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_006A5FC8
        lea esi, [ebx + 0x74]
        mov ecx, esi
        xor edi, edi
        call dword ptr [mem_0092431C]
        test eax, eax
        jle phase2
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop1:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924CA0]
        cmp al, 0x0a
        jne next1
        test edi, edi
        jle chk
        lea eax, [edi - 1]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924CA0]
        cmp al, 0x0d
        jne do_insert
        test edi, edi
    chk:
        jne next1
    do_insert:
        push 0x0d
        push edi
        mov ecx, esi
        call dword ptr [mem_00924CD8]
    next1:
        mov ecx, esi
        add edi, 1
        call dword ptr [mem_0092431C]
        cmp edi, eax
        jl loop1
    phase2:
        mov ecx, esi
        mov dword ptr [ebx + 0x7c], 1
        xor edi, edi
        call dword ptr [mem_0092431C]
        test eax, eax
        jle done2
    loop2:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924CA0]
        cmp al, 0x0a
        jne next2
        add dword ptr [ebx + 0x7c], 1
    next2:
        mov ecx, esi
        add edi, 1
        call dword ptr [mem_0092431C]
        cmp edi, eax
        jl loop2
    done2:
        mov ecx, esi
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [ebx + 0x88]
        call ext_006A5F50
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    }
}
