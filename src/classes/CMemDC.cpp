// Decompiled translation unit: src/classes/CMemDC.cpp

extern "C" __declspec(dllimport) int __stdcall TextOutA(void* hdc, int x, int y, const char* str, int len);

// [0x0041B6E0] CMemDC::vfunc_25 (33 bytes)
// Forwards to GDI TextOutA(this->m_hDC, x, y, str, len).
extern "C" void __fastcall fn_0041B6E0(void* self, int edx_unused, int a1, int a2, const char* a3, int a4) {
    TextOutA(*(void**)((char*)self + 0x4), a1, a2, a3, a4);
}

extern "C" __declspec(dllimport) int __stdcall DrawTextA(void* hdc, const char* str, int len, void* rect, unsigned int format);

// [0x0041B790] CMemDC::vfunc_28 (33 bytes)
// Forwards to GDI/USER DrawTextA(this->m_hDC, str, len, rect, format).
extern "C" void __fastcall fn_0041B790(void* self, int edx_unused, const char* a1, int a2, void* a3, unsigned int a4) {
    DrawTextA(*(void**)((char*)self + 0x4), a1, a2, a3, a4);
}

extern "C" __declspec(dllimport) int __stdcall Escape(void* hdc, int nEscape, int cbInput, const char* lpszInData, void* lpvOutData);

// [0x0041B830] CMemDC::vfunc_31 (33 bytes)
// Forwards to GDI32 Escape(this->m_hDC, a1, a2, a3, a4).
extern "C" int __fastcall fn_0041B830(void* self, int edx_unused, int a1, int a2, const char* a3, void* a4) {
    return Escape(*(void**)((char*)self + 0x4), a1, a2, a3, a4);
}

extern "C" __declspec(dllimport) int __stdcall DrawTextExA(void* hdc, const char* str, int len, void* rect, unsigned int format, void* params);

// [0x0041B7C0] CMemDC::vfunc_29 (38 bytes)
// Forwards to USER32 DrawTextExA(this->m_hDC, a1, a2, a3, a4, a5).
extern "C" int __fastcall fn_0041B7C0(void* self, int edx_unused, const char* a1, int a2, void* a3, unsigned int a4, void* a5) {
    return DrawTextExA(*(void**)((char*)self + 0x4), a1, a2, a3, a4, a5);
}
