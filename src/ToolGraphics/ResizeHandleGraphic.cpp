// Decompiled translation unit: src/ToolGraphics/ResizeHandleGraphic.cpp

// [0x0054BF50] ToolGraphics::ResizeHandleGraphic::vfunc_4 (198 bytes)
extern "C" void ext_0054B180();
extern "C" void ext_0054B780();
extern "C" void ext_0054BB30();
extern "C" int mem_00925414; /* ":tb" */
extern "C" int mem_009254B0; /* "pvb" */
extern "C" int mem_00925404; /* u32 0x00627404 */

extern "C" __declspec(naked) void __fastcall fn_0054BF50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_00925414]
        fld dword ptr [esi + 0x20]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp]
        call dword ptr [mem_009254B0]
        mov eax, dword ptr [esi + 0x14]
        cmp eax, 0x4
        ja fn_0054BF50_default
        jmp dword ptr [4*eax + 0x54c018]
    fn_0054BF50_case0:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push 0x1
        push eax
        push ecx
        mov ecx, esi
        call ext_0054B780
        call dword ptr [mem_00925404]
        pop esi
        ret 0x8
    fn_0054BF50_case4:
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push 0x1
        push edx
        push eax
        mov ecx, esi
        call ext_0054B780
        call dword ptr [mem_00925404]
        pop esi
        ret 0x8
    fn_0054BF50_case1:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push 0x0
        push ecx
        push edx
        mov ecx, esi
        call ext_0054B780
        call dword ptr [mem_00925404]
        pop esi
        ret 0x8
    fn_0054BF50_case2:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_0054BB30
        call dword ptr [mem_00925404]
        pop esi
        ret 0x8
    fn_0054BF50_case3:
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        mov ecx, esi
        call ext_0054B180
    fn_0054BF50_default:
        call dword ptr [mem_00925404]
        pop esi
        ret 0x8
    }
}
