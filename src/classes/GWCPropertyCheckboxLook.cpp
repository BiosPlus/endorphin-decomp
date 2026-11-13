// Decompiled translation unit: src/classes/GWCPropertyCheckboxLook.cpp

// [0x006B32D0] GWCPropertyCheckboxLook::vfunc_2 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B32D0(void* self, int edx_unused, int* dst, int a2, int a3, const int* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [eax + 0x8], edx
        ret 16
    }
}

extern "C" void ext_006A5FF2();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A6DE0();
extern "C" int mem_0092563C;
extern "C" int mem_009324A8;
extern "C" int mem_00924070;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;

// [0x006B0060] GWCPropertyCheckboxLook::vfunc_1 (541 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B0060(void* self) {
    __asm {
        push -0x1
        push 0x8b76f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x2c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x54]
        mov esi, ecx
        push 0x47
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x20], edi
        call dword ptr [mem_0092563C]
        mov ebx, eax
        cdq
        sub eax, edx
        mov ebp, eax
        mov eax, dword ptr [esp + 0x5c]
        add eax, edi
        mov dword ptr [esp + 0x10], eax
        sar ebp, 1
        fild dword ptr [esp + 0x10]
        sub ebp, 0x3
        fmul qword ptr [mem_009324A8]
        call ext_006A6DE0
        mov ecx, eax
        mov eax, ebx
        cdq
        sub eax, edx
        sar eax, 1
        mov edi, eax
        neg edi
        sub edi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov eax, edi
        sub eax, dword ptr [esp + 0x1c]
        lea edx, [ebx + edi]
        add dword ptr [esp + 0x50], eax
        mov eax, dword ptr [ecx + 0x3c]
        push eax
        push 0x1
        push 0x0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x68], edx
        call ext_006A6148
        mov esi, dword ptr [esp + 0x4c]
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0x0
        call ext_006A610C
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x50]
        lea ecx, [edi + 0x1]
        push ecx
        lea edx, [eax + 0x1]
        mov dword ptr [esp + 0x20], ecx
        push edx
        lea ecx, [esp + 0x2c]
        lea eax, [eax + ebx - 0x2]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x58], eax
        call ext_006A6106
        mov ebx, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x10]
        add ebx, -0x2
        push ebx
        push edx
        mov ecx, esi
        call ext_006A6100
        mov eax, dword ptr [esp + 0x4c]
        push ebx
        push eax
        mov ecx, esi
        call ext_006A6100
        mov ebx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x4c]
        push ebx
        push ecx
        mov ecx, esi
        call ext_006A6100
        mov edx, dword ptr [esp + 0x10]
        push ebx
        push edx
        mov ecx, esi
        call ext_006A6100
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_00924070]
        mov ebx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x18]
        push eax
        call edx
        push 0x9910e4
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_0092449C]
        test eax, eax
        jne loc_6b0245
        mov eax, dword ptr [ebx + 0x4]
        mov eax, dword ptr [eax + 0x3c]
        push eax
        push 0x2
        push 0x0
        lea ecx, [esp + 0x30]
        call ext_006A6148
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x48], 0x2
        call ext_006A610C
        mov edx, dword ptr [esp + 0x5c]
        mov ecx, dword ptr [esp + 0x50]
        lea eax, [edx + edi]
        cdq
        sub eax, edx
        add ecx, 0x3
        sar eax, 1
        lea edx, [ecx + ebp]
        lea ebx, [eax + ebp]
        mov dword ptr [esp + 0x50], edx
        push eax
        lea edx, [ebp + ebp]
        mov edi, ebx
        push ecx
        sub edi, edx
        mov edx, dword ptr [esp + 0x58]
        lea eax, [esp + 0x3c]
        push eax
        mov ecx, esi
        add ebp, edx
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x50]
        push ebx
        push ecx
        mov ecx, esi
        call ext_006A6100
        push edi
        push ebp
        mov ecx, esi
        call ext_006A6100
        mov eax, dword ptr [esi + 0x4]
        lea edx, [esp + 0x14]
        push edx
        push eax
        call dword ptr [mem_00924070]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x44], 0x1
        mov dword ptr [esp + 0x24], 0x92a23c
        call ext_006A5FF2
    loc_6b0245:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x44], 0xffffffff
        mov dword ptr [esp + 0x2c], 0x92a23c
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x3c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x38
        ret 0x1c
    }
}
