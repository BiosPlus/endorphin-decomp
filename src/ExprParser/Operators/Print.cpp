// Decompiled translation unit: src/ExprParser/Operators/Print.cpp

extern "C" void ext_0041CEB0();
extern "C" char mem_00B5A0C0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF4;

// [0x006A1B10] ExprParser::Operators::Print::vfunc_3 (120 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1B10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        cmp byte ptr [mem_00B5A0C0], 0
        jne skip_body
        mov ecx, dword ptr [esp + 0x2c]
        lea eax, [esp]
        push eax
        call ext_0041CEB0
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push eax
        push edx
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], -1
        call dword ptr [mem_00924FF4]
skip_body:
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}
