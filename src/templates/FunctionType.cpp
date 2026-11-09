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
