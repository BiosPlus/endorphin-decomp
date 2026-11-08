// Decompiled translation unit: src/classes/CMemDC.cpp

extern "C" __declspec(dllimport) int __stdcall TextOutA(void* hdc, int x, int y, const char* str, int len);

// [0x0041B6E0] CMemDC::vfunc_25 (33 bytes)
// Forwards to GDI TextOutA(this->m_hDC, x, y, str, len).
extern "C" void __fastcall fn_0041B6E0(void* self, int edx_unused, int a1, int a2, const char* a3, int a4) {
    TextOutA(*(void**)((char*)self + 0x4), a1, a2, a3, a4);
}
