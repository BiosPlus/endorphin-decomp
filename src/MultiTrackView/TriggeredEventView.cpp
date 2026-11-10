// Decompiled translation unit: src/MultiTrackView/TriggeredEventView.cpp

// [0x0045F5F0] MultiTrackView::TriggeredEventView::vfunc_0_off_248 (14 bytes)
extern "C" void ext_0045F150();

extern "C" void __fastcall fn_0045F5F0(char* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void* self, int edx_unused);
    Callee callee = (Callee)ext_0045F150;
    callee(self - 0x248, edx_unused);
}

// [0x004602B0] MultiTrackView::TriggeredEventView::vfunc_6_off_254 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*, allocator) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004602B0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9381e8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0043CAB0] MultiTrackView::TriggeredEventView::vfunc_69 (66 bytes)
extern "C" void ext_0041C710();
extern "C" void ext_006A5DB2();
extern "C" __declspec(naked) void __fastcall fn_0043CAB0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, 0x2a3
        mov esi, ecx
        jne short L_43CAD6
        lea ecx, [esi + 0x64]
        call ext_0041C710
        test al, al
        je short L_43CAD6
        pop edi
        mov eax, 1
        pop esi
        ret 0x10
L_43CAD6:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_006A5DB2
        pop edi
        pop esi
        ret 0x10
    }
}
