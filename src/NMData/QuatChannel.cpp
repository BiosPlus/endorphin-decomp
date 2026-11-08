// Decompiled translation unit: src/NMData/QuatChannel.cpp

extern "C" int mem_00925134;

// [0x0051C7C0] NMData::QuatChannel::vfunc_16 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051C7C0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x30]
        cmp ebx, dword ptr [esi + 0x34]
        push edi
        lea edi, [esi + 0x2c]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov dword ptr [esi + 0x5c], edi
        pop edi
        mov dword ptr [esi + 0x60], ebx
        pop esi
        pop ebx
        ret
    }
}
