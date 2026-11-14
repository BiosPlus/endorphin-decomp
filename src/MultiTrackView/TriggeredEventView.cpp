// Decompiled translation unit: src/MultiTrackView/TriggeredEventView.cpp

// [0x0045F5F0] MultiTrackView::TriggeredEventView::vfunc_0_off_248 (14 bytes)
extern "C" void ext_0045F150();

extern "C" void __fastcall fn_0045F5F0(char* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void* self, int edx_unused);
    Callee callee = (Callee)ext_0045F150;
    callee(self - 0x248, edx_unused);
}

// [0x004602B0] MultiTrackView::TriggeredEventView::vfunc_6_off_254 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004602B0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9381e8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0043CAB0] MultiTrackView::TriggeredEventView::vfunc_69 (66 bytes)
extern "C" void ext_0041C710();
extern "C" void ext_006A5DB2();
extern "C" __declspec(naked) void __fastcall fn_0043CAB0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, 0x2a3
        mov esi, ecx
        jne short L_43CAD6
        lea ecx, [esi + 0x64]
        call ext_0041C710
        test al, al
        je short L_43CAD6
        pop edi
        mov eax, 1
        pop esi
        ret 0x10
L_43CAD6:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_006A5DB2
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x0043CB00] MultiTrackView::TriggeredEventView::vfunc_66 (66 bytes)
extern "C" void ext_0041C6B0();
extern "C" void ext_006A5DA0();
extern "C" int __fastcall fn_0043CB00(char* self, int edx_unused, char* a1) {
    typedef char (__thiscall *Callee1)(void* self, unsigned int a, unsigned int b, unsigned int c);
    typedef int (__thiscall *Callee2)(void* self, void* a1);
    if (*(int*)(a1 + 0x4) == 0x100) {
        Callee1 c1 = (Callee1)ext_0041C6B0;
        char r = c1(self + 0x64, *(unsigned int*)(a1 + 0x8), *(unsigned short*)(a1 + 0xc), *(unsigned short*)(a1 + 0xe));
        if (r != 0) {
            return 1;
        }
    }
    Callee2 c2 = (Callee2)ext_006A5DA0;
    return c2(self, a1);
}

// [0x0045E470] MultiTrackView::TriggeredEventView::vfunc_80 (36 bytes)
extern "C" void ext_00460540();
extern "C" void ext_006A5E72();
extern "C" __declspec(naked) void __fastcall fn_0045E470(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2d0]
        push eax
        call ext_00460540
        mov ecx, dword ptr [esi + 0x2d0]
        push 0x5
        call ext_006A5E72
        pop esi
        ret 0x4
    }
}

// [0x0045D8B0] MultiTrackView::TriggeredEventView::vfunc_82 (31 bytes)
extern "C" void ext_0043DCF0();
extern "C" __declspec(naked) void __fastcall fn_0045D8B0(void* self, int edx_unused, void* out) {
    __asm {
        push -1
        call ext_0043DCF0
        mov ecx, eax
        mov ecx, dword ptr [ecx + 0x4c]
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x9
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], ecx
        ret 0x4
    }
}

// [0x0045DEB0] MultiTrackView::TriggeredEventView::vfunc_81 (242 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_00477F30();
extern "C" void ext_0043DD60();
extern "C" void ext_006A6DE0();
extern "C" int mem_00937FC0;
extern "C" int mem_00925688;
extern "C" __declspec(naked) void __fastcall fn_0045DEB0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ebx, dword ptr [eax + 0x1ec]
        mov dword ptr [esp + 0x1c], ebx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        mov edi, dword ptr [ecx + 0x1e4]
        mov dword ptr [esp + 0x18], edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_00477F30
        mov esi, eax
        mov dword ptr [esp + 0x14], esi
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xa0]
        call eax
        sub eax, 0x1
        mov dword ptr [esp + 0x10], eax
        cmp esi, eax
        lea eax, [esp + 0x10]
        jl short L_45DF24
        lea eax, [esp + 0x14]
L_45DF24:
        cmp edi, dword ptr [eax]
        jl short L_45DF2C
        lea eax, [esp + 0x18]
L_45DF2C:
        cmp ebx, dword ptr [eax]
        jl short L_45DF34
        lea eax, [esp + 0x1c]
L_45DF34:
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jne short L_45DF45
        mov eax, 0x12c
        jmp short L_45DF54
L_45DF45:
        fild dword ptr [esp + 0x10]
        fmul qword ptr [mem_00937FC0]
        call ext_006A6DE0
L_45DF54:
        mov dword ptr [esp + 0x10], eax
        cmp eax, 0x12c
        mov dword ptr [esp + 0x1c], 0x12c
        lea eax, [esp + 0x1c]
        jl short L_45DF6F
        lea eax, [esp + 0x10]
L_45DF6F:
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        sub esp, 0x10
        mov ecx, ebp
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        call ext_0043DD60
        mov edx, dword ptr [ebp + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x0045DFF0] MultiTrackView::TriggeredEventView::vfunc_1_off_254 (899 bytes)
extern "C" void ext_00427640();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F604;
extern "C" int mem_00A9FAE0;
extern "C" __declspec(naked) void __fastcall fn_0045DFF0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push 0x1
        push 0x0
        mov ebx, ecx
        push 0x937f78
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_45E02D
        cmp eax, 0xb53b30
        je short L_45E02D
        cmp eax, 0xb53ab0
        je short L_45E02D
        cmp eax, 0xb53a70
        je short L_45E02D
        cmp eax, 0xb53af0
        jne short L_45E034
L_45E02D:
        mov esi, 0xb53b30
        jmp short L_45E036
L_45E034:
        mov esi, eax
L_45E036:
        mov eax, dword ptr [mem_00A9F604]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E07E
        cmp eax, 0xb53b30
        je short L_45E07E
        cmp eax, 0xb53ab0
        je short L_45E07E
        cmp eax, 0xb53a70
        je short L_45E07E
        cmp eax, 0xb53af0
        je short L_45E07E
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [ebx - 0xef]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_00427640
        add esp, 0x8
L_45E07E:
        push 0x937f70
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E0C5
        cmp eax, 0xb53b30
        je short L_45E0C5
        cmp eax, 0xb53ab0
        je short L_45E0C5
        cmp eax, 0xb53a70
        je short L_45E0C5
        cmp eax, 0xb53af0
        je short L_45E0C5
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [ebx - 0xec]
        push ecx
        call ext_0053F5F0
        add esp, 0x8
L_45E0C5:
        push 0x937f64
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E10C
        cmp eax, 0xb53b30
        je short L_45E10C
        cmp eax, 0xb53ab0
        je short L_45E10C
        cmp eax, 0xb53a70
        je short L_45E10C
        cmp eax, 0xb53af0
        je short L_45E10C
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        push edx
        lea eax, [ebx - 0xe8]
        push eax
        call ext_0053F5F0
        add esp, 0x8
L_45E10C:
        push 0x937f5c
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E153
        cmp eax, 0xb53b30
        je short L_45E153
        cmp eax, 0xb53ab0
        je short L_45E153
        cmp eax, 0xb53a70
        je short L_45E153
        cmp eax, 0xb53af0
        je short L_45E153
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [ebx - 0xe0]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_0053F5F0
        add esp, 0x8
L_45E153:
        push 0x1
        push 0x0
        push 0x937f50
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_45E186
        cmp eax, 0xb53b30
        je short L_45E186
        cmp eax, 0xb53ab0
        je short L_45E186
        cmp eax, 0xb53a70
        je short L_45E186
        cmp eax, 0xb53af0
        jne short L_45E18D
L_45E186:
        mov esi, 0xb53b30
        jmp short L_45E18F
L_45E18D:
        mov esi, eax
L_45E18F:
        mov eax, dword ptr [mem_00A9F604]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E1D7
        cmp eax, 0xb53b30
        je short L_45E1D7
        cmp eax, 0xb53ab0
        je short L_45E1D7
        cmp eax, 0xb53a70
        je short L_45E1D7
        cmp eax, 0xb53af0
        je short L_45E1D7
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [ebx - 0xdc]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_00427640
        add esp, 0x8
L_45E1D7:
        mov eax, dword ptr [mem_00A9FAE0]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E21F
        cmp eax, 0xb53b30
        je short L_45E21F
        cmp eax, 0xb53ab0
        je short L_45E21F
        cmp eax, 0xb53a70
        je short L_45E21F
        cmp eax, 0xb53af0
        je short L_45E21F
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [ebx - 0xd8]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_0053F5F0
        add esp, 0x8
L_45E21F:
        push 0x937f48
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E266
        cmp eax, 0xb53b30
        je short L_45E266
        cmp eax, 0xb53ab0
        je short L_45E266
        cmp eax, 0xb53a70
        je short L_45E266
        cmp eax, 0xb53af0
        je short L_45E266
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [ebx - 0xd4]
        push ecx
        call ext_0053F5F0
        add esp, 0x8
L_45E266:
        push 0x1
        push 0x0
        push 0x937f3c
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_45E299
        cmp eax, 0xb53b30
        je short L_45E299
        cmp eax, 0xb53ab0
        je short L_45E299
        cmp eax, 0xb53a70
        je short L_45E299
        cmp eax, 0xb53af0
        jne short L_45E29E
L_45E299:
        mov eax, 0xb53b30
L_45E29E:
        push 0x937f70
        mov ecx, eax
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E2E5
        cmp eax, 0xb53b30
        je short L_45E2E5
        cmp eax, 0xb53ab0
        je short L_45E2E5
        cmp eax, 0xb53a70
        je short L_45E2E5
        cmp eax, 0xb53af0
        je short L_45E2E5
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        push edx
        lea eax, [ebx - 0xe4]
        push eax
        call ext_0053F5F0
        add esp, 0x8
L_45E2E5:
        push 0x1
        push 0x0
        push 0x937f2c
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_45E318
        cmp eax, 0xb53b30
        je short L_45E318
        cmp eax, 0xb53ab0
        je short L_45E318
        cmp eax, 0xb53a70
        je short L_45E318
        cmp eax, 0xb53af0
        jne short L_45E31D
L_45E318:
        mov eax, 0xb53b30
L_45E31D:
        push 0x937f48
        mov ecx, eax
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_45E36C
        cmp eax, 0xb53b30
        je short L_45E36C
        cmp eax, 0xb53ab0
        je short L_45E36C
        cmp eax, 0xb53a70
        je short L_45E36C
        cmp eax, 0xb53af0
        je short L_45E36C
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_0053F5F0
        mov eax, dword ptr [esp + 0x14]
        add esp, 0x8
        mov dword ptr [ebx - 0xcc], eax
L_45E36C:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x0045DAC0] MultiTrackView::TriggeredEventView::vfunc_85 (51 bytes)
extern "C" void ext_004686A0();

extern "C" __declspec(naked) void __fastcall fn_0045DAC0(void* self) {
    __asm {
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x9c]
        call eax
        movsx ecx, word ptr [esp + 0x8]
        add eax, ecx
        jns short L_45DAE3
        xor eax, eax
L_45DAE3:
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_004686A0
        ret 0x10
    }
}

// [0x0045F0A0] MultiTrackView::TriggeredEventView::vfunc_3_off_24C (176 bytes)
extern "C" void ext_00440730();
extern "C" void ext_004407B0();
extern "C" void ext_0045E920();
extern "C" void ext_0045E9D0();
extern "C" void ext_00596660();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00A2E968;
extern "C" int mem_00A2E99C;

extern "C" __declspec(naked) void __fastcall fn_0045F0A0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0xfc]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call edx
        push ebx
        lea ecx, [edi - 0x24c]
        call ext_0045E920
        lea esi, [edi - 0x1bc]
        mov ebp, eax
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe loc_45f0df
        call dword ptr [mem_00925134]
    loc_45f0df:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x1c], eax
        jbe loc_45f0f5
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
    loc_45f0f5:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push esi
        push eax
        push esi
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_00596660
        test ebp, ebp
        je loc_45f13b
        push 0
        push offset mem_00A2E968
        push offset mem_00A2E99C
        push 0
        mov ecx, ebp
        call ext_004407B0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        mov ecx, ebp
        call ext_00440730
        push ebx
        lea ecx, [edi + 0xc]
        call ext_0045E9D0
    loc_45f13b:
        mov eax, dword ptr [edi - 0x4]
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [edi - 0x4]
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0045ECA0] MultiTrackView::TriggeredEventView::vfunc_3_off_248 (272 bytes)
extern "C" void ext_00599F10();
extern "C" void ext_0043F8B0();
extern "C" void ext_0045EA60();
extern "C" int mem_00925134;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_0045ECA0(void* self) {
    __asm {
        sub     esp, 0Ch
        mov     eax, dword ptr [esp + 10h]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0Ch], esi
        call    ext_00594000
        mov     ecx, eax
        call    ext_00599F10
        lea     ecx, [esi - 248h]
        push    eax
        call    ext_0043DCF0
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [esp + 18h], edi
        je      L_end
        mov     esi, dword ptr [edi + 8]
        cmp     esi, dword ptr [edi + 0Ch]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        jbe     L_outer_init
        call    ebp
    L_outer_init:
        mov     dword ptr [esp + 18h], esi
        _emit   0x8D
        _emit   0x64
        _emit   0x24
        _emit   0x00
    L_outer_loop:
        mov     esi, dword ptr [edi + 0Ch]
        cmp     dword ptr [edi + 8], esi
        lea     ebx, [edi + 4]
        jbe     L_1
        call    ebp
    L_1:
        cmp     ebx, ebx
        je      L_2
        call    ebp
    L_2:
        mov     eax, dword ptr [esp + 18h]
        cmp     eax, esi
        je      L_outer_done
        cmp     eax, dword ptr [ebx + 8]
        jb      L_3
        call    ebp
    L_3:
        mov     ecx, dword ptr [esp + 18h]
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [eax + 18h]
        cmp     edi, dword ptr [eax + 1Ch]
        lea     esi, [eax + 14h]
        jbe     L_inner_loop
        call    ebp
    L_inner_loop:
        mov     ebx, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], ebx
        jbe     L_4
        call    ebp
    L_4:
        cmp     esi, esi
        je      L_5
        call    ebp
    L_5:
        cmp     edi, ebx
        je      L_inner_done
        cmp     edi, dword ptr [esi + 8]
        jb      L_6
        call    ebp
    L_6:
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [esp + 10h]
        push    edx
        add     ecx, 10h
        call    ext_0045EA60
        cmp     edi, dword ptr [esi + 8]
        jb      L_7
        call    ebp
    L_7:
        add     edi, 4
        jmp     L_inner_loop
    L_inner_done:
        mov     eax, dword ptr [esp + 20h]
        mov     ecx, dword ptr [esp + 18h]
        add     eax, 4
        cmp     ecx, dword ptr [eax + 8]
        jb      L_8
        call    ebp
    L_8:
        add     dword ptr [esp + 18h], 4
        mov     edi, dword ptr [esp + 20h]
        jmp     L_outer_loop
    L_outer_done:
        mov     esi, dword ptr [esp + 10h]
        push    edi
        lea     ecx, [esi - 248h]
        call    ext_0043F8B0
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx]
        push    1
        mov     ecx, edi
        call    eax
        mov     ecx, dword ptr [esi - 228h]
        push    1
        push    0
        push    ecx
        call    dword ptr [mem_00925688]
        pop     ebp
        pop     ebx
    L_end:
        pop     edi
        pop     esi
        add     esp, 0Ch
        ret     4
    }
}

extern "C" void ext_0041C9A0();
extern "C" void ext_00442990();
extern "C" void ext_00442B60();
extern "C" void ext_00442B80();
extern "C" void ext_00442BB0();
extern "C" void ext_00442BD0();
extern "C" void ext_00442C40();
extern "C" void ext_004436B0();
extern "C" void ext_00443700();
extern "C" void ext_00443960();
extern "C" void ext_006A5C62();

// [0x0043C6D0] MultiTrackView::TriggeredEventView::vfunc_79 (531 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043C6D0(void* self) {
    __asm {
        push    -0x1
        push    0x87b313
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        push    0x14
        mov     edi, ecx
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x0
        je      loc_43c713
        push    edi
        lea     ecx, [edi + 0x64]
        push    ecx
        mov     ecx, eax
        call    ext_00442990
        jmp     loc_43c715
    loc_43c713:
        xor     eax, eax
    loc_43c715:
        push    eax
        lea     esi, [edi + 0x64]
        or      ebx, -0x1
        push    0x0
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0xc
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x1
        je      loc_43c74e
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00442B60
        jmp     loc_43c750
    loc_43c74e:
        xor     eax, eax
    loc_43c750:
        push    eax
        push    0x1
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0x18
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x2
        je      loc_43c783
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00442B80
        jmp     loc_43c785
    loc_43c783:
        xor     eax, eax
    loc_43c785:
        push    eax
        push    0x2
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0xc
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x3
        je      loc_43c7b8
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00442BB0
        jmp     loc_43c7ba
    loc_43c7b8:
        xor     eax, eax
    loc_43c7ba:
        push    eax
        push    0x3
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0xc
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x4
        je      loc_43c7ed
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00442BD0
        jmp     loc_43c7ef
    loc_43c7ed:
        xor     eax, eax
    loc_43c7ef:
        push    eax
        push    0x4
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0xc
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x5
        je      loc_43c822
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00442C40
        jmp     loc_43c824
    loc_43c822:
        xor     eax, eax
    loc_43c824:
        push    eax
        push    0x5
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0x38
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x6
        je      loc_43c857
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00443960
        jmp     loc_43c859
    loc_43c857:
        xor     eax, eax
    loc_43c859:
        push    eax
        push    0x6
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0x14
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x7
        je      loc_43c88c
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_004436B0
        jmp     loc_43c88e
    loc_43c88c:
        xor     eax, eax
    loc_43c88e:
        push    eax
        push    0x7
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        push    0x14
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0x8
        je      loc_43c8c1
        push    edi
        push    esi
        mov     ecx, eax
        call    ext_00443700
        jmp     loc_43c8c3
    loc_43c8c1:
        xor     eax, eax
    loc_43c8c3:
        push    eax
        push    0x8
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    ext_0041C9A0
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x0045F6F0] MultiTrackView::TriggeredEventView::vfunc_0_off_250 (76 bytes)
extern "C" void __fastcall ext_0045F610(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0045E570(void* self, int edx_unused, int a1);
extern "C" void __fastcall ext_0043DC90(void* self, int edx_unused, int a1);
extern "C" int mem_00925688;
extern "C" int mem_0092568C;
extern "C" __declspec(naked) void __fastcall fn_0045F6F0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi - 0x250]
        push ebx
        mov ecx, edi
        call ext_0045F610
        push ebx
        mov ecx, edi
        call ext_0045E570
        mov eax, dword ptr [esi - 0x230]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi - 0x230]
        push ecx
        call dword ptr [mem_0092568C]
        push -0x1
        mov ecx, edi
        call ext_0043DC90
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0045DBD0] MultiTrackView::TriggeredEventView::vfunc_3_off_254 (327 bytes)
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F604;
extern "C" int mem_00A9FAE0;

extern "C" void* __fastcall fn_0045DBD0(void* self, int edx_unused, void* arg) {
    typedef void* (__thiscall *Fn4E0)(void*, int);
    typedef void* (__thiscall *Fn110)(void*, int);
    typedef void (__cdecl *FnA50)(void*, int);
    typedef void (__cdecl *FnA80)(void*, int);

    Fn4E0 f4e0 = (Fn4E0)(void*)ext_006404E0;
    Fn110 f110 = (Fn110)(void*)ext_00640110;
    FnA50 fa50 = (FnA50)(void*)ext_00640A50;
    FnA80 fa80 = (FnA80)(void*)ext_00640A80;

    char* s = (char*)self;
    void* node = f4e0(arg, 0x937f78);
    void* a;
    a = f110(node, mem_00A9F604);
    fa80(a, (unsigned char)s[-0xef]);
    a = f110(node, 0x937f70);
    fa50(a, *(int*)(s - 0xec));
    a = f110(node, 0x937f64);
    fa50(a, *(int*)(s - 0xe8));
    a = f110(node, 0x937f5c);
    fa50(a, *(int*)(s - 0xe0));

    node = f4e0(arg, 0x937f50);
    a = f110(node, mem_00A9F604);
    fa80(a, (unsigned char)s[-0xdc]);
    a = f110(node, mem_00A9FAE0);
    fa50(a, *(int*)(s - 0xd8));
    a = f110(node, 0x937f48);
    fa50(a, *(int*)(s - 0xd4));

    node = f4e0(arg, 0x937f3c);
    a = f110(node, 0x937f70);
    fa50(a, *(int*)(s - 0xe4));
    node = f4e0(arg, 0x937f2c);
    a = f110(node, 0x937f48);
    fa50(a, *(int*)(s - 0xe4));

    return arg;
}

// [0x0045F740] MultiTrackView::TriggeredEventView::vfunc_83 (171 bytes)
extern "C" void ext_0043D620();
extern "C" void ext_00468180();
extern "C" void ext_00468F50();
extern "C" void ext_00469000();
extern "C" void ext_00594000();
extern "C" void ext_00597630();
extern "C" void ext_005A6300();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0045F740(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x20]
        push esi
        push eax
        call ext_0043D620
        xor esi, esi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], esi
        mov eax, dword ptr [eax + 0x14]
        push eax
        mov dword ptr [esp + 0x20], esi
        call ext_00594000
        mov ecx, eax
        call ext_00597630
        cmp eax, esi
        je L_0045F7C8
        push edi
        lea ecx, [esp + 0x28]
        lea edi, [eax + 0x4]
        push ecx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x2c], edi
        call ext_005A6300
        test byte ptr [esp + 0x2c], 0x8
        je L_0045F7B5
        push edi
        call ext_00468180
        mov ecx, eax
        call ext_00468F50
        jmp L_0045F7C7
    L_0045F7B5:
        lea edx, [esp + 0x8]
        push esi
        push edx
        call ext_00468180
        mov ecx, eax
        call ext_00469000
    L_0045F7C7:
        pop edi
    L_0045F7C8:
        mov eax, dword ptr [esp + 0x8]
        cmp eax, esi
        pop esi
        je L_0045F7DA
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0045F7DA:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}

// [0x0045F7F0] MultiTrackView::TriggeredEventView::vfunc_84 (782 bytes)
extern "C" void ext_00419F50();
extern "C" void ext_0045E930();
extern "C" void ext_00468F70();
extern "C" __declspec(naked) void __fastcall fn_0045F7F0(void* self) {
    __asm {
        push -1
        push 0x8844d0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        xor eax, eax
        push esi
        push edi
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x40], eax
        lea edi, [ecx + 0x258]
        mov dword ptr [esp + 0x4c], eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax]
        mov esi, edi
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x1c], esi
        push ebp
    L_0045F837:
        test esi, esi
        mov ebp, dword ptr [edi + 0x4]
        je short L_0045F842
        cmp esi, edi
        je short L_0045F848
    L_0045F842:
        call dword ptr [mem_00925134]
    L_0045F848:
        cmp ebx, ebp
        je short L_0045F88D
        test esi, esi
        jne short L_0045F856
        call dword ptr [mem_00925134]
    L_0045F856:
        cmp ebx, dword ptr [esi + 0x4]
        jne short L_0045F861
        call dword ptr [mem_00925134]
    L_0045F861:
        mov eax, dword ptr [ebx + 0xc]
        test eax, eax
        je short L_0045F87A
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x3c]
        call ext_005A6300
    L_0045F87A:
        lea ecx, [esp + 0x20]
        call ext_00419F50
        mov ebx, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x20]
        jmp short L_0045F837
    L_0045F88D:
        xor eax, eax
        xor bl, bl
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x34], eax
        mov ebp, dword ptr [esp + 0x5c]
        mov edi, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ebp + 0x8]
        mov byte ptr [esp + 0x50], 0x1
        jbe short L_0045F8B4
        call dword ptr [mem_00925134]
    L_0045F8B4:
        mov esi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], esi
        jbe short L_0045F8C2
        call dword ptr [mem_00925134]
    L_0045F8C2:
        cmp edi, esi
        je short L_0045F92E
        cmp edi, dword ptr [ebp + 0x8]
        jb short L_0045F8D1
        call dword ptr [mem_00925134]
    L_0045F8D1:
        mov esi, dword ptr [edi]
        cmp dword ptr [esi + 0x8], 0x4
        push 0x0
        push 0xa2e968
        sete cl
        push 0xa2e99c
        or bl, cl
        push 0x0
        mov ecx, esi
        call ext_004407B0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je short L_0045F91E
        mov ecx, dword ptr [esp + 0x18]
        push esi
        call ext_0045E930
        test eax, eax
        je short L_0045F91E
        lea edx, [esp + 0x5c]
        push edx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x60], eax
        call ext_005A6300
    L_0045F91E:
        cmp edi, dword ptr [ebp + 0x8]
        jb short L_0045F929
        call dword ptr [mem_00925134]
    L_0045F929:
        add edi, 0x4
        jmp short L_0045F8B4
    L_0045F92E:
        mov byte ptr [esp + 0x13], bl
        call ext_00468180
        mov ebx, eax
        mov eax, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x40]
        mov dword ptr [esp + 0x5c], ebx
        call eax
        test byte ptr [esp + 0x58], 0x8
        je L_0045FA6B
        mov esi, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x40]
        cmp esi, eax
        jbe short L_0045F96B
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x40]
    L_0045F96B:
        lea ecx, [esp + 0x38]
        mov ebp, ecx
        mov edi, esi
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x1c], edi
        jmp short L_0045F980
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_0045F980:
        cmp dword ptr [esp + 0x3c], eax
        mov esi, eax
        jbe short L_0045F98E
        call dword ptr [mem_00925134]
    L_0045F98E:
        test ebp, ebp
        je short L_0045F99A
        lea ecx, [esp + 0x38]
        cmp ebp, ecx
        je short L_0045F9A0
    L_0045F99A:
        call dword ptr [mem_00925134]
    L_0045F9A0:
        cmp edi, esi
        je L_0045FA79
        test ebp, ebp
        jne short L_0045F9B2
        call dword ptr [mem_00925134]
    L_0045F9B2:
        cmp edi, dword ptr [ebp + 0x8]
        jb short L_0045F9BD
        call dword ptr [mem_00925134]
    L_0045F9BD:
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        cmp edx, eax
        mov ebx, dword ptr [edi]
        mov edi, eax
        jbe short L_0045F9DB
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
    L_0045F9DB:
        cmp edx, eax
        mov esi, edx
        jbe short L_0045F9EF
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
    L_0045F9EF:
        cmp esi, edi
        lea ecx, [esp + 0x28]
        mov ebp, ecx
        mov dword ptr [esp + 0x24], esi
        je short L_0045FA0B
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_0045FA00:
        cmp dword ptr [esi], ebx
        je short L_0045FA0B
        add esi, 0x4
        cmp esi, edi
        jne short L_0045FA00
    L_0045FA0B:
        cmp edx, eax
        mov edi, eax
        jbe short L_0045FA17
        call dword ptr [mem_00925134]
    L_0045FA17:
        test ebp, ebp
        je short L_0045FA23
        lea edx, [esp + 0x28]
        cmp ebp, edx
        je short L_0045FA29
    L_0045FA23:
        call dword ptr [mem_00925134]
    L_0045FA29:
        cmp esi, edi
        mov ecx, dword ptr [esp + 0x5c]
        push ebx
        je short L_0045FA39
        call ext_00468F50
        jmp short L_0045FA3E
    L_0045FA39:
        call ext_00468F70
    L_0045FA3E:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, dword ptr [eax + 0x8]
        jb short L_0045FA51
        call dword ptr [mem_00925134]
    L_0045FA51:
        add dword ptr [esp + 0x1c], 0x4
        mov eax, dword ptr [esp + 0x40]
        mov ebp, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x5c]
        jmp L_0045F980
    L_0045FA6B:
        push 0x0
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, ebx
        call ext_00469000
    L_0045FA79:
        cmp byte ptr [esp + 0x13], 0x0
        pop ebp
        je short L_0045FA94
        mov ecx, ebx
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc0]
        jmp short L_0045FAB8
    L_0045FA94:
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        je short L_0045FAA7
        mov ecx, dword ptr [esp + 0x2c]
        sub ecx, eax
        sar ecx, 0x2
        jne short L_0045FABE
    L_0045FAA7:
        mov ecx, ebx
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd4]
    L_0045FAB8:
        call eax
        mov eax, dword ptr [esp + 0x28]
    L_0045FABE:
        test eax, eax
        pop edi
        pop esi
        pop ebx
        je short L_0045FACE
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0045FACE:
        mov eax, dword ptr [esp + 0x2c]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], ecx
        je short L_0045FAED
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0045FAED:
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 0x8
    }
}
