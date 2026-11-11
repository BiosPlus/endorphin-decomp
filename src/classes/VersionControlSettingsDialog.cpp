// Decompiled translation unit: src/classes/VersionControlSettingsDialog.cpp

// [0x00463250] VersionControlSettingsDialog::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00463250(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4d1, p + 0x74);
    ddx(a1, 0x478, p + 0xc8);
    ddx(a1, 0x479, p + 0x11c);
    ddx(a1, 0x47b, p + 0x170);
}

// [0x004632B0] VersionControlSettingsDialog::vfunc_86 (127 bytes)
extern "C" void ext_006A5FB0();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_004632B0(void* self) {
    typedef int (__stdcall *SendMessageFn)(int, unsigned int, int, int);
    SendMessageFn sendMsg = (SendMessageFn)mem_00925694;
    char* p = (char*)self;
    int r;
    r = sendMsg(*(int*)(p + 0x94), 0x147, 0, 0);
    *(int*)(*(char**)(p + 0x1c4) + 0x8) = r;
    r = sendMsg(*(int*)(p + 0xe8), 0x147, 0, 0);
    *(int*)(*(char**)(p + 0x1c4) + 0xc) = r;
    r = sendMsg(*(int*)(p + 0x13c), 0x147, 0, 0);
    *(int*)(*(char**)(p + 0x1c4) + 0x10) = r;
    r = sendMsg(*(int*)(p + 0x190), 0x147, 0, 0);
    *(int*)(*(char**)(p + 0x1c4) + 0x14) = r;
    ((void (__fastcall *)(void*))ext_006A5FB0)(self);
}
