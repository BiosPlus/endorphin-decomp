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

// [0x0043BCA0] sub_0043BCA0 (160 bytes)
// Removes obj from the pointer vector at this+0x14 (first at +0x18, last at +0x1c) and clears obj+0x44.
// Returns true if found and removed.
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) bool __fastcall fn_0043BCA0(void* self, int edx_unused, void* obj) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 0x1c]
        cmp dword ptr [ecx + 0x18], ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0x14]
        jbe L_bca8
        call dword ptr [mem_00925134]
L_bca8:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_bcc6
        call dword ptr [mem_00925134]
L_bcc6:
        cmp esi, ebx
        mov ebp, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x14], esi
        je L_bcdd
L_bcd2:
        cmp dword ptr [esi], ebp
        je L_bcdd
        add esi, 4
        cmp esi, ebx
        jne L_bcd2
L_bcdd:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_bceb
        call dword ptr [mem_00925134]
L_bceb:
        test edi, edi
        je L_bcf3
        cmp edi, edi
        je L_bcf9
L_bcf3:
        call dword ptr [mem_00925134]
L_bcf9:
        cmp esi, ebx
        je L_bd34
        mov eax, dword ptr [edi + 8]
        lea ecx, [esi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jle L_bd1d
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L_bd1d:
        add dword ptr [edi + 8], -4
        pop edi
        pop esi
        mov dword ptr [ebp + 0x44], 0
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
L_bd34:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0043D9B0] sub_0043D9B0 (161 bytes)
// __thiscall ret 0x4: null-check arg, call sub_00440990 on it, find it in the pointer array at self+0x84..0x88
// (range end at +0x88); if found, erase it via sub_004A6020 and return true, else return false.
extern "C" int mem_00925134;
extern "C" void ext_00440990();
extern "C" void ext_004A6020();

extern "C" __declspec(naked) bool __fastcall fn_0043D9B0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        mov esi, ecx
        jne L_nonnull
        pop esi
        xor al, al
        pop ebp
        add esp, 0x8
        ret 0x4
L_nonnull:
        push ebx
        push edi
        mov ecx, ebp
        call ext_00440990
        mov ebx, dword ptr [esi + 0x88]
        add esi, 0x80
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp edi, ebx
        mov dword ptr [esp + 0x14], edi
        je L_search_done
        nop
L_search_loop:
        cmp dword ptr [edi], ebp
        je L_search_done
        add edi, 0x4
        cmp edi, ebx
        jne L_search_loop
L_search_done:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        test esi, esi
        je L_chk4
        cmp esi, esi
        je L_chk5
L_chk4:
        call dword ptr [mem_00925134]
L_chk5:
        cmp edi, ebx
        je L_not_found
        push edi
        push esi
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_004A6020
        pop edi
        pop ebx
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x8
        ret 0x4
L_not_found:
        pop edi
        pop ebx
        pop esi
        xor al, al
        pop ebp
        add esp, 0x8
        ret 0x4
    }
}

// [0x00435190] sub_00435190 (161 bytes)
// try { sub_004332B0(this); sub_00465B40()->vfunc_0x1bc(); } catch (T& e) { AfxMessageBox(e.str.c_str(), 0, 0); }
// sub_004332D0(this);
// Naked: MSVC /EHsc drops the try block around extern "C" callees, so the SEH frame is written out by hand.
extern "C" void ext_004332B0();
extern "C" void ext_004332D0();
extern "C" void ext_00465B40();
extern "C" void ext_00435216();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00435190(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0087a659
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        call ext_004332B0
        mov dword ptr [ebp - 0x4], 0x0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1bc]
        call eax
        mov dword ptr [ebp - 0x4], 0xffffffff
        jmp exit_path
    handler:
        mov ecx, dword ptr [ebp - 0x18]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x34]
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, offset ext_00435216
        ret
    resume_:
        mov esi, dword ptr [ebp - 0x14]
    exit_path:
        mov ecx, esi
        call ext_004332D0
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

// [0x0043DA60] sub_0043DA60 (110 bytes)
extern "C" void ext_0043D9B0();

extern "C" __declspec(naked) void __fastcall fn_0043DA60(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x80]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_top
        call dword ptr [mem_00925134]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_top:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        test esi, esi
        je L_bad3
        cmp esi, esi
        je L_chk3
L_bad3:
        call dword ptr [mem_00925134]
L_chk3:
        cmp edi, ebx
        je L_done
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne L_chk4
        call ebx
L_chk4:
        cmp edi, dword ptr [esi + 0x8]
        jb L_chk5
        call ebx
L_chk5:
        mov eax, dword ptr [edi]
        push eax
        mov ecx, ebp
        call ext_0043D9B0
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_top
        call ebx
        jmp L_top
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0043B720] sub_0043B720 (162 bytes)
extern "C" void ext_0043B5D0();

extern "C" __declspec(naked) void __cdecl fn_0043B720(unsigned* first, unsigned* mid, unsigned* last, void* pred) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, esi
        sub eax, ecx
        sar eax, 0x2
        cmp eax, 0x28
        jle small_path
        add eax, 1
        cdq
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        and edx, 0x7
        add eax, edx
        push ebp
        sar eax, 0x3
        push edi
        lea edx, [8*eax]
        mov dword ptr [esp + 0x1c], edx
        push ebx
        lea edi, [4*eax]
        add edx, ecx
        lea eax, [edi + ecx]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x24], eax
        call ext_0043B5D0
        mov eax, ebx
        mov ebx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [edi + ebx]
        push ecx
        mov edx, ebx
        sub edx, edi
        push ebx
        push edx
        call ext_0043B5D0
        mov ebp, esi
        sub ebp, edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push esi
        sub esi, dword ptr [esp + 0x44]
        push ebp
        push esi
        call ext_0043B5D0
        mov eax, dword ptr [esp + 0x44]
        push edi
        push ebp
        push ebx
        push eax
        call ext_0043B5D0
        add esp, 0x40
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    small_path:
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push esi
        push eax
        push ecx
        call ext_0043B5D0
        add esp, 0x10
        pop esi
        ret
    }
}

// [0x0043B420] sub_0043B420 (47 bytes)
extern "C" __declspec(naked) int __fastcall fn_0043B420(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x10], 0
        je short no_match
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        call edx
        test al, al
        jne short no_match
        mov ecx, dword ptr [esi + 0x10]
        push esi
        call ext_00412D70
        test eax, eax
        jne short no_match
        mov eax, 1
        pop esi
        ret
    no_match:
        xor eax, eax
        pop esi
        ret
    }
}

extern "C" void ext_00430370();
extern "C" void ext_00465B30();
extern "C" void ext_0046F880();
extern "C" void ext_0046F890();
extern "C" void ext_0046F8A0();
extern "C" void ext_0046F8B0();

// [0x00434450] sub_00434450 (167 bytes)
// __thiscall with one stack arg (ret 4). Queries four byte flags via sub_00465B30()->+0x14 objects,
// calls sub_00430370 on this, then conditionally calls vtbl[1] of arg with 1 or 0.
extern "C" __declspec(naked) void __fastcall fn_00434450(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F890
        mov bl, al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F880
        mov byte ptr [esp + 0x11], al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F8A0
        mov byte ptr [esp + 0x12], al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F8B0
        mov ebp, dword ptr [esp + 0x18]
        mov edi, dword ptr [ebp]
        mov ecx, esi
        mov byte ptr [esp + 0x13], al
        call ext_00430370
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, ebp
        call edx
        test bl, bl
        je fail
        cmp byte ptr [esp + 0x11], 0
        jne fail
        cmp byte ptr [esp + 0x12], 0
        je fail
        cmp byte ptr [esp + 0x13], 0
        je fail
        mov edx, dword ptr [ebp]
        mov eax, 1
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, ebp
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    fail:
        mov edx, dword ptr [ebp]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, ebp
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x00434500] sub_00434500 (167 bytes)
// __thiscall with one stack arg (ret 4). Queries four byte flags via sub_00465B30()->+0x14 objects,
// calls sub_00430370 on this, then conditionally calls vtbl[1] of arg with 1 or 0.
extern "C" void ext_0046F8D0();
extern "C" __declspec(naked) void __fastcall fn_00434500(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F890
        mov bl, al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F880
        mov byte ptr [esp + 0x11], al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F8A0
        mov byte ptr [esp + 0x12], al
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_0046F8D0
        mov ebp, dword ptr [esp + 0x18]
        mov edi, dword ptr [ebp]
        mov ecx, esi
        mov byte ptr [esp + 0x13], al
        call ext_00430370
        mov edx, dword ptr [edi]
        movzx eax, al
        push eax
        mov ecx, ebp
        call edx
        test bl, bl
        je fail
        cmp byte ptr [esp + 0x11], 0
        jne fail
        cmp byte ptr [esp + 0x12], 0
        je fail
        cmp byte ptr [esp + 0x13], 0
        je fail
        mov edx, dword ptr [ebp]
        mov eax, 1
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, ebp
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    fail:
        mov edx, dword ptr [ebp]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 4]
        mov ecx, ebp
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x00435EF0] sub_00435EF0 (168 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_0046FAD0();
extern "C" void ext_006A6DD2();

// try { for (p = begin; count; --count, p += 0x38) { ctor(p, a); ctor(p + 0x1c, a + 0x1c); } }
// catch (...) { destroy [begin, p); throw; }
// Naked: MSVC /EHsc treats extern "C" callees as nothrow, which drops the try block,
// so the SEH frame is written out by hand.
extern "C" __declspec(naked) void __cdecl fn_00435EF0(void* begin, unsigned int count, const void* a) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x0087a6ca
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
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [ebp + 0x10]
        add ecx, 0x1c
        push ecx
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE0]
    skip_ctor:
        sub edi, 0x1
        add esi, 0x38
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x8], esi
        jmp loop_top
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x8]
        cmp esi, edi
        je rethrow
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    dtor_loop:
        mov ecx, esi
        call ext_0046FAD0
        add esi, 0x38
        cmp esi, edi
        jne dtor_loop
    rethrow:
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

// [0x00436F60] sub_00436F60 (60 bytes)
extern "C" void ext_00435EF0();

extern "C" __declspec(naked) void* __fastcall fn_00436F60(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp+10h]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        mov edi, dword ptr [esp+10h]
        mov byte ptr [esp+8], 0
        mov eax, dword ptr [esp+8]
        push eax
        mov eax, dword ptr [esp+1Ch]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00435EF0
        add esp, 18h
        lea ecx, [8*esi]
        sub ecx, esi
        lea eax, [edi+8*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0Ch
    }
}

// [0x0043CCB0] sub_0043CCB0 (170 bytes)
extern "C" void ext_00455C80();

extern "C" __declspec(naked) int __fastcall fn_0043CCB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 18h
        push esi
        push eax
        mov esi, ecx
        call ext_00455C80
        cmp eax, -1
        jne short loc_0043CCCE
        or eax, eax
        pop esi
        add esp, 18h
        ret 4

loc_0043CCCE:
        mov ecx, dword ptr [esi + 94h]
        xor eax, eax
        push edi
        push eax
        push eax
        push esi
        and ecx, -10h
        or ecx, 20h
        lea edi, [esp + 1Ch]
        push edi
        mov dword ptr [esi + 94h], ecx
        mov ecx, dword ptr [esi + 144h]
        push 50000000h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2Ch], eax
        mov dword ptr [esp + 30h], eax
        mov edx, dword ptr [ecx]
        push eax
        push eax
        mov eax, dword ptr [edx + 5Ch]
        call eax
        mov ecx, dword ptr [esi + 144h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 148h]
        lea eax, [esp + 8]
        push eax
        call edx
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0Ch]
        mov dword ptr [esi + 0C4h], eax
        mov dword ptr [esi + 0C8h], ecx
        mov dword ptr [esi + 0B4h], eax
        mov dword ptr [esi + 0B8h], ecx
        mov dword ptr [esi + 0BCh], eax
        pop edi
        mov dword ptr [esi + 0C0h], ecx
        xor eax, eax
        pop esi
        add esp, 18h
        ret 4
    }
}

// [0x0043D900] sub_0043D900 (173 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925628;

extern "C" __declspec(naked) void __fastcall fn_0043D900(void* self) {
    __asm {
        sub esp, 0Ch
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 90h]
        push edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe short loc_0043D91B
        call dword ptr [mem_00925134]

loc_0043D91B:
        mov ebp, esi
        _emit 0x8d
        _emit 0x49
        _emit 0x00

loc_0043D920:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe short loc_0043D92E
        call dword ptr [mem_00925134]

loc_0043D92E:
        test ebp, ebp
        je short loc_0043D936
        cmp ebp, esi
        je short loc_0043D940

loc_0043D936:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_0043D946

loc_0043D940:
        mov esi, dword ptr [mem_00925134]

loc_0043D946:
        cmp edi, ebx
        je short loc_0043D9A1
        test ebp, ebp
        mov dword ptr [esp + 18h], edi
        jne short loc_0043D954
        call esi

loc_0043D954:
        cmp edi, dword ptr [ebp + 4]
        ja short loc_0043D95B
        call esi

loc_0043D95B:
        lea esi, [edi - 4]
        cmp esi, dword ptr [ebp + 8]
        jb short loc_0043D969
        call dword ptr [mem_00925134]

loc_0043D969:
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [esi]
        push ecx
        push edx
        lea eax, [ebx + 60h]
        push eax
        call dword ptr [mem_00925628]
        test eax, eax
        jne short loc_0043D995
        cmp edi, dword ptr [ebp + 4]
        ja short loc_0043D98F
        call dword ptr [mem_00925134]

loc_0043D98F:
        mov edi, esi
        mov esi, ebp
        jmp short loc_0043D920

loc_0043D995:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0Ch
        ret 4

loc_0043D9A1:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0Ch
        ret 4
    }
}

// [0x00434D00] sub_00434D00 (176 bytes)
extern "C" int mem_00924EA0;
extern "C" int mem_00924EA4;
extern "C" int mem_00924E84;
extern "C" int mem_00924E88;
extern "C" int mem_00924E8C;
extern "C" __declspec(naked) void __fastcall fn_00434D00(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x87a638
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        mov dword ptr [edi], esi
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 4]
        add ecx, esi
        mov dword ptr [esp + 8], edi
        call dword ptr [mem_00924EA0]
        test eax, eax
        je L_no_tie
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        add ecx, eax
        call dword ptr [mem_00924EA0]
        mov ecx, eax
        call dword ptr [mem_00924EA4]
    L_no_tie:
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 4]
        add ecx, esi
        mov dword ptr [esp + 0x14], 0
        call dword ptr [mem_00924E84]
        test al, al
        je L_done
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 4]
        add ecx, esi
        call dword ptr [mem_00924E88]
        test eax, eax
        je L_done
        mov ecx, dword ptr [esi]
        mov ecx, dword ptr [ecx + 4]
        add ecx, esi
        call dword ptr [mem_00924E88]
        mov ecx, eax
        call dword ptr [mem_00924E8C]
    L_done:
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 4]
        add ecx, esi
        call dword ptr [mem_00924E84]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [edi + 4], al
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0043CFA0] sub_0043CFA0 (176 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_0043CF30();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A61B4();
extern "C" void ext_006A61BA();
extern "C" void ext_0043CA30();
extern "C" int mem_0092408C;
extern "C" int mem_0092566C;

extern "C" __declspec(naked) void __fastcall fn_0043CFA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x0087b5e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, esi
        call ext_0043CF30
        lea edi, [esi + 0x194]
        mov ecx, edi
        call ext_006A5FF2
        push esi
        lea ecx, [esp + 0x14]
        call ext_006A61BA
        mov ebx, dword ptr [esp + 0x3c]
        mov ebp, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push eax
        mov dword ptr [esp + 0x38], 0x0
        call dword ptr [mem_0092408C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esi + 0x19c]
        push ecx
        push edx
        call dword ptr [mem_0092566C]
        mov ecx, esi
        mov dword ptr [esi + 0x1ac], ebp
        mov dword ptr [esi + 0x1b0], ebx
        call ext_0043CA30
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_006A61B4
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 0xc
    }
}

// [0x0043DAD0] sub_0043DAD0 (177 bytes)
// Sums elem->+0x4c over a deque-like container at this+0xb0 (4 elements per block) into this+0xf8
// for elements whose byte at +0x34 is nonzero. Debug-style invalid_parameter checks are kept.
extern "C" __declspec(naked) void __fastcall fn_0043DAD0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0xb0]
        mov dword ptr [ecx + 0xf8], 0x0
        mov ebp, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x10]
        add eax, ebp
        cmp ebp, eax
        push edi
        mov dword ptr [esp + 0x10], ecx
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov eax, dword ptr [esi + 0xc]
        mov edi, dword ptr [esi + 0x10]
        add edi, eax
        cmp eax, edi
        mov dword ptr [esp + 0x14], edi
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
L_chk3:
        cmp ebp, edi
        je L_done
        mov ecx, dword ptr [esi + 0xc]
        add ecx, dword ptr [esi + 0x10]
        mov edi, ebp
        mov ebx, ebp
        shr edi, 0x2
        and ebx, 0x3
        cmp ebp, ecx
        jb L_body
        call dword ptr [mem_00925134]
L_body:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        ja L_idx
        sub edi, eax
L_idx:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 4*edi]
        mov ebx, dword ptr [eax + 4*ebx]
        cmp byte ptr [ebx + 0x34], 0x0
        je L_next
        mov ecx, dword ptr [ebx + 0x4c]
        mov eax, dword ptr [esp + 0x10]
        add dword ptr [eax + 0xf8], ecx
L_next:
        mov edx, dword ptr [esi + 0xc]
        add edx, dword ptr [esi + 0x10]
        cmp ebp, edx
        jb L_inc
        call dword ptr [mem_00925134]
L_inc:
        mov edi, dword ptr [esp + 0x14]
        add ebp, 0x1
        jmp L_chk2
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0043DC90] sub_0043DC90 (38 bytes)
extern "C" void ext_0043DAD0();
extern "C" void ext_0043CC60();

extern "C" __declspec(naked) void __fastcall fn_0043DC90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        push esi
        mov esi, ecx
        jge short skip_call
        call ext_0043DAD0
        mov eax, dword ptr [esi + 0xf8]
skip_call:
        mov ecx, dword ptr [esi + 0x18c]
        push eax
        call ext_0043CC60
        pop esi
        ret 4
    }
}

// [0x0043DE60] sub_0043DE60 (55 bytes)
extern "C" void ext_004132D0();
extern "C" void ext_0043DC90();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_0043DE60(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je short skip_call
        push 0x0
        call ext_004132D0
skip_call:
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_0092568C]
        push -0x1
        mov ecx, esi
        call ext_0043DC90
        pop esi
        ret 0x4
    }
}

// [0x0043DEA0] sub_0043DEA0 (55 bytes)
extern "C" void ext_004132D0();
extern "C" void ext_0043DC90();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_0043DEA0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je short skip_call
        push 0x1
        call ext_004132D0
skip_call:
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_0092568C]
        push -0x1
        mov ecx, esi
        call ext_0043DC90
        pop esi
        ret 0x4
    }
}

// [0x0043E0F0] sub_0043E0F0 (70 bytes)
extern "C" void ext_0043DC90();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

struct Interface_0043E0F0 {
    virtual void vfn0() = 0;
    virtual void vfn1() = 0;
    virtual void vfn2() = 0;
    virtual void vfn3() = 0;
    virtual void vfn4() = 0;
    virtual void vfn5() = 0;
    virtual void vfn6() = 0;
    virtual void vfn7() = 0;
    virtual void vfn8() = 0;
    virtual void vfn9() = 0;
    virtual void vfn10(int a2, int a3, int a4) = 0;
};

extern "C" void __fastcall fn_0043E0F0(void* self, int edx_unused, Interface_0043E0F0* a1, int a2, int a3, int a4) {
    if (a1) {
        a1->vfn10(a2, a3, a4);
    }
    typedef int (__stdcall *PFN_InvalidateRect)(void*, void*, int);
    typedef int (__stdcall *PFN_UpdateWindow)(void*);
    typedef void (__thiscall *PFN_Sub43DC90)(void*, int);

    void* hwnd = *(void**)((char*)self + 0x20);
    (*(PFN_InvalidateRect*)&mem_00925688)(hwnd, 0, 1);
    void* hwnd2 = *(void**)((char*)self + 0x20);
    (*(PFN_UpdateWindow*)&mem_0092568C)(hwnd2);
    ((PFN_Sub43DC90)&ext_0043DC90)(self, -1);
}

// [0x0043BA20] sub_0043BA20 (193 bytes)
extern "C" void ext_00609850();

extern "C" __declspec(naked) void __cdecl fn_0043BA20(void* first, void* last) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp ebx, eax
        je L_43BA20_ret_bx
        push esi
        lea esi, [ebx + 0x4]
        cmp esi, eax
        je L_43BA20_pop_esi
        push ebp
        lea ebp, [esi + 0x4]
        push edi
        mov dword ptr [esp + 0x10], ebp
L_43BA20_loop:
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ebx]
        call ext_004410C0
        cmp eax, 0x1
        jle L_43BA20_inner
        mov ecx, edi
        call ext_004410C0
        cmp eax, 0x1
        jg L_43BA20_inner
        cmp ebx, esi
        je L_43BA20_next
        cmp esi, ebp
        je L_43BA20_next
        push 0x0
        push 0x0
        push ebp
        push esi
        push ebx
        call ext_00609850
        add esp, 0x14
        jmp L_43BA20_next
L_43BA20_inner:
        mov ebp, esi
        mov edi, esi
        mov edi, edi
L_43BA20_back:
        mov ecx, dword ptr [esi]
        mov ebx, dword ptr [edi - 0x4]
        sub edi, 0x4
        call ext_004410C0
        cmp eax, 0x1
        jle L_43BA20_back_done
        mov ecx, ebx
        call ext_004410C0
        cmp eax, 0x1
        jg L_43BA20_back_done
        mov ebp, edi
        jmp L_43BA20_back
L_43BA20_back_done:
        cmp ebp, esi
        je L_43BA20_after_move
        cmp esi, dword ptr [esp + 0x10]
        je L_43BA20_after_move
        mov eax, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push eax
        push esi
        push ebp
        call ext_00609850
        add esp, 0x14
L_43BA20_after_move:
        mov ebx, dword ptr [esp + 0x18]
L_43BA20_next:
        mov ebp, dword ptr [esp + 0x10]
        add esi, 0x4
        add ebp, 0x4
        cmp esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x10], ebp
        jne L_43BA20_loop
        pop edi
        pop ebp
L_43BA20_pop_esi:
        pop esi
L_43BA20_ret_bx:
        pop ebx
        pop ecx
        ret
    }
}

// [0x0043D4B0] sub_0043D4B0 (194 bytes)
// Deque range copy (4-byte elements, 4 per block) into a deque iterator out-struct at [arg1].
// Guard calls go through _invalid_parameter_noinfo held at mem_00925134.
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0043D4B0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x2c]
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        push esi
        push edi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    dc_loop:
        mov edi, dword ptr [esp + 0x20]
        cmp edi, dword ptr [esp + 0x2c]
        je dc_done
        mov eax, dword ptr [esp + 0x1c]
        mov esi, edi
        shr esi, 0x2
        and edi, 0x3
        test eax, eax
        jne dc_chk1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
    dc_chk1:
        mov ecx, dword ptr [eax + 0x10]
        add ecx, dword ptr [eax + 0xc]
        cmp dword ptr [esp + 0x20], ecx
        jb dc_chk2
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
    dc_chk2:
        mov ecx, dword ptr [eax + 0x8]
        cmp ecx, esi
        ja dc_nowrap1
        sub esi, ecx
    dc_nowrap1:
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [edx + 4*esi]
        lea ecx, [eax + 4*edi]
        mov esi, ebx
        mov edi, ebx
        shr esi, 0x2
        and edi, 0x3
        test ebp, ebp
        mov dword ptr [esp + 0x30], ecx
        jne dc_chk3
        call dword ptr [mem_00925134]
    dc_chk3:
        mov edx, dword ptr [ebp + 0x10]
        add edx, dword ptr [ebp + 0xc]
        cmp ebx, edx
        jb dc_chk4
        call dword ptr [mem_00925134]
    dc_chk4:
        mov eax, dword ptr [ebp + 0x8]
        cmp eax, esi
        ja dc_nowrap2
        sub esi, eax
    dc_nowrap2:
        mov eax, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [eax + 4*esi]
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [edx]
        add ebx, 0x1
        add dword ptr [esp + 0x20], 0x1
        mov dword ptr [ecx + 4*edi], eax
        jmp dc_loop
    dc_done:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax], 0x0
        pop ebx
        ret
    }
}

// [0x0043E490] sub_0043E490 (185 bytes)
// Deque range copy wrapper: validates the source/dest deque iterators, calls sub_0043D4B0 with
// two by-value iterator temporaries, writes the dest-end iterator into arg1 and returns arg1.
extern "C" void ext_0043D4B0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0043E490(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x28]
        push edi
        mov edi, dword ptr [esp + 0x34]
        sub esi, eax
        test edi, edi
        jne L_e490_ok1
        call dword ptr [mem_00925134]
    L_e490_ok1:
        mov eax, dword ptr [edi + 0xc]
        mov ebx, dword ptr [esp + 0x38]
        mov ecx, dword ptr [edi + 0x10]
        lea ebp, [ebx + esi]
        add ecx, eax
        cmp ebp, ecx
        ja L_e490_bad2
        cmp ebp, eax
        jae L_e490_ok2
    L_e490_bad2:
        call dword ptr [mem_00925134]
    L_e490_ok2:
        mov esi, dword ptr [esp + 0x14]
        mov byte ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        mov byte ptr [esp + 0x34], 0
        mov eax, dword ptr [esp + 0x34]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x38]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], ebx
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0x40]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [eax], 0
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 4], edx
        lea edx, [esp + 0x54]
        push edx
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], ebp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 8], ecx
        call ext_0043D4B0
        add esp, 0x34
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00433370] sub_00433370 (194 bytes)
extern "C" int mem_00925634;
extern "C" void ext_00430370();
extern "C" __declspec(naked) void __fastcall fn_00433370(void* self, int edx_unused, int* a1, int* a2) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x4]
        push edi
        mov edi, dword ptr [mem_00925634]
        push 0x92f96c
        push 0x8031
        push 0x0
        push eax
        mov ebx, ecx
        call edi
        mov ecx, dword ptr [esi + 0x4]
        push 0x92f964
        push 0x815e
        push 0x0
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x4]
        push 0x92f95c
        push 0x802e
        push 0x0
        push edx
        call edi
        mov eax, dword ptr [esi + 0x4]
        push 0x92f94c
        push 0x815c
        push 0x0
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x4]
        push 0x92f93c
        push 0x815d
        push 0x0
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x4]
        push 0x92f934
        push 0x802b
        push 0x0
        push edx
        call edi
        mov eax, dword ptr [esi + 0x4]
        push 0x92f92c
        push 0x6c
        push 0x0
        push eax
        call edi
        mov ecx, ebx
        call ext_00430370
        test al, al
        je short skip_menu
        mov ecx, dword ptr [esi + 0x4]
        push 0x92f924
        push 0x810f
        push 0x0
        push ecx
        call edi
skip_menu:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        push 0x92f91c
        push edx
        push 0x10
        push ecx
        call edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0043E760] sub_0043E760 (108 bytes)
extern "C" void ext_0043E490();
extern "C" __declspec(naked) void* __fastcall fn_0043E760(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        mov edx, dword ptr [esp + 0x38]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax], 0x0
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax], 0x0
        sub esp, 0xc
        mov eax, esp
        push esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        call ext_0043E490
        add esp, 0x34
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0043BBD0] sub_0043BBD0 (195 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0043BBD0(void* self) {
    __asm {
        push -1
        push 0x87b263
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [ecx], 0x931ea4
        mov edi, dword ptr [ecx + 0x18]
        cmp edi, dword ptr [ecx + 0x1c]
        mov ebp, dword ptr [mem_00925134]
        lea esi, [ecx + 0x14]
        mov dword ptr [esp + 0x1c], 2
        jbe L_bbd0_a
        call ebp
        nop
    L_bbd0_a:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_bbd0_b
        call ebp
    L_bbd0_b:
        test esi, esi
        je L_bbd0_c
        cmp esi, esi
        je L_bbd0_d
    L_bbd0_c:
        call ebp
    L_bbd0_d:
        cmp edi, ebx
        je L_bbd0_end_loop
        test esi, esi
        jne L_bbd0_e
        call ebp
    L_bbd0_e:
        cmp edi, dword ptr [esi + 8]
        jb L_bbd0_f
        call ebp
    L_bbd0_f:
        mov ecx, dword ptr [edi]
        test ecx, ecx
        je L_bbd0_g
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_bbd0_g:
        cmp edi, dword ptr [esi + 8]
        jb L_bbd0_h
        call ebp
    L_bbd0_h:
        add edi, 4
        jmp L_bbd0_a
    L_bbd0_end_loop:
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je L_bbd0_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_bbd0_skip:
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0xc], eax
        mov esi, dword ptr [esp + 0x10]
        lea ecx, [esi + 0xc]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0043D3E0] sub_0043D3E0 (205 bytes)
// Deque reverse copy (copy_backward) implementation.
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0043D3E0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push esi
        push edi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    dcb_loop:
        mov eax, dword ptr [esp + 0x30]
        cmp dword ptr [esp + 0x24], eax
        je dcb_done
        sub eax, 1
        mov esi, eax
        mov edi, eax
        shr esi, 2
        and edi, 3
        test ebp, ebp
        mov dword ptr [esp + 0x30], eax
        jne dcb_chk1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x30]
    dcb_chk1:
        mov ecx, dword ptr [ebp + 0x10]
        add ecx, dword ptr [ebp + 0xc]
        cmp eax, ecx
        jb dcb_chk2
        call dword ptr [mem_00925134]
    dcb_chk2:
        mov eax, dword ptr [ebp + 0x8]
        cmp eax, esi
        ja dcb_nowrap1
        sub esi, eax
    dcb_nowrap1:
        mov edx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [edx + 4*esi]
        lea ecx, [eax + 4*edi]
        mov eax, dword ptr [esp + 0x38]
        sub ebx, 1
        mov esi, ebx
        mov edi, ebx
        shr esi, 2
        and edi, 3
        test eax, eax
        mov dword ptr [esp + 0x10], ecx
        jne dcb_chk3
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x38]
    dcb_chk3:
        mov edx, dword ptr [eax + 0x10]
        add edx, dword ptr [eax + 0xc]
        cmp ebx, edx
        jb dcb_chk4
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x38]
    dcb_chk4:
        mov ecx, dword ptr [eax + 0x8]
        cmp ecx, esi
        ja dcb_nowrap2
        sub esi, ecx
    dcb_nowrap2:
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 4*esi]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4*edi], eax
        jmp dcb_loop
    dcb_done:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        pop ecx
        ret
    }
}

// [0x0043E3D0] sub_0043E3D0 (186 bytes)
extern "C" void ext_0043D3E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0043E3D0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [mem_00925134]
        sub eax, ecx
        push edi
        mov edi, dword ptr [esp + 0x34]
        neg eax
        test edi, edi
        mov ebp, eax
        jne L_e3d0_ok1
        call esi
    L_e3d0_ok1:
        mov eax, dword ptr [edi + 0xc]
        mov ebx, dword ptr [esp + 0x38]
        mov ecx, dword ptr [edi + 0x10]
        add ebp, ebx
        add ecx, eax
        cmp ebp, ecx
        ja L_e3d0_bad2
        cmp ebp, eax
        jae L_e3d0_ok2
    L_e3d0_bad2:
        call esi
    L_e3d0_ok2:
        mov esi, dword ptr [esp + 0x14]
        mov byte ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        mov byte ptr [esp + 0x34], 0
        mov eax, dword ptr [esp + 0x34]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x38]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], edi
        mov dword ptr [eax + 0x8], ebx
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x40]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [eax], 0
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], edx
        lea edx, [esp + 0x54]
        push edx
        mov dword ptr [esi], 0
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x8], ecx
        call ext_0043D3E0
        add esp, 0x34
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0043E6F0] sub_0043E6F0 (108 bytes)
extern "C" void ext_0043E3D0();
extern "C" __declspec(naked) void* __fastcall fn_0043E6F0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        mov edx, dword ptr [esp + 0x38]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax], 0x0
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax], 0x0
        sub esp, 0xc
        mov eax, esp
        push esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        call ext_0043E3D0
        add esp, 0x34
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0043DEE0] sub_0043DEE0 (206 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925688;
extern "C" int mem_0092568C;
extern "C" void ext_004132D0();
extern "C" void ext_0043DC90();
extern "C" __declspec(naked) void __fastcall fn_0043DEE0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0xbc]
        mov eax, dword ptr [ebx + 0xc0]
        push esi
        lea esi, [ebx + 0xb0]
        add eax, ebp
        cmp ebp, eax
        push edi
        mov dword ptr [esp + 0x14], ebx
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov eax, dword ptr [esi + 0xc]
        mov edi, dword ptr [esi + 0x10]
        add edi, eax
        cmp eax, edi
        mov dword ptr [esp + 0x10], edi
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp ebp, edi
        je L_done
    L_body:
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        mov edi, ebp
        mov ebx, ebp
        shr edi, 0x2
        and ebx, 0x3
        cmp ebp, ecx
        jb L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        ja L_ok2
        sub edi, eax
    L_ok2:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 4*edi]
        mov ebx, dword ptr [eax + 4*ebx]
        test ebx, ebx
        je L_skip
        push 0x0
        mov ecx, ebx
        call ext_004132D0
    L_skip:
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        cmp ebp, ecx
        jb L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov edi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x14]
        add ebp, 0x1
        jmp L_chk2
    L_done:
        mov edx, dword ptr [ebx + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [ebx + 0x20]
        push eax
        call dword ptr [mem_0092568C]
        push -0x1
        mov ecx, ebx
        call ext_0043DC90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0043DFB0] sub_0043DFB0 (210 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925688;
extern "C" int mem_0092568C;
extern "C" void ext_004132D0();
extern "C" void ext_0043DC90();
extern "C" __declspec(naked) void __fastcall fn_0043DFB0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0xbc]
        mov eax, dword ptr [ebx + 0xc0]
        push esi
        lea esi, [ebx + 0xb0]
        add eax, ebp
        cmp ebp, eax
        push edi
        mov dword ptr [esp + 0x10], ebx
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov eax, dword ptr [esi + 0xc]
        mov edi, dword ptr [esi + 0x10]
        add edi, eax
        cmp eax, edi
        mov dword ptr [esp + 0x14], edi
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp ebp, edi
        je L_done
    L_body:
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        mov edi, ebp
        mov ebx, ebp
        shr edi, 0x2
        and ebx, 0x3
        cmp ebp, ecx
        jb L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        ja L_ok2
        sub edi, eax
    L_ok2:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 4*ebx]
        test ecx, ecx
        je L_skip
        cmp byte ptr [ecx + 0x36], 0x0
        je L_skip
        push 0x1
        call ext_004132D0
    L_skip:
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        cmp ebp, ecx
        jb L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov ebx, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x14]
        add ebp, 0x1
        jmp L_chk2
    L_done:
        mov edx, dword ptr [ebx + 0x20]
        push 0x1
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [ebx + 0x20]
        push eax
        call dword ptr [mem_0092568C]
        push -0x1
        mov ecx, ebx
        call ext_0043DC90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00431050] sub_00431050 (133 bytes)
extern "C" void ext_004658C0();
extern "C" void ext_00465B30();
extern "C" void ext_00465B40();
extern "C" void ext_00472350();
extern "C" void ext_006679D0();
extern "C" void __stdcall ext_006A5E60(int a, int b, int c);
extern "C" void ext_006A64FC();
extern "C" int mem_00924FF0;
extern "C" int mem_00ACDF8C;

extern "C" __declspec(naked) void __fastcall fn_00431050(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x84]
        call eax
        test al, al
        je short loc_00431079
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x8c]
        call eax
    loc_00431079:
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x54]
        call ext_006679D0
        test al, al
        je short loc_004310BE
        push 0
        push 3
        mov ecx, offset mem_00ACDF8C
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        sub eax, 2
        je short loc_004310D3
        sub eax, 4
        jne short loc_004310BE
        call ext_004658C0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xa4]
        call eax
        test eax, eax
        je short loc_004310D3
    loc_004310BE:
        call ext_00465B30
        mov ecx, dword ptr [eax + 0x14]
        call ext_00472350
        mov ecx, esi
        pop esi
        jmp ext_006A64FC
    loc_004310D3:
        pop esi
        ret
    }
}

// [0x00431430] sub_00431430 (41 bytes)
extern "C" void ext_00430310();
extern "C" void ext_004444B0();
extern "C" void ext_00465B30();
extern "C" void ext_00469500();

extern "C" void __fastcall fn_00431430(void* self) {
    typedef void* (*FnGet)();
    typedef void (__thiscall *FnMethod)(void*);
    typedef void (__thiscall *FnMethodInt)(void*, int);

    ((FnMethod)ext_00469500)(((FnGet)ext_00465B30)());
    void* child = *(void**)((char*)self + 0x114);
    if (child) {
        ((FnMethod)ext_004444B0)(child);
    }
    ((FnMethodInt)ext_00430310)(self, 10);
}

// [0x0043D620] sub_0043D620 (225 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925628;

extern "C" __declspec(naked) void __fastcall fn_0043D620(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0C0h]
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [ecx + 0BCh]
        push esi
        lea esi, [ecx + 0B0h]
        add eax, ebp
        cmp ebp, eax
        push edi
        jbe short loc_0043D647
        call ebx

    loc_0043D647:
        mov eax, dword ptr [esi + 0Ch]
        mov edi, dword ptr [esi + 10h]
        add edi, eax
        cmp eax, edi
        jbe short loc_0043D655
        call ebx

    loc_0043D655:
        cmp esi, esi
        je short loc_0043D65B
        call ebx

    loc_0043D65B:
        cmp ebp, edi
        je loc_0043D6F5
        mov ecx, dword ptr [esi + 10h]
        add ecx, dword ptr [esi + 0Ch]
        mov edi, ebp
        mov ebx, ebp
        shr edi, 2
        and ebx, 3
        cmp ebp, ecx
        jb short loc_0043D67D
        call dword ptr [mem_00925134]

    loc_0043D67D:
        mov eax, dword ptr [esi + 8]
        cmp eax, edi
        ja short loc_0043D686
        sub edi, eax

    loc_0043D686:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + edi*4]
        mov edi, dword ptr [eax + ebx*4]
        cmp byte ptr [edi + 34h], 0
        je short loc_0043D6CB
        mov eax, dword ptr [edi + 44h]
        mov edx, dword ptr [edi + 40h]
        mov ecx, dword ptr [edi + 3Ch]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [edi + 48h]
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        mov dword ptr [esp + 20h], ecx
        push eax
        lea ecx, [esp + 18h]
        push ecx
        call dword ptr [mem_00925628]
        test eax, eax
        jne short loc_0043D6E9

    loc_0043D6CB:
        mov edx, dword ptr [esi + 10h]
        add edx, dword ptr [esi + 0Ch]
        cmp ebp, edx
        jb short loc_0043D6DB
        call dword ptr [mem_00925134]

    loc_0043D6DB:
        mov ebx, dword ptr [mem_00925134]
        add ebp, 1
        jmp loc_0043D647

    loc_0043D6E9:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret 4

    loc_0043D6F5:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 10h
        ret 4
    }
}

// [0x00437E80] sub_00437E80 (241 bytes)
extern "C" void ext_0046A4D0();
extern "C" void ext_0046A8E0();
extern "C" void ext_00474FF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00437E80(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0Ch
        mov edx, dword ptr [ebp + 18h]
        push ebx
        push esi
        push edi
        mov dword ptr [esp + 10h], 0
        mov eax, dword ptr [esp + 10h]
        push eax
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        push edx
        mov edx, dword ptr [ebp + 0Ch]
        push eax
        push ecx
        push edx
        call ext_0046A4D0
        mov ebx, dword ptr [esp + 28h]
        add esp, 18h
        test ebx, ebx
        jle L_end_00437E80
    L_loop_00437E80:
        mov ecx, dword ptr [ebp + 10h]
        mov eax, ebx
        cdq
        sub eax, edx
        mov esi, eax
        mov eax, dword ptr [ebp + 0Ch]
        sar esi, 1
        test esi, esi
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], ecx
        mov edi, esi
        jle L_neg_00437E80
        nop
    L_adv_00437E80:
        lea ecx, [esp + 10h]
        call ext_00474FF0
        sub edi, 1
        test edi, edi
        jg L_adv_00437E80
    L_neg_00437E80:
        test edi, edi
        jge L_chk_00437E80
        neg edi
    L_back_00437E80:
        lea ecx, [esp + 10h]
        call ext_0046A8E0
        sub edi, 1
        jne L_back_00437E80
    L_chk_00437E80:
        cmp dword ptr [esp + 10h], 0
        jne L_ok1_00437E80
        call dword ptr [mem_00925134]
    L_ok1_00437E80:
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        cmp edx, dword ptr [eax + 4]
        jne L_ok2_00437E80
        call dword ptr [mem_00925134]
    L_ok2_00437E80:
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx + 0Ch]
        mov eax, dword ptr [ebp + 1Ch]
        cmp edx, dword ptr [eax]
        jae L_else_00437E80
        lea ecx, [esp + 10h]
        call ext_00474FF0
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        or eax, -1
        sub eax, esi
        mov dword ptr [ebp + 0Ch], ecx
        mov dword ptr [ebp + 10h], edx
        add ebx, eax
        jmp L_test_00437E80
    L_else_00437E80:
        mov ebx, esi
    L_test_00437E80:
        test ebx, ebx
        jg L_loop_00437E80
    L_end_00437E80:
        mov eax, dword ptr [ebp + 08h]
        mov ecx, dword ptr [ebp + 0Ch]
        mov edx, dword ptr [ebp + 10h]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00437F80] sub_00437F80 (118 bytes)
extern "C" void ext_00437E80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00437F80(void* self) {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        push 0
        push eax
        push ebp
        push ebx
        push ecx
        push edx
        lea eax, [esp + 34h]
        push eax
        call ext_00437E80
        mov esi, dword ptr [eax]
        mov edi, dword ptr [eax + 4]
        add esp, 1Ch
        test esi, esi
        je L_inv1_00437F80
        cmp esi, ebx
        je L_ok0_00437F80
    L_inv1_00437F80:
        mov ebx, dword ptr [mem_00925134]
        call ebx
        jmp L_after0_00437F80
    L_ok0_00437F80:
        mov ebx, dword ptr [mem_00925134]
    L_after0_00437F80:
        cmp edi, ebp
        je L_ret0_00437F80
        test esi, esi
        jne L_skip1_00437F80
        call ebx
    L_skip1_00437F80:
        cmp edi, dword ptr [esi + 4]
        jne L_skip2_00437F80
        call ebx
    L_skip2_00437F80:
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [edi + 0Ch]
        jb L_ret0_00437F80
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    L_ret0_00437F80:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x0043DB90] sub_0043DB90 (246 bytes)
extern "C" int mem_00924080;
extern "C" __declspec(naked) void __fastcall fn_0043DB90(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        lea eax, [ecx + 0fch]
        push esi
        mov dword ptr [eax], 0
        lea esi, [ecx + 0b0h]
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esi + 10h]
        push edi
        mov edi, dword ptr [esi + 0ch]
        add eax, edi
        cmp edi, eax
        jbe L_a0043DB90
        call dword ptr [mem_00925134]
L_a0043DB90:
        mov eax, dword ptr [esi + 0ch]
        mov ebp, edi
        mov edi, dword ptr [esi + 10h]
        add edi, eax
        cmp eax, edi
        mov dword ptr [esp + 18h], edi
        jbe L_b0043DB90
        call dword ptr [mem_00925134]
L_b0043DB90:
        cmp esi, esi
        je L_c0043DB90
        call dword ptr [mem_00925134]
L_c0043DB90:
        cmp ebp, edi
        je L_done0043DB90
        mov ecx, dword ptr [esi + 0ch]
        add ecx, dword ptr [esi + 10h]
        mov edi, ebp
        mov ebx, ebp
        shr edi, 2
        and ebx, 3
        cmp ebp, ecx
        jb L_d0043DB90
        call dword ptr [mem_00925134]
L_d0043DB90:
        mov eax, dword ptr [esi + 8]
        cmp eax, edi
        ja L_e0043DB90
        sub edi, eax
L_e0043DB90:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + edi*4]
        mov eax, dword ptr [eax + ebx*4]
        cmp byte ptr [eax + 34h], 0
        je L_f0043DB90
        lea ecx, [esp + 1ch]
        lea edi, [eax + 1ch]
        push ecx
        mov ecx, edi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [edx + 8]
        push eax
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        add eax, 18h
        cmp dword ptr [ecx], eax
        mov dword ptr [esp + 14h], eax
        lea eax, [esp + 14h]
        jl L_g0043DB90
        mov eax, ecx
L_g0043DB90:
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
L_f0043DB90:
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 10h]
        cmp ebp, eax
        jb L_h0043DB90
        call dword ptr [mem_00925134]
L_h0043DB90:
        mov edi, dword ptr [esp + 18h]
        add ebp, 1
        jmp L_b0043DB90
L_done0043DB90:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret 4
    }
}

// [0x00431200] sub_00431200 (270 bytes)
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5E72();
extern "C" void ext_006A5EA2();
extern "C" void ext_006A6502();
extern "C" void ext_006A6514();
extern "C" int mem_0092563C;
extern "C" int mem_009256F4;
extern "C" int mem_009247B0;
extern "C" __declspec(naked) void __fastcall fn_00431200(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0f6h], 0
        push edi
        mov edi, dword ptr [mem_0092563C]
        sete al
        push 0
        mov byte ptr [esi + 0f6h], al
        call edi
        push 1
        mov ebx, eax
        call edi
        push 20h
        mov ebp, eax
        call edi
        push 21h
        mov dword ptr [esp + 14h], eax
        call edi
        mov edi, eax
        mov eax, dword ptr [esi + 100h]
        test eax, eax
        je L_skip_a
        mov cl, byte ptr [esi + 0f6h]
        mov byte ptr [eax + 6ch], cl
L_skip_a:
        cmp byte ptr [esi + 0f6h], 0
        mov ecx, esi
        je L_zero
        lea edx, [esi + 1b8h]
        push edx
        call ext_006A6502
        push 0
        push 0
        push 0c00000h
        mov ecx, esi
        call ext_006A5EA2
        push 0
        push 0
        push 40000h
        mov ecx, esi
        call ext_006A5EA2
        mov eax, dword ptr [esi + 20h]
        push 0
        push eax
        call dword ptr [mem_009256F4]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [mem_009247B0]
        push 40h
        add edi, ebp
        push edi
        add ecx, ebx
        push ecx
        push -1
        push -1
        push edx
        mov ecx, esi
        call ext_006A5E4E
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
L_zero:
        push 0
        push 0c00000h
        push 0
        call ext_006A5EA2
        push 0
        push 40000h
        push 0
        mov ecx, esi
        call ext_006A5EA2
        lea eax, [esi + 1a8h]
        test eax, eax
        je L_noMenu
        cmp dword ptr [eax + 4], 0
        je L_noMenu
        test eax, eax
        je L_noMenu2
        mov eax, dword ptr [eax + 4]
L_noMenu2:
        push eax
        mov eax, dword ptr [esi + 20h]
        push eax
        call dword ptr [mem_009256F4]
L_noMenu:
        lea ecx, [esi + 1b8h]
        push ecx
        mov ecx, esi
        call ext_006A6514
        push 5
        mov ecx, esi
        call ext_006A5E72
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x004310E0] sub_004310E0 (280 bytes)
extern "C" void ext_00456C70();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A6328();
extern "C" void ext_006A64F6();
extern "C" void ext_006A6502();
extern "C" void ext_006A6508();
extern "C" int mem_009242F0; extern "C" int mem_00924300; extern "C" int mem_00925218;
extern "C" int mem_0093A084; extern "C" int mem_0093A080; extern "C" int mem_0093A088; extern "C" int mem_009242F4;
extern "C" int mem_0092F8E4;
extern "C" int mem_00879E9C;
extern "C" __declspec(naked) void __fastcall fn_004310E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_00879E9C
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x230
        mov eax, [esp+0x240]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp+8]
        call dword ptr [mem_009242F0]
        lea ecx, [esp+4]
        mov dword ptr [esp+0x23c], 0
        call dword ptr [mem_00924300]
        push eax
        push esi
        call ext_00456C70
        add esp, 8
        lea ecx, [esp+4]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A6508
        lea ecx, [esp+8]
        push ecx
        mov ecx, esi
        call ext_006A6502
        test eax, eax
        je L1
        mov eax, [esp+0x28]
        mov edx, [esp+0x30]
        mov ecx, [esp+0x24]
        sub edx, eax
        push edx
        mov edx, [esp+0x30]
        sub edx, ecx
        push edx
        push eax
        xor eax, eax
        cmp dword ptr [esp+0x1c], 3
        push ecx
        sete al
        lea ecx, [esp+0x44]
        lea eax, [eax+eax+1]
        push eax
        push offset mem_0092F8E4
        push ecx
        call dword ptr [mem_00925218]
        add esp, 0x1c
        call ext_006A5EDE
        mov ecx, [mem_0093A084]
        mov eax, [eax+4]
        lea edx, [esp+0x34]
        push edx
        mov edx, [mem_0093A080]
        push ecx
        push edx
        mov ecx, eax
        call ext_006A64F6
    L1:
        call ext_006A5EDE
        mov edx, [mem_0093A088]
        mov eax, [eax+4]
        xor ecx, ecx
        cmp byte ptr [esi+0xf4], cl
        setne cl
        push ecx
        mov ecx, [mem_0093A080]
        push edx
        push ecx
        mov ecx, eax
        call ext_006A6328
        lea ecx, [esp+4]
        call dword ptr [mem_009242F4]
        mov ecx, [esp+0x234]
        pop esi
        mov fs:[0], ecx
        add esp, 0x23c
        ret 4
    }
}

// [0x0043D050] sub_0043D050 (283 bytes)
extern "C" void ext_006A65FE();
extern "C" void ext_006A6604();
extern "C" void ext_006A660A();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" int mem_00996B98;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_0043D050(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, 4
        push edi
        mov ebx, ecx
        je loc_43D123
        cmp esi, 5
        je loc_43D123
        cmp esi, 3
        je loc_43D082
        cmp esi, 2
        je loc_43D082
        cmp esi, 1
        je loc_43D082
        test esi, esi
        jne loc_43D153
    loc_43D082:
        push ebp
        xor ebp, ebp
        cmp esi, 3
        je loc_43D09F
        cmp esi, 2
        je loc_43D09F
        cmp esi, 1
        je loc_43D098
        test esi, esi
        jne loc_43D0D0
    loc_43D098:
        mov ebp, 0xe
        jmp loc_43D0D0
    loc_43D09F:
        fild dword ptr [ebx + 0xf8]
        sub esp, 8
        fdiv qword ptr [mem_00996B98]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        add esp, 8
        call ext_006A6DE0
        mov ebp, eax
    loc_43D0D0:
        push 1
        mov ecx, ebx
        call ext_006A660A
        cmp esi, 2
        mov edi, eax
        je loc_43D0F2
        test esi, esi
        je loc_43D0F2
        cmp esi, 3
        je loc_43D0EE
        cmp esi, 1
        jne loc_43D0F4
    loc_43D0EE:
        add edi, ebp
        jmp loc_43D0F4
    loc_43D0F2:
        sub edi, ebp
    loc_43D0F4:
        push 1
        push edi
        push 1
        mov ecx, ebx
        call ext_006A6604
        mov eax, dword ptr [ebx + 0x20]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        mov edx, dword ptr [esp + 0x1c]
        pop ebp
        push edx
        push edi
        push esi
        mov ecx, ebx
        call ext_006A65FE
        pop edi
        pop esi
        pop ebx
        ret 0xc
    loc_43D123:
        mov edi, dword ptr [esp + 0x14]
        push 1
        push edi
        push 1
        call ext_006A6604
        mov ecx, dword ptr [ebx + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        mov edx, dword ptr [esp + 0x18]
        push edx
        push edi
        push esi
        mov ecx, ebx
        call ext_006A65FE
        pop edi
        pop esi
        pop ebx
        ret 0xc
    loc_43D153:
        mov edx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        push edx
        push edi
        push esi
        mov ecx, ebx
        call ext_006A65FE
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x00434C40] sub_00434C40 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00ACE1F0;
extern "C" int mem_00ACE1D4;
extern "C" __declspec(naked) void* __fastcall fn_00434C40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87a5fe
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ACE1F0], al
        jne done_434C40
        or dword ptr [mem_00ACE1F0], eax
        push 0xa2f438
        push offset mem_00ACE1D4
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x915190
        call ext_006A6C87
        add esp, 0xc
    done_434C40:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ACE1D4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00434CA0] sub_00434CA0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00ACE210;
extern "C" int mem_00ACE1F4;
extern "C" __declspec(naked) void* __fastcall fn_00434CA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87a61e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ACE210], al
        jne done_434CA0
        or dword ptr [mem_00ACE210], eax
        push 0xa2f484
        push offset mem_00ACE1F4
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x915180
        call ext_006A6C87
        add esp, 0xc
    done_434CA0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ACE1F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00430F30] sub_00430F30 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00B5CE94;
extern "C" int mem_00A2E24C;
extern "C" __declspec(naked) void __fastcall fn_00430F30(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A2E24C
        mov dword ptr [esp+8], 0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp+0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp+0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00435B50] sub_00435B50 (287 bytes)
extern "C" void ext_0041B3D0();
extern "C" void ext_004470D0();
extern "C" void ext_0045E8A0();
extern "C" void ext_004609C0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5E72();
extern "C" void ext_006A6532();
extern "C" void ext_0044BD20();
extern "C" int mem_0093A078;
extern "C" int mem_0093A068;
extern "C" int mem_00925668;
extern "C" __declspec(naked) void __fastcall fn_00435B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x114]
        call ext_004470D0
        mov ecx, dword ptr [esi + 0x108]
        call ext_0045E8A0
        mov ecx, dword ptr [esi + 0x110]
        call ext_004609C0
        mov ecx, dword ptr [esi + 0x100]
        pop esi
        jmp ext_0044BD20
        push -1
        push 0x876a9a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x124]
        test eax, eax
        jne L_435C5F
        push edi
        push 0x208
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0
        je L_435BD2
        push 0
        mov ecx, eax
        call ext_0041B3D0
        mov edi, eax
        jmp L_435BD4
L_435BD2:
        xor edi, edi
L_435BD4:
        mov ecx, dword ptr [esi + 0x124]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], -1
        je L_435BF3
        test ecx, ecx
        je L_435BF3
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
L_435BF3:
        mov dword ptr [esi + 0x124], edi
        mov eax, dword ptr [mem_0093A078]
        mov ecx, dword ptr [mem_0093A068]
        push 1
        push eax
        push ecx
        mov ecx, 0xad6bc8
        call ext_006A6532
        test eax, eax
        setne dl
        mov byte ptr [edi + 0x11c], dl
        mov ecx, dword ptr [esi + 0x124]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x13c]
        push 0
        push 0x320
        call edx
        mov ecx, dword ptr [esi + 0x124]
        push 5
        call ext_006A5E72
        mov esi, dword ptr [esi + 0x100]
        test esi, esi
        pop edi
        je L_435C5F
        mov eax, dword ptr [esi + 0x20]
        push 0x105
        push 0
        push 0
        push eax
        call dword ptr [mem_00925668]
L_435C5F:
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00437970] sub_00437970 (314 bytes)
extern "C" void ext_00584A10();
extern "C" void ext_00584C00();
extern "C" void ext_00594000();
extern "C" void ext_00673C20();
extern "C" int mem_00924FF0;
extern "C" int mem_009256E8;
extern "C" int mem_00925134;
extern "C" int mem_009255D8;
extern "C" int mem_00924300;
extern "C" int mem_00925634;

extern "C" __declspec(naked) void __fastcall fn_00437970(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov eax, dword ptr [eax + 0x24]
        lea esi, [eax + 0x4]
        mov ecx, esi
        call ext_00584C00
        cmp al, byte ptr [esp + 0x20]
        jne L_4379BC
        mov ecx, esi
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [ecx + 0x4]
        push eax
        push 0x8237
        push 0x400
        push 0
        push edx
        call dword ptr [mem_009256E8]
    L_4379BC:
        push ebx
        push ebp
        push edi
        call ext_00594000
        mov edi, dword ptr [eax + 0x26c]
        mov eax, dword ptr [edi + 0x1c]
        mov eax, dword ptr [eax]
        add edi, 0x18
        mov esi, edi
        mov ebx, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebx
        mov ebp, 0x8238
    L_4379E3:
        test esi, esi
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x1c], ecx
        je L_4379F2
        cmp esi, edi
        je L_4379F8
    L_4379F2:
        call dword ptr [mem_00925134]
    L_4379F8:
        cmp ebx, dword ptr [esp + 0x1c]
        je L_437A62
        test esi, esi
        jne L_437A08
        call dword ptr [mem_00925134]
    L_437A08:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_437A13
        call dword ptr [mem_00925134]
    L_437A13:
        mov eax, dword ptr [ebx + 0x28]
        lea esi, [eax + 0x4]
        mov ecx, esi
        call ext_00584C00
        cmp al, byte ptr [esp + 0x2c]
        jne L_437A4C
        mov ecx, esi
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [edx + 0x4]
        push ebp
        push 0x400
        push 0
        push eax
        call dword ptr [mem_009256E8]
    L_437A4C:
        lea ecx, [esp + 0x10]
        add ebp, 1
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_4379E3
    L_437A62:
        mov esi, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call dword ptr [mem_009255D8]
        test eax, eax
        pop edi
        pop ebp
        pop ebx
        jbe L_437AA3
        cmp byte ptr [esp + 0x20], 0
        mov ecx, 0xace1d0
        jne L_437A88
        mov ecx, 0xace1cc
    L_437A88:
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 0x4]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push 0x10
        push ecx
        call dword ptr [mem_00925634]
    L_437AA3:
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x0043CB90] sub_0043CB90 (161 bytes)
extern "C" void ext_004545D0();
extern "C" void ext_00455F10();
extern "C" void ext_00454BE0();
extern "C" void ext_00454560();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D8;
extern "C" int mem_0093A0D4;
extern "C" int mem_0093A0E0;
extern "C" int mem_0093A0DC;

extern "C" __declspec(naked) void __fastcall fn_0043CB90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87b328
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_004545D0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], 0x00931EDC
        mov dword ptr [esi + 0x144], eax
        mov dword ptr [eax + 0x18c], esi
        mov eax, dword ptr [mem_0093A0C4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_00455F10
        mov ecx, dword ptr [mem_0093A0CC]
        push ecx
        mov ecx, esi
        call ext_00454BE0
        mov edx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [mem_0093A0D8]
        mov ecx, dword ptr [mem_0093A0D4]
        push edx
        mov edx, dword ptr [mem_0093A0E0]
        push eax
        mov eax, dword ptr [mem_0093A0DC]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_00454560
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0xec], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004339D0] sub_004339D0 (408 bytes)
extern "C" int mem_00AED9D0; extern "C" int mem_00924FE4; extern "C" int mem_00924FF4;
extern "C" int mem_0092F9C8; extern "C" int mem_0092F9BC; extern "C" int mem_0092F9AC; extern "C" int mem_0092F994; extern "C" int mem_0092F980; extern "C" int mem_008AEE4D;
extern "C" void ext_0041D830(); extern "C" void ext_0041D850(); extern "C" void ext_0041D860(); extern "C" void ext_0041D870(); extern "C" void ext_0041D880(); extern "C" void ext_0052ADA0(); extern "C" void ext_0066A180();
extern "C" __declspec(naked) void __fastcall fn_004339D0(void* self) {
    __asm {
        push -1
        push offset mem_008AEE4D
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00AED9D0]
        mov esi, ecx
        push offset mem_0092F9C8
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [esi+0x120]
        lea eax, [esp+0x10]
        push eax
        mov ecx, edi
        mov dword ptr [esp+0x54], 0
        call ext_0052ADA0
        mov ecx, eax
        call ext_0066A180
        push eax
        mov ecx, ebx
        call ext_0041D830
        or ebx, -1
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x50], ebx
        call dword ptr [mem_00924FF4]
        push offset mem_0092F9BC
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [esi+0x120]
        lea ecx, [esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr [esp+0x54], 1
        call ext_0052ADA0
        mov ecx, eax
        call ext_0066A180
        push eax
        mov ecx, ebp
        call ext_0041D860
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x50], ebx
        call dword ptr [mem_00924FF4]
        push offset mem_0092F9AC
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [esi+0x120]
        lea edx, [esp+0x10]
        push edx
        mov ecx, edi
        mov dword ptr [esp+0x54], 2
        call ext_0052ADA0
        mov ecx, eax
        call ext_0066A180
        push eax
        mov ecx, ebp
        call ext_0041D850
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x50], ebx
        call dword ptr [mem_00924FF4]
        push offset mem_0092F994
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FE4]
        mov ebp, dword ptr [esi+0x120]
        lea eax, [esp+0x10]
        push eax
        mov ecx, edi
        mov dword ptr [esp+0x54], 3
        call ext_0052ADA0
        mov ecx, eax
        call ext_0066A180
        push eax
        mov ecx, ebp
        call ext_0041D870
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x50], ebx
        call dword ptr [mem_00924FF4]
        push offset mem_0092F980
        lea ecx, [esp+0x30]
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esi+0x120]
        lea ecx, [esp+0x2c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp+0x54], 4
        call ext_0052ADA0
        mov ecx, eax
        call ext_0066A180
        push eax
        mov ecx, esi
        call ext_0041D880
        lea ecx, [esp+0x2c]
        mov dword ptr [esp+0x50], ebx
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0043EB40] sub_0043EB40 (478 bytes)
extern "C" void ext_0043E6F0();
extern "C" void ext_0043E760();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0043EB40(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        push edi
        mov edi, dword ptr [esi + 0xc]
        add eax, edi
        cmp edi, eax
        jbe L_43EB5B
        call dword ptr [mem_00925134]
    L_43EB5B:
        mov ebp, dword ptr [esp + 0x24]
        test ebp, ebp
        je L_43EB67
        cmp ebp, esi
        je L_43EB6D
    L_43EB67:
        call dword ptr [mem_00925134]
    L_43EB6D:
        mov ebx, dword ptr [esp + 0x28]
        mov eax, ebx
        sub eax, edi
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        je L_43EB85
        cmp eax, ebp
        je L_43EB8B
    L_43EB85:
        call dword ptr [mem_00925134]
    L_43EB8B:
        mov ebp, dword ptr [esp + 0x34]
        mov edi, dword ptr [esi + 0x10]
        mov eax, ebp
        sub eax, ebx
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esi + 0xc]
        add edi, eax
        cmp eax, edi
        jbe L_43EBA9
        call dword ptr [mem_00925134]
    L_43EBA9:
        cmp esi, dword ptr [esp + 0x30]
        je L_43EBB5
        call dword ptr [mem_00925134]
    L_43EBB5:
        sub esp, 0xc
        mov eax, esp
        sub edi, ebp
        sub esp, 0xc
        cmp dword ptr [esp + 0x2c], edi
        mov dword ptr [eax], 0x0
        jae L_43EC5B
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [eax + 0x8], ebp
        mov dword ptr [eax + 0x4], ecx
        mov eax, esp
        sub esp, 0xc
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ebx
        mov ebx, dword ptr [esi + 0xc]
        xor ebp, ebp
        mov edi, esp
        mov dword ptr [edi], ebp
        mov eax, dword ptr [esi + 0xc]
        cmp eax, ebx
        ja L_43EC07
        mov ecx, dword ptr [esi + 0x10]
        add ecx, eax
        cmp ebx, ecx
        jbe L_43EC0D
    L_43EC07:
        call dword ptr [mem_00925134]
    L_43EC0D:
        lea edx, [esp + 0x50]
        push edx
        mov dword ptr [edi + 0x4], esi
        mov dword ptr [edi + 0x8], ebx
        call ext_0043E6F0
        mov edx, dword ptr [esp + 0x38]
        add esp, 0x28
        cmp edx, ebp
        jbe L_43ECDA
        mov ecx, dword ptr [esi + 0x10]
        nop
    L_43EC30:
        cmp ecx, ebp
        je L_43EC51
        mov edi, dword ptr [esi + 0x8]
        add dword ptr [esi + 0xc], 0x1
        mov eax, dword ptr [esi + 0xc]
        add edi, edi
        add edi, edi
        cmp edi, eax
        ja L_43EC49
        mov dword ptr [esi + 0xc], ebp
    L_43EC49:
        sub ecx, 0x1
        jne L_43EC51
        mov dword ptr [esi + 0xc], ebp
    L_43EC51:
        sub edx, 0x1
        jne L_43EC30
        mov dword ptr [esi + 0x10], ecx
        jmp L_43ECDA
    L_43EC5B:
        mov ecx, dword ptr [esp + 0x3c]
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0x4], ecx
        mov edi, dword ptr [esi + 0x10]
        add edi, dword ptr [esi + 0xc]
        mov ebx, esp
        mov dword ptr [ebx], 0x0
        mov eax, dword ptr [esi + 0xc]
        cmp eax, edi
        ja L_43EC83
        mov edx, dword ptr [esi + 0x10]
        add edx, eax
        cmp edi, edx
        jbe L_43EC89
    L_43EC83:
        call dword ptr [mem_00925134]
    L_43EC89:
        mov ecx, dword ptr [esp + 0x48]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [ebx + 0x4], esi
        mov dword ptr [ebx + 0x8], edi
        lea edx, [esp + 0x50]
        push edx
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ebp
        call ext_0043E760
        mov ecx, dword ptr [esp + 0x38]
        add esp, 0x28
        test ecx, ecx
        jbe L_43ECD8
        mov eax, dword ptr [esi + 0x10]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_43ECC0:
        test eax, eax
        je L_43ECD0
        sub eax, 0x1
        jne L_43ECD0
        mov dword ptr [esi + 0xc], 0x0
    L_43ECD0:
        sub ecx, 0x1
        jne L_43ECC0
        mov dword ptr [esi + 0x10], eax
    L_43ECD8:
        xor ebp, ebp
    L_43ECDA:
        mov edi, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x10]
        add eax, edi
        cmp edi, eax
        jbe L_43ECEC
        call dword ptr [mem_00925134]
    L_43ECEC:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x10]
        add edi, ecx
        add edx, eax
        cmp edi, edx
        ja L_43ED02
        cmp edi, eax
        jae L_43ED08
    L_43ED02:
        call dword ptr [mem_00925134]
    L_43ED08:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x8], edi
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x1c
    }
}

// [0x0043F7B0] sub_0043F7B0 (110 bytes)
extern "C" int mem_00925134;
extern "C" void ext_0043EB40();
extern "C" __declspec(naked) void __fastcall fn_0043F7B0(void* self, int edx_unused, void* a1, int a2, void* a3, int a4) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 1Ch]
        push edi
        sub esp, 0Ch
        test esi, esi
        mov dword ptr [esp + 1Ch], ecx
        mov edi, esp
        jne L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov eax, dword ptr [esi + 0Ch]
        mov ebp, dword ptr [esp + 30h]
        mov ecx, dword ptr [esi + 10h]
        lea ebx, [ebp + 1]
        add ecx, eax
        cmp ebx, ecx
        ja L_bad
        cmp ebx, eax
        jae L_ok2
    L_bad:
        call dword ptr [mem_00925134]
    L_ok2:
        mov ecx, dword ptr [esp + 1Ch]
        sub esp, 0Ch
        mov eax, esp
        mov dword ptr [edi + 4], esi
        mov dword ptr [edi], 0
        mov dword ptr [edi + 8], ebx
        mov dword ptr [eax + 4], esi
        mov esi, dword ptr [esp + 30h]
        push esi
        mov dword ptr [eax], 0
        mov dword ptr [eax + 8], ebp
        call ext_0043EB40
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 10h
    }
}

// [0x00435D00] sub_00435D00 (482 bytes)
extern "C" void ext_00434D00();
extern "C" void ext_00434DB0();
extern "C" int mem_00924E60;
extern "C" int mem_00924E64;
extern "C" int mem_00924E68;
extern "C" int mem_00924EA0;
extern "C" int mem_00924E6C;
extern "C" int mem_00924F68;
extern "C" int mem_00924F60;
extern "C" int mem_00924E70;
extern "C" int mem_00924E74;
extern "C" int mem_00924E78;
extern "C" __declspec(naked) void __fastcall fn_00435D00(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87a698
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        mov eax, [ebp+0xc]
        push ebx
        push esi
        push edi
        mov [ebp-0x10], esp
        xor edi, edi
        push eax
        mov [ebp-0x14], edi
        call dword ptr [mem_00924E60]
        mov esi, [ebp+0x8]
        mov ecx, [esi]
        mov ecx, [ecx+0x4]
        add esp, 4
        add ecx, esi
        mov ebx, eax
        call dword ptr [mem_00924E64]
        test eax, eax
        jle L_a
        mov edx, [esi]
        mov ecx, [edx+0x4]
        add ecx, esi
        call dword ptr [mem_00924E64]
        cmp eax, ebx
        jle L_a
        mov eax, [esi]
        mov ecx, [eax+0x4]
        add ecx, esi
        call dword ptr [mem_00924E64]
        mov edi, eax
        sub edi, ebx
L_a:
        push esi
        lea ecx, [ebp-0x28]
        call ext_00434D00
        cmp byte ptr [ebp-0x24], 0
        mov dword ptr [ebp-0x4], 0
        jne L_b
        mov dword ptr [ebp-0x14], 4
        jmp L_end
L_b:
        mov ecx, [esi]
        mov ecx, [ecx+0x4]
        add ecx, esi
        mov byte ptr [ebp-0x4], 1
        call dword ptr [mem_00924E68]
        and eax, 0x1c0
        cmp eax, 0x40
        je L_c
L_d:
        test edi, edi
        jle L_e
        mov edx, [esi]
        mov eax, [edx+0x4]
        mov dl, byte ptr [eax+esi+0x30]
        lea ecx, [eax+esi]
        mov byte ptr [ebp-0x18], dl
        call dword ptr [mem_00924EA0]
        mov ecx, [ebp-0x18]
        push ecx
        mov ecx, eax
        call dword ptr [mem_00924E6C]
        mov [ebp-0x1c], eax
        call dword ptr [mem_00924F68]
        lea edx, [ebp-0x1c]
        mov [ebp-0x20], eax
        push edx
        lea eax, [ebp-0x20]
        push eax
        call dword ptr [mem_00924F60]
        add esp, 8
        test al, al
        je L_f
        or dword ptr [ebp-0x14], 4
L_e:
        cmp dword ptr [ebp-0x14], 0
        jne L_g
L_c:
        mov ecx, [esi]
        mov ecx, [ecx+0x4]
        add ecx, esi
        call dword ptr [mem_00924EA0]
        mov edx, [ebp+0xc]
        push ebx
        push edx
        mov ecx, eax
        call dword ptr [mem_00924E70]
        cmp eax, ebx
        je L_h
        mov dword ptr [ebp-0x14], 4
L_g:
        mov ecx, [esi]
        mov ecx, [ecx+0x4]
        push 0
        add ecx, esi
        call dword ptr [mem_00924E74]
        mov dword ptr [ebp-0x4], 0
        jmp L_end
L_f:
        sub edi, 1
        jmp L_d
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_h:
        test edi, edi
        jle L_g
        mov eax, [esi]
        mov ecx, [eax+0x4]
        mov dl, byte ptr [ecx+esi+0x30]
        add ecx, esi
        mov byte ptr [ebp-0x20], dl
        call dword ptr [mem_00924EA0]
        mov ecx, [ebp-0x20]
        push ecx
        mov ecx, eax
        call dword ptr [mem_00924E6C]
        mov [ebp-0x1c], eax
        call dword ptr [mem_00924F68]
        lea edx, [ebp-0x1c]
        mov [ebp-0x18], eax
        push edx
        lea eax, [ebp-0x18]
        push eax
        call dword ptr [mem_00924F60]
        add esp, 8
        test al, al
        je L_i
        or dword ptr [ebp-0x14], 4
        jmp L_g
L_i:
        sub edi, 1
        jmp L_h
L_catch:
        mov eax, [ebp+0x8]
        mov edx, [eax]
        mov ecx, [edx+0x4]
        push 1
        push 4
        add ecx, eax
        call dword ptr [mem_00924E78]
        mov eax, 0x435eaa
        __asm _emit 0xc3
        mov esi, [ebp+0x8]
L_end:
        mov ecx, [esi]
        mov eax, [ebp-0x14]
        mov ecx, [ecx+0x4]
        push 0
        push eax
        add ecx, esi
        call dword ptr [mem_00924E78]
        lea ecx, [ebp-0x28]
        mov dword ptr [ebp-0x4], -1
        call ext_00434DB0
        mov ecx, [ebp-0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_0043B720();
extern "C" void ext_004410C0();

// [0x0043B810] sub_0043B810 (513 bytes)
extern "C" __declspec(naked) void __cdecl fn_0043B810() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, ebx
        sub eax, edi
        sar eax, 0x2
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [edi + 4*eax]
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [ebx - 0x4]
        push ecx
        push esi
        push edi
        call ext_0043B720
        add esp, 0x10
        cmp edi, esi
        lea ebp, [esi + 0x4]
        jae L_0043B887
    L_0043B846:
        mov ecx, dword ptr [esi - 0x4]
        mov ebx, dword ptr [esi]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B861
        mov ecx, ebx
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B883
    L_0043B861:
        mov ecx, dword ptr [esi]
        mov ebx, dword ptr [esi - 0x4]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B87C
        mov ecx, ebx
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B883
    L_0043B87C:
        add esi, -0x4
        cmp edi, esi
        jb L_0043B846
    L_0043B883:
        mov ebx, dword ptr [esp + 0x20]
    L_0043B887:
        cmp ebp, ebx
        jae L_0043B8CD
        jmp L_0043B890
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_0043B890:
        mov ecx, dword ptr [ebp]
        mov edi, dword ptr [esi]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B8AB
        mov ecx, edi
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B8CD
    L_0043B8AB:
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ebp]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B8C6
        mov ecx, edi
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B8CD
    L_0043B8C6:
        add ebp, 0x4
        cmp ebp, ebx
        jb L_0043B890
    L_0043B8CD:
        mov edi, ebp
        mov ebx, esi
    L_0043B8D1:
        cmp edi, dword ptr [esp + 0x20]
        jae L_0043B92D
    L_0043B8D7:
        mov edx, dword ptr [edi]
        mov ecx, dword ptr [esi]
        mov dword ptr [esp + 0x10], edx
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B8F7
        mov ecx, dword ptr [esp + 0x10]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B924
    L_0043B8F7:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B917
        mov ecx, dword ptr [esp + 0x10]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B92D
    L_0043B917:
        mov edx, dword ptr [edi]
        mov eax, ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [eax], edx
        add ebp, 0x4
        mov dword ptr [edi], ecx
    L_0043B924:
        add edi, 0x4
        cmp edi, dword ptr [esp + 0x20]
        jb L_0043B8D7
    L_0043B92D:
        cmp ebx, dword ptr [esp + 0x1c]
        jbe L_0043B990
    L_0043B933:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebx - 0x4]
        mov dword ptr [esp + 0x10], eax
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B954
        mov ecx, dword ptr [esp + 0x10]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B983
    L_0043B954:
        mov ecx, dword ptr [ebx - 0x4]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [esi]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B975
        mov ecx, dword ptr [esp + 0x10]
        call ext_004410C0
        cmp eax, 0x1
        jle L_0043B98C
    L_0043B975:
        mov edx, dword ptr [ebx - 0x4]
        mov eax, dword ptr [esi - 0x4]
        sub esi, 0x4
        mov dword ptr [esi], edx
        mov dword ptr [ebx - 0x4], eax
    L_0043B983:
        add ebx, -0x4
        cmp dword ptr [esp + 0x1c], ebx
        jb L_0043B933
    L_0043B98C:
        cmp ebx, dword ptr [esp + 0x1c]
    L_0043B990:
        jne L_0043B9C8
        cmp edi, dword ptr [esp + 0x20]
        je L_0043BA02
        cmp ebp, edi
        je L_0043B9A6
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esi]
        mov dword ptr [esi], ecx
        mov dword ptr [ebp], eax
    L_0043B9A6:
        mov ecx, esi
        mov edx, dword ptr [ecx]
        mov eax, edi
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [esp + 0x10]
        add ebp, 0x4
        add esi, 0x4
        add edi, 0x4
        mov dword ptr [eax], ecx
        jmp L_0043B8D1
    L_0043B9C8:
        sub ebx, 0x4
        cmp edi, dword ptr [esp + 0x20]
        jne L_0043B9F2
        sub esi, 0x4
        cmp ebx, esi
        je L_0043B9E0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [ebx]
        mov dword ptr [ebx], edx
        mov dword ptr [esi], eax
    L_0043B9E0:
        mov ecx, dword ptr [ebp - 0x4]
        mov eax, dword ptr [esi]
        sub ebp, 0x4
        mov dword ptr [esi], ecx
        mov dword ptr [ebp], eax
        jmp L_0043B8D1
    L_0043B9F2:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebx]
        mov dword ptr [edi], edx
        mov dword ptr [ebx], eax
        add edi, 0x4
        jmp L_0043B8D1
    L_0043BA02:
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00433B90] sub_00433B90 (533 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00465B30();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A0AC;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00433B90(void* self) {
    __asm {
        push -1
        push 0x87a5ba
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x22c
        push esi
        push 0xad7a88
        lea eax, [esp + 0x34]
        push 0xb593e4
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x240], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 2
        push 0
        mov ecx, 0xb59278
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        lea ecx, [esp + 0x84]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A0AC]
        push ecx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x23c], 1
        call dword ptr [mem_009242F0]
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x240], 2
        call ext_00430FC0
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x238], 4
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0xdc]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x68]
        call ext_006A5F62
        cmp eax, 1
        jne L_00433D57
        push edi
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x240], 5
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 6
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A0AC]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x244], 9
        call ext_00467670
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov esi, dword ptr [eax + 0x30]
        lea eax, [esp + 8]
        push eax
        lea ecx, [esp + 0x70]
        call ext_006A5F5C
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 0xa
        call dword ptr [mem_00924300]
        mov edx, dword ptr [edi + 0x144]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 8]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x23c], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xf]
        mov byte ptr [esp + 0x23c], 4
        call ext_0040BF20
        pop edi
    L_00433D57:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x238], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x238], 0
        call ext_006A5F56
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x238], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x230]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x238
        ret
    }
}

// [0x00432E60] sub_00432E60 (538 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00462EC0();
extern "C" void ext_00462F00();
extern "C" void ext_004658C0();
extern "C" void ext_00465B40();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A098;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00432E60(void* self) {
    __asm {
        push -1
        push 0x87a44e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x22c
        push esi
        push 0xad7a88
        lea eax, [esp + 0x50]
        push 0xb59390
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x240], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 2
        push 0
        mov ecx, 0xb59224
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        lea ecx, [esp + 0x84]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A098]
        push ecx
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x23c], 1
        call dword ptr [mem_009242F0]
        lea edx, [esp + 8]
        push edx
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x240], 2
        call ext_00430FC0
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x238], 4
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0xdc]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x68]
        call ext_006A5F62
        cmp eax, 1
        jne L_0043302c
        push edi
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x70]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 5
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x23c], 7
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A098]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x244], 8
        call ext_00467670
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x23c], 7
        call dword ptr [mem_009242F4]
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        mov byte ptr [esp + 0x23c], 9
        call ext_004658C0
        mov eax, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call ext_00462EC0
        call ext_00465B40
        mov edi, eax
        mov esi, dword ptr [edi]
        lea ecx, [esp + 0x18]
        add esi, 0x1c
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        call ext_004658C0
        mov eax, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call ext_00462F00
        lea ecx, [esp + 0xb]
        mov byte ptr [esp + 0x23c], 7
        call ext_0040BF20
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x23c], 4
        call dword ptr [mem_00924FF4]
        pop edi
    L_0043302c:
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x238], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x238], 0
        call ext_006A5F56
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x238], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x230]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x238
        ret
    }
}

// [0x00437750] sub_00437750 (540 bytes)
extern "C" void ext_00430E20();
extern "C" void ext_00492520();
extern "C" void ext_00584A10();
extern "C" void ext_00584C00();
extern "C" void ext_00594000();
extern "C" void ext_00673C20();
extern "C" void ext_006AD940();
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_00925634;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_00437750(void* self, int edx_unused, int arg1) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov esi, eax
        push 0x0
        mov ecx, esi
        call ext_00492520
        mov edi, eax
        push 0x1
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call ext_00492520
        test edi, edi
        mov dword ptr [esp + 0x10], eax
        je L_872
        xor ebx, ebx
        call ext_00594000
        mov esi, dword ptr [eax + 0x26c]
        mov eax, dword ptr [esi + 0x1c]
        mov eax, dword ptr [eax]
        add esi, 0x18
        mov edi, esi
        mov ebp, eax
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebp
        mov edi, edi
L_7B0:
        test edi, edi
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x24], ecx
        je L_7BF
        cmp edi, esi
        je L_7C5
L_7BF:
        call dword ptr [mem_00925134]
L_7C5:
        cmp ebp, dword ptr [esp + 0x24]
        je L_872
        test edi, edi
        jne L_7D9
        call dword ptr [mem_00925134]
L_7D9:
        cmp ebp, dword ptr [edi + 0x4]
        jne L_7E4
        call dword ptr [mem_00925134]
L_7E4:
        mov eax, dword ptr [ebp + 0x28]
        cmp eax, dword ptr [esp + 0x14]
        je L_803
        lea ecx, [esp + 0x18]
        add ebx, 0x1
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        jmp L_7B0
L_803:
        lea esi, [eax + 0x4]
        mov ecx, esi
        call ext_00584C00
        test al, al
        mov ecx, esi
        je L_828
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0xace1c4
        jmp L_83B
L_828:
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0xace1c0
L_83B:
        lea edx, [esp + 0x1c]
        push edx
        call ext_00430E20
        add esp, 0xc
        mov ecx, eax
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [eax + 0x4]
        add ebx, 0x8237
        push ebx
        push 0x0
        push ecx
        call dword ptr [mem_00925634]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
L_872:
        cmp dword ptr [esp + 0x10], 0x0
        je L_962
        xor ebx, ebx
        call ext_00594000
        mov esi, dword ptr [eax + 0x26c]
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx]
        add esi, 0x18
        mov edi, esi
        mov ebp, eax
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebp
        mov edi, edi
L_89E:
        test edi, edi
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x24], eax
        je L_8AF
        cmp edi, esi
        je L_8B5
L_8AF:
        call dword ptr [mem_00925134]
L_8B5:
        cmp ebp, dword ptr [esp + 0x24]
        je L_962
        test edi, edi
        jne L_8C9
        call dword ptr [mem_00925134]
L_8C9:
        cmp ebp, dword ptr [edi + 0x4]
        jne L_8D4
        call dword ptr [mem_00925134]
L_8D4:
        mov eax, dword ptr [ebp + 0x28]
        cmp eax, dword ptr [esp + 0x10]
        je L_8F3
        lea ecx, [esp + 0x18]
        add ebx, 0x1
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        jmp L_89E
L_8F3:
        lea esi, [eax + 0x4]
        mov ecx, esi
        call ext_00584C00
        test al, al
        mov ecx, esi
        je L_918
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0xace1c4
        jmp L_92B
L_918:
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0xace1c0
L_92B:
        lea ecx, [esp + 0x1c]
        push ecx
        call ext_00430E20
        add esp, 0xc
        mov ecx, eax
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [edx + 0x4]
        add ebx, 0x8237
        push ebx
        push 0x0
        push eax
        call dword ptr [mem_00925634]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
L_962:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}

extern "C" void ext_00437750();
extern "C" void ext_00437970();
extern "C" void ext_00492550();

// [0x00437DF0] sub_00437DF0 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_00437DF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492550
        test al, al
        je L_false
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_00437750
        pop esi
        ret 0xc
    L_false:
        mov ecx, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x1
        push ecx
        push edi
        mov ecx, esi
        call ext_00437970
        mov edx, dword ptr [esp + 0x14]
        push 0x0
        push edx
        push edi
        mov ecx, esi
        call ext_00437970
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x004317A0] sub_004317A0 (548 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00462EC0();
extern "C" void ext_00462F00();
extern "C" void ext_004658C0();
extern "C" void ext_00465B40();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A0A4;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004317A0(void* self) {
    __asm {
        push -1
        push 0x879f8e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x22c
        push esi
        push 0xad7a88
        lea eax, [esp + 0x50]
        push 0xb593ac
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x240], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 2
        push 0
        mov ecx, 0xb59240
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        lea ecx, [esp + 0x84]
        call ext_006A5F68
        mov byte ptr [esp + 0x238], 1
        call ext_006A5EDE
        mov ecx, dword ptr [mem_0093A0A4]
        push ecx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F0]
        lea edx, [esp + 8]
        push edx
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x240], 2
        call ext_00430FC0
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x238], 4
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0xdc]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x68]
        call ext_006A5F62
        cmp eax, 1
        jne L_00431976
        push edi
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x240], 5
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 6
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A0A4]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x244], 9
        call ext_00467670
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        call ext_006A5EDE
        call ext_004658C0
        mov eax, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call ext_00462EC0
        call ext_00465B40
        mov edi, eax
        mov esi, dword ptr [edi]
        lea ecx, [esp + 0x18]
        add esi, 0x10
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        call ext_004658C0
        mov eax, dword ptr [eax + 0x5c]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call ext_00462F00
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x23c], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb]
        mov byte ptr [esp + 0x23c], 4
        call ext_0040BF20
        pop edi
    L_00431976:
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x238], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x238], 0
        call ext_006A5F56
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x238], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x230]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x238
        ret
    }
}

// [0x00433DB0] sub_00433DB0 (565 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00465B30();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A0AC;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00433DB0(void* self) {
    __asm {
        push -1
        push 0x87a5ba
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x22c
        push esi
        push 0xad7a88
        lea eax, [esp + 0x34]
        push 0xb593e4
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x240], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0
        mov ecx, 0xb59278
        call dword ptr [mem_00924FF0]
        push eax
        push 1
        lea ecx, [esp + 0x84]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A0AC]
        push ecx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x23c], 1
        call dword ptr [mem_009242F0]
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x240], 2
        call ext_00430FC0
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x238], 4
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0xdc]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x68]
        call ext_006A5F62
        cmp eax, 1
        jne L_00433F97
        push edi
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x240], 5
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 6
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A0AC]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x244], 9
        call ext_00467670
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov esi, dword ptr [eax + 0x30]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x70]
        call ext_006A5F5C
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov byte ptr [esp + 0x23c], 0xa
        call dword ptr [mem_00924300]
        mov edx, dword ptr [edi + 0x148]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x23c], 8
        call dword ptr [mem_009242F4]
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x23c], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xf]
        mov byte ptr [esp + 0x23c], 4
        call ext_0040BF20
        pop edi
    L_00433F97:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x238], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x238], 0
        call ext_006A5F56
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x238], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x230]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x238
        ret
    }
}

// [0x004329D0] sub_004329D0 (574 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00465B40();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A098;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;
extern "C" int mem_0087A37B;
extern "C" int mem_00AD7A88;
extern "C" int mem_00B59390;
extern "C" int mem_00B59224;
extern "C" int mem_0092F8F4;

extern "C" __declspec(naked) void __fastcall fn_004329D0(void* self) {
    __asm {
        push ebp
        lea ebp, [esp - 0x68]
        sub esp, 0x68
        push -1
        push offset mem_0087A37B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1e8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        push offset mem_00AD7A88
        lea eax, [ebp]
        push offset mem_00B59390
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0x0
        push esi
        lea ecx, [ebp]
        mov dword ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0x0
        mov ecx, offset mem_00B59224
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A098]
        push ecx
        lea ecx, [ebp + 0x5c]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_009242F0]
        lea edx, [ebp + 0x5c]
        push edx
        lea eax, [ebp + 0x38]
        push eax
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x2
        call ext_00430FC0
        lea ecx, [ebp + 0x5c]
        mov byte ptr [ebp - 0x4], 0x4
        call dword ptr [mem_009242F4]
        lea ecx, [ebp + 0x38]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp - 0x180]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F62
        cmp eax, 0x1
        jne L_skip_0x432BCE
        lea edx, [ebp + 0x58]
        push edx
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 0x5
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [ebp - 0x2c]
        call dword ptr [mem_00924FE4]
        mov bl, 0x7
        lea ecx, [ebp + 0x58]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A098]
        push eax
        lea ecx, [ebp + 0x64]
        call dword ptr [mem_009242F0]
        lea ecx, [ebp - 0x2c]
        push ecx
        lea edx, [ebp + 0x64]
        push edx
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x8
        call ext_00467670
        lea ecx, [ebp + 0x64]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60D6
        mov byte ptr [ebp - 0x4], 0xa
        call ext_00465B40
        mov edi, eax
        lea eax, [ebp + 0x64]
        push eax
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F5C
        mov esi, dword ptr [edi]
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 0xb
        add esi, 0x20
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        lea ecx, [ebp + 0x64]
        call dword ptr [mem_009242F4]
        mov dword ptr [ebp - 0x4], 0x9
        jmp L_end_0x432BB6
L_catch_0x432B52:
        mov eax, dword ptr [mem_00924E90]
        mov esi, dword ptr [ebp + 0x54]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        add esi, 0xc
        push esi
        push ecx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        lea edx, [ebp + 0x1c]
        push offset mem_0092F8F4
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        push 0x0
        push 0x0
        lea ecx, [ebp + 0x1c]
        mov byte ptr [ebp - 0x4], 0xd
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp + 0x1c]
        mov byte ptr [ebp - 0x4], 0xc
        call dword ptr [mem_00924FF4]
        mov eax, offset fn_004329D0 + 0x1E4
        ret
        mov bl, 0x7
L_end_0x432BB6:
        lea ecx, [ebp + 0x63]
        mov byte ptr [ebp - 0x4], bl
        call ext_0040BF20
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0x4
        call dword ptr [mem_00924FF4]
L_skip_0x432BCE:
        lea ecx, [ebp + 0x38]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x1f4]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006A5F56
        lea ecx, [ebp]
        mov dword ptr [ebp - 0x4], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add ebp, 0x68
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00432C10] sub_00432C10 (579 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00430FC0();
extern "C" void ext_00462E10();
extern "C" void ext_00462E50();
extern "C" void ext_004658C0();
extern "C" void ext_00465B40();
extern "C" void ext_00467670();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A60D6();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_0093A098;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FCC;
extern "C" int mem_00924FF4;
extern "C" int mem_0087A3E2;
extern "C" int mem_00AD7A88;
extern "C" int mem_00B59390;
extern "C" int mem_00B59224;
extern "C" int mem_0092F8F4;

extern "C" __declspec(naked) void __fastcall fn_00432C10(void* self) {
    __asm {
        push ebp
        lea ebp, [esp - 0x68]
        sub esp, 0x68
        push -1
        push offset mem_0087A3E2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1e8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        push offset mem_00AD7A88
        lea eax, [ebp]
        push offset mem_00B59390
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0x0
        push esi
        lea ecx, [ebp]
        mov dword ptr [ebp - 0x4], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0x0
        mov ecx, offset mem_00B59224
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A098]
        push ecx
        lea ecx, [ebp + 0x60]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_009242F0]
        lea edx, [ebp + 0x60]
        push edx
        lea eax, [ebp + 0x1c]
        push eax
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x2
        call ext_00430FC0
        lea ecx, [ebp + 0x60]
        mov byte ptr [ebp - 0x4], 0x4
        call dword ptr [mem_009242F4]
        lea ecx, [ebp + 0x1c]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp - 0x180]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F62
        cmp eax, 0x1
        jne L_skip_0x432E13
        lea edx, [ebp + 0x58]
        push edx
        lea ecx, [ebp - 0x1f4]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 0x5
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [ebp + 0x38]
        call dword ptr [mem_00924FE4]
        mov bl, 0x7
        lea ecx, [ebp + 0x58]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A098]
        push eax
        lea ecx, [ebp + 0x5c]
        call dword ptr [mem_009242F0]
        lea ecx, [ebp + 0x38]
        push ecx
        lea edx, [ebp + 0x5c]
        push edx
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 0x8
        call ext_00467670
        lea ecx, [ebp + 0x5c]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 0x4]
        call ext_006A60D6
        mov byte ptr [ebp - 0x4], 0xa
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        lea eax, [ebp + 0x38]
        push eax
        call ext_00462E10
        call ext_00465B40
        lea ecx, [ebp + 0x38]
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x18]
        mov ecx, esi
        call eax
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        lea edx, [ebp + 0x38]
        push edx
        call ext_00462E50
        mov dword ptr [ebp - 0x4], 0x9
        jmp L_end_0x432DFB
        mov eax, dword ptr [mem_00924E90]
        mov esi, dword ptr [ebp + 0x54]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        add esi, 0xc
        push esi
        push ecx
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        lea edx, [ebp - 0x2c]
        push offset mem_0092F8F4
        push edx
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        push 0x0
        push 0x0
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0xc
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0xb
        call dword ptr [mem_00924FF4]
        mov eax, offset fn_00432C10 + 0x1E9
        ret
        mov bl, 0x7
L_end_0x432DFB:
        lea ecx, [ebp + 0x67]
        mov byte ptr [ebp - 0x4], bl
        call ext_0040BF20
        lea ecx, [ebp + 0x38]
        mov byte ptr [ebp - 0x4], 0x4
        call dword ptr [mem_00924FF4]
L_skip_0x432E13:
        lea ecx, [ebp + 0x1c]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x1f4]
        mov byte ptr [ebp - 0x4], 0x0
        call ext_006A5F56
        lea ecx, [ebp]
        mov dword ptr [ebp - 0x4], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add ebp, 0x68
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x004314E0] sub_004314E0 (700 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_0042F3C0();
extern "C" void ext_0042F450();
extern "C" void ext_0044B7C0();
extern "C" void ext_006A5FA4();
extern "C" int mem_00879F1D;
extern "C" int mem_00B593AC;
extern "C" int mem_00B59240;

extern "C" __declspec(naked) void __fastcall fn_004314E0(void* self) {
    __asm {
        push ebp
        lea ebp, [esp - 0x78]
        sub esp, 0x78
        push -1
        push offset mem_00879F1D
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3b0
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        push offset mem_00AD7A88
        lea eax, [ebp + 0x1c]
        mov esi, ecx
        push offset mem_00B593AC
        push eax
        mov dword ptr [ebp + 0x68], esi
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [ebp + 0x1c]
        mov dword ptr [ebp - 0x4], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0
        mov ecx, offset mem_00B59240
        call dword ptr [mem_00924FF0]
        push eax
        push 1
        lea ecx, [ebp - 0x3bc]
        call ext_006A5F68
        mov ecx, dword ptr [mem_0093A0A4]
        push ecx
        lea ecx, [ebp + 0x6c]
        mov byte ptr [ebp - 0x4], 1
        call dword ptr [mem_009242F0]
        lea edx, [ebp + 0x6c]
        push edx
        lea eax, [ebp]
        push eax
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 2
        call ext_00430FC0
        lea ecx, [ebp + 0x6c]
        mov byte ptr [ebp - 0x4], 4
        call dword ptr [mem_009242F4]
        lea ecx, [ebp]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp - 0x348]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [ebp - 0x3bc]
        call ext_006A5F62
        cmp eax, 1
        jne L_skip_0x43175c
        lea edx, [ebp + 0x58]
        push edx
        lea ecx, [ebp - 0x3bc]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [ebp - 0x4], 5
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [ebp + 0x3c]
        call dword ptr [mem_00924FE4]
        mov bl, 7
        lea ecx, [ebp + 0x58]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A0A4]
        push eax
        lea ecx, [ebp + 0x74]
        call dword ptr [mem_009242F0]
        lea ecx, [ebp + 0x3c]
        push ecx
        lea edx, [ebp + 0x74]
        push edx
        mov ecx, esi
        mov byte ptr [ebp - 0x4], 8
        call ext_00467670
        lea ecx, [ebp + 0x74]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_009242F4]
        push 0
        lea ecx, [ebp - 0x1f4]
        call ext_0042F450
        lea ecx, [ebp - 0x1f4]
        mov byte ptr [ebp - 0x4], 9
        call ext_006A5FA4
        cmp eax, 1
        jne L_skip_0x431741
        call ext_006A5EDE
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        mov byte ptr [ebp - 0x4], 0xb
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        lea eax, [ebp + 0x3c]
        push eax
        call ext_00462E10
        call ext_00465B40
        movzx ecx, byte ptr [ebp - 0x2d]
        mov dl, byte ptr [ebp - 0x2e]
        mov byte ptr [ebp + 0x74], cl
        movzx ecx, byte ptr [ebp - 0x30]
        mov edi, eax
        mov al, byte ptr [ebp - 0x2f]
        mov byte ptr [ebp + 0x60], cl
        lea ecx, [ebp + 0x3c]
        mov byte ptr [ebp + 0x5c], dl
        mov byte ptr [ebp + 0x64], al
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp + 0x74]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x5c]
        push ecx
        mov ecx, dword ptr [ebp + 0x64]
        push ecx
        mov ecx, dword ptr [ebp + 0x60]
        push ecx
        push eax
        mov ecx, edi
        call edx
        call ext_004658C0
        mov ecx, dword ptr [eax + 0x5c]
        lea eax, [ebp + 0x3c]
        push eax
        call ext_00462E50
        mov dword ptr [ebp - 0x4], 0xa
        jmp short L_skip_0x431726
        mov ecx, dword ptr [mem_00924E90]
        mov esi, dword ptr [ebp + 0x38]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        add esi, 0xc
        push esi
        push edx
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        push esi
        lea eax, [ebp - 0x2c]
        push offset mem_0092F8F4
        push eax
        call dword ptr [mem_00924FCC]
        add esp, 0xc
        push 0
        push 0
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0xd
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 0x4], 0xc
        call dword ptr [mem_00924FF4]
        mov eax, offset fn_004314E0 + 0x241
        ret
        mov esi, dword ptr [ebp + 0x68]
        mov bl, 7
L_skip_0x431726:
        mov ecx, dword ptr [esi + 0x100]
        test ecx, ecx
        je short L_skip_0x431735
        call ext_0044B7C0
L_skip_0x431735:
        lea ecx, [ebp + 0x73]
        mov byte ptr [ebp - 0x4], 9
        call ext_0040BF20
L_skip_0x431741:
        lea ecx, [ebp - 0x1f4]
        mov byte ptr [ebp - 0x4], bl
        call ext_0042F3C0
        lea ecx, [ebp + 0x3c]
        mov byte ptr [ebp - 0x4], 4
        call dword ptr [mem_00924FF4]
L_skip_0x43175c:
        lea ecx, [ebp]
        mov byte ptr [ebp - 0x4], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x3bc]
        mov byte ptr [ebp - 0x4], 0
        call ext_006A5F56
        lea ecx, [ebp + 0x1c]
        mov dword ptr [ebp - 0x4], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add ebp, 0x78
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0043F8B0] sub_0043F8B0 (296 bytes)
extern "C" void ext_0043E690();
extern "C" void ext_0043F7B0();
extern "C" void ext_005DF300();
extern "C" void ext_005DF6B0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __fastcall fn_0043F8B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + 0x14]
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        lea esi, [edi + 0xa4]
        push eax
        mov ecx, esi
        call ext_005DF6B0
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        mov ebp, dword ptr [esi + 0x4]
        je f43_L1
        cmp ebx, esi
        je f43_L2
f43_L1:
        call dword ptr [mem_00925134]
f43_L2:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, ebp
        je f43_ret0
        push eax
        push ebx
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_005DF300
        lea esi, [edi + 0xb0]
        mov edi, dword ptr [esi + 0xc]
        add edi, dword ptr [esi + 0x10]
        lea edx, [esp + 0x24]
        push edx
        sub esp, 0xc
        mov ebx, esp
        mov dword ptr [ebx], 0
        mov eax, dword ptr [esi + 0xc]
        cmp eax, edi
        ja f43_B1
        mov ecx, dword ptr [esi + 0x10]
        add ecx, eax
        cmp edi, ecx
        jbe f43_B2
f43_B1:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp f43_B3
f43_B2:
        mov ebp, dword ptr [mem_00925134]
f43_B3:
        mov dword ptr [ebx + 0x8], edi
        sub esp, 0xc
        mov dword ptr [ebx + 0x4], esi
        mov ebx, dword ptr [esi + 0xc]
        mov edi, esp
        mov dword ptr [edi], 0
        mov eax, dword ptr [esi + 0xc]
        cmp eax, ebx
        ja f43_B4
        mov edx, dword ptr [esi + 0x10]
        add edx, eax
        cmp ebx, edx
        jbe f43_B5
f43_B4:
        call ebp
f43_B5:
        lea eax, [esp + 0x30]
        push eax
        mov dword ptr [edi + 0x4], esi
        mov dword ptr [edi + 0x8], ebx
        call ext_0043E690
        mov eax, dword ptr [esi + 0xc]
        mov edi, dword ptr [esi + 0x10]
        add edi, eax
        add esp, 0x20
        cmp eax, edi
        jbe f43_B6
        call ebp
f43_B6:
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je f43_B7
        cmp ebx, esi
        je f43_B8
f43_B7:
        call ebp
f43_B8:
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, edi
        je f43_done
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax + 0x8], ecx
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0x4], ebx
        call ext_0043F7B0
f43_done:
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
f43_ret0:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_00430E20();
extern "C" void ext_00492520();
extern "C" void ext_00492550();
extern "C" void ext_00584A10();
extern "C" void ext_00594000();
extern "C" void ext_00673C20();
extern "C" void ext_006AD940();
extern "C" int mem_00925134;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_00925634;
extern "C" int mem_009242F4;
extern "C" int mem_009256E8;

// [0x00437460] sub_00437460 (750 bytes)
extern "C" __declspec(naked) void __fastcall fn_00437460(void* self, int edx_unused, int arg0, int arg1) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov esi, eax
        mov ecx, esi
        call ext_00492550
        test al, al
        je L_43764f
        push 0x0
        mov ecx, esi
        call ext_00492520
        mov edi, eax
        push 0x1
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call ext_00492520
        test edi, edi
        mov dword ptr [esp + 0x10], eax
        je L_437573
        mov dword ptr [esp + 0x2c], 0x0
        call ext_00594000
        mov esi, dword ptr [eax + 0x26c]
        mov eax, dword ptr [esi + 0x1c]
        mov eax, dword ptr [eax]
        add esi, 0x18
        mov edi, esi
        mov ebx, eax
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], ebx
    L_4374d3:
        test edi, edi
        mov ebp, dword ptr [esi + 0x4]
        je L_4374de
        cmp edi, esi
        je L_4374e4
    L_4374de:
        call dword ptr [mem_00925134]
    L_4374e4:
        cmp ebx, ebp
        je L_437573
        test edi, edi
        jne L_4374f6
        call dword ptr [mem_00925134]
    L_4374f6:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_437501
        call dword ptr [mem_00925134]
    L_437501:
        mov eax, dword ptr [ebx + 0x28]
        cmp eax, dword ptr [esp + 0x14]
        je L_437522
        add dword ptr [esp + 0x2c], 0x1
        lea ecx, [esp + 0x1c]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x1c]
        jmp L_4374d3
    L_437522:
        lea ecx, [eax + 0x4]
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        push 0x00ace1bc
        push ecx
        call ext_00430E20
        add esp, 0xc
        mov ecx, eax
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [eax + 0x4]
        add edx, 0x81d3
        push edx
        push 0x0
        push ecx
        call dword ptr [mem_00925634]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
    L_437573:
        cmp dword ptr [esp + 0x10], 0x0
        je L_437744
        mov dword ptr [esp + 0x2c], 0x0
        call ext_00594000
        mov esi, dword ptr [eax + 0x26c]
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx]
        add esi, 0x18
        mov edi, esi
        mov ebx, eax
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], ebx
    L_4375a5:
        test edi, edi
        mov ebp, dword ptr [esi + 0x4]
        je L_4375b0
        cmp edi, esi
        je L_4375b6
    L_4375b0:
        call dword ptr [mem_00925134]
    L_4375b6:
        cmp ebx, ebp
        je L_437744
        test edi, edi
        jne L_4375c8
        call dword ptr [mem_00925134]
    L_4375c8:
        cmp ebx, dword ptr [edi + 0x4]
        jne L_4375d3
        call dword ptr [mem_00925134]
    L_4375d3:
        mov eax, dword ptr [ebx + 0x28]
        cmp eax, dword ptr [esp + 0x10]
        je L_4375f4
        add dword ptr [esp + 0x2c], 0x1
        lea ecx, [esp + 0x1c]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x20]
        mov edi, dword ptr [esp + 0x1c]
        jmp L_4375a5
    L_4375f4:
        lea ecx, [eax + 0x4]
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x18]
        push 0x00ace1bc
        push eax
        call ext_00430E20
        add esp, 0xc
        mov ecx, eax
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [edx + 0x4]
        add ecx, 0x81d3
        push ecx
        push 0x0
        push eax
        call dword ptr [mem_00925634]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x8
    L_43764f:
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        mov eax, dword ptr [ecx + 0x24]
        lea ecx, [eax + 0x4]
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [edx + 0x4]
        push 0x81d3
        push 0x400
        push 0x0
        push eax
        call dword ptr [mem_009256E8]
        call ext_00594000
        mov esi, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [esi + 0x1c]
        mov ebx, dword ptr [ecx]
        add esi, 0x18
        mov ebp, esi
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebx
        mov edi, 0x81d4
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_4376b0:
        test ebp, ebp
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], edx
        je L_4376bf
        cmp ebp, esi
        je L_4376c5
    L_4376bf:
        call dword ptr [mem_00925134]
    L_4376c5:
        cmp ebx, dword ptr [esp + 0x18]
        je L_437720
        test ebp, ebp
        jne L_4376d5
        call dword ptr [mem_00925134]
    L_4376d5:
        cmp ebx, dword ptr [ebp + 0x4]
        jne L_4376e0
        call dword ptr [mem_00925134]
    L_4376e0:
        mov eax, dword ptr [ebx + 0x28]
        lea ecx, [eax + 0x4]
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [eax + 0x4]
        push edi
        push 0x400
        push 0x0
        push ecx
        call dword ptr [mem_009256E8]
        lea ecx, [esp + 0x1c]
        add edi, 0x1
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x1c]
        jmp L_4376b0
    L_437720:
        mov ecx, 0x00ace1c8
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push eax
        push 0x10
        push edx
        call dword ptr [mem_00925634]
    L_437744:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x8
    }
}

// [0x004388B0] sub_004388B0 (1416 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00410D10();
extern "C" void ext_00430EF0();
extern "C" void ext_00434AB0();
extern "C" void ext_0044BC40();
extern "C" void ext_0044BC50();
extern "C" void ext_00492A50();
extern "C" void ext_0049AD40();
extern "C" int mem_00925134;
extern "C" int mem_00925634;
extern "C" int mem_00A2F3C4;
extern "C" int mem_00A2F3C8;
extern "C" int mem_00A2F3CC;
extern "C" int mem_00A2F3D0;
extern "C" int mem_00A2F3D4;
extern "C" int mem_00A2F3D8;
extern "C" int mem_00A2F3DC;
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_004388B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push	ebp
        mov	ebp, esp
        and	esp, -0x8
        push	-0x1
        push	0x87aa30
        mov	eax, dword ptr fs:[0x0]
        push	eax
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x40
        push	ebx
        push	esi
        xor	eax, eax
        mov	esi, ecx
        push	edi
        mov	dword ptr [esp + 0x18], esi
        mov	dword ptr [esp + 0x3c], eax
        mov	dword ptr [esp + 0x40], eax
        mov	dword ptr [esp + 0x44], eax
        mov	ecx, dword ptr [esi + 0x100]
        cmp	ecx, eax
        mov	dword ptr [esp + 0x54], eax
        je L_004388FD
        lea	eax, [esp + 0x38]
        push	eax
        call ext_0044BC40
    L_004388FD:
        mov	ecx, dword ptr [esi + 0x100]
        call ext_0044BC50
        mov	esi, dword ptr [esp + 0x3c]
        mov	edi, dword ptr [mem_00925134]
        mov	dword ptr [esp + 0x10], eax
        mov	eax, dword ptr [esp + 0x40]
        cmp	esi, eax
        mov	dword ptr [esp + 0x14], eax
        jbe L_0043892C
        call	edi
        mov	eax, dword ptr [esp + 0x40]
        mov	esi, dword ptr [esp + 0x3c]
    L_0043892C:
        cmp	esi, eax
        mov	ebx, eax
        jbe L_00438942
        call	edi
        mov	eax, dword ptr [esp + 0x40]
        mov	esi, dword ptr [esp + 0x3c]
        cmp	esi, eax
        jbe L_00438942
        call	edi
    L_00438942:
        mov	ecx, dword ptr [esp + 0x10]
        push	ecx
        push	ebx
        push	esi
        lea	edi, [esp + 0x44]
        mov	dword ptr [esp + 0x30], esi
        call ext_00430EF0
        xor	ebx, ebx
        add	esp, 0xc
        cmp	edi, ebx
        mov	esi, eax
        je L_00438967
        mov	edx, edi
        cmp	edi, edx
        je L_0043896D
    L_00438967:
        call	dword ptr [mem_00925134]
    L_0043896D:
        cmp	esi, dword ptr [esp + 0x14]
        mov	esi, dword ptr [ebp + 0xc]
        mov	edi, dword ptr [mem_00925634]
        je L_0043898D
        mov	eax, dword ptr [esi + 0x4]
        push	0x92fd88
        push	0x814e
        push	ebx
        push	eax
        call	edi
    L_0043898D:
        mov	ecx, dword ptr [mem_00A2F3C4]
        mov	edx, dword ptr [esi + 0x4]
        push	ecx
        push	0x8139
        push	0x208
        push	edx
        call	edi
        mov	eax, dword ptr [mem_00A2F3C8]
        mov	ecx, dword ptr [esi + 0x4]
        push	eax
        push	0x813a
        push	0x200
        push	ecx
        call	edi
        mov	edx, dword ptr [mem_00A2F3CC]
        mov	eax, dword ptr [esi + 0x4]
        push	edx
        push	0x813b
        push	0x200
        push	eax
        call	edi
        mov	ecx, dword ptr [mem_00A2F3D0]
        mov	edx, dword ptr [esi + 0x4]
        push	ecx
        push	0x813d
        push	0x200
        push	edx
        call	edi
        mov	eax, dword ptr [mem_00A2F3D4]
        mov	ecx, dword ptr [esi + 0x4]
        push	eax
        push	0x813e
        push	0x200
        push	ecx
        call	edi
        mov	edx, dword ptr [mem_00A2F3D8]
        mov	eax, dword ptr [esi + 0x4]
        push	edx
        push	0x813f
        push	0x200
        push	eax
        call	edi
        mov	ecx, dword ptr [mem_00A2F3DC]
        mov	edx, dword ptr [esi + 0x4]
        push	ecx
        push	0x8140
        push	0x200
        push	edx
        call	edi
        mov	dword ptr [esp + 0x2c], ebx
        mov	dword ptr [esp + 0x30], ebx
        mov	dword ptr [esp + 0x34], ebx
        mov	ecx, dword ptr [esp + 0x18]
        mov	ecx, dword ptr [ecx + 0x100]
        lea	eax, [esp + 0x28]
        push	eax
        mov	byte ptr [esp + 0x58], 0x1
        call ext_0044BC40
        mov	eax, dword ptr [esp + 0x2c]
        cmp	eax, ebx
        je L_00438DF1
        mov	ecx, dword ptr [esp + 0x30]
        sub	ecx, eax
        mov	eax, 0x92492493
        imul	ecx
        add	edx, ecx
        sar	edx, 0x4
        mov	eax, edx
        shr	eax, 0x1f
        add	eax, edx
        je L_00438DF1
        mov	ecx, dword ptr [esi + 0x4]
        push	ebx
        push	ebx
        push	0x800
        push	ecx
        call	edi
        mov	ebx, dword ptr [esp + 0x2c]
        cmp	ebx, dword ptr [esp + 0x30]
        jbe L_00438A99
        call	dword ptr [mem_00925134]
    L_00438A99:
        cmp	ebx, dword ptr [esp + 0x30]
        lea	eax, [esp + 0x28]
        mov	dword ptr [esp + 0x18], eax
        mov	dword ptr [esp + 0x1c], ebx
        jb L_00438AB1
        call	dword ptr [mem_00925134]
    L_00438AB1:
        cmp	ebx, dword ptr [esp + 0x30]
        lea	edx, [ebx + 0x1c]
        mov	dword ptr [esp + 0x1c], edx
        jb L_00438AC4
        call	dword ptr [mem_00925134]
    L_00438AC4:
        mov	ecx, ebx
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8142
        push	0x200
        push	eax
        call	edi
        mov	eax, dword ptr [esp + 0x30]
        cmp	dword ptr [esp + 0x2c], eax
        mov	ebx, eax
        jbe L_00438AEF
        call	dword ptr [mem_00925134]
    L_00438AEF:
        lea	ecx, [esp + 0x28]
        cmp	dword ptr [esp + 0x18], ecx
        je L_00438AFF
        call	dword ptr [mem_00925134]
    L_00438AFF:
        mov	eax, dword ptr [esp + 0x1c]
        cmp	eax, ebx
        je L_00438DF1
        mov	edx, dword ptr [esp + 0x18]
        cmp	eax, dword ptr [edx + 0x8]
        mov	ebx, eax
        jb L_00438B1E
        call	dword ptr [mem_00925134]
        mov	eax, ebx
    L_00438B1E:
        add	eax, 0x1c
        mov	dword ptr [esp + 0x1c], eax
        mov	eax, dword ptr [esp + 0x18]
        test	eax, eax
        jne L_00438B33
        call	dword ptr [mem_00925134]
    L_00438B33:
        mov	eax, dword ptr [esp + 0x18]
        cmp	ebx, dword ptr [eax + 0x8]
        jb L_00438B42
        call	dword ptr [mem_00925134]
    L_00438B42:
        mov	ecx, ebx
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8143
        push	0x200
        push	eax
        call	edi
        mov	eax, dword ptr [esp + 0x30]
        cmp	dword ptr [esp + 0x2c], eax
        mov	ebx, eax
        jbe L_00438B6D
        call	dword ptr [mem_00925134]
    L_00438B6D:
        lea	ecx, [esp + 0x28]
        cmp	dword ptr [esp + 0x18], ecx
        je L_00438B7D
        call	dword ptr [mem_00925134]
    L_00438B7D:
        cmp	dword ptr [esp + 0x1c], ebx
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8144
        push	0x200
        push	eax
        call	edi
        mov	eax, dword ptr [esp + 0x30]
        cmp	dword ptr [esp + 0x2c], eax
        mov	ebx, eax
        jbe L_00438BC9
        call	dword ptr [mem_00925134]
    L_00438BC9:
        mov	eax, dword ptr [esp + 0x18]
        test	eax, eax
        je L_00438BD9
        lea	ecx, [esp + 0x28]
        cmp	eax, ecx
        je L_00438BDF
    L_00438BD9:
        call	dword ptr [mem_00925134]
    L_00438BDF:
        cmp	dword ptr [esp + 0x1c], ebx
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8145
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8146
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8147
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8148
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x8149
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x814a
        push	0x200
        push	eax
        call	edi
        lea	ecx, [esp + 0x20]
        push	ecx
        lea	ecx, [esp + 0x2c]
        call ext_00410D10
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_0049AD40
        test	al, al
        je L_00438DF1
        push	0x0
        lea	edx, [esp + 0x24]
        push	edx
        lea	ecx, [esp + 0x20]
        call ext_00434AB0
        mov	ecx, eax
        call ext_00492A50
        mov	ecx, eax
        call	dword ptr [mem_00924FF0]
        push	eax
        mov	eax, dword ptr [esi + 0x4]
        push	0x814b
        push	0x200
        push	eax
        call	edi
    L_00438DF1:
        mov	esi, dword ptr [esi + 0x4]
        mov	ecx, dword ptr [ebp + 0x8]
        mov	edx, dword ptr [ecx + 0x4]
        push	0x92fd7c
        push	esi
        push	0x10
        push	edx
        call	edi
        lea	ecx, [esp + 0x28]
        mov	byte ptr [esp + 0x54], 0x0
        call ext_004026E0
        lea	ecx, [esp + 0x38]
        mov	dword ptr [esp + 0x54], 0xffffffff
        call ext_004026E0
        mov	ecx, dword ptr [esp + 0x4c]
        pop	edi
        pop	esi
        mov	dword ptr fs:[0x0], ecx
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret	0x8
    }
}


// [0x0043A100] sub_0043A100 (745 bytes)
extern "C" void ext_00433370();
extern "C" void ext_00437460();
extern "C" void ext_00437DF0();
extern "C" void ext_004388B0();
extern "C" void ext_0044B6A0();
extern "C" void ext_006A6166();
extern "C" void ext_006A616C();
extern "C" void ext_006A62FE();
extern "C" void ext_006A65E0();
extern "C" int mem_00925638;
extern "C" int mem_00925634;
extern "C" int mem_00925618;

extern "C" __declspec(naked) void __fastcall fn_0043A100(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        push    -0x1
        push    0x87ac58
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x40
        push    ebx
        push    esi
        mov     eax, 0x92bd7c
        xor     ebx, ebx
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebx
        mov     esi, dword ptr [mem_00925638]
        mov     byte ptr [esp + 0x54], 0x6
        call    esi
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_006A616C
        call    esi
        push    eax
        lea     ecx, [esp + 0x3c]
        call    ext_006A616C
        call    esi
        push    eax
        lea     ecx, [esp + 0x34]
        call    ext_006A616C
        call    esi
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_006A616C
        call    esi
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_006A616C
        call    esi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    ext_006A616C
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [mem_00925634]
        push    0x92ff48
        push    0x8168
        push    ebx
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x14]
        push    0x92ff38
        push    0x8169
        push    ebx
        push    ecx
        call    esi
        mov     edx, dword ptr [esp + 0x14]
        push    0x92ff28
        push    0x8110
        push    ebx
        push    edx
        call    esi
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    0x800
        push    eax
        call    esi
        push    0x92ff18
        push    0x8030
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    ecx
        call    esi
        mov     edx, dword ptr [esp + 0x14]
        push    0x92ff04
        push    0x802f
        push    ebx
        push    edx
        call    esi
        mov     eax, dword ptr [esp + 0x14]
        push    0x92fef4
        push    0x82a1
        push    ebx
        push    eax
        call    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    ext_00433370
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    0x800
        push    eax
        call    esi
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    ext_00437460
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    0x800
        push    eax
        call    esi
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    ext_00437DF0
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    0x800
        push    ecx
        call    esi
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    ext_004388B0
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    0x800
        push    ecx
        call    esi
        mov     edx, dword ptr [esp + 0x14]
        push    0x92efb8
        push    0x6b
        push    ebx
        push    edx
        call    esi
        mov     eax, dword ptr [esp + 0x14]
        push    0x92efa8
        push    0x6d
        push    ebx
        push    eax
        call    esi
        push    0x92a94c
        push    0x8111
        push    ebx
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        call    esi
        call    ext_006A62FE
        cmp     eax, ebx
        je      L_43a2fe
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     eax, dword ptr [edx + 0x7c]
        call    eax
        jmp     L_43a300
    L_43a2fe:
        xor     eax, eax
    L_43a300:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    eax
        push    ecx
        push    edx
        push    0x100
        lea     ecx, [esp + 0x24]
        call    ext_006A65E0
        mov     esi, eax
        cmp     esi, ebx
        je      L_43a350
        mov     ecx, dword ptr [edi + 0x100]
        call    ext_0044B6A0
        call    ext_006A62FE
        cmp     eax, ebx
        je      L_43a33d
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     eax, dword ptr [edx + 0x7c]
        call    eax
        jmp     L_43a33f
    L_43a33d:
        xor     eax, eax
    L_43a33f:
        mov     ecx, dword ptr [eax + 0x20]
        push    ebx
        push    esi
        push    0x111
        push    ecx
        call    dword ptr [mem_00925618]
    L_43a350:
        mov     esi, 0x92bd7c
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + 0x54], 0x5
        mov     dword ptr [esp + 0x18], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x40]
        mov     byte ptr [esp + 0x54], 0x4
        mov     dword ptr [esp + 0x40], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x54], 0x3
        mov     dword ptr [esp + 0x20], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x54], 0x2
        mov     dword ptr [esp + 0x28], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x30], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x54], bl
        mov     dword ptr [esp + 0x38], esi
        call    ext_006A6166
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x54], 0xffffffff
        mov     dword ptr [esp + 0x10], esi
        call    ext_006A6166
        mov     ecx, dword ptr [esp + 0x4c]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}

// [0x004319D0] sub_004319D0 (1737 bytes)
extern "C" void ext_00430380();
extern "C" void ext_00430FC0();
extern "C" void ext_00465B40();
extern "C" void ext_00467670();
extern "C" void ext_00664ED0();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A6232();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00A2F3E0;
extern "C" int mem_0093A0A0;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924300;

extern "C" __declspec(naked) void __fastcall fn_004319D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x87a113
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x344
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x360]
        xor ebx, ebx
        push 0x928b5d
        mov byte ptr [esp + 0x13], bl
        call dword ptr [mem_00924FD4]
        mov ebp, dword ptr [esp + 0x364]
        push 0x928b5d
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FE4]
        mov ecx, edi
        mov dword ptr [esp + 0x358], ebx
        call ext_00430380
        test al, al
        je L_431A7E
        push 0xad7a88
        lea eax, [esp + 0x20]
        push 0xad7c2c
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x35c], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x358], bl
        call dword ptr [mem_00924FF4]
        jmp L_431E5D
    L_431A7E:
        push esi
        mov esi, dword ptr [mem_00924FD0]
        push 0xad7ac0
        lea ecx, [esp + 0x120]
        push 0xad7aa4
        push ecx
        call esi
        push 0xad7adc
        push eax
        lea edx, [esp + 0xf8]
        push edx
        mov byte ptr [esp + 0x374], 2
        call esi
        push 0xad7b84
        push eax
        lea eax, [esp + 0xcc]
        push eax
        mov byte ptr [esp + 0x380], 3
        call esi
        push 0xad7bbc
        push eax
        lea ecx, [esp + 0xa0]
        push ecx
        mov byte ptr [esp + 0x38c], 4
        call esi
        push 0xad7c2c
        push eax
        lea edx, [esp + 0x138]
        push edx
        mov byte ptr [esp + 0x398], 5
        call esi
        push 0xad7c64
        push eax
        lea eax, [esp + 0x17c]
        push eax
        mov byte ptr [esp + 0x3a4], 6
        call esi
        add esp, 0x48
        push 0xad7c80
        push eax
        lea ecx, [esp + 0xd0]
        push ecx
        mov byte ptr [esp + 0x368], 7
        call esi
        push 0xad7c48
        push eax
        lea edx, [esp + 0x6c]
        push edx
        mov byte ptr [esp + 0x374], 8
        call esi
        push 0xb59358
        push eax
        lea eax, [esp + 0xb0]
        push eax
        mov byte ptr [esp + 0x380], 9
        call esi
        push 0xad7a88
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        mov byte ptr [esp + 0x38c], 0xa
        call esi
        add esp, 0x30
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x360], 0xb
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x35c], 0xa
        call dword ptr [mem_00924FF4]
        mov byte ptr [esp + 0x35c], 9
        lea ecx, [esp + 0x90]
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x35c], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0x35c], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x138]
        mov byte ptr [esp + 0x35c], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x100]
        mov byte ptr [esp + 0x35c], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0x35c], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0x35c], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xe4]
        mov byte ptr [esp + 0x35c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x11c]
        mov byte ptr [esp + 0x35c], bl
        call dword ptr [mem_00924FF4]
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x11c]
        call eax
        test al, al
        je L_431E5C
        push 0xad7ac0
        lea ecx, [esp + 0x174]
        push 0xad7aa4
        push ecx
        call esi
        push 0xad7adc
        push eax
        lea edx, [esp + 0x34]
        push edx
        mov byte ptr [esp + 0x374], 0xc
        call esi
        push 0xb59358
        push eax
        lea eax, [esp + 0xb0]
        push eax
        mov byte ptr [esp + 0x380], 0xd
        call esi
        push 0xad7bbc
        push eax
        lea ecx, [esp + 0x84]
        push ecx
        mov byte ptr [esp + 0x38c], 0xe
        call esi
        push 0xad7c10
        push eax
        lea edx, [esp + 0x100]
        push edx
        mov byte ptr [esp + 0x398], 0xf
        call esi
        push 0xad7c2c
        push eax
        lea eax, [esp + 0x17c]
        push eax
        mov byte ptr [esp + 0x3a4], 0x10
        call esi
        add esp, 0x48
        push 0xad7c64
        push eax
        lea ecx, [esp + 0x108]
        push ecx
        mov byte ptr [esp + 0x368], 0x11
        call esi
        push 0xad7c80
        push eax
        lea edx, [esp + 0x88]
        push edx
        mov byte ptr [esp + 0x374], 0x12
        call esi
        push 0xad7c48
        push eax
        lea eax, [esp + 0xcc]
        push eax
        mov byte ptr [esp + 0x380], 0x13
        call esi
        push 0xb59358
        push eax
        lea ecx, [esp + 0x110]
        push ecx
        mov byte ptr [esp + 0x38c], 0x14
        call esi
        push 0xad7a88
        push eax
        lea edx, [esp + 0x154]
        push edx
        mov byte ptr [esp + 0x398], 0x15
        call esi
        add esp, 0x3c
        mov byte ptr [esp + 0x35c], 0x16
        push eax
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x11c]
        mov byte ptr [esp + 0x35c], 0x15
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xe4]
        mov byte ptr [esp + 0x35c], 0x14
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0x35c], 0x13
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0x35c], 0x12
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x100]
        mov byte ptr [esp + 0x35c], 0x11
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x138]
        mov byte ptr [esp + 0x35c], 0x10
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0x35c], 0xf
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x35c], 0xe
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x90]
        mov byte ptr [esp + 0x35c], 0xd
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x35c], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x170]
        mov byte ptr [esp + 0x35c], bl
        call dword ptr [mem_00924FF4]
    L_431E5C:
        pop esi
    L_431E5D:
        push ebx
        push edi
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0x928b5d
        push 0x928b5d
        push 0x1
        lea ecx, [esp + 0x1a4]
        call ext_006A5F68
        mov eax, dword ptr [esp + 0x1fc]
        mov dword ptr [eax + 0x30], 0x92f904
        mov ecx, dword ptr [esp + 0x1fc]
        mov edx, dword ptr [mem_00A2F3E0]
        mov dword ptr [ecx + 0x18], edx
        mov eax, dword ptr [mem_0093A0A0]
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x35c], 0x17
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x154]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x360], 0x18
        call ext_00430FC0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x358], 0x1a
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x150]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x1fc]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x188]
        call ext_006A5F62
        cmp eax, 1
        jne L_43202C
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x18c]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x358], 0x1b
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x358], 0x1d
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [mem_0093A0A0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x360], 0x1e
        call ext_00467670
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x358], 0x1d
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esp + 0x1fc]
        mov ecx, dword ptr [eax + 0x18]
        lea edx, [esp + 0x10]
        mov dword ptr [mem_00A2F3E0], ecx
        push edx
        lea ecx, [esp + 0x18c]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x358], 0x1f
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x360]
        push eax
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x358], 0x1d
        call dword ptr [mem_009242F4]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x18c]
        call ext_006A6232
        mov ecx, eax
        mov byte ptr [esp + 0x358], 0x20
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0xf], 1
        mov byte ptr [esp + 0x358], 0x1a
        call dword ptr [mem_00924FF4]
    L_43202C:
        push ebp
        call ext_00664ED0
        add esp, 4
        push eax
        mov ecx, ebp
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x150]
        mov byte ptr [esp + 0x358], 0x17
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x188]
        mov byte ptr [esp + 0x358], bl
        call ext_006A5F56
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x358], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x350]
        mov al, byte ptr [esp + 0xf]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x350
        ret 8
    }
}

// [0x0043A8F0] sub_0043A8F0 (32 bytes)
extern "C" void ext_0043A580();
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_0043A8F0(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    int val = (*(int (__thiscall***)(void*, int))obj)[0x9c / 4](obj, 1);
    ((void (__thiscall*)(void*, int))ext_0043A580)(self, val);
}

// [0x00434120] sub_00434120 (111 bytes)
extern "C" void ext_00493940();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00434120(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x881709
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        lea esi, [ecx + 0x18c]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FDC]
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        push esi
        mov ecx, eax
        call ext_006AD940
        mov ecx, eax
        call ext_00493940
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x1c
    }
}

// [0x00434930] sub_00434930 (150 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_00493940();
extern "C" void ext_00493840();
extern "C" void ext_004925D0();
extern "C" void ext_004303F0();
extern "C" void ext_00430410();
extern "C" void ext_0044B700();
extern "C" void ext_0044BC60();
extern "C" void ext_0044B7C0();
extern "C" void ext_00493D30();

extern "C" __declspec(naked) void __fastcall fn_00434930(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 26Ch]
        call ext_006AD940
        mov edi, eax
        lea eax, [esi + 18Ch]
        push eax
        mov ecx, edi
        call ext_00493940
        mov ecx, edi
        call ext_00493840
        test al, al
        je L_no_match
        push 0
        mov ecx, edi
        call ext_004925D0
        test al, al
        je L_try_one
        mov ecx, esi
        call ext_004303F0
        jmp L_after
    L_try_one:
        push 1
        mov ecx, edi
        call ext_004925D0
        test al, al
        je L_after
        mov ecx, esi
        call ext_00430410
    L_after:
        mov ecx, dword ptr [esi + 100h]
        call ext_0044B700
        mov ecx, dword ptr [esi + 100h]
        call ext_0044BC60
        mov ecx, dword ptr [esi + 100h]
        call ext_0044B7C0
        call ext_00594000
        mov ecx, dword ptr [eax + 26Ch]
        call ext_006AD940
        pop edi
        mov ecx, eax
        pop esi
        jmp ext_00493D30
    L_no_match:
        pop edi
        pop esi
        ret
    }
}

// [0x00437200] sub_00437200 (39 bytes)
extern "C" int mem_0092FB54;
extern "C" void ext_0043DCD0();

extern "C" __declspec(naked) void __fastcall fn_00437200(void* self) {
    __asm {
        push esi
        push offset mem_0092FB54
        push 1
        mov esi, ecx
        call ext_00436FA0
        mov ecx, dword ptr [esi + 10Ch]
        call ext_0043DCD0
        push 0
        push 0
        mov ecx, esi
        call ext_00436A50
        pop esi
        ret
    }
}

extern "C" void ext_00419F20();
extern "C" void ext_0043E090();
extern "C" int mem_0092BD70;

// [0x0043E140] sub_0043E140 (191 bytes)
extern "C" __declspec(naked) void __fastcall fn_0043E140(void* self) {
    __asm {
        sub esp, 0x10
        fld qword ptr [esp + 0x18]
        push esi
        fadd qword ptr [mem_0092BD70]
        mov esi, ecx
        fst qword ptr [esp + 0xc]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp + 0x1c]
        fild dword ptr [esp + 0x1c]
        fsub qword ptr [esi + 0x110]
        fmul qword ptr [esi + 0x120]
        fadd qword ptr [esi + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x1c]
        fld qword ptr [esp + 0x1c]
        fistp dword ptr [esp + 0x4]
        fld qword ptr [esp + 0xc]
        fstp qword ptr [esp + 0xc]
        fld qword ptr [esp + 0xc]
        fistp dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        call ext_0043E090
        cmp byte ptr [esi + 0x178], 0x0
        je loc_0043E1F8
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x180]
        mov ecx, dword ptr [esi + 0xf8]
        push edx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esi + 0x17c]
        push eax
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esi + 0xdc]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        lea edx, [esp + 0x28]
        push edx
        lea eax, [esp + 0x14]
        push eax
        push ecx
        lea ecx, [esi + 0x1b4]
        mov dword ptr [esp + 0x20], 0x0
        call ext_00419F20
    loc_0043E1F8:
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

extern "C" void ext_0043F3A0();
extern "C" void ext_0043D9B0();

// [0x0043F490] sub_0043F490 (42 bytes)
extern "C" char __stdcall fn_0043F490(char* ptr) {
    if (!ptr)
        return 0;
    if (ptr[0x88]) {
        typedef char (__stdcall *fn_t)(char*);
        return ((fn_t)ext_0043D9B0)(ptr);
    }
    typedef char (__stdcall *fn2_t)(char*, int);
    return ((fn2_t)ext_0043F3A0)(ptr, 0);
}

extern "C" void ext_0043DA60();
extern "C" void ext_0043F3A0();

// [0x0043F460] sub_0043F460 (45 bytes)
struct Dummy43F460 {};
extern "C" bool __fastcall fn_0043F460(void* self, int edx_unused, void* a1) {
    if (!a1) {
        return false;
    }
    *(void**)((char*)self + 0xa0) = a1;
    ((void (__cdecl*)())ext_0043DA60)();
    union {
        void (*p)();
        bool (__thiscall Dummy43F460::*m)(void*, int);
    } u;
    u.p = ext_0043F3A0;
    return (((Dummy43F460*)self)->*u.m)(a1, 0);
}

// [0x00434FF0] sub_00434FF0 (65 bytes)
extern "C" void ext_00433B70();
extern "C" void ext_00465B30();
extern "C" void ext_00465B40();
extern "C" void ext_00469410();
extern "C" void ext_004694E0();
extern "C" void __fastcall fn_00434FF0(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    void** vt = *(void***)obj;
    ((void (__thiscall*)(void*, int))vt[0x1f4 / 4])(obj, 1);
    void* p1 = ((void* (__stdcall*)(int))ext_00465B30)(2);
    if (!((bool (__thiscall*)(void*))ext_004694E0)(p1)) {
        void* p2 = ((void* (__stdcall*)(int))ext_00465B30)(2);
        ((void (__thiscall*)(void*))ext_00469410)(p2);
        ((void (__thiscall*)(void*, int))ext_00433B70)(self, 2);
    }
}

// [0x00435040] sub_00435040 (65 bytes)
extern "C" void __fastcall fn_00435040(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    void** vt = *(void***)obj;
    ((void (__thiscall*)(void*, int))vt[0x1f8 / 4])(obj, 1);
    void* p1 = ((void* (__stdcall*)(int))ext_00465B30)(2);
    if (!((bool (__thiscall*)(void*))ext_004694E0)(p1)) {
        void* p2 = ((void* (__stdcall*)(int))ext_00465B30)(2);
        ((void (__thiscall*)(void*))ext_00469410)(p2);
        ((void (__thiscall*)(void*, int))ext_00433B70)(self, 2);
    }
}

// [0x00435090] sub_00435090 (65 bytes)
extern "C" void __fastcall fn_00435090(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    void** vt = *(void***)obj;
    ((void (__thiscall*)(void*, int))vt[0x1fc / 4])(obj, 1);
    void* p1 = ((void* (__stdcall*)(int))ext_00465B30)(2);
    if (!((bool (__thiscall*)(void*))ext_004694E0)(p1)) {
        void* p2 = ((void* (__stdcall*)(int))ext_00465B30)(2);
        ((void (__thiscall*)(void*))ext_00469410)(p2);
        ((void (__thiscall*)(void*, int))ext_00433B70)(self, 2);
    }
}

// [0x004350E0] sub_004350E0 (65 bytes)
extern "C" void ext_00433B70();
extern "C" void ext_00465B30();
extern "C" void ext_00465B40();
extern "C" void ext_00469410();
extern "C" void ext_004694E0();
extern "C" void __fastcall fn_004350E0(void* self) {
    void* obj = ((void* (__cdecl*)())ext_00465B40)();
    void** vt = *(void***)obj;
    ((void (__thiscall*)(void*, int))vt[0x200 / 4])(obj, 1);
    void* p1 = ((void* (__stdcall*)(int))ext_00465B30)(2);
    if (!((bool (__thiscall*)(void*))ext_004694E0)(p1)) {
        void* p2 = ((void* (__stdcall*)(int))ext_00465B30)(2);
        ((void (__thiscall*)(void*))ext_00469410)(p2);
        ((void (__thiscall*)(void*, int))ext_00433B70)(self, 2);
    }
}

// [0x00435C70] sub_00435C70 (72 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_004A59A0();
extern "C" __declspec(naked) bool __fastcall fn_00435C70(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_435C8E
        pop edi
        xor al, al
        pop esi
        ret 0x4
L_435C8E:
        cmp edi, 0x3fffffff
        jbe L_435C9B
        call ext_00405FB0
L_435C9B:
        push eax
        push edi
        call ext_004A59A0
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        add esp, 0x8
        lea eax, [eax + 4*edi]
        mov dword ptr [esi + 0xc], eax
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00438E40] sub_00438E40 (232 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00430EF0();
extern "C" void ext_0044BC40();
extern "C" void ext_0044BC50();
extern "C" void ext_00465B30();
extern "C" void ext_00468FB0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00438E40(void* self) {
    __asm {
        push -1
        push 0x8a1908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov ecx, dword ptr [esi + 0x100]
        lea eax, [esp + 0x20]
        push eax
        mov dword ptr [esp + 0x3c], ebx
        call ext_0044BC40
        mov ecx, dword ptr [esi + 0x100]
        call ext_0044BC50
        mov esi, dword ptr [esp + 0x24]
        mov edi, dword ptr [mem_00925134]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x28]
        cmp esi, eax
        mov dword ptr [esp + 0x14], eax
        jbe loc_438EAF
        call edi
        mov eax, dword ptr [esp + 0x28]
        mov esi, dword ptr [esp + 0x24]
loc_438EAF:
        cmp esi, eax
        mov ebp, eax
        jbe loc_438EC5
        call edi
        mov eax, dword ptr [esp + 0x28]
        mov esi, dword ptr [esp + 0x24]
        cmp esi, eax
        jbe loc_438EC5
        call edi
loc_438EC5:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push ebp
        push esi
        lea edi, [esp + 0x2c]
        mov dword ptr [esp + 0x28], esi
        call ext_00430EF0
        add esp, 0xc
        cmp edi, ebx
        mov esi, eax
        je loc_438EE8
        mov edx, edi
        cmp edi, edx
        je loc_438EEE
loc_438EE8:
        call dword ptr [mem_00925134]
loc_438EEE:
        cmp esi, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        je loc_438F08
        mov eax, dword ptr [esp]
        push eax
        call ext_00465B30
        mov ecx, eax
        call ext_00468FB0
loc_438F08:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x004352D0] sub_004352D0 (130 bytes)
extern "C" void ext_0040CE00();
extern "C" void ext_0040CE60();
extern "C" void ext_004332B0();
extern "C" void ext_004332D0();
extern "C" void ext_00465B30();
extern "C" void ext_006A5FA4();

extern "C" __declspec(naked) void __fastcall fn_004352D0(void* self) {
    __asm {
        push -1
        push 0x0087A67B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3B4
        push esi
        mov esi, ecx
        call ext_004332B0
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 0x34]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        lea ecx, [esp + 0x4]
        call ext_0040CE00
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x3C0], 0x0
        call ext_006A5FA4
        mov ecx, esi
        call ext_004332D0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x3C0], -1
        call ext_0040CE60
        mov ecx, dword ptr [esp + 0x3B8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x3C0
        ret
    }
}

// [0x0043B380] sub_0043B380 (89 bytes)
extern "C" void ext_0043AC70();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0043B380(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x1e4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0043AC70
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

// [0x00434A00] sub_00434A00 (109 bytes)
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" void ext_00492550();
extern "C" void ext_00455AD0();
extern "C" void ext_00455AF0();
extern "C" void ext_00455440();
extern "C" void ext_006A5E72();
extern "C" void ext_006A651A();

extern "C" __declspec(naked) void __fastcall fn_00434A00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492550
        test al, al
        mov ecx, dword ptr [esi + 0x15c]
        je L_no
        call ext_00455AD0
        mov ecx, dword ptr [esi + 0x15c]
        push 0
        call ext_006A5E72
        pop esi
        ret
    L_no:
        push 5
        call ext_006A5E72
        mov ecx, dword ptr [esi + 0x15c]
        call ext_00455AF0
        mov ecx, dword ptr [esi + 0x15c]
        call ext_00455440
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x158]
        push 0
        push 1
        push eax
        mov ecx, esi
        call ext_006A651A
    L_end:
        pop esi
        ret
    }
}

// [0x0043AB10] sub_0043AB10 (90 bytes)
extern "C" void ext_0043A7C0();
extern "C" void ext_006A6C87();
extern "C" int mem_00ACE238;

extern "C" __declspec(naked) void __fastcall fn_0043AB10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87ad0e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ACE238], al
        jne done_0043AB10
        or dword ptr [mem_00ACE238], eax
        mov ecx, 0xace214
        mov dword ptr [esp + 0x8], 0x0
        call ext_0043A7C0
        push 0x9151a0
        call ext_006A6C87
        add esp, 0x4
    done_0043AB10:
        mov ecx, dword ptr [esp]
        mov eax, 0xace214
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" void ext_004923A0();

// [0x004302B0] sub_004302B0 (91 bytes)
extern "C" __declspec(naked) void __fastcall fn_004302B0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push 0x92f8a8
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        lea eax, [esp]
        push eax
        mov dword ptr [esp + 0x28], 0x0
        call ext_004923A0
        add esp, 0x4
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00436800] sub_00436800 (463 bytes)
extern "C" void ext_0040BF20();
extern "C" void ext_00435D00();
extern "C" void ext_00440620();
extern "C" void ext_006788E0();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60D6();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00924E4C;
extern "C" int mem_00924E50;
extern "C" int mem_00924E54;
extern "C" int mem_00924E94;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E58;
extern "C" __declspec(naked) void __fastcall fn_00436800(void* self) {
    __asm {
        push -1
        push 0x0087a7c3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb0
        mov eax, dword ptr [mem_00924E90]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [mem_00924FA0]
        push 0x0092fb30
        push ecx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        call ext_006A5EDE
        mov ecx, dword ptr [eax + 4]
        call ext_006A60D6
        mov dword ptr [esp + 0xc8], 0
        pushad
        cpuid
        popad
        rdtsc
        mov dword ptr [esp + 0x20], edx
        mov ebp, eax
        mov esi, 0x3e8
        mov edi, edi
    L_loop:
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edx + 0x108]
        call ext_00440620
        sub esi, 1
        jnz L_loop
        pushad
        cpuid
        popad
        rdtsc
        push 1
        push 2
        lea ecx, [esp + 0x48]
        mov edi, edx
        mov esi, eax
        call dword ptr [mem_00924E4C]
        mov byte ptr [esp + 0xc8], 1
        call ext_006788E0
        mov edx, dword ptr [mem_00924E90]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0xc]
        push edx
        sub esi, ebp
        sbb edi, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x14], esi
        mov edx, edi
        and edi, 0x7fffffff
        mov dword ptr [esp + 0x18], edi
        fild qword ptr [esp + 0x14]
        and edx, 0x80000000
        mov dword ptr [esp + 0x18], edx
        xor ebx, ebx
        mov dword ptr [esp + 0x14], ebx
        fild qword ptr [esp + 0x14]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, eax
        and eax, 0x7fffffff
        fchs
        mov dword ptr [esp + 0x18], eax
        faddp st(1), st(0)
        and ecx, 0x80000000
        fild qword ptr [esp + 0x14]
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x14], ebx
        fild qword ptr [esp + 0x14]
        push 0x0092fb2c
        sub esp, 8
        lea eax, [esp + 0x50]
        fchs
        faddp st(1), st(0)
        fdivp st(1), st(0)
        fstp qword ptr [esp]
        push 0x0092fb08
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E50]
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924E54]
        mov edx, dword ptr [mem_00924E90]
        push edx
        push eax
        mov eax, dword ptr [mem_00924FA0]
        push eax
        mov byte ptr [esp + 0xd4], 2
        call dword ptr [mem_00924E94]
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0xc8], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0xc8], bl
        call dword ptr [mem_00924E58]
        lea ecx, [esp + 0x1b]
        mov dword ptr [esp + 0xc8], 0xffffffff
        call ext_0040BF20
        mov ecx, dword ptr [esp + 0xc0]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xbc
        ret
    }
}

// [0x0043F4C0] sub_0043F4C0 (96 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0043F4C0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_0043DA60
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L_a
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_a:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        cmp esi, ebx
        je L_end
        cmp esi, dword ptr [edi + 0x8]
        jb L_c
        call dword ptr [mem_00925134]
L_c:
        mov eax, dword ptr [esi]
        push 0
        push eax
        mov ecx, ebp
        call ext_0043F3A0
        cmp esi, dword ptr [edi + 0x8]
        jb L_d
        call dword ptr [mem_00925134]
L_d:
        add esi, 0x4
        jmp L_a
L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0043C0F0] sub_0043C0F0 (101 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0043BCA0();
extern "C" void ext_0043BF00();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0043C0F0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        push ebx
        mov edi, ecx
        call ext_0043BCA0
        lea eax, [esp + 0x14]
        lea esi, [edi + 0x14]
        push eax
        mov ecx, esi
        call ext_0041A920
        mov ebp, dword ptr [mem_00925134]
        mov dword ptr [ebx + 0x44], edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        mov byte ptr [esp + 0x14], 0
        jbe L_0043C127
        call ebp
L_0043C127:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe L_0043C131
        call ebp
L_0043C131:
        cmp esi, esi
        je L_0043C137
        call ebp
L_0043C137:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, edi
        push ecx
        sub edx, ebx
        sar edx, 2
        push edx
        push edi
        push ebx
        call ext_0043BF00
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}
