// Decompiled translation unit: src/NMData/RPROJointData.cpp

// [0x005EC2A0] NMData::RPROJointData::vfunc_63 (34 bytes)
extern "C" void ext_005EB920();

extern "C" __declspec(naked) void __fastcall fn_005EC2A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, dword ptr [ecx + 0x194]
        je done
        cmp eax, 0x5
        jne skip
        mov eax, 0x3
    skip:
        mov dword ptr [esp + 0x4], eax
        jmp ext_005EB920
    done:
        ret 0x8
    }
}

// [0x00584FD0] NMData::RPROJointData::vfunc_59 (35 bytes)
extern "C" int mem_00A9F1E4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_00584FD0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1E4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005F3330] NMData::RPROJointData::vfunc_21 (63 bytes)
extern "C" void ext_00427640();
extern "C" void ext_005F2970();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F718;

extern "C" void __fastcall fn_005F3330(void* self, int edx_unused, void* a1) {
    ((void (__thiscall*)(void*, void*))ext_005F2970)(self, a1);
    int val = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F718);
    ((void (__cdecl*)(void*, int*))ext_00427640)((char*)self + 0x2f8, &val);
    *((unsigned char*)self + 0x178) = 1;
}

// [0x005EC250] NMData::RPROJointData::vfunc_22 (80 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_005EB5A0();
extern "C" void ext_00640110();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F1E4;
extern "C" int mem_00A9F718;

extern "C" __declspec(naked) void* __fastcall fn_005EC250(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F1E4]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, ebx
        call ext_006404E0
        mov edi, eax
        push edi
        mov ecx, esi
        call ext_005EB5A0
        cmp byte ptr [esi + 0x2f8], 0x0
        je done
        mov ecx, dword ptr [mem_00A9F718]
        push ecx
        mov ecx, edi
        call ext_00640110
        movzx edx, byte ptr [esi + 0x2f8]
        push edx
        push eax
        call ext_00640A80
        add esp, 0x8
    done:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    }
}

// [0x005F0A20] NMData::RPROJointData::vfunc_17_off_C (186 bytes)
extern "C" void ext_005881D0();
extern "C" void ext_005F0960();
extern "C" void ext_0065F280();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005F0A20(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x2fc
        mov ebx, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x18], esi
        je noobj
        mov ecx, eax
        call ext_005F0960
        mov esi, eax
    noobj:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        lea ecx, [ebx + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call edx
        mov al, byte ptr [ebx + 0x16c]
        lea edi, [ebx - 0xc]
        push edi
        mov ecx, esi
        mov byte ptr [esi + 0x178], al
        call ext_005881D0
        lea ecx, [edi + 0xe4]
        push ecx
        lea ecx, [esi + 0xe4]
        call ext_0065F280
        mov edx, dword ptr [edi + 0xe8]
        mov dword ptr [esi + 0xe8], edx
        mov eax, dword ptr [edi + 0xec]
        mov dword ptr [esi + 0xec], eax
        mov edx, dword ptr [ebx - 0x8]
        mov eax, dword ptr [edx + 0x20]
        lea ecx, [ebx - 0x8]
        call eax
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esi + 0x148], al
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
