// Lifted C++ translation unit: lifted/ExprParser/Operators/Evaluate.cpp
#include "lift_compat.h"

// [0x006A1CF0] ExprParser::Operators::Evaluate::vfunc_3 (242 bytes)
namespace lift_006A1CF0 {
extern uint32_t ext_0067F960();
extern uint32_t ext_0041CEB0(void* self, uint32_t arg1);
extern uint32_t ext_00681020(void* out, uint32_t a, uint32_t b, uint32_t c);
extern void*    ext_0041CF50(void* self, void* other);
extern uint32_t ext_00435D00(uint32_t out, uint32_t lit, uint32_t sub, uint32_t manip);
extern void     ext_006720C0(void* self, uint32_t flag);
extern int      ext_00486980(void* self, int arg);
extern void     ext_00401CC0(void* self);
extern uintptr_t mem_00924FF4;  // std::string dtor import slot
extern uintptr_t mem_00924E90;  // std::endl manipulator import slot
extern uintptr_t mem_00924FA0;  // std::cout import slot
extern uintptr_t mem_00924E94;  // ostream << std::string import slot
extern uintptr_t mem_00924E98;  // ostream endl-apply import slot

static inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

// @name ExprParser::Operators::Evaluate::vfunc_3
// @class ExprParser::Operators::Evaluate
// @summary Evaluates the operator: builds a std::string result via helpers, then either calls the sub-object's slot 0x78 hook or, on exception, prints the message to std::cout and runs cleanup.
void __stdcall fn_006A1CF0(void* self) {
    alignas(4) uint8_t str40[0x1c];   // std::string temporary (ebp-0x40)
    alignas(4) uint8_t obj1c[0x1c];   // result object passed to ext_00681020 (ebp-0x1c)
    alignas(4) uint8_t tmp24[0x08];   // helper object (ebp-0x24)

    try {
        uint32_t count = ext_0067F960();                         // esi
        uint32_t r1 = ext_0041CEB0(self, as_u32(str40));        // eax
        uint32_t r2 = ext_00681020(obj1c, r1, count, 0);
        ext_0041CF50(self, reinterpret_cast<void*>(static_cast<uintptr_t>(r2)));

        // Optional sub-object at obj1c+4: if non-null, invoke its vtable slot 0x78.
        void* sub = lift_field<void*>(obj1c, 4);
        if (sub != nullptr) {
            void* vtbl = lift_field<void*>(sub, 0);
            auto slot = reinterpret_cast<void (*)(void*, void*)>(lift_field<void*>(vtbl, 0x78));
            slot(sub, obj1c);
        }
        // Destroy the std::string temporary via the MSVCP80 dtor import slot.
        reinterpret_cast<void (*)(void*)>(mem_00924FF4)(str40);
    } catch (...) {
        // Exception path: print the message via std::cout, then run cleanup.
        uint32_t ctx = lift_field<uint32_t>(obj1c, 8);            // [ebp-0x14]
        uint32_t streamOut = static_cast<uint32_t>(mem_00924FA0);
        uint32_t manip = static_cast<uint32_t>(mem_00924E90);
        uint32_t r = ext_00435D00(streamOut, 0x00990160, ctx + 0x0c, manip);
        auto opStr = reinterpret_cast<uint32_t (*)(uint32_t, uint32_t)>(mem_00924E94);
        auto opEnd = reinterpret_cast<uint32_t (*)(uint32_t)>(mem_00924E98);
        uint32_t s = opStr(r, 0);
        (void)opEnd(s);

        ext_006720C0(tmp24, 0);
        ext_00486980(self, static_cast<int>(as_u32(tmp24)));
        ext_00401CC0(tmp24);
    }
}
} // namespace lift_006A1CF0
