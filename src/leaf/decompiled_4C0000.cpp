// Decompiled translation unit: src/leaf/decompiled_4C0000.cpp

// [0x004CEA30] sub_004CEA30 (13 bytes)
extern "C" void __stdcall ext_004CE810(int value);

extern "C" void __fastcall fn_004CEA30(void* self) {
    ext_004CE810(*reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180));
}

// [0x004C4E80] sub_004C4E80 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C4E80(void* self, int edx_unused, float value) {
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x180) = value;
    ext_004C0340();
}
