// Decompiled translation unit: src/classes/Individual.cpp

// [0x00517140] Individual::vfunc_3 (112 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" int mem_00A9EFF4;

extern "C" __declspec(naked) void __fastcall fn_00517140(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 0x14]
        cmp ebx, dword ptr [ecx + 0x18]
        push ebp
        lea ebp, [ecx + 0x10]
        push esi
        push edi
        mov edi, dword ptr [mem_00925134]
        jbe loop_top
        call edi
loop_top:
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        jbe chk2
        call edi
chk2:
        cmp ebp, ebp
        je chk3
        call edi
chk3:
        cmp ebx, esi
        je done
        cmp ebx, dword ptr [ebp + 0x8]
        jb body
        call edi
body:
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [mem_00A9EFF4]
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        add esi, 0x58
        call ext_006404E0
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        cmp ebx, dword ptr [ebp + 0x8]
        jb next
        call dword ptr [mem_00925134]
next:
        mov edi, dword ptr [mem_00925134]
        add ebx, 0x4
        jmp loop_top
done:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
