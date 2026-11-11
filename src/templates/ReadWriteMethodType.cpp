// Decompiled translation unit: src/templates/ReadWriteMethodType.cpp

extern "C" void ext_0067A670();
extern "C" int mem_00AEBB48;
extern "C" int mem_00AEBB44;
extern "C" int mem_00AEBB70;
extern "C" int mem_00AEBB6C;
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

// [0x004D6320] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isGravityEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setGravityEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D38;
extern "C" int mem_00AE5D34;

extern "C" __declspec(naked) void __fastcall fn_004D6320(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d13e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D38], al
        jne L_guarded
        or dword ptr [mem_00AE5D38], eax
        mov ecx, offset mem_00AE5D34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D34], 0x0094902c
        mov dword ptr [eax + 0x4], offset mem_00AE5D34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D6580] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isFrictionEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setFrictionEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D40;
extern "C" int mem_00AE5D3C;

extern "C" __declspec(naked) void __fastcall fn_004D6580(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d15e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D40], al
        jne L_guarded
        or dword ptr [mem_00AE5D40], eax
        mov ecx, offset mem_00AE5D3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D3C], 0x009491dc
        mov dword ptr [eax + 0x4], offset mem_00AE5D3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D6980] ExprParser::ReadWriteMethodType<NMData::RigEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getUserRetargetRefFrame(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, {public: void __thiscall NMData::RigEventData::setUserRetargetRefFrame(class std::basic_string<char, std::char_traits<char>, std::allocator<char>>), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D48;
extern "C" int mem_00AE5D44;

extern "C" __declspec(naked) void __fastcall fn_004D6980(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d17e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D48], al
        jne L_guarded
        or dword ptr [mem_00AE5D48], eax
        mov ecx, offset mem_00AE5D44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D44], 0x0094938c
        mov dword ptr [eax + 0x4], offset mem_00AE5D44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D6CD0] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {private: int __thiscall NMData::RigEventData::getSaveTweakToStockCharacterDummy(void) const, 0}, int, {private: void __thiscall NMData::RigEventData::saveTweakToStockCharacter(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D50;
extern "C" int mem_00AE5D4C;

extern "C" __declspec(naked) void __fastcall fn_004D6CD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d19e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D50], al
        jne L_guarded
        or dword ptr [mem_00AE5D50], eax
        mov ecx, offset mem_00AE5D4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5D4C], 0x0094953c
        mov dword ptr [eax + 0x4], offset mem_00AE5D4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5D4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DE980] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getCopyFromReferenceObjectDummy(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::copyFromReferenceObject(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6420;
extern "C" int mem_00AE641C;

extern "C" __declspec(naked) void __fastcall fn_004DE980(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88daae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6420], al
        jne L_guarded
        or dword ptr [mem_00AE6420], eax
        mov ecx, offset mem_00AE641C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE641C], 0x0094acdc
        mov dword ptr [eax + 0x4], offset mem_00AE641C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE641C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DEAE0] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::AnimationEventData::getCharacterName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::AnimationEventData::`vcall'{324, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6428;
extern "C" int mem_00AE6424;

extern "C" __declspec(naked) void __fastcall fn_004DEAE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88dace
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6428], al
        jne L_guarded
        or dword ptr [mem_00AE6428], eax
        mov ecx, offset mem_00AE6424
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE6424], 0x00949f5c
        mov dword ptr [eax + 0x4], offset mem_00AE6424
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE6424
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DEC00] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isPassiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsPassiveAnimationEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6430;
extern "C" int mem_00AE642C;

extern "C" __declspec(naked) void __fastcall fn_004DEC00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88daee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6430], al
        jne L_guarded
        or dword ptr [mem_00AE6430], eax
        mov ecx, offset mem_00AE642C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE642C], 0x0094a10c
        mov dword ptr [eax + 0x4], offset mem_00AE642C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE642C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DEF80] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isActiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsActiveAnimationEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6438;
extern "C" int mem_00AE6434;

extern "C" __declspec(naked) void __fastcall fn_004DEF80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88db0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6438], al
        jne L_guarded
        or dword ptr [mem_00AE6438], eax
        mov ecx, offset mem_00AE6434
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE6434], 0x0094a2bc
        mov dword ptr [eax + 0x4], offset mem_00AE6434
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE6434
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DF460] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, {public: float __thiscall NMData::AnimationEventData::getStrength(void) const, 0}, float, {public: void __thiscall NMData::AnimationEventData::setStrength(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE6440;
extern "C" int mem_00AE643C;

extern "C" __declspec(naked) void __fastcall fn_004DF460(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88db2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6440], al
        jne L_guarded
        or dword ptr [mem_00AE6440], eax
        mov ecx, offset mem_00AE643C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE643C], 0x0094a46c
        mov dword ptr [eax + 0x4], offset mem_00AE643C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE643C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DF840] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionStartFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionStartFrameNumber(int), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE6448;
extern "C" int mem_00AE6444;

extern "C" __declspec(naked) void __fastcall fn_004DF840(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88db4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6448], al
        jne L_guarded
        or dword ptr [mem_00AE6448], eax
        mov ecx, offset mem_00AE6444
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE6444], 0x0094a61c
        mov dword ptr [eax + 0x4], offset mem_00AE6444
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE6444
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DFC60] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionEndFrameNumber(int), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE6450;
extern "C" int mem_00AE644C;

extern "C" __declspec(naked) void __fastcall fn_004DFC60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88db6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6450], al
        jne L_guarded
        or dword ptr [mem_00AE6450], eax
        mov ecx, offset mem_00AE644C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE644C], 0x0094a7cc
        mov dword ptr [eax + 0x4], offset mem_00AE644C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE644C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DFCE0] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::getAnimationVisibility(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setAnimationVisibility(bool), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE6458;
extern "C" int mem_00AE6454;

extern "C" __declspec(naked) void __fastcall fn_004DFCE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88db8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6458], al
        jne L_guarded
        or dword ptr [mem_00AE6458], eax
        mov ecx, offset mem_00AE6454
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE6454], 0x0094a97c
        mov dword ptr [eax + 0x4], offset mem_00AE6454
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE6454
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004DFFF0] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, {public: float __thiscall NMData::AnimationEventData::getEntryBlendPeriod(void) const, 0}, float, {public: void __thiscall NMData::AnimationEventData::setEntryBlendPeriod(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AE6460;
extern "C" int mem_00AE645C;

extern "C" __declspec(naked) void __fastcall fn_004DFFF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88dbae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE6460], al
        jne L_guarded
        or dword ptr [mem_00AE6460], eax
        mov ecx, offset mem_00AE645C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE645C], 0x0094ab2c
        mov dword ptr [eax + 0x4], offset mem_00AE645C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE645C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004E9E30] ExprParser::ReadWriteMethodType<NMData::PoseToolOptions, bool, &public: bool __thiscall NMData::PoseToolOptions::isGroundCollisionEnabled(void) const, bool, &public: void __thiscall NMData::PoseToolOptions::setGroundCollisionEnabled(bool)>::vfunc_40 (122 bytes)
extern "C" int mem_00AE7120;
extern "C" int mem_00AE711C;

extern "C" __declspec(naked) void __fastcall fn_004E9E30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88e96e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE7120], al
        jne L_guarded
        or dword ptr [mem_00AE7120], eax
        mov ecx, offset mem_00AE711C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE711C], 0x0094b25c
        mov dword ptr [eax + 0x4], offset mem_00AE711C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE711C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004E9FB0] ExprParser::ReadWriteMethodType<NMData::PoseToolOptions, bool, &public: bool __thiscall NMData::PoseToolOptions::isCollisionEnabled(void) const, bool, &public: void __thiscall NMData::PoseToolOptions::setCollisionEnabled(bool)>::vfunc_40 (122 bytes)
extern "C" int mem_00AE7128;
extern "C" int mem_00AE7124;

extern "C" __declspec(naked) void __fastcall fn_004E9FB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88e98e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE7128], al
        jne L_guarded
        or dword ptr [mem_00AE7128], eax
        mov ecx, offset mem_00AE7124
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE7124], 0x0094b40c
        mov dword ptr [eax + 0x4], offset mem_00AE7124
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE7124
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004EA2B0] ExprParser::ReadWriteMethodType<NMData::PoseToolOptions, bool, &public: bool __thiscall NMData::PoseToolOptions::isGravityEnabled(void) const, bool, &public: void __thiscall NMData::PoseToolOptions::setGravityEnabled(bool)>::vfunc_40 (122 bytes)
extern "C" int mem_00AE7130;
extern "C" int mem_00AE712C;

extern "C" __declspec(naked) void __fastcall fn_004EA2B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88e9ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE7130], al
        jne L_guarded
        or dword ptr [mem_00AE7130], eax
        mov ecx, offset mem_00AE712C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE712C], 0x0094b5bc
        mov dword ptr [eax + 0x4], offset mem_00AE712C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE712C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004EA450] ExprParser::ReadWriteMethodType<NMData::PoseToolOptions, bool, &public: bool __thiscall NMData::PoseToolOptions::isProjectRootEnabled(void) const, bool, &public: void __thiscall NMData::PoseToolOptions::setProjectRootEnabled(bool)>::vfunc_40 (122 bytes)
extern "C" int mem_00AE7138;
extern "C" int mem_00AE7134;

extern "C" __declspec(naked) void __fastcall fn_004EA450(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88e9ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE7138], al
        jne L_guarded
        or dword ptr [mem_00AE7138], eax
        mov ecx, offset mem_00AE7134
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE7134], 0x0094b76c
        mov dword ptr [eax + 0x4], offset mem_00AE7134
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE7134
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004ECCF0] ExprParser::ReadWriteMethodType<SelectionVariable, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall SelectionVariable::`vcall'{36, {flat}}, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall SelectionVariable::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE79D0;
extern "C" int mem_00AE79CC;

extern "C" __declspec(naked) void __fastcall fn_004ECCF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88ef3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE79D0], al
        jne L_guarded
        or dword ptr [mem_00AE79D0], eax
        mov ecx, offset mem_00AE79CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE79CC], 0x0094bcd4
        mov dword ptr [eax + 0x4], offset mem_00AE79CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE79CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004ECD70] ExprParser::ReadWriteMethodType<SelectionVariable, int, {public: int __thiscall SelectionVariable::getNumRequiredObjects(void) const, 0}, int, {public: void __thiscall SelectionVariable::setNumRequiredObjects(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE79D8;
extern "C" int mem_00AE79D4;

extern "C" __declspec(naked) void __fastcall fn_004ECD70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88ef5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE79D8], al
        jne L_guarded
        or dword ptr [mem_00AE79D8], eax
        mov ecx, offset mem_00AE79D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE79D4], 0x0094be84
        mov dword ptr [eax + 0x4], offset mem_00AE79D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE79D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6090] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getMagnitude(void) const, float, &public: void __thiscall MatrixWithProperties::setMagnitude(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9ED8;
extern "C" int mem_00AE9ED4;

extern "C" __declspec(naked) void __fastcall fn_004F6090(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8903ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9ED8], al
        jne L_guarded
        or dword ptr [mem_00AE9ED8], eax
        mov ecx, offset mem_00AE9ED4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9ED4], 0x0094cf64
        mov dword ptr [eax + 0x4], offset mem_00AE9ED4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9ED4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6110] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getPhi(void) const, float, &public: void __thiscall MatrixWithProperties::setPhi(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9EE0;
extern "C" int mem_00AE9EDC;

extern "C" __declspec(naked) void __fastcall fn_004F6110(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8903ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9EE0], al
        jne L_guarded
        or dword ptr [mem_00AE9EE0], eax
        mov ecx, offset mem_00AE9EDC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9EDC], 0x0094d114
        mov dword ptr [eax + 0x4], offset mem_00AE9EDC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9EDC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6330] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getTheta(void) const, float, &public: void __thiscall MatrixWithProperties::setTheta(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9EE8;
extern "C" int mem_00AE9EE4;

extern "C" __declspec(naked) void __fastcall fn_004F6330(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89040e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9EE8], al
        jne L_guarded
        or dword ptr [mem_00AE9EE8], eax
        mov ecx, offset mem_00AE9EE4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9EE4], 0x0094d2c4
        mov dword ptr [eax + 0x4], offset mem_00AE9EE4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9EE4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6400] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getAlpha(void) const, float, &public: void __thiscall MatrixWithProperties::setAlpha(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9EF0;
extern "C" int mem_00AE9EEC;

extern "C" __declspec(naked) void __fastcall fn_004F6400(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89042e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9EF0], al
        jne L_guarded
        or dword ptr [mem_00AE9EF0], eax
        mov ecx, offset mem_00AE9EEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9EEC], 0x0094d474
        mov dword ptr [eax + 0x4], offset mem_00AE9EEC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9EEC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F64D0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getBeta(void) const, float, &public: void __thiscall MatrixWithProperties::setBeta(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9EF8;
extern "C" int mem_00AE9EF4;

extern "C" __declspec(naked) void __fastcall fn_004F64D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89044e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9EF8], al
        jne L_guarded
        or dword ptr [mem_00AE9EF8], eax
        mov ecx, offset mem_00AE9EF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9EF4], 0x0094d624
        mov dword ptr [eax + 0x4], offset mem_00AE9EF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9EF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F65A0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getGamma(void) const, float, &public: void __thiscall MatrixWithProperties::setGamma(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F00;
extern "C" int mem_00AE9EFC;

extern "C" __declspec(naked) void __fastcall fn_004F65A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89046e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9F00], al
        jne L_guarded
        or dword ptr [mem_00AE9F00], eax
        mov ecx, offset mem_00AE9EFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9EFC], 0x0094d7d4
        mov dword ptr [eax + 0x4], offset mem_00AE9EFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9EFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6670] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getX(void) const, float, &public: void __thiscall MatrixWithProperties::setX(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F08;
extern "C" int mem_00AE9F04;

extern "C" __declspec(naked) void __fastcall fn_004F6670(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89048e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9F08], al
        jne L_guarded
        or dword ptr [mem_00AE9F08], eax
        mov ecx, offset mem_00AE9F04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9F04], 0x0094d984
        mov dword ptr [eax + 0x4], offset mem_00AE9F04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9F04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F69F0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getY(void) const, float, &public: void __thiscall MatrixWithProperties::setY(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F10;
extern "C" int mem_00AE9F0C;

extern "C" __declspec(naked) void __fastcall fn_004F69F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8904ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9F10], al
        jne L_guarded
        or dword ptr [mem_00AE9F10], eax
        mov ecx, offset mem_00AE9F0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9F0C], 0x0094db34
        mov dword ptr [eax + 0x4], offset mem_00AE9F0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9F0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004F6D40] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getZ(void) const, float, &public: void __thiscall MatrixWithProperties::setZ(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE9F18;
extern "C" int mem_00AE9F14;

extern "C" __declspec(naked) void __fastcall fn_004F6D40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8904ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE9F18], al
        jne L_guarded
        or dword ptr [mem_00AE9F18], eax
        mov ecx, offset mem_00AE9F14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE9F14], 0x0094dce4
        mov dword ptr [eax + 0x4], offset mem_00AE9F14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE9F14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00504C10] ExprParser::ReadWriteMethodType<Interpreter, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall Interpreter::getType(void) const, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: void __thiscall Interpreter::setType(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &)>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00504C10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891bae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBB48], al
        jne init_done
        or dword ptr [mem_00AEBB48], eax
        mov ecx, offset mem_00AEBB44
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00AEBB44], 0x94f3ac
        mov dword ptr [eax+4], offset mem_00AEBB44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00AEBB44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00504CF0] ExprParser::ReadWriteMethodType<Interpreter, int, &public: int __thiscall Interpreter::bogus(void) const, int, &public: void __thiscall Interpreter::printThroughProperties(int)>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00504CF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891bee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBB70], al
        jne init_done
        or dword ptr [mem_00AEBB70], eax
        mov ecx, offset mem_00AEBB6C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00AEBB6C], 0x94f1fc
        mov dword ptr [eax+4], offset mem_00AEBB6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00AEBB6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00509650] ExprParser::ReadWriteMethodType<NMData::TaskManager, int, {public: int __thiscall NMData::TaskManager::getAccumulationType(void) const, 0}, int, {public: void __thiscall NMData::TaskManager::setAccumulationType(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBC90;
extern "C" int mem_00AEBC8C;

extern "C" __declspec(naked) void __fastcall fn_00509650(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891fce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBC90], al
        jne L_guarded
        or dword ptr [mem_00AEBC90], eax
        mov ecx, offset mem_00AEBC8C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBC8C], 0x0095020c
        mov dword ptr [eax + 0x4], offset mem_00AEBC8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBC8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00511F00] ExprParser::ReadWriteMethodType<Chromosome::Descriptor, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall Chromosome::Descriptor::`vcall'{36, {flat}}, 4}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall Chromosome::Descriptor::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBE00;
extern "C" int mem_00AEBDFC;

extern "C" __declspec(naked) void __fastcall fn_00511F00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89263e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBE00], al
        jne L_guarded
        or dword ptr [mem_00AEBE00], eax
        mov ecx, offset mem_00AEBDFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBDFC], 0x009514a4
        mov dword ptr [eax + 0x4], offset mem_00AEBDFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBDFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00511FE0] ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getLowerLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setLowerLimit(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00AEBE08;
extern "C" int mem_00AEBE04;

extern "C" __declspec(naked) void __fastcall fn_00511FE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89265e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBE08], al
        jne L_guarded
        or dword ptr [mem_00AEBE08], eax
        mov ecx, offset mem_00AEBE04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBE04], 0x00951654
        mov dword ptr [eax + 0x4], offset mem_00AEBE04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBE04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005120B0] ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getUpperLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setUpperLimit(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBE10;
extern "C" int mem_00AEBE0C;

extern "C" __declspec(naked) void __fastcall fn_005120B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89267e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBE10], al
        jne L_guarded
        or dword ptr [mem_00AEBE10], eax
        mov ecx, offset mem_00AEBE0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBE0C], 0x00951804
        mov dword ptr [eax + 0x4], offset mem_00AEBE0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBE0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0051A450] ExprParser::ReadWriteMethodType<NMData::RealChannel, float, &public: float __thiscall NMData::RealChannel::getValue(void) const, float, &public: void __thiscall NMData::RealChannel::setKeyFrame(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEC750;
extern "C" int mem_00AEC74C;

extern "C" __declspec(naked) void __fastcall fn_0051A450(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892dfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEC750], al
        jne L_guarded
        or dword ptr [mem_00AEC750], eax
        mov ecx, offset mem_00AEC74C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEC74C], 0x009522cc
        mov dword ptr [eax + 0x4], offset mem_00AEC74C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEC74C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0051A4E0] ExprParser::ReadWriteMethodType<NMData::QuatChannel, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall NMData::QuatChannel::getValue(void) const, NM::Vector4 const &, &public: void __thiscall NMData::QuatChannel::setKeyFrame(class NM::Vector4 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEC758;
extern "C" int mem_00AEC754;

extern "C" __declspec(naked) void __fastcall fn_0051A4E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892e1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEC758], al
        jne L_guarded
        or dword ptr [mem_00AEC758], eax
        mov ecx, offset mem_00AEC754
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEC754], 0x0095247c
        mov dword ptr [eax + 0x4], offset mem_00AEC754
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEC754
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005214B0] ExprParser::ReadWriteMethodType<PoseLoader, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall PoseLoader::getPath(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall PoseLoader::setPath(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AECC50;
extern "C" int mem_00AECC4C;

extern "C" __declspec(naked) void __fastcall fn_005214B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89344e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AECC50], al
        jne L_guarded
        or dword ptr [mem_00AECC50], eax
        mov ecx, offset mem_00AECC4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AECC4C], 0x00952864
        mov dword ptr [eax + 0x4], offset mem_00AECC4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AECC4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005222B0] ExprParser::ReadWriteMethodType<ThreeLayerNet, int, &public: int __thiscall ThreeLayerNet::getNumHidden(void) const, int, &public: void __thiscall ThreeLayerNet::setNumHidden(int)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED290;
extern "C" int mem_00AED28C;

extern "C" __declspec(naked) void __fastcall fn_005222B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89375e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AED290], al
        jne L_guarded
        or dword ptr [mem_00AED290], eax
        mov ecx, offset mem_00AED28C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AED28C], 0x00952a7c
        mov dword ptr [eax + 0x4], offset mem_00AED28C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AED28C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00524850] ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getInitialValue(void) const, float, &public: void __thiscall NMData::VariableValue::setInitialValue(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED2C0;
extern "C" int mem_00AED2BC;

extern "C" __declspec(naked) void __fastcall fn_00524850(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x893a2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AED2C0], al
        jne L_guarded
        or dword ptr [mem_00AED2C0], eax
        mov ecx, offset mem_00AED2BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AED2BC], 0x00952ebc
        mov dword ptr [eax + 0x4], offset mem_00AED2BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AED2BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005248D0] ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getBestValue(void) const, float, &public: void __thiscall NMData::VariableValue::setBestValue(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED2C8;
extern "C" int mem_00AED2C4;

extern "C" __declspec(naked) void __fastcall fn_005248D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x893a4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AED2C8], al
        jne L_guarded
        or dword ptr [mem_00AED2C8], eax
        mov ecx, offset mem_00AED2C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AED2C4], 0x0095306c
        mov dword ptr [eax + 0x4], offset mem_00AED2C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AED2C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005249E0] ExprParser::ReadWriteMethodType<NMData::NetworkConnectorData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall NMData::NetworkConnectorData::`vcall'{36, {flat}}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: void __thiscall NMData::NetworkConnectorData::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AED2D0;
extern "C" int mem_00AED2CC;

extern "C" __declspec(naked) void __fastcall fn_005249E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x893a6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AED2D0], al
        jne L_guarded
        or dword ptr [mem_00AED2D0], eax
        mov ecx, offset mem_00AED2CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AED2CC], 0x0095321c
        mov dword ptr [eax + 0x4], offset mem_00AED2CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AED2CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00585360] ExprParser::ReadWriteMethodType<ObjectNode, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall ObjectNode::`vcall'{36, {flat}}, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall ObjectNode::`vcall'{92, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B3EB88;
extern "C" int mem_00B3EB84;
extern "C" __declspec(naked) void __fastcall fn_00585360(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89f4be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3EB88], al
        jne init_done
        or dword ptr [mem_00B3EB88], eax
        mov ecx, offset mem_00B3EB84
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3EB84], 0x95a724
        mov dword ptr [eax+4], offset mem_00B3EB84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3EB84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00585430] ExprParser::ReadWriteMethodType<ObjectNode, bool, {public: bool __thiscall ObjectNode::getVisibility(void) const, 0}, bool, {[thunk]: __thiscall ObjectNode::`vcall'{32, {flat}}, 12}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3EB90;
extern "C" int mem_00B3EB8C;
extern "C" __declspec(naked) void __fastcall fn_00585430(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89f4de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3EB90], al
        jne init_done
        or dword ptr [mem_00B3EB90], eax
        mov ecx, offset mem_00B3EB8C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3EB8C], 0x95a8d4
        mov dword ptr [eax+4], offset mem_00B3EB8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3EB8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C060] ExprParser::ReadWriteMethodType<AnimatableTransform, NM::Vector4 const &, {protected: class NM::Vector4 const & __thiscall AnimatableTransform::getQuat(void) const, 0}, NM::Vector4 const &, {protected: void __thiscall AnimatableTransform::setQuat(class NM::Vector4 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F900;
extern "C" int mem_00B3F8FC;
extern "C" __declspec(naked) void __fastcall fn_0058C060(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89fa4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F900], al
        jne init_done
        or dword ptr [mem_00B3F900], eax
        mov ecx, offset mem_00B3F8FC
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F8FC], 0x95b41c
        mov dword ptr [eax+4], offset mem_00B3F8FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F8FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C130] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F908;
extern "C" int mem_00B3F904;
extern "C" __declspec(naked) void __fastcall fn_0058C130(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89fa6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F908], al
        jne init_done
        or dword ptr [mem_00B3F908], eax
        mov ecx, offset mem_00B3F904
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F904], 0x95b5cc
        mov dword ptr [eax+4], offset mem_00B3F904
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F904
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C200] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F910;
extern "C" int mem_00B3F90C;
extern "C" __declspec(naked) void __fastcall fn_0058C200(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89fa8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F910], al
        jne init_done
        or dword ptr [mem_00B3F910], eax
        mov ecx, offset mem_00B3F90C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F90C], 0x95b77c
        mov dword ptr [eax+4], offset mem_00B3F90C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F90C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C2D0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F918;
extern "C" int mem_00B3F914;
extern "C" __declspec(naked) void __fastcall fn_0058C2D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89faae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F918], al
        jne init_done
        or dword ptr [mem_00B3F918], eax
        mov ecx, offset mem_00B3F914
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F914], 0x95b92c
        mov dword ptr [eax+4], offset mem_00B3F914
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F914
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C3A0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F920;
extern "C" int mem_00B3F91C;
extern "C" __declspec(naked) void __fastcall fn_0058C3A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89face
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F920], al
        jne init_done
        or dword ptr [mem_00B3F920], eax
        mov ecx, offset mem_00B3F91C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F91C], 0x95badc
        mov dword ptr [eax+4], offset mem_00B3F91C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F91C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058C7A0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F928;
extern "C" int mem_00B3F924;
extern "C" __declspec(naked) void __fastcall fn_0058C7A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89faee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F928], al
        jne init_done
        or dword ptr [mem_00B3F928], eax
        mov ecx, offset mem_00B3F924
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F924], 0x95bc8c
        mov dword ptr [eax+4], offset mem_00B3F924
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F924
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058CB10] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F930;
extern "C" int mem_00B3F92C;
extern "C" __declspec(naked) void __fastcall fn_0058CB10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89fb0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F930], al
        jne init_done
        or dword ptr [mem_00B3F930], eax
        mov ecx, offset mem_00B3F92C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F92C], 0x95be3c
        mov dword ptr [eax+4], offset mem_00B3F92C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F92C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058F9E0] ExprParser::ReadWriteMethodType<TransformNode, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall TransformNode::getUserRefFrame(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, {public: void __thiscall TransformNode::setUserRefFrame(class std::basic_string<char, std::char_traits<char>, std::allocator<char>>), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F970;
extern "C" int mem_00B3F96C;
extern "C" __declspec(naked) void __fastcall fn_0058F9E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89ffae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F970], al
        jne init_done
        or dword ptr [mem_00B3F970], eax
        mov ecx, offset mem_00B3F96C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F96C], 0x95c1e4
        mov dword ptr [eax+4], offset mem_00B3F96C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F96C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0058FE00] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F978;
extern "C" int mem_00B3F974;
extern "C" __declspec(naked) void __fastcall fn_0058FE00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89ffce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F978], al
        jne init_done
        or dword ptr [mem_00B3F978], eax
        mov ecx, offset mem_00B3F974
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F974], 0x95c394
        mov dword ptr [eax+4], offset mem_00B3F974
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F974
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x005901D0] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F980;
extern "C" int mem_00B3F97C;
extern "C" __declspec(naked) void __fastcall fn_005901D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89ffee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F980], al
        jne init_done
        or dword ptr [mem_00B3F980], eax
        mov ecx, offset mem_00B3F97C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F97C], 0x95c544
        mov dword ptr [eax+4], offset mem_00B3F97C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F97C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00590420] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F988;
extern "C" int mem_00B3F984;
extern "C" __declspec(naked) void __fastcall fn_00590420(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a000e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F988], al
        jne init_done
        or dword ptr [mem_00B3F988], eax
        mov ecx, offset mem_00B3F984
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F984], 0x95c6f4
        mov dword ptr [eax+4], offset mem_00B3F984
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F984
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00590770] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F990;
extern "C" int mem_00B3F98C;
extern "C" __declspec(naked) void __fastcall fn_00590770(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a002e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F990], al
        jne init_done
        or dword ptr [mem_00B3F990], eax
        mov ecx, offset mem_00B3F98C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F98C], 0x95c8a4
        mov dword ptr [eax+4], offset mem_00B3F98C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F98C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00590AA0] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F998;
extern "C" int mem_00B3F994;
extern "C" __declspec(naked) void __fastcall fn_00590AA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a004e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F998], al
        jne init_done
        or dword ptr [mem_00B3F998], eax
        mov ecx, offset mem_00B3F994
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F994], 0x95ca54
        mov dword ptr [eax+4], offset mem_00B3F994
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F994
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00590E80] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9A0;
extern "C" int mem_00B3F99C;

extern "C" __declspec(naked) void __fastcall fn_00590E80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a006e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B3F9A0], al
        jne init_done
        or dword ptr [mem_00B3F9A0], eax
        mov ecx, offset mem_00B3F99C
        mov dword ptr [esp+8], 0
        call ext_0067A670
        mov eax, dword ptr [esp+0x10]
        mov dword ptr [mem_00B3F99C], 0x95cc04
        mov dword ptr [eax+4], offset mem_00B3F99C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    init_done:
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [ecx+4], offset mem_00B3F99C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x0059EBF0] ExprParser::ReadWriteMethodType<NMData::CharacterData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::CharacterData::getDisplayName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::CharacterData::`vcall'{96, {flat}}, 4}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B414A0;
extern "C" int mem_00B4149C;

extern "C" __declspec(naked) void __fastcall fn_0059EBF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a163e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B414A0], al
        jne L_guarded
        or dword ptr [mem_00B414A0], eax
        mov ecx, offset mem_00B4149C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4149C], 0x0095e45c
        mov dword ptr [eax + 0x4], offset mem_00B4149C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4149C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0059EF90] ExprParser::ReadWriteMethodType<NMData::CharacterData, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{128, {flat}}, 4}, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{100, {flat}}, 4}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B414A8;
extern "C" int mem_00B414A4;

extern "C" __declspec(naked) void __fastcall fn_0059EF90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a165e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B414A8], al
        jne L_guarded
        or dword ptr [mem_00B414A8], eax
        mov ecx, offset mem_00B414A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B414A4], 0x0095e60c
        mov dword ptr [eax + 0x4], offset mem_00B414A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B414A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005AADD0] ExprParser::ReadWriteMethodType<NMData::RigNode, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::RigNode::getHoldModeName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {private: void __thiscall NMData::RigNode::setHoldModeFromNameProperty(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B42208;
extern "C" int mem_00B42204;

extern "C" __declspec(naked) void __fastcall fn_005AADD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a24de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B42208], al
        jne L_guarded
        or dword ptr [mem_00B42208], eax
        mov ecx, offset mem_00B42204
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B42204], 0x0095f03c
        mov dword ptr [eax + 0x4], offset mem_00B42204
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B42204
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005AB1A0] ExprParser::ReadWriteMethodType<NMData::RigNode, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::RigNode::getMetaBodyName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {private: void __thiscall NMData::RigNode::setMetaBodyNameProperty(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B42210;
extern "C" int mem_00B4220C;

extern "C" __declspec(naked) void __fastcall fn_005AB1A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a24fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B42210], al
        jne L_guarded
        or dword ptr [mem_00B42210], eax
        mov ecx, offset mem_00B4220C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4220C], 0x0095f1ec
        mov dword ptr [eax + 0x4], offset mem_00B4220C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4220C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B2A50] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam0(void) const, float, &private: void __thiscall Geometry::setParam0(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43528;
extern "C" int mem_00B43524;

extern "C" __declspec(naked) void __fastcall fn_005B2A50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a341e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43528], al
        jne L_guarded
        or dword ptr [mem_00B43528], eax
        mov ecx, offset mem_00B43524
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43524], 0x009600ac
        mov dword ptr [eax + 0x4], offset mem_00B43524
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43524
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B2C80] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam1(void) const, float, &private: void __thiscall Geometry::setParam1(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4352C;
extern "C" int mem_00B43530;

extern "C" __declspec(naked) void __fastcall fn_005B2C80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a343e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43530], al
        jne L_guarded
        or dword ptr [mem_00B43530], eax
        mov ecx, offset mem_00B4352C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4352C], 0x0096025c
        mov dword ptr [eax + 0x4], offset mem_00B4352C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4352C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B2E50] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam2(void) const, float, &private: void __thiscall Geometry::setParam2(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43538;
extern "C" int mem_00B43534;

extern "C" __declspec(naked) void __fastcall fn_005B2E50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a345e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43538], al
        jne L_guarded
        or dword ptr [mem_00B43538], eax
        mov ecx, offset mem_00B43534
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43534], 0x0096040c
        mov dword ptr [eax + 0x4], offset mem_00B43534
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43534
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B30F0] ExprParser::ReadWriteMethodType<Geometry, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall Geometry::getFileName(void) const, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: void __thiscall Geometry::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43540;
extern "C" int mem_00B4353C;

extern "C" __declspec(naked) void __fastcall fn_005B30F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a347e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43540], al
        jne L_guarded
        or dword ptr [mem_00B43540], eax
        mov ecx, offset mem_00B4353C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4353C], 0x009605bc
        mov dword ptr [eax + 0x4], offset mem_00B4353C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4353C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B3170] ExprParser::ReadWriteMethodType<Geometry, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall Geometry::getTypeNameNonConst(void) const, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, &public: void __thiscall Geometry::setTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>>)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43548;
extern "C" int mem_00B43544;

extern "C" __declspec(naked) void __fastcall fn_005B3170(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a349e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43548], al
        jne L_guarded
        or dword ptr [mem_00B43548], eax
        mov ecx, offset mem_00B43544
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43544], 0x0096076c
        mov dword ptr [eax + 0x4], offset mem_00B43544
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43544
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B86D0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getAbsolutePosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setPosition(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D08;
extern "C" int mem_00B43D04;

extern "C" __declspec(naked) void __fastcall fn_005B86D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3cde
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D08], al
        jne L_guarded
        or dword ptr [mem_00B43D08], eax
        mov ecx, offset mem_00B43D04
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D04], 0x009621cc
        mov dword ptr [eax + 0x4], offset mem_00B43D04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D04
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B87A0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTS(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D10;
extern "C" int mem_00B43D0C;

extern "C" __declspec(naked) void __fastcall fn_005B87A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3cfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D10], al
        jne L_guarded
        or dword ptr [mem_00B43D10], eax
        mov ecx, offset mem_00B43D0C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D0C], 0x0096237c
        mov dword ptr [eax + 0x4], offset mem_00B43D0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D0C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8870] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTSA(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B43D18;
extern "C" int mem_00B43D14;

extern "C" __declspec(naked) void __fastcall fn_005B8870(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3d1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D18], al
        jne L_guarded
        or dword ptr [mem_00B43D18], eax
        mov ecx, offset mem_00B43D14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D14], 0x0096252c
        mov dword ptr [eax + 0x4], offset mem_00B43D14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8940] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationSE(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D20;
extern "C" int mem_00B43D1C;

extern "C" __declspec(naked) void __fastcall fn_005B8940(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3d3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D20], al
        jne L_guarded
        or dword ptr [mem_00B43D20], eax
        mov ecx, offset mem_00B43D1C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D1C], 0x009626dc
        mov dword ptr [eax + 0x4], offset mem_00B43D1C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D1C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8A10] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientation(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientation(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D28;
extern "C" int mem_00B43D24;

extern "C" __declspec(naked) void __fastcall fn_005B8A10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3d5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D28], al
        jne L_guarded
        or dword ptr [mem_00B43D28], eax
        mov ecx, offset mem_00B43D24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D24], 0x0096288c
        mov dword ptr [eax + 0x4], offset mem_00B43D24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8AE0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getMass(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setMass(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D30;
extern "C" int mem_00B43D2C;

extern "C" __declspec(naked) void __fastcall fn_005B8AE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3d7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D30], al
        jne L_guarded
        or dword ptr [mem_00B43D30], eax
        mov ecx, offset mem_00B43D2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D2C], 0x00962a3c
        mov dword ptr [eax + 0x4], offset mem_00B43D2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8BB0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getLinearVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setLinearVelocityDamping(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D38;
extern "C" int mem_00B43D34;

extern "C" __declspec(naked) void __fastcall fn_005B8BB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3d9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D38], al
        jne L_guarded
        or dword ptr [mem_00B43D38], eax
        mov ecx, offset mem_00B43D34
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D34], 0x00962bec
        mov dword ptr [eax + 0x4], offset mem_00B43D34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D34
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B8C80] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getAngularVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setAngularVelocityDamping(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D40;
extern "C" int mem_00B43D3C;

extern "C" __declspec(naked) void __fastcall fn_005B8C80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3dbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43D40], al
        jne L_guarded
        or dword ptr [mem_00B43D40], eax
        mov ecx, offset mem_00B43D3C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43D3C], 0x00962d9c
        mov dword ptr [eax + 0x4], offset mem_00B43D3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43D3C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C73F0] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithAncestors(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithAncestors(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444D4;
extern "C" int mem_00B444D0;

extern "C" __declspec(naked) void __fastcall fn_005C73F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a48ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B444D4], al
        jne L_guarded
        or dword ptr [mem_00B444D4], eax
        mov ecx, offset mem_00B444D0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B444D0], 0x00964d44
        mov dword ptr [eax + 0x4], offset mem_00B444D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B444D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C7730] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithParent(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithParent(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444DC;
extern "C" int mem_00B444D8;

extern "C" __declspec(naked) void __fastcall fn_005C7730(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a48ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B444DC], al
        jne L_guarded
        or dword ptr [mem_00B444DC], eax
        mov ecx, offset mem_00B444D8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B444D8], 0x00964ef4
        mov dword ptr [eax + 0x4], offset mem_00B444D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B444D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C7950] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithSiblings(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithSiblings(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B444E4;
extern "C" int mem_00B444E0;

extern "C" __declspec(naked) void __fastcall fn_005C7950(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a48ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B444E4], al
        jne L_guarded
        or dword ptr [mem_00B444E4], eax
        mov ecx, offset mem_00B444E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B444E0], 0x009650a4
        mov dword ptr [eax + 0x4], offset mem_00B444E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B444E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" int mem_00B444EC;
extern "C" int mem_00B444E8;

// [0x005C7CA0] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{108, {flat}}, 0}, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{104, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C7CA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a490e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B444EC], al
        jne L_guarded
        or dword ptr [mem_00B444EC], eax
        mov ecx, offset mem_00B444E8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B444E8], 0x00965254
        mov dword ptr [eax + 0x4], offset mem_00B444E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B444E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" int mem_00B44514;
extern "C" int mem_00B44510;

// [0x005C7D80] ExprParser::ReadWriteMethodType<NMData::CollisionModelDataBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::CollisionModelDataBase::getMaterialName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C7D80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a494e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B44514], al
        jne L_guarded
        or dword ptr [mem_00B44514], eax
        mov ecx, offset mem_00B44510
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44510], 0x00964b94
        mov dword ptr [eax + 0x4], offset mem_00B44510
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44510
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005CEE00] ExprParser::ReadWriteMethodType<NMData::InertialBodyData, float, {public: float __thiscall NMData::InertialBodyData::getDensity(void) const, 0}, float, {public: void __thiscall NMData::InertialBodyData::setDensity(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44C18;
extern "C" int mem_00B44C14;

extern "C" __declspec(naked) void __fastcall fn_005CEE00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a4eee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B44C18], al
        jne L_guarded
        or dword ptr [mem_00B44C18], eax
        mov ecx, offset mem_00B44C14
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44C14], 0x00965b9c
        mov dword ptr [eax + 0x4], offset mem_00B44C14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44C14
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D1C10] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFieldOfView(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFieldOfView(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B459AC;
extern "C" int mem_00B459A8;
extern "C" __declspec(naked) void __fastcall fn_005D1C10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a52ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459AC], al
        jne L_guarded
        or dword ptr [mem_00B459AC], eax
        mov ecx, offset mem_00B459A8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459A8], 0x0096884c
        mov dword ptr [eax + 0x4], offset mem_00B459A8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459A8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D1CE0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFocalLength(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFocalLength(float), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B459B4;
extern "C" int mem_00B459B0;
extern "C" __declspec(naked) void __fastcall fn_005D1CE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a52ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459B4], al
        jne L_guarded
        or dword ptr [mem_00B459B4], eax
        mov ecx, offset mem_00B459B0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459B0], 0x009689fc
        mov dword ptr [eax + 0x4], offset mem_00B459B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D20D0] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::VideoPlaneData::getFileName(void) const, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &public: void __thiscall NMData::VideoPlaneData::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B459BC;
extern "C" int mem_00B459B8;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_005D20D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a52ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459BC], al
        jne L_guarded
        or dword ptr [mem_00B459BC], eax
        mov ecx, offset mem_00B459B8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459B8], 0x00965e1c
        mov dword ptr [eax + 0x4], offset mem_00B459B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" int mem_00B459C4;
extern "C" int mem_00B459C0;

// [0x005D2290] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getStartFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setStartFrame(int)>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005D2290(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a530e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459C4], al
        jne L_guarded
        or dword ptr [mem_00B459C4], eax
        mov ecx, offset mem_00B459C0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459C0], 0x00965fcc
        mov dword ptr [eax + 0x4], offset mem_00B459C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2310] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getEndFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setEndFrame(int)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459CC;
extern "C" int mem_00B459C8;

extern "C" __declspec(naked) void __fastcall fn_005D2310(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a532e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459CC], al
        jne L_guarded
        or dword ptr [mem_00B459CC], eax
        mov ecx, offset mem_00B459C8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459C8], 0x0096617c
        mov dword ptr [eax + 0x4], offset mem_00B459C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2390] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getFrameOffset(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setFrameOffset(int)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459D4;
extern "C" int mem_00B459D0;

extern "C" __declspec(naked) void __fastcall fn_005D2390(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a534e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459D4], al
        jne L_guarded
        or dword ptr [mem_00B459D4], eax
        mov ecx, offset mem_00B459D0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459D0], 0x0096632c
        mov dword ptr [eax + 0x4], offset mem_00B459D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2560] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getFrameRate(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setFrameRate(float)>::vfunc_40 (122 bytes)
extern "C" int mem_00B459DC;
extern "C" int mem_00B459D8;

extern "C" __declspec(naked) void __fastcall fn_005D2560(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a536e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459DC], al
        jne L_guarded
        or dword ptr [mem_00B459DC], eax
        mov ecx, offset mem_00B459D8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459D8], 0x009664dc
        mov dword ptr [eax + 0x4], offset mem_00B459D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2740] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, bool, &public: bool __thiscall NMData::VideoPlaneData::mustDrawTimeCode(void) const, bool, &public: void __thiscall NMData::VideoPlaneData::setMustDrawTimeCode(bool)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459E4;
extern "C" int mem_00B459E0;

extern "C" __declspec(naked) void __fastcall fn_005D2740(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a538e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459E4], al
        jne L_guarded
        or dword ptr [mem_00B459E4], eax
        mov ecx, offset mem_00B459E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459E0], 0x0096668c
        mov dword ptr [eax + 0x4], offset mem_00B459E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2970] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXScale(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459EC;
extern "C" int mem_00B459E8;

extern "C" __declspec(naked) void __fastcall fn_005D2970(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a53ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459EC], al
        jne L_guarded
        or dword ptr [mem_00B459EC], eax
        mov ecx, offset mem_00B459E8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459E8], 0x0096683c
        mov dword ptr [eax + 0x4], offset mem_00B459E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2B80] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYScale(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459F4;
extern "C" int mem_00B459F0;

extern "C" __declspec(naked) void __fastcall fn_005D2B80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a53ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459F4], al
        jne L_guarded
        or dword ptr [mem_00B459F4], eax
        mov ecx, offset mem_00B459F0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459F0], 0x009669ec
        mov dword ptr [eax + 0x4], offset mem_00B459F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D2F80] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXOffset(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B459FC;
extern "C" int mem_00B459F8;

extern "C" __declspec(naked) void __fastcall fn_005D2F80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a53ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B459FC], al
        jne L_guarded
        or dword ptr [mem_00B459FC], eax
        mov ecx, offset mem_00B459F8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B459F8], 0x00966b9c
        mov dword ptr [eax + 0x4], offset mem_00B459F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B459F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3390] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYOffset(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A04;
extern "C" int mem_00B45A00;

extern "C" __declspec(naked) void __fastcall fn_005D3390(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a540e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A04], al
        jne L_guarded
        or dword ptr [mem_00B45A04], eax
        mov ecx, offset mem_00B45A00
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A00], 0x00966d4c
        mov dword ptr [eax + 0x4], offset mem_00B45A00
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A00
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3710] ExprParser::ReadWriteMethodType<NMData::CameraData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::CameraData::getCameraTypeName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::CameraData::setCameraTypeName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A0C;
extern "C" int mem_00B45A08;

extern "C" __declspec(naked) void __fastcall fn_005D3710(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a544e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A0C], al
        jne L_guarded
        or dword ptr [mem_00B45A0C], eax
        mov ecx, offset mem_00B45A08
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A08], 0x00966efc
        mov dword ptr [eax + 0x4], offset mem_00B45A08
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A08
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3790] ExprParser::ReadWriteMethodType<NMData::CameraData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::CameraData::getCameraModeName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::CameraData::setCameraModeName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A14;
extern "C" int mem_00B45A10;

extern "C" __declspec(naked) void __fastcall fn_005D3790(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a546e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A14], al
        jne L_guarded
        or dword ptr [mem_00B45A14], eax
        mov ecx, offset mem_00B45A10
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A10], 0x009670ac
        mov dword ptr [eax + 0x4], offset mem_00B45A10
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A10
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3810] ExprParser::ReadWriteMethodType<NMData::CameraData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::CameraData::getFilmGateDrawModeName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::CameraData::setFilmGateDrawModeName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A1C;
extern "C" int mem_00B45A18;

extern "C" __declspec(naked) void __fastcall fn_005D3810(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a548e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A1C], al
        jne L_guarded
        or dword ptr [mem_00B45A1C], eax
        mov ecx, offset mem_00B45A18
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A18], 0x0096725c
        mov dword ptr [eax + 0x4], offset mem_00B45A18
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A18
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3890] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getCentreOfInterest(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setCentreOfInterest(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A24;
extern "C" int mem_00B45A20;

extern "C" __declspec(naked) void __fastcall fn_005D3890(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a54ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A24], al
        jne L_guarded
        or dword ptr [mem_00B45A24], eax
        mov ecx, offset mem_00B45A20
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A20], 0x0096740c
        mov dword ptr [eax + 0x4], offset mem_00B45A20
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A20
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D3D10] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFocalLength(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFocalLength(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A2C;
extern "C" int mem_00B45A28;

extern "C" __declspec(naked) void __fastcall fn_005D3D10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a54ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A2C], al
        jne L_guarded
        or dword ptr [mem_00B45A2C], eax
        mov ecx, offset mem_00B45A28
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A28], 0x009675bc
        mov dword ptr [eax + 0x4], offset mem_00B45A28
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A28
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D40F0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureX(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A34;
extern "C" int mem_00B45A30;

extern "C" __declspec(naked) void __fastcall fn_005D40F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a54ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A34], al
        jne L_guarded
        or dword ptr [mem_00B45A34], eax
        mov ecx, offset mem_00B45A30
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A30], 0x0096776c
        mov dword ptr [eax + 0x4], offset mem_00B45A30
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A30
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D4640] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureY(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A3C;
extern "C" int mem_00B45A38;

extern "C" __declspec(naked) void __fastcall fn_005D4640(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a550e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A3C], al
        jne L_guarded
        or dword ptr [mem_00B45A3C], eax
        mov ecx, offset mem_00B45A38
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A38], 0x0096791c
        mov dword ptr [eax + 0x4], offset mem_00B45A38
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A38
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D4A60] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getSqueezeRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setSqueezeRatio(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A44;
extern "C" int mem_00B45A40;

extern "C" __declspec(naked) void __fastcall fn_005D4A60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a552e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A44], al
        jne L_guarded
        or dword ptr [mem_00B45A44], eax
        mov ecx, offset mem_00B45A40
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A40], 0x00967acc
        mov dword ptr [eax + 0x4], offset mem_00B45A40
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A40
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D4D40] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getPictureRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setPictureRatio(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A4C;
extern "C" int mem_00B45A48;

extern "C" __declspec(naked) void __fastcall fn_005D4D40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a554e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A4C], al
        jne L_guarded
        or dword ptr [mem_00B45A4C], eax
        mov ecx, offset mem_00B45A48
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A48], 0x00967c7c
        mov dword ptr [eax + 0x4], offset mem_00B45A48
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A48
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D50B0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getOverscanRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setOverscanRatio(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A54;
extern "C" int mem_00B45A50;

extern "C" __declspec(naked) void __fastcall fn_005D50B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a556e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A54], al
        jne L_guarded
        or dword ptr [mem_00B45A54], eax
        mov ecx, offset mem_00B45A50
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A50], 0x00967e2c
        mov dword ptr [eax + 0x4], offset mem_00B45A50
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A50
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D53B0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFrontCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFrontCutPlane(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A5C;
extern "C" int mem_00B45A58;

extern "C" __declspec(naked) void __fastcall fn_005D53B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a558e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A5C], al
        jne L_guarded
        or dword ptr [mem_00B45A5C], eax
        mov ecx, offset mem_00B45A58
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A58], 0x00967fdc
        mov dword ptr [eax + 0x4], offset mem_00B45A58
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A58
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D5690] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getBackCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setBackCutPlane(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A64;
extern "C" int mem_00B45A60;

extern "C" __declspec(naked) void __fastcall fn_005D5690(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a55ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A64], al
        jne L_guarded
        or dword ptr [mem_00B45A64], eax
        mov ecx, offset mem_00B45A60
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A60], 0x0096818c
        mov dword ptr [eax + 0x4], offset mem_00B45A60
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A60
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D5A80] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isVideoPlaneEnabled(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsVideoPlaneEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A6C;
extern "C" int mem_00B45A68;

extern "C" __declspec(naked) void __fastcall fn_005D5A80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a55ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A6C], al
        jne L_guarded
        or dword ptr [mem_00B45A6C], eax
        mov ecx, offset mem_00B45A68
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A68], 0x0096833c
        mov dword ptr [eax + 0x4], offset mem_00B45A68
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A68
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D5CE0] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {private: bool __thiscall NMData::CameraData::isFrustumVisible(void) const, 0}, bool, {private: void __thiscall NMData::CameraData::setFrustumVisible(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A74;
extern "C" int mem_00B45A70;

extern "C" __declspec(naked) void __fastcall fn_005D5CE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a55ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A74], al
        jne L_guarded
        or dword ptr [mem_00B45A74], eax
        mov ecx, offset mem_00B45A70
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A70], 0x009684ec
        mov dword ptr [eax + 0x4], offset mem_00B45A70
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A70
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005D60A0] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isSettingsLocked(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsSettingsLocked(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45A7C;
extern "C" int mem_00B45A78;

extern "C" __declspec(naked) void __fastcall fn_005D60A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a560e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45A7C], al
        jne L_guarded
        or dword ptr [mem_00B45A7C], eax
        mov ecx, offset mem_00B45A78
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45A78], 0x0096869c
        mov dword ptr [eax + 0x4], offset mem_00B45A78
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45A78
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E32D0] ExprParser::ReadWriteMethodType<NMData::RelationshipData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::RelationshipData::getMetaBodyName0(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::RelationshipData::setMetaBodyName0(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E64;
extern "C" int mem_00B45E60;

extern "C" __declspec(naked) void __fastcall fn_005E32D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a621e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E64], al
        jne L_guarded
        or dword ptr [mem_00B45E64], eax
        mov ecx, offset mem_00B45E60
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E60], 0x00968fbc
        mov dword ptr [eax + 0x4], offset mem_00B45E60
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E60
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" int mem_00B45E6C;
extern "C" int mem_00B45E68;

// [0x005E3580] ExprParser::ReadWriteMethodType<NMData::RelationshipData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::RelationshipData::getMetaBodyName1(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::RelationshipData::setMetaBodyName1(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E3580(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a623e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E6C], al
        jne L_guarded
        or dword ptr [mem_00B45E6C], eax
        mov ecx, offset mem_00B45E68
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E68], 0x0096916c
        mov dword ptr [eax + 0x4], offset mem_00B45E68
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E68
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_0067A670();
extern "C" int mem_00B45E74;
extern "C" int mem_00B45E70;

// [0x005E39C0] ExprParser::ReadWriteMethodType<NMData::HingeData, float, {private: float __thiscall NMData::HingeData::getUserCurrentAngle(void) const, 0}, float, {private: void __thiscall NMData::HingeData::setUserCurrentAngle(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E39C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a625e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E74], al
        jne L_guarded
        or dword ptr [mem_00B45E74], eax
        mov ecx, offset mem_00B45E70
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E70], 0x0096931c
        mov dword ptr [eax + 0x4], offset mem_00B45E70
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E70
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3A90] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentTwist(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E7C;
extern "C" int mem_00B45E78;

extern "C" __declspec(naked) void __fastcall fn_005E3A90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a627e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E7C], al
        jne L_guarded
        or dword ptr [mem_00B45E7C], eax
        mov ecx, offset mem_00B45E78
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E78], 0x009694cc
        mov dword ptr [eax + 0x4], offset mem_00B45E78
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E78
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3B60] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing1(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E84;
extern "C" int mem_00B45E80;

extern "C" __declspec(naked) void __fastcall fn_005E3B60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a629e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E84], al
        jne L_guarded
        or dword ptr [mem_00B45E84], eax
        mov ecx, offset mem_00B45E80
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E80], 0x0096967c
        mov dword ptr [eax + 0x4], offset mem_00B45E80
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E80
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3C30] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing2(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E8C;
extern "C" int mem_00B45E88;

extern "C" __declspec(naked) void __fastcall fn_005E3C30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a62be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E8C], al
        jne L_guarded
        or dword ptr [mem_00B45E8C], eax
        mov ecx, offset mem_00B45E88
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E88], 0x0096982c
        mov dword ptr [eax + 0x4], offset mem_00B45E88
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E88
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3D40] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::SkeletalJointData::getFixedCoordsName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::SkeletalJointData::setFixedCoordsName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E94;
extern "C" int mem_00B45E90;

extern "C" __declspec(naked) void __fastcall fn_005E3D40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a62de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E94], al
        jne L_guarded
        or dword ptr [mem_00B45E94], eax
        mov ecx, offset mem_00B45E90
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E90], 0x009699dc
        mov dword ptr [eax + 0x4], offset mem_00B45E90
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E90
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3E10] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitTwistSizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45E9C;
extern "C" int mem_00B45E98;

extern "C" __declspec(naked) void __fastcall fn_005E3E10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a62fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45E9C], al
        jne L_guarded
        or dword ptr [mem_00B45E9C], eax
        mov ecx, offset mem_00B45E98
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45E98], 0x00969b8c
        mov dword ptr [eax + 0x4], offset mem_00B45E98
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45E98
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3EE0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EA4;
extern "C" int mem_00B45EA0;

extern "C" __declspec(naked) void __fastcall fn_005E3EE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a631e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EA4], al
        jne L_guarded
        or dword ptr [mem_00B45EA4], eax
        mov ecx, offset mem_00B45EA0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EA0], 0x00969d3c
        mov dword ptr [eax + 0x4], offset mem_00B45EA0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EA0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E3FB0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EAC;
extern "C" int mem_00B45EA8;

extern "C" __declspec(naked) void __fastcall fn_005E3FB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a633e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EAC], al
        jne L_guarded
        or dword ptr [mem_00B45EAC], eax
        mov ecx, offset mem_00B45EA8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EA8], 0x00969eec
        mov dword ptr [eax + 0x4], offset mem_00B45EA8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EA8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4080] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitRadiusFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EB4;
extern "C" int mem_00B45EB0;

extern "C" __declspec(naked) void __fastcall fn_005E4080(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a635e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EB4], al
        jne L_guarded
        or dword ptr [mem_00B45EB4], eax
        mov ecx, offset mem_00B45EB0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EB0], 0x0096a09c
        mov dword ptr [eax + 0x4], offset mem_00B45EB0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EB0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4150] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitTwistSizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EBC;
extern "C" int mem_00B45EB8;

extern "C" __declspec(naked) void __fastcall fn_005E4150(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a637e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EBC], al
        jne L_guarded
        or dword ptr [mem_00B45EBC], eax
        mov ecx, offset mem_00B45EB8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EB8], 0x0096a24c
        mov dword ptr [eax + 0x4], offset mem_00B45EB8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EB8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4220] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EC4;
extern "C" int mem_00B45EC0;

extern "C" __declspec(naked) void __fastcall fn_005E4220(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a639e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EC4], al
        jne L_guarded
        or dword ptr [mem_00B45EC4], eax
        mov ecx, offset mem_00B45EC0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EC0], 0x0096a3fc
        mov dword ptr [eax + 0x4], offset mem_00B45EC0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EC0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E42F0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45ECC;
extern "C" int mem_00B45EC8;

extern "C" __declspec(naked) void __fastcall fn_005E42F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a63be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45ECC], al
        jne L_guarded
        or dword ptr [mem_00B45ECC], eax
        mov ecx, offset mem_00B45EC8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EC8], 0x0096a5ac
        mov dword ptr [eax + 0x4], offset mem_00B45EC8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EC8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E43C0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitRadiusFromValuePtr(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45ED4;
extern "C" int mem_00B45ED0;

extern "C" __declspec(naked) void __fastcall fn_005E43C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a63de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45ED4], al
        jne L_guarded
        or dword ptr [mem_00B45ED4], eax
        mov ecx, offset mem_00B45ED0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45ED0], 0x0096a75c
        mov dword ptr [eax + 0x4], offset mem_00B45ED0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45ED0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4490] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentTwist(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EDC;
extern "C" int mem_00B45ED8;

extern "C" __declspec(naked) void __fastcall fn_005E4490(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a63fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EDC], al
        jne L_guarded
        or dword ptr [mem_00B45EDC], eax
        mov ecx, offset mem_00B45ED8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45ED8], 0x0096a90c
        mov dword ptr [eax + 0x4], offset mem_00B45ED8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45ED8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4560] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing1(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EE4;
extern "C" int mem_00B45EE0;

extern "C" __declspec(naked) void __fastcall fn_005E4560(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a641e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EE4], al
        jne L_guarded
        or dword ptr [mem_00B45EE4], eax
        mov ecx, offset mem_00B45EE0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EE0], 0x0096aabc
        mov dword ptr [eax + 0x4], offset mem_00B45EE0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EE0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005E4630] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing2(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B45EEC;
extern "C" int mem_00B45EE8;

extern "C" __declspec(naked) void __fastcall fn_005E4630(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a643e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B45EEC], al
        jne L_guarded
        or dword ptr [mem_00B45EEC], eax
        mov ecx, offset mem_00B45EE8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B45EE8], 0x0096ac6c
        mov dword ptr [eax + 0x4], offset mem_00B45EE8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B45EE8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F5FF0] ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMScale(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMScale(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46880;
extern "C" int mem_00B4687C;

extern "C" __declspec(naked) void __fastcall fn_005F5FF0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a716e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46880], al
        jne L_guarded
        or dword ptr [mem_00B46880], eax
        mov ecx, offset mem_00B4687C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4687C], 0x0096ce4c
        mov dword ptr [eax + 0x4], offset mem_00B4687C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4687C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F63A0] ExprParser::ReadWriteMethodType<HelperGraphic, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall HelperGraphic::getType(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall HelperGraphic::setType(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46888;
extern "C" int mem_00B46884;

extern "C" __declspec(naked) void __fastcall fn_005F63A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a718e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46888], al
        jne L_guarded
        or dword ptr [mem_00B46888], eax
        mov ecx, offset mem_00B46884
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46884], 0x0096cffc
        mov dword ptr [eax + 0x4], offset mem_00B46884
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46884
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F6880] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getColour(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setColour(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46890;
extern "C" int mem_00B4688C;

extern "C" __declspec(naked) void __fastcall fn_005F6880(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a71ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46890], al
        jne L_guarded
        or dword ptr [mem_00B46890], eax
        mov ecx, offset mem_00B4688C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4688C], 0x0096d1ac
        mov dword ptr [eax + 0x4], offset mem_00B4688C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4688C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F6AE0] ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMAlpha(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMAlpha(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46898;
extern "C" int mem_00B46894;

extern "C" __declspec(naked) void __fastcall fn_005F6AE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a71ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46898], al
        jne L_guarded
        or dword ptr [mem_00B46898], eax
        mov ecx, offset mem_00B46894
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46894], 0x0096d35c
        mov dword ptr [eax + 0x4], offset mem_00B46894
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46894
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F6F90] ExprParser::ReadWriteMethodType<HelperGraphic, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall HelperGraphic::getLineAxisName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall HelperGraphic::setLineAxisName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B468A0;
extern "C" int mem_00B4689C;

extern "C" __declspec(naked) void __fastcall fn_005F6F90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a71ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B468A0], al
        jne L_guarded
        or dword ptr [mem_00B468A0], eax
        mov ecx, offset mem_00B4689C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4689C], 0x0096d50c
        mov dword ptr [eax + 0x4], offset mem_00B4689C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4689C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F7380] ExprParser::ReadWriteMethodType<HelperGraphic, bool, {public: bool __thiscall HelperGraphic::getFSMVisibility(void) const, 0}, bool, {public: void __thiscall HelperGraphic::setFSMVisibility(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B468A8;
extern "C" int mem_00B468A4;

extern "C" __declspec(naked) void __fastcall fn_005F7380(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a720e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B468A8], al
        jne L_guarded
        or dword ptr [mem_00B468A8], eax
        mov ecx, offset mem_00B468A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B468A4], 0x0096d6bc
        mov dword ptr [eax + 0x4], offset mem_00B468A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B468A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

