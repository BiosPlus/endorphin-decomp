// Decompiled translation unit: src/classes/TransformRefNode.cpp

// [0x00626650] TransformRefNode::vfunc_12_off_4 (138 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B4B860;
extern "C" int mem_00B4B820;
extern "C" int mem_00B4B824;
extern "C" int mem_00B4B828;
extern "C" int mem_00B4B82C;
extern "C" int mem_00B4B830;
extern "C" int mem_00B4B834;
extern "C" int mem_00B4B838;
extern "C" int mem_00B4B83C;
extern "C" int mem_00B4B840;
extern "C" int mem_00B4B844;
extern "C" int mem_00B4B848;
extern "C" int mem_00B4B84C;
extern "C" int mem_00B4B850;
extern "C" int mem_00B4B854;
extern "C" int mem_00B4B858;
extern "C" int mem_00B4B85C;

extern "C" __declspec(naked) void* __cdecl fn_00626650(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B4B860], al
        jne early_out
        fld1
        or dword ptr [mem_00B4B860], eax
        fst dword ptr [mem_00B4B820]
        push 0x91f1d0
        fldz
        fst dword ptr [mem_00B4B824]
        fst dword ptr [mem_00B4B828]
        fst dword ptr [mem_00B4B82C]
        fst dword ptr [mem_00B4B830]
        fst dword ptr [mem_00B4B838]
        fst dword ptr [mem_00B4B83C]
        fst dword ptr [mem_00B4B840]
        fst dword ptr [mem_00B4B844]
        fst dword ptr [mem_00B4B84C]
        fst dword ptr [mem_00B4B850]
        fst dword ptr [mem_00B4B854]
        fstp dword ptr [mem_00B4B858]
        fst dword ptr [mem_00B4B834]
        fst dword ptr [mem_00B4B848]
        fstp dword ptr [mem_00B4B85C]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B4B820
        ret
    }
}

// [0x006266E0] TransformRefNode::vfunc_11_off_4 (138 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B4B8A8;
extern "C" int mem_00B4B868;
extern "C" int mem_00B4B86C;
extern "C" int mem_00B4B870;
extern "C" int mem_00B4B874;
extern "C" int mem_00B4B878;
extern "C" int mem_00B4B87C;
extern "C" int mem_00B4B880;
extern "C" int mem_00B4B884;
extern "C" int mem_00B4B888;
extern "C" int mem_00B4B88C;
extern "C" int mem_00B4B890;
extern "C" int mem_00B4B894;
extern "C" int mem_00B4B898;
extern "C" int mem_00B4B89C;
extern "C" int mem_00B4B8A0;
extern "C" int mem_00B4B8A4;

extern "C" __declspec(naked) void* __cdecl fn_006266E0(void) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B4B8A8], al
        jne early_out
        fld1
        or dword ptr [mem_00B4B8A8], eax
        fst dword ptr [mem_00B4B868]
        push 0x91f1c0
        fldz
        fst dword ptr [mem_00B4B86C]
        fst dword ptr [mem_00B4B870]
        fst dword ptr [mem_00B4B874]
        fst dword ptr [mem_00B4B878]
        fst dword ptr [mem_00B4B880]
        fst dword ptr [mem_00B4B884]
        fst dword ptr [mem_00B4B888]
        fst dword ptr [mem_00B4B88C]
        fst dword ptr [mem_00B4B894]
        fst dword ptr [mem_00B4B898]
        fst dword ptr [mem_00B4B89C]
        fstp dword ptr [mem_00B4B8A0]
        fst dword ptr [mem_00B4B87C]
        fst dword ptr [mem_00B4B890]
        fstp dword ptr [mem_00B4B8A4]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B4B868
        ret
    }
}

// [0x006265C0] TransformRefNode::vfunc_3_off_4 (140 bytes)
extern "C" int mem_00B4B818;
extern "C" int mem_00B4B7D8;
extern "C" int mem_00B4B7DC;
extern "C" int mem_00B4B7E0;
extern "C" int mem_00B4B7E4;
extern "C" int mem_00B4B7E8;
extern "C" int mem_00B4B7EC;
extern "C" int mem_00B4B7F0;
extern "C" int mem_00B4B7F4;
extern "C" int mem_00B4B7F8;
extern "C" int mem_00B4B7FC;
extern "C" int mem_00B4B800;
extern "C" int mem_00B4B804;
extern "C" int mem_00B4B808;
extern "C" int mem_00B4B80C;
extern "C" int mem_00B4B810;
extern "C" int mem_00B4B814;

extern "C" __declspec(naked) void* __fastcall fn_006265C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B4B818], al
        jne early_out
        fld1
        or dword ptr [mem_00B4B818], eax
        fst dword ptr [mem_00B4B7D8]
        push 0x91f1e0
        fldz
        fst dword ptr [mem_00B4B7DC]
        fst dword ptr [mem_00B4B7E0]
        fst dword ptr [mem_00B4B7E4]
        fst dword ptr [mem_00B4B7E8]
        fst dword ptr [mem_00B4B7F0]
        fst dword ptr [mem_00B4B7F4]
        fst dword ptr [mem_00B4B7F8]
        fst dword ptr [mem_00B4B7FC]
        fst dword ptr [mem_00B4B804]
        fst dword ptr [mem_00B4B808]
        fst dword ptr [mem_00B4B80C]
        fstp dword ptr [mem_00B4B810]
        fst dword ptr [mem_00B4B7EC]
        fst dword ptr [mem_00B4B800]
        fstp dword ptr [mem_00B4B814]
        call ext_006A6C87
        add esp, 4
    early_out:
        mov eax, offset mem_00B4B7D8
        ret 4
    }
}

// [0x00626510] TransformRefNode::vfunc_29 (170 bytes)
extern "C" int mem_00924ED0;
extern "C" int mem_00924FE0;
extern "C" int mem_00925014;
extern "C" int mem_00925100;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00626510(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x94]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x34]
        je skip_vcall
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        push edi
        call edx
        push 0x92ab70
        mov ecx, edi
        call dword ptr [mem_00924ED0]
    skip_vcall:
        add esi, 0x14
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x968ec8
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0x0
        call dword ptr [mem_00925014]
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, eax
        push ecx
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00925100]
        lea edx, [esp + 0x8]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x006264A0] TransformRefNode::vfunc_17_off_C (99 bytes)
extern "C" void ext_00626450();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_006264A0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 0ech
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_006264A0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_00626450
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_006264A0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}
