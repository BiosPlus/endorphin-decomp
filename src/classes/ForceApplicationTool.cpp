// Decompiled translation unit: src/classes/ForceApplicationTool.cpp

// [0x00544380] ForceApplicationTool::vfunc_26 (18 bytes)
extern "C" void ext_005442D0();

extern "C" void __fastcall fn_00544380(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    ext_005442D0();
    void* vt = *(void**)self;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(self);
}

// [0x00544070] ForceApplicationTool::vfunc_24 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544070(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x3c]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x005441F0] ForceApplicationTool::vfunc_14 (35 bytes)
extern "C" int __fastcall fn_005441F0(void* self) {
    if (*(int*)((char*)self + 0xc0) < 0) {
        void* sub = *(void**)((char*)self + 0xa8);
        typedef unsigned char (__fastcall *VFunc)(void*);
        if (!(*(VFunc*)(*(char**)sub + 0x38))(sub)) {
            return 0;
        }
    }
    return 1;
}

// [0x00544040] ForceApplicationTool::vfunc_23 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        push 0x1
        call edx
    done:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x005442A0] ForceApplicationTool::vfunc_29 (41 bytes)
extern "C" void __fastcall ext_005528A0(void* self);
extern "C" int mem_00940690;

extern "C" void __fastcall fn_005442A0(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    char* s = (char*)self;
    ext_005528A0(s + 0xb0);
    void* sub = *(void**)(s + 0xa8);
    void* vt = *(void**)sub;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(sub);
    *(float*)(s + 0xbc) = *(float*)&mem_00940690;
}

// [0x005441C0] ForceApplicationTool::vfunc_28 (44 bytes)
extern "C" void ext_00552860();

extern "C" __declspec(naked) void __fastcall fn_005441C0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0xb0]
        call ext_00552860
        mov ecx, dword ptr [esi + 0xa8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x70]
        push edi
        push edx
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}
