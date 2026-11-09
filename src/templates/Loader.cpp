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
