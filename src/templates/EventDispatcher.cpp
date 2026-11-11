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
