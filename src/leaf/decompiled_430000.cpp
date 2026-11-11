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
