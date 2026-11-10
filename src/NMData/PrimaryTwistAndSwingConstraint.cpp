// Decompiled translation unit: src/NMData/PrimaryTwistAndSwingConstraint.cpp

// [0x00611EA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_63 (39 bytes)
extern "C" void __fastcall fn_00611EA0(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x168) = 1;
    *(unsigned char*)(p + 0x169) = 1;
    *(unsigned char*)(p + 0x16a) = 1;
    *(unsigned char*)(p + 0x228) = 1;
    *(unsigned char*)(p + 0x229) = 1;
    *(unsigned char*)(p + 0x22a) = 1;
}

// [0x00611A10] NMData::PrimaryTwistAndSwingConstraint::vfunc_67 (47 bytes)
extern "C" float __fastcall fn_00611A10(void* self, int edx_unused, int idx) {
    if (idx < 4) {
        void** vt = *(void***)self;
        typedef float* (__thiscall *VFn)(void* self, float* out);
        float tmp[3];
        float* p = ((VFn)vt[0x110 / 4])(self, tmp);
        return p[idx];
    }
    return 0.0f;
}

// [0x00611CA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_66 (60 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00469530();

extern "C" __declspec(naked) void __fastcall fn_00611CA0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        mov byte ptr [edx + ecx + 0x328], al
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x13c]
        call edx
        call ext_00468180
        test eax, eax
        je done
        mov dword ptr [esp + 0x8], 0
        mov dword ptr [esp + 0x4], 5
        mov ecx, eax
        jmp ext_00469530
done:
        ret 0x8
    }
}

// [0x006119C0] NMData::PrimaryTwistAndSwingConstraint::vfunc_60 (66 bytes)
extern "C" void __fastcall fn_006119C0(void* self, int edx_unused, int idx, float val) {
    if (idx >= 4) {
        return;
    }
    typedef void (__thiscall *VFn)(void* self, float* out);
    float tmp[3];
    VFn getter = (VFn)(*(void***)self)[0x110 / 4];
    getter(self, tmp);
    tmp[idx] = val;
    VFn setter = (VFn)(*(void***)self)[0xf4 / 4];
    setter(self, tmp);
}
