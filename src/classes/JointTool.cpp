// Decompiled translation unit: src/classes/JointTool.cpp

// [0x005470F0] JointTool::vfunc_23 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_005470F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        push 1
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

typedef unsigned char (__thiscall *JT_VCallBool)(void* self);
typedef void (__thiscall *JT_VCallVoid)(void* self);
typedef int (__thiscall *JT_VCallArg)(void* self, float* p);

// [0x005458E0] JointTool::vfunc_17 (93 bytes)
extern "C" int __fastcall fn_005458E0(void* self, int edx_unused, int a1, int a2) {
    float v[4];
    v[3] = 0.0f;
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    if (a2 & 2) {
        v[0] = 1.0f;
    }
    if (((JT_VCallBool)(*(void***)self)[14])(self)) {
        if (*(void**)((char*)self + 0x88) != 0) {
            ((JT_VCallArg)(*(void***)(*(void**)((char*)self + 0x88)))[30])(*(void**)((char*)self + 0x88), v);
        }
    }
    ((JT_VCallVoid)(*(void***)self)[29])(self);
    return 0;
}
