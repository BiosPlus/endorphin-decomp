// Decompiled translation unit: src/Properties/PropertySelectionEngine.cpp

extern "C" void ext_00466BA0();
extern "C" void ext_00493D90();
extern "C" void ext_004AEE60();
extern "C" void ext_004AEFF0();
extern "C" void ext_004AF570();
extern "C" void ext_004EFDB0();
extern "C" void ext_004F1400();
extern "C" void ext_004F2750();
extern "C" void ext_00661650();
extern "C" void ext_00676830();
extern "C" void ext_00676850();
extern "C" void ext_00677D10();
extern "C" void ext_00677D40();
extern "C" void ext_00677E40();
extern "C" void ext_00677FB0();
extern "C" void ext_00678100();
extern "C" int mem_00925134;

// [0x004AECA0] Properties::PropertySelectionEngine::vfunc_3 (20 bytes)
// Tail-call: forwards (self->+0x8, flag != 0) to ext_00677FB0.
extern "C" __declspec(naked) void __fastcall fn_004AECA0(void* self) {
    __asm {
        cmp dword ptr [esp + 0xc], 0
        mov ecx, dword ptr [ecx + 0x8]
        setne al
        mov dword ptr [esp + 0xc], eax
        jmp ext_00677FB0
    }
}

// [0x004AEE40] Properties::PropertySelectionEngine::vfunc_2 (28 bytes)
// Calls ext_00678100 with this=self->+0x8 and one stack arg, then stores
// the arg at self->+0xc->+0x4c.
extern "C" __declspec(naked) void __fastcall fn_004AEE40(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push edi
        call ext_00678100
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x4c], edi
        pop edi
        pop esi
        ret 4
    }
}

namespace {

struct SelectionVec {
    int pad;
    void** first;
    void** last;
    void** end;
};

struct TempObj {
    int data[2];
    TempObj(void* arg) {
        ((void (__thiscall*)(void*, void*))ext_00661650)(this, arg);
    }
    ~TempObj() {
        ((void (__thiscall*)(void*))ext_00493D90)(this);
    }
};

struct VecObj {
    int data[4];
    VecObj() {
        data[1] = 0;
        data[2] = 0;
        data[3] = 0;
    }
    ~VecObj() {
        ((void (__thiscall*)(void*))ext_004AEFF0)(this);
    }
    void push(const TempObj& obj) {
        ((void (__thiscall*)(void*, const TempObj*))ext_004AF570)(this, &obj);
    }
};

} // namespace

// [0x004AF670] Properties::PropertySelectionEngine::vfunc_0 (479 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AF670(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8890d0
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x50]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call edx
        test al, al
        mov ecx, dword ptr [esi + 0xc]
        je L_not_v20
        add ecx, 0x50
        call ext_004AEE60
        mov ecx, dword ptr [esi + 0xc]
        call ext_004EFDB0
        mov ecx, dword ptr [esi + 0x8]
        call ext_00677D10
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        mov esi, dword ptr [esi + 0x8]
        push 0x1
        mov ecx, ebx
        call edx
        push eax
        jmp L_shared_tail

    L_not_v20:
        mov eax, dword ptr [esi + 0x8]
        mov eax, dword ptr [eax + 0x70]
        mov dword ptr [ecx + 0x34], eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        mov ecx, ebx
        call edx
        mov edi, eax
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_single_or_empty
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        cmp ecx, 0x1
        ja L_multi

    L_single_or_empty:
        mov ecx, dword ptr [esi + 0xc]
        add ecx, 0x50
        call ext_004AEE60
        mov ecx, dword ptr [esi + 0xc]
        call ext_004EFDB0
        mov ecx, dword ptr [esi + 0x8]
        call ext_00677D10
        mov esi, dword ptr [esi + 0x8]
        push 0x1
        push edi

    L_shared_tail:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x54]
        mov ecx, ebx
        call edx
        push eax
        mov ecx, esi
        call ext_00677E40
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4

    L_multi:
        mov ecx, dword ptr [esi + 0x8]
        call ext_00676850
        mov ecx, dword ptr [esi + 0x8]
        call ext_00676830
        xor eax, eax
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x3c], eax
        mov eax, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0xc], eax
        jbe L_begin_ok
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0xc]

    L_begin_ok:
        mov dword ptr [esp + 0x14], eax
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    L_loop_cond:
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0xc], eax
        jbe L_end_ok
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0xc]

    L_end_ok:
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_loop_done
        cmp ecx, dword ptr [edi + 0x8]
        jb L_deref_ok
        call dword ptr [mem_00925134]

    L_deref_ok:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_00661650
        push eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x40], 0x1
        call ext_004AF570
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], 0x0
        call ext_00493D90
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [edi + 0x8]
        jb L_inc_ok
        call dword ptr [mem_00925134]

    L_inc_ok:
        add dword ptr [esp + 0x14], 0x4
        jmp L_loop_cond

    L_loop_done:
        mov ecx, dword ptr [esi + 0xc]
        call ext_004F1400
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [ebx]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [edx + 0x54]
        mov ecx, ebx
        call eax
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_004F2750
        mov ecx, dword ptr [esi + 0x8]
        push edi
        call ext_00677D40
        mov esi, dword ptr [esi + 0x8]
        push 0x0
        push edi
        lea ecx, [esi + 0x44]
        call ext_00466BA0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_004AEFF0
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
