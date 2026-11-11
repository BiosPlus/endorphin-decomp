// Decompiled translation unit: src/templates/ReadWriteMethodType.cpp

extern "C" void ext_0067A670();
extern "C" int mem_00AE3704;
extern "C" int mem_00AE3700;
extern "C" int mem_00AE0D04;
extern "C" int mem_00AE0D00;
extern "C" int mem_00ADE0F0;
extern "C" int mem_00ADE0EC;
extern "C" int mem_00ADE0E8;
extern "C" int mem_00ADE0E4;
extern "C" int mem_00AD8340;
extern "C" int mem_00AD833C;
extern "C" int mem_00AD8310;
extern "C" int mem_00AD830C;
extern "C" int mem_00AD8318;
extern "C" int mem_00AD8314;
extern "C" int mem_00AD831C;
extern "C" int mem_00AD8320;
extern "C" int mem_00AD8324;
extern "C" int mem_00AD8328;
extern "C" int mem_00AD832C;
extern "C" int mem_00AD8330;
extern "C" int mem_00AD8334;
extern "C" int mem_00AD8338;
extern "C" int mem_00AD8FEC;
extern "C" int mem_00AD8FF0;
extern "C" int mem_00AD8FF4;
extern "C" int mem_00AD8FF8;
extern "C" int mem_00AD8FFC;
extern "C" int mem_00AD9000;
extern "C" int mem_00AD9004;
extern "C" int mem_00AD9008;
extern "C" int mem_00AD900C;
extern "C" int mem_00AD9010;

// [0x0046DF60] ExprParser::ReadWriteMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, float, {public: void __thiscall ImageExporter::setFrameRate(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046DF60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88293e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8310], al
        jne init_done
        or dword ptr [mem_00AD8310], eax
        mov ecx, offset mem_00AD830C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00AD830C], 0x93a904
        mov dword ptr [eax+4], offset mem_00AD830C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00AD830C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0046E190] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E190(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88295e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8318], al
        jne init_done
        or dword ptr [mem_00AD8318], eax
        mov ecx, offset mem_00AD8314
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8314], 0x93aab4
        mov dword ptr [eax + 0x4], offset mem_00AD8314
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8314
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046E4A0] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E4A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88297e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8320], al
        jne init_done
        or dword ptr [mem_00AD8320], eax
        mov ecx, offset mem_00AD831C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD831C], 0x0093ac64
        mov dword ptr [eax + 0x4], offset mem_00AD831C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD831C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046E840] ExprParser::ReadWriteMethodType<ImageExporter, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall ImageExporter::getDestination(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall ImageExporter::setDestination(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E840(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88299e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8328], al
        jne init_done
        or dword ptr [mem_00AD8328], eax
        mov ecx, offset mem_00AD8324
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8324], 0x0093ae14
        mov dword ptr [eax + 0x4], offset mem_00AD8324
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8324
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046EAA0] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046EAA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8829be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8330], al
        jne init_done
        or dword ptr [mem_00AD8330], eax
        mov ecx, offset mem_00AD832C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD832C], 0x0093afc4
        mov dword ptr [eax + 0x4], offset mem_00AD832C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD832C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046EDF0] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageHeight(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageHeight(int), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046EDF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8829de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8338], al
        jne init_done
        or dword ptr [mem_00AD8338], eax
        mov ecx, offset mem_00AD8334
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8334], 0x0093b174
        mov dword ptr [eax + 0x4], offset mem_00AD8334
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8334
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0046F0D0] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageWidth(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageWidth(int), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046F0D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8829fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8340], al
        jne init_done
        or dword ptr [mem_00AD8340], eax
        mov ecx, offset mem_00AD833C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD833C], 0x0093b324
        mov dword ptr [eax + 0x4], offset mem_00AD833C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD833C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00470290] ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getPosBufferFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setPosBufferFrameRate(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00470290(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x882d8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8FF0], al
        jne init_done
        or dword ptr [mem_00AD8FF0], eax
        mov ecx, offset mem_00AD8FEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8FEC], 0x0093b524
        mov dword ptr [eax + 0x4], offset mem_00AD8FEC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8FEC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004706A0] ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getTimeZoomFactor(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setTimeZoomFactor(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_004706A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x882dae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD8FF8], al
        jne init_done
        or dword ptr [mem_00AD8FF8], eax
        mov ecx, offset mem_00AD8FF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8FF4], 0x0093b6d4
        mov dword ptr [eax + 0x4], offset mem_00AD8FF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8FF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00470B40] ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getSimulationFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setSimulationFrameRate(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00470B40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x882dce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9000], al
        jne init_done
        or dword ptr [mem_00AD9000], eax
        mov ecx, offset mem_00AD8FFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD8FFC], 0x0093b884
        mov dword ptr [eax + 0x4], offset mem_00AD8FFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD8FFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00470FD0] ExprParser::ReadWriteMethodType<RuntimeEngine, bool, {public: bool __thiscall RuntimeEngine::getPlaybackLoopingEnabled(void) const, 0}, bool, {public: void __thiscall RuntimeEngine::enablePlaybackLooping(bool), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00470FD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x882dee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9008], al
        jne init_done
        or dword ptr [mem_00AD9008], eax
        mov ecx, offset mem_00AD9004
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9004], 0x0093ba34
        mov dword ptr [eax + 0x4], offset mem_00AD9004
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9004
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00471300] ExprParser::ReadWriteMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, int, {public: void __thiscall RuntimeEngine::setNumTicksToRun(int), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00471300(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x882e0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9010], al
        jne init_done
        or dword ptr [mem_00AD9010], eax
        mov ecx, offset mem_00AD900C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD900C], 0x0093bbe4
        mov dword ptr [eax + 0x4], offset mem_00AD900C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD900C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004882C0] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getStrength(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrength(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AD9E30;
extern "C" int mem_00AD9E2C;
extern "C" __declspec(naked) void __fastcall fn_004882C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884afe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E30], al
        jne init_done
        or dword ptr [mem_00AD9E30], eax
        mov ecx, offset mem_00AD9E2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E2C], 0x0093dc94
        mov dword ptr [eax + 0x4], offset mem_00AD9E2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00488510] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getCharacterName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{324, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E38;
extern "C" int mem_00AD9E34;

extern "C" __declspec(naked) void __fastcall fn_00488510(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884b1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E38], al
        jne init_done
        or dword ptr [mem_00AD9E38], eax
        mov ecx, offset mem_00AD9E34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E34], 0x0093de44
        mov dword ptr [eax + 0x4], offset mem_00AD9E34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004886F0] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float, {public: float __thiscall NMData::DesiredPoseEventData::getEntryBlendPeriod(void) const, 0}, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriod(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E40;
extern "C" int mem_00AD9E3C;

extern "C" __declspec(naked) void __fastcall fn_004886F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884b3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E40], al
        jne init_done
        or dword ptr [mem_00AD9E40], eax
        mov ecx, offset mem_00AD9E3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E3C], 0x0093dff4
        mov dword ptr [eax + 0x4], offset mem_00AD9E3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    init_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00497D50] ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getCondition(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setCondition(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00ADD160;
extern "C" int mem_00ADD15C;

extern "C" __declspec(naked) void __fastcall fn_00497D50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886a4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD160], al
        jne L_guarded
        or dword ptr [mem_00ADD160], eax
        mov ecx, offset mem_00ADD15C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADD15C], 0x0093F50C
        mov dword ptr [eax + 0x4], offset mem_00ADD15C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADD15C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00498260] ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getResultantStateID(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setResultantState(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00ADD168;
extern "C" int mem_00ADD164;

extern "C" __declspec(naked) void __fastcall fn_00498260(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886a6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD168], al
        jne L_guarded
        or dword ptr [mem_00ADD168], eax
        mov ecx, offset mem_00ADD164
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADD164], 0x0093F6BC
        mov dword ptr [eax + 0x4], offset mem_00ADD164
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADD164
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0049C160] ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::State::`vcall'{4, {flat}}, 8}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD7F8;
extern "C" int mem_00ADD7F4;

extern "C" __declspec(naked) void __fastcall fn_0049C160(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886f7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD7F8], al
        jne L_guarded
        or dword ptr [mem_00ADD7F8], eax
        mov ecx, offset mem_00ADD7F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADD7F4], 0x009401D4
        mov dword ptr [eax + 0x4], offset mem_00ADD7F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADD7F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0049C270] ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::State::getFileName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD800;
extern "C" int mem_00ADD7FC;

extern "C" __declspec(naked) void __fastcall fn_0049C270(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886f9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD800], al
        jne L_guarded
        or dword ptr [mem_00ADD800], eax
        mov ecx, offset mem_00ADD7FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADD7FC], 0x00940384
        mov dword ptr [eax + 0x4], offset mem_00ADD7FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADD7FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0049C610] ExprParser::ReadWriteMethodType<NMData::State, bool, {public: bool __thiscall NMData::State::isDeactivated(void) const, 0}, bool, {public: void __thiscall NMData::State::setIsDeactivated(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADD808;
extern "C" int mem_00ADD804;

extern "C" __declspec(naked) void __fastcall fn_0049C610(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x886fbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADD808], al
        jne L_guarded
        or dword ptr [mem_00ADD808], eax
        mov ecx, offset mem_00ADD804
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADD804], 0x0093fe74
        mov dword ptr [eax + 0x4], offset mem_00ADD804
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADD804
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A2790] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawVariables(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawVariables(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE0D8;
extern "C" int mem_00ADE0D4;

extern "C" __declspec(naked) void __fastcall fn_004A2790(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887bee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE0D8], al
        jne L_guarded
        or dword ptr [mem_00ADE0D8], eax
        mov ecx, offset mem_00ADE0D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0D4], 0x00940834
        mov dword ptr [eax + 0x4], offset mem_00ADE0D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A2AD0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE0E0;
extern "C" int mem_00ADE0DC;

extern "C" __declspec(naked) void __fastcall fn_004A2AD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887c0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE0E0], al
        jne L_guarded
        or dword ptr [mem_00ADE0E0], eax
        mov ecx, offset mem_00ADE0DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0DC], 0x009409e4
        mov dword ptr [eax + 0x4], offset mem_00ADE0DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A2E70] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getDrawDepth(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawDepth(int), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_004A2E70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887c2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE0E8], al
        jne L_guarded
        or dword ptr [mem_00ADE0E8], eax
        mov ecx, offset mem_00ADE0E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0E4], 0x00940b94
        mov dword ptr [eax + 0x4], offset mem_00ADE0E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A3140] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditions(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE0F0;
extern "C" int mem_00ADE0EC;

extern "C" __declspec(naked) void __fastcall fn_004A3140(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887c4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE0F0], al
        jne L_guarded
        or dword ptr [mem_00ADE0F0], eax
        mov ecx, offset mem_00ADE0EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0EC], 0x00940d44
        mov dword ptr [eax + 0x4], offset mem_00ADE0EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A34B0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditionNumber(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditionNumber(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE0F8;
extern "C" int mem_00ADE0F4;

extern "C" __declspec(naked) void __fastcall fn_004A34B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887c6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE0F8], al
        jne L_guarded
        or dword ptr [mem_00ADE0F8], eax
        mov ecx, offset mem_00ADE0F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0F4], 0x00940ef4
        mov dword ptr [eax + 0x4], offset mem_00ADE0F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A3820] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setFontSize(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE100;
extern "C" int mem_00ADE0FC;

extern "C" __declspec(naked) void __fastcall fn_004A3820(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887c8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE100], al
        jne L_guarded
        or dword ptr [mem_00ADE100], eax
        mov ecx, offset mem_00ADE0FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE0FC], 0x009410a4
        mov dword ptr [eax + 0x4], offset mem_00ADE0FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE0FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004A3BA0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADE108;
extern "C" int mem_00ADE104;

extern "C" __declspec(naked) void __fastcall fn_004A3BA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x887cae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADE108], al
        jne L_guarded
        or dword ptr [mem_00ADE108], eax
        mov ecx, offset mem_00ADE104
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADE104], 0x00941254
        mov dword ptr [eax + 0x4], offset mem_00ADE104
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADE104
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004AA590] ExprParser::ReadWriteMethodType<NMData::BehaviourData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::BehaviourData::getCharacterName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::BehaviourData::`vcall'{324, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADF9EC;
extern "C" int mem_00ADF9E8;
extern "C" __declspec(naked) void __fastcall fn_004AA590(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88895e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADF9EC], al
        jne L_guarded
        or dword ptr [mem_00ADF9EC], eax
        mov ecx, offset mem_00ADF9E8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADF9E8], 0x009418AC
        mov dword ptr [eax + 0x4], offset mem_00ADF9E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADF9E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004AAA00] ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool, {public: bool __thiscall NMData::BehaviourData::isEnabled(void) const, 0}, bool, {[thunk]: __thiscall NMData::BehaviourData::`vcall'{272, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADF9F4;
extern "C" int mem_00ADF9F0;
extern "C" __declspec(naked) void __fastcall fn_004AAA00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88897e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADF9F4], al
        jne L_guarded
        or dword ptr [mem_00ADF9F4], eax
        mov ecx, offset mem_00ADF9F0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADF9F0], 0x00941A5C
        mov dword ptr [eax + 0x4], offset mem_00ADF9F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADF9F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004AABE0] ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool, {public: bool __thiscall NMData::BehaviourData::getVisibility(void) const, 0}, bool, {[thunk]: __thiscall NMData::BehaviourData::`vcall'{32, {flat}}, 12}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADF9FC;
extern "C" int mem_00ADF9F8;

extern "C" __declspec(naked) void __fastcall fn_004AABE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88899e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADF9FC], al
        jne L_guarded
        or dword ptr [mem_00ADF9FC], eax
        mov ecx, offset mem_00ADF9F8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADF9F8], 0x009416FC
        mov dword ptr [eax + 0x4], offset mem_00ADF9F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADF9F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B1910] ExprParser::ReadWriteMethodType<NMData::GraphEntryData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::GraphEntryData::getExpression(void) const, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: void __thiscall NMData::GraphEntryData::setExpression(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0CFC;
extern "C" int mem_00AE0CF8;

extern "C" __declspec(naked) void __fastcall fn_004B1910(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8899ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0CFC], al
        jne L_guarded
        or dword ptr [mem_00AE0CFC], eax
        mov ecx, offset mem_00AE0CF8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0CF8], 0x00942294
        mov dword ptr [eax + 0x4], offset mem_00AE0CF8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0CF8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B1AB0] ExprParser::ReadWriteMethodType<NMData::GraphEntryData, int, &public: int __thiscall NMData::GraphEntryData::getColor(void) const, int, &public: void __thiscall NMData::GraphEntryData::setColor(int)>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B1AB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8899ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D04], al
        jne L_guarded
        or dword ptr [mem_00AE0D04], eax
        mov ecx, offset mem_00AE0D00
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D00], 0x00942444
        mov dword ptr [eax + 0x4], offset mem_00AE0D00
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D00
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B1D80] ExprParser::ReadWriteMethodType<NMData::GraphEntryData, bool, &public: bool __thiscall NMData::GraphEntryData::isActive(void) const, bool, &public: void __thiscall NMData::GraphEntryData::activate(bool)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D0C;
extern "C" int mem_00AE0D08;

extern "C" __declspec(naked) void __fastcall fn_004B1D80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8899ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D0C], al
        jne L_guarded
        or dword ptr [mem_00AE0D0C], eax
        mov ecx, offset mem_00AE0D08
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D08], 0x009425f4
        mov dword ptr [eax + 0x4], offset mem_00AE0D08
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D08
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B1F70] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMin(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D14;
extern "C" int mem_00AE0D10;

extern "C" __declspec(naked) void __fastcall fn_004B1F70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889a0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D14], al
        jne L_guarded
        or dword ptr [mem_00AE0D14], eax
        mov ecx, offset mem_00AE0D10
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D10], 0x009427a4
        mov dword ptr [eax + 0x4], offset mem_00AE0D10
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D10
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B2070] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMax(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D1C;
extern "C" int mem_00AE0D18;

extern "C" __declspec(naked) void __fastcall fn_004B2070(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889a2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D1C], al
        jne L_guarded
        or dword ptr [mem_00AE0D1C], eax
        mov ecx, offset mem_00AE0D18
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D18], 0x00942954
        mov dword ptr [eax + 0x4], offset mem_00AE0D18
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D18
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B23C0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMin(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D24;
extern "C" int mem_00AE0D20;

extern "C" __declspec(naked) void __fastcall fn_004B23C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889a4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D24], al
        jne L_guarded
        or dword ptr [mem_00AE0D24], eax
        mov ecx, offset mem_00AE0D20
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D20], 0x00942b04
        mov dword ptr [eax + 0x4], offset mem_00AE0D20
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D20
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B2760] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMax(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D2C;
extern "C" int mem_00AE0D28;

extern "C" __declspec(naked) void __fastcall fn_004B2760(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889a6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D2C], al
        jne L_guarded
        or dword ptr [mem_00AE0D2C], eax
        mov ecx, offset mem_00AE0D28
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D28], 0x00942cb4
        mov dword ptr [eax + 0x4], offset mem_00AE0D28
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D28
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B2AB0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getMaxAutoWidth(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setMaxAutoWidth(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE0D34;
extern "C" int mem_00AE0D30;

extern "C" __declspec(naked) void __fastcall fn_004B2AB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889a8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D34], al
        jne L_guarded
        or dword ptr [mem_00AE0D34], eax
        mov ecx, offset mem_00AE0D30
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D30], 0x00942e64
        mov dword ptr [eax + 0x4], offset mem_00AE0D30
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D30
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B2DE0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, int, {public: int __thiscall NMData::GraphEngineData::getMinNumTimeSteps(void) const, 0}, int, {public: void __thiscall NMData::GraphEngineData::setMinNumTimeSteps(int), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE0D3C;
extern "C" int mem_00AE0D38;

extern "C" __declspec(naked) void __fastcall fn_004B2DE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889aae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D3C], al
        jne L_guarded
        or dword ptr [mem_00AE0D3C], eax
        mov ecx, offset mem_00AE0D38
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D38], 0x00943014
        mov dword ptr [eax + 0x4], offset mem_00AE0D38
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D38
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B2FE0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, bool, {public: bool __thiscall NMData::GraphEngineData::attachToFrameBuffer(void) const, 0}, bool, {public: void __thiscall NMData::GraphEngineData::setAttachToFrameBuffer(bool), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE0D44;
extern "C" int mem_00AE0D40;

extern "C" __declspec(naked) void __fastcall fn_004B2FE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x889ace
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D44], al
        jne L_guarded
        or dword ptr [mem_00AE0D44], eax
        mov ecx, offset mem_00AE0D40
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE0D40], 0x009431c4
        mov dword ptr [eax + 0x4], offset mem_00AE0D40
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE0D40
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B7CB0] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, float, &public: void __thiscall NMData::EngineData::setPosBufferFrameRate(float)>::vfunc_40 (122 bytes)
extern "C" int mem_00AE1670;
extern "C" int mem_00AE166C;

extern "C" __declspec(naked) void __fastcall fn_004B7CB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a22e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1670], al
        jne L_guarded
        or dword ptr [mem_00AE1670], eax
        mov ecx, offset mem_00AE166C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE166C], 0x0094391c
        mov dword ptr [eax + 0x4], offset mem_00AE166C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE166C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B7F40] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getTimeZoomFactor(void) const, float, &public: void __thiscall NMData::EngineData::setTimeZoomFactor(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1678;
extern "C" int mem_00AE1674;

extern "C" __declspec(naked) void __fastcall fn_004B7F40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a24e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1678], al
        jne L_guarded
        or dword ptr [mem_00AE1678], eax
        mov ecx, offset mem_00AE1674
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE1674], 0x00943acc
        mov dword ptr [eax + 0x4], offset mem_00AE1674
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE1674
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B8310] ExprParser::ReadWriteMethodType<NMData::EngineData, bool, &public: bool __thiscall NMData::EngineData::enableNonSphericalInertialBodies(void) const, bool, &public: void __thiscall NMData::EngineData::setEnableNonSphericalInertialBodies(bool)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1680;
extern "C" int mem_00AE167C;

extern "C" __declspec(naked) void __fastcall fn_004B8310(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a26e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1680], al
        jne L_guarded
        or dword ptr [mem_00AE1680], eax
        mov ecx, offset mem_00AE167C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE167C], 0x00943c7c
        mov dword ptr [eax + 0x4], offset mem_00AE167C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE167C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B86C0] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getUnitLength(void) const, float, &public: void __thiscall NMData::EngineData::setUnitLength(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1688;
extern "C" int mem_00AE1684;

extern "C" __declspec(naked) void __fastcall fn_004B86C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a28e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1688], al
        jne L_guarded
        or dword ptr [mem_00AE1688], eax
        mov ecx, offset mem_00AE1684
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE1684], 0x00943e2c
        mov dword ptr [eax + 0x4], offset mem_00AE1684
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE1684
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B88A0] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getUnitMass(void) const, float, &public: void __thiscall NMData::EngineData::setUnitMass(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1690;
extern "C" int mem_00AE168C;

extern "C" __declspec(naked) void __fastcall fn_004B88A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a2ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1690], al
        jne L_guarded
        or dword ptr [mem_00AE1690], eax
        mov ecx, offset mem_00AE168C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE168C], 0x00943fdc
        mov dword ptr [eax + 0x4], offset mem_00AE168C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE168C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C0F40] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{36, {flat}}, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{368, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3010;
extern "C" int mem_00AE300C;

extern "C" __declspec(naked) void __fastcall fn_004C0F40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b03e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3010], al
        jne L_guarded
        or dword ptr [mem_00AE3010], eax
        mov ecx, offset mem_00AE300C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE300C], 0x0094481c
        mov dword ptr [eax + 0x4], offset mem_00AE300C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE300C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C1040] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getStartFrameNumber(void) const, 0}, int, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{276, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3018;
extern "C" int mem_00AE3014;

extern "C" __declspec(naked) void __fastcall fn_004C1040(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b05e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3018], al
        jne L_guarded
        or dword ptr [mem_00AE3018], eax
        mov ecx, offset mem_00AE3014
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE3014], 0x009449cc
        mov dword ptr [eax + 0x4], offset mem_00AE3014
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE3014
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C1380] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE301C;
extern "C" int mem_00AE3020;

extern "C" __declspec(naked) void __fastcall fn_004C1380(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b07e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3020], al
        jne L_guarded
        or dword ptr [mem_00AE3020], eax
        mov ecx, offset mem_00AE301C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE301C], 0x00944b7c
        mov dword ptr [eax + 0x4], offset mem_00AE301C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE301C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C17A0] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, bool, {public: bool __thiscall NMData::TriggeredEventData::isEnabled(void) const, 0}, bool, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{272, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3048;
extern "C" int mem_00AE3044;

extern "C" __declspec(naked) void __fastcall fn_004C17A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b0be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3048], al
        jne L_guarded
        or dword ptr [mem_00AE3048], eax
        mov ecx, offset mem_00AE3044
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE3044], 0x00944d2c
        mov dword ptr [eax + 0x4], offset mem_00AE3044
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE3044
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C58B0] ExprParser::ReadWriteMethodType<NMData::ForceEventData, int, {public: int __thiscall NMData::ForceEventData::getFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::ForceEventData::setFrameNumber(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE36FC;
extern "C" int mem_00AE36F8;

extern "C" __declspec(naked) void __fastcall fn_004C58B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b81e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE36FC], al
        jne L_guarded
        or dword ptr [mem_00AE36FC], eax
        mov ecx, offset mem_00AE36F8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE36F8], 0x009454f4
        mov dword ptr [eax + 0x4], offset mem_00AE36F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE36F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C5BD0] ExprParser::ReadWriteMethodType<NMData::ForceEventData, float, {public: float __thiscall NMData::ForceEventData::getRelativeAcceleration(void) const, 0}, float, {public: void __thiscall NMData::ForceEventData::setRelativeAcceleration(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C5BD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88b83e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3704], al
        jne L_guarded
        or dword ptr [mem_00AE3704], eax
        mov ecx, offset mem_00AE3700
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE3700], 0x009456a4
        mov dword ptr [eax + 0x4], offset mem_00AE3700
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE3700
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C7400] ExprParser::ReadWriteMethodType<NMData::SeverEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::SeverEventData::getSeverEventType(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::SeverEventData::setSeverEventType(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3D88;
extern "C" int mem_00AE3D84;

extern "C" __declspec(naked) void __fastcall fn_004C7400(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88bc4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE3D88], al
        jne L_guarded
        or dword ptr [mem_00AE3D88], eax
        mov ecx, offset mem_00AE3D84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE3D84], 0x00945b64
        mov dword ptr [eax + 0x4], offset mem_00AE3D84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE3D84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CAEE0] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, {public: bool __thiscall NMData::MetaBodyConstraintData::mustKeepOffset(void) const, 0}, bool, {public: void __thiscall NMData::MetaBodyConstraintData::setMustKeepOffset(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44B4;
extern "C" int mem_00AE44B0;

extern "C" __declspec(naked) void __fastcall fn_004CAEE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c0ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44B4], al
        jne L_guarded
        or dword ptr [mem_00AE44B4], eax
        mov ecx, offset mem_00AE44B0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44B0], 0x00946e14
        mov dword ptr [eax + 0x4], offset mem_00AE44B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CB1D0] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44BC;
extern "C" int mem_00AE44B8;

extern "C" __declspec(naked) void __fastcall fn_004CB1D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c0ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44BC], al
        jne L_guarded
        or dword ptr [mem_00AE44BC], eax
        mov ecx, offset mem_00AE44B8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44B8], 0x00946ab4
        mov dword ptr [eax + 0x4], offset mem_00AE44B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CB250] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getAngularStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setAngularStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44C4;
extern "C" int mem_00AE44C0;

extern "C" __declspec(naked) void __fastcall fn_004CB250(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c10e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44C4], al
        jne L_guarded
        or dword ptr [mem_00AE44C4], eax
        mov ecx, offset mem_00AE44C0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44C0], 0x00946c64
        mov dword ptr [eax + 0x4], offset mem_00AE44C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CB360] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::MetaBodyConstraintData::getLockTypeString(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44CC;
extern "C" int mem_00AE44C8;

extern "C" __declspec(naked) void __fastcall fn_004CB360(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c12e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44CC], al
        jne L_guarded
        or dword ptr [mem_00AE44CC], eax
        mov ecx, offset mem_00AE44C8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44C8], 0x00946fc4
        mov dword ptr [eax + 0x4], offset mem_00AE44C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CEE70] ExprParser::ReadWriteMethodType<NMData::IncarnationEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::IncarnationEventData::getPhysicsLevel(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::IncarnationEventData::setPhysicsLevel(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE4B78;
extern "C" int mem_00AE4B74;

extern "C" __declspec(naked) void __fastcall fn_004CEE70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c62e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE4B78], al
        jne L_guarded
        or dword ptr [mem_00AE4B78], eax
        mov ecx, offset mem_00AE4B74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE4B74], 0x009474ac
        mov dword ptr [eax + 0x4], offset mem_00AE4B74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE4B74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CEF40] ExprParser::ReadWriteMethodType<NMData::IncarnationEventData, float, {public: float __thiscall NMData::IncarnationEventData::getMomentumScaleFactor(void) const, 0}, float, {public: void __thiscall NMData::IncarnationEventData::setMomentumScaleFactor(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE4B80;
extern "C" int mem_00AE4B7C;
extern "C" __declspec(naked) void __fastcall fn_004CEF40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c64e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE4B80], al
        jne L_guarded
        or dword ptr [mem_00AE4B80], eax
        mov ecx, offset mem_00AE4B7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE4B7C], 0x0094765c
        mov dword ptr [eax + 0x4], offset mem_00AE4B7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE4B7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D1710] ExprParser::ReadWriteMethodType<NMData::TransitionEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::TransitionEventData::getWindowTypeName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::TransitionEventData::setWindowTypeName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55A0;
extern "C" int mem_00AE559C;

extern "C" __declspec(naked) void __fastcall fn_004D1710(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88cb3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE55A0], al
        jne L_guarded
        or dword ptr [mem_00AE55A0], eax
        mov ecx, offset mem_00AE559C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE559C], 0x00947be4
        mov dword ptr [eax + 0x4], offset mem_00AE559C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE559C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D1840] ExprParser::ReadWriteMethodType<NMData::TransitionEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::TransitionEventData::getRequiredPhysicsLevelName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::TransitionEventData::setRequiredPhysicsLevelName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55A8;
extern "C" int mem_00AE55A4;

extern "C" __declspec(naked) void __fastcall fn_004D1840(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88cb5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE55A8], al
        jne L_guarded
        or dword ptr [mem_00AE55A8], eax
        mov ecx, offset mem_00AE55A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE55A4], 0x00947d94
        mov dword ptr [eax + 0x4], offset mem_00AE55A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE55A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D1CB0] ExprParser::ReadWriteMethodType<NMData::TransitionEventData, float, {public: float __thiscall NMData::TransitionEventData::getMomentumScaleFactor(void) const, 0}, float, {public: void __thiscall NMData::TransitionEventData::setMomentumScaleFactor(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE55B0;
extern "C" int mem_00AE55AC;

extern "C" __declspec(naked) void __fastcall fn_004D1CB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88cb7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE55B0], al
        jne L_guarded
        or dword ptr [mem_00AE55B0], eax
        mov ecx, offset mem_00AE55AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE55AC], 0x00947f44
        mov dword ptr [eax + 0x4], offset mem_00AE55AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE55AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D55F0] ExprParser::ReadWriteMethodType<NMData::RigEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::RigEventData::getSourceName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::RigEventData::setSourceName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D08;
extern "C" int mem_00AE5D04;

extern "C" __declspec(naked) void __fastcall fn_004D55F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d07e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D08], al
        jne L_guarded
        or dword ptr [mem_00AE5D08], eax
        mov ecx, offset mem_00AE5D04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D04], 0x0094860c
        mov dword ptr [eax + 0x4], offset mem_00AE5D04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D5670] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isInitTargetPoseEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsInitTargetPoseEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D10;
extern "C" int mem_00AE5D0C;

extern "C" __declspec(naked) void __fastcall fn_004D5670(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d09e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D10], al
        jne L_guarded
        or dword ptr [mem_00AE5D10], eax
        mov ecx, offset mem_00AE5D0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D0C], 0x009487bc
        mov dword ptr [eax + 0x4], offset mem_00AE5D0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D5980] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isUseSubTicksEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsUseSubticksEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D18;
extern "C" int mem_00AE5D14;

extern "C" __declspec(naked) void __fastcall fn_004D5980(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d0be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D18], al
        jne L_guarded
        or dword ptr [mem_00AE5D18], eax
        mov ecx, offset mem_00AE5D14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D14], 0x0094896c
        mov dword ptr [eax + 0x4], offset mem_00AE5D14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D5BE0] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getInitialPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setInitialPhysicsTicks(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D20;
extern "C" int mem_00AE5D1C;

extern "C" __declspec(naked) void __fastcall fn_004D5BE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d0de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D20], al
        jne L_guarded
        or dword ptr [mem_00AE5D20], eax
        mov ecx, offset mem_00AE5D1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D1C], 0x00948b1c
        mov dword ptr [eax + 0x4], offset mem_00AE5D1C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D1C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D5DC0] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setPhysicsTicks(int), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE5D28;
extern "C" int mem_00AE5D24;

extern "C" __declspec(naked) void __fastcall fn_004D5DC0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d0fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D28], al
        jne L_guarded
        or dword ptr [mem_00AE5D28], eax
        mov ecx, offset mem_00AE5D24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D24], 0x00948ccc
        mov dword ptr [eax + 0x4], offset mem_00AE5D24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D6090] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isVisible(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsVisible(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D30;
extern "C" int mem_00AE5D2C;

extern "C" __declspec(naked) void __fastcall fn_004D6090(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d11e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D30], al
        jne L_guarded
        or dword ptr [mem_00AE5D30], eax
        mov ecx, offset mem_00AE5D2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D2C], 0x00948e7c
        mov dword ptr [eax + 0x4], offset mem_00AE5D2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}
