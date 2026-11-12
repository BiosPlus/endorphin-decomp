// Decompiled translation unit: src/MultiTrackView/RangeMarker.cpp

extern "C" void ext_00441020();
extern "C" void ext_00441040();
extern "C" void ext_0066A180();
extern "C" void ext_006A6172();
extern "C" double mem_0092BD70;

// [0x00441D40] MultiTrackView::RangeMarker::vfunc_1 (228 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00441D40(void* self, int edx_unused, int* a1, void* a2, int* a3) {
    __asm {
        sub esp, 1Ch
        push esi
        call ext_00441020
        mov edx, eax
        call ext_00441040
        cmp edx, eax
        jne short L_branch2
        mov edx, dword ptr [esp + 2Ch]
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [esp + 24h]
        mov eax, dword ptr [eax + 8]
        push edx
        mov edx, dword ptr [esp + 2Ch]
        push edx
        push esi
        call eax
        mov eax, esi
        pop esi
        add esp, 1Ch
        ret 0Ch
    L_branch2:
        push edi
        call ext_00441040
        mov dword ptr [esp + 8], eax
        fild dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 48h]
        fsub qword ptr [eax + 110h]
        fmul qword ptr [eax + 120h]
        fadd qword ptr [eax + 118h]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0Ch]
        fld qword ptr [esp + 0Ch]
        fistp dword ptr [esp + 8]
        mov eax, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 8]
        mov edx, dword ptr [eax + 8]
        cmp esi, edx
        mov edi, esi
        jle short L_min
        mov edi, edx
    L_min:
        mov edx, dword ptr [ecx + 48h]
        mov edx, dword ptr [edx + 0FCh]
        mov esi, dword ptr [eax]
        cmp esi, edx
        jle short L_max
        mov edx, esi
    L_max:
        mov ecx, dword ptr [ecx + 70h]
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 0Ch]
        add eax, edx
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 1Ch], edi
        mov dword ptr [esp + 20h], eax
        mov ecx, dword ptr [ecx]
        call ext_0066A180
        mov ecx, dword ptr [esp + 2Ch]
        push eax
        lea edx, [esp + 18h]
        push edx
        call ext_006A6172
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 1Ch]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], edx
        pop esi
        add esp, 1Ch
        ret 0Ch
    }
}
