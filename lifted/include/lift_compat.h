#pragma once

// Portable C++20 compatibility header for lifted Endorphin 2.7.1 code.
// Allows lifted functions to be syntax- and type-checked natively on Linux
// with g++/clang++ (-std=c++20 -fsyntax-only -Ilifted/include -Iinclude).

#include <algorithm>
#include <bit>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <span>

#ifndef _MSC_VER
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __stdcall
#define __stdcall
#endif
#ifndef __fastcall
#define __fastcall
#endif
#ifndef __thiscall
#define __thiscall
#endif
#ifndef __forceinline
#define __forceinline inline
#endif
#ifndef __declspec
#define __declspec(x)
#endif
#ifndef __int8
#define __int8 int8_t
#endif
#ifndef __int16
#define __int16 int16_t
#endif
#ifndef __int32
#define __int32 int32_t
#endif
#ifndef __int64
#define __int64 int64_t
#endif
#endif // _MSC_VER

#if !defined(_WIN32) && !defined(LIFT_NO_WIN32_TYPES)

typedef uint8_t  BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef uint64_t QWORD;

typedef int      BOOL;
typedef uint8_t  BOOLEAN;
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

typedef char          CHAR;
typedef unsigned char UCHAR;
typedef wchar_t       WCHAR;
typedef char          TCHAR;

typedef int16_t  SHORT;
typedef uint16_t USHORT;
typedef int32_t  INT;
typedef uint32_t UINT;
typedef int32_t  LONG;
typedef uint32_t ULONG;
typedef int64_t  LONGLONG;
typedef uint64_t ULONGLONG;

typedef float  FLOAT;
typedef double DOUBLE;

typedef intptr_t  INT_PTR;
typedef uintptr_t UINT_PTR;
typedef intptr_t  LONG_PTR;
typedef uintptr_t ULONG_PTR;
typedef size_t    SIZE_T;

typedef void*          LPVOID;
typedef const void*    LPCVOID;
typedef char*          LPSTR;
typedef const char*    LPCSTR;
typedef wchar_t*       LPWSTR;
typedef const wchar_t* LPCWSTR;
typedef char*          LPTSTR;
typedef const char*    LPCTSTR;

typedef uintptr_t WPARAM;
typedef intptr_t  LPARAM;
typedef intptr_t  LRESULT;
typedef int32_t   HRESULT;
typedef uint32_t  COLORREF;
typedef uint16_t  ATOM;

typedef void* HANDLE;
typedef void* HWND;
typedef void* HDC;
typedef void* HGLRC;
typedef void* HINSTANCE;
typedef void* HMODULE;
typedef void* HMENU;
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef void* HPEN;
typedef void* HFONT;
typedef void* HBITMAP;
typedef void* HRGN;
typedef void* HPALETTE;
typedef void* HTREEITEM;
typedef void* HGLOBAL;
typedef void* HRSRC;

struct POINT {
    LONG x;
    LONG y;
};

struct SIZE {
    LONG cx;
    LONG cy;
};

struct RECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

#endif // !_WIN32 && !LIFT_NO_WIN32_TYPES

#if !defined(GL_VERSION_1_1) && !defined(LIFT_NO_GL_TYPES)
typedef uint32_t GLenum;
typedef uint8_t  GLboolean;
typedef uint32_t GLbitfield;
typedef int8_t   GLbyte;
typedef int16_t  GLshort;
typedef int32_t  GLint;
typedef int32_t  GLsizei;
typedef uint8_t  GLubyte;
typedef uint16_t GLushort;
typedef uint32_t GLuint;
typedef float    GLfloat;
typedef float    GLclampf;
typedef double   GLdouble;
typedef double   GLclampd;
typedef void     GLvoid;
#endif // !GL_VERSION_1_1 && !LIFT_NO_GL_TYPES

// Portable field-offset accessor helpers for structs with partially recovered layouts.
template <typename T>
inline T& lift_field(void* base, ptrdiff_t offset) {
    return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(base) + offset);
}

template <typename T>
inline const T& lift_field(const void* base, ptrdiff_t offset) {
    return *reinterpret_cast<const T*>(reinterpret_cast<const uint8_t*>(base) + offset);
}
