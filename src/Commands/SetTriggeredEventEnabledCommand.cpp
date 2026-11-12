// Decompiled translation unit: src/Commands/SetTriggeredEventEnabledCommand.cpp

extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

// [0x0048F7D0] Commands::SetTriggeredEventEnabledCommand::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_0048F7D0(void* self, int edx_unused, unsigned int flags) {
    char* s = (char*)self;
    void* p = *(void**)(s + 0x1c);
    if (p != 0) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
    *(void**)(s + 0x1c) = 0;
    *(int*)(s + 0x20) = 0;
    *(int*)(s + 0x24) = 0;
    ((void (__fastcall*)(void*))ext_00665810)(self);
    if (flags & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}

// [0x0048EB50] Commands::SetTriggeredEventEnabledCommand::vfunc_2 (226 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0048EB50(void* self) {
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
        movzx edx, byte ptr [esi + 15h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 110h]
        push edx
        call eax
        mov edi, dword ptr [esi + 1Ch]
        add esi, 18h
        cmp edi, dword ptr [esi + 8]
        jbe short L_chk1
        call dword ptr [mem_00925134]
        jmp short L_chk1
        _emit 0x8D
        _emit 0x49
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
        movzx eax, byte ptr [edi + 4]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 110h]
        push eax
        mov ecx, ebx
        call edx
        cmp edi, dword ptr [esi + 8]
        jb short L_chk6
        call dword ptr [mem_00925134]
    L_chk6:
        add edi, 8
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
