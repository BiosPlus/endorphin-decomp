// Decompiled translation unit: src/classes/ProgressDialog.cpp

// [0x00447FA0] ProgressDialog::vfunc_3_off_74 (26 bytes)
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00447FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x58]
        call ext_006A5F50
        pop esi
        ret 0x4
    }
}

// [0x00448040] ProgressDialog::vfunc_2_off_74 (36 bytes)
extern "C" int mem_00925694;

typedef int (__stdcall *SendMessageFn_00448040)(void*, unsigned int, unsigned int, long);

extern "C" void __fastcall fn_00448040(void* self, int edx_unused, unsigned short lo, unsigned short hi) {
    long lparam = (long)(((unsigned long)hi << 16) | (unsigned long)lo);
    ((SendMessageFn_00448040)mem_00925694)(*(void**)((char*)self + 0x24), 0x401, 0, lparam);
}

// [0x00448070] ProgressDialog::vfunc_1_off_74 (39 bytes)
extern "C" int mem_0092568C;

typedef int (__stdcall *SendMessageFn_00448070)(void*, unsigned int, unsigned int, long);
typedef int (__stdcall *UpdateWindowFn_00448070)(void*);

extern "C" int __fastcall fn_00448070(void* self, int edx_unused, unsigned int a1) {
    ((SendMessageFn_00448070)mem_00925694)(*(void**)((char*)self + 0x24), 0x402, a1, 0);
    return ((UpdateWindowFn_00448070)mem_0092568C)(*(void**)((char*)self - 0x54));
}

// [0x00448170] ProgressDialog::vfunc_0_off_74 (45 bytes)
typedef int (__stdcall *SendMessageFn_00448170)(void*, unsigned int, unsigned int, long);

extern "C" void __fastcall fn_00448170(void* self) {
    SendMessageFn_00448170 send = (SendMessageFn_00448170)mem_00925694;
    int pos = send(*(void**)((char*)self + 0x24), 0x408, 0, 0);
    send(*(void**)((char*)self + 0x24), 0x402, (unsigned int)(pos + 1), 0);
}

// [0x00448000] ProgressDialog::vfunc_63 (46 bytes)
extern "C" void ext_006A5F44();

extern "C" __declspec(naked) void __fastcall fn_00448000(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        lea eax, [esi + 0x78]
        push eax
        push 0x169
        push edi
        call ext_006A5F44
        add esi, 0xcc
        push esi
        push 0x16b
        push edi
        call ext_006A5F44
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004481A0] ProgressDialog::vfunc_4_off_74 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_004481A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x58]
        call ext_006A5F50
        mov eax, dword ptr [esi + 0x24]
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        push 0x408
        push eax
        call edi
        add eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x24]
        push 0x0
        push eax
        push 0x402
        push ecx
        call edi
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x004480A0] ProgressDialog::vfunc_84 (203 bytes)
extern "C" void ext_006A5FC8();
extern "C" void ext_006A5EDE();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004480A0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push 0x1
        mov edi, eax
        mov eax, dword ptr [esi + 0x20]
        push 0x80
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 0x0
        push 0x80
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x74]
        mov eax, dword ptr [edx + 0x4]
        add esi, 0x74
        push 0x0
        mov ecx, esi
        call eax
        push 0x928b5d
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0x0
        call edx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
