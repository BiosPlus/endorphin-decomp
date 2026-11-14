// Decompiled translation unit: src/classes/VIO.cpp

// [0x00574D00] VIO::vfunc_3 (37 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();

extern "C" __declspec(naked) void* __fastcall fn_00574D00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92f190
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0057A4B0] VIO::vfunc_14 (635 bytes)
extern "C" void ext_005749F0();
extern "C" void ext_00575C80();
extern "C" void ext_00576100();
extern "C" void ext_0057A320();
extern "C" void ext_00662F80();
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_009250C0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;
extern "C" int mem_009250CC;
extern "C" int mem_009250C8;
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0057A4B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89def4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x11c]
        push 0x1
        push 0x40
        mov ebp, ecx
        push 0x20
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x90]
        call dword ptr [mem_009250C4]
        mov eax, dword ptr [esp + 0x80]
        mov ecx, dword ptr [eax + 0x4]
        xor ebx, ebx
        lea ecx, [esp + ecx + 0x80]
        mov dword ptr [esp + 0x114], ebx
        call dword ptr [mem_009250C0]
        test al, al
        je L_59E
        push 0x94e108
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        push esi
        lea ecx, [esp + 0x30]
        push 0x9599b4
        push ecx
        mov byte ptr [esp + 0x120], 0x1
        call dword ptr [mem_00924FCC]
        push eax
        lea edx, [esp + 0x20]
        push edx
        mov byte ptr [esp + 0x128], 0x2
        call ext_00662F80
        mov byte ptr [esp + 0x128], 0x1
L_55E:
        add esp, 0x14
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
L_56F:
        mov byte ptr [esp + 0x114], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x114], 0xffffffff
        call dword ptr [mem_009250CC]
        mov eax, 0x3
        jmp L_711
L_59E:
        lea eax, [esp + 0x80]
        push eax
        mov ecx, ebp
        call ext_00575C80
        test al, al
        je L_5F9
        push 0x94e108
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        push esi
        lea ecx, [esp + 0x30]
        push 0x95999c
        push ecx
        mov byte ptr [esp + 0x120], 0x3
        call dword ptr [mem_00924FCC]
        push eax
        lea edx, [esp + 0x20]
        push edx
        mov byte ptr [esp + 0x128], 0x4
        call ext_00662F80
        mov byte ptr [esp + 0x128], 0x3
        jmp L_55E
L_5F9:
        lea eax, [esp + 0x80]
        push eax
        mov ecx, ebp
        call ext_0057A320
        test al, al
        je L_665
        push 0x94e108
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FE4]
        push esi
        lea ecx, [esp + 0x68]
        push 0x95999c
        push ecx
        mov byte ptr [esp + 0x120], 0x5
        call dword ptr [mem_00924FCC]
        push eax
        lea edx, [esp + 0x58]
        push edx
        mov byte ptr [esp + 0x128], 0x6
        call ext_00662F80
        add esp, 0x14
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x114], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        jmp L_56F
L_665:
        push edi
        lea ecx, [esp + 0x84]
        call dword ptr [mem_009250C8]
        mov eax, dword ptr [ebp + 0x27c]
        mov edx, dword ptr [eax + 0x84]
        lea ebx, [ebp + 0x27c]
        mov ecx, ebx
        call edx
        push esi
        push ebx
        mov ecx, ebp
        call ext_005749F0
        mov edi, dword ptr [ebp + 0x490]
        cmp edi, dword ptr [ebp + 0x494]
        lea esi, [ebp + 0x48c]
        jbe L_6B0
        call dword ptr [mem_00925134]
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
L_6B0:
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe L_6C2
        call dword ptr [mem_00925134]
L_6C2:
        cmp esi, esi
        je L_6CC
        call dword ptr [mem_00925134]
L_6CC:
        cmp edi, dword ptr [esp + 0x10]
        jae L_6F6
        cmp edi, dword ptr [esi + 0x8]
        jb L_6DD
        call dword ptr [mem_00925134]
L_6DD:
        push edi
        push ebx
        mov ecx, ebp
        call ext_00576100
        cmp edi, dword ptr [esi + 0x8]
        jb L_6F1
        call dword ptr [mem_00925134]
L_6F1:
        add edi, 0x1c
        jmp L_6B0
L_6F6:
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0x118], 0xffffffff
        call dword ptr [mem_009250CC]
        xor eax, eax
        pop edi
L_711:
        mov ecx, dword ptr [esp + 0x10c]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10c
        ret 0x4
    }
}

// [0x0057A040] VIO::vfunc_13 (397 bytes)
extern "C" void ext_00574E20();
extern "C" void ext_00574E60();
extern "C" void ext_00574F10();
extern "C" void ext_00574F40();
extern "C" void ext_005772B0();
extern "C" void ext_00577390();
extern "C" void ext_00579B10();
extern "C" void ext_00661E80();
extern "C" void ext_00661F70();
extern "C" int mem_00924FF0;
extern "C" int mem_00925008;
extern "C" int mem_00924FE0;
extern "C" int mem_00925134;
extern "C" int mem_009250E0;
extern "C" int mem_00925004;

extern "C" __declspec(naked) void __fastcall fn_0057A040(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x89de6c
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8c
        push ebx
        push ebp
        push esi
        push edi
        push 0x1
        push 0x40
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xb4]
        push 0x20
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00925008]
        mov edi, dword ptr [esi + 0x414]
        push 0x0
        add edi, 0x160
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0xac], 0x0
        call ext_00579B10
        push 0x1
        push edi
        mov ecx, esi
        mov ebx, eax
        call ext_00579B10
        lea ebx, [ebx + eax + 0x2]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00574E20
        push ebx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x30], esp
        push 0xb3d500
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, esi
        call ext_00574E60
        push 0x0
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005772B0
        push 0x1
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_005772B0
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_00574F40
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_00574F10
        mov eax, dword ptr [esi + 0x16c]
        mov ecx, dword ptr [esi + 0x420]
        add eax, 0x1
        push eax
        call ext_00661F70
        mov ebx, 0x1
    loc_0057A12B:
        push ebx
        push edi
        push 0x0
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00577390
        push ebx
        push edi
        push 0x1
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_00577390
        mov ebp, dword ptr [esi + 0x420]
        add ebx, 0x1
        cmp dword ptr [ebp + 0x8], 0x0
        jne short loc_0057A160
        call dword ptr [mem_00925134]
    loc_0057A160:
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [ebp + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne short loc_0057A171
        call dword ptr [mem_00925134]
    loc_0057A171:
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [esi + 0x170]
        mov eax, dword ptr [edx + 0x8]
        add ecx, 0x1
        cmp eax, ecx
        jge short loc_0057A193
        mov ecx, dword ptr [esi + 0x420]
        call ext_00661E80
        test al, al
        jne short loc_0057A12B
    loc_0057A193:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009250E0]
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xa4], 0xffffffff
        call dword ptr [mem_00925004]
        mov ecx, dword ptr [esp + 0x9c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x98
        ret 0x4
    }
}

// [0x0057B680] VIO::vfunc_11 (1174 bytes)
extern "C" void ext_00489320();
extern "C" void ext_00492A50();
extern "C" void ext_00575C80();
extern "C" void ext_00575DF0();
extern "C" void ext_00576530();
extern "C" void ext_00577480();
extern "C" void ext_005774B0();
extern "C" void ext_0057A320();
extern "C" void ext_0057AE30();
extern "C" void ext_0057B5E0();
extern "C" void ext_00661A10();
extern "C" void ext_00661AE0();
extern "C" void ext_00661F70();
extern "C" void ext_006620E0();
extern "C" void ext_00662120();
extern "C" void ext_00662F80();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_009250C4;
extern "C" int mem_009250C0;
extern "C" int mem_00924FCC;
extern "C" int mem_009250CC;
extern "C" int mem_009250C8;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void __fastcall fn_0057B680(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x89e120
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xe8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x418], 0x0
        jne loc_57b72d
        push 0x94e11c
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push 0x94e108
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0xf8], 0x0
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0xfc], 0x1
        call ext_00662F80
        add esp, 0x8
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0xf4], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0xf4], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop esi
        mov ecx, dword ptr [esp + 0xe8]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xf4
        ret 0x4
    loc_57b72d:
        mov ecx, dword ptr [esi + 0x420]
        push ebx
        push edi
        call ext_00661AE0
        mov ecx, dword ptr [esi + 0x420]
        call ext_00662120
        mov ecx, esi
        call ext_0057AE30
        mov edi, dword ptr [esp + 0x104]
        push 0x1
        push 0x40
        push 0x20
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x78]
        call dword ptr [mem_009250C4]
        mov edx, dword ptr [esp + 0x68]
        mov ecx, dword ptr [edx + 0x4]
        lea ecx, [esp + ecx + 0x68]
        mov dword ptr [esp + 0xfc], 0x2
        call dword ptr [mem_009250C0]
        test al, al
        je loc_57b808
        push 0x94e108
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        push edi
        lea eax, [esp + 0x2c]
        push 0x9599b4
        mov bl, 0x3
        push eax
        mov byte ptr [esp + 0x108], bl
        call dword ptr [mem_00924FCC]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x110], 0x4
        call ext_00662F80
        add esp, 0x14
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xfc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xfc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_009250CC]
        jmp loc_57bafc
    loc_57b808:
        lea edx, [esp + 0x68]
        push edx
        mov ecx, esi
        call ext_00575C80
        test al, al
        je loc_57b894
        push 0x94e108
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        push edi
        lea eax, [esp + 0x2c]
        push 0x95999c
        mov bl, 0x5
        push eax
        mov byte ptr [esp + 0x108], bl
        call dword ptr [mem_00924FCC]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x110], 0x6
        call ext_00662F80
        add esp, 0x14
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xfc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xfc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_009250CC]
        jmp loc_57bafc
    loc_57b894:
        lea edx, [esp + 0x68]
        push edx
        mov ecx, esi
        call ext_0057A320
        test al, al
        je loc_57b920
        push 0x94e108
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        push edi
        lea eax, [esp + 0x2c]
        push 0x95999c
        mov bl, 0x7
        push eax
        mov byte ptr [esp + 0x108], bl
        call dword ptr [mem_00924FCC]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x110], 0x8
        call ext_00662F80
        add esp, 0x14
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xfc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xfc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_009250CC]
        jmp loc_57bafc
    loc_57b920:
        lea edx, [esp + 0x68]
        push edx
        mov ecx, esi
        call ext_0057B5E0
        test al, al
        je loc_57b9ac
        push 0x94e108
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        push edi
        lea eax, [esp + 0x2c]
        push 0x95999c
        mov bl, 0x9
        push eax
        mov byte ptr [esp + 0x108], bl
        call dword ptr [mem_00924FCC]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov byte ptr [esp + 0x110], 0xa
        call ext_00662F80
        add esp, 0x14
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xfc], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xfc], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0xfc], 0xffffffff
        call dword ptr [mem_009250CC]
        jmp loc_57bafc
    loc_57b9ac:
        push ebp
        lea ecx, [esp + 0x6c]
        call dword ptr [mem_009250C8]
        lea ebx, [esi + 0x6b4]
        mov ecx, ebx
        call ext_00577480
        mov ebp, dword ptr [eax]
        mov ecx, ebx
        call ext_005774B0
        mov eax, dword ptr [eax]
        sub eax, ebp
        add eax, 0x1
        cmp dword ptr [esi + 0x424], 0x0
        mov ebp, eax
        je loc_57ba01
        mov ecx, dword ptr [esi + 0x424]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [ebp + ebp]
        push eax
        push 0x0
        call edx
        mov ecx, dword ptr [esi + 0x424]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push ebp
        call edx
    loc_57ba01:
        test ebp, ebp
        jle loc_57bae6
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE8]
        lea eax, [esi + 0xac]
        push eax
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x104], 0xb
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x48]
        push edi
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je loc_57ba61
        lea edx, [esp + 0x64]
        push edx
        lea ecx, [esi + 0x48c]
        call ext_00489320
        mov ecx, eax
        call ext_00492A50
        push eax
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924FDC]
    loc_57ba61:
        mov ecx, dword ptr [esi + 0x420]
        push 0x1
        call ext_00661F70
        xor edi, edi
        test ebp, ebp
        jle loc_57babf
    loc_57ba74:
        cmp dword ptr [esi + 0x424], 0x0
        je loc_57ba8e
        mov ecx, dword ptr [esi + 0x424]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        lea edx, [edi + ebp]
        push edx
        call eax
    loc_57ba8e:
        lea ecx, [esp + 0x48]
        push ecx
        push edi
        mov ecx, ebx
        call ext_00575DF0
        add eax, 0x4
        push eax
        mov ecx, esi
        call ext_00576530
        lea eax, [ebp - 0x1]
        cmp edi, eax
        jge loc_57bab8
        mov ecx, dword ptr [esi + 0x420]
        call ext_006620E0
    loc_57bab8:
        add edi, 0x1
        cmp edi, ebp
        jl loc_57ba74
    loc_57babf:
        fld dword ptr [esi + 0x6b0]
        push ecx
        mov ecx, dword ptr [esi + 0x420]
        fstp dword ptr [esp]
        call ext_00661A10
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x100], 0x2
        call dword ptr [mem_00924FF4]
    loc_57bae6:
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x100], 0xffffffff
        call dword ptr [mem_009250CC]
        pop ebp
    loc_57bafc:
        mov ecx, dword ptr [esp + 0xf4]
        pop edi
        pop ebx
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xf4
        ret 0x4
    }
}
