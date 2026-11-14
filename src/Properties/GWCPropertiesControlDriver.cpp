// Decompiled translation unit: src/Properties/GWCPropertiesControlDriver.cpp

// [0x0041D370] Properties::GWCPropertiesControlDriver::vfunc_1 (20 bytes)
extern "C" void __fastcall ext_006AA890(void* self);

extern "C" void __fastcall fn_0041D370(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x0c);
    ext_006AA890(child);
    *(int*)(p + 0x10) = 0;
}

// [0x0041CA70] Properties::GWCPropertiesControlDriver::vfunc_8 (21 bytes)
extern "C" void ext_006AD180();

// Ignores ecx-this; takes one stack arg (a1 at [esp+4]). If a1 is null, return 0;
// otherwise replace ecx with a1 and tail-call 0x006AD180 (ret 4 after it).
extern "C" __declspec(naked) void __fastcall fn_0041CA70(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        jne has_arg
        xor eax, eax
        ret 4
    has_arg:
        call ext_006AD180
        ret 4
    }
}

// [0x0041D390] Properties::GWCPropertiesControlDriver::vfunc_2 (52 bytes)
extern "C" void __fastcall ext_006A95C0(void* self);
extern "C" void* __fastcall ext_006A7BB0(void* self);
extern "C" void* __fastcall ext_006ACFB0(void* self);

extern "C" void __fastcall fn_0041D390(void* self) {
    unsigned char* p = (unsigned char*)self;
    ext_006A95C0(*(void**)(p + 0x0c));
    if (ext_006A7BB0(*(void**)(p + 0x0c)) != 0) {
        void* r = ext_006ACFB0(ext_006A7BB0(*(void**)(p + 0x0c)));
        *(void**)(p + 0x18) = r;
    } else {
        *(int*)(p + 0x18) = 0;
    }
}

// [0x0041DED0] Properties::GWCPropertiesControlDriver::vfunc_5 (60 bytes)
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041DED0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip1
        call ebp
    L_skip1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_skip2
        call ebp
    L_skip2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0041D610] Properties::GWCPropertiesControlDriver::vfunc_7 (414 bytes)
extern "C" void ext_006B4440();
extern "C" void ext_006A6E9E();
extern "C" void ext_006AD180();
extern "C" void ext_006AD970();
extern "C" void ext_0041CEB0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00991074;
extern "C" int mem_00991070;
extern "C" int mem_009242F0;
extern "C" int mem_00991078;
extern "C" int mem_00991080;

extern "C" __declspec(naked) void __fastcall fn_0041D610(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x877622
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        mov esi, dword ptr [esp + 0x4c]
        push edi
        mov ecx, esi
        call ext_006B4440
        test eax, eax
        jne L_nonzero
        push eax
        push 0xa2f0ac
        push 0xa2f08c
        push eax
        push esi
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_end
        mov ecx, dword ptr [esp + 0x54]
        lea eax, [esp + 0x8]
        push eax
        call ext_0041CEB0
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [edi + 0x30]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_nonzero:
        mov ecx, esi
        call ext_006AD180
        mov ecx, esi
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD970
        cmp eax, dword ptr [mem_00991074]
        jne L_check2
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov byte ptr [edi + 0x58], al
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check2:
        cmp eax, dword ptr [mem_00991070]
        jne L_check3
        mov ecx, esi
        call ext_006B4440
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x58]
        mov esi, eax
        call ext_0041CEB0
        mov ecx, eax
        mov dword ptr [esp + 0x48], 1
        call dword ptr [mem_00924FF0]
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check3:
        cmp eax, dword ptr [mem_00991078]
        jne L_check4
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        mov dword ptr [edi + 0x58], eax
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check4:
        cmp eax, dword ptr [mem_00991080]
        jne L_end
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp qword ptr [edi + 0x58]
    L_end:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x44
        ret 8
    }
}

// [0x0041D3D0] Properties::GWCPropertiesControlDriver::vfunc_3 (52 bytes)
extern "C" void ext_006A7BC0();
extern "C" void ext_006A89B0();
extern "C" void ext_006A93A0();
extern "C" void ext_006AC2E0();

extern "C" __declspec(naked) void __fastcall fn_0041D3D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0xc]
        push eax
        mov byte ptr [esi + 0x2c], 0
        call ext_006A89B0
        test eax, eax
        je L_skip
        mov ecx, dword ptr [esi + 0xc]
        push eax
        call ext_006A7BC0
    L_skip:
        mov ecx, dword ptr [esi + 0xc]
        call ext_006AC2E0
        mov ecx, dword ptr [esi + 0xc]
        push 1
        call ext_006A93A0
        pop esi
        ret
    }
}

// [0x0041E400] Properties::GWCPropertiesControlDriver::vfunc_4 (178 bytes)
extern "C" void ext_0041E160();
extern "C" void ext_00598FF0();
extern "C" void ext_006A63BE();
extern "C" void ext_006AEC60();
extern "C" void ext_006AEC90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041E400(void* self, int edx_unused, int arg0, int arg1) {
    __asm {
        sub esp, 0x8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0xc]
        test eax, eax
        mov dword ptr [esp + 0x8], edi
        je loc_41e4ab
        mov eax, dword ptr [eax + 0x19c]
        cmp eax, dword ptr [esp + 0x14]
        jne loc_41e4ab
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        mov ebx, dword ptr [ecx]
        push ebp
loc_41e431:
        cmp ebx, dword ptr [esi + 0x4]
        je loc_41e4a8
        mov ebp, dword ptr [ebx + 0x44]
        call ext_006AEC60
        push eax
        mov ecx, ebp
        call ext_006A63BE
        test eax, eax
        je loc_41e495
        mov edx, dword ptr [ebx + 0x1c]
        lea eax, [esp + 0x20]
        lea esi, [edi + 0x1c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], edx
        call ext_00598FF0
        mov ecx, ebp
        mov edi, eax
        call ext_006AEC90
        neg al
        sbb eax, eax
        neg eax
        add eax, 1
        test edi, edi
        mov dword ptr [esp + 0x10], eax
        je loc_41e47e
        mov dword ptr [edi], eax
        jmp loc_41e491
loc_41e47e:
        push 1
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call ext_0041E160
loc_41e491:
        mov esi, dword ptr [esp + 0x1c]
loc_41e495:
        cmp ebx, dword ptr [esi + 0x4]
        jne loc_41e4a0
        call dword ptr [mem_00925134]
loc_41e4a0:
        mov ebx, dword ptr [ebx]
        mov edi, dword ptr [esp + 0x14]
        jmp loc_41e431
loc_41e4a8:
        pop ebp
        pop esi
        pop ebx
loc_41e4ab:
        pop edi
        add esp, 0x8
        ret 0x8
    }
}
