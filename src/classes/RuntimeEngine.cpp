// Decompiled translation unit: src/classes/RuntimeEngine.cpp

// [0x0046FA30] RuntimeEngine::vfunc_0_off_C (11 bytes)
extern "C" void ext_0046F930();

extern "C" __declspec(naked) void __fastcall fn_0046FA30(void* self, int edx_unused, int a1) {
    __asm {
        add ecx, -0xc
        call ext_0046F930
        ret 4
    }
}

// [0x0046F9E0] RuntimeEngine::vfunc_14_off_4 (70 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();
extern "C" __declspec(naked) void* __fastcall fn_0046F9E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        xor eax, eax
        cmp dword ptr [esp + 0xc], 0x21
        push esi
        mov dword ptr [esp + 0x4], eax
        je short L_match
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_match:
        lea edx, [ecx + 0x17c]
        test edx, edx
        je short L_null
        lea eax, [ecx + 0x180]
    L_null:
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0046F930();
extern "C" void ext_005A6300();

// [0x004757A0] RuntimeEngine::vfunc_0_off_8 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_004757A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x54]
        call edx
        test eax, eax
        je done
        lea ecx, [esi - 0x8]
        test ecx, ecx
        je is_null
        lea edx, [esi + 0x4]
        mov dword ptr [esp + 0x8], edx
        jmp cont
    is_null:
        mov dword ptr [esp + 0x8], 0x0
    cont:
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [eax + 0x4]
        call ext_005A6300
        lea ecx, [esi - 0x8]
        call ext_0046F930
    done:
        pop esi
        ret 0x4
    }
}

// [0x00473E70] RuntimeEngine::vfunc_1 (1164 bytes)
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0046C600();
extern "C" void ext_0046F860();
extern "C" void ext_00473BE0();
extern "C" void ext_004BD0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0059B800();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0065D0A0();
extern "C" void ext_0065D0F0();
extern "C" void ext_0067B930();
extern "C" int mem_00A9EE88;
extern "C" int mem_00A9EF7C;
extern "C" int mem_00A9F228;
extern "C" int mem_00A9F688;
extern "C" int mem_00A9F8A8;
extern "C" int mem_00A9F9B4;
extern "C" int mem_00A9F60C;
extern "C" int mem_00A9EEB4;

extern "C" __declspec(naked) void __fastcall fn_00473E70(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr [mem_00A9EE88]
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        push edi
        push 0x1
        push 0x0
        mov ebp, ecx
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_473eb1
        cmp eax, 0xb53b30
        je L_473eb1
        cmp eax, 0xb53ab0
        je L_473eb1
        cmp eax, 0xb53a70
        je L_473eb1
        cmp eax, 0xb53af0
        jne L_473eb6
    L_473eb1:
        mov eax, 0xb53b30
    L_473eb6:
        mov edx, dword ptr [ebp + 0xd4]
        lea ecx, [ebp + 0xd4]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        mov ecx, dword ptr [mem_00A9EE88]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_473efd
        cmp eax, 0xb53b30
        je L_473efd
        cmp eax, 0xb53ab0
        je L_473efd
        cmp eax, 0xb53a70
        je L_473efd
        cmp eax, 0xb53af0
        jne L_473f02
    L_473efd:
        mov eax, 0xb53b30
    L_473f02:
        mov edx, dword ptr [mem_00A9EF7C]
        push 0x1
        push 0x0
        push edx
        mov ecx, eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_473f37
        cmp eax, 0xb53b30
        je L_473f37
        cmp eax, 0xb53ab0
        je L_473f37
        cmp eax, 0xb53a70
        je L_473f37
        cmp eax, 0xb53af0
        jne L_473f3c
    L_473f37:
        mov eax, 0xb53b30
    L_473f3c:
        lea edi, [ebp + 0xfc]
        push eax
        mov ecx, edi
        call ext_0067B930
        mov ecx, dword ptr [ebp + 0xcc]
        call ext_0059B800
        mov eax, dword ptr [ebp + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        cmp byte ptr [ecx + 0x530], 0x0
        jne L_473fbc
        mov edx, dword ptr [mem_00A9EE88]
        push 0x1
        push 0x0
        push edx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_473f9f
        cmp eax, 0xb53b30
        je L_473f9f
        cmp eax, 0xb53ab0
        je L_473f9f
        cmp eax, 0xb53a70
        je L_473f9f
        cmp eax, 0xb53af0
        jne L_473fa4
    L_473f9f:
        mov eax, 0xb53b30
    L_473fa4:
        push eax
        mov eax, dword ptr [ebp + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        add ecx, 0x1b0
        call ext_004BD0A0
    L_473fbc:
        mov ecx, dword ptr [ebp + 0xcc]
        mov esi, dword ptr [ecx + 0x26c]
        add esi, 0x1b0
        push esi
        mov ecx, ebp
        call ext_00473BE0
        cmp byte ptr [esi + 0x80], 0x0
        jne L_473ff0
        fld dword ptr [edi]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esi + 0xc]
    L_473ff0:
        cmp byte ptr [esi + 0x82], 0x0
        jne L_474003
        mov ecx, ebp
        call ext_0046F860
        fstp dword ptr [esi + 0x20]
    L_474003:
        mov edx, dword ptr [mem_00A9F228]
        push 0x1
        push 0x0
        push edx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_474038
        cmp eax, 0xb53b30
        je L_474038
        cmp eax, 0xb53ab0
        je L_474038
        cmp eax, 0xb53a70
        je L_474038
        cmp eax, 0xb53af0
        jne L_474043
    L_474038:
        mov edi, 0xb53b30
        mov dword ptr [esp + 0x10], edi
        jmp L_474049
    L_474043:
        mov dword ptr [esp + 0x10], eax
        mov edi, eax
    L_474049:
        mov eax, dword ptr [ebp + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        mov edx, dword ptr [ecx + 0x1fc]
        mov dword ptr [ebp + 0x174], edx
        mov eax, dword ptr [mem_00A9F688]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x20]
        push ecx
        lea edx, [ebp + 0x288]
        push edx
        mov dword ptr [esp + 0x28], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F8A8]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x20]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov dword ptr [esp + 0x28], eax
        call ext_0046C0A0
        mov eax, dword ptr [ebp + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        add esp, 0x8
        cmp byte ptr [ecx + 0x231], 0x0
        jne L_4740d1
        fld dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [ebp + 0xf8]
        fstp dword ptr [esp]
        call ext_0065D0A0
    L_4740d1:
        push 0x1
        push 0x0
        push 0x93bd80
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_474104
        cmp eax, 0xb53b30
        je L_474104
        cmp eax, 0xb53ab0
        je L_474104
        cmp eax, 0xb53a70
        je L_474104
        cmp eax, 0xb53af0
        jne L_47410b
    L_474104:
        mov esi, 0xb53b30
        jmp L_47410d
    L_47410b:
        mov esi, eax
    L_47410d:
        cmp esi, 0xb53a34
        je L_474289
        cmp esi, 0xb53b30
        je L_474289
        cmp esi, 0xb53ab0
        je L_474289
        cmp esi, 0xb53a70
        je L_474289
        cmp esi, 0xb53af0
        je L_474289
        push 0x93bd70
        mov ecx, esi
        mov byte ptr [esp + 0x24], 0x0
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_47419f
        cmp eax, 0xb53b30
        je L_47419f
        cmp eax, 0xb53ab0
        je L_47419f
        cmp eax, 0xb53a70
        je L_47419f
        cmp eax, 0xb53af0
        je L_47419f
        push 0x93bd70
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        push edx
        lea eax, [esp + 0x24]
        push eax
        call ext_00427640
        add esp, 0x8
    L_47419f:
        mov ecx, dword ptr [ebp + 0xf8]
        mov dl, byte ptr [esp + 0x20]
        mov byte ptr [ecx + 0x12c], dl
        mov eax, dword ptr [mem_00A9F9B4]
        mov ebx, 0x1
        mov edi, 0x7fffffff
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x18], edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_474219
        cmp eax, 0xb53b30
        je L_474219
        cmp eax, 0xb53ab0
        je L_474219
        cmp eax, 0xb53a70
        je L_474219
        cmp eax, 0xb53af0
        je L_474219
        mov ecx, dword ptr [mem_00A9F9B4]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x18], eax
        push edx
        lea eax, [esp + 0x24]
        push eax
        call ext_0053F5F0
        mov ebx, dword ptr [esp + 0x28]
        add esp, 0x8
    L_474219:
        mov ecx, dword ptr [mem_00A9F60C]
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_474272
        cmp eax, 0xb53b30
        je L_474272
        cmp eax, 0xb53ab0
        je L_474272
        cmp eax, 0xb53a70
        je L_474272
        cmp eax, 0xb53af0
        je L_474272
        mov edx, dword ptr [mem_00A9F60C]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x20], eax
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_0053F5F0
        mov edi, dword ptr [esp + 0x1c]
        add esp, 0x8
    L_474272:
        cmp edi, ebx
        jge L_474278
        mov edi, ebx
    L_474278:
        mov ecx, dword ptr [ebp + 0xf8]
        push edi
        push ebx
        call ext_0065D0F0
        mov edi, dword ptr [esp + 0x10]
    L_474289:
        mov edx, dword ptr [mem_00A9EEB4]
        push 0x1
        push 0x0
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_4742be
        cmp eax, 0xb53b30
        je L_4742be
        cmp eax, 0xb53ab0
        je L_4742be
        cmp eax, 0xb53a70
        je L_4742be
        cmp eax, 0xb53af0
        jne L_4742c3
    L_4742be:
        mov eax, 0xb53b30
    L_4742c3:
        cmp eax, 0xb53a34
        je L_4742f2
        cmp eax, 0xb53b30
        je L_4742f2
        cmp eax, 0xb53ab0
        je L_4742f2
        cmp eax, 0xb53a70
        je L_4742f2
        cmp eax, 0xb53af0
        je L_4742f2
        push eax
        lea ecx, [ebp + 0x180]
        call ext_0046C600
    L_4742f2:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}
