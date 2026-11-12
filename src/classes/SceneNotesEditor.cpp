// Decompiled translation unit: src/classes/SceneNotesEditor.cpp

// [0x00455AB0] SceneNotesEditor::vfunc_84 (26 bytes)
extern "C" void ext_00455720();
extern "C" void ext_006A5FC8();

extern "C" __declspec(naked) int __fastcall fn_00455AB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5FC8
        mov ecx, esi
        call ext_00455720
        mov byte ptr [esi + 0x159], 0x1
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00455B90] SceneNotesEditor::vfunc_90 (29 bytes)
extern "C" void ext_00455970();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00455B90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00455970
        pop esi
        ret 0xc
    }
}

// [0x004557F0] SceneNotesEditor::vfunc_63 (46 bytes)
extern "C" void __stdcall ext_006A5F44(int a, int b, void* c);

extern "C" void __fastcall fn_004557F0(void* self, int edx_unused, int a1) {
    char* esi = (char*)self;
    ext_006A5F44(a1, 0x509, esi + 0x74);
    ext_006A5F44(a1, 0x4d4, esi + 0xc8);
}

// [0x004558B0] SceneNotesEditor::vfunc_89 (185 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A6E9E();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_004558B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        push edi
        mov edi, ecx
        je L_else
        push 0x0
        push 0xa2e4d8
        push 0xa2e034
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e01c
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_else
L_then:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x164]
        jmp L_join
L_else:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x15c]
L_join:
        test eax, eax
        jne L_nonzero
        pop edi
        pop esi
        ret 0xc
L_nonzero:
        mov eax, dword ptr [eax+0x4]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x004552F0] SceneNotesEditor::vfunc_66 (209 bytes)
struct Msg_004552F0 {
    void* hwnd;
    unsigned int message;
    unsigned int wParam;
    long lParam;
};

struct CharFormat_004552F0 {
    unsigned int cbSize;
    unsigned int dwMask;
    unsigned int dwEffects;
    int rest[12];
};

struct RichEdit_004552F0 {
    int GetSelectionCharFormat(CharFormat_004552F0* cf);
    int SetSelectionCharFormat(CharFormat_004552F0* cf);
};

struct Dialog_004552F0 {
    int PreTranslateMessage(Msg_004552F0* msg);
};

extern "C" void ext_006A5F7A();
extern "C" void ext_006A674E();
extern "C" void ext_006A6754();
typedef short (__stdcall *FnGetKeyState)(int);
extern "C" FnGetKeyState mem_009255F4;

extern "C" int __fastcall fn_004552F0(void* self, int edx_unused, Msg_004552F0* msg) {
    if (msg->message == 0x100) {
        switch (msg->wParam) {
        case 0x42:
            if (mem_009255F4(0x11) & 0x8000) {
                CharFormat_004552F0 cf;
                cf.cbSize = 0x3c;
                cf.dwMask = 0x3;
                ((RichEdit_004552F0*)((char*)self + 0x74))->GetSelectionCharFormat(&cf);
                cf.dwEffects ^= 0x1;
                ((RichEdit_004552F0*)((char*)self + 0x74))->SetSelectionCharFormat(&cf);
                return 1;
            }
            break;
        case 0x49:
            if (mem_009255F4(0x11) & 0x8000) {
                CharFormat_004552F0 cf;
                cf.cbSize = 0x3c;
                cf.dwMask = 0x3;
                ((RichEdit_004552F0*)((char*)self + 0x74))->GetSelectionCharFormat(&cf);
                cf.dwEffects ^= 0x2;
                ((RichEdit_004552F0*)((char*)self + 0x74))->SetSelectionCharFormat(&cf);
                return 1;
            }
            break;
        }
    }
    return ((Dialog_004552F0*)self)->PreTranslateMessage(msg);
}
