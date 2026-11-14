// Decompiled translation unit: src/classes/CAboutDlg.cpp

// [0x00464670] CAboutDlg::vfunc_7_off_74 (40 bytes)
extern "C" int mem_00AD658C;
extern "C" int mem_00A30A9C;
extern "C" int mem_00A30AA0;

extern "C" __declspec(naked) void* __fastcall fn_00464670(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00AD658C], al
        jne short done
        or dword ptr [mem_00AD658C], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A30A9C], eax
        mov dword ptr [mem_00A30AA0], ecx
    done:
        mov eax, 0xA30A90
        ret
    }
}

// [0x00464D60] CAboutDlg::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00464D60(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x3fd, p + 0x11c);
    ddx(a1, 0x3fe, p + 0x170);
    ddx(a1, 0x4e7, p + 0x1c4);
    ddx(a1, 1, p + 0x218);
}

// [0x00464E30] CAboutDlg::vfunc_84 (477 bytes)
extern "C" void ext_0040F230();
extern "C" void ext_00430E20();
extern "C" void ext_006A4010();
extern "C" void ext_006A4040();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6244();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0D0;
extern "C" int mem_0093A0E8;
extern "C" int mem_0093A0CC;
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_009242F0;
extern "C" int mem_00924518;
extern "C" int mem_00924300;
extern "C" int mem_009242FC;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F8;
extern "C" int mem_00924FF4;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00464E30(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x88128d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x24], esi
        call ext_006A6244
        mov eax, dword ptr [mem_0093A0C8]
        mov ecx, dword ptr [mem_0093A0D0]
        mov edx, dword ptr [mem_0093A0E8]
        push eax
        mov eax, dword ptr [mem_0093A0CC]
        push ecx
        push edx
        push eax
        lea ecx, [esi + 0x218]
        call ext_0040F230
        call ext_006A5EDE
        mov eax, dword ptr [eax + 8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 8]
        push 0xfd
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push 1
        push 0x80
        push ecx
        mov edi, eax
        call ebx
        mov edx, dword ptr [esi + 0x20]
        push edi
        push 0
        push 0x80
        push edx
        call ebx
        push 0x9399bc
        lea ecx, [ebp - 0x18]
        call dword ptr [mem_009242F0]
        push 0x92ab78
        lea ecx, [ebp - 0x18]
        mov dword ptr [ebp - 0x4], 0
        call dword ptr [mem_00924518]
        push 0x9399a8
        lea ecx, [ebp - 0x18]
        call dword ptr [mem_00924518]
        lea ecx, [ebp - 0x18]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x11c]
        call ext_006A5F50
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_009242FC]
        mov bl, 2
        mov byte ptr [ebp - 0x4], bl
        call ext_006A4010
        push -1
        lea ecx, [ebp - 0x44]
        push ecx
        mov ecx, eax
        call ext_006A4040
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 3
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_009242F8]
        lea ecx, [ebp - 0x44]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
        mov dword ptr [ebp - 0x4], 1
        _emit 0xeb
        _emit 0x5b
        push 0x939998
        lea ecx, [ebp - 0x20]
        call dword ptr [mem_009242F0]
        mov esi, eax
        mov ecx, dword ptr [ebp - 0x28]
        add ecx, 0xc
        mov byte ptr [ebp - 0x4], 5
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [ebp - 0x1c]
        push esi
        push edx
        call ext_00430E20
        add esp, 0xc
        push eax
        lea ecx, [ebp - 0x14]
        mov byte ptr [ebp - 0x4], 6
        call dword ptr [mem_009244D4]
        lea ecx, [ebp - 0x1c]
        call dword ptr [mem_009242F4]
        lea ecx, [ebp - 0x20]
        mov byte ptr [ebp - 0x4], 4
        call dword ptr [mem_009242F4]
        mov eax, 0x464fb5
        _emit 0xc3
        mov esi, dword ptr [ebp - 0x24]
        lea ecx, [ebp - 0x14]
        lea edi, [esi + 0x170]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call ext_006A5F50
        push 0
        lea ecx, [esi + 0x1c4]
        call ext_006A5E72
        push 0
        mov ecx, edi
        call ext_006A5E72
        lea ecx, [ebp - 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [ebp - 0x18]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov eax, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
