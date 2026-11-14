// Decompiled translation unit: src/VMCSModes/SimulationMode.cpp

// [0x004F28A0] VMCSModes::SimulationMode::vfunc_88 (19 bytes)
extern "C" void ext_0046F890();

typedef unsigned char (__fastcall *Callee_0046F890)(void* self);

extern "C" int __fastcall fn_004F28A0(void* self) {
    void* obj = *(void**)((char*)self + 0x8);
    void* inner = *(void**)((char*)obj + 0x14);
    unsigned char r = ((Callee_0046F890)ext_0046F890)(inner);
    return r ? 0 : 1;
}

// [0x004F2D80] VMCSModes::SimulationMode::vfunc_20 (39 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469530();

extern "C" void __fastcall fn_004F2D80(void* self) {
    typedef void (__thiscall *Fn1)(void*, int, int);
    typedef void (__thiscall *Fn2)(void*, int);
    typedef void (__thiscall *Fn3)(void*);
    ((Fn1)ext_00469530)(*(void**)((char*)self + 0x8), 5, 0);
    ((Fn2)ext_004667A0)(*(void**)((char*)self + 0x4), 1);
    void* obj4 = *(void**)((char*)self + 0x4);
    void* inner = *(void**)((char*)obj4 + 0xc);
    void** vtbl = *(void***)inner;
    ((Fn3)vtbl[20])(inner);
}

// [0x004F2DB0] VMCSModes::SimulationMode::vfunc_21 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_004F2DB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0
        push 5
        call ext_00469530
        mov ecx, dword ptr [esi + 0x4]
        push 1
        call ext_004667A0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x54]
        pop esi
        jmp eax
    }
}

// [0x004F2C60] VMCSModes::SimulationMode::vfunc_35 (278 bytes)
extern "C" void ext_00468660();
extern "C" void ext_00468750();
extern "C" void ext_00468770();
extern "C" void ext_00468790();
extern "C" void ext_00468810();
extern "C" void ext_00468890();
extern "C" void ext_00468920();
extern "C" void ext_00472350();
extern "C" void ext_0046F930();
extern "C" int mem_00AD89B4;

extern "C" __declspec(naked) void __fastcall fn_004F2C60(void* self) {
    __asm {
        push -1
        push 088fe68h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        push edi
        mov edi, dword ptr [eax + 14h]
        test edi, edi
        mov ebx, 1
        mov dword ptr [esp + 0ch], edi
        mov byte ptr [esp + 10h], bl
        je L_4F2CB0
        cmp dword ptr [mem_00AD89B4], 0
        jne L_4F2CAA
        mov ecx, edi
        mov byte ptr [edi + 153h], bl
        call ext_00472350
L_4F2CAA:
        add dword ptr [mem_00AD89B4], ebx
L_4F2CB0:
        mov ecx, dword ptr [esi + 8]
        mov ecx, dword ptr [ecx + 14h]
        mov dword ptr [esp + 1ch], 0
        call ext_00472350
        mov ecx, dword ptr [esi + 8]
        call ext_00468750
        test al, al
        jne L_4F2CF8
        mov ecx, dword ptr [esi + 8]
        push 0
        call ext_00468790
        mov ecx, dword ptr [esi + 8]
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0a0h]
        call eax
        mov ecx, dword ptr [esi + 8]
        sub eax, ebx
        push eax
        call ext_00468810
L_4F2CF8:
        mov ecx, dword ptr [esi + 8]
        call ext_00468770
        test al, al
        jne L_4F2D2D
        mov ecx, dword ptr [esi + 8]
        push 0
        call ext_00468890
        mov ecx, dword ptr [esi + 8]
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0a0h]
        call eax
        mov ecx, dword ptr [esi + 8]
        sub eax, ebx
        push eax
        call ext_00468920
L_4F2D2D:
        mov ecx, dword ptr [esi + 8]
        push 0
        push 5
        call ext_00469530
        mov ecx, dword ptr [esi + 4]
        push ebx
        call ext_004667A0
        test edi, edi
        mov dword ptr [esp + 1ch], -1
        je L_4F2D64
        sub dword ptr [mem_00AD89B4], ebx
        jne L_4F2D64
        mov ecx, edi
        mov byte ptr [edi + 153h], 0
        call ext_0046F930
L_4F2D64:
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret
    }
}

// [0x004F2A80] VMCSModes::SimulationMode::vfunc_14 (176 bytes)
extern "C" void ext_00469530();
extern "C" void ext_0046FF50();
extern "C" void ext_00473280();
extern "C" void ext_00473390();
extern "C" void ext_00474300();
extern "C" void ext_00594000();
extern "C" void ext_0059C770();
extern "C" void ext_0065F260();

extern "C" __declspec(naked) void __fastcall fn_004F2A80(void* self, int edx_unused, int a1) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0088FB50h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0Ch
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax + 14h]
        push    edi
        mov     dword ptr [ebp - 10h], esp
        mov     dword ptr [ebp - 14h], ecx
        mov     dword ptr [ebp - 4], 0
        call    ext_00594000
        lea     ecx, [eax + 0FCh]
        call    ext_0065F260
        call    ext_00594000
        push    3
        mov     ecx, eax
        call    ext_0059C770
        mov     edx, dword ptr [esi + 8]
        mov     ecx, dword ptr [edx + 14h]
        call    ext_00473390
        mov     ecx, dword ptr [esi + 8]
        push    0
        push    5
        call    ext_00469530
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax + 14h]
        push    0
        call    ext_00473280
        mov     ecx, dword ptr [esi + 8]
        push    0
        push    5
        call    ext_00469530
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [ecx + 14h]
        push    edx
        call    ext_0046FF50
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax + 14h]
        push    1
        call    ext_00474300
        mov     ecx, dword ptr [ebp - 0Ch]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
