// Decompiled translation unit: src/leaf/decompiled_770000.cpp

extern "C" void ext_006A5C5C();
extern "C" void ext_00772040();
extern "C" int mem_00925284;
extern "C" int mem_00B60728;
extern "C" int mem_00B6072C;
extern "C" int mem_00B60720;

// [0x0077F650] sub_0077F650 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_0077F650(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00772040
        test byte ptr [esp + 8], 1
        je skip
        push esi
        call ext_006A5C5C
        add esp, 4
    skip:
        mov eax, esi
        pop esi
        ret 4
        nop
        nop
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B60728], ecx
        mov dword ptr [mem_00B6072C], edx
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60720]
        ret
    }
}
