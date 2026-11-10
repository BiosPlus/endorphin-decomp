// Decompiled translation unit: src/classes/CameraTool.cpp

// [0x00543470] CameraTool::vfunc_32 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543470(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x88], 0x0
        je done
        mov eax, dword ptr [ebx + 0x88]
        mov edx, dword ptr [ebx]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
        mov ecx, dword ptr [ebx + 0x88]
        mov edx, dword ptr [esi + 0x18]
        push eax
        call edx
        lea edx, [ebx + 0x4]
        mov ecx, 0x10
        mov esi, eax
        mov edi, edx
        rep movsd
        lea edi, [ebx + 0x44]
        mov ecx, 0x10
        mov esi, edx
        rep movsd
        pop edi
        pop esi
done:
        pop ebx
        ret
    }
}
