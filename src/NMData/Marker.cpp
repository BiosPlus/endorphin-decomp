// Decompiled translation unit: src/NMData/Marker.cpp

extern "C" __declspec(dllimport) void __fastcall imp_00924ea8(void* str);
extern "C" void __fastcall fn_0058A1A0(void* self);

// [0x00587F70] NMData::Marker::vfunc_33 (33 bytes)
extern "C" void __fastcall fn_00587F70(char* self) {
    *(int*)(self + 0x174) = 0;
    imp_00924ea8(self + 0x154);
    fn_0058A1A0(self);
}
