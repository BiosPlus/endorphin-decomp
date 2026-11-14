// Decompiled translation unit: src/ExprParser/Operators/Evaluate.cpp

extern "C" void ext_00401CC0();
extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF50();
extern "C" void ext_00435D00();
extern "C" void ext_00486980();
extern "C" void ext_006720C0();
extern "C" void ext_0067F960();
extern "C" void ext_00681020();
extern "C" int mem_00924FF4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

// [0x006A1CF0] ExprParser::Operators::Evaluate::vfunc_3 (242 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1CF0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8b6c89
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        call ext_0067F960
        mov edi, dword ptr [ebp + 0x8]
        mov esi, eax
        lea eax, [ebp - 0x40]
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 0x4], 0
        call ext_0041CEB0
        push 0
        push esi
        push eax
        lea ecx, [ebp - 0x1c]
        mov bl, 1
        push ecx
        mov byte ptr [ebp - 0x4], bl
        call ext_00681020
        add esp, 0x10
        push eax
        mov ecx, edi
        mov byte ptr [ebp - 0x4], 2
        call ext_0041CF50
        mov ecx, dword ptr [ebp - 0x18]
        test ecx, ecx
        mov byte ptr [ebp - 0x4], bl
        je loc_6A1D63
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [ebp - 0x1c]
        push eax
        call edx
    loc_6A1D63:
        lea ecx, [ebp - 0x40]
        mov byte ptr [ebp - 0x4], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [ebp - 0x14]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        add ecx, 0xc
        push ecx
        push 0x990160
        push edx
        call ext_00435D00
        add esp, 8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push 0
        lea ecx, [ebp - 0x24]
        call ext_006720C0
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 0x24]
        push eax
        mov byte ptr [ebp - 4], 4
        call ext_00486980
        lea ecx, [ebp - 0x24]
        mov byte ptr [ebp - 4], 3
        call ext_00401CC0
        mov eax, 0x6a1d70
        ret
    }
}
