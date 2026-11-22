// Decompiled translation unit: src/MultiTrackView/CompositeEventTrack.cpp

// [0x004104E0] MultiTrackView::CompositeEventTrack::vfunc_2 (47 bytes)
extern "C" void* __stdcall ext_00594000(void* arg);
extern "C" void* __fastcall ext_00597630(void* self);

extern "C" __declspec(naked) int __fastcall fn_004104E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00597630
        cmp byte ptr [eax + 0x4e2], 0
        je fail
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        test al, al
        jne fail
        mov eax, 1
        ret
fail:
        xor eax, eax
        ret
    }
}

// [0x004104A0] MultiTrackView::CompositeEventTrack::vfunc_1 (52 bytes)
extern "C" void ext_0052ADA0();
extern "C" void ext_0059DC50();
extern "C" int mem_00AED9D0;

extern "C" __declspec(naked) int __fastcall fn_004104A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [mem_00AED9D0]
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00597630
        test esi, esi
        je fail
        test eax, eax
        je fail
        mov ecx, eax
        call ext_0059DC50
        push eax
        mov ecx, esi
        call ext_0052ADA0
        pop esi
        ret
fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00413020] MultiTrackView::CompositeEventTrack::vfunc_4 (524 bytes)
extern "C" void ext_00412F80();
extern "C" int mem_00925640;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00413020(void* self, int edx_unused, void* arg1, void* arg2) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x40]
        mov eax, dword ptr [edi + 0x4]
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x4c]
        lea edx, [ecx + eax - 0x1]
        mov ecx, dword ptr [edi + 0x8]
        push edx
        mov edx, dword ptr [edi]
        push ecx
        push eax
        push edx
        lea eax, [ebx + 0x3c]
        push eax
        mov dword ptr [esp + 0x24], ebx
        call dword ptr [mem_00925640]
        cmp byte ptr [ebx + 0x37], 0x0
        mov ebp, dword ptr [edi]
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        mov esi, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x34], edx
        jne L_4130db
        lea ebp, [ebx + 0x4]
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        jbe L_41307c
        call dword ptr [mem_00925134]
    L_41307c:
        mov eax, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], eax
        mov dword ptr [esp + 0x40], eax
        jbe L_413090
        call dword ptr [mem_00925134]
        mov edi, edi
    L_413090:
        cmp ebp, ebp
        je L_41309a
        call dword ptr [mem_00925134]
    L_41309a:
        cmp ebx, dword ptr [esp + 0x40]
        je L_4130ff
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_4130ab
        call dword ptr [mem_00925134]
    L_4130ab:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x28]
        mov dword ptr [eax + 0x30], edx
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [eax + 0x34], esi
        add ecx, esi
        mov dword ptr [eax + 0x38], edx
        lea edx, [ecx - 0x1]
        mov dword ptr [eax + 0x3c], edx
        cmp ebx, dword ptr [ebp + 0x8]
        mov esi, ecx
        jb L_4130d6
        call dword ptr [mem_00925134]
    L_4130d6:
        add ebx, 0x4
        jmp L_413090
    L_4130db:
        mov ecx, ebx
        call ext_00412F80
        test eax, eax
        je L_413103
        mov ecx, dword ptr [eax + 0x28]
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [eax + 0x30], ebp
        mov dword ptr [eax + 0x34], esi
        lea ecx, [ecx + esi - 0x1]
        mov dword ptr [eax + 0x38], edx
        mov dword ptr [eax + 0x3c], ecx
        jmp L_413103
    L_4130ff:
        mov ebx, dword ptr [esp + 0x10]
    L_413103:
        mov eax, dword ptr [edi]
        mov ebp, dword ptr [ebx + 0x8]
        cmp ebp, dword ptr [ebx + 0xc]
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0xc]
        lea esi, [ebx + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x14], eax
        jbe L_413133
        call dword ptr [mem_00925134]
    L_413133:
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x40], eax
        jbe L_413145
        call dword ptr [mem_00925134]
    L_413145:
        cmp esi, esi
        je L_41314f
        call dword ptr [mem_00925134]
    L_41314f:
        cmp ebp, dword ptr [esp + 0x40]
        je L_41319b
        cmp ebp, dword ptr [esi + 0x8]
        jb L_413160
        call dword ptr [mem_00925134]
    L_413160:
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        mov ecx, ebx
        call eax
        mov ecx, dword ptr [esp + 0x10]
        cmp byte ptr [ecx + 0x37], 0x0
        jne L_413187
        mov edx, dword ptr [ebx + 0x28]
        add dword ptr [esp + 0x1c], edx
    L_413187:
        cmp ebp, dword ptr [esi + 0x8]
        jb L_413192
        call dword ptr [mem_00925134]
    L_413192:
        mov ebx, dword ptr [esp + 0x10]
        add ebp, 0x4
        jmp L_413145
    L_41319b:
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x14]
        push edi
        push ecx
        mov ecx, ebx
        call edx
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], eax
        jbe L_4131c0
        call dword ptr [mem_00925134]
    L_4131c0:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x40], edi
        jbe L_4131d2
        call dword ptr [mem_00925134]
    L_4131d2:
        cmp esi, esi
        je L_4131dc
        call dword ptr [mem_00925134]
    L_4131dc:
        cmp ebp, edi
        je L_413222
        cmp ebp, dword ptr [esi + 0x8]
        jb L_4131eb
        call dword ptr [mem_00925134]
    L_4131eb:
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        mov ecx, edi
        call edx
        cmp byte ptr [ebx + 0x37], 0x0
        jne L_41320e
        mov eax, dword ptr [edi + 0x28]
        add dword ptr [esp + 0x1c], eax
    L_41320e:
        cmp ebp, dword ptr [esi + 0x8]
        jb L_413219
        call dword ptr [mem_00925134]
    L_413219:
        mov edi, dword ptr [esp + 0x40]
        add ebp, 0x4
        jmp L_4131d2
    L_413222:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x8
    }
}

extern "C" void ext_0043CEB0();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_004686A0();

// [0x00410460] MultiTrackView::CompositeEventTrack::vfunc_11 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00410460(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_00468180
        mov ecx, dword ptr [edi + 0x30]
        mov esi, eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_0043CEB0
        push eax
        mov ecx, esi
        call ext_004686A0
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        pop edi
        pop esi
        ret 0x10
    }
}

extern "C" void ext_004407A0();
extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" void ext_0045E930();
extern "C" void ext_0048F870();
extern "C" void ext_00665DC0();
extern "C" void ext_00666570();
extern "C" void ext_006A5C62();
extern "C" int mem_008750A0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_0092BE1C;

// [0x00410B50] MultiTrackView::CompositeEventTrack::vfunc_8 (439 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00410B50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push offset mem_008750A0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push ebx
        push ebp
        xor ebx, ebx
        push edi
        xor edi, edi
        mov dword ptr [esp + 0xc], ebx
        cmp byte ptr [esp + 0x50], bl
        mov dword ptr [esp + 0x10], ecx
        jne L_00410CF1
        mov ebp, dword ptr [esp + 0x4c]
        mov eax, dword ptr [ebp + 0x4]
        cmp eax, edi
        je L_00410CF1
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        sar ecx, 2
        je L_00410CF1
        push esi
        call ext_00468180
        push 0x48
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x54], esi
        cmp esi, edi
        mov dword ptr [esp + 0x48], edi
        je L_00410BEC
        push offset mem_0092BE1C
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        push edi
        lea edx, [esp + 0x28]
        mov ebx, 1
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x50], 1
        mov dword ptr [esp + 0x18], ebx
        call ext_00665DC0
        mov dword ptr [esp + 0x54], eax
        jmp L_00410BF0
    L_00410BEC:
        mov dword ptr [esp + 0x54], edi
    L_00410BF0:
        test bl, 1
        mov dword ptr [esp + 0x48], -1
        je L_00410C07
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FF4]
    L_00410C07:
        mov edi, dword ptr [ebp + 4]
        cmp edi, dword ptr [ebp + 8]
        mov ebx, dword ptr [mem_00925134]
        jbe L_00410C17
        call ebx
    L_00410C17:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        mov dword ptr [esp + 0x20], edi
        jbe L_00410C25
        call ebx
    L_00410C25:
        cmp edi, esi
        je L_00410CD8
        cmp edi, dword ptr [ebp + 8]
        jb L_00410C34
        call ebx
    L_00410C34:
        mov esi, dword ptr [edi]
        mov ecx, esi
        call ext_00441020
        mov ecx, esi
        mov ebx, eax
        call ext_00441040
        mov ecx, esi
        mov ebp, eax
        call ext_004407A0
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x50]
        push esi
        call ext_0045E930
        mov esi, eax
        test esi, esi
        je L_00410CB7
        push 0x50
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 0x18], edi
        test edi, edi
        mov dword ptr [esp + 0x48], 3
        je L_00410C9F
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push ebp
        push ebx
        push esi
        mov ecx, edi
        call ext_0048F870
        jmp L_00410CA1
    L_00410C9F:
        xor eax, eax
    L_00410CA1:
        mov ecx, dword ptr [esp + 0x54]
        push eax
        mov dword ptr [esp + 0x4c], -1
        call ext_00666570
        mov edi, dword ptr [esp + 0x20]
    L_00410CB7:
        mov edx, dword ptr [esp + 0x50]
        cmp edi, dword ptr [edx + 8]
        jb L_00410CC6
        call dword ptr [mem_00925134]
    L_00410CC6:
        mov ebx, dword ptr [mem_00925134]
        mov ebp, dword ptr [esp + 0x50]
        add edi, 4
        jmp L_00410C17
    L_00410CD8:
        mov eax, dword ptr [esp + 0x54]
        pop esi
        pop edi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 8
    L_00410CF1:
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 8
    }
}

// [0x00412B20] MultiTrackView::CompositeEventTrack::vfunc_5 (227 bytes)
extern "C" void ext_00410DD0();
extern "C" void ext_00412720();
extern "C" void ext_0041A4F0();
extern "C" void ext_0041AB80();

extern "C" __declspec(naked) void __fastcall fn_00412B20(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        call ext_00594000
        mov ebx, eax
        mov eax, dword ptr [esi + 0x14]
        push eax
        mov ecx, ebx
        call ext_00597630
        mov ebp, eax
        test ebp, ebp
        je done
        mov ecx, dword ptr [esi + 0x30]
        push edi
        add ecx, 0x1b4
        call ext_0041A4F0
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        push 0x0
        push 0x0
        push ecx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov edx, dword ptr [esp + 0x18]
        push 0x0
        push 0x2
        push edx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov eax, dword ptr [esp + 0x18]
        push 0x0
        push 0x4
        push eax
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov ecx, dword ptr [esp + 0x18]
        push 0x0
        push 0x6
        push ecx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov edx, dword ptr [esp + 0x18]
        push 0x1
        push 0x0
        push edx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov eax, dword ptr [esp + 0x18]
        push 0x1
        push 0x2
        push eax
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov ecx, dword ptr [esp + 0x18]
        push 0x1
        push 0x4
        push ecx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00412720
        mov ecx, dword ptr [esi + 0x30]
        push 0x453c3c
        push edi
        add ecx, 0x1b4
        call ext_0041AB80
        mov edx, dword ptr [esp + 0x18]
        push edx
        push ebp
        push ebx
        push edi
        mov ecx, esi
        call ext_00410DD0
        pop edi
    done:
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

// [0x004105F0] MultiTrackView::CompositeEventTrack::vfunc_6 (1283 bytes)
extern "C" void ext_0040BF00();
extern "C" void ext_0040BF20();
extern "C" void ext_00410370();
extern "C" void ext_004313A0();
extern "C" void ext_0043C930();
extern "C" void ext_004409C0();
extern "C" void ext_004409D0();
extern "C" void ext_004409E0();
extern "C" void ext_004410C0();
extern "C" void ext_00442430();
extern "C" void ext_004424E0();
extern "C" void ext_0045E930();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_004686A0();
extern "C" void ext_00468D60();
extern "C" void ext_00468DF0();
extern "C" void ext_00468E80();
extern "C" void ext_004805E0();
extern "C" void ext_00486AF0();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A6166();
extern "C" void ext_006A616C();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925630;
extern "C" int mem_00925638;
extern "C" int mem_00925634;
extern "C" int mem_00ACDB40;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_004105F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x875063
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3f8
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x414]
        xor ebp, ebp
        cmp edi, ebp
        mov ebx, ecx
        mov dword ptr [esp + 0x18], ebx
        je L_ad9
        mov ecx, dword ptr [ebx + 0x50]
        push esi
        push edi
        call ext_0045E930
        mov esi, eax
        mov eax, dword ptr [ebx + 0x30]
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [esp + 0x41c]
        push ecx
        push edx
        call dword ptr [mem_00925630]
        mov dword ptr [esp + 0x14], 0x92bd7c
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x410], ebp
        call dword ptr [mem_00925638]
        push eax
        lea ecx, [esp + 0x18]
        call ext_006A616C
        call ext_00468180
        mov ebx, eax
        mov eax, dword ptr [edi + 0x8]
        mov ecx, edi
        mov dword ptr [esp + 0x20], eax
        call ext_004409C0
        test al, al
        je L_691
        mov ecx, dword ptr [esp + 0x18]
        push 0x92be0c
        push 0x6f
        push ebp
        push ecx
        jmp L_69e
L_691:
        mov edx, dword ptr [esp + 0x18]
        push 0x92bdfc
        push 0x6f
        push ebp
        push edx
L_69e:
        mov ebp, dword ptr [mem_00925634]
        call ebp
        mov ecx, edi
        call ext_004410C0
        cmp eax, 0x1
        jle L_6e8
        mov ecx, edi
        call ext_00442430
        test al, al
        je L_6cd
        mov eax, dword ptr [esp + 0x18]
        push 0x92bde8
        push 0x69
        push 0
        push eax
        call ebp
L_6cd:
        mov ecx, edi
        call ext_004424E0
        test al, al
        je L_6e8
        mov ecx, dword ptr [esp + 0x18]
        push 0x92bdd0
        push 0x6a
        push 0
        push ecx
        call ebp
L_6e8:
        cmp dword ptr [esp + 0x20], 0x4
        jne L_71f
        mov edx, dword ptr [esp + 0x18]
        push 0
        push 0
        push 0x800
        push edx
        call ebp
        mov eax, dword ptr [esp + 0x18]
        push 0x92bdc0
        push 0x6d
        push 0
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x18]
        push 0x92bdb0
        push 0x6c
        push 0
        push ecx
        call ebp
L_71f:
        mov edx, dword ptr [esp + 0x18]
        push 0
        push 0
        push 0x800
        push edx
        call ebp
        mov eax, dword ptr [esp + 0x18]
        push 0x92bd98
        push 0x6e
        push 0
        push eax
        call ebp
        mov eax, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x41c]
        push ecx
        mov ecx, dword ptr [eax + 0x30]
        lea edx, [esp + 0x18]
        push edx
        call ext_0043C930
        add eax, -0x65
        cmp eax, 0xa
        ja L_abc
        jmp dword ptr [4*eax + 0x410af4]
L_76b:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_004313A0
        jmp L_abc
L_77b:
        mov esi, dword ptr [esi + 0x15c]
        push esi
        mov ecx, ebx
        call ext_004686A0
        jmp L_abc
L_78e:
        mov ecx, ebx
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x9c]
        call eax
        mov ecx, edi
        mov ebp, eax
        call ext_00410370
        test al, al
        je L_7d2
        mov eax, dword ptr [esi + 0x160]
        sub eax, dword ptr [esi + 0x15c]
        mov ecx, dword ptr [esi + 0x164]
        push ecx
        add eax, ebp
        push eax
        push ebp
        push esi
        mov ecx, ebx
        call ext_00468E80
        jmp L_abc
L_7d2:
        push ebp
        push esi
        mov ecx, ebx
        call ext_00468D60
        jmp L_abc
L_7e0:
        mov ecx, edi
        call ext_004409D0
        jmp L_abc
L_7ec:
        mov ecx, edi
        call ext_004409E0
        jmp L_abc
L_7f8:
        test esi, esi
        je L_abc
        cmp byte ptr [esi + 0x17c], 0
        sete cl
        push ecx
        push esi
        mov ecx, ebx
        call ext_00468DF0
        jmp L_abc
L_818:
        push 0xad7a88
        lea edx, [esp + 0x28]
        push 0xb593ac
        push edx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push 0
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x418], 1
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        push 0
        mov ecx, 0xb59240
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        lea ecx, [esp + 0x94]
        call ext_006A5F68
        mov bl, 0x2
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0x410], bl
        call ext_006A5F62
        cmp eax, 0x1
        jne L_8fa
        lea ecx, [esp + 0x13]
        call ext_0040BF00
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0x414], 0x3
        call ext_006A5F5C
        push 0
        push 0xa2e93c
        push 0xa2e914
        push 0
        push esi
        mov byte ptr [esp + 0x424], 0x4
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_8e0
        mov esi, dword ptr [eax + 0x19c]
        lea edi, [eax + 0x19c]
        push 0x1
        lea ecx, [esp + 0x20]
        add esi, 0x24
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
L_8e0:
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x13]
        mov byte ptr [esp + 0x410], bl
        call ext_0040BF20
L_8fa:
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0x410], 0x1
        call ext_006A5F56
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x410], 0x0
        call dword ptr [mem_00924FF4]
        jmp L_abc
L_922:
        push 0xad7a88
        lea eax, [esp + 0x44]
        push 0xb593ac
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push 0
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x418], 0x5
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0
        mov ecx, 0xb59240
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1
        lea ecx, [esp + 0x25c]
        call ext_006A5F68
        lea ecx, [esp + 0x240]
        mov byte ptr [esp + 0x410], 0x6
        call ext_006A5F62
        cmp eax, 0x1
        jne L_a81
        lea ecx, [esp + 0x13]
        call ext_0040BF00
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x244]
        mov byte ptr [esp + 0x414], 0x7
        call ext_006A5F5C
        push 0
        push 0xa2e93c
        push 0xa2e914
        push 0
        mov bl, 0x8
        push esi
        mov byte ptr [esp + 0x424], bl
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_a66
        call ext_00468180
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        call eax
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd4]
        call eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x60]
        call dword ptr [mem_00924FE4]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x414], 0x9
        call ext_00486AF0
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x410], bl
        call dword ptr [mem_00924FF4]
        call ext_00468180
        mov eax, dword ptr [eax + 0x14]
        mov eax, dword ptr [eax + 0x34]
        push esi
        mov ecx, eax
        call ext_004805E0
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xb4]
        call eax
L_a66:
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x13]
        mov byte ptr [esp + 0x410], 0x6
        call ext_0040BF20
L_a81:
        lea ecx, [esp + 0x240]
        mov byte ptr [esp + 0x410], 0x5
        call ext_006A5F56
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x410], 0x0
        call dword ptr [mem_00924FF4]
        jmp L_abc
L_aa9:
        mov ecx, ebx
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c4]
        call eax
L_abc:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x410], 0xffffffff
        mov dword ptr [esp + 0x14], 0x92bd7c
        call ext_006A6166
        pop esi
L_ad9:
        mov ecx, dword ptr [esp + 0x404]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x404
        ret 0xc
    }
}

// [0x00411A80] MultiTrackView::CompositeEventTrack::vfunc_7 (2947 bytes)
extern "C" void* __stdcall ext_00594000(void* arg);
extern "C" void* __fastcall ext_00597630(void* self);
extern "C" void ext_00404F00();
extern "C" void ext_00407870();
extern "C" void ext_00410390();
extern "C" void ext_00410520();
extern "C" void ext_00410540();
extern "C" void ext_00410D10();
extern "C" void ext_00411680();
extern "C" void ext_004118A0();
extern "C" void ext_00412CC0();
extern "C" void ext_00412D70();
extern "C" void ext_00412E60();
extern "C" void ext_00412EC0();
extern "C" void ext_00425E30();
extern "C" void ext_0042FE70();
extern "C" void ext_0042FE90();
extern "C" void ext_0043A580();
extern "C" void ext_0043C930();
extern "C" void ext_0043DE60();
extern "C" void ext_0043DEA0();
extern "C" void ext_0043DEE0();
extern "C" void ext_0043DFB0();
extern "C" void ext_004490B0();
extern "C" void ext_004490D0();
extern "C" void ext_00449270();
extern "C" void ext_004493C0();
extern "C" void ext_00468180();
extern "C" void ext_004684D0();
extern "C" void ext_00468550();
extern "C" void ext_00468660();
extern "C" void ext_00468F90();
extern "C" void ext_00469CC0();
extern "C" void ext_00469E30();
extern "C" void ext_00489320();
extern "C" void ext_00492A50();
extern "C" void ext_0049AD40();
extern "C" void ext_0059D740();
extern "C" void ext_005A6130();
extern "C" void ext_0065D120();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5E60();
extern "C" void ext_006A5FA4();
extern "C" void ext_006A6166();
extern "C" void ext_006A616C();
extern "C" void ext_006A6DE0();
extern "C" int mem_00925638;
extern "C" int mem_00924300;
extern "C" int mem_00925634;
extern "C" int mem_009242F0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924518;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;
extern "C" int mem_0092562C;
extern "C" int mem_00925630;
extern "C" int mem_00ACDB40;
extern "C" int mem_00993828;
extern "C" int mem_00925688;

// Switch jump table (originally at 0x00412604, after the function body). Entries are
// fn_00411A80 + (case VA - 0x00411A80), filled once at static-init time.
extern "C" {
void* fn_00411A80_jt[32];
}

extern "C" void __fastcall fn_00411A80(void* self, int edx_unused, int a1, int a2, int a3);

namespace {
struct Fn00411A80JtInit {
    Fn00411A80JtInit() {
        static const unsigned int off[32] = {
            0x5E3, 0x60C, 0x5B8, 0x643, 0x66C, 0x687, 0x6B8, 0x6D3,
            0x6F9, 0x71F, 0x765, 0x779, 0x7C2, 0x7D0, 0x7DE, 0x7EB,
            0x747, 0x756, 0x7F8, 0xB3F, 0x80A, 0x830, 0x858, 0x891,
            0x928, 0xB3F, 0x9C9, 0xA0D, 0xA50, 0xA78, 0x58C, 0x5A8
        };
        char* base = reinterpret_cast<char*>(&fn_00411A80);
        for (int i = 0; i < 32; ++i) {
            fn_00411A80_jt[i] = base + off[i];
        }
    }
};
Fn00411A80JtInit fn00411A80_jt_init;
}

extern "C" __declspec(naked) void __fastcall fn_00411A80(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x875161
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1b0
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x1c], esi
        call ext_00594000
        mov ecx, dword ptr [esi + 0x14]
        push ecx
        mov ecx, eax
        mov dword ptr [esp + 0x28], eax
        call ext_00597630
        lea edx, [ebp + 8]
        push edx
        mov ecx, esi
        mov ebx, eax
        call ext_00412EC0
        test eax, eax
        mov dword ptr [esp + 0x20], 0
        je L411AE3
        push eax
        mov ecx, esi
        call ext_00412D70
        mov dword ptr [esp + 0x20], eax
L411AE3:
        call ext_00594000
        lea ecx, [eax + 0xfc]
        call ext_0065D120
        xor eax, eax
        mov dword ptr [esp + 0x10], 0x92bd7c
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x1c4], eax
        call dword ptr [mem_00925638]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A616C
        call ext_00468180
        mov edi, dword ptr [esp + 0x1c]
        lea ecx, [edi + 0x1c]
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_00924300]
        mov esi, dword ptr [mem_00925634]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push -1
        push 2
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push ecx
        call esi
        mov edx, dword ptr [edi + 0x30]
        mov eax, dword ptr [edx + 0xfc]
        cmp dword ptr [ebp + 8], eax
        mov edi, dword ptr [ebp + 0x10]
        jg L411C7A
        mov eax, dword ptr [esp + 0x14]
        push 0x92c170
        push 0x75
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c160
        push 0x76
        push 0
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92c150
        push 0x6f
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x1c]
        call ext_00412CC0
        cmp eax, 1
        jle L411BC3
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c13c
        push 0x70
        push 0
        push ecx
        call esi
L411BC3:
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x1c]
        cmp byte ptr [eax + 0x37], 0
        je L411BED
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c12c
        push 0x71
        push 0
        push ecx
        jmp L411BFB
L411BED:
        mov edx, dword ptr [esp + 0x14]
        push 0x92c118
        push 0x72
        push 0
        push edx
L411BFB:
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92c100
        push 0x73
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c0e8
        push 0x74
        push 0
        push ecx
        call esi
        test ebx, ebx
        je L411FC4
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, ebx
        call eax
        test al, al
        jne L411FC4
        cmp byte ptr [ebx + 0x4e2], al
        push 0
        push 0
        push 0x800
        je L411C5D
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        call esi
        push 0x92c0d0
        push 0x84
        jmp L411FBB
L411C5D:
        mov eax, dword ptr [esp + 0x20]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c0b4
        push 0x83
        push 0
        push ecx
        jmp L411FC2
L411C7A:
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, ebx
        call eax
        test al, al
        jne L411C92
        mov ecx, ebx
        call ext_00410390
        test al, al
        je L411C9D
L411C92:
        mov ecx, ebx
        call ext_00410390
        test al, al
        je L411CAD
L411C9D:
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c098
        push 0x66
        push 0
        push ecx
        call esi
L411CAD:
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, ebx
        call eax
        test al, al
        jne L411CD5
        mov ecx, ebx
        call ext_00410390
        test al, al
        jne L411CD5
        mov ecx, dword ptr [esp + 0x14]
        push 0x92a9b8
        push 0x65
        push 0
        push ecx
        call esi
L411CD5:
        mov edx, dword ptr [esp + 0x14]
        push 0x92a9a0
        push 0x68
        push 0
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92a98c
        push 0x6d
        push 0
        push eax
        call esi
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, ebx
        call eax
        test al, al
        jne L411D0D
        mov ecx, ebx
        call ext_00410390
        test al, al
        je L411D18
L411D0D:
        mov ecx, ebx
        call ext_00410390
        test al, al
        je L411D28
L411D18:
        mov ecx, dword ptr [esp + 0x14]
        push 0x92a978
        push 0x6c
        push 0
        push ecx
        call esi
L411D28:
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92c080
        push 0x67
        push 0
        push eax
        call esi
        mov ecx, ebx
        call ext_005A6130
        test al, al
        je L411D63
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c060
        push 0x69
        push 0
        push ecx
        call esi
L411D63:
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92c048
        push 0x6a
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92c030
        push 0x6b
        push 0
        push ecx
        call esi
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x34]
        test ecx, ecx
        je L411DD1
        mov eax, dword ptr [eax + 0x38]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jle L411DD1
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92c01c
        push 0x6e
        push 0
        push eax
        call esi
L411DD1:
        mov ecx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x14]
        push 0x92c008
        push 0x79
        push 0
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92bff8
        push 0x7a
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92bfd0
        push 0x7b
        push 0
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x14]
        push 0x92bfac
        push 0x7c
        push 0
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92bf74
        push 0x7d
        push 0
        push eax
        call esi
        xor eax, eax
        mov dword ptr [esp + 0x40], eax
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x48], eax
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, ebx
        mov byte ptr [esp + 0x1c8], 1
        call ext_0059D740
        mov eax, dword ptr [esp + 0x40]
        test eax, eax
        je L411F8F
        mov edx, dword ptr [esp + 0x44]
        sub edx, eax
        sar edx, 2
        je L411F8F
        push 0x92bf5c
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x4c]
        push edi
        push eax
        mov byte ptr [esp + 0x1cc], 2
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov byte ptr [esp + 0x1c4], 3
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924518]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x1c4], 2
        call dword ptr [mem_00924FF4]
        push 0x92bf44
        lea ecx, [esp + 0x38]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x4c]
        push edi
        push ecx
        mov byte ptr [esp + 0x1cc], 4
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov byte ptr [esp + 0x1c4], 5
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924518]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x1c4], 4
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push edx
        call esi
        mov eax, dword ptr [esp + 0x14]
        push 0x92bf34
        push 0x7f
        push 0
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x14]
        push 0x92bf20
        push 0x82
        push 0
        push ecx
        call esi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push 0x81
        push 0
        push edx
        call esi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push 0x80
        push 0
        push eax
        call esi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esp + 0x40]
L411F8F:
        test eax, eax
        mov byte ptr [esp + 0x1c4], 0
        je L411FA4
        push eax
        call ext_006A5C5C
        add esp, 4
L411FA4:
        mov ecx, dword ptr [esp + 0x14]
        push 0
        push 0
        push 0x800
        push ecx
        call esi
        push 0x92bf14
        push 0x77
L411FBB:
        mov edx, dword ptr [esp + 0x1c]
        push 0
        push edx
L411FC2:
        call esi
L411FC4:
        mov eax, dword ptr [esp + 0x14]
        push 1
        push 0
        push eax
        call dword ptr [mem_0092562C]
        mov esi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x30]
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [ebp + 8]
        push ecx
        push edx
        call dword ptr [mem_00925630]
        lea eax, [ebp + 8]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esi + 0x30]
        call ext_0043C930
        add eax, -0x65
        cmp eax, 0x1f
        ja L4125BF
        jmp dword ptr [eax * 4 + fn_00411A80_jt]

L41200C:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_0042FE90
        mov ecx, dword ptr [mem_00ACDB40]
        push ebx
        call ext_0042FE70
        jmp L4125BF
L412028:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_0042FE90
        jmp L4125BF
L412038:
        test ebx, ebx
        je L412041
        add ebx, 4
        jmp L412043
L412041:
        xor ebx, ebx
L412043:
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        call ext_00468F90
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [mem_00ACDB40]
        push edx
        push edi
        call ext_0043A580
        jmp L4125BF
L412063:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe4]
        push 0
        push ecx
        lea ecx, [edi + 0x3c]
        push ecx
        push edi
        push 2
        push ebx
        mov ecx, eax
        call edx
        jmp L4125BF
L41208C:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        push 0
        push ecx
        lea ecx, [edi + 0x3c]
        push ecx
        push edi
        push 6
L4120A5:
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe4]
        push ebx
        mov ecx, eax
        call edx
        push eax
        mov ecx, esi
        call ext_00468F90
        mov esi, dword ptr [esp + 0x1c]
        jmp L4125BF
L4120C3:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe4]
        push 0
        push ecx
        lea ecx, [edi + 0x3c]
        push ecx
        push edi
        push 4
        push ebx
        mov ecx, eax
        call edx
        jmp L4125BF
L4120EC:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        push 0
        push ecx
        lea ecx, [edi + 0x3c]
        push ecx
        push edi
        push 7
        jmp L4120A5
L412107:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        push 0
        push 0
        push edi
        push edi
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0xe4]
        push ebx
        call eax
        push eax
        mov ecx, esi
        call ext_00468F90
        mov esi, dword ptr [esp + 0x1c]
        jmp L4125BF
L412138:
        mov esi, dword ptr [esp + 0x18]
        mov ecx, esi
        call ext_00468660
        push 0
        push 0
        lea ecx, [edi + 0xf]
        push ecx
        push edi
        push 9
        jmp L4120A5
L412153:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe4]
        push 0
        push ecx
        push edi
        push edi
        push 3
        push ebx
        mov ecx, eax
        call edx
        jmp L4125BF
L412179:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe4]
        push 0
        push ecx
        push edi
        push edi
        push 5
        push ebx
        mov ecx, eax
        call edx
        jmp L4125BF
L41219F:
        push 0
        push 0x104
        push 0x92bed8
        call ext_006A5E60
        cmp eax, 6
        jne L4125BF
        mov ecx, dword ptr [esp + 0x18]
        call ext_00469CC0
        jmp L4125BF
L4121C7:
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        call ext_004684D0
        jmp L4125BF
L4121D6:
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        call ext_00468550
        jmp L4125BF
L4121E5:
        mov eax, dword ptr [esp + 0x20]
        add eax, 1
        push eax
        mov ecx, esi
        call ext_00411680
        jmp L4125BF
L4121F9:
        mov edi, dword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        call ext_00412E60
        mov ecx, eax
        call ext_00410520
        test eax, eax
        je L41222A
        push 0
        push 0x104
        push 0x92be90
        call ext_006A5E60
        cmp eax, 6
        jne L4125BF
L41222A:
        mov ecx, dword ptr [esp + 0x18]
        push edi
        push ebx
        call ext_00469E30
        push edi
        mov ecx, esi
        call ext_004118A0
        jmp L4125BF
L412242:
        mov ecx, dword ptr [esi + 0x30]
        push esi
        call ext_0043DE60
        jmp L4125BF
L412250:
        mov ecx, dword ptr [esi + 0x30]
        push esi
        call ext_0043DEA0
        jmp L4125BF
L41225E:
        mov ecx, dword ptr [esi + 0x30]
        call ext_0043DEE0
        jmp L4125BF
L41226B:
        mov ecx, dword ptr [esi + 0x30]
        call ext_0043DFB0
        jmp L4125BF
L412278:
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x144]
        call eax
        jmp L4125BF
L41228A:
        test ebx, ebx
        je L412293
        add ebx, 4
        jmp L412295
L412293:
        xor ebx, ebx
L412295:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x188]
        push ebx
        call eax
        jmp L4125BF
L4122B0:
        test ebx, ebx
        je L4122B9
        add ebx, 4
        jmp L4122BB
L4122B9:
        xor ebx, ebx
L4122BB:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18c]
        push ebx
        call eax
        jmp L4125BF
L4122D8:
        test ebx, ebx
        je L4122E1
        lea esi, [ebx + 4]
        jmp L4122E3
L4122E1:
        xor esi, esi
L4122E3:
        mov edi, dword ptr [esp + 0x18]
        mov ecx, edi
        call ext_00468660
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18c]
        push esi
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        push edi
        call ext_00410540
        mov esi, dword ptr [esp + 0x1c]
        jmp L4125BF
L412311:
        mov ebx, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x24]
        add ebx, 0x238
        push ecx
        mov ecx, ebx
        call ext_00489320
        lea edx, [esp + 0x34]
        push edx
        mov ecx, ebx
        call ext_00410D10
        push eax
        lea ecx, [esp + 0x28]
        call ext_0049AD40
        test al, al
        je L4125BF
        mov esi, dword ptr [esp + 0x18]
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L412350:
        lea ecx, [esp + 0x24]
        call ext_00492A50
        mov eax, dword ptr [eax]
        test eax, eax
        je L412364
        lea edi, [eax + 4]
        jmp L412366
L412364:
        xor edi, edi
L412366:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18c]
        push edi
        call eax
        lea ecx, [esp + 0x24]
        call ext_00425E30
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, ebx
        call ext_00410D10
        push eax
        lea ecx, [esp + 0x28]
        call ext_0049AD40
        test al, al
        jne L412350
        mov esi, dword ptr [esp + 0x1c]
        jmp L4125BF
L4123A8:
        mov edi, dword ptr [esp + 0x24]
        add edi, 0x238
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x28], edi
        call ext_00489320
        lea eax, [esp + 0x3c]
        push eax
        mov ecx, edi
        call ext_00410D10
        push eax
        lea ecx, [esp + 0x30]
        call ext_0049AD40
        test al, al
        je L4125BF
        mov esi, dword ptr [esp + 0x18]
L4123E4:
        lea ecx, [esp + 0x2c]
        call ext_00492A50
        mov edi, dword ptr [eax]
        test edi, edi
        je L4123F8
        lea ebx, [edi + 4]
        jmp L4123FA
L4123F8:
        xor ebx, ebx
L4123FA:
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18c]
        push ebx
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        push esi
        call ext_00410540
        lea ecx, [esp + 0x2c]
        call ext_00425E30
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        call ext_00410D10
        push eax
        lea ecx, [esp + 0x30]
        call ext_0049AD40
        test al, al
        jne L4123E4
        mov esi, dword ptr [esp + 0x1c]
        jmp L4125BF
L412449:
        push 0
        push 0x104
        push 0x92be60
        call ext_006A5E60
        cmp eax, 6
        jne L4125BF
        test ebx, ebx
        je L41246C
        add ebx, 4
        jmp L41246E
L41246C:
        xor ebx, ebx
L41246E:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov edx, dword ptr [eax]
        push -1
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x190]
        push ebx
        call eax
        jmp L4125BF
L41248D:
        push 0
        push 0x104
        push 0x92be60
        call ext_006A5E60
        cmp eax, 6
        jne L4125BF
        test ebx, ebx
        je L4124B0
        add ebx, 4
        jmp L4124B2
L4124B0:
        xor ebx, ebx
L4124B2:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov edx, dword ptr [eax]
        push -1
        push edi
        mov ecx, eax
        mov eax, dword ptr [edx + 0x190]
        push ebx
        call eax
        jmp L4125BF
L4124D0:
        test ebx, ebx
        je L4124D9
        add ebx, 4
        jmp L4124DB
L4124D9:
        xor ebx, ebx
L4124DB:
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov edx, dword ptr [eax]
        push edi
        push edi
        mov ecx, eax
        mov eax, dword ptr [edx + 0x190]
        push ebx
        call eax
        jmp L4125BF
L4124F8:
        push 0
        push edi
        push 0
        lea ecx, [esp + 0x74]
        call ext_00449270
        mov byte ptr [esp + 0x1c4], 6
        call ext_00594000
        fld dword ptr [eax + 0x234]
        mov edx, dword ptr [ebx + 4]
        fstp dword ptr [esp + 0x2c]
        mov eax, dword ptr [edx + 0xe0]
        add ebx, 4
        mov ecx, ebx
        call eax
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        push ecx
        fmul dword ptr [esp + 0x30]
        fadd qword ptr [mem_00993828]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_00407870
        add esp, 4
        call ext_006A6DE0
        mov edi, eax
        push edi
        push 0
        lea ecx, [esp + 0x70]
        call ext_004490B0
        push edi
        push 0
        lea ecx, [esp + 0x70]
        call ext_004490D0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x1a8], 1
        call ext_006A5FA4
        cmp eax, 1
        jne L4125AE
        mov ecx, dword ptr [esp + 0x18]
        call ext_00468660
        mov ecx, dword ptr [esp + 0x1b0]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x190]
        push ecx
        mov ecx, dword ptr [esp + 0x1b0]
        push ecx
        push ebx
        mov ecx, eax
        call edx
L4125AE:
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x1c4], 0
        call ext_004493C0
L4125BF:
        mov eax, dword ptr [esi + 0x30]
        mov eax, dword ptr [eax + 0x20]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x1c4], -1
        mov dword ptr [esp + 0x10], 0x92bd7c
        call ext_006A6166
        mov ecx, dword ptr [esp + 0x1bc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}
