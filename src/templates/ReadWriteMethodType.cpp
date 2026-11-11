// Decompiled translation unit: src/templates/ReadWriteMethodType.cpp

extern "C" void ext_0067A670();
extern "C" int mem_00AD8310;
extern "C" int mem_00AD830C;
extern "C" int mem_00AD8318;
extern "C" int mem_00AD8314;
extern "C" int mem_00AD831C;
extern "C" int mem_00AD8320;

// [0x0046DF60] ExprParser::ReadWriteMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, float, {public: void __thiscall ImageExporter::setFrameRate(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046DF60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88293e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8310], al
        jne init_done
        or dword ptr [mem_00AD8310], eax
        mov ecx, offset mem_00AD830C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00AD830C], 0x93a904
        mov dword ptr [eax+4], offset mem_00AD830C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00AD830C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0046E190] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E190(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88295e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8318], al
        jne init_done
        or dword ptr [mem_00AD8318], eax
        mov ecx, offset mem_00AD8314
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8314], 0x93aab4
        mov dword ptr [eax + 0x4], offset mem_00AD8314
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8314
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046E4A0] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E4A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88297e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8320], al
        jne init_done
        or dword ptr [mem_00AD8320], eax
        mov ecx, offset mem_00AD831C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD831C], 0x0093ac64
        mov dword ptr [eax + 0x4], offset mem_00AD831C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD831C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}
