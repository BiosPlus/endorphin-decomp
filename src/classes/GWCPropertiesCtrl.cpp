// Decompiled translation unit: src/classes/GWCPropertiesCtrl.cpp

// [0x006A7A60] GWCPropertiesCtrl::vfunc_22 (37 bytes)
extern "C" void ext_006A5CE0();
extern "C" void ext_006A5EA2();

extern "C" __declspec(naked) void __fastcall fn_006A7A60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5CE0
        push 0x0
        push 0x2000000
        push 0x0
        mov ecx, esi
        call ext_006A5EA2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x174]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x006A83E0] GWCPropertiesCtrl::vfunc_93 (225 bytes)
extern "C" void ext_004077E0();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A6190();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_00872778();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_006A83E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b70a8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0xe8], -1
        jne L_006A84B1
        push esi
        push 0
        call dword ptr [mem_00925658]
        mov esi, eax
        test esi, esi
        je L_006A84B0
        push ebx
        lea ecx, [esp + 0x18]
        call ext_006A61A2
        push esi
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x34], 0
        call ext_006A6190
        lea eax, [edi + 0xdc]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A5EC6
        push 0x990ad4
        lea ecx, [esp + 0x10]
        mov ebx, eax
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x20]
        call ext_004077E0
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esp + 0x14]
        add eax, 4
        push ebx
        lea ecx, [esp + 0x1c]
        mov dword ptr [edi + 0xe8], eax
        call ext_006A5EC6
        lea ecx, [esp + 0x18]
        call ext_00872778
        push esi
        push 0
        call dword ptr [mem_00925620]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x30], -1
        call ext_006A619C
        pop ebx
    L_006A84B0:
        pop esi
    L_006A84B1:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x006AAE10] GWCPropertiesCtrl::vfunc_92 (1005 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A63BE();
extern "C" void ext_006A6796();
extern "C" void ext_006A67E4();
extern "C" void ext_006A8980();
extern "C" void ext_006AA2E0();
extern "C" void ext_006ACFD0();
extern "C" void ext_006AD010();
extern "C" void ext_006AD070();
extern "C" void ext_006AD080();
extern "C" void ext_006AD090();
extern "C" void ext_006AD0E0();
extern "C" void ext_006AD0F0();
extern "C" void ext_006AD100();
extern "C" void ext_006AD190();
extern "C" void ext_006AD2E0();
extern "C" void ext_006AEC60();
extern "C" void ext_006B2AB0();
extern "C" void ext_006B2AF0();
extern "C" void ext_00872784();
extern "C" void ext_006A60EE();
extern "C" int mem_00924300;
extern "C" int mem_00924C90;
extern "C" int mem_009242F4;
extern "C" int mem_0092557C;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006AAE10(void* self) {
    __asm {
        push -1
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push 0x8B730D
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push edi
        mov edi, dword ptr [esi + 0x60]
        test edi, edi
        mov byte ptr [esi + 0xFD], 0
        mov dword ptr [esi + 0x6C], edi
        mov dword ptr [esi + 0x70], eax
        je LA_EC
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
LA_50:
        call ext_006AEC60
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        jne LA_63
        call ext_006B2AB0
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        je LA_9A
        push 0x5C
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x28], eax
        test eax, eax
        mov dword ptr [esp + 0x34], 0
        je LA_BE
        push edi
        mov ecx, eax
        call ext_006B2AF0
        jmp LA_C0
LA_9A:
        push 0x50
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x28], eax
        test eax, eax
        mov dword ptr [esp + 0x34], 1
        je LA_BE
        push edi
        mov ecx, eax
        call ext_006AD2E0
        jmp LA_C0
LA_BE:
        xor eax, eax
LA_C0:
        mov edx, dword ptr [esi + 0x90]
        lea ecx, [esi + 0x88]
        push eax
        push edx
        mov dword ptr [esp + 0x3C], 0xFFFFFFFF
        call ext_006A6796
LA_DB:
        mov ecx, edi
        call ext_006AD100
        mov edi, eax
LA_E4:
        test edi, edi
        jne LA_50
LA_EC:
        mov eax, dword ptr [esi + 0x90]
        add eax, -1
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0x1C], 0
        jle LA_2C
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
LA_10:
        mov eax, dword ptr [esi + 0x90]
        sub eax, dword ptr [esp + 0x10]
        xor ebp, ebp
        sub eax, 1
        test eax, eax
        jle LA_0B
        lea edi, [esi + 0x88]
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
LA_30:
        test ebp, ebp
        jl LA_B3
        cmp ebp, dword ptr [edi + 8]
        jge LA_B3
        mov eax, dword ptr [edi + 4]
        __asm _emit 0x8D __asm _emit 0x0C __asm _emit 0xAD __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [4*ebp]
        mov edx, dword ptr [eax + ecx]
        add eax, ecx
        lea eax, [ebp + 1]
        test eax, eax
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x18], eax
        jl LA_B3
        cmp eax, dword ptr [edi + 8]
        jge LA_B3
        mov eax, dword ptr [edi + 4]
        lea eax, [eax + ecx + 4]
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, eax
        call ext_006AD010
        mov ebx, eax
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [esp + 0x24]
        push edx
        mov dword ptr [esp + 0x38], 2
        call ext_006AD010
        mov ecx, ebx
        mov dword ptr [esp + 0x20], eax
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x20]
        push eax
        call dword ptr [mem_00924C90]
        test eax, eax
        lea ecx, [esp + 0x24]
        setg bl
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x34], 0xFFFFFFFF
        call dword ptr [mem_009242F4]
        test bl, bl
        je LA_F2
        push 1
        push ebp
        mov ecx, edi
        call ext_00872784
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        push 1
        push eax
        push ecx
        mov ecx, edi
        call ext_006A67E4
LA_F2:
        mov edx, dword ptr [esi + 0x90]
        sub edx, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x18]
        sub edx, 1
        cmp ebp, edx
        jl LA_30
LA_0B:
        mov eax, dword ptr [esp + 0x1C]
        mov ecx, dword ptr [esi + 0x90]
        add dword ptr [esp + 0x10], 1
        add eax, 1
        sub ecx, 1
        cmp eax, ecx
        mov dword ptr [esp + 0x1C], eax
        jl LA_10
LA_2C:
        xor ebx, ebx
        xor edi, edi
        cmp dword ptr [esi + 0x90], ebx
        mov dword ptr [esi + 0x68], ebx
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esi + 0x5C], ebx
        jle LA_19F
LA_45:
        cmp edi, ebx
        jl LA_B3
        cmp edi, dword ptr [esi + 0x90]
        jge LA_B3
        cmp edi, ebx
        mov edx, dword ptr [esi + 0x8C]
        mov ebp, dword ptr [edx + 4*edi]
        jne LA_B8
        mov dword ptr [esi + 0x60], ebp
        jmp LA_C8
LA_63:
        mov ecx, edi
        call ext_006AD090
        test al, al
        jne LA_DB
        mov ecx, edi
        call ext_006ACFD0
        mov ecx, edi
        mov ebx, eax
        call ext_006AD190
        mov edi, eax
        test edi, edi
        jne LA_50
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
LA_90:
        test ebx, ebx
        je LA_E4
        mov ecx, ebx
        call ext_006AD190
        mov ecx, ebx
        mov edi, eax
        call ext_006ACFD0
        test edi, edi
        mov ebx, eax
        je LA_90
        jmp LA_50
LA_B3:
        jmp ext_006A60EE
LA_B8:
        mov eax, dword ptr [esi + 0x90]
        sub eax, 1
        cmp edi, eax
        jne LA_C8
        mov dword ptr [esi + 0x64], ebp
LA_C8:
        mov ecx, dword ptr [esi + 0x90]
        sub ecx, 1
        cmp edi, ecx
        jge LA_F5
        lea eax, [edi + 1]
        cmp eax, ebx
        jl LA_B3
        cmp eax, dword ptr [esi + 0x90]
        jge LA_B3
        mov edx, dword ptr [esi + 0x8C]
        mov eax, dword ptr [edx + 4*eax]
        push eax
        mov ecx, ebp
        call ext_006AD0E0
LA_F5:
        cmp edi, ebx
        jle LA_119
        lea eax, [edi - 1]
        cmp eax, ebx
        jl LA_B3
        cmp eax, dword ptr [esi + 0x90]
        jge LA_B3
        mov ecx, dword ptr [esi + 0x8C]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        mov ecx, ebp
        call ext_006AD0F0
LA_119:
        add edi, 1
        cmp edi, dword ptr [esi + 0x90]
        mov dword ptr [esp + 0x20], edi
        jge LA_169
LA_128:
        test edi, edi
        jl LA_B3
        cmp edi, dword ptr [esi + 0x90]
        jge LA_B3
        mov eax, dword ptr [esi + 0x8C]
        mov ebx, dword ptr [eax + 4*edi]
        mov ecx, ebx
        call ext_006AD090
        test al, al
        jne LA_159
        add edi, 1
        cmp edi, dword ptr [esi + 0x90]
        jl LA_128
        jmp LA_169
LA_159:
        push ebx
        mov ecx, ebp
        call ext_006AD070
        push ebp
        mov ecx, ebx
        call ext_006AD080
LA_169:
        xor ebx, ebx
        cmp dword ptr [esi + 0x68], ebx
        jne LA_181
        mov ecx, ebp
        call ext_006AD090
        test al, al
        je LA_181
        mov dword ptr [esi + 0x58], ebp
        mov dword ptr [esi + 0x68], ebp
LA_181:
        mov ecx, ebp
        call ext_006AD090
        test al, al
        je LA_18F
        mov dword ptr [esi + 0x5C], ebp
LA_18F:
        mov edi, dword ptr [esp + 0x20]
        cmp edi, dword ptr [esi + 0x90]
        jl LA_45
LA_19F:
        mov ecx, esi
        call ext_006A8980
        lea eax, [esi + 0x108]
        cmp eax, ebx
        mov dword ptr [esi + 0x54], ebx
        je LA_1D1
        cmp dword ptr [eax + 0x20], ebx
        je LA_1D1
        mov ecx, dword ptr [esi + 0x128]
        push 1
        push ebx
        push 2
        push ecx
        call dword ptr [mem_0092557C]
        mov ecx, esi
        call ext_006AA2E0
LA_1D1:
        mov edx, dword ptr [esi + 0x20]
        push 1
        push ebx
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x148]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x28
        ret
    }
}
