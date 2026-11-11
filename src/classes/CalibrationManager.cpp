// Decompiled translation unit: src/classes/CalibrationManager.cpp

// [0x0065F8E0] CalibrationManager::vfunc_9 (96 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B59014;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0065F8E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008B266E
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59014], al
        jne done
        or dword ptr [mem_00B59014], eax
        push 0x00987724
        mov ecx, 0x00B58FF8
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FE4]
        push 0x00921410
        call ext_006A6C87
        add esp, 0x4
done:
        mov ecx, dword ptr [esp]
        mov eax, 0x00B58FF8
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret
    }
}
