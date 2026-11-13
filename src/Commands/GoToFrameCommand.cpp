// Decompiled translation unit: src/Commands/GoToFrameCommand.cpp

#include <sstream>
#include <string>

extern "C" void ext_00435D00();
extern "C" void ext_00468180();
extern "C" void ext_00468660();

// [0x0048E050] Commands::GoToFrameCommand::vfunc_1 (30 bytes)
extern "C" void __fastcall fn_0048E050(void* self) {
    typedef void* (__fastcall *Fn)(void*);
    typedef void (__thiscall *VFn)(void*, int);
    void* a = ((Fn)ext_00468180)(self);
    void* b = ((Fn)ext_00468660)(a);
    int arg = *(int*)((char*)self + 0x10);
    VFn f = (VFn)(*(void***)b)[0x58 / 4];
    f(b, arg);
}

// [0x0048E420] Commands::GoToFrameCommand::vfunc_3 (163 bytes)
extern "C" int mem_00924E4C;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void __fastcall fn_0048E420(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x88533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0xc]
        push 0x93e5fc
        push ecx
        mov dword ptr [esp + 0x9c], 1
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov esi, dword ptr [esp + 0x98]
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 4
    }
}
