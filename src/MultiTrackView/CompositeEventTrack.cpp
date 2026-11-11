// Decompiled translation unit: src/MultiTrackView/CompositeEventTrack.cpp

// [0x004104E0] MultiTrackView::CompositeEventTrack::vfunc_2 (47 bytes)
extern "C" void* __stdcall ext_00594000(void* arg);
extern "C" void* __fastcall ext_00597630(void* self);

extern "C" __declspec(naked) int __fastcall fn_004104E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00597630
        cmp byte ptr [eax + 0x4e2], 0
        je fail
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        test al, al
        jne fail
        mov eax, 1
        ret
fail:
        xor eax, eax
        ret
    }
}

// [0x004104A0] MultiTrackView::CompositeEventTrack::vfunc_1 (52 bytes)
extern "C" void ext_0052ADA0();
extern "C" void ext_0059DC50();
extern "C" int mem_00AED9D0;

extern "C" __declspec(naked) int __fastcall fn_004104A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [mem_00AED9D0]
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00597630
        test esi, esi
        je fail
        test eax, eax
        je fail
        mov ecx, eax
        call ext_0059DC50
        push eax
        mov ecx, esi
        call ext_0052ADA0
        pop esi
        ret
fail:
        xor eax, eax
        pop esi
        ret
    }
}
