// Decompiled translation unit: src/MultiTrackView/SimpleRangeMarker.cpp

extern "C" int __fastcall ext_00441020(void* self);
extern "C" int __fastcall ext_00441040(void* self);
extern "C" void __fastcall ext_00440A20(void* self);
extern "C" void __fastcall ext_00440B00(void* self, int edx_unused, void* a1);
extern "C" void __fastcall ext_00441AC0(void* self, int edx_unused, void* a1);
extern "C" void __fastcall ext_00441C10(void* self, int edx_unused, int a1, void* a2);
extern "C" void __fastcall ext_004425C0(void* self, int edx_unused, int a1, void* a2);
extern "C" void __fastcall ext_004426E0(void* self, int edx_unused, int a1, void* a2);
extern "C" void __fastcall ext_00441E30(void* self, int edx_unused, int a1, void* a2);
extern "C" void __fastcall ext_00441A60(void* self, int edx_unused, int a1, int a2);
extern "C" void __fastcall ext_0043B4D0(void* self);

// [0x00442860] MultiTrackView::SimpleRangeMarker::vfunc_1 (255 bytes)
extern "C" __declspec(naked) void __fastcall fn_00442860(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87ba1b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push edi
        mov esi, ecx
        call ext_00441020
        mov edx, eax
        call ext_00441040
        cmp edx, eax
        mov ecx, dword ptr [esp + 0xa4]
        push ecx
        jne else_branch
        mov edx, dword ptr [esp + 0xa4]
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0xa0]
        mov eax, dword ptr [eax + 0x8]
        push edx
        push edi
        mov ecx, esi
        call eax
        jmp done
else_branch:
        lea ecx, [esp + 0xc]
        call ext_00440A20
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x98], 0
        call ext_00441AC0
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_00440B00
        mov edi, dword ptr [esp + 0xa0]
        lea ecx, [esp + 0x8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00441C10
        lea edx, [esp + 0x8]
        push edx
        push edi
        mov ecx, esi
        call ext_004425C0
        lea eax, [esp + 0x8]
        push eax
        push edi
        mov ecx, esi
        call ext_004426E0
        lea ecx, [esp + 0x8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00441E30
        mov edi, dword ptr [esp + 0x9c]
        lea edx, [esp + 0x8]
        push edx
        push edi
        mov ecx, esi
        call ext_00441A60
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x94], -1
        call ext_0043B4D0
done:
        mov ecx, dword ptr [esp + 0x8c]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 0xc
    }
}
