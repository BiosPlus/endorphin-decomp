// Decompiled translation unit: src/leaf/decompiled_510000.cpp

// [0x0051DE70] sub_0051DE70 (33 bytes)
extern "C" int __fastcall fn_0051DE70(int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 360;
}

// [0x00515B70] sub_00515B70 (21 bytes)
extern "C" bool ext_00515B20();

extern "C" int __fastcall fn_00515B70(void* self) {
    if (!ext_00515B20()) {
        return 0;
    }
    return *(int*)((char*)self + 0x10);
}
