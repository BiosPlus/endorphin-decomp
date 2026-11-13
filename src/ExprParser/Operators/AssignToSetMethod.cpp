// Decompiled translation unit: src/ExprParser/Operators/AssignToSetMethod.cpp

// [0x006A1FB0] ExprParser::Operators::AssignToSetMethod::vfunc_2 (330 bytes)
extern "C" void ext_0048A120();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A1FB0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b33b8
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov ebp, ecx
        je loc_6a1fe5
        mov edi, dword ptr [esi + 0x8]
        sub edi, eax
        sar edi, 0x3
        cmp edi, 0x1
        jge loc_6a1ffc

loc_6a1fe5:
        push 0xa183e8
        lea eax, [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x30], 0x2
        call ext_006A6DD2

loc_6a1ffc:
        cmp edi, 0x2
        jge loc_6a2064
        push 0x0
        lea ecx, [esp + 0x10]
        call ext_006720C0
        mov ecx, dword ptr [esi + 0x4]
        add edi, -0x1
        test ecx, ecx
        mov dword ptr [esp + 0x1c], 0x0
        je loc_6a202a
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb loc_6a2030

loc_6a202a:
        call dword ptr [mem_00925134]

loc_6a2030:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0xc]
        lea eax, [esp + 0xc]
        push eax
        lea eax, [ecx + 8*edi]
        push eax
        mov ecx, ebp
        call edx
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], 0xffffffff
        je loc_6a20c9
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0xc]
        push edx
        call eax
        jmp loc_6a20c9

loc_6a2064:
        push ebx
        lea ebx, [edi - 0x1]
        cmp ebx, edi
        jb loc_6a2072
        call dword ptr [mem_00925134]

loc_6a2072:
        mov eax, dword ptr [esi + 0x4]
        add edi, -0x2
        test eax, eax
        lea ebx, [eax + 8*ebx]
        je loc_6a208b
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x3
        cmp edi, ecx
        jb loc_6a2091

loc_6a208b:
        call dword ptr [mem_00925134]

loc_6a2091:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 8*edi]
        push ebx
        push ecx
        mov ecx, ebp
        call edx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        pop ebx
        je loc_6a20c9
        mov ecx, dword ptr [esi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x3
        je loc_6a20c9
        push esi
        push ecx
        add ecx, -0x8
        push ecx
        call ext_0048A120
        add esp, 0xc
        add dword ptr [esi + 0x8], -0x8

loc_6a20c9:
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [edx + 0x4]
        test eax, eax
        je loc_6a20e6
        mov ecx, dword ptr [edx + 0x8]
        mov esi, ecx
        sub esi, eax
        sar esi, 0x2
        je loc_6a20e6
        add ecx, -0x4
        mov dword ptr [edx + 0x8], ecx

loc_6a20e6:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret 0x8
    }
}
