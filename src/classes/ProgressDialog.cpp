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
