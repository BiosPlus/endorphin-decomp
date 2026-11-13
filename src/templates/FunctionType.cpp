// Decompiled translation unit: src/templates/FunctionType.cpp

// [0x005B8660] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_16 (30 bytes)
extern "C" int mem_00A2FB78;
extern "C" int mem_00A2E2F8;
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_005B8660(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push offset mem_00A2FB78
        push offset mem_00A2E2F8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x0062E3C0] ExprParser::FunctionType<Sensors::CompoundSensorPlanes, float, NM::Vector3 const &, &public: float __thiscall Sensors::CompoundSensorPlanes::checkDistance(class NM::Vector3 const &)>::vfunc_16 (30 bytes)
extern "C" int mem_00A98AC8;

extern "C" __declspec(naked) void* __stdcall fn_0062E3C0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push offset mem_00A98AC8
        push offset mem_00A2E2F8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x006922D0] ExprParser::FunctionType<ValuePtrArrayObject, ValuePtr const &, ValuePtr const &, {public: class ValuePtr const & __thiscall ValuePtrArrayObject::push(class ValuePtr const &), 0}>::vfunc_16 (30 bytes)
extern "C" int mem_00A398D0;

extern "C" __declspec(naked) void* __stdcall fn_006922D0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push offset mem_00A398D0
        push offset mem_00A2E2F8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x0062E3E0] ExprParser::FunctionType<Sensors::CompoundSensorPlanes, float, NM::Vector3 const &, &public: float __thiscall Sensors::CompoundSensorPlanes::checkDistance(class NM::Vector3 const &)>::vfunc_48 (69 bytes)
extern "C" void ext_0062E2D0();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_0062E3E0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_0062E2D0
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068BF40] ExprParser::FunctionType<Randomizer, int, int, {public: int __thiscall Randomizer::randIntExcN(int), 0}>::vfunc_48 (58 bytes)
extern "C" void ext_0068BC00();
extern "C" void ext_006720C0();

extern "C" __declspec(naked) void* __fastcall fn_0068BF40(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_0068BC00
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068C230] ExprParser::FunctionType<Randomizer, float, float, {public: float __thiscall Randomizer::randN(float), 0}>::vfunc_48 (80 bytes)
extern "C" void ext_0068BE40();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_0068C230(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0068BE40
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068C190] ExprParser::FunctionType<Randomizer, float, float, {public: float __thiscall Randomizer::randDblExcN(float), 0}>::vfunc_48 (80 bytes)
extern "C" void ext_0068BF00();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_0068C190(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0068BF00
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068C1E0] ExprParser::FunctionType<Randomizer, float, float, {public: float __thiscall Randomizer::randExcN(float), 0}>::vfunc_48 (80 bytes)
extern "C" void ext_0068BEA0();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_0068C1E0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0068BEA0
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B8130] ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getAreaToNormal(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
extern "C" void ext_005B71E0();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_005B8130(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005B71E0
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C5EE0] ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getAreaToNormal(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
extern "C" void ext_005C3DB0();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_005C5EE0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005C3DB0
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C5E50] ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getDistanceToPoint(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
extern "C" void ext_005C3C20();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_005C5E50(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005C3C20
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B80A0] ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getDistanceToPoint(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
extern "C" void ext_005B7060();
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_005B80A0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005B7060
        fstp dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B7AE0] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getVelocityAtPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
extern "C" void ext_005B6C80();
extern "C" void ext_00672110();

extern "C" __declspec(naked) void* __fastcall fn_005B7AE0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005B6C80
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00672110
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B80F0] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
extern "C" void ext_005B70E0();

extern "C" __declspec(naked) void* __fastcall fn_005B80F0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005B70E0
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00672110
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C5E10] ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getVelocityAtPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
extern "C" void ext_005C39F0();

extern "C" __declspec(naked) void* __fastcall fn_005C5E10(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005C39F0
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00672110
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C5EA0] ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
extern "C" void ext_005C3CB0();

extern "C" __declspec(naked) void* __fastcall fn_005C5EA0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_005C3CB0
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00672110
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
