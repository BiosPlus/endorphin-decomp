// Decompiled translation unit: src/templates/MatrixTypeIterator.cpp
extern "C" void ext_0055DA20();
extern "C" void ext_00681B00();
extern "C" void ext_00681E50();
extern "C" int mem_00681F50;
extern "C" int mem_00681F64;

// [0x00681ED0] Properties::PropertyIteratorTypes::MatrixTypeIterator<NM::Matrix4, 4>::vfunc_2 (125 bytes)
extern "C" __declspec(naked) void __fastcall fn_00681ED0(void* self, int edx_unused, int a1, void* a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 14h]
        lea eax, [esi - 1b8h]
        cmp eax, 0bh
        push edi
        mov edi, dword ptr [edx]
        mov dword ptr [esp + 8], 0
        ja short L_default
        movzx eax, byte ptr [eax + mem_00681F64]
        jmp dword ptr [eax*4 + mem_00681F50]
L_case0:
        xor esi, esi
        jmp short L_common
L_case1:
        mov esi, 1
        jmp short L_common
L_case2:
        mov esi, 2
        jmp short L_common
L_case3:
        mov esi, 3
L_common:
        push 4
        call ext_00681E50
        shl esi, 4
        add esp, 4
        add esi, edi
        push esi
        mov esi, dword ptr [esp + 14h]
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0ch
L_default:
        push esi
        mov esi, dword ptr [esp + 14h]
        push edx
        push esi
        call ext_00681B00
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0ch
    }
}
