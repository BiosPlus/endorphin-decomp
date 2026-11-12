// Decompiled translation unit: src/SeverEventTypes/Enable.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

// [0x004C7BB0] SeverEventTypes::Enable::vfunc_0 (279 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7BB0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [ecx + 8]
        cmp ebp, dword ptr [ecx + 0xc]
        push esi
        lea esi, [ecx + 4]
        push edi
        mov dword ptr [esp + 0x10], esi
        jbe L1
        call ebx
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L1:
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L2
        call ebx
    L2:
        test esi, esi
        je L3
        cmp esi, esi
        je L4
    L3:
        call ebx
    L4:
        cmp ebp, edi
        je Lend
        call ext_00594000
        test esi, esi
        mov edi, eax
        jne L5
        call ebx
    L5:
        cmp ebp, dword ptr [esi + 8]
        jb L6
        call ebx
    L6:
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 0x22c]
        add edi, 0x168
        push edi
        push 1
        push 0x2000
        add ecx, 0xc
        call ext_00528BF0
        cmp ebp, dword ptr [esi + 8]
        jb L7
        call ebx
    L7:
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx + 0x18c]
        mov edi, dword ptr [edx + 0x5ec]
        mov esi, dword ptr [edi + 0x1c]
        add edi, 0x18
        cmp esi, dword ptr [edi + 8]
        jbe L8
        call ebx
    L8:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L10
        call dword ptr [mem_00925134]
    L10:
        cmp esi, ebx
        mov eax, dword ptr [esp + 0x10]
        je L15
        cmp ebp, dword ptr [eax + 8]
        jb L11
        call dword ptr [mem_00925134]
    L11:
        cmp esi, dword ptr [edi + 8]
        mov eax, dword ptr [ebp]
        mov ebx, dword ptr [eax + 0x234]
        jb L12
        call dword ptr [mem_00925134]
    L12:
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 4], ebx
        jne L14
        cmp esi, dword ptr [edi + 8]
        jb L13
        call dword ptr [mem_00925134]
    L13:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x44]
        push 1
        call eax
    L14:
        cmp esi, dword ptr [edi + 8]
        jb L14b
        call dword ptr [mem_00925134]
    L14b:
        add esi, 4
        jmp L8
    L15:
        cmp ebp, dword ptr [eax + 8]
        jb L16
        call dword ptr [mem_00925134]
    L16:
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [mem_00925134]
        add ebp, 4
        jmp L1
    Lend:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
