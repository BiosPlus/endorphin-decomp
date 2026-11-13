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
