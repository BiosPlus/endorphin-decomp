// Decompiled translation unit: src/templates/EventDispatcher.cpp

// [0x0046A400] EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}>::vfunc_3 (111 bytes)
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0046A400(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0Ch]
        cmp dword ptr [edi + 8], ebx
        lea esi, [edi + 4]
        jbe chk1_ok
        call dword ptr [mem_00925134]
    chk1_ok:
        push ebp
        mov ebp, dword ptr [esi + 4]
        cmp ebp, dword ptr [esi + 8]
        jbe chk2_ok
        call dword ptr [mem_00925134]
    chk2_ok:
        push ebx
        push esi
        push ebp
        push esi
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        call ext_00596660
        lea esi, [edi + 14h]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        pop ebp
        jbe chk3_ok
        call dword ptr [mem_00925134]
    chk3_ok:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe chk4_ok
        call dword ptr [mem_00925134]
    chk4_ok:
        push edi
        push esi
        push ebx
        push esi
        lea ecx, [esp + 1Ch]
        push ecx
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0043A3F0] EventDispatcher<EngineEventListener, &[thunk]: __thiscall SelectionListener::`vcall'{0, {flat}}>::vfunc_1 (203 bytes)
extern "C" void ext_0043CB70();
extern "C" void ext_0046A3C0();
extern "C" void ext_0046A810();
extern "C" void ext_004750C0();
extern "C" void ext_00678D70();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0043A3F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87ac78
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        call ext_0046A3C0
        mov dword ptr [esp + 0x14], eax
        mov byte ptr [eax + 0x11], 1
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esp + 0x18], 0
        lea eax, [esp + 0x10]
        push eax
        lea edi, [esi + 0x14]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_004750C0
        test eax, eax
        je L_skip_loop
    L_loop:
        mov ecx, eax
        call ext_0043CB70
        lea ecx, [esp + 0x10]
        push ecx
        push edi
        mov ecx, esi
        call ext_004750C0
        test eax, eax
        jne L_loop
    L_skip_loop:
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov ecx, esi
        call ext_00678D70
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        mov esi, ecx
        push esi
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x38], 0xffffffff
        call ext_0046A810
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x20]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 4
    }
}

// [0x0046AD60] EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}>::vfunc_1 (203 bytes)
extern "C" void ext_0046A470();

extern "C" __declspec(naked) void __fastcall fn_0046AD60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87ac78
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        call ext_0046A3C0
        mov dword ptr [esp + 0x14], eax
        mov byte ptr [eax + 0x11], 1
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esp + 0x18], 0
        lea eax, [esp + 0x10]
        push eax
        lea edi, [esi + 0x14]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_004750C0
        test eax, eax
        je L_skip_loop
    L_loop:
        mov ecx, eax
        call ext_0046A470
        lea ecx, [esp + 0x10]
        push ecx
        push edi
        mov ecx, esi
        call ext_004750C0
        test eax, eax
        jne L_loop
    L_skip_loop:
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov ecx, esi
        call ext_00678D70
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        mov esi, ecx
        push esi
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x38], 0xffffffff
        call ext_0046A810
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x20]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 4
    }
}
