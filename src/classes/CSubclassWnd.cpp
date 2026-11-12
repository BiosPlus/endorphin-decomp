// Decompiled translation unit: src/classes/CSubclassWnd.cpp

// [0x00458F00] CSubclassWnd::vfunc_1 (216 bytes)
extern "C" int mem_00AD3E2C;
extern "C" int mem_009255BC;
extern "C" int mem_00925644;
extern "C" int mem_009255F0;
extern "C" int mem_009255C4;

extern "C" __declspec(naked) void __fastcall fn_00458F00(void* self, int edx_unused, int a1, void* a2, void* a3, int* a4) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        cmp ecx, dword ptr [mem_00AD3E2C]
        jne L_ret0
        mov eax, dword ptr [esp + 10h]
        cmp eax, esi
        jne L_cwp
        mov eax, dword ptr [esi + 1Ch]
        test eax, eax
        jne L_nz
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax], 0
        mov eax, 1
        pop esi
        ret 10h
L_nz:
        mov ecx, dword ptr [esp + 0Ch]
        test ecx, ecx
        je L_a2zero
        mov edx, dword ptr [esi + 14h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [esi + 1Ch]
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [mem_009255BC]
        mov dword ptr [ecx], eax
        mov dword ptr [esi + 14h], edx
        mov dword ptr [esi + 1Ch], 0
        mov eax, 1
        pop esi
        ret 10h
L_a2zero:
        push -4
        push eax
        call dword ptr [mem_00925644]
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 1Ch]
        push eax
        push -4
        push ecx
        call dword ptr [mem_009255F0]
        test eax, eax
        mov edx, dword ptr [esp + 14h]
        jne L_setnz
        mov dword ptr [edx], eax
        mov eax, 1
        pop esi
        ret 10h
L_setnz:
        mov eax, dword ptr [mem_009255BC]
        mov ecx, dword ptr [esi + 1Ch]
        mov dword ptr [esi + 14h], eax
        mov dword ptr [edx], ecx
        mov dword ptr [esi + 1Ch], 0
        mov eax, 1
        pop esi
        ret 10h
L_cwp:
        push eax
        mov eax, dword ptr [esi + 1Ch]
        push esi
        push ecx
        mov ecx, dword ptr [esi + 14h]
        push eax
        push ecx
        call dword ptr [mem_009255C4]
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx], eax
        mov eax, 1
        pop esi
        ret 10h
L_ret0:
        xor eax, eax
        pop esi
        ret 10h
    }
}
