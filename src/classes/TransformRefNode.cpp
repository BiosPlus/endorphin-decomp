// Decompiled translation unit: src/classes/TransformRefNode.cpp

// [0x00626650] TransformRefNode::vfunc_12_off_4 (138 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B4B860;
extern "C" int mem_00B4B820;
extern "C" int mem_00B4B824;
extern "C" int mem_00B4B828;
extern "C" int mem_00B4B82C;
extern "C" int mem_00B4B830;
extern "C" int mem_00B4B834;
extern "C" int mem_00B4B838;
extern "C" int mem_00B4B83C;
extern "C" int mem_00B4B840;
extern "C" int mem_00B4B844;
extern "C" int mem_00B4B848;
extern "C" int mem_00B4B84C;
extern "C" int mem_00B4B850;
extern "C" int mem_00B4B854;
extern "C" int mem_00B4B858;
extern "C" int mem_00B4B85C;

extern "C" __declspec(naked) void* __cdecl fn_00626650(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B4B860], al
        jne early_out
        fld1
        or dword ptr [mem_00B4B860], eax
        fst dword ptr [mem_00B4B820]
        push 0x91f1d0
        fldz
        fst dword ptr [mem_00B4B824]
        fst dword ptr [mem_00B4B828]
        fst dword ptr [mem_00B4B82C]
        fst dword ptr [mem_00B4B830]
        fst dword ptr [mem_00B4B838]
        fst dword ptr [mem_00B4B83C]
        fst dword ptr [mem_00B4B840]
        fst dword ptr [mem_00B4B844]
        fst dword ptr [mem_00B4B84C]
        fst dword ptr [mem_00B4B850]
        fst dword ptr [mem_00B4B854]
        fstp dword ptr [mem_00B4B858]
        fst dword ptr [mem_00B4B834]
        fst dword ptr [mem_00B4B848]
        fstp dword ptr [mem_00B4B85C]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B4B820
        ret
    }
}
