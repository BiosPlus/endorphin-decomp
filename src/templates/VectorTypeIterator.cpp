// Decompiled translation unit: src/templates/VectorTypeIterator.cpp
extern "C" void ext_004BA740(void*, void*);
extern "C" void ext_00671F30(void*);

// [0x00681F70] Properties::PropertyIteratorTypes::VectorTypeIterator<NM::Vector3>::vfunc_0 (97 bytes)
extern "C" void* __fastcall fn_00681F70(void* self, int, void* ret_ptr, char** arg2, int arg3) {
    volatile int local = 0;
    char* p = *arg2;
    switch (arg3) {
        case 0x380:
            ext_004BA740(ret_ptr, p);
            return ret_ptr;
        case 0x381:
            ext_004BA740(ret_ptr, p + 4);
            return ret_ptr;
        case 0x383:
            ext_004BA740(ret_ptr, p + 8);
            return ret_ptr;
        default:
            ext_00671F30(ret_ptr);
            return ret_ptr;
    }
}
