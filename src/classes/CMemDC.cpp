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

extern "C" __declspec(dllimport) int __stdcall ExtTextOutA(void* hdc, int x, int y, unsigned int options, const void* lprect, const char* lpString, unsigned int c, const int* lpDx);

// [0x0041B710] CMemDC::vfunc_26 (48 bytes)
// Forwards to GDI32 ExtTextOutA(this->m_hDC, a1, a2, a3, a4, a5, a6, a7).
extern "C" void __fastcall fn_0041B710(void* self, int edx_unused, int a1, int a2, unsigned int a3, const void* a4, const char* a5, unsigned int a6, const int* a7) {
    ExtTextOutA(*(void**)((char*)self + 0x4), a1, a2, a3, a4, a5, a6, a7);
}

extern "C" int mem_009255F8;

// [0x0041B7F0] CMemDC::vfunc_30 (60 bytes)
// MFC-style CDC::GrayString(CBrush* pBrush, lpfn, lParam, nCount, x, y, nWidth, nHeight).
// Brush handle is pBrush->m_hObject (+0x4) when pBrush is non-null; forwards to USER32 GrayStringA(this->m_hDC, ...).
extern "C" __declspec(naked) int __fastcall fn_0041B7F0(void* self, int edx_unused, void* a1, void* a2, long a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je skip
        mov eax, dword ptr [eax + 0x4]
skip:
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push edx
        push eax
        mov eax, dword ptr [ecx + 0x4]
        push eax
        call dword ptr [mem_009255F8]
        ret 0x20
    }
}

extern "C" int mem_00925600;

// [0x0041B740] CMemDC::vfunc_27 (68 bytes)
// CSize CDC::TabbedTextOut(x, y, str, len, nTabPositions, lpnTabStops, nTabOrigin) -> USER32 TabbedTextOutA(this->m_hDC, ...).
// Hidden SIZE return pointer is the first stack arg; result DWORD split into sign-extended cx (low word) / cy (high word).
extern "C" __declspec(naked) void* __fastcall fn_0041B740(void* self, int edx_unused, void* ret, int a1, int a2, const char* a3, int a4, int a5, const int* a6, int a7) {
    __asm {
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ecx
        call dword ptr [mem_00925600]
        mov ecx, dword ptr [esp + 0x4]
        movsx edx, ax
        shr eax, 0x10
        movsx eax, ax
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [ecx], edx
        mov eax, ecx
        ret 0x20
    }
}
