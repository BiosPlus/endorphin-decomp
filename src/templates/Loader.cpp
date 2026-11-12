// Decompiled translation unit: src/templates/Loader.cpp

extern "C" void ext_0065C660();
extern "C" void ext_006A5C5C();

// [0x004947E0] Loader<NMData::RigRoot>::vfunc_0 (36 bytes)
// Scalar deleting destructor: set vtable, run base dtor, free this if arg0 & 1.
extern "C" __declspec(naked) void __fastcall fn_004947E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x93eb28
        call ext_0065C660
        test byte ptr [esp + 0x8], 0x1
        je done
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0055D680] Loader<NMData::CameraData>::vfunc_0 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055D680(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x95841c
        call ext_0065C660
        test byte ptr [esp + 0x8], 0x1
        je done
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00494C70] Loader<NMData::CameraData>::vfunc_1 (142 bytes)
extern "C" void ext_0063F530();
extern "C" __declspec(naked) void __fastcall fn_00494C70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        mov ecx, dword ptr [esp + 0x8]
        je L_00494CB2
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0b53a34h
        je L_00494CAB
        cmp eax, 0b53b30h
        je L_00494CAB
        cmp eax, 0b53ab0h
        je L_00494CAB
        cmp eax, 0b53a70h
        je L_00494CAB
        cmp eax, 0b53af0h
        jne L_00494CB0
    L_00494CAB:
        mov eax, 0b53b30h
    L_00494CB0:
        mov ecx, eax
    L_00494CB2:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_00494CED
        push 1
        push 0
        push eax
        call ext_0063F530
        cmp eax, 0b53a34h
        je L_00494CE6
        cmp eax, 0b53b30h
        je L_00494CE6
        cmp eax, 0b53ab0h
        je L_00494CE6
        cmp eax, 0b53a70h
        je L_00494CE6
        cmp eax, 0b53af0h
        jne L_00494CEB
    L_00494CE6:
        mov eax, 0b53b30h
    L_00494CEB:
        mov ecx, eax
    L_00494CED:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax]
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x54]
        jmp eax
    }
}
