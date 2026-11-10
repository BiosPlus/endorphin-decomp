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
