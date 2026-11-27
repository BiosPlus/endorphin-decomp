// Lifted C++ translation unit: lifted/classes/FBXIO.cpp
#include "lift_compat.h"

extern "C" int ext_00640390(int self_arg, int a1, int a2);
extern "C" void ext_00553720(void* self, int a1);
extern "C" int mem_00A9EED4;
extern "C" void __thiscall ext_0047B170(void* self, const float* value);
extern "C" int32_t __thiscall ext_0041CD60(void* self);
extern "C" const float mem_00944238; // 120.0f
extern "C" const float mem_0094423C; // 60.0f
extern "C" const float mem_009563EC; // 50.0f
extern "C" const float mem_0092944C; // 30.0f
extern "C" const float mem_0095894C; // 29.97f
extern "C" const float mem_00958948; // 25.0f
extern "C" const float mem_00958944; // 24.0f
extern "C" const float mem_00993838; // 0.0f

extern "C" void __thiscall ext_00406940(void* self, void* vec);
extern "C" void __thiscall ext_0040ECB0(void* vec, void* str);
extern "C" void __thiscall ext_0055F3D0(void* self, void* subobj, int32_t arg);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" int32_t __fastcall ext_006BC370(void* self);
extern "C" void* __fastcall ext_006D3DF0(void* self);
extern "C" int32_t __fastcall ext_006D5C30(void* self);
extern "C" const char* __fastcall ext_006D5C40(void* self);
extern "C" uint8_t __thiscall ext_006D5FD0(void* self, void* arg0, int32_t arg1);
extern "C" void __thiscall ext_006D6AD0(void* self, const char* str);
extern "C" void __thiscall ext_006D6B10(void* self, void* arg0, void* arg1, void* arg2);

extern "C" void* __cdecl ext_00663B30(void* dst_str, const char* src);
extern "C" void __thiscall ext_00662120(void* self);
extern "C" void __thiscall ext_0055E490(void* self, void* out0, void* out1, const char* path);
extern "C" void __thiscall ext_0055F2C0(void* self, const void* path_str);
extern "C" void __thiscall ext_006D2130(void* self, int32_t arg0, int32_t arg1);
extern "C" void __thiscall ext_006BC970(void* self, void* out_vec);
extern "C" int32_t __fastcall ext_006E7460(void* self);
extern "C" void __thiscall ext_006BC800(void* self, int32_t arg0);
extern "C" uint8_t __thiscall ext_00562A80(void* self);
extern "C" void __thiscall ext_0055E180(void* self, void* arg);
extern "C" void __thiscall ext_00403560(void* self, const void* msg_str);
extern "C" void __stdcall ext_006A6DD2(void* exception_obj, const void* throw_info);
extern "C" void __thiscall ext_006D2160(void* self);

extern "C" void* mem_00924FE4;
extern "C" void* mem_00924FF4;
extern "C" void* mem_00924FE0;
extern "C" void* mem_00924FF0;
extern "C" void* mem_00924FD0;
extern "C" uint32_t mem_00B37F40;

// [0x00560300]
// @name FBXIO::vfunc_14
// @class FBXIO
// @summary Loads an FBX file, extracts scene/take names, and initializes FBX import state
// @field FBXIO +0x40 uint8_t[4] field_0x40
// @field FBXIO +0x90 uint8_t field_0x90
// @field FBXIO +0x94 uint8_t[4] field_0x94
// @field FBXIO +0x27C void* field_0x27c
// @field FBXIO +0x46C void* field_0x46c
// @field FBXIO +0x470 void* field_0x470
// @field FBXIO +0x4B8 void* field_0x4b8
extern "C" uint32_t __thiscall fn_00560300(void* self, void* arg0) {
    struct RawStdString {
        uint8_t data[0x1c];
    };
    struct RawStdStringVector {
        uint32_t allocator_pad;
        RawStdString* begin;
        RawStdString* end;
        RawStdString* cap;
    };
    struct RawArray {
        int32_t count;
        uint8_t pad[0x0c];
        void** items;
        void* inline_ptr;
    };
    using CStrFn = const char* (__thiscall*)(void*);
    using StrCtorFn = void (__thiscall*)(void*, const char*);
    using StrDtorFn = void (__thiscall*)(void*);
    using Vfunc0Fn = void (__thiscall*)(void*, const char*);
    using Vfunc84Fn = void (__thiscall*)(void*);

    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    void* subobj_27c = self_bytes + 0x27c;
    void** vtable_27c = *reinterpret_cast<void***>(subobj_27c);
    reinterpret_cast<Vfunc84Fn>(vtable_27c[0x84 / 4])(subobj_27c);

    void** slot_470 = reinterpret_cast<void**>(self_bytes + 0x470);
    void** slot_46c = reinterpret_cast<void**>(self_bytes + 0x46c);

    CStrFn c_str = reinterpret_cast<CStrFn>(mem_00924FF0);
    StrCtorFn str_ctor = reinterpret_cast<StrCtorFn>(mem_00924FE4);
    StrDtorFn str_dtor = reinterpret_cast<StrDtorFn>(mem_00924FF4);

    const char* path_cstr = c_str(arg0);
    ext_0055E490(self, slot_46c, slot_470, path_cstr);

    void* importer = ext_006D3DF0(*slot_46c);
    void** importer_vtable = *reinterpret_cast<void***>(importer);
    const char* path_cstr2 = c_str(arg0);
    reinterpret_cast<Vfunc0Fn>(importer_vtable[0])(importer, path_cstr2);

    const char* str_40 = c_str(self_bytes + 0x40);
    ext_006D6AD0(importer, str_40);

    uint8_t ok = ext_006D5FD0(importer, *slot_470, 0);
    if (!ok) {
        int32_t err = ext_006D5C30(importer);
        if (err == 9) {
            self_bytes[0x90] = 1;
            ext_0055E180(self, slot_46c);
            return 1;
        }
        const char* err_str = ext_006D5C40(importer);
        RawStdString tmp_err;
        str_ctor(&tmp_err, err_str);
        ext_0055E180(self, slot_46c);
        str_dtor(&tmp_err);
        return 0;
    }

    self_bytes[0x90] = 0;
    uint32_t local_18 = 0;
    uint32_t local_14 = 0;
    ext_006D6B10(importer, &arg0, &local_18, &local_14);

    *reinterpret_cast<void**>(self_bytes + 0x4b8) = arg0;

    RawArray arr{};
    ext_006D2130(&arr, 0x10, 4);
    arr.inline_ptr = &arr.items;
    ext_006BC970(*slot_470, &arr);

    RawStdStringVector vec{};
    vec.begin = nullptr;
    vec.end = nullptr;
    vec.cap = nullptr;

    for (int32_t i = 0; i < arr.count; ++i) {
        const char* item_name = reinterpret_cast<const char*>(ext_006E7460(arr.items[i]));
        RawStdString tmp_str;
        str_ctor(&tmp_str, item_name);
        ext_0040ECB0(&vec, &tmp_str);
        str_dtor(&tmp_str);
    }

    ext_00406940(self_bytes + 0x94, &vec);

    vtable_27c = *reinterpret_cast<void***>(subobj_27c);
    reinterpret_cast<Vfunc84Fn>(vtable_27c[0x84 / 4])(subobj_27c);

    int32_t val = ext_006BC370(*slot_470);
    ext_0055F3D0(self, subobj_27c, val);
    ext_0055E180(self, slot_46c);

    if (vec.begin != nullptr) {
        for (RawStdString* it = vec.begin; it != vec.end; ++it) {
            str_dtor(it);
        }
        ext_006A5C5C(vec.begin);
    }
    vec.begin = nullptr;
    vec.end = nullptr;
    vec.cap = nullptr;

    ext_006D2160(&arr);
    return 0;
}

// [0x00562F80] FBXIO::vfunc_10 (574 bytes)
// @name FBXIO::vfunc_10
// @class FBXIO
// @summary Imports an FBX file via the FBX scene/IO helpers, updates UI/status callbacks, and throws on import failure.
// @field FBXIO +0xA4 int32_t field_0xa4
// @field FBXIO +0x414 void* field_0x414
// @field FBXIO +0x420 void* field_0x420
// @field FBXIO +0x424 void* field_0x424
// @field FBXIO +0x46C void* field_0x46c
// @field FBXIO +0x470 void* field_0x470
void __thiscall fn_00562F80(void* self, const void* filename_str) {
    struct MsvcString {
        uint8_t storage[0x1C];
    };
    struct LocalPtrList {
        uint8_t raw[0x10];
        void** items;
        void*** items_ptr;
    };
    struct LocalException {
        void* vtable;
        uint8_t payload[0x24];
    };

    using StrCtorCstrFn = void* (__thiscall*)(MsvcString*, const char*);
    using StrCtorCopyFn = void* (__thiscall*)(MsvcString*, const MsvcString*);
    using StrDtorFn     = void  (__thiscall*)(MsvcString*);
    using StrCStrFn     = const char* (__thiscall*)(const MsvcString*);
    using StrConcatFn   = MsvcString* (__cdecl*)(MsvcString*, const MsvcString*, const MsvcString*);
    using VFuncVoidFn   = void (__thiscall*)(void*);
    using VFuncStrPtrFn = void (__thiscall*)(void*, const MsvcString*);

    const auto str_ctor_cstr = reinterpret_cast<StrCtorCstrFn>(mem_00924FE4);
    const auto str_dtor      = reinterpret_cast<StrDtorFn>(mem_00924FF4);
    const auto str_ctor_copy = reinterpret_cast<StrCtorCopyFn>(mem_00924FE0);
    const auto str_c_str     = reinterpret_cast<StrCStrFn>(mem_00924FF0);
    const auto str_concat    = reinterpret_cast<StrConcatFn>(mem_00924FD0);

    const auto* filename = static_cast<const MsvcString*>(filename_str);

    if (void* status_cb = lift_field<void*>(self, 0x424); status_cb != nullptr) {
        MsvcString status_msg{};
        str_ctor_cstr(&status_msg, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009589D4u)));
        void** vtable = *reinterpret_cast<void***>(status_cb);
        reinterpret_cast<VFuncStrPtrFn>(vtable[3])(status_cb, &status_msg);
        str_dtor(&status_msg);
    }

    {
        void* obj_414_sub = reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x414)) + 4;
        void** vtable = *reinterpret_cast<void***>(obj_414_sub);
        reinterpret_cast<VFuncVoidFn>(vtable[0x84 / 4])(obj_414_sub);
    }

    MsvcString str_b392cc{};
    str_ctor_copy(&str_b392cc, reinterpret_cast<const MsvcString*>(static_cast<uintptr_t>(0x00B392CCu)));

    MsvcString tmp_str{};
    void* tmp_ret = ext_00663B30(&tmp_str, str_c_str(filename));

    MsvcString combined_str{};
    str_concat(
        &combined_str,
        static_cast<const MsvcString*>(tmp_ret),
        reinterpret_cast<const MsvcString*>(static_cast<uintptr_t>(0x00B39614u))
    );
    str_dtor(&tmp_str);

    {
        void* obj_414_sub = reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x414)) + 4;
        void** vtable = *reinterpret_cast<void***>(obj_414_sub);
        reinterpret_cast<VFuncStrPtrFn>(vtable[0x5C / 4])(obj_414_sub, &str_b392cc);
    }

    {
        void* obj_414_sub = reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x414)) + 4;
        void** vtable = *reinterpret_cast<void***>(obj_414_sub);
        reinterpret_cast<VFuncStrPtrFn>(vtable[0x60 / 4])(obj_414_sub, &combined_str);
    }

    mem_00B37F40 += 1;

    ext_00662120(lift_field<void*>(self, 0x420));

    void** field_46c_ptr = &lift_field<void*>(self, 0x46C);
    void** field_470_ptr = &lift_field<void*>(self, 0x470);
    ext_0055E490(self, field_46c_ptr, field_470_ptr, str_c_str(filename));
    ext_0055F2C0(self, filename);

    LocalPtrList list{};
    ext_006D2130(&list, 0x10, 0x4);
    list.items_ptr = &list.items;
    ext_006BC970(*field_470_ptr, &list);

    int32_t index = lift_field<int32_t>(self, 0xA4);
    int32_t selected_id = ext_006E7460(list.items[index]);
    ext_006BC800(*field_470_ptr, selected_id);

    if (ext_00562A80(self) == 0) {
        ext_0055E180(self, field_46c_ptr);

        MsvcString err_msg{};
        str_ctor_cstr(&err_msg, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009589B8u)));

        LocalException exc{};
        ext_00403560(&exc, &err_msg);
        exc.vtable = reinterpret_cast<void*>(static_cast<uintptr_t>(0x0095879Cu));
        ext_006A6DD2(&exc, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009FA84Cu)));
        return;
    }

    ext_0055E180(self, field_46c_ptr);
    ext_006D2160(&list);
    str_dtor(&combined_str);
    str_dtor(&str_b392cc);
}

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
namespace lift_0055DE50 {
extern void* ext_00553720(void* self, void* arg);
extern void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern uint32_t mem_00A9EED4;

// @name FBXIO::vfunc_3
// @class FBXIO
// @summary Auto-lifted identical-shape clone of 0x00582B60 (Acclaim2MotionIO::vfunc_3).
// @field FBXIO +0x0 void* vtable (no direct field access in this function; self is only passed through to ext_00553720)
void* fn_0055DE50(void* self, void* arg) {
    const uint32_t value = mem_00A9EED4;
    void* result = ext_00640390(arg, value, 0);
    ext_00553720(self, result);
    return arg;
}
} // namespace lift_0055DE50

// [0x00562A30]
namespace lift_00562A30 {
// @name FBXIO::vfunc_13
// @class FBXIO
// @summary Initializes FBXIO if needed and delegates to sub_0055E990 with arg0.
// @field FBXIO +0x1F8 void* field_0x1f8
// @field FBXIO +0x214 uint8_t field_0x214


    uint8_t __thiscall ext_0055F4E0(void* self);
    uint8_t __cdecl ext_006629B0(void* strPtr);
    void __thiscall ext_005605A0(void* self);
    void __thiscall ext_005619C0(void* self);
    void __thiscall ext_0055E990(void* self, void* arg0);

void __thiscall fn_00562A30(void* self, void* arg0) {
    if (!ext_0055F4E0(self)) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x214) == 0 ||
        !ext_006629B0(reinterpret_cast<uint8_t*>(self) + 0x1F8)) {
        ext_005605A0(self);
    }
    ext_005619C0(self);
    ext_0055E990(self, arg0);
}
} // namespace lift_00562A30

// [0x005607E0]
namespace lift_005607E0 {
// @name FBXIO::vfunc_33
// @class FBXIO
// @summary Populate a float vector with standard frame rates and return the index of the first rate greater than this->field_0x174, or size - 1.
// @field FBXIO +0x174 float field_0x174

extern int __thiscall ext_0041CD60(void* self);
extern void __thiscall ext_0047B170(void* self, const float* val);
extern void (*mem_00925134)(void);
extern void ext_00403560(void);
extern void ext_0055E180(void);
extern void ext_0055E490(void);
extern void ext_0055F2C0(void);
extern void ext_00562A80(void);
extern void ext_00662120(void);
extern void ext_00663B30(void);
extern void ext_006A6DD2(void);
extern void ext_006BC800(void);
extern void ext_006BC970(void);
extern void ext_006D2130(void);
extern void ext_006D2160(void);
extern void ext_006E7460(void);
extern uint32_t mem_00924FD0;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00B37F40;

extern int __thiscall fn_005607E0(void* self, void* outRates, float unusedArg) {
    (void)unusedArg;
    (void)&ext_00403560; (void)&ext_0055E180; (void)&ext_0055E490; (void)&ext_0055F2C0;
    (void)&ext_00562A80; (void)&ext_00662120; (void)&ext_00663B30; (void)&ext_006A6DD2;
    (void)&ext_006BC800; (void)&ext_006BC970; (void)&ext_006D2130; (void)&ext_006D2160;
    (void)&ext_006E7460;
    (void)&mem_00924FD0; (void)&mem_00924FE0; (void)&mem_00924FE4;
    (void)&mem_00924FF0; (void)&mem_00924FF4; (void)&mem_00B37F40;

    static const float kRates[] = {
        120.0f,
        60.0f,
        50.0f,
        30.0f,
        29.97f,
        25.0f,
        24.0f,
    };

    for (float rate : kRates) {
        ext_0047B170(outRates, &rate);
    }

    float target = lift_field<float>(self, 0x174);
    int count = ext_0041CD60(outRates);
    for (int i = 0; i < count; ++i) {
        float* begin = lift_field<float*>(outRates, 0x04);
        float* end = lift_field<float*>(outRates, 0x08);
        if (!begin || static_cast<uint32_t>(i) >= static_cast<uint32_t>(end - begin)) {
            mem_00925134();
        }
        begin = lift_field<float*>(outRates, 0x04);
        float diff = begin[i] - target;
        if (diff > 0.0f) {
            return i;
        }
        count = ext_0041CD60(outRates);
    }

    float* begin = lift_field<float*>(outRates, 0x04);
    if (!begin) {
        return -1;
    }
    float* end = lift_field<float*>(outRates, 0x08);
    return static_cast<int>(end - begin) - 1;
}
} // namespace lift_005607E0

// [0x00562C50]
namespace lift_00562C50 {
// @name FBXIO::vfunc_11
// @class FBXIO
// @summary Imports FBX animation frames over the loaded time range and dispatches frame updates.
// @field FBXIO +0x40 uint8_t[4] field_0x40
// @field FBXIO +0xA4 int32_t field_0xa4
// @field FBXIO +0xAC uint8_t field_0xac
// @field FBXIO +0x420 void* field_0x420
// @field FBXIO +0x424 void* field_0x424
// @field FBXIO +0x46C void* field_0x46c
// @field FBXIO +0x470 void* field_0x470
// @field FBXIO +0x474 void* field_0x474
// @field FBXIO +0x4C0 uint8_t[12] field_0x4c0

    extern void* mem_00924FF0;
    extern double mem_00928E78;
    extern void* mem_00924E90;
    extern void* mem_00924FA0;
    extern char mem_00958968[];
    extern void* mem_00924E98;
    extern double mem_00993828;
    extern double mem_0092C528;
    extern double mem_00993868;
    extern void* mem_00925134;
    extern char mem_00928B5D[];
    extern void* mem_00924FD4;

    void __thiscall ext_0055E490(void* self, void* fbx46c, void* fbx470, const char* path);
    void __thiscall ext_0055F2C0(void* self, void* arg0);
    int32_t __thiscall ext_006BC7F0(void* self);
    int32_t __thiscall ext_006BB760(int32_t val);
    double __cdecl ext_006D98F0(int32_t id);
    void* __thiscall ext_006BC370(void* self);
    void* __thiscall ext_0055DF80(void* self, void* arg);
    void __thiscall ext_006D2130(void* self, int32_t arg1, int32_t arg2);
    void __thiscall ext_006BC970(void* self, void* outVec);
    int32_t __thiscall ext_006E7460(void* self);
    void __thiscall ext_006BC800(void* self, int32_t val);
    void* __cdecl ext_00435D00(void* ostream, const char* str);
    int32_t __cdecl ext_006A7310(int64_t a, int64_t b);
    double __cdecl ext_006A6E92(double x);
    int32_t __cdecl ext_006A6DE0(double x);
    void __thiscall ext_00662120(void* self);
    void __thiscall ext_00661F70(void* self, int32_t arg);
    void __thiscall ext_006DAE00(void* self, double scale);
    void __thiscall ext_00562580(void* self, void* elem, void* arg, int32_t flag);
    void __thiscall ext_006620E0(void* self);
    void __thiscall ext_0055E180(void* self, void** objRef);
    void __thiscall ext_00661A10(void* self, float arg);
    void __thiscall ext_006D2160(void* self);

extern void __fastcall fn_00562C50(void* self, void* /*edx*/, void* arg0) {
    int32_t frameIdx = 0;
    float timeMs = 0.0f;
    float local_18 = 0.0f;

    void* p470 = static_cast<uint8_t*>(self) + 0x470;
    void* p46c = static_cast<uint8_t*>(self) + 0x46C;

    auto c_str_fn = reinterpret_cast<const char* (__thiscall*)(void*)>(mem_00924FF0);
    const char* path = c_str_fn(arg0);
    ext_0055E490(self, p46c, p470, path);
    ext_0055F2C0(self, arg0);

    int32_t id = ext_006BC7F0(*reinterpret_cast<void**>(p470));
    int32_t mappedId = ext_006BB760(id);
    float frameRate = static_cast<float>(ext_006D98F0(mappedId));
    float stepMs = static_cast<float>(mem_00928E78 / static_cast<double>(frameRate));

    void* animStack = ext_006BC370(*reinterpret_cast<void**>(p470));
    void* animData = ext_0055DF80(self, static_cast<uint8_t*>(self) + 0xAC);

    uint8_t vecObj[0x18]{};
    ext_006D2130(vecObj, 0x10, 4);
    *reinterpret_cast<void**>(vecObj + 0x14) = vecObj + 0x10;

    ext_006BC970(*reinterpret_cast<void**>(p470), vecObj);

    int32_t idx = lift_field<int32_t>(self, 0xA4);
    void** vecArr = *reinterpret_cast<void***>(vecObj + 0x10);
    int32_t layerVal = ext_006E7460(vecArr[idx]);
    ext_006BC800(*reinterpret_cast<void**>(p470), layerVal);

    int64_t startTime = 0x7FFFFFFFFFFFFFFFLL;
    int64_t endTime = static_cast<int64_t>(0x8000000000000001ULL);

    using GetTimeRangeFn = bool (__thiscall*)(void*, int64_t*, int64_t*);
    auto getTimeRange = reinterpret_cast<GetTimeRangeFn>((*reinterpret_cast<void***>(animStack))[0x30 / 4]);

    int32_t frameCount;
    if (!getTimeRange(animStack, &startTime, &endTime)) {
        void* os = ext_00435D00(mem_00924FA0, mem_00958968);
        auto endl_op = reinterpret_cast<void (__thiscall*)(void*, void*)>(mem_00924E98);
        endl_op(os, mem_00924E90);
        frameCount = 1;
    } else {
        int32_t t0 = ext_006A7310(startTime, 0x2C0BEAELL);
        int32_t t1 = ext_006A7310(endTime, 0x2C0BEAELL);
        float duration = static_cast<float>(t1 - t0);
        float f = static_cast<float>(ext_006A6E92(static_cast<double>(duration / stepMs) + mem_00993828));
        (void)f;
        frameCount = ext_006A6DE0(static_cast<double>(t0)) + 1;
    }

    void* p420 = lift_field<void*>(self, 0x420);
    ext_00662120(p420);
    ext_00661F70(p420, 1);

    void* p424 = lift_field<void*>(self, 0x424);
    if (p424 != nullptr) {
        using VFunc2 = void (__thiscall*)(void*, int32_t, int32_t);
        auto vf2 = reinterpret_cast<VFunc2>((*reinterpret_cast<void***>(p424))[0x08 / 4]);
        vf2(p424, 0, frameCount * 2);
    }

    int32_t maxFrameIdx = frameCount - 1;
    timeMs = static_cast<float>(0) + static_cast<float>(static_cast<double>(stepMs) * mem_0092C528);

    if (maxFrameIdx >= 0) {
        uint8_t* list4C0 = static_cast<uint8_t*>(self) + 0x4C0;
        do {
            void* cur424 = lift_field<void*>(self, 0x424);
            if (cur424 != nullptr) {
                using VFunc1 = void (__thiscall*)(void*, int32_t);
                auto vf1 = reinterpret_cast<VFunc1>((*reinterpret_cast<void***>(cur424))[0x04 / 4]);
                vf1(cur424, frameIdx);
            }

            ext_006DAE00(lift_field<void*>(self, 0x474), static_cast<double>(timeMs) * mem_00993868);

            auto invalid_param = reinterpret_cast<void (__cdecl*)()>(mem_00925134);
            uint32_t it = *reinterpret_cast<uint32_t*>(list4C0 + 0x04);
            if (it > *reinterpret_cast<uint32_t*>(list4C0 + 0x08)) {
                invalid_param();
            }
            for (;;) {
                uint32_t endIt = *reinterpret_cast<uint32_t*>(list4C0 + 0x08);
                if (*reinterpret_cast<uint32_t*>(list4C0 + 0x04) > endIt) {
                    invalid_param();
                }
                if (it == endIt) {
                    break;
                }
                if (it >= *reinterpret_cast<uint32_t*>(list4C0 + 0x08)) {
                    invalid_param();
                }
                void* elem = *reinterpret_cast<void**>(static_cast<uintptr_t>(it));
                ext_00562580(self, elem, animData, 1);
                if (it >= *reinterpret_cast<uint32_t*>(list4C0 + 0x08)) {
                    invalid_param();
                }
                it += 4;
            }

            if (frameIdx < maxFrameIdx) {
                ext_006620E0(lift_field<void*>(self, 0x420));
            }
            frameIdx += 1;
            timeMs += stepMs;
        } while (frameIdx <= maxFrameIdx);
    }

    auto str_assign = reinterpret_cast<void* (__thiscall*)(void*, const char*)>(mem_00924FD4);
    str_assign(static_cast<uint8_t*>(self) + 0x40, mem_00928B5D);
    ext_0055E180(self, static_cast<void**>(p46c));
    ext_00661A10(lift_field<void*>(self, 0x420), local_18);
    ext_006D2160(vecObj);
}
} // namespace lift_00562C50
