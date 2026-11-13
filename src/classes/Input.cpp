// Decompiled translation unit: src/classes/Input.cpp

// [0x00530400] Input::vfunc_0_off_4 (149 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_00530400(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x6c], 0x1
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xa4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x0
        call edx
        mov dword ptr [esi + 0x70], eax
        mov eax, dword ptr [edi]
        mov esi, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x210]
        mov ecx, edi
        add esi, 0x9c
        call edx
        mov ecx, ebx
        mov byte ptr [esi + 0x13c], al
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005304B0] Input::vfunc_1_off_8 (37 bytes)
extern "C" void __fastcall ext_005442D0(void* self);

extern "C" __declspec(naked) void __fastcall fn_005304B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x64]
        test ecx, ecx
        je done
        cmp dword ptr [esi + 0x30], 0x7
        jne done
        call ext_005442D0
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

extern "C" void ext_00427A60();
extern "C" void ext_00493D90();
extern "C" void ext_00543220();
extern "C" void ext_0063F530();
extern "C" void ext_0066A330();
extern "C" int mem_00925134;
extern "C" int mem_00A9F25C;
extern "C" int mem_00924FC0;
extern "C" int mem_00AF140C;
extern "C" int mem_00AF1410;
extern "C" int mem_00AF1414;
extern "C" int mem_00AF1418;
extern "C" int mem_00A9ED80;
extern "C" int mem_00A9EF34;

// [0x005315F0] Input::vfunc_1 (480 bytes)
extern "C" __declspec(naked) void __fastcall fn_005315F0(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x38]
        add esi, 0x24
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov ebx, ecx
        jbe L_0053160E
        call dword ptr [mem_00925134]
    L_0053160E:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_00531631
        call dword ptr [mem_00925134]
    L_00531631:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
    L_00531641:
        call ext_00427A60
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_00531654
        cmp esi, dword ptr [esp + 0x20]
        je L_0053165A
    L_00531654:
        call dword ptr [mem_00925134]
    L_0053165A:
        mov ebp, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [esp + 0x24]
        jae L_005317BA
        test esi, esi
        jne L_00531672
        call dword ptr [mem_00925134]
    L_00531672:
        cmp ebp, dword ptr [esi + 0x8]
        jb L_0053167D
        call dword ptr [mem_00925134]
    L_0053167D:
        mov esi, dword ptr [ebp]
        mov eax, dword ptr [mem_00A9F25C]
        push eax
        lea edi, [esi + 0x4]
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_00531755
        mov ecx, dword ptr [ebx + 0x68]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8]
        push esi
        call eax
        push 0x1
        push 0x0
        push 0x9542f0
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_005316D9
        cmp eax, 0xb53b30
        je L_005316D9
        cmp eax, 0xb53ab0
        je L_005316D9
        cmp eax, 0xb53a70
        je L_005316D9
        cmp eax, 0xb53af0
        jne L_005316DE
    L_005316D9:
        mov eax, 0xb53b30
    L_005316DE:
        cmp eax, 0xb53a34
        je L_00531705
        cmp eax, 0xb53b30
        je L_00531705
        cmp eax, 0xb53ab0
        je L_00531705
        cmp eax, 0xb53a70
        je L_00531705
        cmp eax, 0xb53af0
        jne L_0053179B
    L_00531705:
        fld1
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x38]
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        fld dword ptr [esp + 0x28]
        fstp dword ptr [mem_00AF140C]
        lea ecx, [esp + 0x28]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [mem_00AF1410]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [mem_00AF1414]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [mem_00AF1418]
        call ext_00493D90
        jmp L_0053179B
    L_00531755:
        mov ecx, dword ptr [mem_00A9ED80]
        push ecx
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_0053176F
        mov ecx, dword ptr [ebx + 0x64]
        jmp L_00531793
    L_0053176F:
        mov ecx, dword ptr [mem_00A9EF34]
        push ecx
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_0053179B
        push 0x0
        push 0x7
        lea ecx, [ebx + 0x38]
        call ext_00543220
        mov ecx, dword ptr [ebx + 0x4c]
    L_00531793:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8]
        push esi
        call eax
    L_0053179B:
        mov ecx, dword ptr [esp + 0x14]
        cmp ebp, dword ptr [ecx + 0x8]
        jb L_005317AA
        call dword ptr [mem_00925134]
    L_005317AA:
        add ebp, 0x4
        mov dword ptr [esp + 0x18], ebp
        lea ecx, [esp + 0x10]
        jmp L_00531641
    L_005317BA:
        push 0x0
        push 0x1
        lea ecx, [ebx + 0x38]
        call ext_00543220
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x4
    }
}
