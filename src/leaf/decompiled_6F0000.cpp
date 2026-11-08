// Decompiled translation unit: src/leaf/decompiled_6F0000.cpp

// [0x006F9DC0] sub_006F9DC0 (32 bytes)
// Store four stack args into the object: dwords at +0, +4, +8 and a byte at +0xC (ret 0x10).
extern "C" __declspec(naked) void __fastcall fn_006F9DC0(void* self, int edx_unused, int a1, int a2, int a3, unsigned char a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dl, byte ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov byte ptr [eax + 0xc], dl
        ret 0x10
    }
}

// [0x006FA350] sub_006FA350 (32 bytes)
// Returns self if arg0 is 0, 2 or 0xDE1947F3; otherwise returns NULL (ret 8).
extern "C" __declspec(naked) void* __fastcall fn_006FA350(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        je done
        cmp ecx, 0x2
        je done
        xor edx, edx
        cmp ecx, 0xde1947f3
        setne dl
        dec edx
        and eax, edx
    done:
        ret 0x8
    }
}
