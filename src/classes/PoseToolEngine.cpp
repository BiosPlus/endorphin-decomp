// Decompiled translation unit: src/classes/PoseToolEngine.cpp

extern "C" void ext_00472350();
extern "C" void ext_004A6180();
extern "C" int mem_00AD89B4;

// [0x004A6280] PoseToolEngine::vfunc_0 (206 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A6280(void* self) {
    __asm {
        push -1
        push 0x88fe68
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x254]
        test edi, edi
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], 0x0
        je L_skip1
        cmp dword ptr [mem_00AD89B4], 0x0
        jne L_skip2
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0x1
        call ext_00472350
L_skip2:
        add dword ptr [mem_00AD89B4], 0x1
L_skip1:
        mov eax, dword ptr [esi + 0x254]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        mov dword ptr [esp + 0x1c], 0x0
        call eax
        mov eax, dword ptr [esi + 0x258]
        xor ebp, ebp
        test eax, eax
        je L_skip3
        mov ecx, esi
        mov ebp, eax
        call ext_004A6180
L_skip3:
        mov ecx, dword ptr [esi + 0x254]
        mov dword ptr [esi + 0x258], ebp
        mov ecx, dword ptr [ecx + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x88]
        call eax
        mov edx, dword ptr [esi + 0x25c]
        mov eax, dword ptr [edx + 0x8]
        lea ecx, [esi + 0x25c]
        call eax
        test edi, edi
        je L_skip4
        sub dword ptr [mem_00AD89B4], 0x1
        jne L_skip4
        mov byte ptr [edi + 0x153], 0x0
L_skip4:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0x14
        ret
    }
}
