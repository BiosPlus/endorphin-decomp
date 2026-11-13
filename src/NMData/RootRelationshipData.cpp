// Decompiled translation unit: src/NMData/RootRelationshipData.cpp
#include <string>

// [0x005EBEA0] NMData::RootRelationshipData::vfunc_22 (17 bytes)
extern "C" void ext_005EB5A0();

extern "C" __declspec(naked) void* __fastcall fn_005EBEA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_005EB5A0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x005EE2B0] NMData::RootRelationshipData::vfunc_33 (24 bytes)
extern "C" void ext_005EDFD0();
extern "C" int mem_00924FD4;

extern "C" void __fastcall fn_005EE2B0(void* self) {
    ((void (__fastcall*)(void*))ext_005EDFD0)(self);
    typedef void* (__thiscall *AssignFn)(void*, const char*);
    ((AssignFn)mem_00924FD4)((char*)self + 0x14, "root");
}

// [0x005E4AC0] NMData::RootRelationshipData::vfunc_3 (231 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void* __fastcall fn_005E4AC0(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x889b98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xa0
        push esi
        push edi
        push 0x1
        mov esi, ecx
        push 0x2
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x18c]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0xb4], 0x1
        call eax
        mov edi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        mov byte ptr [esp + 0xb0], 0x2
        call eax
        mov esi, dword ptr [mem_00924E94]
        push eax
        push 0x92ab70
        lea ecx, [esp + 0x30]
        push edi
        push ecx
        call esi
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call esi
        add esp, 0x8
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xb0], 0x1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xb8]
        push esi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0x1
        mov byte ptr [esp + 0xb0], 0x0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xa8]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xac
        ret 0x4
    }
}

// [0x005F2F50] NMData::RootRelationshipData::vfunc_21 (45 bytes)
extern "C" void ext_005F2970();
extern "C" int mem_00924FEC;
extern "C" int mem_00924FD4;
extern "C" int mem_0093E1E4;
extern "C" __declspec(naked) void __fastcall fn_005F2F50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005F2970
        add esi, 0x14
        mov ecx, esi
        call dword ptr [mem_00924FEC]
        test al, al
        je done
        push offset mem_0093E1E4
        mov ecx, esi
        call dword ptr [mem_00924FD4]
    done:
        pop esi
        ret 0x4
    }
}
