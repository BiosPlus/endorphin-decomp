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
