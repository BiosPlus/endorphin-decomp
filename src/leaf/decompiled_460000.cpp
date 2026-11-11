// Decompiled translation unit: src/leaf/decompiled_460000.cpp

extern "C" void ext_0046FE50();

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
