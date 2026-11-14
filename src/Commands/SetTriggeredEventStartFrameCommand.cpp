// Decompiled translation unit: src/Commands/SetTriggeredEventStartFrameCommand.cpp

// [0x0048F820] Commands::SetTriggeredEventStartFrameCommand::vfunc_0 (69 bytes)
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_0048F820(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x20);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x20) = 0;
    *reinterpret_cast<int*>(p + 0x24) = 0;
    *reinterpret_cast<int*>(p + 0x28) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00665810)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x0048EC40] Commands::SetTriggeredEventStartFrameCommand::vfunc_2 (225 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048EC40(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        lea ebp, [eax + 1C8h]
        push ebp
        add eax, 0Ch
        push 0
        push 1000h
        mov ecx, eax
        mov dword ptr [esp + 1Ch], eax
        call ext_00528BF0
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 18h]
        mov eax, dword ptr [eax + 114h]
        push edx
        call eax
        mov edi, dword ptr [esi + 20h]
        add esi, 1Ch
    L_loop:
        cmp edi, dword ptr [esi + 8]
        jbe short L_chk1
        call dword ptr [mem_00925134]
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_chk1:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe short L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je short L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebx
        je short L_done
        cmp edi, dword ptr [esi + 8]
        jb short L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        cmp edi, dword ptr [esi + 8]
        mov ebx, dword ptr [edi]
        jb short L_chk5
        call dword ptr [mem_00925134]
    L_chk5:
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 124h]
        lea eax, [edi + 4]
        push eax
        mov ecx, ebx
        call edx
        cmp edi, dword ptr [esi + 8]
        jb short L_chk6
        call dword ptr [mem_00925134]
    L_chk6:
        add edi, 0Ch
        jmp short L_chk1
    L_done:
        mov ecx, dword ptr [esp + 10h]
        push ebp
        push 1
        push 1000h
        call ext_00528BF0
        call ext_00468180
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0B4h]
        call edx
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je short L_ret
        lea ecx, [eax + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        add esp, 4
        jmp edx
    L_ret:
        pop ecx
        ret
    }
}

extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

// [0x0048E920] Commands::SetTriggeredEventStartFrameCommand::vfunc_3 (163 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E920(void* self, int edx_unused, void* sret) {
    __asm {
        push -1
        push 0x88533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x14]
        push eax
        lea ecx, [esp + 0xc]
        push 0x93e6c4
        push ecx
        mov dword ptr [esp + 0x9c], 1
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov esi, dword ptr [esp + 0x98]
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 4
    }
}

// [0x0048F380] Commands::SetTriggeredEventStartFrameCommand::vfunc_1 (172 bytes)
extern "C" void ext_0048EF20();
extern "C" void ext_0047D870();

extern "C" __declspec(naked) void __fastcall fn_0048F380(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 24h]
        cmp dword ptr [edi + 20h], ebx
        lea esi, [edi + 1Ch]
        jbe short L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe short L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        call ext_0048EF20
        mov ecx, dword ptr [edi + 2Ch]
        push esi
        call ext_0047D870
        call ext_00594000
        lea esi, [eax + 1C8h]
        push esi
        lea ebx, [eax + 0Ch]
        push 0
        push 1000h
        mov ecx, ebx
        call ext_00528BF0
        mov ecx, dword ptr [edi + 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edi + 14h]
        mov edx, dword ptr [edx + 114h]
        push eax
        call edx
        push esi
        push 1
        push 1000h
        mov ecx, ebx
        call ext_00528BF0
        call ext_00468180
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0B4h]
        call edx
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je short L_ret
        lea ecx, [eax + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        add esp, 8
        jmp edx
    L_ret:
        add esp, 8
        ret
    }
}
