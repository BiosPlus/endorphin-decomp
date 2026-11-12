// Decompiled translation unit: src/leaf/decompiled_430000.cpp

// [0x00430430] sub_00430430 (24 bytes)
// Reads byte at this+0xf4, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430430(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430450] sub_00430450 (24 bytes)
// Reads byte at this+0xf5, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430450(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf5]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430470] sub_00430470 (24 bytes)
// Reads byte at this+0xf6, replaces stack arg0 with it, and tail-jumps to vtbl[1] of arg0 object.
extern "C" __declspec(naked) void __fastcall fn_00430470(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        movzx eax, byte ptr [eax + 0xf6]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [esp + 4], eax
        jmp edx
    }
}

// [0x00430FA0] sub_00430FA0 (28 bytes)
extern "C" void ext_006A64EA();
extern "C" int mem_00925660;

extern "C" __declspec(naked) void __fastcall fn_00430FA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x160]
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925660]
        mov ecx, esi
        pop esi
        jmp ext_006A64EA
    }
}

// [0x0043C620] sub_0043C620 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_0043C620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x00931EDC
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x0043CD60] sub_0043CD60 (32 bytes)
extern "C" int mem_00925664;

extern "C" __declspec(naked) void __fastcall fn_0043CD60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push 0
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push ecx
        call dword ptr [mem_00925664]
        mov dword ptr [esi + 0x138], eax
        pop esi
        ret 4
    }
}

// [0x0043C950] sub_0043C950 (33 bytes)
// If arg0 is non-null, calls its vtbl[9] (thiscall) with arg1..arg3 and returns the result.
extern "C" int __stdcall fn_0043C950(void* a0, int a1, int a2, int a3) {
    if (a0) {
        typedef int (__thiscall *VFn)(void*, int, int, int);
        return ((VFn)(*(void***)a0)[9])(a0, a1, a2, a3);
    }
}

// [0x0043C9D0] sub_0043C9D0 (33 bytes)
// Forwards arg1..arg4 to this->vtbl[0x154/4] (thiscall, not a tail jump) and returns its result.
extern "C" __declspec(naked) int __fastcall fn_0043C9D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x154]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push edx
        call eax
        ret 0x10
    }
}

// [0x00431310] sub_00431310 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping one stack argument.
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00431310(void* self) {
    __asm {
        call ext_006A5EA8
        ret 4
    }
}

// [0x0043CB80] sub_0043CB80 (8 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8) and returns, popping two stack arguments.
extern "C" __declspec(naked) void __fastcall fn_0043CB80(void* self) {
    __asm {
        call ext_006A5EA8
        ret 8
    }
}

// [0x00437DE0] sub_00437DE0 (8 bytes)
// Pushes 1 and calls sub_00437DC0 (cdecl, caller cleans up the argument).
extern "C" void ext_00437DC0();

extern "C" __declspec(naked) void __cdecl fn_00437DE0() {
    __asm {
        push 1
        call ext_00437DC0
        ret
    }
}

// [0x00434E30] sub_00434E30 (11 bytes)
// Pushes 0x92f9f8 and calls sub_004310E0 (cdecl, caller does not clean up the argument).
extern "C" void ext_004310E0();

extern "C" __declspec(naked) void __cdecl fn_00434E30() {
    __asm {
        push 0x92f9f8
        call ext_004310E0
        ret
    }
}

// [0x004302A0] sub_004302A0 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469A80();

extern "C" __declspec(naked) void __fastcall fn_004302A0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_00469A80
    }
}

// [0x00430330] sub_00430330 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046BF80();

extern "C" __declspec(naked) void __fastcall fn_00430330(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_0046BF80
    }
}

// [0x00430360] sub_00430360 (12 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469040();
extern "C" __declspec(naked) void __fastcall fn_00430360(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        jmp ext_00469040
    }
}

// [0x004348F0] sub_004348F0 (13 bytes)
extern "C" void ext_004658C0();
extern "C" void ext_00462AA0();

extern "C" __declspec(naked) void __fastcall fn_004348F0(void* self) {
    __asm {
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        jmp ext_00462AA0
    }
}

// [0x00433FF0] sub_00433FF0 (14 bytes)
extern "C" void ext_0043DC90();
extern "C" __declspec(naked) void __fastcall fn_00433FF0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x108]
        push -1
        call ext_0043DC90
        ret
    }
}

// [0x004303A0] sub_004303A0 (15 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046BEC0();

extern "C" __declspec(naked) void __fastcall fn_004303A0(void* self) {
    __asm {
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046BEC0
        ret
    }
}

// [0x00430370] sub_00430370 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430370(void* self) {
    __asm {
        call ext_004658C0
        xor ecx, ecx
        cmp dword ptr [eax + 0x60], ecx
        sete cl
        mov al, cl
        ret
    }
}

// [0x00430D30] sub_00430D30 (16 bytes)
extern "C" void ext_004647D0();
extern "C" int mem_00AD6BC8;
extern "C" int mem_00ACDD94;

extern "C" void __fastcall fn_00430D30(void* self) {
    __asm {
        push offset mem_00ACDD94
        mov ecx, offset mem_00AD6BC8
        call ext_004647D0
    }
}

// [0x00430380] sub_00430380 (17 bytes)
extern "C" void ext_004658C0();
extern "C" __declspec(naked) unsigned char __fastcall fn_00430380(void* self) {
    __asm {
        call ext_004658C0
        xor ecx, ecx
        cmp dword ptr [eax + 0x60], 0x1
        sete cl
        mov al, cl
        ret
    }
}

// [0x004303B0] sub_004303B0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __fastcall fn_004303B0(void* self) {
    __asm {
        push 1
        push 0
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x004303D0] sub_004303D0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __cdecl fn_004303D0() {
    __asm {
        push 1
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x004303F0] sub_004303F0 (17 bytes)
extern "C" void ext_00468180();
extern "C" void ext_0046B010();

extern "C" __declspec(naked) void __fastcall fn_004303F0(void* self) {
    __asm {
        push 0
        push 0
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

// [0x00430410] sub_00430410 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430410(void* self) {
    __asm {
        push 0
        push 1
        call ext_00468180
        mov ecx, eax
        call ext_0046B010
        ret
    }
}

extern "C" void ext_0044B7C0();

// [0x00430310] sub_00430310 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430310(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0100h]
        test ecx, ecx
        je short done
        call ext_0044B7C0
done:
        ret 4
    }
}

extern "C" void ext_004444B0();

// [0x00433B70] sub_00433B70 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_00433B70(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0114h]
        test ecx, ecx
        je short done
        call ext_004444B0
done:
        ret 4
    }
}

// [0x00437DC0] sub_00437DC0 (18 bytes)
extern "C" void ext_00436FA0();

extern "C" __declspec(naked) void __stdcall fn_00437DC0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0x92f9f8
        push eax
        call ext_00436FA0
        ret 4
    }
}

// [0x0043B400] sub_0043B400 (19 bytes)
// Loads this->field_10; if non-null, pushes this and calls sub_00412D70, else returns 0.
extern "C" void ext_00412D70();

extern "C" __declspec(naked) void __fastcall fn_0043B400(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        test ecx, ecx
        je short no_call
        push eax
        call ext_00412D70
        ret
    no_call:
        xor eax, eax
        ret
    }
}

// [0x0043F2C0] sub_0043F2C0 (19 bytes)
extern "C" void ext_0041A920();
extern "C" __declspec(naked) void __fastcall fn_0043F2C0(void* self, int edx_unused, int a1) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x90
        call ext_0041A920
        ret 0x4
    }
}

// [0x00436C40] sub_00436C40 (19 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_00436C40(void* self) {
    ext_00436070();
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    typedef void (__fastcall *VFn)(void*);
    VFn f = (VFn)(*(void***)obj)[15];
    f(obj);
}

// [0x00435B30] sub_00435B30 (22 bytes)
extern "C" void ext_0045D270();
extern "C" void ext_004339D0();
extern "C" __declspec(naked) void __fastcall fn_00435B30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x108]
        call ext_0045D270
        mov ecx, esi
        pop esi
        jmp ext_004339D0
    }
}

// [0x004339B0] sub_004339B0 (24 bytes)
extern "C" void __fastcall fn_004339B0(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x100) = a1;
    void* ecx_val = *(void**)((char*)self + 0x108);
    typedef void (__fastcall *CalleeFn)(void*);
    ((CalleeFn)ext_0045D270)(ecx_val);
}

// [0x0043DCD0] sub_0043DCD0 (24 bytes)
extern "C" void ext_0043DC90();

extern "C" __declspec(naked) void __fastcall fn_0043DCD0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x144]
        test ecx, ecx
        je done
        cmp dword ptr [ecx + 0x20], 0
        je done
        push -1
        call ext_0043DC90
done:
        ret
    }
}

// [0x00430260] sub_00430260 (24 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_00430260(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1d8]
        jmp eax
    }
}

// [0x00430280] sub_00430280 (24 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" void* __fastcall fn_00430280(void* self) {
    void* obj = ((void* (*)())ext_00465B30)();
    void* vobj = ((void* (__fastcall *)(void*))ext_00468660)(obj);
    void* vtbl = *(void**)vobj;
    return ((void* (__fastcall *)(void*))(*(void**)((char*)vtbl + 0x1dc)))(vobj);
}

// [0x00430340] sub_00430340 (24 bytes)
// Calls sub_00465B30(self) -> r, sub_00468660(r) -> o, then tail-jumps to vtbl[0x1bc/4] of o with this=o.
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" void __fastcall fn_00430340(void* self) {
    void* r = ((void* (__fastcall *)(void*))ext_00465B30)(self);
    void* o = ((void* (__fastcall *)(void*))ext_00468660)(r);
    void* vtbl = *(void**)o;
    ((void (__fastcall *)(void*))(*(void**)((char*)vtbl + 0x1bc)))(o);
}

// [0x00436740] sub_00436740 (25 bytes)
extern "C" void ext_0042FED0();
extern "C" void ext_00435920();
extern "C" void ext_00435380();

extern "C" __declspec(naked) void __fastcall fn_00436740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0042FED0
        test al, al
        mov ecx, esi
        pop esi
        jne L_true
        jmp ext_00435920
    L_true:
        jmp ext_00435380
    }
}

// [0x00436AD0] sub_00436AD0 (25 bytes)
extern "C" void ext_00436A50();

extern "C" __declspec(naked) void __fastcall fn_00436AD0(void* self) {
    __asm {
        cmp byte ptr [ecx + 0xf4], 0
        push 1
        sete al
        mov byte ptr [ecx + 0xf4], al
        push eax
        call ext_00436A50
        ret
    }
}

// [0x00434A90] sub_00434A90 (25 bytes)
extern "C" void __fastcall ext_00493D90(void* self);
extern "C" void __cdecl ext_006A5C5C(void* arg);

extern "C" void __fastcall fn_00434A90(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_00493D90(esi);
        ext_006A5C5C(esi);
    }
}

// [0x00434A70] sub_00434A70 (25 bytes)
extern "C" void __fastcall ext_0041DE30(void* self);

extern "C" void __fastcall fn_00434A70(void* self) {
    void* esi = *(void**)self;
    if (esi) {
        ext_0041DE30(esi);
        ext_006A5C5C(esi);
    }
}

// [0x004332B0] sub_004332B0 (26 bytes)
extern "C" void ext_0043C8F0();
extern "C" void ext_0044B780();

extern "C" __declspec(naked) void __fastcall fn_004332B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x108]
        call ext_0043C8F0
        mov ecx, dword ptr [esi + 0x100]
        pop esi
        jmp ext_0044B780
    }
}

// [0x004332D0] sub_004332D0 (26 bytes)
// Saves esi, loads this+0x108 into ecx and calls sub_00440690, reloads ecx from this+0x100,
// restores esi, and tail-jumps to sub_0044B7A0.
extern "C" void ext_00440690();
extern "C" void ext_0044B7A0();

extern "C" __declspec(naked) void __fastcall fn_004332D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x108]
        call ext_00440690
        mov ecx, dword ptr [esi + 0x100]
        pop esi
        jmp ext_0044B7A0
    }
}

// [0x00430CC0] sub_00430CC0 (28 bytes)
extern "C" void ext_00430370();

extern "C" __declspec(naked) void __fastcall fn_00430CC0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00430370
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430E00] sub_00430E00 (28 bytes)
extern "C" void ext_00430380();

extern "C" __declspec(naked) void __fastcall fn_00430E00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00430380
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00435270] sub_00435270 (28 bytes)
extern "C" void ext_004332B0();
extern "C" void ext_00465B30();
extern "C" void ext_00468C80();
extern "C" void ext_004332D0();

extern "C" __declspec(naked) void __fastcall fn_00435270(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B30
        mov ecx, eax
        call ext_00468C80
        mov ecx, esi
        pop esi
        jmp ext_004332D0
    }
}

// [0x00435290] sub_00435290 (28 bytes)
extern "C" void ext_004332B0();
extern "C" void ext_00465B30();
extern "C" void ext_00468CA0();
extern "C" void ext_004332D0();
extern "C" __declspec(naked) void __fastcall fn_00435290(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B30
        mov ecx, eax
        call ext_00468CA0
        mov ecx, esi
        pop esi
        jmp ext_004332D0
    }
}

// [0x00434E50] sub_00434E50 (28 bytes)
// Pushes arg 1 before calling sub_00465B30 (no cleanup), passes its result as ecx to sub_00469410 (which
// consumes the pushed arg), then calls sub_00433B70(self, 1) and returns. Stack-arg hand-off is not
// expressible in C++03, so this is naked asm.
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434E50(void* self) {
    __asm {
        push esi
        push 1
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 1
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434E70] sub_00434E70 (28 bytes)
// Pushes arg 2 before calling sub_00465B30 (no cleanup), passes its result as ecx to sub_00469410 (which
// consumes the pushed arg), then calls sub_00433B70(self, 2) and returns. Stack-arg hand-off is not
// expressible in C++03, so this is naked asm.
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434E70(void* self) {
    __asm {
        push esi
        push 2
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 2
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434E90] sub_00434E90 (28 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434E90(void* self) {
    __asm {
        push esi
        push 5
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 5
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434EB0] sub_00434EB0 (28 bytes)
extern "C" void ext_00433B70();
extern "C" void ext_00465B30();
extern "C" void ext_00469410();

extern "C" void __fastcall fn_00434EB0(void* self) {
    typedef void* (__stdcall *FnA)(int);
    typedef void (__fastcall *FnB)(void*);
    typedef void (__thiscall *FnC)(void*, int);
    void* r = reinterpret_cast<FnA>(ext_00465B30)(10);
    reinterpret_cast<FnB>(ext_00469410)(r);
    reinterpret_cast<FnC>(ext_00433B70)(self, 10);
}

// [0x00434ED0] sub_00434ED0 (28 bytes)
// Pushes 11 (0x0b) before calling sub_00465B30 (no cleanup), passes its result as ecx to sub_00469410 (which
// consumes the pushed arg), then calls sub_00433B70(self, 11) and returns. Stack-arg hand-off is not
// expressible in C++03, so this is naked asm.
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434ED0(void* self) {
    __asm {
        push esi
        push 0xb
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 0xb
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434EF0] sub_00434EF0 (28 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();
extern "C" __declspec(naked) void __fastcall fn_00434EF0(void* self) {
    __asm {
        push esi
        push 0
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 0
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434F10] sub_00434F10 (28 bytes)
extern "C" void ext_00433B70();
extern "C" void ext_00465B30();
extern "C" void ext_00469410();

extern "C" __declspec(naked) void __fastcall fn_00434F10(void* self) {
    __asm {
        push esi
        push 9
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 9
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434F30] sub_00434F30 (28 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434F30(void* self) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 4
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434F50] sub_00434F50 (28 bytes)
extern "C" void ext_00433B70();
extern "C" void ext_00465B30();
extern "C" void ext_00469410();

extern "C" __declspec(naked) void __fastcall fn_00434F50(void* self) {
    __asm {
        push esi
        push 0x0c
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 0x0c
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x00434F70] sub_00434F70 (28 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469410();
extern "C" void ext_00433B70();

extern "C" __declspec(naked) void __fastcall fn_00434F70(void* self) {
    __asm {
        push esi
        push 7
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469410
        push 7
        mov ecx, esi
        call ext_00433B70
        pop esi
        ret
    }
}

// [0x0043C930] sub_0043C930 (31 bytes)
extern "C" void ext_006A65E0();

extern "C" __declspec(naked) void __fastcall fn_0043C930(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        push 0
        push ecx
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push edx
        push 0x102
        call ext_006A65E0
        ret 8
    }
}

// [0x004352B0] sub_004352B0 (31 bytes)
extern "C" void ext_006A5E72();
extern "C" void ext_006A6454();

extern "C" __declspec(naked) void __fastcall fn_004352B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x110]
        push 0
        call ext_006A6454
        mov ecx, dword ptr [esi + 0x110]
        push 5
        call ext_006A5E72
        pop esi
        ret
    }
}

// [0x0043D2C0] sub_0043D2C0 (31 bytes)
extern "C" void ext_0041C6D0();
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_0043D2C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x64]
        call ext_0041C6D0
        test al, al
        jne done
        mov ecx, esi
        call ext_006A5EA8
    done:
        pop esi
        ret 4
    }
}

// [0x00430D80] sub_00430D80 (31 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469C50();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);

extern "C" __declspec(naked) void __fastcall fn_00430D80(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00469C50
        test al, al
        jne done
        push 0
        push 0x30
        push 0x92f8b8
        call ext_006A5E60
    done:
        ret
    }
}

// [0x00430DA0] sub_00430DA0 (31 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469C80();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);

extern "C" __declspec(naked) void __fastcall fn_00430DA0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00469C80
        test al, al
        jne done
        push 0
        push 0x30
        push 0x92f8b8
        call ext_006A5E60
    done:
        ret
    }
}

// [0x00430DC0] sub_00430DC0 (31 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469C70();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);
extern "C" void __fastcall fn_00430DC0(void* self) {
    void* r = ((void* (__fastcall*)(void*))ext_00465B30)(self);
    unsigned char ok = ((unsigned char (__fastcall*)(void*))ext_00469C70)(r);
    if (!ok) {
        ext_006A5E60(0x92f8b8, 0x30, 0);
    }
}

// [0x00430DE0] sub_00430DE0 (31 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469C60();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);
extern "C" __declspec(naked) void __fastcall fn_00430DE0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00469C60
        test al, al
        jne short done
        push 0
        push 0x30
        push 0x92f8b8
        call ext_006A5E60
done:
        ret
    }
}

// [0x00435130] sub_00435130 (33 bytes)
// Saves this in esi, calls two helpers, then virtual-calls vtbl[+0x1c0] on the returned object,
// restores this into ecx and tail-jumps to sub_004332D0.
extern "C" __declspec(naked) void __fastcall fn_00435130(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c0]
        call eax
        mov ecx, esi
        pop esi
        jmp ext_004332D0
    }
}

// [0x00435160] sub_00435160 (33 bytes)
extern "C" void ext_004332B0();
extern "C" void ext_004332D0();

extern "C" __declspec(naked) void __fastcall fn_00435160(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1b4]
        call eax
        mov ecx, esi
        pop esi
        jmp ext_004332D0
    }
}

// [0x00435240] sub_00435240 (33 bytes)
extern "C" void ext_004332B0();
extern "C" void ext_00465B40();
extern "C" void ext_004332D0();

extern "C" __declspec(naked) void __fastcall fn_00435240(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c4]
        call eax
        mov ecx, esi
        pop esi
        jmp ext_004332D0
    }
}

// [0x004372D0] sub_004372D0 (33 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046F880();
extern "C" void ext_00436BE0();
extern "C" void ext_00436B20();

extern "C" __declspec(naked) void __fastcall fn_004372D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F880
        test al, al
        mov ecx, esi
        pop esi
        je short no_branch_004372D0
        jmp ext_00436BE0
no_branch_004372D0:
        jmp ext_00436B20
    }
}

// [0x00437300] sub_00437300 (33 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046F890();
extern "C" void ext_00436BE0();
extern "C" void ext_00436C90();

extern "C" __declspec(naked) void __fastcall fn_00437300(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F890
        test al, al
        mov ecx, esi
        pop esi
        je short no_branch_00437300
        jmp ext_00436BE0
no_branch_00437300:
        jmp ext_00436C90
    }
}

// [0x00437330] sub_00437330 (33 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046F890();
extern "C" void ext_00436BE0();
extern "C" void ext_00436C60();

typedef void* (__fastcall *Callee_00465B30)(void* self);
typedef unsigned char (__fastcall *Callee_0046F890)(void* self);
typedef void (__fastcall *Callee_00436BE0)(void* self);
typedef void (__fastcall *Callee_00436C60)(void* self);

extern "C" void __fastcall fn_00437330(void* self) {
    void* obj = ((Callee_00465B30)ext_00465B30)(self);
    void* inner = *(void**)((char*)obj + 0x14);
    unsigned char r = ((Callee_0046F890)ext_0046F890)(inner);
    if (r) {
        ((Callee_00436BE0)ext_00436BE0)(self);
    } else {
        ((Callee_00436C60)ext_00436C60)(self);
    }
}

// [0x00430EB0] sub_00430EB0 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430EB0(void* self, int edx_unused, void* newObj) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, ecx
        je store
        test ecx, ecx
        je store
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 1
        call edx
store:
        mov dword ptr [esi], edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004349D0] sub_004349D0 (34 bytes)
// Calls vtbl[1](1) on the object at this+0x124 if non-null, then clears this+0x124.
namespace {
struct Ep_Vtbl1Obj_004349D0 {
    virtual void vf0();
    virtual void vf1(int a1);
};
}
extern "C" void __fastcall fn_004349D0(void* self) {
    Ep_Vtbl1Obj_004349D0* obj = *(Ep_Vtbl1Obj_004349D0**)((unsigned char*)self + 0x124);
    if (obj) {
        obj->vf1(1);
    }
    *(void**)((unsigned char*)self + 0x124) = 0;
}

// [0x0043CDA0] sub_0043CDA0 (35 bytes)
extern "C" int mem_00925688;
extern "C" void __fastcall fn_0043CDA0(void* self, int edx_unused, unsigned char flag) {
    unsigned char* p = (unsigned char*)self;
    if (p[0x164] != flag) {
        p[0x164] = flag;
        typedef int (__stdcall *pfn_InvalidateRect)(void*, const void*, int);
        pfn_InvalidateRect f = (pfn_InvalidateRect)mem_00925688;
        f(*(void**)(p + 0x20), 0, 1);
    }
}

// [0x004329A0] sub_004329A0 (35 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469040();
extern "C" void ext_006A651A();
extern "C" __declspec(naked) void __fastcall fn_004329A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00469040
        mov eax, dword ptr [esi + 0x11c]
        push 0x0
        push 0x1
        push eax
        mov ecx, esi
        call ext_006A651A
        pop esi
        ret
    }
}

// [0x0043E3A0] sub_0043E3A0 (36 bytes)
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __stdcall fn_0043E3A0(void* first, void* last) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je fn43e3a0_done
        _emit 0x8b
        _emit 0xff
    fn43e3a0_loop:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 4
        cmp esi, edi
        jne fn43e3a0_loop
    fn43e3a0_done:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00430810] sub_00430810 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" __declspec(naked) void __fastcall fn_00430810(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        push 1
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430840] sub_00430840 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" __declspec(naked) void __fastcall fn_00430840(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        push 2
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430870] sub_00430870 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" __declspec(naked) void __fastcall fn_00430870(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        push 5
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004308A0] sub_004308A0 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" void __fastcall fn_004308A0(void* self, int edx_unused, void* a1) {
    void** esi = (void**)a1;
    void** edi = (void**)*esi;
    typedef void* (__stdcall *Fn465B30)(int);
    typedef unsigned char (__thiscall *Fn4694E0)(void*);
    typedef void (__thiscall *FnVirt)(void*, int);
    void* eax = ((Fn465B30)ext_00465B30)(10);
    unsigned char al = ((Fn4694E0)ext_004694E0)(eax);
    ((FnVirt)edi[1])(esi, (int)al);
}

// [0x004308D0] sub_004308D0 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" __declspec(naked) void __fastcall fn_004308D0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        push 0Bh
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430930] sub_00430930 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" void __fastcall fn_00430930(void* self, int edx_unused, void* a1) {
    void* vtbl = *(void**)a1;
    void* eax = ((void* (__stdcall*)(int))ext_00465B30)(0);
    unsigned char al = ((unsigned char (__thiscall*)(void*))ext_004694E0)(eax);
    ((void (__thiscall*)(void*, int))((void**)vtbl)[1])(a1, (int)al);
}

// [0x004309A0] sub_004309A0 (38 bytes)
extern "C" void ext_004694E0();
extern "C" __declspec(naked) void __fastcall fn_004309A0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        push 4
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004309D0] sub_004309D0 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();

extern "C" __declspec(naked) void __fastcall fn_004309D0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        push 0xc
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 0x4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00430A00] sub_00430A00 (38 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();
extern "C" void __fastcall fn_00430A00(void* self, int edx_unused, void* a1) {
    typedef void* (__stdcall *F7)(int);
    typedef unsigned char (__thiscall *F8)(void*);
    typedef void (__thiscall *VF)(void*, int);
    void** vt = *(void***)a1;
    void* o = ((F7)&ext_00465B30)(7);
    unsigned char r = ((F8)&ext_004694E0)(o);
    ((VF)vt[1])(a1, (int)r);
}

// [0x004345B0] sub_004345B0 (38 bytes)
extern "C" void ext_006658A0();
extern "C" __declspec(naked) void __fastcall fn_004345B0(void* self) {
    __asm {
        push esi
        push edi
        call ext_00468180
        mov eax, dword ptr [eax + 0x38]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        call ext_006658A0
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004345E0] sub_004345E0 (38 bytes)
extern "C" void ext_00468180();
extern "C" void ext_006658B0();
extern "C" __declspec(naked) void __fastcall fn_004345E0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        call ext_00468180
        mov eax, dword ptr [eax + 0x38]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        call ext_006658B0
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0043D3B0] sub_0043D3B0 (39 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = value. For p = first; p != last; p += 4: push value, ecx = p, call [mem_009244D4] (callee cleans the pushed arg). Plain ret.
extern "C" int mem_009244D4;
extern "C" __declspec(naked) void __fastcall fn_0043D3B0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        push ebx
        mov ecx, esi
        call dword ptr [mem_009244D4]
        add esi, 4
        cmp esi, edi
        jne loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00430900] sub_00430900 (39 bytes)
extern "C" void ext_0044B660();
extern "C" __declspec(naked) void __fastcall fn_00430900(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x100]
        test ecx, ecx
        je L_00430924
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call ext_0044B660
        mov edx, dword ptr [edi + 0x4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
    L_00430924:
        ret 0x4
    }
}

// [0x00433080] sub_00433080 (39 bytes)
extern "C" void __fastcall ext_0042FE90(void* self);
extern "C" void __fastcall ext_00430360(void* self);

extern "C" __declspec(naked) int __fastcall fn_00433080(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp dword ptr [eax + 8], 1Bh
        push ebx
        sete bl
        test bl, bl
        push esi
        mov esi, ecx
        je done
        call ext_0042FE90
        mov ecx, esi
        call ext_00430360
    done:
        pop esi
        movzx eax, bl
        pop ebx
        ret 4
    }
}

// [0x00430A30] sub_00430A30 (40 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00430A30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x130]
        call eax
        mov edx, dword ptr [edi]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430AE0] sub_00430AE0 (40 bytes)
extern "C" void ext_00465B40();
extern "C" __declspec(naked) void __fastcall fn_00430AE0(void* self, int edx_unused, void* p) {
    __asm {
        push esi
        push edi
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1a0]
        call eax
        mov edx, dword ptr [edi]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430B10] sub_00430B10 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430B10(void* self, int edx_unused, void* p) {
    __asm {
        push esi
        push edi
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1a4]
        call eax
        mov edx, dword ptr [edi]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430B40] sub_00430B40 (40 bytes)
extern "C" void __fastcall fn_00430B40(void* self, int edx_unused, void* p) {
    typedef void* (__cdecl *GetFn)();
    typedef unsigned char (__thiscall *BoolFn)(void*);
    typedef void (__thiscall *ArgFn)(void*, unsigned int);

    void* obj = ((GetFn)ext_00465B40)();
    void** vt_obj = *(void***)obj;
    void** vt_p = *(void***)p;
    unsigned char r = ((BoolFn)vt_obj[0x1a8 / 4])(obj);
    ((ArgFn)vt_p[0])(p, (unsigned int)r);
}

// [0x00430B70] sub_00430B70 (40 bytes)
extern "C" void __fastcall fn_00430B70(void* self, int edx_unused, void* p) {
    typedef void* (__cdecl *GetFn)();
    typedef unsigned char (__thiscall *BoolFn)(void*);
    typedef void (__thiscall *ArgFn)(void*, unsigned int);

    void* obj = ((GetFn)ext_00465B40)();
    void** vt_obj = *(void***)obj;
    void** vt_p = *(void***)p;
    unsigned char r = ((BoolFn)vt_obj[0x1b0 / 4])(obj);
    ((ArgFn)vt_p[0])(p, (unsigned int)r);
}

// [0x00430BA0] sub_00430BA0 (40 bytes)
extern "C" void __fastcall fn_00430BA0(void* self, int edx_unused, void* p) {
    typedef void* (__cdecl *GetFn)();
    typedef unsigned char (__thiscall *BoolFn)(void*);
    typedef void (__thiscall *ArgFn)(void*, unsigned int);

    void* obj = ((GetFn)ext_00465B40)();
    void** vt_obj = *(void***)obj;
    void** vt_p = *(void***)p;
    unsigned char r = ((BoolFn)vt_obj[0x118 / 4])(obj);
    ((ArgFn)vt_p[0])(p, (unsigned int)r);
}

// [0x00430490] sub_00430490 (41 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00528530();

extern "C" __declspec(naked) void __fastcall fn_00430490(void* ecx_unused, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00465B30
        mov ecx, eax
        call ext_00528530
        mov edx, dword ptr [edi + 4]
        xor ecx, ecx
        cmp eax, 4
        sete cl
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004304C0] sub_004304C0 (41 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00528530();

extern "C" __declspec(naked) void __fastcall fn_004304C0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00465B30
        mov ecx, eax
        call ext_00528530
        mov edx, dword ptr [edi + 4]
        xor ecx, ecx
        cmp eax, 2
        sete cl
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430520] sub_00430520 (41 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00528530();
extern "C" __declspec(naked) void __stdcall fn_00430520(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00465B30
        mov ecx, eax
        call ext_00528530
        mov edx, dword ptr [edi + 0x4]
        xor ecx, ecx
        cmp eax, 0x3
        sete cl
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0043D1A0] sub_0043D1A0 (41 bytes)
extern "C" void ext_0041C570();
extern "C" void ext_006A5EA8();
extern "C" void __fastcall fn_0043D1A0(void* self, int edx_unused, int a1, int a2, int a3) {
    typedef unsigned char (__thiscall *Pred3)(void*, int, int, int);
    typedef void (__thiscall *Thunk0)(void*);
    unsigned char r = ((Pred3)ext_0041C570)((char*)self + 0x64, a1, a2, a3);
    if (!r) {
        ((Thunk0)ext_006A5EA8)(self);
    }
}

// [0x0043D1D0] sub_0043D1D0 (41 bytes)
extern "C" void ext_0041C5A0();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0043D1D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        lea ecx, [esi + 0x64]
        call ext_0041C5A0
        test al, al
        jne short done
        mov ecx, esi
        call ext_006A5EA8
done:
        pop esi
        ret 0xc
    }
}

// [0x0043D230] sub_0043D230 (41 bytes)
// __thiscall, ret 0xc. Calls sub_0041C600(this+0x64, a1, a2, a3); if it returns false,
// tail-calls thunk_MFC80_ord_1903 on this.
extern "C" void ext_0041C600();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0043D230(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        lea ecx, [esi + 0x64]
        call ext_0041C600
        test al, al
        jne short done_0043D230
        mov ecx, esi
        call ext_006A5EA8
    done_0043D230:
        pop esi
        ret 0xc
    }
}

// [0x00436F30] sub_00436F30 (42 bytes)
extern "C" void __fastcall fn_00436F30(void* self) {
    void** p = (void**)self;
    if (p[1]) {
        ext_006A5C5C(p[1]);
    }
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

// [0x00436A20] sub_00436A20 (43 bytes)
extern "C" __declspec(naked) void __cdecl fn_00436A20(void* out, int a1, int* it, int unused, int* last, int* key) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x14]
        cmp ecx, eax
        je done
        mov edx, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx]
    loop_top:
        cmp dword ptr [ecx], edx
        je done
        add ecx, 4
        cmp ecx, eax
        jne loop_top
    done:
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        ret
    }
}

// [0x00431330] sub_00431330 (43 bytes)
extern "C" void ext_006A651A();
extern "C" __declspec(naked) void __fastcall fn_00431330(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x104]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop edi
        pop esi
        ret
    }
}

// [0x004313A0] sub_004313A0 (43 bytes)
extern "C" void ext_006A651A();
extern "C" __declspec(naked) void __fastcall fn_004313A0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x11c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop edi
        pop esi
        ret
    }
}

// [0x004313D0] sub_004313D0 (43 bytes)
extern "C" void ext_006A651A();
extern "C" __declspec(naked) void __fastcall fn_004313D0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0xe0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop edi
        pop esi
        ret
    }
}

// [0x00433260] sub_00433260 (43 bytes)
extern "C" void ext_006A651A();

extern "C" __declspec(naked) void __fastcall fn_00433260(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x150]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop edi
        pop esi
        ret
    }
}

// [0x00434900] sub_00434900 (43 bytes)
extern "C" void ext_006A651A();

extern "C" __declspec(naked) void __fastcall fn_00434900(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x158]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop edi
        pop esi
        ret
    }
}

// [0x004304F0] sub_004304F0 (43 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00528530();
extern "C" __declspec(naked) void __fastcall fn_004304F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00465B30
        mov ecx, eax
        call ext_00528530
        sub eax, 0x1
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00431400] sub_00431400 (43 bytes)
extern "C" void ext_00430380();
extern "C" void ext_00465B40();
extern "C" __declspec(naked) void __fastcall fn_00431400(void* self) {
    __asm {
        call ext_00430380
        test al, al
        je short L_else_00431400
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd0]
        jmp eax
    L_else_00431400:
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xcc]
        jmp eax
    }
}

// [0x0043D170] sub_0043D170 (41 bytes)
extern "C" void ext_0041C540();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0043D170(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        lea ecx, [esi + 0x64]
        call ext_0041C540
        test al, al
        jne done
        mov ecx, esi
        call ext_006A5EA8
    done:
        pop esi
        ret 0xc
    }
}

// [0x0043D200] sub_0043D200 (41 bytes)
extern "C" void ext_0041C5D0();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0043D200(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        push ecx
        push edx
        lea ecx, [esi+0x64]
        call ext_0041C5D0
        test al, al
        jne short done
        mov ecx, esi
        call ext_006A5EA8
done:
        pop esi
        ret 0xc
    }
}

// [0x0043D260] sub_0043D260 (41 bytes)
extern "C" void ext_0041C630();
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_0043D260(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        lea ecx, [esi + 0x64]
        call ext_0041C630
        test al, al
        jne short L_0043D285
        mov ecx, esi
        call ext_006A5EA8
    L_0043D285:
        pop esi
        ret 0xc
    }
}

// [0x0043C980] sub_0043C980 (45 bytes)
// Stack-arg (__stdcall, ret 0x10) wrapper: if arg0 is non-null, calls sub_004407B0(arg0) to get an object,
// then tail-dispatches vtbl[+0x2c] on it with (arg0, arg1, arg2, arg3) pushed in that order.
extern "C" void ext_004407B0();

extern "C" __declspec(naked) void __stdcall fn_0043C980(void* a1, int a2, int a3, int a4) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004407B0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x2c]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        mov ecx, eax
        call edx
    done:
        pop esi
        ret 0x10
    }
}

extern "C" void ext_00430F9E();
extern "C" int mem_00924EA0;
extern "C" int mem_00924E9C;

// [0x00430F70] sub_00430F70 (46 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430F70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0x4]
        add ecx, eax
        call dword ptr [mem_00924EA0]
        test eax, eax
        __asm _emit 0x74 __asm _emit 0x18 // je ext_00430F9E (short)
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        add ecx, eax
        call dword ptr [mem_00924EA0]
        mov ecx, eax
        pop esi
        jmp dword ptr [mem_00924E9C]
    }
}

// [0x00434610] sub_00434610 (47 bytes)
extern "C" void ext_00594000();

extern "C" __declspec(naked) void __fastcall fn_00434610(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        call ext_00594000
        mov eax, dword ptr [eax + 26Ch]
        movzx ecx, byte ptr [eax + 531h]
        mov esi, dword ptr [esp + 8]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 4]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        mov ecx, esi
        call edx
        pop esi
        ret 4
    }
}

// [0x00430BD0] sub_00430BD0 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430BD0(void* self, int edx_unused, void* p) {
    __asm {
        push esi
        push edi
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1ac]
        call eax
        mov edx, dword ptr [edi]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0043CA00] sub_0043CA00 (48 bytes)
// Builds a TRACKMOUSEEVENT on the stack (cbSize=0x10, TME_LEAVE, hwnd=this+0x20, HOVER_DEFAULT) and calls TrackMouseEvent via IAT.
extern "C" int mem_009255E8;
extern "C" __declspec(naked) void __fastcall fn_0043CA00(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [ecx + 0x20]
        lea ecx, [esp]
        push ecx
        mov dword ptr [esp + 0x4], 0x10
        mov dword ptr [esp + 0x8], 0x2
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_009255E8]
        add esp, 0x10
        ret
    }
}

// [0x00430D50] sub_00430D50 (48 bytes)
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_00430D50(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    void** vt = *(void***)obj;
    typedef int (__thiscall *Fn1)(void*);
    int r = ((Fn1)vt[0x9c / 4])(obj);
    void* obj2 = ((void* (__cdecl*)())ext_00465B40)();
    void** vt2 = *(void***)obj2;
    typedef void (__thiscall *Fn2)(void*, int, int, int, int);
    ((Fn2)vt2[0xe0 / 4])(obj2, 9, r, r + 0xf, 0);
}

// [0x00434640] sub_00434640 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00434640(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x114]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        mov edi, dword ptr [esi]
        call edx
        push eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00434680] sub_00434680 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00434680(void* self, int edx_unused, void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x150]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        mov edi, dword ptr [esi]
        call edx
        push eax
        mov eax, dword ptr [edi + 4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 4
    }
}

// [0x004346C0] sub_004346C0 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_004346C0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 0x1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x158]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        mov edi, dword ptr [esi]
        call edx
        push eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0043CEF0] sub_0043CEF0 (49 bytes)
// Gets cursor position, finds the window under it, and returns whether that window is `self`.
extern "C" void ext_006A5E00();
extern "C" int mem_00925718;
extern "C" int mem_00925714;
extern "C" __declspec(naked) void __fastcall fn_0043CEF0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea eax, [esp + 4]
        push eax
        mov esi, ecx
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push ecx
        push edx
        call dword ptr [mem_00925714]
        push eax
        call ext_006A5E00
        cmp eax, esi
        sete al
        pop esi
        add esp, 8
        ret
    }
}

// [0x00434000] sub_00434000 (49 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" int mem_00925688;

extern "C" void __fastcall fn_00434000(void* self) {
    typedef void* (__fastcall *GetFn)(void*);
    typedef void (__fastcall *VFn)(void*);
    typedef void (__stdcall *InvalidateRectFn)(void*, int, int);

    void* a = ((GetFn)ext_00465B30)(self);
    void* b = ((GetFn)ext_00468660)(a);
    void** vt = *(void***)b;
    ((VFn)vt[0x184 / 4])(b);
    char* s = *(char**)((char*)self + 0x108);
    void* hwnd = *(void**)(s + 0x20);
    ((InvalidateRectFn)mem_00925688)(hwnd, 0, 1);
}

extern "C" int mem_009251EC;

// [0x0043B6E0] sub_0043B6E0 (51 bytes)
extern "C" __declspec(naked) int* __cdecl fn_0043B6E0(const int* first, const int* last, int* dest) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        sub eax, edx
        push esi
        sar eax, 0x2
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0x14]
        lea ecx, [4*eax]
        lea esi, [ecx + edi]
        jle short fn0043B6E0_done
        push ecx
        push edx
        push ecx
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
fn0043B6E0_done:
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00435CC0] sub_00435CC0 (51 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00435CC0(void* self, int edx_unused, int a1, int a2, int* a3) {
    __asm {
        push 0xc
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je skip_store0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax], ecx
    skip_store0:
        lea ecx, [eax + 4]
        test ecx, ecx
        je skip_store1
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx], edx
    skip_store1:
        lea ecx, [eax + 8]
        test ecx, ecx
        je skip_store2
        mov edx, dword ptr [esp + 0xc]
        mov edx, dword ptr [edx]
        mov dword ptr [ecx], edx
    skip_store2:
        ret 0xc
    }
}

// [0x00431360] sub_00431360 (52 bytes)
extern "C" void ext_006A651A();
extern "C" __declspec(naked) void __fastcall fn_00431360(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x10c], 0
        je done
        push esi
        mov esi, dword ptr [edi + 0x10c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x15c]
        push 0
        mov ecx, esi
        call edx
        neg eax
        sbb eax, eax
        add eax, 1
        push eax
        push esi
        mov ecx, edi
        call ext_006A651A
        pop esi
    done:
        pop edi
        ret
    }
}

// [0x00434AB0] sub_00434AB0 (55 bytes)
// Copies the two dwords at this[0..1] to the out buffer (arg1), calls _invalid_parameter_noinfo
// when the first dword is null or when this[1] >= vtbl-held limit at [this[0]+8], then advances this[1] by 0x1c.
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00434AB0(void* self, int edx_unused, void* out, int unused) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        mov ecx, dword ptr [esi + 0x4]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [edi], eax
        mov dword ptr [edi + 0x4], ecx
        jne skip1
        call ebx
    skip1:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [edx + 0x8]
        jb skip2
        call ebx
    skip2:
        add dword ptr [esi + 0x4], 0x1c
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0043D780] sub_0043D780 (55 bytes)
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0043D780(void* self) {
    __asm {
        push 0x18
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_skip0
        mov dword ptr [eax], 0
    L_skip0:
        lea ecx, [eax + 4]
        test ecx, ecx
        je L_skip1
        mov dword ptr [ecx], 0
    L_skip1:
        lea ecx, [eax + 8]
        test ecx, ecx
        je L_skip2
        mov dword ptr [ecx], 0
    L_skip2:
        mov byte ptr [eax + 0x14], 1
        mov byte ptr [eax + 0x15], 0
        ret
    }
}

// [0x00430960] sub_00430960 (55 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00465B30();
extern "C" void ext_004694E0();
extern "C" __declspec(naked) void __stdcall fn_00430960(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi]
        call ext_00430370
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        mov edi, dword ptr [esi]
        push 9
        call ext_00465B30
        mov ecx, eax
        call ext_004694E0
        mov edx, dword ptr [edi + 4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0043D370] sub_0043D370 (56 bytes)
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void* __cdecl fn_0043D370(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov eax, edi
        sub eax, esi
        sar eax, 0x2
        cmp esi, edi
        lea ebp, [ebx + 4*eax]
        je done_0043D370
        sub ebx, esi
loop_0043D370:
        push esi
        lea ecx, [ebx + esi]
        call dword ptr [mem_009244D4]
        add esi, 0x4
        cmp esi, edi
        jne loop_0043D370
done_0043D370:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00430780] sub_00430780 (56 bytes)
extern "C" void ext_0044B5B0();

extern "C" __declspec(naked) void __fastcall fn_00430780(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done
        mov edi, dword ptr [esi]
        call ext_0044B5B0
        mov edx, dword ptr [edi + 4]
        xor ecx, ecx
        cmp eax, 4
        sete cl
        push ecx
        mov ecx, esi
        call edx
    done:
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00455F40();
extern "C" void ext_004564A0();

// [0x0043C640] sub_0043C640 (40 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043C640(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00455F40
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0xec], eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_004564A0
        pop esi
        ret 0xc
    }
}

// [0x00430A60] sub_00430A60 (59 bytes)
// Calls sub_00465B40(), then virtual slot 0x220 on the result; if that returns false, calls sub_00430370(this).
// Stores the final bool over stack arg0 and tail-jumps to vtbl[0] of arg0 object.
extern "C" void ext_00430370();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00430A60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x220]
        call eax
        test al, al
        jne short L_false
        mov ecx, esi
        call ext_00430370
        test al, al
        je short L_false
        mov eax, 1
        jmp short L_done
    L_false:
        xor eax, eax
    L_done:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x00430AA0] sub_00430AA0 (59 bytes)
// Calls sub_00465B40(), then virtual slot 0x168 on the result; if that returns false, returns false.
// Otherwise calls sub_00430370(this). Stores the final bool over stack arg0 and tail-jumps to vtbl[0] of arg0 object.
extern "C" void ext_00430370();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00430AA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x168]
        call eax
        test al, al
        je short L_false
        mov ecx, esi
        call ext_00430370
        test al, al
        je short L_false
        mov eax, 1
        jmp short L_done
    L_false:
        xor eax, eax
    L_done:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x0043D7C0] sub_0043D7C0 (61 bytes)
// Stack args: arg1 = first, arg2 = last, arg3 = value. Walks p from last-4 down to first: push p, ecx = value - (last - p), call [mem_009244D4] (callee cleans the pushed arg). Returns value - (last - first) in eax.
extern "C" int mem_009244D4;
extern "C" __declspec(naked) int __fastcall fn_0043D7C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov eax, esi
        sub eax, edi
        sar eax, 2
        add eax, eax
        add eax, eax
        mov ebp, ebx
        sub ebp, eax
        cmp edi, esi
        je done
        sub ebx, esi
    loop_top:
        sub esi, 4
        push esi
        lea ecx, [ebx + esi]
        call dword ptr [mem_009244D4]
        cmp esi, edi
        jne loop_top
    done:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00430EF0] sub_00430EF0 (62 bytes)
// Linear search over std::string elements (0x1c stride) in [first, last) for *value,
// using the imported basic_string operator== (called as op==(elem, value)).
// Returns the first matching element, or last if none matches.
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __cdecl fn_00430EF0(void* first, void* last, const void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je short done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        push ebx
        push esi
        call ebp
        add esp, 0x8
        test al, al
        jne short found
        add esi, 0x1c
        cmp esi, edi
        jne short loop_top
found:
        pop ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        ret
done:
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00434F90] sub_00434F90 (63 bytes)
extern "C" int mem_0092FA04;
extern "C" void ext_00594000();

extern "C" __declspec(naked) bool __fastcall fn_00434F90(void* self) {
    __asm {
        push ebx
        xor bl, bl
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        cmp dword ptr [eax + 0x20], 0x64
        jne L_ret_bl
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x11c]
        call eax
        test al, al
        je L_ret_bl
        push 0x0
        push 0x0
        push offset mem_0092FA04
        call ext_006A5E60
        mov al, 0x1
        pop ebx
        ret
    L_ret_bl:
        mov al, bl
        pop ebx
        ret
    }
}

// [0x00434760] sub_00434760 (65 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00492570();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();

extern "C" __declspec(naked) void __fastcall fn_00434760(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492570
        test al, al
        je short L_no_434760
        mov ecx, esi
        call ext_00430370
        test al, al
        je short L_no_434760
        mov eax, 1
        jmp short L_done_434760
L_no_434760:
        xor eax, eax
L_done_434760:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x00430C00] sub_00430C00 (66 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00465B30();
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_00430C00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x11c]
        call eax
        test al, al
        jne L_true_430C31
        mov ecx, esi
        call ext_00430370
        test al, al
        je L_true_430C31
        mov eax, 1
        jmp L_done_430C33
L_true_430C31:
        xor eax, eax
L_done_430C33:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x0043D290] sub_0043D290 (48 bytes)
extern "C" void ext_0041C660();
extern "C" void ext_006A5EA8();

extern "C" int __fastcall fn_0043D290(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    typedef char (__fastcall *Callee4)(void*, int, int, int, int, int);
    typedef void (__fastcall *Callee0)(void*);
    char r = reinterpret_cast<Callee4>(ext_0041C660)(static_cast<char*>(self) + 0x64, a2, a1, a2, a3, a4);
    if (!r) {
        reinterpret_cast<Callee0>(ext_006A5EA8)(self);
    }
    return 0;
}

// [0x00430CE0] sub_00430CE0 (69 bytes)
extern "C" void ext_00430370();
extern "C" void ext_0044B680();

extern "C" __declspec(naked) void __fastcall fn_00430CE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x100]
        xor bl, bl
        test ecx, ecx
        je L_skip
        call ext_0044B680
        mov bl, al
    L_skip:
        mov esi, dword ptr [esp + 0x14]
        mov ebp, dword ptr [esi]
        mov ecx, edi
        call ext_00430370
        mov edx, dword ptr [ebp]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4]
        movzx ecx, bl
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0043CC60] sub_0043CC60 (71 bytes)
extern "C" int mem_0092563C;
extern "C" __declspec(naked) void __fastcall fn_0043CC60(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_0092563C]
        push esi
        push edi
        push 0x2e
        mov esi, ecx
        call ebx
        mov edi, eax
        push 0x6
        add edi, edi
        call ebx
        mov ecx, dword ptr [esi + 0x108]
        add eax, edi
        lea edx, [ecx + 2*eax]
        mov eax, dword ptr [esp + 0x10]
        add eax, edx
        mov dword ptr [esi + 0xa0], eax
        mov dword ptr [esi + 0xc0], eax
        mov esi, dword ptr [esi + 0x88]
        or dword ptr [esi + 0xd0], 0xc
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0043E640] sub_0043E640 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043E640(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 4
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x004369D0] sub_004369D0 (72 bytes)
extern "C" void __fastcall fn_004369D0(void* self) {
    unsigned int* s = (unsigned int*)self;
    unsigned int head = s[1];
    unsigned int eax = ((unsigned int*)head)[0];
    ((unsigned int*)head)[0] = head;
    ((unsigned int*)s[1])[1] = s[1];
    s[2] = 0;
    if (eax != s[1]) {
        unsigned int edi;
        do {
            edi = ((unsigned int*)eax)[0];
            ext_006A5C5C((void*)eax);
            eax = edi;
        } while (edi != s[1]);
    }
    ext_006A5C5C((void*)s[1]);
    s[1] = 0;
}

// [0x00430550] sub_00430550 (76 bytes)
extern "C" void ext_0044B5B0();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00430550(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xf8]
        call eax
        mov edx, dword ptr [ebx]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done_430550
        mov edi, dword ptr [esi]
        call ext_0044B5B0
        neg eax
        sbb eax, eax
        add eax, 1
        push eax
        mov eax, dword ptr [edi + 4]
        mov ecx, esi
        call eax
done_430550:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00433320] sub_00433320 (77 bytes)
extern "C" void ext_0065C660();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00433320(void* self) {
    __asm {
        push -1
        push 0x008B4838
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004307C0] sub_004307C0 (77 bytes)
extern "C" void ext_0044B5B0();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_004307C0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x10c]
        call eax
        mov edx, dword ptr [ebx]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done_4307C0
        mov edi, dword ptr [esi]
        call ext_0044B5B0
        mov edx, dword ptr [edi + 4]
        xor ecx, ecx
        cmp eax, 5
        sete cl
        push ecx
        mov ecx, esi
        call edx
    done_4307C0:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00430C50] sub_00430C50 (78 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00465B30();
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_00430C50(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_00430370
        test al, al
        je short L_else_00430C50
        push esi
        push edi
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x11c]
        call eax
        mov edx, dword ptr [edi]
        neg al
        mov ecx, esi
        sbb eax, eax
        add eax, 1
        push eax
        call edx
        pop edi
        pop esi
        ret 4
    L_else_00430C50:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 4], 1
        jmp edx
    }
}

// [0x004305A0] sub_004305A0 (79 bytes)
extern "C" void ext_0044B5B0();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_004305A0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esi]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xfc]
        call eax
        mov edx, dword ptr [ebx]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done_4305A0
        mov edi, dword ptr [esi]
        call ext_0044B5B0
        sub eax, 1
        neg eax
        sbb eax, eax
        add eax, 1
        push eax
        mov eax, dword ptr [edi + 4]
        mov ecx, esi
        call eax
done_4305A0:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00434040] sub_00434040 (80 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00434040(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x7c]
        call eax
        mov bl, al
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x80]
        test bl, bl
        sete cl
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [esi + 0x108]
        mov ecx, dword ptr [eax + 0x20]
        push 0x1
        push 0x0
        push ecx
        call dword ptr [mem_00925688]
        pop esi
        pop ebx
        ret
    }
}

// [0x004347B0] sub_004347B0 (84 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_00430380();
extern "C" void ext_00492520();
extern "C" __declspec(naked) void __fastcall fn_004347B0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, esi
        mov edi, eax
        call ext_00430380
        test al, al
        je short L_false
        push 0
        mov ecx, edi
        call ext_00492520
        test eax, eax
        je short L_false
        push 1
        mov ecx, edi
        call ext_00492520
        test eax, eax
        je short L_false
        mov eax, 1
        jmp short L_done
    L_false:
        xor eax, eax
    L_done:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        pop edi
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x004342E0] sub_004342E0 (86 bytes)
extern "C" void ext_00430370();

extern "C" __declspec(naked) void __fastcall fn_004342E0(void* self, int edx_unused, void* a1) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x10c], 0
        je short L_004342E0_else
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esi]
        call ext_00430370
        mov edx, dword ptr [ebx]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x10c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        mov edi, dword ptr [esi]
        call edx
        push eax
        mov eax, dword ptr [edi + 4]
        mov ecx, esi
        call eax
        pop esi
        pop ebx
        pop edi
        ret 4
    L_004342E0_else:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        pop edi
        mov dword ptr [esp + 4], 0
        jmp eax
    }
}

// [0x004306C0] sub_004306C0 (86 bytes)
extern "C" void ext_0044B5B0();
extern "C" void ext_0044B5C0();

extern "C" __declspec(naked) void __fastcall fn_004306C0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        mov esi, ecx
        push 1
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi + 0x100]
        test ecx, ecx
        je done_4306C0
        call ext_0044B5B0
        cmp eax, 6
        jne fallback_4306C0
        mov ecx, dword ptr [esi + 0x100]
        call ext_0044B5C0
        cmp eax, 1
        jne fallback_4306C0
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, edi
        call eax
        pop edi
        pop esi
        ret 4
    fallback_4306C0:
        mov edx, dword ptr [edi]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, edi
        call eax
    done_4306C0:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430720] sub_00430720 (90 bytes)
extern "C" void ext_0044B5B0();
extern "C" void ext_0044B5C0();

extern "C" __declspec(naked) int __fastcall fn_00430720(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done
        call ext_0044B5B0
        cmp eax, 6
        jne fail
        mov ecx, dword ptr [edi + 0x100]
        call ext_0044B5C0
        test eax, eax
        jne fail
        mov edx, dword ptr [esi]
        mov eax, 1
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 4
fail:
        mov edx, dword ptr [esi]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        call eax
done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00430660] sub_00430660 (91 bytes)
extern "C" void ext_0044B5B0();

extern "C" __declspec(naked) int __fastcall fn_00430660(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x100]
        test ecx, ecx
        je done
        call ext_0044B5B0
        cmp eax, 3
        je success
        mov ecx, dword ptr [edi + 0x100]
        call ext_0044B5B0
        cmp eax, 7
        je success
        mov edx, dword ptr [esi]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 4
    success:
        mov edx, dword ptr [esi]
        mov eax, 1
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        call eax
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0043E090] sub_0043E090 (92 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0043E090(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x58]
        cmp esi, dword ptr [ecx + 0x5c]
        push edi
        lea edi, [ecx + 0x54]
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
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [eax]
        push edx
        call eax
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

// [0x00434700] sub_00434700 (93 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" void ext_00492570();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();

extern "C" __declspec(naked) void __fastcall fn_00434700(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492570
        test al, al
        jne L_true_43474C
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x11c]
        call eax
        test al, al
        jne L_true_43474C
        mov ecx, esi
        call ext_00430370
        test al, al
        je L_true_43474C
        mov eax, 1
        jmp L_done_43474E
    L_true_43474C:
        xor eax, eax
    L_done_43474E:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx]
        jmp eax
    }
}

// [0x0043C670] sub_0043C670 (94 bytes)
extern "C" void __fastcall fn_0043C670(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x165) = 1;
    *(int*)(p + 0x168) = 0x1f4;
    *(int*)(p + 0x16c) = 0x1388;
    *(int*)(p + 0x170) = 0xe1;
    *(int*)(p + 0x174) = 2;
    *(unsigned char*)(p + 0x178) = 1;
    *(int*)(p + 0x17c) = 1;
    *(int*)(p + 0x180) = 0;
    *(int*)(p + 0x188) = 1;
    *(int*)(p + 0x184) = 8;
    *(unsigned char*)(p + 0x166) = 0;
}

// [0x00434810] sub_00434810 (97 bytes)
extern "C" void ext_00430380();
extern "C" void ext_00492520();
extern "C" void ext_004925D0();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" __declspec(naked) void __fastcall fn_00434810(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, esi
        mov edi, eax
        call ext_00430380
        test al, al
        je short L_false_434810
        push 0
        mov ecx, edi
        call ext_00492520
        test eax, eax
        je short L_false_434810
        mov eax, 1
        jmp short L_done_434810
    L_false_434810:
        xor eax, eax
    L_done_434810:
        mov esi, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, esi
        call eax
        mov ebx, dword ptr [esi]
        push 0
        mov ecx, edi
        call ext_004925D0
        mov edx, dword ptr [ebx + 4]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00434880] sub_00434880 (97 bytes)
extern "C" __declspec(naked) void __fastcall fn_00434880(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, esi
        mov edi, eax
        call ext_00430380
        test al, al
        je short L_false_434880
        push 1
        mov ecx, edi
        call ext_00492520
        test eax, eax
        je short L_false_434880
        mov eax, 1
        jmp short L_done_434880
    L_false_434880:
        xor eax, eax
    L_done_434880:
        mov esi, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx]
        mov ecx, esi
        call eax
        mov ebx, dword ptr [esi]
        push 1
        mov ecx, edi
        call ext_004925D0
        mov edx, dword ptr [ebx + 4]
        movzx ecx, al
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x004305F0] sub_004305F0 (103 bytes)
extern "C" void ext_0044B5B0();

extern "C" __declspec(naked) void __fastcall fn_004305F0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        mov esi, ecx
        push 1
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi + 0x100]
        test ecx, ecx
        je done
        push ebx
        call ext_0044B5B0
        mov ecx, dword ptr [esi + 0x100]
        cmp eax, 2
        sete bl
        call ext_0044B5B0
        cmp eax, 9
        sete al
        test bl, bl
        pop ebx
        jne take1
        test al, al
        jne take1
        mov edx, dword ptr [edi]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, edi
        call eax
        pop edi
        pop esi
        ret 4
take1:
        mov edx, dword ptr [edi]
        mov eax, 1
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, edi
        call eax
done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0043B560] sub_0043B560 (103 bytes)
extern "C" void ext_004410C0();

extern "C" __declspec(naked) void __cdecl fn_0043B560(void* first, int hole, int top, int value) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea eax, [edi - 1]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp dword ptr [esp + 0x14], edi
        jge L_store_top
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
L_loop:
        mov ecx, dword ptr [ebx + 4*esi]
        call ext_004410C0
        cmp eax, 1
        jle L_done
        mov ecx, ebp
        call ext_004410C0
        cmp eax, 1
        jg L_done
        mov eax, dword ptr [ebx + 4*esi]
        mov dword ptr [ebx + 4*edi], eax
        lea eax, [esi - 1]
        cdq
        sub eax, edx
        mov edi, esi
        sar eax, 1
        cmp dword ptr [esp + 0x1c], edi
        mov esi, eax
        jl L_loop
L_done:
        mov dword ptr [ebx + 4*edi], ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret
L_store_top:
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [edx + 4*edi], ecx
        pop edi
        pop esi
        ret
    }
}

// [0x0043CF30] sub_0043CF30 (103 bytes)
extern "C" void ext_00455F40();
extern "C" void ext_006A65F8();
extern "C" int mem_0092566C;
extern "C" int mem_00925710;

extern "C" __declspec(naked) void __fastcall fn_0043CF30(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov ecx, dword ptr [esi + 0x18c]
        call ext_00455F40
        test eax, eax
        je short L_else_0043CF30
        mov edx, dword ptr [esp + 0x10]
        sub edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x20]
        xor eax, eax
        cmp dword ptr [esi + 0xf8], edx
        setg al
        push eax
        push 0x1
        push ecx
        jmp short L_call_0043CF30
    L_else_0043CF30:
        mov edx, dword ptr [esi + 0x20]
        push 0x0
        push 0x1
        push edx
    L_call_0043CF30:
        call dword ptr [mem_00925710]
        mov eax, dword ptr [esi + 0xf8]
        push 0x1
        push eax
        push 0x0
        push 0x1
        mov ecx, esi
        call ext_006A65F8
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0043D710] sub_0043D710 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043D710(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 0x10], ebx
        je L_0043D739
        jmp L_0043D720
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_0043D720:
        mov eax, dword ptr [esi + 0x10]
        cmp eax, ebx
        je L_0043D734
        add eax, -1
        cmp eax, ebx
        mov dword ptr [esi + 0x10], eax
        jne L_0043D734
        mov dword ptr [esi + 0x0c], ebx
L_0043D734:
        cmp dword ptr [esi + 0x10], ebx
        jne L_0043D720
L_0043D739:
        push edi
        mov edi, dword ptr [esi + 0x08]
        cmp edi, ebx
        jbe L_0043D75E
L_0043D741:
        mov eax, dword ptr [esi + 0x04]
        sub edi, 1
        cmp dword ptr [eax + 4*edi], ebx
        lea eax, [eax + 4*edi]
        je L_0043D75A
        mov ecx, dword ptr [eax]
        push ecx
        call ext_006A5C5C
        add esp, 4
L_0043D75A:
        cmp edi, ebx
        ja L_0043D741
L_0043D75E:
        mov eax, dword ptr [esi + 0x04]
        cmp eax, ebx
        pop edi
        je L_0043D76F
        push eax
        call ext_006A5C5C
        add esp, 4
L_0043D76F:
        mov dword ptr [esi + 0x04], ebx
        mov dword ptr [esi + 0x08], ebx
        pop esi
        pop ebx
        ret
    }
}

// [0x0043CE40] sub_0043CE40 (105 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_0092566C;
extern "C" int mem_00993828;

extern "C" __declspec(naked) int __fastcall fn_0043CE40(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov eax, dword ptr [esi + 0xf8]
        mov dword ptr [esp + 0x4], eax
        sub eax, dword ptr [esp + 0x14]
        fild dword ptr [esp + 0x4]
        add eax, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        fild dword ptr [esp + 0x1c]
        fld st(2)
        fldz
        fadd st(1), st
        fld qword ptr [mem_00993828]
        fmul st(2), st
        fxch st(3)
        fsubrp st(2), st
        fld st(3)
        fsub st, st(1)
        fxch st(5)
        fsub st, st(1)
        fdivp st(5), st
        fxch st(1)
        fmulp st(4), st
        faddp st(2), st
        fmulp st(1), st
        faddp st(1), st
        call ext_006A6DE0
        pop esi
        add esp, 0x14
        ret 0x4
    }
}

// [0x0043DCF0] sub_0043DCF0 (99 bytes)
extern "C" void ext_005DF6B0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0043DCF0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 0xa4]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_005DF6B0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
L_inv1:
        call ebp
L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_end
        test edi, edi
        jne L_ok2
        call ebp
L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
L_ok3:
        mov eax, dword ptr [esi + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
L_end:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004360C0] sub_004360C0 (105 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_005B11F0();
extern "C" void ext_0042FE70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004360C0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        call ext_005B11F0
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je done_4360C0
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 0x2
        je done_4360C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push ebp
        push edi
        mov ecx, esi
        call edx
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe bounds_ok_4360C0
        call ebp
        cmp edi, dword ptr [esi + 0x8]
bounds_ok_4360C0:
        jb load_4360C0
        call ebp
load_4360C0:
        mov edi, dword ptr [edi]
        test edi, edi
        je skip_4360C0
        push edi
        mov ecx, ebx
        call ext_0042FE70
skip_4360C0:
        pop edi
        pop ebp
done_4360C0:
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x0043CA30] sub_0043CA30 (106 bytes)
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_0043CA30(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x1a4]
        fld qword ptr [ecx + 0xf0]
        fsub qword ptr [ecx + 0xe8]
        mov edx, dword ptr [ecx + 0xfc]
        push esi
        mov esi, eax
        fst qword ptr [ecx + 0x100]
        sub esi, edx
        mov dword ptr [esp + 0x4], esi
        fild dword ptr [esp + 0x4]
        add edx, eax
        mov dword ptr [esp + 0x4], edx
        pop esi
        fst qword ptr [ecx + 0x108]
        fld qword ptr [ecx + 0xf0]
        fadd qword ptr [ecx + 0xe8]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp qword ptr [ecx + 0x110]
        fild dword ptr [esp]
        fmulp st(1), st
        fstp qword ptr [ecx + 0x118]
        __asm _emit 0xDE __asm _emit 0xF1
        fstp qword ptr [ecx + 0x120]
        pop ecx
        ret
    }
}

// [0x0043E5D0] sub_0043E5D0 (106 bytes)
extern "C" void ext_0043D370();
extern "C" int mem_00925134;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0043E5D0(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_0043D370
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 4
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x0043CDD0] sub_0043CDD0 (109 bytes)
extern "C" int mem_0092566C;
extern "C" int mem_00993828;

extern "C" __declspec(naked) double __fastcall fn_0043CDD0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        fild dword ptr [esi + 0xfc]
        fild dword ptr [esp + 0xc]
        fld qword ptr [esi + 0xe8]
        fld qword ptr [esi + 0xf0]
        pop esi
        fld st(0)
        fsub st, st(2)
        fld st(3)
        fsub st, st(5)
        fdivp st(1), st
        fild dword ptr [esp + 0x14]
        fxch st(5)
        faddp st(4), st
        fld qword ptr [mem_00993828]
        fmul st(4), st
        fxch st(5)
        fsubrp st(4), st
        fmulp st(3), st
        faddp st(1), st
        fmulp st(2), st
        faddp st(1), st
        fldz
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_small
        fstp st(1)
        add esp, 0x10
        ret 0x4
    L_small:
        fstp st(0)
        add esp, 0x10
        ret 0x4
    }
}

// [0x0043CEB0] sub_0043CEB0 (39 bytes)
extern "C" void ext_0043CDD0();
extern "C" int mem_0092BD70;

extern "C" __declspec(naked) int __fastcall fn_0043CEB0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_0043CDD0
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp]
        fld qword ptr [esp]
        fistp dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    }
}

// [0x0043D800] sub_0043D800 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043D800(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loop_top_0043D800:
        cmp ebp, dword ptr [esp + 0x2c]
        je done_0043D800
        mov esi, ebp
        mov edi, ebp
        shr esi, 0x2
        and edi, 0x3
        test ebx, ebx
        jne ok1_0043D800
        call dword ptr [mem_00925134]
ok1_0043D800:
        mov eax, dword ptr [ebx + 0x10]
        add eax, dword ptr [ebx + 0xc]
        cmp ebp, eax
        jb ok2_0043D800
        call dword ptr [mem_00925134]
ok2_0043D800:
        mov eax, dword ptr [ebx + 0x8]
        cmp eax, esi
        ja ok3_0043D800
        sub esi, eax
ok3_0043D800:
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ecx + 4*esi]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [esp + 0x30]
        cmp eax, dword ptr [ecx]
        je done_0043D800
        add ebp, 0x1
        jmp loop_top_0043D800
done_0043D800:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr [eax + 0x8], ebp
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        mov dword ptr [eax], 0
        pop ebx
        ret
    }
}

extern "C" void ext_0043D800();

// [0x0043E690] sub_0043E690 (94 bytes)
extern "C" __declspec(naked) void __cdecl fn_0043E690() {
    __asm {
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        sub esp, 0xc
        push eax
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [eax], 0x0
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        lea eax, [esp + 0x1c]
        push eax
        call ext_0043D800
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x30]
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        add esp, 0x2c
        ret
    }
}

// [0x00434DB0] sub_00434DB0 (121 bytes)
extern "C" int mem_00924E7C;
extern "C" int mem_00924E80;
extern "C" int mem_00924EA0;
extern "C" int mem_00924E9C;
extern "C" __declspec(naked) void __fastcall fn_00434DB0(void* self) {
    __asm {
        push -1
        push 0x87a638
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924E7C]
        test al, al
        jne L_skip_osfx
        mov ecx, dword ptr [esi]
        call dword ptr [mem_00924E80]
L_skip_osfx:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        add ecx, eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924EA0]
        test eax, eax
        je L_skip_unlock
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        call dword ptr [mem_00924EA0]
        mov ecx, eax
        call dword ptr [mem_00924E9C]
L_skip_unlock:
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00431460] sub_00431460 (121 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) void __fastcall fn_00431460(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x879eb0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [mem_00924FA0]
        push ecx
        add edx, 0xc
        push edx
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x43149d
        ret
    }
}

// [0x0043DDF0] sub_0043DDF0 (111 bytes)
extern "C" int mem_00993830;
extern "C" int mem_009320F0;
extern "C" void ext_00466BA0();

extern "C" __declspec(naked) void __fastcall fn_0043DDF0(void* self, int edx_unused, double a1) {
    __asm {
        fld qword ptr [esp + 0x4]
        fld st(0)
        fadd qword ptr [ecx + 0xe8]
        fxch st(1)
        fadd qword ptr [ecx + 0xf0]
        fld qword ptr [mem_00993830]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jp L_43DE32
        fld qword ptr [mem_009320F0]
        fcomp st(1)
        fnstsw ax
        test ah, 0x1
        jne L_43DE32
        fxch st(1)
        fstp qword ptr [ecx + 0xe8]
        fstp qword ptr [ecx + 0xf0]
        jmp L_43DE36
    L_43DE32:
        fstp st(1)
        fstp st(0)
    L_43DE36:
        fld qword ptr [ecx + 0xe8]
        push 0
        fstp dword ptr [esp + 0x8]
        lea eax, [esp + 0x8]
        fld qword ptr [ecx + 0xf0]
        push eax
        add ecx, 0x13c
        fstp dword ptr [esp + 0x10]
        call ext_00466BA0
        ret 0x8
    }
}

// [0x0043B450] sub_0043B450 (123 bytes)
extern "C" void ext_0066A310();

extern "C" __declspec(naked) void __fastcall fn_0043B450(void* self) {
    __asm {
        push -1
        push 0x87b227
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x4], esi
        call ext_0066A310
        lea ecx, [esi + 0x34]
        mov dword ptr [esp + 0x10], 0
        call ext_0066A310
        lea ecx, [esi + 0x44]
        mov byte ptr [esp + 0x10], 1
        call ext_0066A310
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 2
        call ext_0066A310
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x10], 3
        call ext_0066A310
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x10], 4
        call ext_0066A310
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0043B5D0] sub_0043B5D0 (123 bytes)
extern "C" __declspec(naked) void __cdecl fn_0043B5D0(int* p0, int* p1, int* p2) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [edi]
        call ext_004410C0
        cmp eax, 1
        jle L_s1
        mov ecx, ebx
        call ext_004410C0
        cmp eax, 1
        jg L_s1
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
L_s1:
        mov ebx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push ebp
        mov ebp, dword ptr [esi]
        call ext_004410C0
        cmp eax, 1
        jle L_s2
        mov ecx, ebp
        call ext_004410C0
        cmp eax, 1
        jg L_s2
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
L_s2:
        mov ecx, dword ptr [esi]
        mov ebx, dword ptr [edi]
        call ext_004410C0
        cmp eax, 1
        pop ebp
        jle L_s3
        mov ecx, ebx
        call ext_004410C0
        cmp eax, 1
        jg L_s3
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [edi], eax
L_s3:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00436A50] sub_00436A50 (127 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00436A50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0xec]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        lea esi, [ecx + 0xe8]
        push edi
        mov edi, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        jmp L_00436A70
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_00436A70:
        test esi, esi
        mov ebx, dword ptr [esi + 0x4]
        je L_00436A7B
        cmp esi, esi
        je L_00436A81
    L_00436A7B:
        call dword ptr [mem_00925134]
    L_00436A81:
        cmp edi, ebx
        je L_00436AB1
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne L_00436A91
        call ebx
    L_00436A91:
        cmp edi, dword ptr [esi + 0x4]
        jne L_00436A98
        call ebx
    L_00436A98:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x178]
        push ebp
        call eax
        cmp edi, dword ptr [esi + 0x4]
        jne L_00436AAD
        call ebx
    L_00436AAD:
        mov edi, dword ptr [edi]
        jmp L_00436A70
    L_00436AB1:
        cmp byte ptr [esp + 0x1c], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        je L_00436ACB
        mov ecx, dword ptr [esp]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x150]
        push 1
        call eax
    L_00436ACB:
        pop ecx
        ret 0x8
    }
}

// [0x00435FF0] sub_00435FF0 (127 bytes)
extern "C" void ext_00468F70();
extern "C" void ext_005B11F0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00435FF0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        call ext_005B11F0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x2c]
        call eax
        mov ebp, dword ptr [mem_00925134]
        mov esi, eax
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
        nop
    L_chk1:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk2
        call ebp
    L_chk2:
        cmp ebx, edi
        jae L_false
        cmp ebx, dword ptr [esi + 0x8]
        jb L_body
        call ebp
    L_body:
        mov edi, dword ptr [ebx]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0xf8]
        mov ecx, edi
        call eax
        cmp eax, 0x6
        je L_found
        cmp ebx, dword ptr [esi + 0x8]
        jb L_next
        call ebp
    L_next:
        add ebx, 0x4
        jmp L_chk1
    L_found:
        push edi
        call ext_00465B30
        mov ecx, eax
        call ext_00468F70
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret
    L_false:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
    }
}

// [0x00436070] sub_00436070 (67 bytes)
extern "C" void ext_006A60D0();
extern "C" void ext_00465B40();
extern "C" void ext_00465B30();
extern "C" void ext_00469060();
extern "C" void ext_00435FF0();

extern "C" __declspec(naked) void __fastcall fn_00436070(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A60D0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd4]
        call eax
        call ext_00465B30
        mov ecx, eax
        call ext_00469060
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xf4]
        call eax
    L_loop_00436070:
        mov ecx, esi
        call ext_00435FF0
        test al, al
        jne short L_loop_00436070
        pop esi
        ret
    }
}

// [0x00436C60] sub_00436C60 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00436C60(void* self) {
    __asm {
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+8Ch]
        call eax
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+54h]
        jmp eax
    }
}

// [0x00436C90] sub_00436C90 (36 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00436C90(void* self) {
    __asm {
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+8Ch]
        call eax
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+50h]
        jmp eax
    }
}

// [0x00436AF0] sub_00436AF0 (39 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00436AF0(void* self) {
    __asm {
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+8Ch]
        call eax
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+90h]
        jmp eax
    }
}

// [0x00436CC0] sub_00436CC0 (56 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_00436CC0(void* self) {
    typedef void* (__cdecl *GetFn)();
    typedef void (__thiscall *Fn0)(void*);
    typedef void (__thiscall *Fn1)(void*, int);

    ext_00436070();
    void* a = ((GetFn)ext_00465B40)();
    ((Fn0)(*(void***)a)[0x8c / 4])(a);
    void* b = ((GetFn)ext_00465B40)();
    ((Fn0)(*(void***)b)[0x64 / 4])(b);
    void* c = ((GetFn)ext_00465B40)();
    ((Fn1)(*(void***)c)[0x98 / 4])(c, 5);
}

// [0x00436D00] sub_00436D00 (56 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_00436D00(void* self) {
    typedef void* (__cdecl *GetFn)();
    typedef void (__thiscall *Fn0)(void*);
    typedef void (__thiscall *Fn1)(void*, int);

    ext_00436070();
    void* a = ((GetFn)ext_00465B40)();
    ((Fn0)(*(void***)a)[0x8c / 4])(a);
    void* b = ((GetFn)ext_00465B40)();
    ((Fn0)(*(void***)b)[0x68 / 4])(b);
    void* c = ((GetFn)ext_00465B40)();
    ((Fn1)(*(void***)c)[0x98 / 4])(c, 5);
}

// [0x00436BE0] sub_00436BE0 (84 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B30();
extern "C" void ext_00465B40();
extern "C" void ext_0046F930();
extern "C" void ext_00493F80();
extern "C" void ext_00594000();
extern "C" void ext_0044B7C0();
extern "C" __declspec(naked) void __fastcall fn_00436BE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
        call ext_00465B30
        cmp dword ptr [eax + 0x14], 0
        je L_skip
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F930
L_skip:
        call ext_00594000
        lea ecx, [eax + 0x258]
        call ext_00493F80
        mov ecx, esi
        call ext_00436070
        mov ecx, dword ptr [esi + 0x100]
        test ecx, ecx
        pop esi
        je L_ret
        jmp ext_0044B7C0
L_ret:
        ret
    }
}

// [0x00436E50] sub_00436E50 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_00436E50(void* self) {
    __asm {
        push ecx
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
        mov dword ptr [esp], 0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x6c]
        lea ecx, [esp]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        je L_436E9A
        add dword ptr [esp], 1
        call ext_00465B40
        mov ecx, dword ptr [esp]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x70]
        push ecx
        mov ecx, eax
        call edx
L_436E9A:
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        pop ecx
        ret
    }
}

// [0x00436EB0] sub_00436EB0 (101 bytes)
extern "C" __declspec(naked) void __fastcall fn_00436EB0(void* self) {
    __asm {
        push ecx
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
        mov dword ptr [esp], 0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x6c]
        lea ecx, [esp]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        je L_436F00
        cmp dword ptr [esp], 0
        jle L_436F00
        sub dword ptr [esp], 1
        call ext_00465B40
        mov ecx, dword ptr [esp]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x70]
        push ecx
        mov ecx, eax
        call edx
L_436F00:
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        pop ecx
        ret
    }
}

// [0x00436DD0] sub_00436DD0 (114 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();
extern "C" __declspec(naked) void __fastcall fn_00436DD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x9c]
        call eax
        test eax, eax
        jle done
        push ebx
        push edi
        mov ecx, esi
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov edx, dword ptr [edi]
        mov ebx, eax
        mov esi, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x9c]
        mov ecx, edi
        add esi, 0x58
        call eax
        mov edx, dword ptr [esi]
        sub eax, 1
        push eax
        mov ecx, ebx
        call edx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
        pop edi
        pop ebx
        done:
        pop esi
        ret
    }
}

// [0x0043B4D0] sub_0043B4D0 (129 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043B4D0(void* self) {
    __asm {
        push -1
        push 0x87b227
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x10], 0x4
        call ext_00493D90
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x10], 0x3
        call ext_00493D90
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00493D90
        lea ecx, [esi + 0x44]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00493D90
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00493D90
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0043B650] sub_0043B650 (130 bytes)
extern "C" void ext_0043B560();
extern "C" void ext_004410C0();

extern "C" __declspec(naked) void __cdecl fn_0043B650(void* first, int hole, int len, int value, void* comp) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        lea esi, [ebx + ebx + 0x2]
        cmp esi, eax
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], ebx
        jge L_bottom_jne
        push ebp
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
L_loop:
        mov ecx, dword ptr [edi + 4*esi]
        mov ebp, dword ptr [edi + 4*esi - 0x4]
        call ext_004410C0
        cmp eax, 0x1
        jle L_pick
        mov ecx, ebp
        call ext_004410C0
        cmp eax, 0x1
        jg L_pick
        sub esi, 0x1
L_pick:
        mov eax, dword ptr [edi + 4*esi]
        mov dword ptr [edi + 4*ebx], eax
        mov ebx, esi
        lea esi, [esi + esi + 0x2]
        cmp esi, dword ptr [esp + 0x1c]
        jl L_loop
        mov eax, dword ptr [esp + 0x1c]
        pop ebp
        cmp esi, eax
L_bottom_jne:
        jne L_push
        mov ecx, dword ptr [edi + 4*eax - 0x4]
        mov dword ptr [edi + 4*ebx], ecx
        lea ebx, [eax - 0x1]
L_push:
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push eax
        push ecx
        push ebx
        push edi
        call ext_0043B560
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0043B7D0] sub_0043B7D0 (63 bytes)
extern "C" void __cdecl fn_0043B650(void* first, int hole, int len, int value, void* comp);

extern "C" void __cdecl fn_0043B7D0(unsigned int* first, unsigned int* last, int comp) {
    int len = last - first;
    for (int hole = len / 2; hole > 0; ) {
        --hole;
        fn_0043B650(first, hole, len, first[hole], (void*)comp);
    }
}

// [0x0043BAF0] sub_0043BAF0 (74 bytes)
extern "C" void ext_0043B650();

extern "C" __declspec(naked) void __cdecl fn_0043BAF0(unsigned int* first, unsigned int* last, int comp) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        mov eax, esi
        sar eax, 0x2
        cmp eax, 0x1
        jle done
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        mov eax, dword ptr [edi + esi - 0x4]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        lea edx, [esi - 0x4]
        sar edx, 0x2
        push edx
        push 0x0
        push edi
        mov dword ptr [edi + esi - 0x4], ecx
        call ext_0043B650
        sub esi, 0x4
        mov eax, esi
        sar eax, 0x2
        add esp, 0x14
        cmp eax, 0x1
        jg loop_top
        pop ebx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00430FC0] sub_00430FC0 (131 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A64F0();
extern "C" int mem_00924300;
extern "C" int mem_0093A090;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_00430FC0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_006A5EDE
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [eax + 0x4]
        push 0x0
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [mem_0093A090]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_006A64F0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924300]
        mov esi, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

extern "C" int mem_0092478C;
extern "C" int mem_00924788;
extern "C" int mem_00924784;
extern "C" int mem_0092431C;
extern "C" int mem_00924780;

// [0x00430E20] sub_00430E20 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430E20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x879e7a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x20]
        xor ebx, ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0xc], ebx
        call dword ptr [mem_0092478C]
        mov edi, dword ptr [esp + 0x20]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924788]
        mov dword ptr [esp + 0x18], ebx
        mov ebx, dword ptr [esp + 0x28]
        push ebx
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_00924784]
        add esp, 4
        push eax
        push ebx
        mov ecx, esi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        push eax
        push edi
        call dword ptr [mem_00924780]
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0x14
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00433440] sub_00433440 (132 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00433440(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a469
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x204]
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x433479
        ret
    }
}

// [0x00434090] sub_00434090 (132 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00434090(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a5d9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x20c]
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4340c9
        ret
    }
}

// [0x004332F0] sub_004332F0 (35 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9FA74;

extern "C" void __fastcall fn_004332F0(void* self, int edx_unused, void* a1) {
    typedef void* (__fastcall *FnA)(void* self, int edx_unused, void* a1);
    typedef void (__cdecl *FnB)(void* dst, void* src);
    void* r = ((FnA)ext_0063EFE0)(a1, edx_unused, (void*)mem_00A9FA74);
    ((FnB)ext_004275E0)((char*)self + 0x04, r);
}

// [0x0043DD60] sub_0043DD60 (134 bytes)
extern "C" int mem_00993830;
extern "C" int mem_00996B98;
extern "C" int mem_009320F0;
extern "C" void ext_00466BA0();

extern "C" __declspec(naked) void __fastcall fn_0043DD60(void* self, int edx_unused, double a1, double a2) {
    __asm {
        fld qword ptr [esp + 0x4]
        fst qword ptr [ecx + 0xe8]
        fld qword ptr [mem_00993830]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_43DD83
        fstp qword ptr [ecx + 0xe8]
        jmp L_43DD85
    L_43DD83:
        fstp st(0)
    L_43DD85:
        fld qword ptr [esp + 0xc]
        fst qword ptr [ecx + 0xf0]
        fld qword ptr [mem_00996B98]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne L_43DDA8
        fstp st(1)
    L_43DDA0:
        fstp qword ptr [ecx + 0xf0]
        jmp L_43DDBD
    L_43DDA8:
        fstp st(0)
        fld qword ptr [mem_009320F0]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_43DDA0
        fstp st(0)
    L_43DDBD:
        fld qword ptr [ecx + 0xe8]
        push 0x0
        fstp dword ptr [esp + 0x8]
        lea eax, [esp + 0x8]
        fld qword ptr [ecx + 0xf0]
        push eax
        add ecx, 0x13c
        fstp dword ptr [esp + 0x10]
        call ext_00466BA0
        ret 0x10
    }
}

// [0x004320A0] sub_004320A0 (134 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004320A0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a129
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c8]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4320db
        ret
    }
}

// [0x00432130] sub_00432130 (134 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00432130(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a149
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1d0]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43216b
        ret
    }
}

// [0x004321C0] sub_004321C0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004321C0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a169
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1cc]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4321fb
        ret
    }
}

// [0x00432250] sub_00432250 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432250(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a189
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1d4]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43228b
        ret
    }
}

// [0x004322E0] sub_004322E0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004322E0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a1a9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1f0]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43231b
        ret
    }
}

// [0x00432370] sub_00432370 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432370(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a1c9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1e8]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4323ab
        ret
    }
}

// [0x00432400] sub_00432400 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432400(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a1e9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1ec]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43243b
        ret
    }
}

// [0x00432490] sub_00432490 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432490(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a209
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1e4]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4324cb
        ret
    }
}

// [0x00432520] sub_00432520 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432520(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a229
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c8]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43255b
        ret
    }
}

// [0x004325B0] sub_004325B0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004325B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a249
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1d0]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4325eb
        ret
    }
}

// [0x00432640] sub_00432640 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432640(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a269
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1cc]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43267b
        ret
    }
}

// [0x004326D0] sub_004326D0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004326D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a289
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1d4]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43270b
        ret
    }
}

// [0x00432760] sub_00432760 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432760(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a2a9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1f0]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43279b
        ret
    }
}

// [0x004327F0] sub_004327F0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004327F0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a2c9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1e8]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43282b
        ret
    }
}

// [0x00432880] sub_00432880 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432880(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a2e9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1ec]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4328bb
        ret
    }
}

// [0x00432910] sub_00432910 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00432910(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a309
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1e4]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43294b
        ret
    }
}

// [0x004334D0] sub_004334D0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004334D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a489
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x208]
        push 0x0
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43350b
        ret
    }
}

// [0x00433560] sub_00433560 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00433560(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a4a9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x208]
        push 0x1
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43359b
        ret
    }
}

// [0x004335F0] sub_004335F0 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_004335F0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a4c9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x208]
        push 0x2
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43362b
        ret
    }
}

// [0x00433680] sub_00433680 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00433680(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a4e9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x208]
        push 0x3
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x4336bb
        ret
    }
}

// [0x00433710] sub_00433710 (134 bytes)
extern "C" __declspec(naked) void __fastcall fn_00433710(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a509
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x208]
        push 0x4
        call eax
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, 0x43374b
        ret
    }
}

// [0x00436D40] sub_00436D40 (135 bytes)
extern "C" void ext_00436070();
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_00436D40(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xa0]
        call eax
        mov edx, dword ptr [edi]
        mov ebx, eax
        mov eax, dword ptr [edx + 0x9c]
        mov ecx, edi
        call eax
        cmp eax, ebx
        jge done
        mov ecx, esi
        call ext_00436070
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov edx, dword ptr [edi]
        mov ebx, eax
        mov esi, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x9c]
        mov ecx, edi
        add esi, 0x58
        call eax
        mov edx, dword ptr [esi]
        add eax, 1
        push eax
        mov ecx, ebx
        call edx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x98]
        push 5
        call eax
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x004331D0] sub_004331D0 (138 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00469170();
extern "C" void ext_006A651A();
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_004331D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x114]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x15c]
        push 0x0
        mov ecx, edi
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        push edi
        mov ecx, esi
        call ext_006A651A
        mov ecx, dword ptr [esi + 0x114]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        call edx
        test eax, eax
        je done
        mov eax, dword ptr [esi + 0x114]
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_0092568C]
        mov eax, dword ptr [esi + 0x114]
        mov edx, dword ptr [eax + 0x14c]
        lea ecx, [eax + 0x14c]
        mov eax, dword ptr [edx]
        call eax
        mov esi, dword ptr [esi + 0x114]
        mov edi, dword ptr [esi + 0x148]
        add esi, 0x148
        call ext_00465B30
        mov ecx, eax
        call ext_00469170
        mov edx, dword ptr [edi]
        push eax
        mov ecx, esi
        call edx
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x004343C0] sub_004343C0 (141 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_0046F880();
extern "C" void ext_0046F890();
extern "C" void ext_0046F8A0();
extern "C" void ext_00430370();

extern "C" __declspec(naked) void __fastcall fn_004343C0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F890
        mov bl, al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F880
        mov byte ptr [esp + 0x12], al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F8A0
        mov esi, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esi]
        mov ecx, edi
        mov byte ptr [esp + 0x13], al
        call ext_00430370
        mov edx, dword ptr [ebp]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        test bl, bl
        je L_4343C0_false
        cmp byte ptr [esp + 0x12], 0x0
        je L_4343C0_false
        cmp byte ptr [esp + 0x13], 0x0
        jne L_4343C0_false
        mov edx, dword ptr [esi]
        mov eax, 0x1
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L_4343C0_false:
        mov edx, dword ptr [esi]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x0043BB40] sub_0043BB40 (143 bytes)
extern "C" int mem_009242F0;

extern "C" __declspec(naked) void* __fastcall fn_0043BB40(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x8b73f8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        push 0x928b5d
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x931ea4
        mov dword ptr [esi + 0x4], eax
        call dword ptr [mem_009242F0]
        xor edi, edi
        push 0x928b5d
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x18], edi
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x10], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x24], edx
        mov dword ptr [esi + 0x28], 0xe
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0043D580] sub_0043D580 (143 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924494;
extern "C" int mem_009242F4;

// try { for (p = first; p != last; ++p, ++dest) { if (dest) ctor(dest, p); } }
// catch (...) { destroy [begin, dest); throw; }
// return dest;
// Naked: EH frame written out by hand (see fn_004062C0 for the same pattern).
extern "C" __declspec(naked) void* __cdecl fn_0043D580(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x0087b351
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je exit_path
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        push edi
        mov ecx, esi
        call dword ptr [mem_00924494]
    skip_ctor:
        add esi, 0x4
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x4
        jmp loop_top
    handler:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je handler_rethrow
    destroy_loop:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 0x4
        cmp esi, edi
        jne destroy_loop
    handler_rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    exit_path:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0043E7D0] sub_0043E7D0 (41 bytes)
extern "C" void ext_0043D580();

extern "C" __declspec(naked) void __fastcall fn_0043E7D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_0043D580
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0043D870] sub_0043D870 (143 bytes)
// try { for (n = count; n; --n) { if (p) ctor(p, a); p += 0x4; } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" int mem_00924494;
extern "C" int mem_009242F4;
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __cdecl fn_0043D870(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0087b371
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, ebx
        jbe epilogue
        mov dword ptr [ebp + 0xc], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_ctor
        mov eax, dword ptr [ebp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924494]
    skip_ctor:
        sub edi, 0x1
        add esi, 0x4
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je destroy_done
    destroy_loop:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 0x4
        cmp esi, edi
        jne destroy_loop
    destroy_done:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    epilogue:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0043E360] sub_0043E360 (51 bytes)
extern "C" void ext_0043D870();

extern "C" __declspec(naked) unsigned int* __fastcall fn_0043E360(void* self, int edx_unused, unsigned int* a1, unsigned int a2, unsigned int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0043D870
        add esp, 0x18
        lea eax, [edi + 4*esi]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00436760] sub_00436760 (148 bytes)
extern "C" void ext_00401050();
extern "C" void ext_00401690();
extern "C" void ext_00436070();
extern "C" void ext_00465B30();
extern "C" void ext_00465B40();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5E72();
extern "C" void ext_00401730();
extern "C" int mem_009256F8;

extern "C" void __fastcall fn_00436760(void* self) {
    if (!*(void**)((char*)self + 0x144))
        return;

    typedef void (*Fn_436070)();
    typedef void* (*Fn_465B40)();
    typedef void* (*Fn_465B30)();
    typedef void (__thiscall *Fn_Vtable)(void*);
    typedef void (__thiscall *Fn_401050)(void*, int, int, int, int);
    typedef void (__thiscall *Fn_401690)(void*);
    typedef void (__thiscall *Fn_ShowWindow)(void*, int);
    typedef void* (__stdcall *Fn_SetActiveWindow)(void*);
    typedef void* (__stdcall *Fn_6A5E00)(void*);
    typedef void (__thiscall *Fn_401730)(void*);

    ((Fn_436070)ext_00436070)();
    void* obj = ((Fn_465B40)ext_00465B40)();
    void** vt = *(void***)obj;
    ((Fn_Vtable)vt[0xd4 / 4])(obj);

    int edi = *(int*)((char*)self + 0x120);
    int ebx = *(int*)((char*)self + 0x114);
    int ebp = *(int*)((char*)self + 0x108);

    void* a = ((Fn_465B30)ext_00465B30)();
    char* ecx_val = *(char**)((char*)a + 0x14);
    int edx_val = *(int*)(ecx_val + 0x30);

    ((Fn_401050)ext_00401050)(*(void**)((char*)self + 0x144), edx_val, ebp, ebx, edi);
    ((Fn_401690)ext_00401690)(*(void**)((char*)self + 0x144));
    ((Fn_ShowWindow)ext_006A5E72)(*(void**)((char*)self + 0x144), 5);

    void* t = *(void**)((char*)self + 0x144);
    void* hwnd = *(void**)((char*)t + 0x20);
    void* oldHwnd = ((Fn_SetActiveWindow)mem_009256F8)(hwnd);
    ((Fn_6A5E00)ext_006A5E00)(oldHwnd);
    ((Fn_401730)ext_00401730)(*(void**)((char*)self + 0x144));
}

// [0x00437230] sub_00437230 (139 bytes)
extern "C" void ext_00435CC0();
extern "C" void ext_006658F0();
extern "C" void ext_006A653E();

extern "C" __declspec(naked) unsigned char __fastcall fn_00437230(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x18]
        or ecx, 0x50000000
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [eax + 0x170]
        push edi
        push ecx
        mov ecx, esi
        call edx
        test eax, eax
        jne short loc_00437265
        pop edi
        xor al, al
        pop esi
        ret 0x18
loc_00437265:
        mov eax, dword ptr [esi + 0x80]
        or eax, dword ptr [esp + 0x1c]
        mov ecx, esi
        or eax, 0x34
        push eax
        call ext_006A653E
        cmp byte ptr [esp + 0x20], 0
        je short loc_004372B4
        mov dword ptr [esp + 0x20], esi
        lea esi, [edi + 0xe8]
        mov edi, dword ptr [esi + 4]
        mov edx, dword ptr [edi + 4]
        push ebx
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call ext_00435CC0
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006658F0
        mov dword ptr [edi + 4], ebx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [eax], ebx
        pop ebx
loc_004372B4:
        pop edi
        mov al, 1
        pop esi
        ret 0x18
    }
}
