// Decompiled translation unit: src/NMData/UpVectorNode.cpp

extern "C" void ext_0058F650();
extern "C" void ext_00640390();
extern "C" int mem_00A9F37C;

// [0x00587E80] NMData::UpVectorNode::vfunc_22 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00587E80(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [mem_00A9F37C]
        push esi
        push 0
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x0C]
        push eax
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_0058F650
        pop esi
        ret 4
    }
}
