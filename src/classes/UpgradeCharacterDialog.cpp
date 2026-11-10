// Decompiled translation unit: src/classes/UpgradeCharacterDialog.cpp

extern "C" void ext_006A5FC8();
extern "C" void ext_006A5FDA();
extern "C" int mem_00924300;
extern "C" int mem_0092449C;

// [0x00461FF0] UpgradeCharacterDialog::vfunc_84 (53 bytes)
extern "C" int __fastcall fn_00461FF0(void* self) {
    typedef int (__thiscall *ThisRet0)(void* self);
    typedef int (__thiscall *ThisRet1)(void* self, int a1);
    typedef void (__thiscall *ThisVoid1)(void* self, int a1);

    char* p = (char*)self;
    ((void (__thiscall *)(void*))ext_006A5FC8)(p);

    int v1 = ((ThisRet0)mem_00924300)(p + 0x80);
    int v2 = ((ThisRet1)mem_0092449C)(p + 0x7c, v1);
    if (v2 == 0) {
        ((ThisVoid1)ext_006A5FDA)(p + 0xd8, v2);
    }
    return 1;
}
