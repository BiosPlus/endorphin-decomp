// Decompiled translation unit: src/classes/RenderView.cpp

extern "C" int mem_00ACDB40;
extern "C" int mem_00925690;

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044BF40(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x6c], 0x0
        __asm _emit 0x74 __asm _emit 0x1B // je 0x44bf61 (next function: jmp thunk)
        mov ecx, dword ptr [mem_00ACDB40]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x20]
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x4], edx
        jmp dword ptr [mem_00925690]
    }
}

// [0x0044C260] RenderView::vfunc_0_off_60 (58 bytes)
extern "C" void ext_0044BC60();

extern "C" __declspec(naked) void __fastcall fn_0044C260(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov cl, byte ptr [eax]
        mov byte ptr [esi + 0x14], cl
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip_0044C260
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test eax, eax
        je skip_0044C260
        cmp byte ptr [esi + 0x14], 0x0
        sete cl
        mov byte ptr [eax + 0x85], cl
    skip_0044C260:
        lea ecx, [esi - 0x60]
        call ext_0044BC60
        pop esi
        ret 0x4
    }
}
