// Lifted C++ translation unit: lifted/Sensors/CompoundSensorSagittalPlane.cpp
#include "lift_compat.h"
// IAT slot holding the MSVCR80 invalid-parameter handler (called on failed assertions).
extern "C" void (*mem_00925134)();
// Callee 0x005B6930: returns a pointer to a 3-float vector for the object passed as self.
extern "C" float* ext_005B6930(void* self);
// Calls vtable slot +0x38 (index 14 on 32-bit) of obj, which returns a float[3] pointer.
static float* call_vec3_slot_38(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    using Fn = float* (*)(void*);
    return reinterpret_cast<Fn>(vtable[14])(obj);
}

// [0x0062F100]
// @name Sensors::CompoundSensorSagittalPlane::vfunc_27
// @class Sensors::CompoundSensorSagittalPlane
// @summary Caches two child-sensor vectors, derives plane terms from them and a transform vector, and stores four doubles.
// @field Sensors::CompoundSensorSagittalPlane +0x2c void** childBegin
// @field Sensors::CompoundSensorSagittalPlane +0x30 void** childEnd
// @field Sensors::CompoundSensorSagittalPlane +0x38 void* field_0x38
// @field Sensors::CompoundSensorSagittalPlane +0x58 double field_0x58
// @field Sensors::CompoundSensorSagittalPlane +0x60 double field_0x60
// @field Sensors::CompoundSensorSagittalPlane +0x68 double field_0x68
// @field Sensors::CompoundSensorSagittalPlane +0x70 double field_0x70
// @field Sensors::CompoundSensorSagittalPlane +0x78 float cachedA_x
// @field Sensors::CompoundSensorSagittalPlane +0x7c float cachedA_y
// @field Sensors::CompoundSensorSagittalPlane +0x80 float cachedA_z
// @field Sensors::CompoundSensorSagittalPlane +0x84 float cachedB_x
// @field Sensors::CompoundSensorSagittalPlane +0x88 float cachedB_y
// @field Sensors::CompoundSensorSagittalPlane +0x8c float cachedB_z
void fn_0062F100(void* self) {
    void** children = lift_field<void**>(self, 0x2c);
    void** childrenEnd = lift_field<void**>(self, 0x30);
    if (children == nullptr || childrenEnd - children == 0) {
        mem_00925134();
    }

    float* pA = call_vec3_slot_38(children[0]);
    const float A0 = pA[0];
    const float A1 = pA[1];
    const float A2 = pA[2];

    if (children == nullptr || childrenEnd - children <= 1) {
        mem_00925134();
    }

    float* pB = call_vec3_slot_38(children[1]);
    const float B0 = pB[0];
    const float B1 = pB[1];
    const float B2 = pB[2];

    lift_field<float>(self, 0x78) = A0;
    lift_field<float>(self, 0x7c) = A1;
    lift_field<float>(self, 0x80) = A2;
    lift_field<float>(self, 0x84) = B0;
    lift_field<float>(self, 0x88) = B1;
    lift_field<float>(self, 0x8c) = B2;

    // C = A x B
    const float C0 = A1 * B2 - A2 * B1;
    const float C1 = A2 * B0 - A0 * B2;
    const float C2 = A0 * B1 - A1 * B0;

    // T = C x A
    const float T0 = C1 * A2 - C2 * A1;
    const float T1 = C2 * A0 - C0 * A2;
    const float T2 = C0 * A1 - C1 * A0;

    // V = A x T
    const float V0 = A1 * T2 - A2 * T1;
    const float V1 = A2 * T0 - A0 * T2;
    const float V2 = A0 * T1 - A1 * T0;

    float* pW = ext_005B6930(lift_field<void*>(self, 0x38));
    const float W0 = pW[0];
    const float W1 = pW[1];
    const float W2 = pW[2];

    // P = W + A, Q = V + W
    const float P0 = W0 + A0;
    const float P1 = W1 + A1;
    const float P2 = W2 + A2;
    const float Q0 = V0 + W0;
    const float Q1 = V1 + W1;
    const float Q2 = V2 + W2;

    const double p0 = P0, p1 = P1, p2 = P2;
    const double q0 = Q0, q1 = Q1, q2 = Q2;
    const double w0 = W0, w1 = W1, w2 = W2;

    lift_field<double>(self, 0x58) =
        (p2 - q2) * w1 + (q2 - w2) * p1 + (w2 - p2) * q1;
    lift_field<double>(self, 0x60) =
        (q0 - w0) * p2 + (p0 - q0) * w2 + (w0 - p0) * q2;
    lift_field<double>(self, 0x68) =
        (q1 - w1) * p0 + (p1 - q1) * w0 + (w1 - p1) * q0;
    // Scalar triple product Q . (P x W)
    lift_field<double>(self, 0x70) =
        -w0 * (q2 * p1 - q1 * p2)
        - p0 * (q1 * w2 - q2 * w1)
        - q0 * (w1 * p2 - w2 * p1);
}
