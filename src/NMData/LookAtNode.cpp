// Decompiled translation unit: src/NMData/LookAtNode.cpp

extern "C" void ext_0058F650();
extern "C" void ext_00640390();
extern "C" int mem_00A9F054;

// [0x00587DD0] NMData::LookAtNode::vfunc_22 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00587DD0(void* self, int edx_unused, void* arg1) {
    __asm {
        mov     eax, dword ptr [mem_00A9F054]
        push    esi
        push    0
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0Ch]
        push    eax
        call    ext_00640390
        push    eax
        mov     ecx, esi
        call    ext_0058F650
        pop     esi
        ret     4
    }
}
