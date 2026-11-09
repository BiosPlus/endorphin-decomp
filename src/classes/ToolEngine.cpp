// Decompiled translation unit: src/classes/ToolEngine.cpp

// [0x00482440] ToolEngine::vfunc_4 (33 bytes)
// Toggles the byte flag at this+0x36C (0 -> 1, nonzero -> 0), then tail-jumps
// through vtable slot 2 of the embedded object at this+0x218, passing that
// sub-object as `this`.
extern "C" void __fastcall fn_00482440(void* self) {
    unsigned char* base = (unsigned char*)self;
    unsigned char* flag = base + 0x36C;
    *flag = (unsigned char)(*flag == 0);

    void* sub = base + 0x218;
    void** vtbl = *(void***)sub;
    typedef void (__fastcall *SlotFn)(void*);
    ((SlotFn)vtbl[2])(sub);
}

// [0x004800C0] ToolEngine::vfunc_16 (11 bytes)
extern "C" void ext_004AFC60();

extern "C" __declspec(naked) void __fastcall fn_004800C0(void* self) {
    __asm {
        push 0
        add ecx, 0x8
        call ext_004AFC60
        ret
    }
}

// [0x00485310] ToolEngine::vfunc_56 (15 bytes)
extern "C" void ext_00483D20();

extern "C" __declspec(naked) void __fastcall fn_00485310(void* self) {
    __asm {
        push 1
        lea eax, [ecx + 0x3CC]
        push eax
        call ext_00483D20
        ret
    }
}
