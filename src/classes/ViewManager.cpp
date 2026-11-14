// Decompiled translation unit: src/classes/ViewManager.cpp

// [0x004B0850] ViewManager::vfunc_6 (35 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from the C string pointer held in
// mem_00A9F1BC via the imported basic_string(const char*) ctor, then returns the buffer in eax.
extern "C" int mem_00A9F1BC;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004B0850(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1BC]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004B08D0] ViewManager::vfunc_3 (86 bytes)
extern "C" void ext_004B08A0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F3E8;
extern "C" int mem_00AE0CAC;

extern "C" __declspec(naked) void* __fastcall fn_004B08D0(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [mem_00A9F3E8]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        mov ebp, eax
        xor esi, esi
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loop_start:
        mov eax, dword ptr [mem_00AE0CAC + esi*4]
        push eax
        mov ecx, ebp
        call ext_00640110
        push esi
        mov ecx, ebx
        mov edi, eax
        call ext_004B08A0
        push eax
        push edi
        call ext_00640A80
        add esi, 1
        add esp, 8
        cmp esi, 0xf
        jl loop_start
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x004B0C40] ViewManager::vfunc_1 (267 bytes)
extern "C" void ext_004275C0();
extern "C" void ext_004B0930();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_0092F10C;

extern "C" __declspec(naked) void __fastcall fn_004B0C40(void* self) {
    __asm {
        push    -1
        push    0x008B56F9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        mov     eax, dword ptr [mem_00A9F3E8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    1
        push    0
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x48]
        push    eax
        mov     byte ptr [esp + 0x1c], 1
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_4b0c99
        cmp     eax, 0xb53b30
        je      loc_4b0c99
        cmp     eax, 0xb53ab0
        je      loc_4b0c99
        cmp     eax, 0xb53a70
        je      loc_4b0c99
        cmp     eax, 0xb53af0
        jne     loc_4b0ca0
    loc_4b0c99:
        mov     ebx, 0xb53b30
        jmp     loc_4b0ca2
    loc_4b0ca0:
        mov     ebx, eax
    loc_4b0ca2:
        mov     edi, dword ptr [mem_00924FC0]
        xor     esi, esi
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_4b0cb0:
        mov     eax, dword ptr [mem_00AE0CAC + esi*4]
        push    eax
        mov     ecx, ebx
        call    ext_0063EFE0
        cmp     eax, 0xb53a34
        je      loc_4b0d1d
        cmp     eax, 0xb53b30
        je      loc_4b0d1d
        cmp     eax, 0xb53ab0
        je      loc_4b0d1d
        cmp     eax, 0xb53a70
        je      loc_4b0d1d
        cmp     eax, 0xb53af0
        je      loc_4b0d1d
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x44], eax
        call    ext_004275C0
        push    offset mem_0092F10C
        push    eax
        mov     dword ptr [esp + 0x40], 0
        call    edi
        add     esp, 8
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x10], al
        mov     dword ptr [esp + 0x38], -1
        call    dword ptr [mem_00924FF4]
    loc_4b0d1d:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    esi
        mov     ecx, ebp
        call    ext_004B0930
        add     esi, 1
        cmp     esi, 0xf
        jl      loc_4b0cb0
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     4
    }
}
