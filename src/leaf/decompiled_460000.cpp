// Decompiled translation unit: src/leaf/decompiled_460000.cpp

extern "C" unsigned char __fastcall ext_0046FE50(void* self);
extern "C" unsigned char __fastcall ext_0046FE70(void* self);

struct Self_468750 {
    char pad[0x10];
    unsigned char flag; // +0x10
    void* p;            // +0x14
};

// [0x00468750] sub_00468750 (17 bytes)
extern "C" unsigned char __fastcall fn_00468750(Self_468750* self) {
    if (!self->flag) {
        return 0;
    }
    return ext_0046FE50(self->p);
}

// [0x00468770] sub_00468770 (17 bytes)
extern "C" unsigned char __fastcall fn_00468770(Self_468750* self) {
    if (!self->flag) {
        return 0;
    }
    return ext_0046FE70(self->p);
}
