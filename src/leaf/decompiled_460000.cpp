// Decompiled translation unit: src/leaf/decompiled_460000.cpp

extern "C" void ext_0046FE50();
extern "C" void ext_00466870();
extern "C" void ext_006619D0();

// [0x00468750] sub_00468750 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468750(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x10 __asm _emit 0x00 // cmp byte ptr [ecx + 0x10], 0x0
        __asm _emit 0x75 __asm _emit 0x03 // jne +3
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x14 // mov ecx, dword ptr [ecx + 0x14]
        jmp ext_0046FE50
    }
}

extern "C" void ext_0046FE70();

// [0x00468770] sub_00468770 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468770(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x10 __asm _emit 0x00 // cmp byte ptr [ecx + 0x10], 0x0
        __asm _emit 0x75 __asm _emit 0x03 // jne +3
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        __asm _emit 0xC3 // ret
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x14 // mov ecx, dword ptr [ecx + 0x14]
        jmp ext_0046FE70
    }
}

extern "C" void ext_0044B150();
extern "C" int mem_00ACDB40;

// [0x00465EA0] sub_00465EA0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465EA0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00ACDB40]
        test eax, eax
        je done
        cmp dword ptr [eax + 0x20], 0x0
        je done
        mov eax, dword ptr [eax + 0x100]
        test eax, eax
        je done
        mov ecx, eax
        jmp ext_0044B150
    done:
        ret
    }
}

// [0x00467320] sub_00467320 (8 bytes)
extern "C" void ext_00467050();

extern "C" __declspec(naked) void __cdecl fn_00467320() {
    __asm {
        push 1
        call ext_00467050
        ret
    }
}

// [0x00467330] sub_00467330 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00467330() {
    __asm {
        push 0
        call ext_00467050
        ret
    }
}

// [0x00467380] sub_00467380 (8 bytes)
extern "C" void ext_00467340();

extern "C" __declspec(naked) void __cdecl fn_00467380() {
    __asm {
        push 0
        call ext_00467340
        ret
    }
}

// [0x00467390] sub_00467390 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00467390() {
    __asm {
        push 1
        call ext_00467340
        ret
    }
}

// [0x00469C50] sub_00469C50 (8 bytes)
extern "C" void ext_00469200();

extern "C" __declspec(naked) void __cdecl fn_00469C50() {
    __asm {
        push 0
        call ext_00469200
        ret
    }
}

// [0x00469C60] sub_00469C60 (8 bytes)
extern "C" void ext_00469200();

extern "C" __declspec(naked) void __cdecl fn_00469C60() {
    __asm {
        push 3
        call ext_00469200
        ret
    }
}

// [0x00469C70] sub_00469C70 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00469C70() {
    __asm {
        push 2
        call ext_00469200
        ret
    }
}

// [0x00469C80] sub_00469C80 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_00469C80() {
    __asm {
        push 1
        call ext_00469200
        ret
    }
}

extern "C" void ext_004658C0();

// [0x00465B30] sub_00465B30 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_00465B30() {
    __asm {
        call ext_004658C0
        mov eax, dword ptr [eax + 0x58]
        ret
    }
}

// [0x0046FAC0] sub_0046FAC0 (10 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0046FAC0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push eax
        call ext_006A5C5C
        pop ecx
        ret
    }
}

// [0x00465B40] sub_00465B40 (12 bytes)
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_00465B40(void* self) {
    __asm {
        call fn_00465B30
        mov ecx, eax
        jmp ext_00468660
    }
}

extern "C" void ext_006A5C5C();

// [0x00462D40] sub_00462D40 (14 bytes)
extern "C" void __fastcall fn_00462D40(void* self) {
    void* p = *(void**)self;
    if (p) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
}

// [0x00466900] sub_00466900 (14 bytes)
extern "C" void ext_004667A0();
extern "C" __declspec(naked) void __fastcall fn_00466900(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [eax + 0x18]
        push 1
        call ext_004667A0
        ret
    }
}

// [0x00465950] sub_00465950 (16 bytes)
extern "C" void* ext_00594000();
extern "C" void __fastcall ext_00493F80(void* self);
extern "C" void __fastcall fn_00465950(void* self) {
    char* r = (char*)ext_00594000();
    ext_00493F80(r + 0x258);
}

extern "C" void ext_00477380();

// [0x004691C0] sub_004691C0 (16 bytes)
// C++ cannot express "call, then tail-jump with ecx loaded from eax", so use naked asm.
extern "C" __declspec(naked) void __fastcall fn_004691C0(void* self) {
    __asm {
        call ext_00594000                                   // e8 3b ae 12 00
        mov ecx, dword ptr [eax + 0x26c]                    // 8b 88 6c 02 00 00
        jmp ext_00477380                                    // e9 b0 e1 00 00
    }
}

// [0x00464760] sub_00464760 (17 bytes)
extern "C" void ext_004658C0();

extern "C" __declspec(naked) void __fastcall fn_00464760(void* self) {
    __asm {
        call ext_004658C0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xa4]
        jmp eax
    }
}

extern "C" void ext_006A6AA8();

// [0x004675B0] sub_004675B0 (18 bytes)
extern "C" void* __fastcall fn_004675B0(void* self) {
    ext_006A6AA8();
    *(void**)self = (void*)0x939d3c;
    return self;
}

extern "C" void ext_004AF390();

// [0x00468F50] sub_00468F50 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468F50(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x60]
        mov ecx, dword ptr [ecx + 0x2c]
        push eax
        push edx
        call ext_004AF390
        ret 4
    }
}

extern "C" void ext_004AF430();

// [0x00468F70] sub_00468F70 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468F70(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x60]
        mov ecx, dword ptr [ecx + 0x2c]
        push eax
        push edx
        call ext_004AF430
        ret 0x4
    }
}

extern "C" void ext_004AF4D0();

// [0x00468F90] sub_00468F90 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468F90(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x60]
        mov ecx, dword ptr [ecx + 0x2c]
        push eax
        push edx
        call ext_004AF4D0
        ret 0x4
    }
}

extern "C" void ext_006A5C5C();

// [0x00462DF0] sub_00462DF0 (21 bytes)
extern "C" void __fastcall fn_00462DF0(void* self) {
    *(void**)self = (void*)0x00938E48;
    void* p = *((void**)self + 2);
    if (p) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
}

// [0x00464610] sub_00464610 (22 bytes)
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);

extern "C" int __fastcall fn_00464610(void* self, int edx_unused, int a1) {
    ext_006A5E60(0x939518, 0x30, 0);
    return 1;
}

extern "C" void ext_004658C0();
extern "C" void ext_00467380();

// [0x00464780] sub_00464780 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_00464780(void* self) {
    __asm {
        mov dword ptr [ecx + 0xB4], 8
        call ext_004658C0
        mov ecx, eax
        jmp ext_00467380
    }
}

extern "C" void ext_004658C0();
extern "C" void ext_00467390();

// [0x004647A0] sub_004647A0 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_004647A0(void* self) {
    __asm {
        mov dword ptr [ecx + 0xB4], 8
        call ext_004658C0
        mov ecx, eax
        jmp ext_00467390
    }
}

extern "C" void ext_004651F0();
extern "C" void ext_006A69AC();

// [0x00465330] sub_00465330 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465330(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        je short L_ret_00465344
        mov ecx, esi
        pop esi
        jmp ext_006A69AC
    L_ret_00465344:
        pop esi
        ret
    }
}

// [0x00462840] sub_00462840 (23 bytes)
extern "C" void ext_00447550();
extern "C" void* __fastcall fn_00462840(void* self, int edx_unused, int a1) {
    int* p = static_cast<int*>(self);
    p[0] = reinterpret_cast<int (*)()>(ext_00447550)();
    p[1] = a1;
    return self;
}

// [0x00466220] sub_00466220 (23 bytes)
extern "C" void* ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_004936C0();
extern "C" __declspec(naked) void __fastcall fn_00466220(void* self) {
    __asm {
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26C]
        call ext_006AD940
        mov ecx, eax
        jmp ext_004936C0
    }
}

// [0x0046F860] sub_0046F860 (24 bytes)
extern "C" float __fastcall ext_00642620(void* self);

extern "C" float __fastcall fn_0046F860(void* self) {
    float v = ext_00642620(static_cast<char*>(self) + 0xd4);
    return 1.0f / v;
}

extern "C" void ext_00466F00();

// [0x00467030] sub_00467030 (24 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00467030(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], eax
        call ext_00466F00
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00468B30] sub_00468B30 (24 bytes)
extern "C" void ext_00468250();

extern "C" void __fastcall fn_00468B30(void* self) {
    ((void (__fastcall *)(void*))ext_00468250)(self);
    void* obj = ((void* (__fastcall *)(void*))ext_00468660)(self);
    void (__fastcall *target)(void*) = (void (__fastcall *)(void*))(*(void***)obj)[0];
    target(obj);
}

extern "C" void ext_004AEC10();

// [0x00469000] sub_00469000 (25 bytes)
// Loads this->[0x2c] as the callee's `this`, pushes this->[0x60] and the two stack args, calls sub_004AEC10, then returns popping 8 bytes.
extern "C" __declspec(naked) void __fastcall fn_00469000(void* self, int edx_unused, void* a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        mov eax, dword ptr [ecx + 0x60]
        mov ecx, dword ptr [ecx + 0x2c]
        push edx
        push eax
        call ext_004AEC10
        ret 8
    }
}

// [0x0046C440] sub_0046C440 (25 bytes)
extern "C" int mem_0093A7DC;
extern "C" void ext_00401C60();

extern "C" __declspec(naked) void __fastcall fn_0046C440(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00401C60
        mov dword ptr [esi], offset mem_0093A7DC
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0046C860] sub_0046C860 (25 bytes)
extern "C" void ext_00401C60();

extern "C" void* __fastcall fn_0046C860(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x0093A7AC;
    return self;
}

// [0x004693D0] sub_004693D0 (25 bytes)
extern "C" void ext_004AEB60();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004693D0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004AEB60
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x004693F0] sub_004693F0 (25 bytes)
extern "C" void ext_00666360();

extern "C" __declspec(naked) void __fastcall fn_004693F0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00666360
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x0046F810] sub_0046F810 (25 bytes)
extern "C" void ext_0067AE00();
extern "C" void ext_0067AFB0();
extern "C" __declspec(naked) void __fastcall fn_0046F810(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x128]
        mov ecx, esi
        call ext_0067AFB0
        push 2
        mov ecx, esi
        call ext_0067AE00
        pop esi
        ret
    }
}

extern "C" void ext_00661620();

// [0x0046F7D0] sub_0046F7D0 (26 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0046F7D0(void* p) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00661620
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

extern "C" int ext_0046F8A0();

// [0x0046F8B0] sub_0046F8B0 (27 bytes)
extern "C" __declspec(naked) int __fastcall fn_0046F8B0(void* self) {
    __asm {
        call ext_0046F8A0
        test al, al
        je ret_zero
        cmp byte ptr [ecx + 0x295], 0x0
        je ret_zero
        mov eax, 0x1
        ret
    ret_zero:
        xor eax, eax
        ret
    }
}

// [0x0046F8D0] sub_0046F8D0 (27 bytes)
extern "C" __declspec(naked) int __fastcall fn_0046F8D0(void* self) {
    __asm {
        call ext_0046F8A0
        test al, al
        je ret_zero
        cmp byte ptr [ecx + 0x295], 0x0
        jne ret_zero
        mov eax, 0x1
        ret
    ret_zero:
        xor eax, eax
        ret
    }
}

// [0x00469060] sub_00469060 (27 bytes)
extern "C" void ext_004AFC60();

extern "C" __declspec(naked) void __fastcall fn_00469060(void* self) {
    __asm {
        cmp byte ptr [ecx + 0x10], 0
        je done
        mov eax, dword ptr [ecx + 0x14]
        test eax, eax
        je done
        mov ecx, dword ptr [eax + 0x34]
        push 0
        add ecx, 8
        call ext_004AFC60
    done:
        ret
    }
}

extern "C" void ext_00466050();
extern "C" void ext_00466360();

// [0x00467300] sub_00467300 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_00467300(void* self) {
    __asm {
        mov esi, dword ptr [ebp - 0x14]
        mov ecx, esi
        call ext_00466360
        mov edx, dword ptr [ebp - 0x28]
        push edx
        mov ecx, esi
        call ext_00466050
        mov eax, 0x4672ef
        ret
    }
}

// [0x00468C80] sub_00468C80 (28 bytes)
extern "C" void ext_00665F60();

extern "C" void __fastcall fn_00468C80(void* self) {
    char* s = (char*)self;
    void* a = *(void**)(s + 0x38);
    typedef void (__fastcall *F1)(void*);
    ((F1)ext_00665F60)(a);
    char* b = *(char**)(s + 0x14);
    char* o = *(char**)(b + 0x30);
    void** vt = *(void***)o;
    typedef void (__fastcall *F2)(void*);
    ((F2)vt[0x154 / 4])(o);
}

extern "C" void ext_00666040();

// [0x00468CA0] sub_00468CA0 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468CA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x38]
        call ext_00666040
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        pop esi
        jmp eax
    }
}

extern "C" void ext_00468310();
extern "C" void ext_00468660();

// [0x00468B50] sub_00468B50 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468B50(void* self) {
    __asm {
        push esi
        push 4
        push 4
        mov esi, ecx
        call ext_00468310
        mov ecx, esi
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        pop esi
        jmp eax
    }
}

extern "C" void ext_004AEEA0();
extern "C" void ext_006AD190();

// [0x00469040] sub_00469040 (28 bytes)
extern "C" void* __fastcall fn_00469040(void* self) {
    typedef void (__fastcall *FnA)(void*);
    typedef void* (__fastcall *FnB)(void*);
    typedef void* (__fastcall *FnVirt)(void*);
    char* s = (char*)self;
    ((FnA)ext_004AEEA0)(*(void**)(s + 0x2c));
    void* obj = ((FnB)ext_006AD190)(*(void**)(s + 0x14));
    void** vtbl = *(void***)obj;
    return ((FnVirt)vtbl[0])(obj);
}

// [0x00469020] sub_00469020 (29 bytes)
extern "C" void ext_004AFEB0();

extern "C" void __fastcall fn_00469020(void* self) {
    char* s = (char*)self;
    if (s[0x10] == 0) return;
    void* p = *(void**)(s + 0x14);
    if (p == 0) return;
    void* arg = *(void**)(s + 0x60);
    typedef void (__thiscall *FnC)(void* self_, void* a1);
    void* obj = (void*)(*(unsigned int*)((char*)p + 0x34) + 8);
    ((FnC)ext_004AFEB0)(obj, arg);
}

extern "C" void ext_00493EA0();
extern "C" void ext_0043C8F0();

// [0x00465DC0] sub_00465DC0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465DC0(void* self) {
    __asm {
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EA0
        mov eax, dword ptr [mem_00ACDB40]
        mov ecx, dword ptr [eax + 0x108]
        jmp ext_0043C8F0
    }
}

extern "C" void ext_00493EC0();
extern "C" void ext_00440690();

// [0x00465DE0] sub_00465DE0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465DE0(void* self) {
    __asm {
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493EC0
        mov eax, dword ptr [mem_00ACDB40]
        mov ecx, dword ptr [eax + 0x108]
        jmp ext_00440690
    }
}

// [0x00465910] sub_00465910 (34 bytes)
extern "C" int mem_00924300;
extern "C" void __fastcall fn_00465910(void* self) {
    if (*(int*)((char*)self + 0x60) != 1) {
        return;
    }
    void** vtbl = *(void***)self;
    int r = ((int (__thiscall*)(void*))(*(void**)&mem_00924300))((void*)0x00AD6CF4);
    ((void (__thiscall*)(void*, int))vtbl[0x58 / 4])(self, r);
}

// [0x0046E780] sub_0046E780 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046E780(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xC]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xC]
        push edx
        push esi
        mov dword ptr [esp + 0xC], 0x0
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
    }
}

// [0x004690C0] sub_004690C0 (35 bytes)
extern "C" void* ext_00594000();
extern "C" unsigned char __fastcall fn_004690C0(void* self) {
    if (*((unsigned char*)self + 0x10) != 0) {
        void* a = ext_00594000();
        if (a != 0) {
            void* b = ext_00594000();
            if (*(int*)((unsigned char*)b + 0x270) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// [0x00469130] sub_00469130 (32 bytes)
extern "C" void ext_004690C0();
extern "C" void* ext_00594000();
extern "C" void ext_004FFFE0();

// [0x00469130] sub_00469130 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00469130(void* self) {
    __asm {
        call ext_004690C0                                      // call sub_004690C0
        test al, al                                            // test al, al
        __asm _emit 0x74 __asm _emit 0x16                      // je +0x16 (-> ret)
        call ext_00594000                                      // call sub_00594000
        mov eax, dword ptr [eax + 0x270]                       // mov eax, [eax+0x270]
        mov ecx, dword ptr [eax + 0x140]                       // mov ecx, [eax+0x140]
        jmp ext_004FFFE0                                       // jmp sub_004FFFE0
        __asm _emit 0xC3                                       // ret
    }
}

// [0x00469150] sub_00469150 (32 bytes)
extern "C" void ext_004FFFA0();

// [0x00469150] sub_00469150 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00469150(void* self) {
    __asm {
        call ext_004690C0                                      // call sub_004690C0
        test al, al                                            // test al, al
        __asm _emit 0x74 __asm _emit 0x16                      // je +0x16 (-> ret)
        call ext_00594000                                      // call sub_00594000
        mov eax, dword ptr [eax + 0x270]                       // mov eax, [eax+0x270]
        mov ecx, dword ptr [eax + 0x140]                       // mov ecx, [eax+0x140]
        jmp ext_004FFFA0                                       // jmp sub_004FFFA0
        __asm _emit 0xC3                                       // ret
    }
}

// [0x00460990] sub_00460990 (35 bytes)
extern "C" void ext_00665870();
extern "C" void ext_00666120();
extern "C" __declspec(naked) void __fastcall fn_00460990(void* self) {
    __asm {
        push 0x0
        push 0x104
        push 0x938458
        call ext_006A5E60
        cmp eax, 0x6
        jne done
        call ext_00665870
        mov ecx, eax
        jmp ext_00666120
    done:
        ret
    }
}

// [0x0046FD70] sub_0046FD70 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046FD70(void* self, int edx_unused, int* out) {
    __asm {
        mov eax, dword ptr [ecx + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        mov edx, dword ptr [ecx + 0x1e0]
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x1e4]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        ret 0x4
    }
}

// [0x0046FDE0] sub_0046FDE0 (36 bytes)
extern "C" void __fastcall fn_0046FDE0(void* self, int edx_unused, int* a1) {
    char* obj = *(char**)((char*)self + 0xcc);
    char* tgt = *(char**)(obj + 0x26c);
    *(int*)(tgt + 0x1e0) = a1[0];
    *(int*)(tgt + 0x1e4) = a1[1];
}

extern "C" void ext_0046F930();
extern "C" int mem_00AD89B4;

// [0x00468630] sub_00468630 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468630(void* self) {
    __asm {
        cmp dword ptr [ecx], 0x0
        je done
        sub dword ptr [mem_00AD89B4], 0x1
        jne done
        mov eax, dword ptr [ecx]
        mov byte ptr [eax + 0x153], 0x0
        cmp byte ptr [ecx + 0x4], 0x0
        je done
        mov ecx, dword ptr [ecx]
        jmp ext_0046F930
    done:
        ret
    }
}

// [0x00462E50] sub_00462E50 (37 bytes)
extern "C" void ext_00401940();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00462E50(void* self, int edx_unused, void* str) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        sub eax, 1
        jne done
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0Ch]
        push eax
        call ext_00401940
done:
        pop esi
        ret 4
    }
}

// [0x0046FA50] sub_0046FA50 (37 bytes)
extern "C" void ext_0046F920();
extern "C" void __fastcall fn_0046FA50(void* self, int edx_unused, float v) {
    float* p = (float*)((char*)self + 0x28c);
    *p = v;
    if (v == 0.0f) {
        *p = 1.0f;
    }
    ext_0046F920();
}

extern "C" void ext_00665870();
extern "C" void ext_00665C10();

// [0x004609C0] sub_004609C0 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_004609C0(void* self) {
    __asm {
        test ecx, ecx
        je null_self
        lea eax, [ecx + 0x74]
        push eax
        call ext_00665870
        mov ecx, eax
        call ext_00665C10
        ret
    null_self:
        xor eax, eax
        push eax
        call ext_00665870
        mov ecx, eax
        call ext_00665C10
        ret
    }
}

// [0x004691D0] sub_004691D0 (37 bytes)
// Stack args are forwarded to the callee in reversed push order, so use naked asm.
extern "C" void ext_004773B0();
extern "C" void* ext_00594000();

extern "C" __declspec(naked) void __fastcall fn_004691D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi                                            // 56
        call ext_00594000                                   // e8 2a ae 12 00
        mov esi, dword ptr [eax + 0x26c]                    // 8b b0 6c 02 00 00
        mov eax, dword ptr [esp + 0xc]                      // 8b 44 24 0c
        mov ecx, dword ptr [esp + 0x8]                      // 8b 4c 24 08
        push eax                                            // 50
        push ecx                                            // 51
        mov ecx, esi                                        // 8b ce
        call ext_004773B0                                   // e8 c3 e1 00 00
        mov byte ptr [esi + 0x4], 0x1                       // c6 46 04 01
        pop esi                                             // 5e
        ret 0x8                                             // c2 08 00
    }
}

// [0x0046C2F0] sub_0046C2F0 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046C2F0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4c]
        fld dword ptr [esp + 0x4]
        mov edx, dword ptr [eax + 0xf8]
        fld dword ptr [edx + 0x138]
        fcomp st(1)
        fnstsw ax
        test ah, 0x1
        jne skip_store
        fstp dword ptr [ecx + 0x1c]
        ret 0x4
skip_store:
        fstp st(0)
        ret 0x4
    }
}

// [0x0046FBE0] sub_0046FBE0 (39 bytes)
extern "C" double mem_0092BD70;

extern "C" __declspec(naked) void __fastcall fn_0046FBE0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x8
        fld dword ptr [esp + 0xc]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp]
        fld qword ptr [esp]
        fistp dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x288], eax
        add esp, 0x8
        ret 0x4
    }
}

// [0x00464710] sub_00464710 (42 bytes)
extern "C" void __fastcall ext_00431320(void* self);
extern "C" int mem_00ACDB40;

extern "C" void __stdcall fn_00464710(int a1) {
    if (*(int*)(a1 + 4) == 0x100 && *(int*)(a1 + 8) == 0x1b) {
        void* self = (void*)mem_00ACDB40;
        if (*((unsigned char*)self + 0xf6) != 0) {
            ext_00431320(self);
        }
    }
}

extern "C" void ext_00462A60();

// [0x00462D10] sub_00462D10 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_00462D10(void* self, int edx_unused, int a1) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x83 __asm _emit 0xE8 __asm _emit 0x01 // sub eax, 0x1
        __asm _emit 0x74 __asm _emit 0x19 // je +0x19
        __asm _emit 0x83 __asm _emit 0xE8 __asm _emit 0x01 // sub eax, 0x1
        __asm _emit 0x75 __asm _emit 0x0F // jne +0x0F
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x08 // mov ecx, dword ptr [ecx + 0x8]
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x74 __asm _emit 0x08 // je +0x08
        call ext_00462A60
        ret 0x4
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        ret 0x4
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x0C // mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8A __asm _emit 0x40 __asm _emit 0x18 // mov al, byte ptr [eax + 0x18]
        ret 0x4
    }
}

extern "C" int mem_00924FE4;

// [0x0046C460] sub_0046C460 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046C460(void* self) {
    __asm {
        push ecx
        cmp byte ptr [esp + 0Ch], 0
        mov dword ptr [esp], 0
        mov eax, 92F10Ch
        jne short L_0046C479
        mov eax, 93A808h
    L_0046C479:
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

extern "C" int mem_00AD6C6C;
extern "C" int mem_00AD6C7C;

// [0x004658E0] sub_004658E0 (45 bytes)
extern "C" void __fastcall fn_004658E0(void* self) {
    char* s = (char*)self;
    *(int*)(s + 0x64) = *(int*)(s + 0x60);
    *(int*)(s + 0x60) = 0;
    if (*(char*)&mem_00AD6C6C != 0) {
        int v = mem_00AD6C7C;
        if (v == 5 || v == 6) {
            *(int*)(s + 0x60) = 1;
        }
    }
}

extern "C" void ext_0046FD70();

// [0x00468A00] sub_00468A00 (46 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00468A00(void* self, int edx_unused, void* out) {
    __asm {
        cmp byte ptr [ecx + 0x10], 0
        jne short L_inner
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], 0
        ret 0x4
L_inner:
        mov ecx, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_0046FD70
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x004663A0] sub_004663A0 (47 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) char __fastcall fn_004663A0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0x60], 0x0
        jne ret_true
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x84]
        call eax
        test al, al
        je ret_true
        push 0x0
        push 0x0
        push 0x939c7c
        call ext_006A5E60
        xor al, al
        ret
ret_true:
        mov al, 0x1
        ret
    }
}

extern "C" int mem_00925134;

// [0x00469570] sub_00469570 (52 bytes)
extern "C" __declspec(naked) int __fastcall fn_00469570(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_invalid
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok
    L_invalid:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esi + 0x54]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret 4
    L_ok:
        mov eax, dword ptr [ecx + 4*edi]
        pop edi
        pop esi
        ret 4
    }
}

// [0x00464630] sub_00464630 (53 bytes)
extern "C" void ext_006A6916();
extern "C" int mem_009242F4;

extern "C" void __fastcall fn_00464630(void* self) {
    typedef void (__fastcall *ThisFn)(void*);
    *(void**)self = (void*)0x93957c;
    ((ThisFn)mem_009242F4)((char*)self + 0xb0);
    ((ThisFn)mem_009242F4)((char*)self + 0xac);
    ((ThisFn)mem_009242F4)((char*)self + 0xa8);
    ((ThisFn)ext_006A6916)(self);
}

// [0x00466360] sub_00466360 (55 bytes)
// C++ cannot keep the vtable in edx while calling through eax, so use naked asm.
extern "C" __declspec(naked) void __fastcall fn_00466360(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov dword ptr [eax + 0x558], 0x0
        mov ecx, dword ptr [esi + 0xd8]
        test ecx, ecx
        je SHORT done_00466360
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push 0x1
        call eax
        mov dword ptr [esi + 0xd8], 0x0
done_00466360:
        pop esi
        ret
    }
}

// [0x0046A3C0] sub_0046A3C0 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" void* __fastcall fn_0046A3C0(void* self) {
    typedef void* (__cdecl *alloc_fn)(unsigned int);
    char* p = (char*)((alloc_fn)ext_006A5C62)(0x14);
    if (p) *(int*)p = 0;
    char* q = p + 4;
    if (q) *(int*)q = 0;
    char* r = p + 8;
    if (r) *(int*)r = 0;
    p[0x10] = 1;
    p[0x11] = 0;
    return p;
}

// [0x00465960] sub_00465960 (56 bytes)
// Assigns the empty C string literal to three std::string members at self+0x84, +0xA0, +0xBC.
extern "C" int mem_00924FD4;
extern "C" __declspec(naked) void __fastcall fn_00465960(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esi + 0x84]
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esi + 0xa0]
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esi + 0xbc]
        call dword ptr [mem_00924FD4]
        pop esi
        ret
    }
}

extern "C" int mem_00925134;

// [0x00469530] sub_00469530 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_00469530(void* self, int edx_unused, unsigned int idx, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        je invalid_path
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb valid_path
invalid_path:
        call dword ptr [mem_00925134]
valid_path:
        mov eax, dword ptr [esi + 0x54]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 4]
        push eax
        call edx
        pop edi
        pop esi
        ret 8
    }
}

extern "C" void ext_0067AEB0();
extern "C" void ext_0067B050();

// [0x0046F830] sub_0046F830 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046F830(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x148]
        push eax
        lea ecx, [esi + 0x160]
        mov byte ptr [esi + 0x12c], 0x0
        call ext_0067AEB0
        lea ecx, [esi + 0x128]
        pop esi
        jmp ext_0067B050
    }
}

extern "C" void ext_006A5C62();

// [0x0046A490] sub_0046A490 (57 bytes)
extern "C" void* __stdcall fn_0046A490(int a1, int a2, int a3, int* a4, unsigned char a5) {
    unsigned char* p = (unsigned char*)((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x14);
    if (p != 0) {
        *(int*)p = a1;
        *(int*)(p + 0x04) = a2;
        *(int*)(p + 0x08) = a3;
        *(int*)(p + 0x0C) = *a4;
        p[0x10] = a5;
        p[0x11] = 0;
    }
    return p;
}

// [0x004690F0] sub_004690F0 (60 bytes)
extern "C" void ext_004FFF70();
extern "C" __declspec(naked) void __fastcall fn_004690F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004690C0
        test al, al
        je short ret_path
        mov esi, dword ptr [esi + 0x28]
        call ext_00594000
        mov eax, dword ptr [eax + 0x270]
        mov ecx, dword ptr [eax + 0x140]
        mov dword ptr [ecx + 0x18], esi
        call ext_00594000
        mov edx, dword ptr [eax + 0x270]
        mov ecx, dword ptr [edx + 0x140]
        pop esi
        jmp ext_004FFF70
ret_path:
        pop esi
        ret
    }
}

// [0x0046FC10] sub_0046FC10 (62 bytes)
extern "C" void ext_00642630();
extern "C" __declspec(naked) void __fastcall fn_0046FC10(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        fld dword ptr [esp + 0x8]
        push esi
        fld1
        mov esi, ecx
        fdivrp st(1), st
        push ecx
        lea ecx, [esi + 0xd4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call ext_00642630
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0xcc]
        mov ecx, dword ptr [eax + 0x26c]
        fstp dword ptr [ecx + 0x1d0]
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004629E0] sub_004629E0 (63 bytes)
extern "C" void ext_004474F0();
extern "C" int mem_009255E0;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_004629E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp+8]
        test eax, eax
        push esi
        mov esi, ecx
        je L_END_4629E0
        cmp eax, 2
        je L_STR_4629E0
        push 4
        push 0x938d28
        push 0x938dd4
        push 0
        call dword ptr [mem_009255E0]
        cmp eax, 6
        jne L_END_4629E0
L_STR_4629E0:
        mov ecx, dword ptr [esp+8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_004474F0
L_END_4629E0:
        pop esi
        ret 8
    }
}

extern "C" void ext_00447510();
extern "C" int mem_009255E0;
extern "C" int mem_00924FF0;

// [0x00462A20] sub_00462A20 (63 bytes)
typedef int (__stdcall *MsgBoxFn)(void*, const char*, const char*, unsigned int);
typedef const char* (__thiscall *CStrFn)(void*);
typedef void (__thiscall *SubFn)(void*, const char*);

extern "C" void __fastcall fn_00462A20(void* self, int edx_unused, void* a1, int mode) {
    if (mode == 0) {
        return;
    }
    if (mode != 2) {
        int r = ((MsgBoxFn)mem_009255E0)(0, (const char*)0x938e00, (const char*)0x938d28, 4);
        if (r != 6) {
            return;
        }
    }
    const char* s = ((CStrFn)mem_00924FF0)(a1);
    ((SubFn)ext_00447510)(*(void**)self, s);
}

extern "C" void ext_00401930();
extern "C" void ext_00462A60();
extern "C" void ext_00462BA0();

// [0x00462E10] sub_00462E10 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00462E10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        sub eax, 0x1
        je L_STATE1_462E10
        sub eax, 0x1
        jne L_END_462E10
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_END_462E10
        call ext_00462A60
        test al, al
        je L_END_462E10
        pop esi
        jmp ext_00462BA0
L_STATE1_462E10:
        mov ecx, dword ptr [esp + 0x8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0xc]
        push eax
        call ext_00401930
L_END_462E10:
        pop esi
        ret 0x4
    }
}

// [0x00462E80] sub_00462E80 (64 bytes)
extern "C" void ext_00462BE0();

extern "C" __declspec(naked) void __fastcall fn_00462E80(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        sub eax, 0x1
        je L_STATE1_462E80
        sub eax, 0x1
        jne L_END_462E80
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_END_462E80
        call ext_00462A60
        test al, al
        je L_END_462E80
        pop esi
        jmp ext_00462BE0
L_STATE1_462E80:
        mov ecx, dword ptr [esp + 0x8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0xc]
        push eax
        call ext_00401930
L_END_462E80:
        pop esi
        ret 0x4
    }
}

// [0x00462EC0] sub_00462EC0 (64 bytes)
extern "C" void ext_00401950();
extern "C" void ext_00462A60();
extern "C" void ext_00462C30();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00462EC0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        sub eax, 1
        je L_STATE1_462EC0
        sub eax, 1
        jne L_END_462EC0
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        je L_END_462EC0
        call ext_00462A60
        test al, al
        je L_END_462EC0
        pop esi
        jmp ext_00462C30
L_STATE1_462EC0:
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0Ch]
        push eax
        call ext_00401950
L_END_462EC0:
        pop esi
        ret 4
    }
}

// [0x00462F00] sub_00462F00 (64 bytes)
extern "C" void ext_00401960();
extern "C" void ext_00462A60();
extern "C" void ext_00462C80();
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00462F00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        sub eax, 1
        je L_STATE1_462F00
        sub eax, 1
        jne L_END_462F00
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        je L_END_462F00
        call ext_00462A60
        test al, al
        je L_END_462F00
        pop esi
        jmp ext_00462C80
L_STATE1_462F00:
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0Ch]
        push eax
        call ext_00401960
L_END_462F00:
        pop esi
        ret 4
    }
}

// [0x0046F930] sub_0046F930 (65 bytes)
extern "C" void ext_0046F890();
extern "C" void ext_0067AEB0();

extern "C" __declspec(naked) void __fastcall fn_0046F930(void* self) {
    __asm {
        call ext_0046F890
        test al, al
        jne done
        cmp byte ptr [ecx + 0x153], al
        jne done
        cmp byte ptr [ecx + 0x152], 0x0
        mov al, 0x1
        mov byte ptr [ecx + 0x150], al
        je skip
        mov byte ptr [ecx + 0x151], al
    skip:
        cmp dword ptr [ecx + 0x28], 0x0
        je done
        mov eax, dword ptr [ecx + 0x148]
        push eax
        add ecx, 0x160
        call ext_0067AEB0
    done:
        ret
    }
}

// [0x004685A0] sub_004685A0 (66 bytes)
// Walks a chain: __RTDynamicCast(obj, 0, 0xA2E2F8, 0xA2FB54, 0); if null, calls vtable slot 4
// (thiscall, arg 0) on obj and repeats with the result. Returns the cast result or NULL.
extern "C" void ext_006A6E9E();
typedef void* (__cdecl *RTDynCastFn)(void*, int, void*, void*, int);

extern "C" void* __cdecl fn_004685A0(void* a1) {
    typedef void* (__thiscall *VFn)(void*, void*);
    void* esi = a1;
    void* edi = 0;
    if (esi != 0) {
        do {
            edi = ((RTDynCastFn)ext_006A6E9E)(esi, 0, (void*)0x00A2E2F8, (void*)0x00A2FB54, 0);
            if (edi != 0) {
                break;
            }
            esi = ((VFn)(*(void***)esi)[4])(esi, edi);
        } while (esi != 0);
    }
    return edi;
}

// [0x0046C490] sub_0046C490 (69 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00993828;

extern "C" __declspec(naked) int __cdecl fn_0046C490(void* s) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x4]
        fldz
        add esp, 0x4
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne neg_path
        fadd qword ptr [mem_00993828]
        add esp, 0x4
        jmp ext_006A6DE0
neg_path:
        fsub qword ptr [mem_00993828]
        add esp, 0x4
        jmp ext_006A6DE0
    }
}

extern "C" int mem_00925690;
extern "C" void ext_006A5E5A();

// [0x00460540] sub_00460540 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00460540(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0xc]
        push 0x1
        mov edx, eax
        sub edx, ecx
        push edx
        mov edx, dword ptr [esp + 0x18]
        sub edx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x28]
        mov edi, dword ptr [edx + 0x4]
        sub edi, eax
        mov eax, dword ptr [edx]
        add edi, ecx
        push edi
        push eax
        mov ecx, esi
        call ext_006A5E5A
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

// [0x004689B0] sub_004689B0 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_004689B0(void* self, int edx_unused, void* out) {
    __asm {
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x10], 0x0
        jne big
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        pop edi
        ret 0x4
    big:
        push esi
        mov esi, dword ptr [edi + 0x14]
        add esi, 0x20
        mov ecx, esi
        call ext_0065C640
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [eax + 0x18]
        mov edi, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [edi], ecx
        mov ecx, esi
        mov dword ptr [edi + 0x4], edx
        call ext_0065C650
        pop esi
        mov eax, edi
        pop edi
        ret 0x4
    }
}

// [0x0046A370] sub_0046A370 (78 bytes)
extern "C" void __fastcall fn_0046A370(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x11) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

extern "C" int mem_00924FF4;

// [0x0046FAD0] sub_0046FAD0 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046FAD0(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0046FF90] sub_0046FF90 (78 bytes)
extern "C" void __fastcall fn_0046FF90(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x39) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x0046FFE0] sub_0046FFE0 (78 bytes)
extern "C" void __fastcall fn_0046FFE0(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x45) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

extern "C" int mem_00924FE0;

// [0x0046FB20] sub_0046FB20 (82 bytes)
// Two-string constructor under an SEH frame: copy-constructs std::string at this+0 from a1
// and std::string at this+0x1c from a2; returns this. ret 8.
extern "C" __declspec(naked) void* __fastcall fn_0046FB20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00462980] sub_00462980 (83 bytes)
extern "C" void ext_004474E0();
extern "C" void ext_00447500();

extern "C" __declspec(naked) void __fastcall fn_00462980(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp+8]
        test eax, eax
        push esi
        mov esi, ecx
        je L_END_462980
        cmp eax, 2
        push edi
        je L_STR_462980
        push 4
        push 0x938d28
        push 0x938da0
        push 0
        call dword ptr [mem_009255E0]
        cmp eax, 6
        jne L_POP_EDI_462980
L_STR_462980:
        mov edi, dword ptr [esp+0xc]
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_004474E0
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00447500
L_POP_EDI_462980:
        pop edi
L_END_462980:
        pop esi
        ret 8
    }
}

extern "C" int mem_009255F4;
extern "C" int mem_009256E4;

// [0x004646B0] sub_004646B0 (84 bytes)
extern "C" __declspec(naked) int __fastcall fn_004646B0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [mem_009255F4]
        push 0x1
        call esi
        test ax, ax
        push 0x4
        __asm _emit 0x0F __asm _emit 0x9C __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0E // setl byte ptr [esp+0xe]
        call esi
        test ax, ax
        push 0x2
        __asm _emit 0x0F __asm _emit 0x9C __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0F // setl byte ptr [esp+0xf]
        call esi
        test ax, ax
        push 0x12
        __asm _emit 0x0F __asm _emit 0x9C __asm _emit 0xC3 // setl bl
        call dword ptr [mem_009256E4]
        test ax, ax
        __asm _emit 0x79 __asm _emit 0x16 // jns +0x16
        __asm _emit 0x80 __asm _emit 0x7C __asm _emit 0x24 __asm _emit 0x0A __asm _emit 0x00 // cmp byte ptr [esp+0xa], 0
        __asm _emit 0x75 __asm _emit 0x06 // jne +6
        __asm _emit 0x0A __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x0B // or bl, byte ptr [esp+0xb]
        __asm _emit 0x74 __asm _emit 0x09 // je +9
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret
    }
}

extern "C" void ext_0067ADE0();
extern "C" void ext_0067AE70();

// [0x0046F980] sub_0046F980 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046F980(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x152], 0
        je L_done
        push edi
        lea edi, [esi + 0x154]
        mov ecx, edi
        call ext_0065C640
        mov ecx, edi
        mov byte ptr [esi + 0x150], 0
        call ext_0065C650
        lea ecx, [esi + 0x128]
        call ext_0067ADE0
        test al, al
        pop edi
        je L_fail
        mov byte ptr [esi + 0x152], 0
        pop esi
        ret
    L_fail:
        mov eax, dword ptr [esi + 0x14c]
        push eax
        lea ecx, [esi + 0x160]
        call ext_0067AE70
    L_done:
        pop esi
        ret
    }
}

// [0x0046F340] sub_0046F340 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8348;
extern "C" int mem_00AD8344;

extern "C" __declspec(naked) void* __fastcall fn_0046F340(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882a1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8348], al
        jne L_done
        or dword ptr [mem_00AD8348], eax
        mov ecx, offset mem_00AD8344
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD8344], 0x93a82c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD8344
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F3A0] sub_0046F3A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8350;
extern "C" int mem_00AD834C;

extern "C" __declspec(naked) void* __fastcall fn_0046F3A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882a3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8350], al
        jne L_done
        or dword ptr [mem_00AD8350], eax
        mov ecx, offset mem_00AD834C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD834C], 0x93a9dc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD834C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F5E0] sub_0046F5E0 (30 bytes)
extern "C" void ext_0046F340();

extern "C" __declspec(naked) void __cdecl fn_0046F5E0(void) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F340
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F600] sub_0046F600 (30 bytes)
extern "C" void ext_0046F3A0();

extern "C" __declspec(naked) void __fastcall fn_0046F600(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F3A0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F400] sub_0046F400 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8358;
extern "C" int mem_00AD8354;

extern "C" __declspec(naked) void* __fastcall fn_0046F400(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882a5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8358], al
        jne L_done
        or dword ptr [mem_00AD8358], eax
        mov ecx, offset mem_00AD8354
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD8354], 0x93ab8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD8354
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F620] sub_0046F620 (30 bytes)
extern "C" void ext_0046F400();

extern "C" __declspec(naked) void __fastcall fn_0046F620(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F400
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F460] sub_0046F460 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8360;
extern "C" int mem_00AD835C;

extern "C" __declspec(naked) void* __fastcall fn_0046F460(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882a7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8360], al
        jne L_done
        or dword ptr [mem_00AD8360], eax
        mov ecx, offset mem_00AD835C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD835C], 0x93ad3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD835C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F640] sub_0046F640 (30 bytes)
extern "C" void ext_0046F460();

extern "C" __declspec(naked) void __fastcall fn_0046F640(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F460
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F4C0] sub_0046F4C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8368;
extern "C" int mem_00AD8364;

extern "C" __declspec(naked) void* __fastcall fn_0046F4C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882a9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8368], al
        jne L_done
        or dword ptr [mem_00AD8368], eax
        mov ecx, offset mem_00AD8364
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD8364], 0x93aeec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD8364
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F520] sub_0046F520 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8370;
extern "C" int mem_00AD836C;

extern "C" __declspec(naked) void* __fastcall fn_0046F520(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882abe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8370], al
        jne L_done
        or dword ptr [mem_00AD8370], eax
        mov ecx, offset mem_00AD836C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD836C], 0x93b09c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD836C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" void ext_0046F4C0();

// [0x0046F660] sub_0046F660 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046F660(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F4C0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F680] sub_0046F680 (30 bytes)
extern "C" void ext_0046F520();

extern "C" __declspec(naked) void __fastcall fn_0046F680(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F520
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x0046F580] sub_0046F580 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD8378;
extern "C" int mem_00AD8374;

extern "C" __declspec(naked) void* __fastcall fn_0046F580(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x882ade
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AD8378], al
        jne L_done
        or dword ptr [mem_00AD8378], eax
        mov ecx, offset mem_00AD8374
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AD8374], 0x93b24c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AD8374
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0046F6A0] sub_0046F6A0 (30 bytes)
extern "C" void ext_0046F580();

extern "C" __declspec(naked) void __fastcall fn_0046F6A0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_0046F580
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004616F0] sub_004616F0 (89 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004616F0(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x38], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0046C120] sub_0046C120 (92 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0046C120(void* self) {
    __asm {
        push -1
        push 0x882887
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        lea esi, [ecx + 0x4]
        mov dword ptr [esp + 0x8], ecx
        mov dword ptr [ecx], 0x93a7a4
        mov dword ptr [esi], 0x93a74c
        add ecx, 0x28
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

extern "C" void ext_0043C670();
extern "C" void ext_006A5E66();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

// [0x00460590] sub_00460590 (71 bytes)
extern "C" void __fastcall fn_00460590(void* self) {
    typedef void (__fastcall *FnFC)(void*);
    typedef void* (__fastcall *FnFCRet)(void*);
    typedef int (__stdcall *PFN_Inv)(void*, void*, int);
    typedef int (__stdcall *PFN_Upd)(void*);
    void* a = *(void**)((char*)self + 0xb4);
    ((FnFC)&ext_0043C670)(a);
    void* d = ((FnFCRet)&ext_006A5E66)(self);
    void** vt = *(void***)d;
    ((FnFC)vt[0x16c / 4])(d);
    void* hwnd = *(void**)(*(char**)((char*)self + 0xb4) + 0x20);
    (*(PFN_Inv*)&mem_00925688)(hwnd, 0, 1);
    void* hwnd2 = *(void**)(*(char**)((char*)self + 0xb4) + 0x20);
    (*(PFN_Upd*)&mem_0092568C)(hwnd2);
}

// [0x0046C500] sub_0046C500 (33 bytes)
extern "C" void ext_00404F00();

extern "C" __declspec(naked) void* __fastcall fn_0046C500(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_00404F00
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004638E0] sub_004638E0 (98 bytes)
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_004638E0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x2
        push -0x1
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2e4]
        push 0x100c
        push eax
        call edi
        add eax, 0x1
        je done_4638E0
        push ebx
    loop_4638E0:
        mov ecx, dword ptr [esi + 0x2e4]
        push 0x2
        lea ebx, [eax - 0x1]
        push ebx
        push 0x100c
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x2e4]
        push 0x0
        push ebx
        push 0x1008
        push edx
        call edi
        mov eax, dword ptr [esi + 0x2e4]
        push 0x2
        push -0x1
        push 0x100c
        push eax
        call edi
        add eax, 0x1
        jne loop_4638E0
        pop ebx
    done_4638E0:
        pop edi
        pop esi
        ret
    }
}

// [0x00462440] sub_00462440 (98 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F6E();

extern "C" __declspec(naked) void __fastcall fn_00462440(void* self) {
    __asm {
        push -1
        push 0x00880B33
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00938BC4
        lea ecx, [esi + 0xcc]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006A5DFA
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F2C
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00463D00] sub_00463D00 (100 bytes)
extern "C" void ext_006A5FDA();
extern "C" __declspec(naked) void __fastcall fn_00463D00(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x418]
        cmp esi, dword ptr [ecx + 0x41c]
        push edi
        lea edi, [ecx + 0x414]
        jbe L_ok1
        call ebp
    L_ok1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_ok2
        call ebp
    L_ok2:
        test edi, edi
        je L_bad1
        cmp edi, edi
        je L_ok3
    L_bad1:
        call ebp
    L_ok3:
        cmp esi, ebx
        je L_done
        test edi, edi
        jne L_ok4
        call ebp
    L_ok4:
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok5
        call ebp
    L_ok5:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        push eax
        call ext_006A5FDA
        cmp esi, dword ptr [edi + 0x8]
        jb L_ok6
        call ebp
    L_ok6:
        add esi, 4
        jmp L_ok1
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

extern "C" void ext_004275C0();
extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FF4;

// [0x0046C0A0] sub_0046C0A0 (101 bytes)
extern "C" __declspec(naked) void __cdecl fn_0046C0A0() {
    __asm {
        __asm _emit 0x6A __asm _emit 0xFF                         // push -1
        __asm _emit 0x68 __asm _emit 0xF9 __asm _emit 0x56 __asm _emit 0x8B __asm _emit 0x00 // push 0x8b56f9
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        __asm _emit 0x50                                          // push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        __asm _emit 0x83 __asm _emit 0xEC __asm _emit 0x1C        // sub esp, 0x1c
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x30 // mov ecx, [esp+0x30]
        __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0x24        // lea eax, [esp]
        __asm _emit 0x50                                          // push eax
        __asm call ext_004275C0                                   // call 0x4275c0
        __asm _emit 0x8B __asm _emit 0xC8                         // mov ecx, eax
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp+0x24], 0
        __asm call dword ptr [mem_00924FF0]                       // c_str
        __asm _emit 0x50                                          // push eax
        __asm call dword ptr [mem_009251F0]                       // atof
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x30 // mov ecx, [esp+0x30]
        __asm _emit 0xD9 __asm _emit 0x19                         // fstp dword ptr [ecx]
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x04        // add esp, 4
        __asm _emit 0x8D __asm _emit 0x0C __asm _emit 0x24        // lea ecx, [esp]
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF __asm _emit 0xFF // mov dword ptr [esp+0x24], -1
        __asm call dword ptr [mem_00924FF4]                       // ~basic_string
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x1C // mov ecx, [esp+0x1c]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x28        // add esp, 0x28
        __asm _emit 0xC3                                          // ret
    }
}

// [0x0046C320] sub_0046C320 (105 bytes)
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0046C320(void* self) {
    __asm {
        push -1
        push 0x8828d1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x93a7b4
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0x0
        call ext_00403560
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esi], 0x93a7ac
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0046C3C0] sub_0046C3C0 (105 bytes)
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0046C3C0(void* self) {
    __asm {
        push -1
        push 0x8828d1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x93a7e4
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0x0
        call ext_00403560
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esi], 0x93a7dc
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0046A4D0] sub_0046A4D0 (61 bytes)
extern "C" void ext_00474FF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0046A4D0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x1c]
    L_loop_0046A4D0:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_call_0046A4D0
        cmp eax, edi
        je L_check_0046A4D0
    L_call_0046A4D0:
        call ebp
    L_check_0046A4D0:
        cmp dword ptr [esp + 0x18], ebx
        je L_done_0046A4D0
        add dword ptr [esi], 1
        lea ecx, [esp + 0x14]
        call ext_00474FF0
        jmp L_loop_0046A4D0
    L_done_0046A4D0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0046C560] sub_0046C560 (113 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_0093A744;
extern "C" int mem_0093A7A4;
extern "C" int mem_0093A74C;

extern "C" __declspec(naked) void* __fastcall fn_0046C560(void* self) {
    __asm {
        push -1
        push 0x8828eb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], offset mem_0093A744
        call ext_00661980
        xor ebx, ebx
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], offset mem_0093A7A4
        mov dword ptr [edi], offset mem_0093A74C
        mov byte ptr [esi + 0x8], bl
        mov dword ptr [esi + 0x20], ebx
        mov byte ptr [esi + 0x24], 0x1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x44], ebx
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x4c], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004615B0] sub_004615B0 (114 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A624A();

extern "C" __declspec(naked) void __fastcall fn_004615B0(void* self) {
    __asm {
        push -1
        push 0x876856
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x938764
        mov dword ptr [esi + 0x74], 0x938734
        lea ecx, [esi + 0x11c]
        mov dword ptr [esp + 0x10], 0x1
        call ext_0040EF90
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A624A
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004647D0] sub_004647D0 (117 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00925538;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __stdcall fn_004647D0(void* arg) {
    __asm {
        __asm _emit 0x6A __asm _emit 0xFF // push -0x1
        __asm _emit 0x68 __asm _emit 0xF9 __asm _emit 0x56 __asm _emit 0x8B __asm _emit 0x00 // push 0x8b56f9
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x1C
        __asm _emit 0x68 __asm _emit 0x3C __asm _emit 0x96 __asm _emit 0x93 __asm _emit 0x00 // push 0x93963c
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x2C]
        push 0x5
        push 0x0
        push 0x0
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FF0]
        push eax
        push 0x0
        call dword ptr [mem_00925538]
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1C]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

extern "C" void ext_0043CB70();
extern "C" void ext_00678D70();
extern "C" int mem_00925134;

// [0x00466BA0] sub_00466BA0 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_00466BA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0x8], 0x0
        mov dword ptr [esp], ecx
        jne L_466BB2
        mov eax, dword ptr [ecx + 0x24]
        mov dword ptr [esp + 0x8], eax
L_466BB2:
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_466BD0
        __asm _emit 0xFF __asm _emit 0xD5 // call ebp
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
L_466BD0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_466BDA
        __asm _emit 0xFF __asm _emit 0xD5 // call ebp
L_466BDA:
        __asm _emit 0x3B __asm _emit 0xF6 // cmp esi, esi
        je L_466BE0
        __asm _emit 0xFF __asm _emit 0xD5 // call ebp
L_466BE0:
        cmp edi, ebx
        je L_466C03
        cmp edi, dword ptr [esi + 0x8]
        jb L_466BEB
        __asm _emit 0xFF __asm _emit 0xD5 // call ebp
L_466BEB:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [edi]
        call ext_0043CB70
        cmp edi, dword ptr [esi + 0x8]
        jb L_466BFE
        __asm _emit 0xFF __asm _emit 0xD5 // call ebp
L_466BFE:
        add edi, 0x4
        jmp L_466BD0
L_466C03:
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        push edx
        call ext_00678D70
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x0046C390] sub_0046C390 (36 bytes)
extern "C" void ext_00664840();
extern "C" __declspec(naked) void* __cdecl fn_0046C390(void* a1, float a2) {
    __asm {
        push ecx
        fld dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        fstp dword ptr [esp]
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_00664840
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004624C0] sub_004624C0 (127 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" __declspec(naked) void __fastcall fn_004624C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x880b33
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x256
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        lea edi, [esi + 0x78]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x938bc4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0xcc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [edi], 0x9287e4
        mov dword ptr [esi + 0x74], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00462AA0] sub_00462AA0 (98 bytes)
extern "C" void ext_006A5FA4();

extern "C" __declspec(naked) void __fastcall fn_00462AA0(void* self) {
    __asm {
        push -1
        push 0x00880B9B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x120
        push 0x0
        push ecx
        lea ecx, [esp + 0x8]
        call fn_004624C0
        lea ecx, [esp]
        mov dword ptr [esp + 0x128], 0x0
        call ext_006A5FA4
        lea ecx, [esp]
        mov dword ptr [esp + 0x128], 0xffffffff
        call fn_00462440
        mov ecx, dword ptr [esp + 0x120]
        mov dword ptr fs:[0], ecx
        add esp, 0x12c
        ret
    }
}

// [0x00462F60] sub_00462F60 (130 bytes)
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F6E();

extern "C" __declspec(naked) void __fastcall fn_00462F60(void* self) {
    __asm {
        push -1
        push 0x00880C1F
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00938E5C
        lea ecx, [esi + 0x170]
        mov dword ptr [esp + 0x10], 0x3
        call ext_006A5F2C
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F2C
        lea ecx, [esi + 0xc8]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F2C
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F2C
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0046A8E0] sub_0046A8E0 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0046A8E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_8F1
        call edi
    L_8F1:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 0x11], 0
        je L_90B
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 4], eax
        cmp byte ptr [eax + 0x11], 0
        je L_961
    L_906:
        call edi
        pop edi
        pop esi
        ret
    L_90B:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x11], 0
        jne L_931
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0x11], 0
        jne L_92B
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_920:
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0x11], 0
        je L_920
    L_92B:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_931:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0x11], 0
        jne L_955
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_940:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax]
        jne L_955
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0x11], 0
        je L_940
    L_955:
        mov ecx, dword ptr [esi + 4]
        cmp byte ptr [ecx + 0x11], 0
        jne L_906
        mov dword ptr [esi + 4], eax
    L_961:
        pop edi
        pop esi
        ret
    }
}

// [0x0046A320] sub_0046A320 (39 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_0046A320(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [ecx + 0x10], 0
        je done
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x22c
        call ext_00451670
done:
        ret 0x4
    }
}

// [0x00461E20] sub_00461E20 (140 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F6E();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00461E20(void* self) {
    __asm {
        push -1
        push 0x8807C9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x9389D4
        lea ecx, [esi + 0xD8]
        mov dword ptr [esp + 0x10], 5
        call ext_006A5DFA
        lea ecx, [esi + 0x84]
        mov byte ptr [esp + 0x10], 4
        call ext_006A5EFC
        lea ecx, [esi + 0x80]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x7C]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x78]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x74]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004622F0] sub_004622F0 (137 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006ADBF0();
extern "C" int mem_00991070;
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_004622F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0880AF3h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [mem_00991070]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0Ch], esi
        call ext_006ADBF0
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1Ch]
        push 1Ch
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esi], 938B9Ch
        mov dword ptr [esi + 40h], edx
        mov dword ptr [esi + 44h], eax
        mov byte ptr [esi + 34h], 1
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 20h], eax
        test eax, eax
        mov byte ptr [esp + 10h], 1
        je L_null
        mov ecx, eax
        call dword ptr [mem_00924FE8]
        jmp L_done
    L_null:
        xor eax, eax
    L_done:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 8], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 0Ch
    }
}

extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

// [0x00465FB0] sub_00465FB0 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465FB0(void* self) {
    __asm {
        push -1
        push 08B56F9h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1Ch
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push esi
        mov esi, dword ptr [esp + 30h]
        push eax
        add esi, 0Ch
        push esi
        push ecx
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        lea edx, [esp + 8]
        push 092F8F4h
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0Ch
        push 0
        push 0
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 30h], 0
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [esp + 4]
        mov dword ptr [esp + 28h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 20h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 4
    }
}

// [0x00466050] sub_00466050 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_00466050(void* self) {
    __asm {
        push -1
        push 08B56F9h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1Ch
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push esi
        mov esi, dword ptr [esp + 30h]
        push eax
        add esi, 0Ch
        push esi
        push ecx
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        lea edx, [esp + 8]
        push 0939C6Ch
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0Ch
        push 0
        push 0
        lea ecx, [esp + 0Ch]
        mov dword ptr [esp + 30h], 0
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [esp + 4]
        mov dword ptr [esp + 28h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 20h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 4
    }
}

// [0x00461510] sub_00461510 (147 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6250();
extern "C" int mem_0093A0E8;
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void __fastcall fn_00461510(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x876834
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        push 0x32f
        mov esi, ecx
        push 0x31e
        mov dword ptr [esp + 0x14], esi
        call ext_006A6250
        xor eax, eax
        lea edi, [esi + 0x114]
        mov dword ptr [esi], 0x938764
        mov dword ptr [esi + 0x74], 0x938734
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi], 0x92a254
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x14], 1
        call ext_0040F0B0
        mov ecx, dword ptr [mem_0093A0E8]
        push ecx
        mov byte ptr [esp + 0x18], 2
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00461660] sub_00461660 (91 bytes)
extern "C" void ext_00461510();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00461660(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x190
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        push 0
        mov ecx, eax
        call ext_00461510
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00464CC0] sub_00464CC0 (149 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A624A();

extern "C" __declspec(naked) void __fastcall fn_00464CC0(void* self) {
    __asm {
        push -1
        push 0x00881230
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x218]
        mov dword ptr [esp + 0x10], 0x4
        call ext_0040EF90
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5EFC
        lea ecx, [esi + 0x170]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5EFC
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5EFC
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A624A
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00460490] sub_00460490 (165 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5E06();

extern "C" __declspec(naked) void __fastcall fn_00460490(void* self) {
    __asm {
        push -1
        push 0x00880240
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0093822C
        lea ecx, [esi + 0x160]
        mov dword ptr [esp + 0x10], 0x4
        call ext_006A5DFA
        lea ecx, [esi + 0x10C]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5DFA
        lea ecx, [esi + 0xB8]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5DFA
        mov ecx, dword ptr [esi + 0xB0]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x1
        je skip_b0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    skip_b0:
        mov ecx, dword ptr [esi + 0xAC]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x0
        je skip_ac
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    skip_ac:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006A5E06
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00467F60] sub_00467F60 (170 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F68();
extern "C" void ext_006A6B08();
extern "C" __declspec(naked) void __fastcall fn_00467F60(void* self) {
    __asm {
        push -1
        push 0x881cb8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x24]
        push esi
        push edi
        push eax
        mov eax, dword ptr [esp + 0x2c]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x34]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], esi
        call ext_006A5F68
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x939ddc
        call ext_006A6B08
        or dword ptr [eax + 0x34], 0x40
        add eax, 0x34
        mov ecx, esi
        call ext_006A6B08
        or dword ptr [eax + 0x34], 0x80000
        add eax, 0x34
        call ext_006A5EDE
        mov edi, dword ptr [eax + 0x8]
        mov ecx, esi
        call ext_006A6B08
        mov ecx, esi
        mov dword ptr [eax + 0x8], edi
        call ext_006A6B08
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x48], 0x163
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x1c
    }
}

extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();

// [0x00462FF0] sub_00462FF0 (178 bytes)
extern "C" __declspec(naked) void __fastcall fn_00462FF0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x880c1f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x257
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        lea edi, [esi + 0x74]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x938e5c
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0xc8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0x11c]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0x170]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [edi], 0x929cb4
        mov dword ptr [esi + 0x1c4], ecx
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00462B10] sub_00462B10 (133 bytes)
extern "C" void ext_00462FF0();
extern "C" void ext_00462F60();
extern "C" void ext_00401970();
extern "C" void ext_006A5FA4();

extern "C" __declspec(naked) void __fastcall fn_00462B10(void* self) {
    __asm {
        push -1
        push 0x880bbb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        push 0
        push eax
        lea ecx, [esp + 0xc]
        call ext_00462FF0
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        sub eax, 1
        mov dword ptr [esp + 0x1d4], 0
        je L_462B63
        sub eax, 1
        jne L_462B6B
        lea ecx, [esp + 0x4]
        call ext_006A5FA4
        jmp L_462B6B
    L_462B63:
        mov ecx, dword ptr [esi + 0xc]
        call ext_00401970
    L_462B6B:
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1d4], 0xffffffff
        call ext_00462F60
        mov ecx, dword ptr [esp + 0x1cc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1d4
        ret
    }
}

// [0x00465D00] sub_00465D00 (181 bytes)
extern "C" void ext_006A6A18();
extern "C" void ext_006A6D5C();
extern "C" int mem_00924FF4;
extern "C" int mem_00AD6C80;
extern "C" __declspec(naked) void __fastcall fn_00465D00(void* self) {
    __asm {
        push -1
        push 0x8816f5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x939bb4
        mov eax, dword ptr [mem_00924FF4]
        push eax
        push 3
        push 0x1c
        lea ecx, [esi + 0x84]
        push ecx
        mov dword ptr [esp + 0x20], 4
        mov dword ptr [mem_00AD6C80], 0
        call ext_006A6D5C
        lea ecx, [esi + 0x68]
        mov byte ptr [esp + 0x10], 3
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 2
        je L_skip1
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    L_skip1:
        mov ecx, dword ptr [esi + 0x58]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 1
        je L_skip2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push 1
        call eax
    L_skip2:
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0
        je L_skip3
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    L_skip3:
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A6A18
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0046AC80] sub_0046AC80 (181 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_006246B0();
extern "C" void ext_0065C660();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0046AC80(void* self) {
    __asm {
        push -1
        push 0x8822ef
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov eax, dword ptr [esi + 0x68]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x14], 0x5
        je L_0046ACB8
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0046ACB8:
        lea ecx, [esi + 0x54]
        mov dword ptr [esi + 0x68], ebx
        mov dword ptr [esi + 0x6c], ebx
        mov dword ptr [esi + 0x70], ebx
        call ext_004026E0
        mov eax, dword ptr [esi + 0x48]
        cmp eax, ebx
        je L_0046ACD9
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0046ACD9:
        lea ecx, [esi + 0x34]
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x50], ebx
        mov byte ptr [esp + 0x14], 0x3
        call ext_006246B0
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x14], 0x2
        call ext_006246B0
        lea ecx, [esi + 0x14]
        mov byte ptr [esp + 0x14], 0x1
        call ext_006246B0
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x14], bl
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004634C0] sub_004634C0 (190 bytes)
extern "C" void ext_006A5F50();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_004634C0(void* self) {
    __asm {
        push -1
        push 0x880c77
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1cc
        push esi
        push 0
        mov esi, ecx
        push esi
        push 0x939140
        push 0x1004
        push 0
        push 0
        push 1
        lea ecx, [esp + 0x24]
        call ext_006A5F68
        mov eax, dword ptr [esp + 0x7c]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x1d8], 0
        mov dword ptr [eax + 0x30], 0x939128
        call ext_006A5F62
        cmp eax, 1
        jne done
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esp + 0xc]
        call ext_006A5F5C
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x1d8], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0xcc]
        call ext_006A5F50
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
    done:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x1d8], 0xffffffff
        call ext_006A5F56
        mov ecx, dword ptr [esp + 0x1d0]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1d8
        ret
    }
}

// [0x00462D50] sub_00462D50 (147 bytes)
extern "C" void ext_00401980();
extern "C" void ext_00462840();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00462D50(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x00880BE6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov dword ptr [esi], 0x00938E48
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esp + 0x14], 0x0
        call ext_00401980
        push 0x8
        mov dword ptr [esi + 0xc], eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 0x1
        je L_null
        push edi
        mov ecx, eax
        call ext_00462840
        mov edi, eax
        jmp L_after
    L_null:
        xor edi, edi
    L_after:
        mov eax, dword ptr [esi + 0x8]
        cmp edi, eax
        je L_end
        test eax, eax
        je L_end
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_end:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x8], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00461EB0] sub_00461EB0 (202 bytes)
extern "C" int mem_009242F0;
extern "C" void ext_006A5FC2();
extern "C" void ext_006A5C6E();
extern "C" __declspec(naked) void __fastcall fn_00461EB0(void* self) {
    __asm {
        push -1
        push 0x008807C9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x317
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        push 0x00928B5D
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x009389D4
        call dword ptr [mem_009242F0]
        push 0x00928B5D
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_009242F0]
        push 0x00928B5D
        lea ecx, [esi + 0x7C]
        mov byte ptr [esp + 0x18], 0x2
        call dword ptr [mem_009242F0]
        push 0x00928B5D
        lea ecx, [esi + 0x80]
        mov byte ptr [esp + 0x18], 0x3
        call dword ptr [mem_009242F0]
        lea edi, [esi + 0x84]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x4
        call ext_006A5C6E
        mov dword ptr [edi], 0x00929B6C
        lea edi, [esi + 0xD8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x5
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x009287E4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004667A0] sub_004667A0 (203 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004667A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp dword ptr [esi + 0x4], edi
        je L_early
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        mov dword ptr [esi + 0x8], edi
        je L_a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x23c]
        call edx
    L_a:
        mov ecx, dword ptr [esi + 0x24]
        test ecx, ecx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        je L_bad1
        mov eax, dword ptr [esi + 0x28]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok1
    L_bad1:
        call ebp
    L_ok1:
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [eax + 4 * edi]
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [esi + 0x4], edi
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x238]
        push ebx
        call eax
        mov edi, dword ptr [esi + 0x14]
        cmp edi, dword ptr [esi + 0x18]
        lea ebx, [esi + 0x10]
        jbe L_loop
        call ebp
    L_loop:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_c
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_c:
        test ebx, ebx
        je L_d
        cmp ebx, ebx
        je L_e
    L_d:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_e:
        cmp edi, dword ptr [esp + 0x14]
        je L_done
        test ebx, ebx
        jne L_f
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_f:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_g
        call ebp
    L_g:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [edx]
        push eax
        call edx
        cmp edi, dword ptr [ebx + 0x8]
        jb L_h
        call dword ptr [mem_00925134]
    L_h:
        mov ebp, dword ptr [mem_00925134]
        add edi, 0x4
        jmp L_loop
    L_done:
        pop ebx
        pop ebp
    L_early:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00469F80] sub_00469F80 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00469F80(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x18]
        xor ebx, ebx
        cmp ecx, ebx
        je L_469F93
        push ebx
        call ext_004667A0
L_469F93:
        mov ecx, dword ptr [esi + 0x2c]
        cmp ecx, ebx
        je L_469FA3
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
L_469FA3:
        mov dword ptr [esi + 0x2c], ebx
        mov ecx, dword ptr [esi + 0x14]
        cmp ecx, ebx
        je L_469FB5
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_469FB5:
        mov dword ptr [esi + 0x14], ebx
        mov ecx, dword ptr [esi + 0x1c]
        cmp ecx, ebx
        je L_469FC7
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_469FC7:
        mov dword ptr [esi + 0x1c], ebx
        mov byte ptr [esi + 0x10], bl
        pop esi
        pop ebx
        ret
    }
}

// [0x00469FD0] sub_00469FD0 (43 bytes)
extern "C" void ext_00469130();
extern "C" void ext_00469530();
extern "C" void ext_00472350();
extern "C" void ext_00469F80();
extern "C" __declspec(naked) void __fastcall fn_00469FD0(void* self) {
    __asm {
        push esi
        push 0
        mov esi, ecx
        push 3
        mov byte ptr [esi + 0x11], 1
        call ext_00469530
        mov ecx, esi
        call ext_00469130
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_469FF3
        call ext_00472350
    L_469FF3:
        mov ecx, esi
        pop esi
        jmp ext_00469F80
    }
}

// [0x004685F0] sub_004685F0 (56 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004685F0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        push esi
        mov esi, ecx
        mov cl, byte ptr [esp + 0xc]
        mov dword ptr [esi], eax
        mov byte ptr [esi + 0x4], cl
        je L_468622
        cmp dword ptr [mem_00AD89B4], 0
        jne L_46861B
        mov byte ptr [eax + 0x153], 1
        mov ecx, dword ptr [esi]
        call ext_00472350
    L_46861B:
        add dword ptr [mem_00AD89B4], 1
    L_468622:
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00464BE0] sub_00464BE0 (211 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6250();
extern "C" int mem_0093A0E8;
extern "C" int mem_0092407C;
extern "C" __declspec(naked) void* __fastcall fn_00464BE0(void* self) {
    __asm {
        push -1
        push 0x8811de
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push 0x337
        mov esi, ecx
        push 0x64
        mov dword ptr [esp + 0x18], esi
        call ext_006A6250
        lea edi, [esi + 0x114]
        mov dword ptr [esi], 0x939794
        mov dword ptr [esi + 0x74], 0x939768
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi], 0x92a254
        lea ebx, [esi + 0x11c]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 0x1
        call ext_006A5C6E
        mov dword ptr [ebx], 0x929b6c
        lea ebx, [esi + 0x170]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 0x2
        call ext_006A5C6E
        mov dword ptr [ebx], 0x929b6c
        lea ebx, [esi + 0x1c4]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 0x3
        call ext_006A5C6E
        mov dword ptr [ebx], 0x929b6c
        lea ecx, [esi + 0x218]
        mov byte ptr [esp + 0x18], 0x4
        call ext_0040F0B0
        mov eax, dword ptr [mem_0093A0E8]
        push eax
        mov byte ptr [esp + 0x1c], 0x5
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00464DD0] sub_00464DD0 (94 bytes)
extern "C" void ext_00464BE0();
extern "C" void ext_00464CC0();
extern "C" void ext_006A5FA4();

extern "C" __declspec(naked) void __fastcall fn_00464DD0(void* self) {
    __asm {
        push -1
        push 0x88124b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28c
        lea ecx, [esp]
        call ext_00464BE0
        lea ecx, [esp]
        mov dword ptr [esp + 0x294], 0x0
        call ext_006A5FA4
        lea ecx, [esp]
        mov dword ptr [esp + 0x294], 0xffffffff
        call ext_00464CC0
        mov ecx, dword ptr [esp + 0x28c]
        mov dword ptr fs:[0], ecx
        add esp, 0x298
        ret
    }
}

// [0x00460B70] sub_00460B70 (220 bytes)
extern "C" void ext_004153D0();
extern "C" void ext_00665870();
extern "C" void ext_00665C10();
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A64A2();

extern "C" __declspec(naked) void __fastcall fn_00460B70(void* self) {
    __asm {
        push -1
        push 0x880637
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x74]
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9384ac
        mov dword ptr [eax], 0x9384a4
        mov dword ptr [esi + 0x78], 0x938494
        push eax
        mov dword ptr [esp + 0x14], 0x7
        call ext_00665870
        mov ecx, eax
        call ext_00665C10
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5EFC
        lea ecx, [esi + 0x1d0]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5EFC
        lea ecx, [esi + 0x17c]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5DFA
        lea ecx, [esi + 0x128]
        mov byte ptr [esp + 0x10], 0x3
        call ext_004153D0
        mov ecx, dword ptr [esi + 0x124]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x2
        je skip_virt_call
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
skip_virt_call:
        lea ecx, [esi + 0xd0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A64A2
        lea ecx, [esi + 0x7c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A64A2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00419940();
extern "C" void ext_004199B0();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" int mem_009242FC;
extern "C" int mem_00924494;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x00463340] sub_00463340 (184 bytes)
extern "C" __declspec(naked) void __fastcall fn_00463340(void* self) {
    __asm {
        push -1
        __asm _emit 0x68 __asm _emit 0x4A __asm _emit 0x0C __asm _emit 0x88 __asm _emit 0x00 // push 0x880c4a
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        __asm _emit 0x81 __asm _emit 0xC6 __asm _emit 0xC8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // add esi, 0x1c8
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esp + 0x10]
        call ext_00419940
        push 0x929f50
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x20], 0x1
        call ext_004199B0
        test al, al
        je done
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924494]
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x1c], 0x2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
done:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x00463400] sub_00463400 (186 bytes)
extern "C" void ext_00419940();
extern "C" void ext_004199B0();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" int mem_009242FC;
extern "C" int mem_00924494;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00929F50;

extern "C" __declspec(naked) void __fastcall fn_00463400(void* self) {
    __asm {
        push -1
        push 0x880c4a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x1c8]
        mov dword ptr [esp + 0x20], 0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esp + 0x10]
        call ext_00419940
        push offset mem_00929F50
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x20], 1
        call ext_004199B0
        test al, al
        je L_fail
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924494]
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x120]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
    L_fail:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x00469500] sub_00469500 (42 bytes)
extern "C" void ext_004B0DD0();
extern "C" void ext_005B11F0();
extern "C" __declspec(naked) void __fastcall fn_00469500(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x1c], 0
        je short L_end_00469500
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esi + 0x1c]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        push eax
        mov ecx, esi
        call ext_004B0DD0
L_end_00469500:
        pop esi
        ret
    }
}

extern "C" void ext_004658C0();
extern "C" void ext_00465B40();
extern "C" void ext_006679D0();

// [0x004651F0] sub_004651F0 (148 bytes)
extern "C" __declspec(naked) void __fastcall fn_004651F0(void* self) {
    __asm {
        cmp byte ptr [mem_00AD6C6C], 0
        je f4651_true
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x84]
        call eax
        test al, al
        je f4651_skip1
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8C]
        call eax
    f4651_skip1:
        push esi
        call ext_004658C0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        mov esi, eax
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x54]
        call ext_006679D0
        test esi, esi
        pop esi
        jne f4651_go
        test al, al
        je f4651_true
    f4651_go:
        push 0
        push 3
        push 0x9399C8
        call ext_006A5E60
        sub eax, 2
        je f4651_zero
        sub eax, 4
        je f4651_case4
        sub eax, 1
        je f4651_true
    f4651_zero:
        xor al, al
        ret
    f4651_case4:
        call ext_004658C0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xA4]
        call eax
        test eax, eax
        setne al
        ret
    f4651_true:
        mov al, 1
        ret
    }
}

extern "C" void ext_006A69BE();
extern "C" void ext_00439FD0();

// [0x00465290] sub_00465290 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_00465290(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        je short L_ret_004652B9
        mov ecx, esi
        mov dword ptr [esi + 0xB4], 0x2
        call ext_006A69BE
        mov ecx, dword ptr [mem_00ACDB40]
        pop esi
        jmp ext_00439FD0
    L_ret_004652B9:
        pop esi
        ret
    }
}

// [0x004652C0] sub_004652C0 (43 bytes)
extern "C" void ext_006A69C4();
extern "C" __declspec(naked) void __fastcall fn_004652C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        je short L_ret_004652E9
        mov ecx, esi
        mov dword ptr [esi + 0xB4], 0x1
        call ext_006A69C4
        mov ecx, dword ptr [mem_00ACDB40]
        pop esi
        jmp ext_00439FD0
    L_ret_004652E9:
        pop esi
        ret
    }
}

// [0x00465350] sub_00465350 (48 bytes)
extern "C" void ext_004651F0();
extern "C" void ext_004658C0();
extern "C" void ext_00467320();
extern "C" void ext_00439FD0();
extern "C" int mem_00ACDB40;
extern "C" __declspec(naked) void __fastcall fn_00465350(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        je done
        mov dword ptr [esi + 0xb4], 5
        call ext_004658C0
        mov ecx, eax
        call ext_00467320
        mov ecx, dword ptr [mem_00ACDB40]
        pop esi
        jmp ext_00439FD0
done:
        pop esi
        ret
    }
}

// [0x00465380] sub_00465380 (48 bytes)
extern "C" void ext_004651F0();
extern "C" void ext_004658C0();
extern "C" void ext_00467330();
extern "C" void ext_00439FD0();
extern "C" int mem_00ACDB40;
extern "C" __declspec(naked) void __fastcall fn_00465380(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        je done
        mov dword ptr [esi + 0xb4], 6
        call ext_004658C0
        mov ecx, eax
        call ext_00467330
        mov ecx, dword ptr [mem_00ACDB40]
        pop esi
        jmp ext_00439FD0
    done:
        pop esi
        ret
    }
}

extern "C" void ext_00462A70();
extern "C" void ext_00462A80();
extern "C" void ext_00462A90();
extern "C" void ext_004A96E0();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A6238();
extern "C" int mem_009242FC;
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

// [0x00462730] sub_00462730 (227 bytes)
extern "C" __declspec(naked) void __fastcall fn_00462730(void* self) {
    __asm {
        push -1
        push 0x00877FD2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esp + 0x8]
        push eax
        push 0
        push 0
        push 0x147
        push ecx
        mov dword ptr [esp + 0x44], 0
        call dword ptr [mem_00925694]
        push eax
        lea ecx, [esi + 0x78]
        call ext_006A6238
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov byte ptr [esp + 0x34], 1
        call ext_004A96E0
        add esp, 4
        lea ecx, [esp + 0xc]
        mov edi, eax
        mov byte ptr [esp + 0x30], 0
        call dword ptr [mem_00924FF4]
        mov eax, edi
        sub eax, 0
        je L_zero
        sub eax, 1
        je L_one
        sub eax, 1
        jne L_done
        mov ecx, dword ptr [esi + 0x74]
        call ext_00462A70
        push 1
        jmp L_common
L_one:
        mov ecx, dword ptr [esi + 0x74]
        call ext_00462A80
        push 1
        jmp L_common
L_zero:
        mov ecx, dword ptr [esi + 0x74]
        call ext_00462A90
        push 0
L_common:
        lea ecx, [esi + 0xcc]
        call ext_006A5FDA
L_done:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

extern "C" void ext_00473790();

// [0x00468A40] sub_00468A40 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468A40(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0Ch
        mov ecx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ecx + 24h]
        mov dword ptr [esp], eax
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [esp + 4], edx
        mov eax, dword ptr [ecx + 2Ch]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esp + 8], eax
        lea eax, [esp]
        push eax
        mov dword ptr [esp + 8], edx
        call ext_00473790
        add esp, 0Ch
        ret 4
    }
}

// [0x00468AD0] sub_00468AD0 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468AD0(void* self, int edx_unused, unsigned char a1) {
    __asm {
        sub esp, 0xc
        mov ecx, dword ptr [ecx + 0x14]
        mov eax, dword ptr [ecx + 0x24]
        mov dword ptr [esp], eax
        mov edx, dword ptr [ecx + 0x28]
        mov dword ptr [esp + 0x4], edx
        mov eax, dword ptr [ecx + 0x2c]
        mov dl, byte ptr [esp + 0x10]
        mov dword ptr [esp + 0x8], eax
        lea eax, [esp]
        push eax
        mov byte ptr [esp + 0xc], dl
        call ext_00473790
        add esp, 0xc
        ret 4
    }
}

// [0x00468A80] sub_00468A80 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468A80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0Ch
        test eax, eax
        jne short L_skip
        mov eax, 1
    L_skip:
        mov ecx, dword ptr [ecx + 14h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [esp], edx
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [esp + 4], edx
        mov edx, dword ptr [ecx + 2Ch]
        mov dword ptr [esp], eax
        lea eax, [esp]
        push eax
        mov dword ptr [esp + 0Ch], edx
        call ext_00473790
        add esp, 0Ch
        ret 4
    }
}

// [0x0046FC50] sub_0046FC50 (233 bytes)
extern "C" void ext_0067B2F0();
extern "C" void ext_0067B310();

extern "C" __declspec(naked) void __fastcall fn_0046FC50(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x3c
        push esi
        mov esi, ecx
        call fn_0046F860
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        lea ecx, [esi + 0x1f8]
        fild dword ptr [esi + 0x288]
        fstp qword ptr [esp]
        call ext_0067B2F0
        mov eax, dword ptr [esi + 0x27c]
        mov ecx, dword ptr [esi + 0xf8]
        mov dword ptr [esi + 0x218], eax
        fld dword ptr [ecx + 0x138]
        fstp dword ptr [esp + 0x3c]
        sub esp, 0x8
        fld dword ptr [esp + 0x44]
        lea ecx, [esi + 0xd4]
        fstp qword ptr [esp]
        call ext_00642620
        sub esp, 0x8
        lea ecx, [esi + 0x220]
        fstp qword ptr [esp]
        call ext_0067B310
        mov edx, dword ptr [esi + 0x270]
        mov eax, dword ptr [esi + 0xf8]
        mov dword ptr [esi + 0x240], edx
        fld dword ptr [eax + 0x138]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        lea ecx, [esi + 0x248]
        fild dword ptr [esi + 0x288]
        fstp qword ptr [esp]
        call ext_0067B2F0
        fld dword ptr [esi + 0x19c]
        mov ecx, dword ptr [esi + 0x280]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        mov dword ptr [esi + 0x268], ecx
        fild dword ptr [esi + 0x288]
        lea ecx, [esi + 0x1d0]
        fstp qword ptr [esp]
        call ext_0067B2F0
        lea edx, [esi + 0x180]
        mov dword ptr [esi + 0x1f0], edx
        mov dword ptr [esi + 0x178], 0x7fffffff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_00447F20();
extern "C" void ext_00447FA0();
extern "C" void ext_004481F0();
extern "C" void ext_00466360();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5F92();
extern "C" void ext_006A6454();
extern "C" int mem_00ACDB40;
extern "C" int mem_00881CE7;
extern "C" int mem_00939CF4;
extern "C" int mem_00939CD8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009255E4;
extern "C" int mem_0092568C;

// [0x004665D0] sub_004665D0 (269 bytes)
extern "C" __declspec(naked) void __fastcall fn_004665D0(void* self) {
    __asm {
        push -1
        push offset mem_00881CE7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x13c
        push esi
        mov esi, ecx
        call ext_00466360
        push 0
        lea ecx, [esp + 0x24]
        call ext_004481F0
        mov eax, dword ptr [mem_00ACDB40]
        push eax
        push 0x16a
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x150], 0
        call ext_006A5F92
        push offset mem_00939CF4
        lea ecx, [esp + 0x24]
        call ext_006A5F50
        push offset mem_00939CD8
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 4]
        push ecx
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0x14c], 1
        call ext_00447FA0
        lea ecx, [esp + 4]
        mov byte ptr [esp + 0x148], 0
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esp + 0x40]
        push edx
        call dword ptr [mem_009255E4]
        push 0
        lea ecx, [esp + 0x24]
        call ext_006A6454
        push 5
        lea ecx, [esp + 0x24]
        call ext_006A5E72
        mov eax, dword ptr [esp + 0x40]
        push eax
        call dword ptr [mem_0092568C]
        mov esi, dword ptr [esi + 0xd8]
        test esi, esi
        je short L_null
        add esi, 0x74
        jmp short L_call
    L_null:
        xor esi, esi
    L_call:
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        lea ecx, [esp + 0x20]
        mov dword ptr [eax + 0x558], esi
        mov dword ptr [esp + 0x148], -1
        call ext_00447F20
        mov ecx, dword ptr [esp + 0x140]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x148
        ret
    }
}

extern "C" void ext_00447DD0();
extern "C" void ext_00447E30();
extern "C" void ext_00679D80();
extern "C" void ext_006A5FA4();
extern "C" void ext_006A6328();
extern "C" void ext_006A6532();
extern "C" int mem_0093A07C;
extern "C" int mem_0093A068;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FB0;
extern "C" int mem_00924FF4;

// [0x00466240] sub_00466240 (276 bytes)
extern "C" __declspec(naked) void __fastcall fn_00466240(void* self) {
    __asm {
        push -1
        push 0x88177e
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xec
        push ebx
        push esi
        mov dword ptr [esp + 0x8], 0x0
        mov eax, dword ptr [mem_0093A07C]
        mov ecx, dword ptr [mem_0093A068]
        push 0x1
        push eax
        push ecx
        mov ecx, 0xad6bc8
        call ext_006A6532
        test eax, eax
        setne bl
        call ext_00679D80
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        mov esi, eax
        mov dword ptr [esp + 0xfc], 0x0
        mov dword ptr [esp + 0x8], 0x1
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        add eax, 0x53c
        push esi
        push eax
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je L_no1
        test bl, bl
        je L_no1
        mov bl, 0x1
        jmp L_j1
L_no1:
        xor bl, bl
L_j1:
        or esi, -1
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xfc], esi
        call dword ptr [mem_00924FF4]
        test bl, bl
        je L_end
        push 0x0
        lea ecx, [esp + 0x2c]
        call ext_00447E30
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xfc], 0x1
        call ext_006A5FA4
        cmp eax, 0x1
        jne L_skip
        movzx edx, byte ptr [esp + 0xf0]
        mov eax, dword ptr [mem_0093A07C]
        mov ecx, dword ptr [mem_0093A068]
        push edx
        push eax
        push ecx
        mov ecx, 0xad6bc8
        call ext_006A6328
L_skip:
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xfc], esi
        call ext_00447DD0
L_end:
        mov ecx, dword ptr [esp + 0xf4]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xf8
        ret
    }
}

extern "C" void ext_005B68F0();
extern "C" double mem_009453C8;
extern "C" __declspec(naked) void __cdecl fn_004C6130(void* out, void* vec, int arg) {
    __asm {
        sub esp, 0x10
        fldz
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        fst dword ptr [esp + 4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        fst dword ptr [esi + 8]
        push edi
        fst dword ptr [esi + 4]
        fstp dword ptr [esi]
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        jbe l1
        call dword ptr [mem_00925134]
        jmp l1
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    l1:
        mov ebp, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], ebp
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        cmp edi, ebp
        _emit 0x0f
        _emit 0x84
        _emit 0x8a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        cmp edi, dword ptr [ebx + 8]
        mov ebp, dword ptr [mem_00925134]
        jb l3
        call ebp
    l3:
        mov ecx, dword ptr [edi]
        call ext_005B68F0
        fstp dword ptr [esp + 0x24]
        cmp edi, dword ptr [ebx + 8]
        jb l4
        call ebp
    l4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 4
        push edx
        call eax
        fld dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x24]
        add eax, 0x30
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esi]
        fld dword ptr [esi + 4]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esi + 4]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
        cmp edi, dword ptr [ebx + 8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jb l5
        call ebp
    l5:
        add edi, 4
        _emit 0xe9
        _emit 0x60
        _emit 0xff
        _emit 0xff
        _emit 0xff
        fld dword ptr [esp + 0x10]
        fcom qword ptr [mem_009453C8]
        fnstsw ax
        test ah, 0x41
        jne l6
        fld1
        pop edi
        fdivrp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 4]
        fmul st, st(1)
        fstp dword ptr [esi + 4]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    l6:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00462860] sub_00462860 (278 bytes)
extern "C" void ext_00447520();
extern "C" void ext_00665010();
extern "C" void ext_00664B20();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) bool __fastcall fn_00462860(void* self, int edx_unused, const void* other) {
    __asm {
        push -1
        push 0x880b78
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x13c
        mov ecx, [ecx]
        push 0x104
        lea eax, [esp+0x3c]
        push eax
        call ext_00447520
        lea ecx, [esp+0x38]
        push ecx
        lea ecx, [esp+4]
        call dword ptr [mem_00924FE4]
        lea edx, [esp]
        push edx
        mov dword ptr [esp+0x148], 0
        call ext_00665010
        add esp, 4
        push eax
        lea ecx, [esp+4]
        call dword ptr [mem_00924FDC]
        mov eax, [esp+0x14c]
        push eax
        lea ecx, [esp+0x20]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp+0x1c]
        push ecx
        mov byte ptr [esp+0x148], 1
        call ext_00665010
        add esp, 4
        push eax
        lea ecx, [esp+0x20]
        call dword ptr [mem_00924FDC]
        lea edx, [esp]
        push edx
        lea eax, [esp+0x20]
        push eax
        call ext_00664B20
        add esp, 8
        test al, al
        mov byte ptr [esp+0x144], 0
        lea ecx, [esp+0x1c]
        je L1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp]
        mov dword ptr [esp+0x144], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov al, 1
        mov ecx, [esp+0x13c]
        mov fs:[0], ecx
        add esp, 0x148
        ret 4
    L1:
        call dword ptr [mem_00924FF4]
        lea ecx, [esp]
        mov dword ptr [esp+0x144], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, [esp+0x13c]
        xor al, al
        mov fs:[0], ecx
        add esp, 0x148
        ret 4
    }
}

// [0x00462BA0] sub_00462BA0 (58 bytes)
extern "C" void ext_00447530();
extern "C" void ext_00462860();
extern "C" void ext_004629E0();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00462BA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, [esp+0xc]
        push edi
        mov esi, ecx
        call ext_00462860
        test al, al
        je done
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, [esi]
        push eax
        call ext_00447530
        test al, al
        je done
        mov eax, [esi+4]
        mov ecx, [eax+8]
        push ecx
        push edi
        mov ecx, esi
        call ext_004629E0
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00462BE0] sub_00462BE0 (78 bytes)
extern "C" void ext_00447540();
extern "C" void ext_00462A20();
extern "C" __declspec(naked) void __fastcall fn_00462BE0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00462860
        test al, al
        je L_END
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00447530
        test al, al
        je L_END
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00447540
        test al, al
        jne L_END
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00462A20
    L_END:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00462C30] sub_00462C30 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_00462C30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00462860
        test al, al
        je L_END
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00447530
        test al, al
        je L_END
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi]
        push eax
        call ext_00447540
        test al, al
        jne L_END
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        push ecx
        push edi
        mov ecx, esi
        call ext_004629E0
    L_END:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00462C80] sub_00462C80 (137 bytes)
extern "C" void ext_00447500();
extern "C" void ext_00447530();
extern "C" void ext_00447540();
extern "C" void ext_00462860();
extern "C" void ext_00462980();
extern "C" int mem_00924FF0;
extern "C" int mem_009255E0;
extern "C" __declspec(naked) void __fastcall fn_00462C80(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, [esp+0xc]
        push edi
        mov esi, ecx
        call ext_00462860
        test al, al
        je done
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, [esi]
        push eax
        call ext_00447530
        test al, al
        jne l1
        mov eax, [esi+4]
        mov ecx, [eax+0xc]
        push ecx
        push edi
        mov ecx, esi
        call ext_00462980
    l1:
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, [esi]
        push eax
        call ext_00447540
        test al, al
        je done
        mov edx, [esi+4]
        cmp dword ptr [edx+0xc], 0
        je done
        push 4
        push 0x938d28
        push 0x938e24
        push 0
        call dword ptr [mem_009255E0]
        cmp eax, 6
        je l2
        mov eax, [esi+4]
        cmp dword ptr [eax+0xc], 2
        jne done
    l2:
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, [esi]
        push eax
        call ext_00447500
    done:
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00404F00();
extern "C" void ext_0046C090();
extern "C" void ext_00665870();
extern "C" void ext_00666200();
extern "C" int mem_00925694;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

// [0x00460E00] sub_00460E00 (295 bytes)
extern "C" __declspec(naked) void __fastcall fn_00460E00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88066b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 54h
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 19ch]
        push 0f0h
        push eax
        call dword ptr [mem_00925694]
        test eax, eax
        je L_true
        call ext_00665870
        mov ecx, eax
        call ext_0046C090
        mov ecx, dword ptr [esi + 278h]
        cmp ecx, eax
        jge L_else
        sub eax, ecx
        push eax
        lea ecx, [esp + 40h]
        push ecx
        call ext_00404F00
        push eax
        lea edx, [esp + 2ch]
        push 0x938640
        push edx
        mov dword ptr [esp + 74h], 0
        call dword ptr [mem_00924FCC]
        push 0x938610
        push eax
        lea eax, [esp + 20h]
        push eax
        mov byte ptr [esp + 80h], 1
        call dword ptr [mem_00924ECC]
        add esp, 20h
        lea ecx, [esp + 20h]
        mov byte ptr [esp + 60h], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 3ch]
        mov byte ptr [esp + 60h], 4
        call dword ptr [mem_00924FF4]
        push 0
        push 4
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        cmp eax, 6
        mov dword ptr [esp + 60h], -1
        lea ecx, [esp + 4]
        je L_yes
        call dword ptr [mem_00924FF4]
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 54h]
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret
    L_yes:
        call dword ptr [mem_00924FF4]
    L_else:
        mov ecx, dword ptr [esi + 278h]
        push ecx
        call ext_00665870
        mov ecx, eax
        call ext_00666200
        mov edx, dword ptr [esi + 278h]
        mov dword ptr [esi + 27ch], edx
    L_true:
        mov ecx, dword ptr [esp + 58h]
        mov al, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 60h
        ret
    }
}

// [0x004664A0] sub_004664A0 (298 bytes)
extern "C" __declspec(naked) void __fastcall fn_004664A0(void* self) {
    __asm {
        push -1
        push 0x8817a3
        mov eax, dword ptr fs:[0]
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00466360
        push 0x120
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x2c], 0
        je short L_null
        push 0
        mov ecx, eax
        call ext_004481F0
        jmp short L_store
L_null:
        xor eax, eax
L_store:
        mov dword ptr [esi + 0xd8], eax
        mov ecx, dword ptr [mem_00ACDB40]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x13c]
        push ecx
        push 0x16a
        mov ecx, eax
        mov dword ptr [esp + 0x34], 0xffffffff
        call edx
        mov ecx, dword ptr [esi + 0xd8]
        push 0x939cc8
        call ext_006A5F50
        push 0x939cac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0xd8]
        lea ecx, [eax + 0x74]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 8]
        push edx
        mov dword ptr [esp + 0x30], 1
        call eax
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xd8]
        mov edx, dword ptr [ecx + 0x20]
        push edx
        call dword ptr [mem_009255E4]
        mov ecx, dword ptr [esi + 0xd8]
        push 0
        call ext_006A6454
        mov ecx, dword ptr [esi + 0xd8]
        push 5
        call ext_006A5E72
        mov eax, dword ptr [esi + 0xd8]
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_0092568C]
        mov esi, dword ptr [esi + 0xd8]
        test esi, esi
        je short L_zero
        add esi, 0x74
        jmp short L_end
L_zero:
        xor esi, esi
L_end:
        call ext_00594000
        mov edx, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [edx + 0x558], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00461190] sub_00461190 (81 bytes)
extern "C" void ext_00460E00();
extern "C" void ext_00666200();
extern "C" __declspec(naked) void __fastcall fn_00461190(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x19c]
        push 0xf0
        push eax
        call edi
        test eax, eax
        je L_461190_else
        mov ecx, esi
        call ext_00460E00
        test al, al
        jne L_461190_end
        mov ecx, dword ptr [esi + 0x19c]
        push 0x0
        push 0x0
        push 0xf1
        push ecx
        call edi
        pop edi
        pop esi
        ret
L_461190_else:
        push -1
        call ext_00665870
        mov ecx, eax
        call ext_00666200
L_461190_end:
        pop edi
        pop esi
        ret
    }
}

// [0x00463B70] sub_00463B70 (385 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A63C4();
extern "C" void ext_006A6622();
extern "C" int mem_00939194;
extern "C" int mem_009391AC;
extern "C" void ext_00880DB3();

extern "C" __declspec(naked) void __fastcall fn_00463B70(void* self) {
    __asm {
        push -1
        push offset ext_00880DB3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], offset mem_009391AC
        mov dword ptr [esi + 0x74], offset mem_00939194
        lea ecx, [esi + 0x5c8]
        mov dword ptr [esp + 0x14], 0x11
        call ext_006A5DFA
        lea ecx, [esi + 0x574]
        mov byte ptr [esp + 0x14], 0x10
        call ext_006A5DFA
        lea ecx, [esi + 0x520]
        mov byte ptr [esp + 0x14], 0xf
        call ext_006A5DFA
        lea ecx, [esi + 0x4cc]
        mov byte ptr [esp + 0x14], 0xe
        call ext_006A5DFA
        lea ecx, [esi + 0x478]
        mov byte ptr [esp + 0x14], 0xd
        call ext_006A5DFA
        lea ecx, [esi + 0x424]
        mov byte ptr [esp + 0x14], 0xc
        call ext_006A5DFA
        mov eax, dword ptr [esi + 0x418]
        xor ebx, ebx
        cmp eax, ebx
        je skip_free
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_free:
        lea ecx, [esi + 0x3c0]
        mov dword ptr [esi + 0x418], ebx
        mov dword ptr [esi + 0x41c], ebx
        mov dword ptr [esi + 0x420], ebx
        mov byte ptr [esp + 0x14], 0xa
        call ext_006A5DFA
        lea ecx, [esi + 0x36c]
        mov byte ptr [esp + 0x14], 0x9
        call ext_006A5DFA
        lea ecx, [esi + 0x318]
        mov byte ptr [esp + 0x14], 0x8
        call ext_006A5DFA
        lea ecx, [esi + 0x2c4]
        mov byte ptr [esp + 0x14], 0x7
        call ext_006A63C4
        lea ecx, [esi + 0x270]
        mov byte ptr [esp + 0x14], 0x6
        call ext_006A5F2C
        lea ecx, [esi + 0x21c]
        mov byte ptr [esp + 0x14], 0x5
        call ext_006A5F38
        lea ecx, [esi + 0x1c8]
        mov byte ptr [esp + 0x14], 0x4
        call ext_006A5F38
        lea ecx, [esi + 0x174]
        mov byte ptr [esp + 0x14], 0x3
        call ext_006A6622
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x14], 0x2
        call ext_006A5F38
        lea ecx, [esi + 0xcc]
        mov byte ptr [esp + 0x14], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x14], bl
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004605F0] sub_004605F0 (387 bytes)
extern "C" void ext_00416820();
extern "C" void ext_00416CA0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5E0C();
extern "C" void ext_006A5E12();
extern "C" __declspec(naked) void __fastcall fn_004605F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008802b2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_006A5E12
        mov dword ptr [esi], 0x0093822c
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi + 0xac], 0
        mov dword ptr [esi + 0xb0], 0
        mov eax, dword ptr [esp + 0x1c]
        lea edi, [esi + 0xb8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 0xb4], eax
        call ext_006A5C6E
        mov dword ptr [edi], 0x009287e4
        lea edi, [esi + 0x10c]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x009287e4
        lea edi, [esi + 0x160]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 4
        call ext_006A5C6E
        mov dword ptr [edi], 0x009287e4
        push 0x230
        mov byte ptr [esp + 0x18], 5
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 6
        je L_skip1
        mov ecx, eax
        call ext_00416CA0
        mov edi, eax
        jmp L_join1
    L_skip1:
        xor edi, edi
    L_join1:
        mov ecx, dword ptr [esi + 0xac]
        cmp edi, ecx
        mov byte ptr [esp + 0x14], 5
        je L_skip2
        test ecx, ecx
        je L_skip2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push 1
        call eax
    L_skip2:
        push 0x1dc
        mov dword ptr [esi + 0xac], edi
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 7
        je L_skip3
        mov ecx, eax
        call ext_00416820
        mov edi, eax
        jmp L_join3
    L_skip3:
        xor edi, edi
    L_join3:
        mov ecx, dword ptr [esi + 0xb0]
        cmp edi, ecx
        mov byte ptr [esp + 0x14], 5
        je L_skip4
        test ecx, ecx
        je L_skip4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push 1
        call eax
    L_skip4:
        mov dword ptr [esi + 0xb0], edi
        mov ecx, dword ptr [esi + 0xac]
        push ecx
        mov ecx, esi
        call ext_006A5E0C
        mov edx, dword ptr [esi + 0xb0]
        push edx
        mov ecx, esi
        call ext_006A5E0C
        mov eax, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esi + 0xb4]
        mov dword ptr [eax + 0x88], ecx
        mov eax, dword ptr [esi + 0xb4]
        mov edx, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edx + 0x184], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" int mem_00881B64;
extern "C" int mem_0092F14C;
extern "C" int mem_009242FC;
extern "C" int mem_00924858;
extern "C" int mem_00924B84;
extern "C" int mem_00924B80;
extern "C" int mem_00924B7C;
extern "C" int mem_00924930;
extern "C" int mem_00924B78;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_0092431C;
extern "C" int mem_00924B74;

// [0x004673E0] sub_004673E0 (449 bytes)
extern "C" __declspec(naked) void __fastcall fn_004673E0(void* self) {
    __asm {
        push -1
        push offset mem_00881B64
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242FC]
        xor ebx, ebx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x20], ebx
        call dword ptr [mem_009242FC]
        mov esi, dword ptr [esp + 0x30]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x6c]
        push 4
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x28], 1
        call edx
        test eax, eax
        je L_0046757C
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924858]
        test al, al
        jne L_0046757C
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x6c]
        push 3
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        test eax, eax
        je L_0046757C
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924858]
        test al, al
        jne L_0046757C
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x3c]
        cmp edi, ebx
        je L_00467483
        mov ecx, edi
        call dword ptr [mem_00924B84]
    L_00467483:
        mov ebp, dword ptr [esp + 0x30]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call dword ptr [mem_00924B80]
        push ebx
        mov ecx, ebp
        call dword ptr [mem_00924B7C]
        mov esi, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x18], ebx
        mov bl, 2
        jmp L_004674B0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_004674B0:
        lea ecx, [esp + 0x18]
        push ecx
        push offset mem_0092F14C
        lea edx, [esp + 0x40]
        push edx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924930]
        cmp dword ptr [esp + 0x18], -1
        mov byte ptr [esp + 0x28], bl
        je L_00467546
        test edi, edi
        je L_00467525
        mov ecx, edi
        call dword ptr [mem_00924858]
        test al, al
        je L_00467525
        push 1
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924B78]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x2c], 3
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x28], bl
        call dword ptr [mem_009242F4]
        mov ecx, edi
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x14]
        add ecx, 1
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x18], ecx
    L_00467525:
        push 0x2a
        mov ecx, ebp
        call dword ptr [mem_00924B7C]
        lea edx, [esp + 0x38]
        push edx
        mov ecx, ebp
        call dword ptr [mem_00924B80]
        push 0x3b
        mov ecx, ebp
        call dword ptr [mem_00924B7C]
    L_00467546:
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x28], 1
        call dword ptr [mem_009242F4]
        cmp dword ptr [esp + 0x18], -1
        jne L_004674B0
        push 0
        mov ecx, ebp
        call dword ptr [mem_0092431C]
        sub eax, 1
        push eax
        mov ecx, ebp
        call dword ptr [mem_00924B74]
        add dword ptr [esi + 0x14], 1
        pop edi
        pop ebp
    L_0046757C:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x18]
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x004607A0] sub_004607A0 (449 bytes)
extern "C" void ext_006A5C68();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5E54();
extern "C" void ext_006A5E6C();
extern "C" int mem_00925694;
extern "C" int mem_00925690;
extern "C" int mem_0092564C;
extern "C" int mem_00938400;
extern "C" int mem_009383F8;
extern "C" int mem_00928A78;
extern "C" int mem_00928A80;

extern "C" __declspec(naked) void __fastcall fn_004607A0(void* self) {
    __asm {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        push 0x0
        push offset mem_00938400
        mov esi, ecx
        call ext_006A5E6C
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        push 0x474
        push eax
        call edi
        push eax
        call ext_006A5E00
        mov edx, dword ptr [eax + 0x20]
        mov ebx, dword ptr [mem_00925690]
        lea ecx, [esp + 0x2c]
        push ecx
        push edx
        call ebx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call ext_006A5E54
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x1c]
        push ecx
        push edx
        call ebx
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push 0x0
        sub ecx, eax
        add ecx, 0x22
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        sub edx, ecx
        push edx
        push eax
        push ecx
        push 0x0
        mov ecx, esi
        call ext_006A5E4E
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0xc], eax
        add eax, 0x3c
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x38]
        add eax, 0x7
        push 0x49e
        mov dword ptr [esp + 0x14], eax
        push esi
        add eax, 0x14
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esi + 0xb8]
        mov eax, dword ptr [eax + 0x13c]
        lea ecx, [esi + 0xb8]
        push 0x50010000
        push offset mem_009383F8
        call eax
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0x31
        push ecx
        call edi
        push eax
        call ext_006A5C68
        test eax, eax
        je L_00460880
        mov eax, dword ptr [eax + 0x4]
    L_00460880:
        mov edx, dword ptr [esi + 0xd8]
        push 0x1
        push eax
        push 0x30
        push edx
        call edi
        mov ebx, dword ptr [mem_0092564C]
        push 0x0
        push 0x43
        lea eax, [esp + 0x14]
        push eax
        call ebx
        mov edx, dword ptr [esi + 0x10c]
        mov edx, dword ptr [edx + 0x13c]
        push 0x49f
        push esi
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esi + 0x10c]
        push 0x50010000
        push offset mem_00928A78
        call edx
        mov eax, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0x31
        push eax
        call edi
        push eax
        call ext_006A5C68
        test eax, eax
        je L_004608E1
        mov eax, dword ptr [eax + 0x4]
    L_004608E1:
        mov ecx, dword ptr [esi + 0x12c]
        push 0x1
        push eax
        push 0x30
        push ecx
        call edi
        push 0x0
        push 0x43
        lea edx, [esp + 0x14]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x160]
        mov eax, dword ptr [eax + 0x13c]
        push 0x4a0
        push esi
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esi + 0x160]
        push 0x50010000
        push offset mem_00928A80
        call eax
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0x31
        push ecx
        call edi
        push eax
        call ext_006A5C68
        test eax, eax
        je L_0046093C
        mov eax, dword ptr [eax + 0x4]
    L_0046093C:
        mov edx, dword ptr [esi + 0x180]
        push 0x1
        push eax
        push 0x30
        push edx
        call edi
        mov ecx, dword ptr [esi + 0xac]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x16c]
        call edx
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret
    }
}

extern "C" void ext_00419940();
extern "C" void ext_004199B0();
extern "C" void ext_00430E20();
extern "C" void ext_006A63FA();
extern "C" int mem_00925694;
extern "C" int mem_009242F4;
extern "C" int mem_00924494;
extern "C" int mem_00924300;
extern "C" int mem_009241C4;
extern "C" int mem_009241C8;

// [0x00463710] sub_00463710 (451 bytes)
extern "C" __declspec(naked) void __fastcall fn_00463710(void* self) {
    __asm {
        push -1
        push 0x880cb3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x188
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 2
        push -1
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2e4]
        push 0x100c
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x2e4]
        add eax, 1
        push 2
        lea ebp, [eax - 1]
        push ebp
        push 0x100c
        push ecx
        call edi
        push 1
        push ebp
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esi + 0x2c4]
        call ext_006A63FA
        lea eax, [esp + 0x10]
        xor ebp, ebp
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1a0], ebp
        call ext_00419940
        push 0x939174
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x1a0], 1
        call ext_004199B0
        test al, al
        lea ecx, [esp + 0x18]
        jne short L_found
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 0x188]
        mov dword ptr fs:[0], ecx
        add esp, 0x194
        ret
    L_found:
        push ebx
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924494]
        push 0x93916c
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x20]
        push eax
        mov byte ptr [esp + 0x1ac], 2
        call ext_00430E20
        add esp, 0xc
        lea ecx, [esp + 0x58]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009241C4]
        mov ebx, eax
        cmp ebx, -1
        je short L_done
        jmp short L_loop
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_loop:
        mov ecx, dword ptr [esi + 0x2e4]
        lea eax, [esp + 0x24]
        push eax
        push 0
        push 0x1007
        lea edx, [esp + 0x90]
        push ecx
        mov dword ptr [esp + 0x48], edx
        mov dword ptr [esp + 0x34], 1
        mov dword ptr [esp + 0x3c], 0
        mov dword ptr [esp + 0x38], ebp
        call edi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924300]
        lea edx, [esp + 0x24]
        push edx
        push 0
        mov dword ptr [esp + 0x40], eax
        mov eax, dword ptr [esi + 0x2e4]
        push 0x1006
        push eax
        mov dword ptr [esp + 0x3c], 1
        call edi
        lea ecx, [esp + 0x58]
        push ecx
        push ebx
        add ebp, 1
        call dword ptr [mem_009241C8]
        test eax, eax
        jne short L_loop
    L_done:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x198]
        pop ebx
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x194
        ret
    }
}

extern "C" void ext_0046F860();
extern "C" void ext_0065D0A0();
extern "C" void ext_0056B670();
extern "C" void ext_00478030();
extern "C" int mem_00A31AC8;

// [0x0046FEA0] sub_0046FEA0 (167 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046FEA0(void* self, int edx_unused, float a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_0046F860
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        __asm _emit 0x7A __asm _emit 0x06 // jp +6
        fstp dword ptr [esp + 0xc]
        __asm _emit 0xEB __asm _emit 0x02 // jmp +2
        fstp st(0)
        mov ecx, dword ptr [esi + 0xf8]
        fld dword ptr [ecx + 0x138]
        push ecx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_0065D0A0
        mov eax, dword ptr [esi + 0xcc]
        fld dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x26c]
        fst dword ptr [ecx + 0x1cc]
        sub esp, 0x18
        fld qword ptr [mem_00A31AC8]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x1c]
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        __asm _emit 0x75 __asm _emit 0x23 // jne +0x23
        fld dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0xcc]
        mov ecx, dword ptr [edx + 0x26c]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call ext_00478030
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00467670] sub_00467670 (258 bytes)
extern "C" void ext_00663880();
extern "C" void ext_00663C00();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A64F6();
extern "C" int mem_00924FC8;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924300;
extern "C" int mem_0093A090;

extern "C" __declspec(naked) void __fastcall fn_00467670(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87621b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, dword ptr [esp + 0x50]
        push edi
        mov edi, dword ptr [mem_00924FC8]
        push 0x928b5d
        push esi
        call edi
        add esp, 8
        test al, al
        je L_exit
        push ebx
        push esi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x2c]
        push eax
        call ext_00663C00
        push 0x928b5d
        push eax
        mov byte ptr [esp + 0x5c], 1
        call edi
        add esp, 0x10
        lea ecx, [esp + 0x28]
        mov bl, al
        mov byte ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FF4]
        test bl, bl
        pop ebx
        je L_skip
        lea ecx, [esp + 0x24]
        push esi
        push ecx
        call ext_00663880
        add esp, 8
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x4c], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0
        call dword ptr [mem_00924FF4]
    L_skip:
        call ext_006A5EDE
        mov esi, dword ptr [eax + 4]
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x50]
        push eax
        call dword ptr [mem_00924300]
        mov edx, dword ptr [mem_0093A090]
        push eax
        push edx
        mov ecx, esi
        call ext_006A64F6
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
    L_exit:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 8
    }
}

extern "C" void ext_00662B20();
extern "C" void ext_00663690();
extern "C" void ext_00679BE0();
extern "C" void ext_00679C60();
extern "C" int mem_00881184;
extern "C" int mem_0092423C;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924238;
extern "C" int mem_00924ECC;
extern "C" int mem_00939750;
extern "C" int mem_0093973C;

// [0x00464AC0] sub_00464AC0 (285 bytes)
extern "C" __declspec(naked) void __fastcall fn_00464AC0(void* self) {
    __asm {
        push    -1
        push    offset mem_00881184
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x158
        call    ext_00679BE0
        mov     byte ptr [eax + 1], 1
        push    0x104
        lea     eax, [esp + 0x58]
        push    eax
        push    0
        call    dword ptr [mem_0092423C]
        lea     ecx, [esp]
        call    dword ptr [mem_00924FE8]
        push    0
        lea     ecx, [esp + 4]
        push    ecx
        lea     edx, [esp + 0x5C]
        push    edx
        mov     dword ptr [esp + 0x16C], 0
        call    ext_00663690
        lea     eax, [esp + 0xC]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        call    ext_00662B20
        add     esp, 0x14
        push    eax
        lea     ecx, [esp + 4]
        mov     byte ptr [esp + 0x164], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x160], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp]
        call    dword ptr [mem_00924FF0]
        push    eax
        call    dword ptr [mem_00924238]
        push    offset mem_00939750
        lea     edx, [esp + 4]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    dword ptr [mem_00924ECC]
        add     esp, 0xC
        mov     byte ptr [esp + 0x160], 2
        call    ext_00679BE0
        lea     ecx, [esp + 0x1C]
        push    ecx
        lea     ecx, [eax + 4]
        call    dword ptr [mem_00924FDC]
        push    offset mem_0093973C
        call    ext_00679C60
        add     esp, 4
        lea     ecx, [esp + 0x1C]
        mov     byte ptr [esp + 0x160], 0
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp]
        mov     dword ptr [esp + 0x160], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x158]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x164
        ret
    }
}

// [0x004653B0] sub_004653B0 (151 bytes)
extern "C" void ext_00465290();
extern "C" void ext_00467670();
extern "C" int mem_0093A0A8;
extern "C" __declspec(naked) void __fastcall fn_004653B0(void* self) {
    __asm {
        push -1
        push 0x8812d2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [mem_0093A0A8]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [mem_00ACDB40]
        lea edx, [esp + 0x4]
        push edx
        lea eax, [esp + 0x34]
        push eax
        mov byte ptr [esp + 0x30], 1
        call ext_00467670
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x28], 0
        call dword ptr [mem_009242F4]
        mov ecx, esi
        call ext_00465290
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00465460] sub_00465460 (216 bytes)
extern "C" void ext_00464AC0();
extern "C" void ext_006A69D6();
extern "C" int mem_009242FC;
extern "C" int mem_00924234;
extern "C" int mem_009242F8;
extern "C" __declspec(naked) void __fastcall fn_00465460(void* self) {
    __asm {
        push -1
        push 0x881315
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0x14], esi
        call ext_006A69D6
        lea edi, [esi + 0xa8]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esi], 0x93957c
        call dword ptr [mem_009242FC]
        lea ebp, [esi + 0xac]
        mov ecx, ebp
        call dword ptr [mem_009242FC]
        lea ebx, [esi + 0xb0]
        mov ecx, ebx
        call dword ptr [mem_009242FC]
        push 0x464890
        mov byte ptr [esp + 0x20], 3
        call dword ptr [mem_00924234]
        push 0x9399a8
        mov ecx, edi
        mov byte ptr [esi + 0xa4], 0
        mov byte ptr [esi + 0xa5], 1
        mov byte ptr [esi + 0xa6], 1
        call dword ptr [mem_009242F8]
        push 0x9399bc
        mov ecx, ebp
        call dword ptr [mem_009242F8]
        push 0x939b00
        mov ecx, ebx
        call dword ptr [mem_009242F8]
        mov ecx, esi
        mov dword ptr [esi + 0xb4], 0
        mov dword ptr [esi + 0x6c], 1
        call ext_00464AC0
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0046A370();
extern "C" void ext_0046A490();
extern "C" void ext_00475060();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_0092C530;
extern "C" int mem_009CDF20;

// [0x0046A970] sub_0046A970 (508 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046A970(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x3ffffffe
        jb L_0046a9ed
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_0046a9ed:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_0046A490
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_0046aa27
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_0046aa49
    L_0046aa27:
        cmp byte ptr [esp + 0x68], 0x0
        je L_0046aa3b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_0046aa49
        mov dword ptr [eax], ebp
        jmp L_0046aa49
    L_0046aa3b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_0046aa49
        mov dword ptr [eax + 0x8], ebp
    L_0046aa49:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x10], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_0046ab45
        jmp L_0046aa60
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_0046aa60:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_0046aaba
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x10], 0x0
        jne L_0046aa8b
        mov byte ptr [ecx + 0x10], bl
        mov byte ptr [edx + 0x10], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x10], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_0046ab35
    L_0046aa8b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_0046aa9a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0046A370
    L_0046aa9a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x10], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x10], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00475060
        jmp L_0046ab35
    L_0046aaba:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x10], 0x0
        jne L_0046aad8
        mov byte ptr [ecx + 0x10], bl
        mov byte ptr [edx + 0x10], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x10], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_0046ab35
    L_0046aad8:
        cmp esi, dword ptr [ecx]
        jne L_0046aae6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0046A370
    L_0046aae6:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x10], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x10], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x11], 0x0
        jne L_0046ab0f
        mov dword ptr [edx + 0x4], eax
    L_0046ab0f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_0046ab22
        mov dword ptr [edx + 0x4], ecx
        jmp L_0046ab30
    L_0046ab22:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_0046ab2d
        mov dword ptr [edx], ecx
        jmp L_0046ab30
    L_0046ab2d:
        mov dword ptr [edx + 0x8], ecx
    L_0046ab30:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_0046ab35:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x10], 0x0
        lea eax, [esi + 0x4]
        je L_0046aa60
    L_0046ab45:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x10], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

extern "C" void ext_0046A8E0();
extern "C" void ext_0046A970();

// [0x0046AB70] sub_0046AB70 (185 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046AB70(void* self) {
    __asm {
        sub     esp, 0Ch
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 4]
        mov     eax, dword ptr [esi + 4]
        cmp     byte ptr [eax + 11h], 0
        mov     cl, 1
        mov     byte ptr [esp + 0Ch], cl
        jne     loc_46ABAE
        mov     edx, dword ptr [ebp]
    loc_46AB91:
        cmp     edx, dword ptr [eax + 0Ch]
        mov     esi, eax
        setb    cl
        test    cl, cl
        mov     byte ptr [esp + 0Ch], cl
        je      loc_46ABA5
        mov     eax, dword ptr [eax]
        jmp     loc_46ABA8
    loc_46ABA5:
        mov     eax, dword ptr [eax + 8]
    loc_46ABA8:
        cmp     byte ptr [eax + 11h], 0
        je      loc_46AB91
    loc_46ABAE:
        test    cl, cl
        mov     edx, esi
        mov     dword ptr [esp + 14h], edx
        mov     dword ptr [esp + 10h], edi
        je      loc_46ABF9
        mov     eax, dword ptr [edi + 4]
        cmp     esi, dword ptr [eax]
        lea     ecx, [esp + 10h]
        jne     loc_46ABF0
        push    ebp
        push    esi
        push    1
        push    ecx
    loc_46ABCC:
        mov     ecx, edi
        call    ext_0046A970
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [ecx + 4]
        pop     edi
        pop     esi
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], ecx
        mov     byte ptr [eax + 8], 1
        pop     ebp
        add     esp, 0Ch
        ret     8
    loc_46ABF0:
        call    ext_0046A8E0
        mov     edx, dword ptr [esp + 14h]
    loc_46ABF9:
        mov     eax, dword ptr [edx + 0Ch]
        cmp     eax, dword ptr [ebp]
        jae     loc_46AC0F
        mov     ecx, dword ptr [esp + 0Ch]
        push    ebp
        push    esi
        push    ecx
        lea     edx, [esp + 1Ch]
        push    edx
        jmp     loc_46ABCC
    loc_46AC0F:
        mov     eax, dword ptr [esp + 1Ch]
        mov     ecx, dword ptr [esp + 10h]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], edx
        mov     byte ptr [eax + 8], 0
        pop     ebp
        add     esp, 0Ch
        ret     8
    }
}

// [0x00463970] sub_00463970 (512 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" __declspec(naked) void* __fastcall fn_00463970(void* self, int edx_unused, void* arg1) {
    __asm {
        push -1
        push 0x880db3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x20f
        mov dword ptr [esp + 0x14], esi
        call ext_006A5FC2
        mov dword ptr [esi + 0x74], 0x93331c
        lea edi, [esi + 0x78]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], 0x9391ac
        mov dword ptr [esi + 0x74], 0x939194
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xcc]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x120]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x174]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x9331d4
        lea edi, [esi + 0x1c8]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x21c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x270]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0x2c4]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 7
        call ext_006A5C6E
        mov dword ptr [edi], 0x92e19c
        lea edi, [esi + 0x318]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 8
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x36c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 9
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x3c0]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xa
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        mov dword ptr [esi + 0x418], ebx
        mov dword ptr [esi + 0x41c], ebx
        mov dword ptr [esi + 0x420], ebx
        lea edi, [esi + 0x424]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xc
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x478]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xd
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x4cc]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xe
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x520]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0xf
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x574]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x10
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x5c8]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x11
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edi], 0x9287e4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0046A550] sub_0046A550 (696 bytes)
extern "C" void ext_0046A370();
extern "C" void ext_00474FF0();
extern "C" void ext_00475060();
extern "C" void ext_005014B0();
extern "C" void ext_0065B120();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0046A550(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 088f4c2h
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 18h]
        sub esp, 48h
        cmp byte ptr [eax + 11h], 0
        push ebp
        mov ebp, ecx
        je L46A5CE
        push 0929218h
        lea ecx, [esp + 0ch]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 24h]
        mov dword ptr [esp + 54h], 0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 8]
        push eax
        lea ecx, [esp + 34h]
        mov byte ptr [esp + 58h], 1
        mov dword ptr [esp + 28h], 0928ecch
        call dword ptr [mem_00924FE0]
        push 09ce164h
        lea ecx, [esp + 28h]
        push ecx
        mov byte ptr [esp + 5ch], 0
        mov dword ptr [esp + 2ch], 0928ee4h
        call ext_006A6DD2
L46A5CE:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 6ch]
        mov dword ptr [esp + 10h], ebx
        call ext_00474FF0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 11h], 0
        je L46A5ED
        mov edi, dword ptr [ebx + 8]
        jmp L46A605
L46A5ED:
        mov edx, dword ptr [ebx + 8]
        cmp byte ptr [edx + 11h], 0
        je L46A5FA
        mov edi, eax
        jmp L46A605
L46A5FA:
        mov ecx, dword ptr [esp + 70h]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 8]
        jne L46A670
L46A605:
        cmp byte ptr [edi + 11h], 0
        mov esi, dword ptr [ebx + 4]
        jne L46A611
        mov dword ptr [edi + 4], esi
L46A611:
        mov eax, dword ptr [ebp + 4]
        cmp dword ptr [eax + 4], ebx
        jne L46A61E
        mov dword ptr [eax + 4], edi
        jmp L46A629
L46A61E:
        cmp dword ptr [esi], ebx
        jne L46A626
        mov dword ptr [esi], edi
        jmp L46A629
L46A626:
        mov dword ptr [esi + 8], edi
L46A629:
        mov ebx, dword ptr [ebp + 4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 10h]
        jne L46A649
        cmp byte ptr [edi + 11h], 0
        je L46A63E
        mov eax, esi
        jmp L46A647
L46A63E:
        push edi
        call ext_005014B0
        add esp, 4
L46A647:
        mov dword ptr [ebx], eax
L46A649:
        mov ebx, dword ptr [ebp + 4]
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ebx + 8], ecx
        jne L46A6C7
        cmp byte ptr [edi + 11h], 0
        je L46A662
        mov eax, esi
        mov dword ptr [ebx + 8], eax
        jmp L46A6C7
L46A662:
        push edi
        call ext_0065B120
        add esp, 4
        mov dword ptr [ebx + 8], eax
        jmp L46A6C7
L46A670:
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 8]
        jne L46A680
        mov esi, ecx
        jmp L46A69A
L46A680:
        cmp byte ptr [edi + 11h], 0
        mov esi, dword ptr [ecx + 4]
        jne L46A68C
        mov dword ptr [edi + 4], esi
L46A68C:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edx + 4], ecx
L46A69A:
        mov eax, dword ptr [ebp + 4]
        cmp dword ptr [eax + 4], ebx
        jne L46A6A7
        mov dword ptr [eax + 4], ecx
        jmp L46A6B5
L46A6A7:
        mov eax, dword ptr [ebx + 4]
        cmp dword ptr [eax], ebx
        jne L46A6B2
        mov dword ptr [eax], ecx
        jmp L46A6B5
L46A6B2:
        mov dword ptr [eax + 8], ecx
L46A6B5:
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov dl, byte ptr [ebx + 10h]
        mov al, byte ptr [ecx + 10h]
        mov byte ptr [ecx + 10h], dl
        mov byte ptr [ebx + 10h], al
L46A6C7:
        mov eax, dword ptr [esp + 10h]
        mov bl, 1
        cmp byte ptr [eax + 10h], bl
        jne L46A7C8
        mov ecx, dword ptr [ebp + 4]
        cmp edi, dword ptr [ecx + 4]
        je L46A7C5
L46A6E2:
        cmp byte ptr [edi + 10h], bl
        jne L46A7C5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L46A754
        mov eax, dword ptr [esi + 8]
        cmp byte ptr [eax + 10h], 0
        jne L46A70C
        mov byte ptr [eax + 10h], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 10h], 0
        call ext_0046A370
        mov eax, dword ptr [esi + 8]
L46A70C:
        cmp byte ptr [eax + 11h], 0
        jne L46A784
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 10h], bl
        jne L46A721
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 10h], bl
        je L46A780
L46A721:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 10h], bl
        jne L46A73B
        mov byte ptr [edx + 10h], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 10h], 0
        call ext_00475060
        mov eax, dword ptr [esi + 8]
L46A73B:
        mov cl, byte ptr [esi + 10h]
        mov byte ptr [eax + 10h], cl
        mov byte ptr [esi + 10h], bl
        mov edx, dword ptr [eax + 8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 10h], bl
        call ext_0046A370
        jmp L46A7C5
L46A754:
        cmp byte ptr [eax + 10h], 0
        jne L46A76B
        mov byte ptr [eax + 10h], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 10h], 0
        call ext_00475060
        mov eax, dword ptr [esi]
L46A76B:
        cmp byte ptr [eax + 11h], 0
        jne L46A784
        mov edx, dword ptr [eax + 8]
        cmp byte ptr [edx + 10h], bl
        jne L46A797
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 10h], bl
        jne L46A797
L46A780:
        mov byte ptr [eax + 10h], 0
L46A784:
        mov edx, dword ptr [ebp + 4]
        mov edi, esi
        cmp edi, dword ptr [edx + 4]
        mov esi, dword ptr [esi + 4]
        jne L46A6E2
        jmp L46A7C5
L46A797:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 10h], bl
        jne L46A7AF
        mov byte ptr [edx + 10h], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 10h], 0
        call ext_0046A370
        mov eax, dword ptr [esi]
L46A7AF:
        mov cl, byte ptr [esi + 10h]
        mov byte ptr [eax + 10h], cl
        mov byte ptr [esi + 10h], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 10h], bl
        call ext_00475060
L46A7C5:
        mov byte ptr [edi + 10h], bl
L46A7C8:
        mov eax, dword ptr [esp + 10h]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 8]
        add esp, 4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L46A7E5
        add eax, -1
        mov dword ptr [ebp + 8], eax
L46A7E5:
        mov ecx, dword ptr [esp + 60h]
        mov eax, dword ptr [esp + 5ch]
        mov edx, dword ptr [esp + 64h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 4ch]
        mov dword ptr [eax + 4], edx
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 54h
        ret 0ch
    }
}

extern "C" void ext_00679C60();
extern "C" void ext_006A6844();
extern "C" void ext_006A684A();
extern "C" void ext_006A6850();
extern "C" void ext_006A6856();
extern "C" void ext_006A685C();
extern "C" void ext_006A6862();
extern "C" void ext_006A6868();
extern "C" void ext_006A686E();
extern "C" void ext_006A6874();
extern "C" void ext_006A687A();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_009242FC;
extern "C" int mem_00924410;
extern "C" int mem_00924FF8;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FD8;
extern "C" int mem_00924ED0;

// [0x00461960] sub_00461960 (782 bytes)
extern "C" __declspec(naked) void __fastcall fn_00461960(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0088071dh
        mov eax, fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 68h
        push ebx
        push esi
        push edi
        lea ecx, [ebp-28h]
        mov dword ptr [ebp-10h], esp
        call ext_006A687A
        mov dword ptr [ebp-4], 0
        lea ecx, [ebp-58h]
        mov byte ptr [ebp-4], 1
        call dword ptr [mem_00924FE8]
        push 0
        push 0
        push 0
        push 0
        push 1
        push 0
        lea ecx, [ebp-3Ch]
        mov byte ptr [ebp-4], 2
        call ext_006A6874
        mov ecx, dword ptr [ebp+8]
        mov byte ptr [ebp-4], 3
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp+0Ch]
        push 0
        push 0
        push ecx
        push 84000000h
        push eax
        lea ecx, [ebp-3Ch]
        call ext_006A686E
        mov ecx, dword ptr [ebp+10h]
        mov esi, eax
        call dword ptr [mem_00924FF0]
        push 20000000h
        push 0
        push 0
        push 1
        push 0
        push eax
        push 0
        mov ecx, esi
        call ext_006A6868
        mov esi, eax
        test esi, esi
        jne L_461A5B
        push 0093895ch
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FD4]
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp+18h]
        push eax
        call dword ptr [mem_00924FD4]
        lea ecx, [ebp-3Ch]
        mov byte ptr [ebp-4], 2
        call ext_006A6862
        lea ecx, [ebp-58h]
        mov byte ptr [ebp-4], 1
        call dword ptr [mem_00924FF4]
L_461A3A:
        mov dword ptr [ebp-4], -1
L_461A41:
        call ext_006A6844
        xor al, al
        mov ecx, dword ptr [ebp-0Ch]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 14h
L_461A5B:
        mov ecx, dword ptr [ebp+14h]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [ebp-14h]
        call dword ptr [mem_009242F0]
        or edi, -1
        push edi
        push 10000000h
        push 00938928h
        mov ecx, esi
        mov byte ptr [ebp-4], 4
        call ext_006A685C
        push 1
        push 8
        lea ecx, [ebp-14h]
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call ext_006A6856
        mov ebx, dword ptr [esi]
        lea ecx, [ebp-14h]
        add ebx, 5Ch
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, esi
        call edx
        push 1
        push 0
        push 0
        mov ecx, esi
        call ext_006A6850
        lea eax, [ebp-1Ch]
        push eax
        mov ecx, esi
        call ext_006A684A
        test eax, eax
        jne L_461B18
        push 0093895ch
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FD4]
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp+18h]
        push eax
        call dword ptr [mem_00924FD4]
L_461AEE:
        lea ecx, [ebp-14h]
        call dword ptr [mem_009242F4]
        lea ecx, [ebp-3Ch]
        mov byte ptr [ebp-4], 2
        call ext_006A6862
        lea ecx, [ebp-58h]
        mov byte ptr [ebp-4], 1
        call dword ptr [mem_00924FF4]
        mov dword ptr [ebp-4], edi
        jmp L_461A41
L_461B18:
        cmp dword ptr [ebp-1Ch], 0C8h
        je L_461B7C
        lea ecx, [ebp+8]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [ebp-1Ch]
        push ecx
        lea edx, [ebp+8]
        push 00929f48h
        push edx
        mov byte ptr [ebp-4], 5
        call dword ptr [mem_00924410]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+54h]
        add esp, 0Ch
        mov ecx, esi
        call edx
        push 0093895ch
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FD4]
        lea ecx, [ebp-58h]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp+18h]
        push eax
        call dword ptr [mem_00924FD4]
        lea ecx, [ebp+8]
        call dword ptr [mem_009242F4]
        jmp L_461AEE
L_461B7C:
        lea ecx, [ebp-18h]
        call dword ptr [mem_009242FC]
        mov edi, dword ptr [ebp+18h]
        mov byte ptr [ebp-4], 6
        mov bl, 1
        mov edi, edi
L_461B90:
        test bl, bl
        je L_461BBE
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+60h]
        lea ecx, [ebp-18h]
        push ecx
        mov ecx, esi
        call edx
        test eax, eax
        setne bl
        test bl, bl
        je L_461BBE
        lea ecx, [ebp-18h]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FF8]
        jmp L_461B90
L_461BBE:
        mov eax, dword ptr [ebp+8]
        push eax
        lea ecx, [ebp-74h]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [ebp+10h]
        push ecx
        lea ecx, [ebp-74h]
        mov byte ptr [ebp-4], 7
        call dword ptr [mem_00924FD8]
        push 0092b4a4h
        lea ecx, [ebp-74h]
        call dword ptr [mem_00924ED0]
        mov edx, dword ptr [ebp+14h]
        push edx
        lea ecx, [ebp-74h]
        call dword ptr [mem_00924FD8]
        lea ecx, [ebp-74h]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00679C60
        add esp, 4
        lea ecx, [ebp-74h]
        mov byte ptr [ebp-4], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp-18h]
        call dword ptr [mem_009242F4]
        lea ecx, [ebp-14h]
        call dword ptr [mem_009242F4]
        lea ecx, [ebp-3Ch]
        mov byte ptr [ebp-4], 2
        call ext_006A6862
        lea ecx, [ebp-58h]
        mov byte ptr [ebp-4], 1
        call dword ptr [mem_00924FF4]
        mov dword ptr [ebp-4], -1
        call ext_006A6844
        mov ecx, dword ptr [ebp-0Ch]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 14h
L_461C62:
        mov eax, dword ptr [ebp-20h]
        mov dword ptr [ebp-24h], eax
        mov eax, 00461A3Ah
        ret
    }
}

extern "C" void ext_004646A0();
extern "C" void ext_004646B0();
extern "C" void ext_0052EE00();
extern "C" void ext_00530D80();
extern "C" void ext_006A5E00();
extern "C" int mem_00925134;
extern "C" int mem_009256E0;
extern "C" int mem_00925654;
extern "C" int mem_00925694;
extern "C" int mem_00ACDB40;
extern "C" int mem_009256D8;

// [0x004650B0] sub_004650B0 (308 bytes)
extern "C" __declspec(naked) void __fastcall fn_004650B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax + 0x4]
        cmp eax, 0x202
        push edi
        mov edi, ecx
        je L_proc
        cmp eax, 0x201
        je L_proc
        cmp eax, 0x208
        je L_proc
        cmp eax, 0x207
        je L_proc
        cmp eax, 0x205
        je L_proc
        cmp eax, 0x204
        jne L_end
    L_proc:
        push esi
        call ext_0052EE00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xb4]
        call eax
        mov esi, eax
        test esi, esi
        je L_popi
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        je L_inv
        mov ecx, dword ptr [esi + 0x44]
        sub ecx, eax
        sar ecx, 0x2
        jne L_ok
    L_inv:
        call dword ptr [mem_00925134]
    L_ok:
        mov edx, dword ptr [esi + 0x40]
        push ebp
        mov ebp, dword ptr [edx]
        test ebp, ebp
        je L_popbp
        push ebx
        mov ecx, edi
        call ext_004646A0
        mov ecx, edi
        mov bl, al
        call ext_004646B0
        test bl, bl
        jne L_focus
        test al, al
        jne L_focus
        cmp dword ptr [esi + 0x38], 0x0
        jne L_epi
        push 0x1
        mov ecx, esi
        call ext_00530D80
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x18]
        push 0x0
        mov ecx, ebp
        call edx
        call dword ptr [mem_009256E0]
        pop ebx
        pop ebp
        pop esi
        pop edi
        ret 0x4
    L_focus:
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov edi, eax
        test edi, edi
        je L_capture
        mov eax, dword ptr [edi + 0x20]
        mov ebx, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        push 0x87
        push eax
        call ebx
        test al, al
        js L_epi
        mov ecx, dword ptr [edi + 0x20]
        push 0x0
        push 0x0
        push 0x87
        push ecx
        call ebx
        test al, 0x4
        jne L_epi
    L_capture:
        mov edx, dword ptr [mem_00ACDB40]
        mov eax, dword ptr [edx + 0x100]
        mov eax, dword ptr [eax + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        push 0x0
        mov ecx, esi
        call ext_00530D80
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x18]
        push 0x1
        mov ecx, ebp
        call eax
    L_epi:
        pop ebx
    L_popbp:
        pop ebp
    L_popi:
        pop esi
    L_end:
        pop edi
        ret 0x4
    }
}

// [0x00461750] sub_00461750 (507 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_006781F0();
extern "C" void ext_006A64F0();
extern "C" void ext_006A64F6();
extern "C" void ext_007E5230();
extern "C" int mem_008806D3;
extern "C" int mem_00AD6BC8;
extern "C" int mem_0092F150;
extern "C" int mem_009242FC;
extern "C" int mem_0093A074;
extern "C" int mem_0093A068;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00924858;
extern "C" int mem_00924300;
extern "C" int mem_00924FF8;
extern "C" int mem_00924FE8;
extern "C" int mem_00925840;
extern "C" int mem_00925230;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00461750(void* self) {
    __asm {
        push -0x1
        push offset mem_008806D3
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        sub esp, 0x44
        push esi
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [mem_0093A074]
        mov ecx, dword ptr [mem_0093A068]
        xor esi, esi
        push esi
        push eax
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, offset mem_00AD6BC8
        mov dword ptr [esp + 0x60], esi
        call ext_006A64F0
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x54], 0x1
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x50], 0x0
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924858]
        test al, al
        jne L_4617E3
        cmp byte ptr [esp + 0x5C], al
        jne L_4617E3
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x58]
        push eax
        call dword ptr [mem_00924FF8]
        jmp L_46192F
    L_4617E3:
        push edi
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE8]
        lea eax, [esp + 0x20]
        push eax
        mov byte ptr [esp + 0x58], 0x2
        call dword ptr [mem_00925840]
        mov edx, dword ptr [esp + 0x20]
        mov edi, dword ptr [mem_00925230]
        push 0x10
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call edi
        add esp, 0xC
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FF8]
        movzx edx, word ptr [esp + 0x24]
        push 0x10
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call edi
        add esp, 0xC
        push offset mem_0092F150
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
        movzx edx, word ptr [esp + 0x26]
        push 0x10
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call edi
        add esp, 0xC
        push offset mem_0092F150
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
        push offset mem_0092F150
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
    L_461893:
        cmp esi, 0x2
        jne L_4618A7
        push offset mem_0092F150
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
    L_4618A7:
        movzx edx, byte ptr [esp + esi + 0x28]
        push 0x10
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call edi
        add esp, 0xC
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924ED0]
        add esi, 0x1
        cmp esi, 0x8
        jl L_461893
        lea ecx, [esp + 0x60]
        call ext_007E5230
        mov esi, dword ptr [esp + 0x5C]
        push esi
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x5C], 0x3
        call ext_006781F0
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [mem_0093A074]
        push eax
        mov eax, dword ptr [mem_0093A068]
        push edx
        push eax
        mov ecx, offset mem_00AD6BC8
        call ext_006A64F6
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x54], 0x2
        call ext_00493D90
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x0
        call dword ptr [mem_00924FF4]
        pop edi
    L_46192F:
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x48]
        pop esi
        mov fs:[0x0], ecx
        add esp, 0x50
        ret 0x8
    }
}

// [0x00461C70] sub_00461C70 (414 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00461750();
extern "C" int mem_009251E4;
extern "C" void ext_00461510();
extern "C" void ext_004615B0();
extern "C" void ext_00461960();
extern "C" void ext_00679C60();
extern "C" void ext_006A5FA4();
extern "C" int mem_0088076B;
extern "C" int mem_00938970;
extern "C" int mem_0093896C;
extern "C" int mem_00938968;

extern "C" __declspec(naked) void __fastcall fn_00461C70(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push offset mem_0088076B
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        sub esp, 0x200
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x214]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x214], 0
        call ext_00461750
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE8]
        push offset mem_00938970
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x210], 1
        call dword ptr [mem_00924ED0]
        lea edx, [esp + 0x3c]
        push edx
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FD8]
        push offset mem_0093896C
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924ED0]
        push offset mem_00938968
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924ED0]
        mov eax, dword ptr [esi + 0x38]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        call ext_00404F00
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x210], 2
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x20c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE8]
        lea edx, [esp + 0x20]
        push edx
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esi + 0x1c]
        push ecx
        push 0x50
        push esi
        mov ecx, esi
        mov byte ptr [esp + 0x220], 3
        call ext_00461960
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00679C60
        add esp, 0x4
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        cmp dword ptr [esi + 0x38], eax
        pop esi
        jge done_label
        push 0x0
        lea ecx, [esp + 0x74]
        call ext_00461510
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x208], 0x4
        call ext_006A5FA4
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x208], 0x3
        call ext_004615B0
done_label:
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x208], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp]
        mov byte ptr [esp + 0x208], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x208], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x200]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20c
        ret 0x4
    }
}

// [0x00465E00] sub_00465E00 (125 bytes)
extern "C" void ext_00434120();
extern "C" int mem_00924FDC;
extern "C" int mem_00ACDB40;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00465E00(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        lea esi, [ecx + 0x68]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [mem_00ACDB40]
        test eax, eax
        je done
        cmp dword ptr [eax + 0x20], 0
        je done
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00434120
    done:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x1c
    }
}

// [0x00461470] sub_00461470 (35 bytes)
extern "C" void ext_004611F0();
extern "C" void ext_006A5ECC();
extern "C" void ext_006A5EBA();

extern "C" __declspec(naked) void __fastcall fn_00461470(void* self) {
    __asm {
        sub esp, 0x54
        push esi
        mov esi, ecx
        call ext_004611F0
        push esi
        lea ecx, [esp + 0x8]
        call ext_006A5ECC
        lea ecx, [esp + 0x4]
        call ext_006A5EBA
        pop esi
        add esp, 0x54
        ret
    }
}

// [0x00466450] sub_00466450 (75 bytes)
extern "C" void ext_004658E0();
extern "C" void ext_00465DC0();
extern "C" void ext_00465E00();
extern "C" void ext_00465E80();
extern "C" void ext_00465EA0();
extern "C" void ext_00466220();
extern "C" void ext_00465950();
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00466450(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_00465DC0
        mov ecx, esi
        call ext_00466220
        mov ecx, esi
        call ext_004658E0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp+0x20], esp
        push 0x928b5d
        call dword ptr [mem_00924FE4]
        mov ecx, esi
        call ext_00465E00
        mov ecx, esi
        call ext_00465E80
        mov ecx, esi
        call ext_00465EA0
        mov ecx, esi
        pop esi
        add esp, 4
        jmp ext_00465950
    }
}

// [0x00466970] sub_00466970 (188 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00465940();
extern "C" void ext_00465B00();
extern "C" void ext_00465DE0();
extern "C" void ext_00465ED0();
extern "C" void ext_00465F10();
extern "C" void ext_00465FB0();
extern "C" void ext_00466450();
extern "C" void ext_00466900();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60D6();
extern "C" void ext_006A6A96();
extern "C" __declspec(naked) void __fastcall fn_00466970(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x8817d8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x18], esi
        mov dword ptr [ebp - 0x4], ebx
        call ext_006A6A96
        cmp eax, ebx
        je L_cont
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60D6
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x1
        call ext_00466450
        mov ecx, esi
        call ext_00465F10
        mov ecx, esi
        call ext_00466900
        mov ecx, esi
        call ext_00465940
        mov ecx, esi
        call ext_00465ED0
        mov ecx, esi
        call ext_00465B00
        mov ecx, esi
        call ext_00465DE0
        lea ecx, [ebp - 0x11]
        mov byte ptr [ebp - 0x4], bl
        call ext_0040BF20
        mov eax, 0x1
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    handler_0046A07:
        mov eax, dword ptr [ebp - 0x1c]
        mov ecx, dword ptr [ebp - 0x18]
        push eax
        call ext_00465FB0
        mov eax, 0x466a19
        ret
    L_cont:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0046BE90] sub_0046BE90 (39 bytes)
extern "C" void ext_005A6300();

extern "C" __declspec(naked) void __fastcall fn_0046BE90(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [ecx + 0x10], 0
        je done
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x22c
        call ext_005A6300
done:
        ret 0x4
    }
}

// [0x00468550] sub_00468550 (42 bytes)
extern "C" void ext_005867A0();
extern "C" __declspec(naked) void __fastcall fn_00468550(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        push esi
        mov esi, ecx
        je done
        push 0
        lea ecx, [eax + 4]
        call ext_005867A0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        call edx
    done:
        pop esi
        ret 4
    }
}

// [0x0046FD40] sub_0046FD40 (46 bytes)
extern "C" void ext_005973F0();
extern "C" void ext_00662140();
extern "C" void ext_00662210();

extern "C" __declspec(naked) void __fastcall fn_0046FD40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xcc]
        call ext_005973F0
        mov ecx, dword ptr [esi + 0xf8]
        add ecx, 0xcc
        cmp byte ptr [esi + 0x295], 0
        pop esi
        je loc_46fd69
        jmp ext_00662140
    loc_46fd69:
        jmp ext_00662210
    }
}

// [0x00467340] sub_00467340 (49 bytes)
extern "C" void ext_0042FDD0();
extern "C" void ext_004660F0();
extern "C" void ext_00467150();
extern "C" void ext_00667900();
extern "C" int mem_00ACDB40;
extern "C" __declspec(naked) void __fastcall fn_00467340(void* self, int edx_unused, void* a1) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [mem_00ACDB40]
        call    ext_0042FDD0
        mov     eax, dword ptr [esp + 8]
        push    eax
        mov     ecx, esi
        call    ext_004660F0
        test    al, al
        je      loc_467365
        mov     ecx, esi
        call    ext_00467150
loc_467365:
        mov     ecx, dword ptr [esi + 0x54]
        call    ext_00667900
        pop     esi
        ret     4
    }
}

extern "C" void ext_0046A810();
extern "C" void ext_006A5C5C();

// [0x0046AC40] sub_0046AC40 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046AC40(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0046A810
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

extern "C" void ext_00462E10();
extern "C" void ext_00462E50();
extern "C" void ext_004695B0();
extern "C" int mem_00924FF0;

// [0x00465F30] sub_00465F30 (52 bytes)
extern "C" void __fastcall fn_00465F30(void* self, int edx_unused, void* a1) {
    char* s = (char*)self;
    typedef void (__thiscall* fn1_t)(void*, void*);
    typedef const char* (__thiscall* cstr_t)(void*);
    typedef void (__thiscall* fn2_t)(void*, const char*);
    ((fn1_t)ext_00462E10)(*(void**)(s + 0x5c), a1);
    void* obj = *(void**)(s + 0x58);
    const char* str = (*(cstr_t*)&mem_00924FF0)(a1);
    ((fn2_t)ext_004695B0)(obj, str);
    ((fn1_t)ext_00462E50)(*(void**)(s + 0x5c), a1);
}

extern "C" void ext_00462EC0();
extern "C" void ext_00462F00();
extern "C" void ext_00469800();

// [0x00465F70] sub_00465F70 (52 bytes)
extern "C" void __fastcall fn_00465F70(void* self, int edx_unused, void* a1) {
    char* s = (char*)self;
    typedef void (__thiscall* fn1_t)(void*, void*);
    typedef const char* (__thiscall* cstr_t)(void*);
    typedef void (__thiscall* fn2_t)(void*, const char*);
    ((fn1_t)ext_00462EC0)(*(void**)(s + 0x5c), a1);
    void* obj = *(void**)(s + 0x58);
    const char* str = (*(cstr_t*)&mem_00924FF0)(a1);
    ((fn2_t)ext_00469800)(obj, str);
    ((fn1_t)ext_00462F00)(*(void**)(s + 0x5c), a1);
}

// [0x00466A30] sub_00466A30 (250 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00465940();
extern "C" void ext_00465B00();
extern "C" void ext_00465DE0();
extern "C" void ext_00465ED0();
extern "C" void ext_00465F30();
extern "C" void ext_00465FB0();
extern "C" void ext_00466240();
extern "C" void ext_00466360();
extern "C" void ext_00466450();
extern "C" void ext_004664A0();
extern "C" void ext_00466900();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00466A30(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x881801
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x28
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     dword ptr [ebp - 0x10], esp
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp - 0x4], 0
        call    ext_006A5EDE
        mov     ecx, dword ptr [eax + 4]
        call    ext_006A60D6
        mov     ebx, 1
        mov     ecx, esi
        mov     byte ptr [ebp - 4], bl
        call    ext_00466450
        mov     ecx, esi
        call    ext_004664A0
        mov     eax, dword ptr [ebp + 8]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [ebp - 0x34]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [ebp - 4], 2
        call    ext_00465F30
        lea     ecx, [ebp - 0x34]
        mov     byte ptr [ebp - 4], bl
        call    dword ptr [mem_00924FF4]
        mov     ecx, esi
        call    ext_00466900
        mov     ecx, esi
        call    ext_00465940
        mov     ecx, esi
        call    ext_00466360
        mov     ecx, esi
        call    ext_00465ED0
        mov     ecx, esi
        call    ext_00465B00
        mov     ecx, esi
        call    ext_00465DE0
        mov     ecx, esi
        call    ext_00466240
        lea     ecx, [ebp + 0xb]
        mov     byte ptr [ebp - 4], 0
        call    ext_0040BF20
        mov     eax, ebx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
        mov     esi, dword ptr [ebp - 0x14]
        mov     ecx, esi
        call    ext_00466360
        mov     edx, dword ptr [ebp - 0x18]
        push    edx
        mov     ecx, esi
        call    ext_00465FB0
        mov     eax, 0x466b15
        ret
        mov     ecx, dword ptr [ebp - 0xc]
        pop     edi
        pop     esi
        xor     eax, eax
        mov     fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}

// [0x0046A510] sub_0046A510 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046A510(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x11], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_0046A510
        mov esi, dword ptr [esi]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x11], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0046A810] sub_0046A810 (203 bytes)
extern "C" void ext_0046A510();
extern "C" void ext_0046A550();
extern "C" void ext_00474FF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0046A810(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_46A82A
        cmp edi, esi
        je L_46A830
L_46A82A:
        call dword ptr [mem_00925134]
L_46A830:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_46A891
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_46A847
        cmp eax, esi
        je L_46A84D
L_46A847:
        call dword ptr [mem_00925134]
L_46A84D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_46A891
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_0046A510
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_46A891:
        test edi, edi
        je L_46A89B
        cmp edi, dword ptr [esp + 0x28]
        je L_46A8A1
L_46A89B:
        call dword ptr [mem_00925134]
L_46A8A1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_46A8C8
        lea ecx, [esp + 0x20]
        call ext_00474FF0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0046A550
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_46A891
L_46A8C8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x004652F0] sub_004652F0 (55 bytes)
extern "C" void ext_004651F0();
extern "C" void ext_00439FD0();
extern "C" void ext_006A69CA();
extern "C" int mem_00ACDB40;
extern "C" __declspec(naked) void __fastcall fn_004652F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004651F0
        test al, al
        jne short L_has_it
        xor eax, eax
        pop esi
        ret 4
L_has_it:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00439FD0
        mov eax, dword ptr [esp + 8]
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0xb4], 2
        call ext_006A69CA
        pop esi
        ret 4
    }
}

// [0x00469080] sub_00469080 (56 bytes)
extern "C" void ext_004AFC60();
extern "C" void __fastcall fn_00469080(void* self, int edx_unused, void* arg) {
    if (*((unsigned char*)self + 0x10) != 0) {
        void* obj = *(void**)((char*)self + 0x14);
        if (obj != 0 && arg != 0) {
            ((void (__thiscall*)(void*, void*))ext_004AFC60)((char*)*(void**)((char*)obj + 0x34) + 8, arg);
            obj = *(void**)((char*)self + 0x14);
            void* target = *(void**)((char*)obj + 0x30);
            void** vtable = *(void***)target;
            ((void (__thiscall*)(void*))vtable[0x154 / 4])(target);
        }
    }
}

extern "C" void ext_004AF4D0();
extern "C" int mem_00925134;

// [0x00469A80] sub_00469A80 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00469A80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x10], 0
        je done
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esi + 0x24]
        je invalid_param
        mov eax, dword ptr [esi + 0x58]
        sub eax, ecx
        sar eax, 2
        cmp eax, 7
        ja ok
    invalid_param:
        call dword ptr [mem_00925134]
    ok:
        mov eax, dword ptr [esi + 0x54]
        mov ecx, dword ptr [eax + 0x1c]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0x2c]
        call ext_004AF4D0
        pop edi
    done:
        pop esi
        ret
    }
}

// [0x00468FB0] sub_00468FB0 (72 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_006A6E9E();
extern "C" void ext_004AF4D0();
extern "C" __declspec(naked) void __fastcall fn_00468FB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00660A50
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push ecx
        mov ecx, eax
        call edx
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 0x2c]
        push eax
        mov eax, dword ptr [esi + 0x60]
        push eax
        call ext_004AF4D0
    done:
        pop esi
        ret 0x4
    }
}

// [0x0046BF30] sub_0046BF30 (75 bytes)
extern "C" void ext_0046B190();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __cdecl fn_0046BF30(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_46BF4B_30
        call ebp
L_46BF4B_30:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_46BF55_30
        call ebp
L_46BF55_30:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        push esi
        call ext_0046B190
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00466910] sub_00466910 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_00466910(void* self) {
    __asm {
        push -1
        push 0x88ac0b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov ecx, dword ptr [esi]
        lea edi, [esi + 0x4]
        push edi
        mov dword ptr [esp + 0x18], 0
        call ext_006619D0
        mov esi, dword ptr [esi]
        mov ecx, edi
        mov byte ptr [esi], 1
        mov dword ptr [esp + 0x14], -1
        call ext_00466870
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004663D0] sub_004663D0 (89 bytes)
extern "C" void ext_00465B60();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004663D0(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xdc
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_00465B60
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_004685A0();
extern "C" void ext_005A6300();
extern "C" int mem_00925134;

// [0x0046B190] sub_0046B190 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046B190(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe loc_46b1a8
        call ebp
    loc_46b1a8:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe loc_46b1b2
        call ebp
    loc_46b1b2:
        cmp esi, edi
        je loc_46b1ea
        cmp esi, dword ptr [ebx + 0x8]
        jb loc_46b1bd
        call ebp
    loc_46b1bd:
        mov eax, dword ptr [esi]
        push eax
        call ext_004685A0
        add esp, 0x4
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        je loc_46b1de
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        call ext_005A6300
    loc_46b1de:
        cmp esi, dword ptr [ebx + 0x8]
        jb loc_46b1e5
        call ebp
    loc_46b1e5:
        add esi, 0x4
        jmp loc_46b1a8
    loc_46b1ea:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00466B30] sub_00466B30 (105 bytes)
extern "C" void ext_004A6970();

extern "C" __declspec(naked) void __fastcall fn_00466B30(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    0x881818
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, ecx
        lea     eax, [edi + 0x4]
        lea     ecx, [esi + 0x4]
        push    eax
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x92fb68
        call    ext_004A6970
        lea     ecx, [edi + 0x14]
        push    ecx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esi], 0x939d08
        call    ext_004A6970
        mov     edx, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x00466C30] sub_00466C30 (105 bytes)
extern "C" void ext_004A6970();

extern "C" __declspec(naked) void* __fastcall fn_00466C30(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    0x881818
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, ecx
        lea     eax, [edi + 0x4]
        lea     ecx, [esi + 0x4]
        push    eax
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x92fb68
        call    ext_004A6970
        lea     ecx, [edi + 0x14]
        push    ecx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esi], 0x939d1c
        call    ext_004A6970
        mov     edx, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

extern "C" void ext_00466B30();
extern "C" void ext_00466C30();

// [0x00466F00] sub_00466F00 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_00466F00(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x88185b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        lea ecx, [edi + 0x10]
        mov dword ptr [esi + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        push ecx
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi + 0xc], eax
        call ext_00466B30
        add edi, 0x38
        push edi
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00466C30
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00468190] sub_00468190 (185 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669A90();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00468190(void* self) {
    __asm {
        push -1
        push 0x89584b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push esi
        push edi
        call ext_006690D0
        push 0x93a460
        lea ecx, [esp + 0x28]
        mov esi, eax
        call dword ptr [mem_00924FE4]
        push 0x93a458
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x68], 0
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x24]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x48]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 1
        call ext_00669A90
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x64], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 4
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi]
        push 0
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi + 0x28]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x64], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret
    }
}
