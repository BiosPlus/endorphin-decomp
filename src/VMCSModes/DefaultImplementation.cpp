// Decompiled translation unit: src/VMCSModes/DefaultImplementation.cpp

struct Inner_4F9E50 {
    void** vtbl;
};

struct Mid_4F9E50 {
    char pad[0x34];
    Inner_4F9E50* c;
};

struct Mid2_4F9E50 {
    char pad[0x14];
    Mid_4F9E50* b;
};

struct Outer_4F9E50 {
    char pad[0x08];
    Mid2_4F9E50* a;
};

typedef void (__fastcall* Fn_4F9E50)(Inner_4F9E50*);

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
extern "C" void __fastcall fn_004F9E50(Outer_4F9E50* self) {
    Mid2_4F9E50* a = self->a;
    Mid_4F9E50* b = a->b;
    Inner_4F9E50* c = b->c;
    Fn_4F9E50 f = (Fn_4F9E50)c->vtbl[0x1c / 4];
    f(c);
}

// [0x004F9D00] VMCSModes::DefaultImplementation::vfunc_97 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F9D00(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x08 // mov eax, dword ptr [ecx + 0x8]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x14 // mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x82 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edx + 0xcc]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
