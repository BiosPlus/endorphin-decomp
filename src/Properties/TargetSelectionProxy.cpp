// Decompiled translation unit: src/Properties/TargetSelectionProxy.cpp

extern "C" int mem_00925134;

// [0x004EF460] Properties::TargetSelectionProxy::vfunc_0 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EF460(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done_pop_ret
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        sar ecx, 2
        je done_pop_ret
        test eax, eax
        je invalid
        mov edx, dword ptr [esi + 0x14]
        sub edx, eax
        sar edx, 2
        jne ok
invalid:
        call dword ptr [mem_00925134]
ok:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        pop esi
        add esp, 4
        mov edx, dword ptr [edx]
        jmp edx
done_pop_ret:
        pop esi
        pop ecx
        ret 0x10
    }
}

// [0x004EF4A0] Properties::TargetSelectionProxy::vfunc_1 (100 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EF4A0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je done_pop_ret
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        sar ecx, 2
        je done_pop_ret
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        xor edi, edi
loop_top:
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je loop_done
        mov eax, dword ptr [esi + 0x14]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae loop_done
        test ecx, ecx
        je call_invalid
        mov eax, dword ptr [esi + 0x14]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb in_range
call_invalid:
        call ebp
in_range:
        mov edx, dword ptr [esi + 0x10]
        mov ecx, dword ptr [edx + 4*edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push ebx
        call edx
        add edi, 1
        jmp loop_top
loop_done:
        pop edi
        pop ebp
        pop ebx
done_pop_ret:
        pop esi
        pop ecx
        ret 0x4
    }
}
