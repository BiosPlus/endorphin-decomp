// Decompiled translation unit: src/leaf/decompiled_450000.cpp

extern "C" void ext_00454BB0();
extern "C" int mem_00925694;
extern "C" void fn_00455240();

extern "C" void fn_00455240();
// Stores arg0 into this->[0x120], replaces stack arg0 with it, then tail-jumps to 0x00454BB0 with ecx = this + 0x10c.
extern "C" __declspec(naked) void __fastcall fn_00454BE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x120], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0x10c
        jmp ext_00454BB0
    }
}

// [0x00455CD0] sub_00455CD0 (26 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_00455CB0();

extern "C" __declspec(naked) void __fastcall fn_00455CD0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x98]
        cmp eax, 0xa
        je take_path
        cmp eax, 0xb
        je take_path
        jmp ext_004090C0
    take_path:
        jmp ext_00455CB0
    }
}

// [0x00455AD0] sub_00455AD0 (28 bytes)
extern "C" void ext_00455820();
extern "C" int mem_00928B5D;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_00455AD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_00928B5D
        lea ecx, [esi + 0x13c]
        call dword ptr [mem_00924FD4]
        mov ecx, esi
        pop esi
        jmp ext_00455820
    }
}

// [0x00455280] sub_00455280 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_00455280(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x009367A4
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x004584C0] sub_004584C0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_004584C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax], 0x00937394
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0xc], ecx
        ret 0xc
    }
}

// [0x00450A80] sub_00450A80 (8 bytes)
extern "C" void ext_0044F780();

extern "C" __declspec(naked) void __fastcall fn_00450A80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        call ext_0044F780
        ret 0x8
    }
}

// [0x0045E4A0] sub_0045E4A0 (14 bytes)
extern "C" void ext_006A5E72();

extern "C" __declspec(naked) void __fastcall fn_0045E4A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x2d0]
        push 0
        call ext_006A5E72
        ret
    }
}

// [0x00451AE0] sub_00451AE0 (16 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00451AE0(void* self, int edx_unused, void* a1) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x14
        call ext_00451670
        ret 0x4
    }
}

// [0x004543F0] sub_004543F0 (16 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_004543F0(void* self) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x14
        call ext_005A6300
        ret 0x4
    }
}

// [0x00452100] sub_00452100 (17 bytes)
extern "C" void __stdcall ext_00451CE0(int a, int b);

extern "C" __declspec(naked) void __fastcall fn_00452100(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x74]
        push eax
        push edx
        call ext_00451CE0
        ret 0x4
    }
}

// [0x00458840] sub_00458840 (21 bytes)
// Pushes arg0 and &arg1 (pointer into the caller's stack args), loads ecx = this->[0x54], then calls 0x004586E0 and returns 0xc.
extern "C" void ext_004586E0();

extern "C" __declspec(naked) void __fastcall fn_00458840(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x54]
        push eax
        lea edx, [esp + 0xc]
        push edx
        call ext_004586E0
        ret 0xc
    }
}

// [0x004535B0] sub_004535B0 (22 bytes)
extern "C" void ext_00453430();
extern "C" void ext_006A5FDA();

extern "C" void __fastcall fn_004535B0(void* self) {
    int r = ((int (__fastcall*)(void*))ext_00453430)(self);
    ((void (__thiscall*)(void*, int))ext_006A5FDA)((char*)self + 0x2cc, r);
}

// [0x00453230] sub_00453230 (24 bytes)
extern "C" void ext_00450B00();
extern "C" void ext_00452830();

extern "C" __declspec(naked) void __fastcall fn_00453230(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x74], 0
        je done
        call ext_00450B00
        mov ecx, esi
        pop esi
        jmp ext_00452830
    done:
        pop esi
        ret
    }
}

// [0x00453FE0] sub_00453FE0 (24 bytes)
extern "C" void ext_00453620();
extern "C" void __fastcall fn_00453FE0(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    if (a1 == *(int*)((char*)self + 0x74)) {
        *(int*)((char*)self + 0x74) = 0;
        ext_00453620();
    }
}

// [0x00455CF0] sub_00455CF0 (25 bytes)
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5ECC();

extern "C" __declspec(naked) void __fastcall fn_00455CF0(void* self) {
    __asm {
        sub esp, 0x54
        push ecx
        lea ecx, [esp + 0x4]
        call ext_006A5ECC
        lea ecx, [esp]
        call ext_006A5EBA
        add esp, 0x54
        ret
    }
}

// [0x0045BBF0] sub_0045BBF0 (26 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_0045BBF0(void* self) {
    unsigned char* esi = static_cast<unsigned char*>(self);
    ext_006A5C6E();
    *reinterpret_cast<unsigned int*>(esi + 0x54) = 0;
    *(esi + 0x58) = 0;
    *reinterpret_cast<unsigned int*>(esi) = 0x00937D4C;
    return esi;
}

// [0x00453E00] sub_00453E00 (27 bytes)
extern "C" void ext_0044E190();
extern "C" void ext_00453250();
extern "C" void __fastcall fn_00453E00(void* self) {
    ext_0044E190();
    if (*(reinterpret_cast<unsigned char*>(self) + 0xa9) != 0) {
        typedef void (__fastcall *Tail)(void*);
        reinterpret_cast<Tail>(ext_00453250)(self);
    }
}

// [0x00455F40] sub_00455F40 (27 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_00455CB0();

extern "C" __declspec(naked) int __cdecl fn_00455F40() {
    __asm {
        call ext_00455CB0
        test eax, eax
        jne fail
        call ext_004090C0
        test eax, eax
        jne fail
        mov eax, 1
        ret
    fail:
        xor eax, eax
        ret
    }
}

// [0x00453FC0] sub_00453FC0 (28 bytes)
extern "C" void ext_00451180();
extern "C" void ext_00453620();

extern "C" void __fastcall fn_00453FC0(void* self, int edx_unused, int a1) {
    typedef unsigned char (__fastcall *Fn1)(void*, int, int);
    typedef void (__fastcall *Fn2)(void*);
    if (reinterpret_cast<Fn1>(ext_00451180)(self, edx_unused, a1)) {
        reinterpret_cast<Fn2>(ext_00453620)(self);
    }
}

// [0x00458670] sub_00458670 (30 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_004584A0();

extern "C" __declspec(naked) void __fastcall fn_00458670(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esp + 8]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0x54]
        call ext_004584A0
        pop esi
        ret 0xc
    }
}

// [0x00456250] sub_00456250 (33 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00456250(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x8c], 0
        je no_obj
        mov ecx, dword ptr [ecx + 0x90]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        call edx
        ret 0xc
    no_obj:
        call ext_006A5EA8
        ret 0xc
    }
}

// [0x004582B0] sub_004582B0 (32 bytes)
extern "C" void ext_00456250();

extern "C" __declspec(naked) void __fastcall fn_004582B0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp byte ptr [ecx + 0x129], 0
        jne done
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 8]
        push eax
        mov eax, dword ptr [esp + 8]
        push edx
        push eax
        call ext_00456250
    done:
        ret 0xc
    }
}

// [0x004562C0] sub_004562C0 (33 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_004562C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xdc], 0
        je skip
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x188]
        call edx
    skip:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0xc
    }
}

// [0x00455D10] sub_00455D10 (34 bytes)
extern "C" void ext_006A678A();
extern "C" __declspec(naked) void __fastcall fn_00455D10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006A678A
        mov dword ptr [esi + 0xe8], 0
        pop esi
        ret 0x8
    }
}

// [0x00455410] sub_00455410 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_00455410(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xc8]
        mov edx, dword ptr [eax + 0x148]
        lea ecx, [esi + 0xc8]
        call edx
        test eax, eax
        setne al
        mov byte ptr [esi + 0x158], al
        pop esi
        ret
    }
}

// [0x004584F0] sub_004584F0 (37 bytes)
extern "C" void __fastcall ext_004584C0(void* self, int edx_unused, int a1, int a2, int a3);

extern "C" void* __fastcall fn_004584F0(void* self, int edx_unused, int a1, int a2, int a3) {
    ext_004584C0(self, a1, a1, a2, a3);
    *(int*)self = 0x9373c4;
    return self;
}

// [0x00458520] sub_00458520 (37 bytes)
extern "C" void* __fastcall fn_00458520(void* self, int edx_unused, int a1, int a2, int a3) {
    ext_004584C0(self, a1, a1, a2, a3);
    *(int*)self = 0x009373f4;
    return self;
}

// [0x00458550] sub_00458550 (37 bytes)
extern "C" void* __fastcall fn_00458550(void* self, int edx_unused, int a1, int a2, int a3) {
    fn_004584C0(self, a1, a1, a2, a3);
    *reinterpret_cast<unsigned int*>(self) = 0x00937424;
    return self;
}

// [0x00454C00] sub_00454C00 (37 bytes)
extern "C" void ext_006A651A();

extern "C" __declspec(naked) void __fastcall fn_00454C00(void* self) {
    __asm {
        cmp dword ptr [esp + 4], 0x14
        push esi
        mov esi, ecx
        jne short skip_call
        mov ecx, dword ptr [esi + 0x88]
        push 0
        push 0
        push esi
        call ext_006A651A
skip_call:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0xc
    }
}

// [0x00453B90] sub_00453B90 (39 bytes)
extern "C" void ext_00453680();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00453B90(void* self) {
    __asm {
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xcc]
        push 0x147
        push eax
        call dword ptr [mem_00925694]
        mov dword ptr [esi + 0xa4], eax
        mov ecx, esi
        pop esi
        jmp ext_00453680
    }
}

// [0x004545A0] sub_004545A0 (39 bytes)
extern "C" int mem_009256BC;

extern "C" __declspec(naked) int __fastcall fn_004545A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jne nonzero
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_009256BC]
        ret 0x4
    nonzero:
        mov eax, dword ptr [eax + 0x20]
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_009256BC]
        ret 0x4
    }
}

// [0x00456340] sub_00456340 (39 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00456340(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xdc], 0
        je skip_virtual
        cmp dword ptr [esp + 8], esi
        je skip_virtual
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x188]
        call edx
    skip_virtual:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 4
    }
}

// [0x00455C80] sub_00455C80 (40 bytes)
extern "C" void ext_006A6094();
extern "C" __declspec(naked) int __fastcall fn_00455C80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_006A6094
        cmp eax, -1
        jne short L_00455C98
        or eax, eax
        pop esi
        ret 4
L_00455C98:
        mov dword ptr [esi + 0xe8], 0
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x00458580] sub_00458580 (41 bytes)
extern "C" void* __fastcall fn_00458580(void* self, int edx_unused, int a1, int a2, int a3) {
    fn_004584C0(self, a1, a1, a2, a3);
    *reinterpret_cast<unsigned int*>(self) = 0x00937454;
    *(reinterpret_cast<unsigned char*>(self) + 0x14) = 0;
    return self;
}

// [0x0045B6C0] sub_0045B6C0 (41 bytes)
extern "C" void ext_006A6820();
extern "C" __declspec(naked) int __fastcall fn_0045B6C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0
        call ext_006A6820
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00452DF0] sub_00452DF0 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_00452DF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xc80]
        mov edx, dword ptr [eax + 0x148]
        lea ecx, [esi + 0xc80]
        call edx
        test eax, eax
        setne al
        mov byte ptr [esi + 0xa9], al
        mov ecx, esi
        pop esi
        jmp ext_00452830
    }
}

// [0x00458470] sub_00458470 (47 bytes)
extern "C" void __fastcall fn_00458470(void* self, int edx_unused, int* a1, int a2) {
    char* s = (char*)self;
    *(int*)(s + 0x14) = a1[0];
    *(int*)(s + 0x18) = a1[1];
    *(int*)(s + 0x1c) = a1[0];
    *(int*)(s + 0x20) = a1[1];
    void* obj = *(void**)(s + 0x10);
    void** vtbl = *(void***)obj;
    typedef void (__fastcall *Fn)(void*, int, int*, int);
    ((Fn)vtbl[4])(obj, (int)vtbl, a1, a2);
}

// [0x00458650] sub_00458650 (32 bytes)
extern "C" void ext_00458470();
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_00458650(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esi + 0x54]
        call ext_00458470
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        ret 0xc
    }
}

// [0x00455F10] sub_00455F10 (47 bytes)
extern "C" void ext_006A5FFE();
extern "C" void ext_006A63B8();
extern "C" int mem_0092407C;
extern "C" __declspec(naked) void __fastcall fn_00455F10(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xfc]
        mov ecx, edi
        call ext_006A63B8
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov dword ptr [esi + 0x104], eax
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0045B6F0] sub_0045B6F0 (48 bytes)
extern "C" void ext_00584C10();

struct Obj_0045B6F0 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    virtual bool v30();
};

extern "C" int __fastcall fn_0045B6F0(void* self, int edx_unused, Obj_0045B6F0* obj) {
    if (obj && obj->v30() && ((bool (__fastcall *)(Obj_0045B6F0*))ext_00584C10)(obj)) {
        return 1;
    }
    return 0;
}

// [0x0045DB50] sub_0045DB50 (49 bytes)
extern "C" int mem_00B53A34;
extern "C" int mem_00B53B30;
extern "C" int mem_00B53AB0;
extern "C" int mem_00B53A70;
extern "C" int mem_00B53AF0;
extern "C" int __fastcall fn_0045DB50(void* self) {
    return self == &mem_00B53A34 || self == &mem_00B53B30 || self == &mem_00B53AB0 ||
           self == &mem_00B53A70 || self == &mem_00B53AF0;
}

// [0x0045B4F0] sub_0045B4F0 (50 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0045B4F0(void* self) {
    __asm {
        push esi
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1a8]
        push 0xf0
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x88]
        cmp eax, 0x1
        sete al
        push eax
        call edx
        pop esi
        ret
    }
}

// [0x00454560] sub_00454560 (53 bytes)
extern "C" void __fastcall fn_00454560(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    int* p = (int*)((char*)self + 0x130);
    p[0] = a1;
    p[1] = a2;
    p[2] = a3;
    p[3] = a4;
    p[4] = a5;
}

// [0x004553D0] sub_004553D0 (55 bytes)
extern "C" void __fastcall fn_004553D0(void* self) {
    typedef void (__thiscall *Fn)(void* self, int flag);
    char* p = (char*)self;
    if (*(unsigned char*)(p + 0x158) != 0) {
        Fn f = *(Fn*)(*(char**)(p + 0xc8) + 0x144);
        f(p + 0xc8, 1);
    } else {
        Fn f = *(Fn*)(*(char**)(p + 0xc8) + 0x144);
        f(p + 0xc8, 0);
    }
}

// [0x0045BCF0] sub_0045BCF0 (56 bytes)
extern "C" int mem_00925694;
typedef int (__stdcall *SendMessageAFn)(int, unsigned int, int, int);

extern "C" bool __fastcall fn_0045BCF0(void* self) {
    SendMessageAFn send = (SendMessageAFn)mem_00925694;
    int first = send(*(int*)((char*)self + 0x20), 0x110a, 9, 0);
    int second = send(*(int*)((char*)self + 0x20), 0x110a, 0, 0);
    return first == second;
}

extern "C" int ext_00455F40();

// [0x00456280] sub_00456280 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_00456280(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0xdc], 0
        jne ret_path
        call ext_00455F40
        test eax, eax
        jne ret_path
        mov eax, dword ptr [esp + 4]
        lea edx, [eax - 0xa]
        cmp edx, 7
        ja ret_path
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push eax
        mov eax, dword ptr [edx + 0x184]
        call eax
        pop esi
ret_path:
        ret 0xc
    }
}

extern "C" void ext_006A5E00();
extern "C" void ext_006A5E5A();
extern "C" int mem_009256B0;

// [0x004564A0] sub_004564A0 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_004564A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        test byte ptr [ecx + 0x94], 0x20
        je L_done_004564A0
        mov eax, dword ptr [ecx + 0x20]
        push 5
        push eax
        call dword ptr [mem_009256B0]
        push eax
        call ext_006A5E00
        test eax, eax
        je L_done_004564A0
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push 1
        push ecx
        push edx
        push 0
        push 0
        mov ecx, eax
        call ext_006A5E5A
L_done_004564A0:
        ret 0xc
    }
}

// [0x00455D40] sub_00455D40 (61 bytes)
extern "C" int __stdcall fn_00455D40(int a1) {
    if (a1 == 0) return 0xa;
    if (a1 == 1) return 0xc;
    if (a1 == 2) return 0xb;
    return (a1 == 3) ? 0xf : 0;
}

// [0x00456210] sub_00456210 (62 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_00925630;

extern "C" void __fastcall fn_00456210(void* self, int edx_unused, int a1, int a2, int a3) {
    unsigned char* p = (unsigned char*)self;
    if (*(int*)(p + 0x8c) != 0) {
        (*(int (__stdcall**)(void*, int*))&mem_00925630)(*(void**)(p + 0x20), &a2);
        void* obj = *(void**)(p + 0x90);
        void** vt = *(void***)obj;
        ((void (__thiscall*)(void*, int, int))vt[0])(obj, a2, a3);
    } else {
        ((void (__thiscall*)(void*))ext_006A5EA8)(self);
    }
}

// [0x00458290] sub_00458290 (32 bytes)
extern "C" void ext_00456210();

extern "C" __declspec(naked) void __fastcall fn_00458290(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp byte ptr [ecx + 0x128], 0
        jne skip_call
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        call ext_00456210
skip_call:
        ret 0xc
    }
}

// [0x0045BC30] sub_0045BC30 (63 bytes)
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_0045BC30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        push 0x9
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push 0x110b
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 0x9
        push 0x110b
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x20]
        push edi
        push 0x0
        push 0x1114
        push edx
        call ebx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00458860] sub_00458860 (68 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00458860(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        push edi
        je short L_skip_virt
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        call edx
    L_skip_virt:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        mov edi, dword ptr [esp + 0xc]
        je short L_invalid
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short L_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_ok:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*edi]
        mov dword ptr [esi + 0x10], ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        call eax
        pop edi
        pop esi
        ret 4
    }
}

// [0x00455860] sub_00455860 (73 bytes)
extern "C" int mem_00925694;
extern "C" void ext_00455260();

extern "C" __declspec(naked) void __fastcall fn_00455860(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push 0xe
        push eax
        call edi
        mov eax, dword ptr [esi + 0x94]
        lea edx, [esp + 0x8]
        push edx
        push 0x2
        push 0x44a
        lea ecx, [esi + 0x13c]
        push eax
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x20], offset ext_00455260
        call edi
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00455B50] sub_00455B50 (44 bytes)
extern "C" void ext_00455860();
extern "C" void ext_00455410();
extern "C" void ext_00465B30();
extern "C" void ext_004691D0();

extern "C" __declspec(naked) void __fastcall fn_00455B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00455860
        mov ecx, esi
        call ext_00455410
        movzx ecx, byte ptr [esi + 0x158]
        lea eax, [esi + 0x13c]
        push eax
        push ecx
        call ext_00465B30
        mov ecx, eax
        call ext_004691D0
        pop esi
        ret
    }
}

extern "C" void ext_00455C20();
extern "C" void ext_006A63BE();
extern "C" void ext_006A60EE();

// [0x00456C20] sub_00456C20 (75 bytes)
// Walks a singly linked list at this->[0x88]; for each node calls ext_00455C20(), then ext_006A63BE(node->obj, result);
// when that returns nonzero, calls obj->vtbl[0x17C/4](arg1) with ecx = obj.
extern "C" __declspec(naked) void __cdecl fn_00456C20(void* self, void* arg1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax + 0x88]
        test esi, esi
        je L_done
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push edi
    L_top:
        test esi, esi
        mov eax, esi
        je L_tail
        mov esi, dword ptr [esi]
        mov edi, dword ptr [eax + 8]
        call ext_00455C20
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        je L_next
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x17c]
        push ebx
        mov ecx, edi
        call eax
    L_next:
        test esi, esi
        jne L_top
        pop edi
        pop ebx
    L_done:
        pop esi
        ret
    L_tail:
        jmp ext_006A60EE
    }
}

// [0x00456C70] sub_00456C70 (75 bytes)
extern "C" __declspec(naked) void __cdecl fn_00456C70(void* self, void* arg1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax + 0x88]
        test esi, esi
        je L_done
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push edi
    L_top:
        test esi, esi
        mov eax, esi
        je L_tail
        mov esi, dword ptr [esi]
        mov edi, dword ptr [eax + 8]
        call ext_00455C20
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        je L_next
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x180]
        push ebx
        mov ecx, edi
        call eax
    L_next:
        test esi, esi
        jne L_top
        pop edi
        pop ebx
    L_done:
        pop esi
        ret
    L_tail:
        jmp ext_006A60EE
    }
}

// [0x00453BC0] sub_00453BC0 (55 bytes)
extern "C" void ext_0044DA40();
extern "C" void ext_0044DA90();
extern "C" void ext_005AA8D0();
extern "C" void ext_00452E20();

extern "C" __declspec(naked) void __fastcall fn_00453BC0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0044DA40
        mov ecx, esi
        mov edi, eax
        call ext_0044DA90
        test edi, edi
        je done
        test eax, eax
        je done
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        mov ecx, edi
        call ext_005AA8D0
        pop edi
        mov ecx, esi
        pop esi
        jmp ext_00452E20
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00454AD0] sub_00454AD0 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00454AD0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x124], 0
        jne skip_send
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1a8]
        call edx
        mov eax, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x85
        push eax
        call dword ptr [mem_00925694]
skip_send:
        cmp byte ptr [esi + 0x128], 0
        jne done
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_00456210
done:
        pop esi
        ret 0xc
    }
}

// [0x004562F0] sub_004562F0 (77 bytes)
// __thiscall, ret 0xc: if this->[0xdc] != 0, ClientToScreen(this->[0x20], &POINT{arg1, arg2})
// then calls vtable[0x18c](&POINT) on this; finally tail-calls thunk 0x006A5EA8 with ecx = this.
extern "C" void ext_006A5EA8();
extern "C" int mem_00925630;

extern "C" __declspec(naked) void __fastcall fn_004562F0(void* self, int edx_unused, int a0, int a1, int a2) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xdc], 0
        je skip
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [esp + 4]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [esi + 0x20]
        push edx
        push eax
        mov dword ptr [esp + 0x10], ecx
        call dword ptr [mem_00925630]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x18c]
        lea eax, [esp + 4]
        push eax
        mov ecx, esi
        call edx
    skip:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 8
        ret 0xc
    }
}

// [0x0045DB00] sub_0045DB00 (78 bytes)
extern "C" void __fastcall fn_0045DB00(void* self, int edx_unused, void* a1) {
    unsigned char* x = (unsigned char*)a1;
    unsigned char* y;
    unsigned char* yl;
    unsigned char* head;
    unsigned char* p;

    y = *(unsigned char**)(x + 8);
    *(unsigned char**)(x + 8) = *(unsigned char**)y;
    yl = *(unsigned char**)y;
    if (!yl[0x15]) {
        *(unsigned char**)(yl + 4) = x;
    }
    *(unsigned char**)(y + 4) = *(unsigned char**)(x + 4);

    head = *(unsigned char**)((unsigned char*)self + 4);
    if (x == *(unsigned char**)(head + 4)) {
        *(unsigned char**)(head + 4) = y;
        *(unsigned char**)y = x;
        *(unsigned char**)(x + 4) = y;
        return;
    }
    p = *(unsigned char**)(x + 4);
    if (x == *(unsigned char**)p) {
        *(unsigned char**)p = y;
    } else {
        *(unsigned char**)(p + 8) = y;
    }
    *(unsigned char**)y = x;
    *(unsigned char**)(x + 4) = y;
}

// [0x004561C0] sub_004561C0 (79 bytes)
// __thiscall with ret 4: sets flag 0x20 on arg0, GetParent(this->[0x20]), stores result at this->[0xf4],
// then conditionally sets this->[0xe0] = 1 when the arg's flag 0x40 is set and sub_00455F40 returns 0.
extern "C" void ext_006A67AE();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5EC0();
extern "C" int mem_00925650;

extern "C" __declspec(naked) void __fastcall fn_004561C0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        or dword ptr [edi + 18h], 20h
        push edi
        mov esi, ecx
        call ext_006A67AE
        mov eax, dword ptr [esi + 20h]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A5EC0
        mov ecx, esi
        mov dword ptr [esi + 0f4h], eax
        call ext_00455F40
        test eax, eax
        jne done
        test byte ptr [edi + 18h], 40h
        je done
        mov dword ptr [esi + 0e0h], 1
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00456DE0] sub_00456DE0 (83 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A5F50();
extern "C" void ext_006A63BE();
extern "C" void ext_006A67A8();
extern "C" void ext_006A67BA();

extern "C" __declspec(naked) void __fastcall fn_00456DE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, esi
        mov edi, eax
        call ext_00455F40
        test eax, eax
        je done
        call ext_006A67BA
        push eax
        mov ecx, esi
        call ext_006A67A8
        mov ecx, eax
        call ext_006A63BE
        test eax, eax
        je done
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 8ch]
        push eax
        call ext_006A5F50
        mov ecx, esi
        call ext_006A67A8
        or dword ptr [eax + 0d0h], 0ch
    done:
        mov eax, edi
        pop edi
        pop esi
        ret 8
    }
}

// [0x00454B20] sub_00454B20 (49 bytes)
extern "C" void ext_00456DE0();
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_00454B20(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_00456DE0
        mov edx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x85
        push edx
        mov edi, eax
        call dword ptr [mem_00925694]
        mov eax, edi
        pop edi
        pop esi
        ret 8
    }
}

// [0x0045BED0] sub_0045BED0 (87 bytes)
extern "C" void ext_0045BCF0();
extern "C" void ext_0045B6C0();
extern "C" int mem_00A9F414;
extern "C" int mem_00924FE4;
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_0045BED0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        call ext_0045BCF0
        test al, al
        je short L_0045BEFE
        mov eax, dword ptr [mem_00A9F414]
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
L_0045BEFE:
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 0x0
        push 0x9
        push 0x110a
        push ecx
        call dword ptr [mem_00925694]
        mov edi, dword ptr [esp + 0x10]
        push eax
        push edi
        mov ecx, esi
        call ext_0045B6C0
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00455EB0] sub_00455EB0 (91 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A679C();

extern "C" __declspec(naked) void __fastcall fn_00455EB0(void* self) {
    __asm {
        push -1
        push 0x0087EB38
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00936D5C
        lea ecx, [esi + 0xFC]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A679C
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045E510] sub_0045E510 (94 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0045E510(void* self, int edx_unused, void* out, const unsigned int* key) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        jne L_part2
        mov esi, dword ptr [edi]
    L_loop1:
        cmp esi, dword ptr [eax + 0xc]
        jae L_right1
        mov edx, eax
        mov eax, dword ptr [eax]
        jmp L_chk1
    L_right1:
        mov eax, dword ptr [eax + 0x8]
    L_chk1:
        cmp byte ptr [eax + 0x15], 0x0
        je L_loop1
    L_part2:
        mov esi, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        jne L_done
        mov edi, dword ptr [edi]
    L_loop2:
        cmp dword ptr [eax + 0xc], edi
        jae L_left2
        mov eax, dword ptr [eax + 0x8]
        jmp L_chk2
    L_left2:
        mov esi, eax
        mov eax, dword ptr [eax]
    L_chk2:
        cmp byte ptr [eax + 0x15], 0x0
        je L_loop2
    L_done:
        mov eax, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr [eax + 0x4], esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        pop esi
        ret 0x8
    }
}

// [0x00458A00] sub_00458A00 (99 bytes)
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6808();

extern "C" __declspec(naked) void __fastcall fn_00458A00(void* self) {
    __asm {
        push -1
        push 0x0087EBE8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 0x0093764C
        mov edi, dword ptr [esi + 0x54]
        test edi, edi
        mov dword ptr [esp + 0x14], 0
        je skip_release
        mov ecx, edi
        call ext_0046AC30
        push edi
        call ext_006A5C5C
        add esp, 4
    skip_release:
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_006A6808
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045AEE0] sub_0045AEE0 (105 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251F0;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) float __fastcall fn_0045AEE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        lea ecx, [esp]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esp]
        push eax
        mov dword ptr [esp + 0x10], 0x0
        call ext_006A5F4A
        lea ecx, [esp]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x18]
        add esp, 0x4
        lea ecx, [esp]
        call dword ptr [mem_009242F4]
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0045E700] sub_0045E700 (102 bytes)
extern "C" void ext_0041A190();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0045E700(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        je chk_fail1
        cmp edi, esi
        je chk_ok1
    chk_fail1:
        call dword ptr [mem_00925134]
    chk_ok1:
        mov ebp, dword ptr [esp + 0x14]
        cmp ebp, ebx
        je at_end
        test edi, edi
        jne chk_ok2
        call dword ptr [mem_00925134]
    chk_ok2:
        cmp ebp, dword ptr [edi + 4]
        jne chk_ok3
        call dword ptr [mem_00925134]
    chk_ok3:
        mov eax, dword ptr [ebp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    at_end:
        mov eax, dword ptr [esi + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0045B410] sub_0045B410 (62 bytes)
extern "C" void ext_0045AEE0();

extern "C" __declspec(naked) void __fastcall fn_0045B410(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x8c]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x7c]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B450] sub_0045B450 (65 bytes)
extern "C" void ext_0045AEE0();

extern "C" __declspec(naked) void __fastcall fn_0045B450(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0xe0]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x80]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B4A0] sub_0045B4A0 (65 bytes)
extern "C" void ext_0045AEE0();

extern "C" __declspec(naked) void __fastcall fn_0045B4A0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x134]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x84]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B530] sub_0045B530 (65 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045B530(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x1dc]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x8c]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B580] sub_0045B580 (65 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045B580(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x230]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B5D0] sub_0045B5D0 (65 bytes)
extern "C" void ext_0045AEE0();

extern "C" __declspec(naked) void __fastcall fn_0045B5D0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x284]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x94]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

// [0x0045B620] sub_0045B620 (65 bytes)
extern "C" void ext_0045AEE0();

extern "C" __declspec(naked) void __fastcall fn_0045B620(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        lea eax, [esi + 0x2d8]
        push eax
        call ext_0045AEE0
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne not_positive
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x98]
        push ecx
        fstp dword ptr [esp]
        call eax
        pop esi
        pop ecx
        ret
    not_positive:
        fstp st(0)
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_0041A190();
extern "C" int mem_00925134;

// [0x0045E690] sub_0045E690 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045E690(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, [esp+1Ch]
        push eax
        lea ecx, [esp+14h]
        lea esi, [edi+0Ch]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov ebx, dword ptr [esp+10h]
        test ebx, ebx
        mov ebp, dword ptr [esi+4]
        je L_null1
        cmp ebx, esi
        je L_ok1
    L_null1:
        call dword ptr [mem_00925134]
    L_ok1:
        mov esi, dword ptr [esp+14h]
        cmp esi, ebp
        je L_end
        test ebx, ebx
        jne L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        cmp esi, dword ptr [ebx+4]
        jne L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov eax, dword ptr [esi+10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_end:
        mov eax, dword ptr [edi+18h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004519B0] sub_004519B0 (107 bytes)
extern "C" void ext_00594000();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004519B0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        call ext_00594000
        mov edi, dword ptr [eax + 0x26c]
        mov ebx, dword ptr [edi + 0x34]
        mov ebp, dword ptr [mem_00925134]
        add edi, 0x30
    L1:
        cmp ebx, dword ptr [edi + 0x8]
        jbe L2
        call ebp
    L2:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe L3
        call ebp
    L3:
        cmp ebx, esi
        je L_done
        cmp ebx, dword ptr [edi + 0x8]
        jb L4
        call ebp
    L4:
        mov esi, dword ptr [ebx]
        test esi, esi
        je L5
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        mov ecx, esi
        call edx
        cmp eax, 0x7
        jne L5
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x164]
        mov ecx, esi
        call edx
    L5:
        cmp ebx, dword ptr [edi + 0x8]
        jb L6
        call ebp
    L6:
        add ebx, 0x4
        jmp L2
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0045E4C0] sub_0045E4C0 (61 bytes)
extern "C" void ext_00419F50();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __cdecl fn_0045E4C0(void* a1, void* a2, void* a3, void* a4, int* a5) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x1c]
    L_loop_0045E4C0:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_call_0045E4C0
        cmp eax, edi
        je L_check_0045E4C0
    L_call_0045E4C0:
        call ebp
    L_check_0045E4C0:
        cmp dword ptr [esp + 0x18], ebx
        je L_done_0045E4C0
        add dword ptr [esi], 1
        lea ecx, [esp + 0x14]
        call ext_00419F50
        jmp L_loop_0045E4C0
    L_done_0045E4C0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_00594000();
extern "C" void ext_00451AE0();
extern "C" void ext_00468180();
extern "C" void ext_00468F40();

// [0x0045E8A0] sub_0045E8A0 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045E8A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je short L_null1
        lea edi, [esi + 0x248]
        jmp short L_call1
    L_null1:
        xor edi, edi
    L_call1:
        call ext_00594000
        mov ecx, dword ptr [eax + 0x2dc]
        push edi
        call ext_00451AE0
        test esi, esi
        je short L_null2
        lea edi, [esi + 0x24c]
        jmp short L_call2
    L_null2:
        xor edi, edi
    L_call2:
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x58]
        push edi
        call ext_00451AE0
        test esi, esi
        je short L_null3
        lea eax, [esi + 0x250]
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_00468F40
        pop edi
        pop esi
        ret
    L_null3:
        xor eax, eax
        push eax
        call ext_00468180
        mov ecx, eax
        call ext_00468F40
        pop edi
        pop esi
        ret
    }
}

// [0x00453EB0] sub_00453EB0 (115 bytes)
extern "C" void ext_004535B0();
extern "C" __declspec(naked) void __fastcall fn_00453EB0(void* self) {
    __asm {
        push -1
        push 0x0087CC19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x278]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0xb0]
        call dword ptr [mem_00924FD4]
        mov ecx, esi
        call ext_004535B0
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045BF30] sub_0045BF30 (117 bytes)
typedef int (__stdcall *SendMessageFn_0045BF30)(int, unsigned int, unsigned int, int);
extern "C" int __fastcall fn_0045BF30(char* self, int edx_unused, int a1) {
    SendMessageFn_0045BF30 send = (SendMessageFn_0045BF30)mem_00925694;
    int r = send(*(int*)(self + 0x20), 0x110a, 4, a1);
    if (r) return r;
    r = send(*(int*)(self + 0x20), 0x110a, 1, a1);
    if (r) return r;
    int esi = send(*(int*)(self + 0x20), 0x110a, 3, a1);
    while (esi) {
        r = send(*(int*)(self + 0x20), 0x110a, 1, esi);
        if (r) return r;
        esi = send(*(int*)(self + 0x20), 0x110a, 3, esi);
    }
    return 0;
}

// [0x0045C090] sub_0045C090 (43 bytes)
extern "C" void ext_0045BF30();
extern "C" void ext_006A6820();

extern "C" __declspec(naked) void __fastcall fn_0045C090(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loop_top:
        push esi
        mov ecx, edi
        call ext_006A6820
        push esi
        mov ecx, edi
        call ext_0045BF30
        mov esi, eax
        test esi, esi
        jne loop_top
    done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0045C240] sub_0045C240 (32 bytes)
extern "C" int mem_00925694;
extern "C" void ext_0045C090();

extern "C" void __fastcall fn_0045C240(void* self) {
    typedef int (__stdcall *SendFn)(void*, unsigned int, unsigned int, unsigned int);
    typedef void (__thiscall *ThisFn)(void*, int);
    int r = ((SendFn)mem_00925694)(*(void**)((char*)self + 0x20), 0x110a, 0, 0);
    ((ThisFn)ext_0045C090)(self, r);
}

// [0x0045C1C0] sub_0045C1C0 (93 bytes)
extern "C" void ext_006A6442();

extern "C" __declspec(naked) void __fastcall fn_0045C1C0(void* self) {
    __asm {
        push esi
        push edi
        push 0
        push 0
        mov edi, ecx
        mov eax, dword ptr [edi + 0x20]
        push 0x110a
        push eax
        call dword ptr [mem_00925694]
        mov esi, eax
        test esi, esi
        je done
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_top:
        push 0
        push 2
        push 0
        push 0
        push 0
        push 0
        push 8
        push esi
        mov ecx, edi
        call ext_006A6442
        push 0
        push 0x10
        push 0
        push 0
        push 0
        push 0
        push 8
        push esi
        mov ecx, edi
        call ext_006A6442
        push esi
        mov ecx, edi
        call ext_0045BF30
        mov esi, eax
        test esi, esi
        jne loop_top
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0045AE60] sub_0045AE60 (126 bytes)
extern "C" int mem_009251E4;
extern "C" __declspec(naked) void __fastcall fn_0045AE60(void* self) {
    __asm {
        push -1
        push 0x0087CC19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x32C]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        test eax, eax
        jle skip_call
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x9C]
        call eax
    skip_call:
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045BC70] sub_0045BC70 (126 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Sends a custom message to the owner's window, fetches the resulting text into a
// local CString, converts it to std::string in the hidden buffer, then tears down the
// SEH frame and the CString.
extern "C" void ext_006A6826();
extern "C" int mem_00925694;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0045BC70(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0
        push 9
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0
        mov eax, dword ptr [esi + 0x20]
        push 0x110a
        push eax
        call dword ptr [mem_00925694]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006A6826
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x10], 0
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
        ret 0x4
    }
}

// [0x00458210] sub_00458210 (128 bytes)
// __thiscall, ret 0xc: if this->[0xdc] == 0 and sub_00455F40() == 0 and arg1 in {10,11,12,15},
// dispatches to vtable[0x184](arg1, arg2, arg3) unless the matching flag byte at [0x124..0x127] is set.
extern "C" int ext_00455F40();

extern "C" void __fastcall fn_00458210(void* self, int edx_unused, int a1, int a2, int a3) {
    typedef void (__thiscall *VFn)(void*, int, int, int);
    unsigned char* p = reinterpret_cast<unsigned char*>(self);
    if (*reinterpret_cast<int*>(p + 0xdc) != 0) return;
    if (ext_00455F40() != 0) return;
    unsigned int k = static_cast<unsigned int>(a1) - 10u;
    if (k > 7u) return;
    if (a1 == 10) {
        if (p[0x124] == 0) goto dispatch;
        return;
    }
    if (a1 == 12) {
        if (p[0x125] == 0) goto dispatch;
        return;
    }
    if (a1 == 11) {
        if (p[0x126] == 0) goto dispatch;
        return;
    }
    if (a1 != 15) return;
    if (p[0x127] != 0) return;
dispatch:
    reinterpret_cast<VFn>((*reinterpret_cast<void***>(self))[0x184 / sizeof(void*)])(self, a1, a2, a3);
}

// [0x0045DE30] sub_0045DE30 (119 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043DD60();
extern "C" int mem_00993830;
extern "C" int mem_00925688;

extern "C" void __fastcall fn_0045DE30(void* self) {
    typedef void* (__fastcall *PFn)(void*);
    typedef double (__thiscall *DFn)(void*, int);
    typedef void (__thiscall *DDFn)(void*, double, double);
    void* a = ((PFn)ext_00468180)(self);
    void* b = ((PFn)ext_00468660)(a);
    int c = ((int (__fastcall *)(void*))(*(void***)b)[0xa0 / sizeof(void*)])(b);
    double d1 = ((DFn)ext_0043CDD0)(self, *(int*)((char*)self + 0xfc) + 8);
    double d2 = ((DFn)ext_0043CDD0)(self, *(int*)((char*)self + 0xfc));
    double v = (d1 - d2) + (double)c;
    ((DDFn)ext_0043DD60)(self, *(double*)&mem_00993830, v);
    ((void (__stdcall *)(int, int, int))mem_00925688)(*(int*)((char*)self + 0x20), 0, 1);
}

// [0x00451670] sub_00451670 (136 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __fastcall fn_00451670(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_chk1
        call ebp
L_chk1:
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe short L_chk2
        call ebp
L_chk2:
        cmp esi, ebx
        mov dword ptr [esp + 0x14], esi
        je short L_findend
        mov eax, dword ptr [esp + 0x1c]
        mov eax, dword ptr [eax]
L_loop:
        cmp dword ptr [esi], eax
        je short L_findend
        add esi, 0x4
        cmp esi, ebx
        jne short L_loop
L_findend:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_chk3
        call ebp
        mov ebp, dword ptr [mem_00925134]
L_chk3:
        test edi, edi
        je short L_bad
        cmp edi, edi
        je short L_ok
L_bad:
        call ebp
L_ok:
        cmp esi, ebx
        je short L_done
        mov eax, dword ptr [edi + 0x8]
        lea ecx, [esi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle short L_nocopy
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L_nocopy:
        add dword ptr [edi + 0x8], -0x4
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

extern "C" void ext_004545D0();

// [0x00455480] sub_00455480 (30 bytes)
extern "C" void* __fastcall fn_00455480(char* self, int edx_unused, int a1) {
    ((void (__thiscall*)(void*))ext_004545D0)(self);
    *(int*)(self + 0x144) = a1;
    *(int*)self = 0x9367a4;
    return self;
}

// [0x00459210] sub_00459210 (49 bytes)
extern "C" void ext_0043BB40();

extern "C" void* __fastcall fn_00459210(void* self, int edx_unused, int a1, int a2, int a3) {
    ((void (__thiscall*)(void*, int, int, int))ext_0043BB40)(self, a1, a2, a3);
    *(int*)((char*)self + 0x40) = a3;
    *(int*)self = 0x937924;
    *(int*)((char*)self + 0x28) = 0x18;
    return self;
}

// [0x0045BE30] sub_0045BE30 (145 bytes)
extern "C" void ext_006A6442();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0045BE30(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push 0x110a
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push eax
        push 9
        push 0x110b
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x110a
        push edx
        call edi
        push 0
        push 2
        push 2
        push 0
        push 0
        push 0
        push 8
        push eax
        mov ecx, esi
        call ext_006A6442
        mov eax, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x110a
        push eax
        call edi
        push 0
        push 0x10
        push 0x10
        push 0
        push 0
        push 0
        push 8
        push eax
        mov ecx, esi
        call ext_006A6442
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x110a
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x20]
        push eax
        push 0
        push 0x1114
        push edx
        call edi
        pop edi
        pop esi
        ret
    }
}

// [0x0045F4B0] sub_0045F4B0 (150 bytes)
// SEH-guarded constructor-style init: pushes an EH frame (handler mem_0087FD98), builds two
// sub-objects via ext_0043D780, then restores the frame and returns with ret 8.
extern "C" void ext_0043D780();
extern "C" int mem_0087FD98;

extern "C" __declspec(naked) void __fastcall fn_0045F4B0(void* self) {
    __asm {
        push -1
        push offset mem_0087FD98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_0043D780
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x15], 0x1
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esi + 0x8], 0x0
        lea edi, [esi + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        call ext_0043D780
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x15], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [edi + 0x8], 0x0
        mov dword ptr [esi + 0x1c], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x18], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00455680] sub_00455680 (159 bytes)
extern "C" void ext_0040FD00();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6760();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00455680(void* self) {
    __asm {
        push -1
        push 0x87e86e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x936a9c
        lea ecx, [esi + 0x164]
        mov dword ptr [esp + 0x10], 0x4
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x10], 0x3
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x13c]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xc8]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0040FD00
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A6760
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00451B20] sub_00451B20 (183 bytes)
extern "C" void ext_00451AE0();
extern "C" void ext_00454BA0();
extern "C" void ext_00468180();
extern "C" void ext_00468F40();
extern "C" void ext_00594000();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00451B20(void* self) {
    __asm {
        push -1
        push 0x87b328
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x144]
        lea ebx, [esi + 0x148]
        lea ebp, [esi + 0x14c]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x935c1c
        mov dword ptr [edi], 0x935c08
        mov dword ptr [ebx], 0x935bf4
        mov dword ptr [ebp], 0x935bec
        mov dword ptr [esp + 0x1c], 0x0
        call ext_00594000
        mov eax, dword ptr [eax + 0x2dc]
        push edi
        mov ecx, eax
        call ext_00451AE0
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov eax, dword ptr [eax + 0x58]
        push ebx
        mov ecx, eax
        call ext_00451AE0
        push ebp
        call ext_00468180
        mov ecx, eax
        call ext_00468F40
        lea ecx, [esi + 0x12c]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call dword ptr [mem_009242F4]
        mov ecx, esi
        call ext_00454BA0
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

// [0x0045DFB0] sub_0045DFB0 (57 bytes)
extern "C" int __stdcall ext_0063F530(int a1, int a2, int a3);

extern "C" int __stdcall fn_0045DFB0(int a1) {
    int r = ext_0063F530(a1, 0, 1);
    if (r == 0xB53A34 || r == 0xB53B30 || r == 0xB53AB0 || r == 0xB53A70 || r == 0xB53AF0) {
        return 0xB53B30;
    }
    return r;
}

// [0x0045DB90] sub_0045DB90 (60 bytes)
extern "C" __declspec(naked) int __stdcall fn_0045DB90(int a, int b) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x1
        push eax
        push edx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_0045DBC4
        cmp eax, 0xb53b30
        je L_0045DBC4
        cmp eax, 0xb53ab0
        je L_0045DBC4
        cmp eax, 0xb53a70
        je L_0045DBC4
        cmp eax, 0xb53af0
        jne L_0045DBC9
    L_0045DBC4:
        mov eax, 0xb53b30
    L_0045DBC9:
        ret 0x8
    }
}

// [0x00455720] sub_00455720 (203 bytes)
extern "C" void ext_0040FD30();
extern "C" void ext_0040FD40();
extern "C" void ext_0040FD50();
extern "C" void ext_006A676C();
extern "C" void ext_006A7BC0();
extern "C" int mem_0093A0BC;
extern "C" int mem_0092421C;
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0B4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0D0;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00455720(void* self) {
    __asm {
        sub esp, 0x3c
        mov eax, dword ptr [mem_0093A0BC]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x26]
        push ecx
        mov dword ptr [esp + 0x10], 0x3c
        mov dword ptr [esp + 0x14], 0xe0000000
        call dword ptr [mem_0092421C]
        mov ecx, dword ptr [mem_0093A0C4]
        mov edx, dword ptr [mem_0093A0B4]
        mov eax, dword ptr [mem_0093A0CC]
        lea edi, [esi + 0xc8]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x20], eax
        call ext_0040FD30
        mov edx, dword ptr [mem_0093A0CC]
        push edx
        mov ecx, edi
        call ext_0040FD40
        mov eax, dword ptr [mem_0093A0C8]
        push eax
        mov ecx, edi
        call ext_006A7BC0
        mov ecx, dword ptr [mem_0093A0D0]
        push ecx
        mov ecx, edi
        call ext_0040FD50
        lea edx, [esp + 8]
        push edx
        lea ecx, [esi + 0x74]
        call ext_006A676C
        mov eax, dword ptr [mem_0093A0C4]
        mov ecx, dword ptr [esi + 0x94]
        mov edi, dword ptr [mem_00925694]
        push eax
        push 0
        push 0x443
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x94]
        push 0
        push 1
        push 0x45b
        push edx
        call edi
        mov eax, dword ptr [esi + 0x94]
        push 1
        push 0
        push 0x445
        push eax
        call edi
        pop edi
        pop esi
        add esp, 0x3c
        ret
    }
}

// [0x004512C0] sub_004512C0 (207 bytes)
// Stack arg a1 (ret 4). Returns 0 if a1 is null. Otherwise fetches a container from this+0x78 via
// sub_00495320(this+0x78, [this+0xa4]); scans its pointer vector (begin @+0x80, end @+0x84) with
// STL checks, RTDynamicCast'ing each element to the target type, and matching the vfunc+0x24 result
// against the std::string at +0x170. Returns the first matching element or 0.
extern "C" void ext_00495320();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void* __fastcall fn_004512C0(void* self, int edx_unused, int a1) {
    __asm {
        cmp dword ptr [esp + 0x4], 0x0
        jne L_nonzero
        xor eax, eax
        ret 0x4
    L_nonzero:
        mov eax, dword ptr [ecx + 0xa4]
        push edi
        push eax
        add ecx, 0x78
        call ext_00495320
        mov edi, eax
        test edi, edi
        jne L_have
        pop edi
        ret 0x4
    L_have:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [edi + 0x80]
        xor ebp, ebp
        cmp esi, dword ptr [edi + 0x84]
        jbe L_chk1
        call dword ptr [mem_00925134]
    L_chk1:
        mov ebx, esi
    L_head:
        mov esi, dword ptr [edi + 0x84]
        cmp dword ptr [edi + 0x80], esi
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebx, esi
        je L_done
        test ebp, ebp
        jne L_inc
        cmp ebx, dword ptr [edi + 0x84]
        jb L_elem
        call dword ptr [mem_00925134]
    L_elem:
        mov eax, dword ptr [ebx]
        test eax, eax
        je L_inc
        push 0x0
        push 0xa30138
        push 0xa2e2bc
        push 0x0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_inc
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [esi + 0x170]
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_inc
        mov ebp, esi
    L_inc:
        cmp ebx, dword ptr [edi + 0x84]
        jb L_adv
        call dword ptr [mem_00925134]
    L_adv:
        add ebx, 0x4
        jmp L_head
    L_done:
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        ret 0x4
    }
}

// [0x004515C0] sub_004515C0 (175 bytes)
extern "C" void ext_004512C0();
extern "C" void ext_00494300();
extern "C" void ext_005AA8D0();
extern "C" int mem_00924FC8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004515C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [eax + 0x22c]
        test edi, edi
        mov esi, ecx
        je done
        mov eax, dword ptr [eax + 0x18c]
        push eax
        lea ecx, [esi + 0x78]
        call ext_00494300
        push edi
        mov ecx, esi
        call ext_004512C0
        mov edi, eax
        test edi, edi
        je done
        lea eax, [edi + 0x170]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je done
        push 0x928b5d
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0x0
        call ext_005AA8D0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov byte ptr [esi + 0xaa], 0x1
done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00452D30] sub_00452D30 (182 bytes)
extern "C" void ext_004512C0();
extern "C" void ext_00452830();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00452D30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x61c]
        push 0x188
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x61c]
        push 0x0
        push eax
        push 0x199
        push ecx
        call ebx
        test eax, eax
        je exit_nopop
        push ebp
        push eax
        mov ecx, esi
        call ext_004512C0
        mov ebp, eax
        test ebp, ebp
        je exit_pop_ebp
        mov edx, dword ptr [esi + 0x5b8]
        push edi
        xor edi, edi
        push edi
        push edi
        push 0x18b
        push edx
        call ebx
        sub eax, 0x1
        js exit_pop_edi
        jmp loop_body
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_body:
        mov eax, dword ptr [esi + 0x5b8]
        push 0x0
        push edi
        push 0x199
        push eax
        call ebx
        cmp eax, ebp
        push 0x0
        je found
        mov ecx, dword ptr [esi + 0x5b8]
        push 0x0
        push 0x18b
        push ecx
        add edi, 0x1
        call ebx
        sub eax, 0x1
        cmp edi, eax
        jle loop_body
        pop edi
        pop ebp
        mov ecx, esi
        pop esi
        pop ebx
        jmp ext_00452830
found:
        mov edx, dword ptr [esi + 0x5b8]
        push edi
        push 0x186
        push edx
        call ebx
exit_pop_edi:
        pop edi
exit_pop_ebp:
        pop ebp
exit_nopop:
        mov ecx, esi
        pop esi
        pop ebx
        jmp ext_00452830
    }
}

// [0x00458E30] sub_00458E30 (208 bytes)
extern "C" void ext_00458E10();
extern "C" int mem_00AD3E30;
extern "C" int mem_009255C4;
extern "C" __declspec(naked) int __stdcall fn_00458E30(void* self, unsigned int msg, unsigned int wp, void* lp) {
    __asm {
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x28]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x28]
        mov eax, dword ptr [esi + 0x1c]
        xor ebx, ebx
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esp + 0x2c]
        cmp eax, dword ptr [mem_00AD3E30]
        push edi
        mov edi, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        jne L_skip_copy
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi + 0x8]
        mov ebx, edi
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x18], edx
L_skip_copy:
        mov edx, dword ptr [esi + 0x18]
        push ebp
        lea ebp, [esp + 0x30]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x40], edx
        push ebp
        lea edx, [esp + 0x18]
        push ecx
        mov dword ptr [esi + 0x18], edx
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        test ebx, ebx
        pop ebp
        je L_skip_store
        mov dword ptr [ebx + 0xc], eax
L_skip_store:
        test eax, eax
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [esi + 0x18], ecx
        jne L_skip_wndproc
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esi + 0x1c]
        push edi
        push edx
        mov edx, dword ptr [esi + 0x14]
        push eax
        push ecx
        push edx
        call dword ptr [mem_009255C4]
        mov dword ptr [esp + 0x2c], eax
L_skip_wndproc:
        cmp dword ptr [esp + 0x30], 0x82
        jne L_exit
        mov ecx, esi
        call ext_00458E10
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        mov ecx, esi
        call edx
L_exit:
        mov eax, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x1c
        ret 0x10
    }
}

// [0x0045AD80] sub_0045AD80 (213 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F38();
extern "C" void ext_006A61D2();

extern "C" __declspec(naked) void __fastcall fn_0045AD80(void* self) {
    __asm {
        push -1
        push 0x87f668
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x937a64
        lea ecx, [esi + 0x32c]
        mov dword ptr [esp + 0x10], 0x8
        call ext_006A5F38
        lea ecx, [esi + 0x2d8]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006A5F38
        lea ecx, [esi + 0x284]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5F38
        lea ecx, [esi + 0x230]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5F38
        lea ecx, [esi + 0x1dc]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5F38
        lea ecx, [esi + 0x188]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5DFA
        lea ecx, [esi + 0x134]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F38
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A61D2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045BFB0] sub_0045BFB0 (218 bytes)
// Loop over a chain of entries starting at arg0: look each up via sub_006A6820, and for each
// hit read its name (falling back to a virtual getter when the name is empty), then forward
// that name to sub_006A6442. Advances via sub_0045BF30 until it returns 0. ret 0x4.
extern "C" void ext_0045BF30();
extern "C" void ext_00584A10();
extern "C" void ext_006A6442();
extern "C" void ext_006A6820();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0045BFB0(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        test esi, esi
        mov ebx, ecx
        je L_epilogue
        push edi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop:
        push esi
        mov ecx, ebx
        call ext_006A6820
        mov edi, eax
        test edi, edi
        je L_next
        mov ecx, edi
        call ext_00584A10
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        lea eax, [esp + 0xc]
        push 0x928b5d
        push eax
        mov dword ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_have_name
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, edi
        call eax
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FDC]
L_have_name:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FF0]
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push eax
        push 0x1
        push esi
        mov ecx, ebx
        call ext_006A6442
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
L_next:
        push esi
        mov ecx, ebx
        call ext_0045BF30
        mov esi, eax
        test esi, esi
        jne L_loop
        pop edi
L_epilogue:
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x0045C220] sub_0045C220 (32 bytes)
extern "C" void ext_0045BFB0();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_0045C220(void* self) {
    typedef int (__stdcall *SendFn)(void*, unsigned int, unsigned int, unsigned int);
    typedef void (__thiscall *ThisFn)(void*, int);
    int r = ((SendFn)mem_00925694)(*(void**)((char*)self + 0x20), 0x110a, 0, 0);
    ((ThisFn)ext_0045BFB0)(self, r);
}

// [0x004555A0] sub_004555A0 (224 bytes)
extern "C" void ext_0040FDC0();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6742();
extern "C" int mem_00924FE8;
extern "C" int mem_00924EA8;
extern "C" int mem_0093A0C4;
extern "C" int mem_0092407C;
extern "C" int mem_0093A0C8;

extern "C" __declspec(naked) void __fastcall fn_004555A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87e81c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_006A6742
        lea edi, [esi + 0x74]
        xor ebp, ebp
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esi], 0x936a9c
        call ext_006A5C6E
        mov dword ptr [edi], 0x93695c
        lea ecx, [esi + 0xc8]
        mov byte ptr [esp + 0x1c], 0x1
        call ext_0040FDC0
        lea ebx, [esi + 0x13c]
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 0x2
        call dword ptr [mem_00924FE8]
        lea edi, [esi + 0x15c]
        mov byte ptr [esi + 0x158], 0x0
        mov byte ptr [esi + 0x159], 0x0
        mov dword ptr [edi + 0x4], ebp
        mov dword ptr [edi], 0x92a254
        lea ebp, [esi + 0x164]
        mov dword ptr [ebp + 0x4], 0x0
        mov dword ptr [ebp], 0x92a254
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 0x5
        call dword ptr [mem_00924EA8]
        mov eax, dword ptr [mem_0093A0C4]
        mov ebx, dword ptr [mem_0092407C]
        push eax
        call ebx
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [mem_0093A0C8]
        push ecx
        call ebx
        push eax
        mov ecx, ebp
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00451AF0] sub_00451AF0 (40 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00451AF0(void* self, int edx_unused, const void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x598]
        call ext_005DF5C0
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00451CE0] sub_00451CE0 (67 bytes)
struct TargetClass_00451AF0 {
    void* call_af0(const void* s);
};

typedef bool (__cdecl *StrNeqFn)(const void*, const char*);

extern "C" void* __stdcall fn_00451CE0(TargetClass_00451AF0* a1, const char* a2) {
    if (!a2) return 0;
    void* result = 0;
    if (a1) {
        const void* s = a2 + 0x170;
        if ((*(StrNeqFn*)&mem_00924FC8)(s, (const char*)&mem_00928B5D)) {
            result = a1->call_af0(s);
        }
    }
    return result;
}

// [0x00450220] sub_00450220 (179 bytes)
extern "C" void ext_0044DBF0();
extern "C" int mem_00925694;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00450220(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        push 0
        push 0
        mov edi, ecx
        mov eax, dword ptr [edi + 0x768]
        push 0x18b
        push eax
        mov dword ptr [esp + 0x1c], 0
        call ebx
        test eax, eax
        jle short L_fail
        mov ecx, dword ptr [edi + 0x768]
        push 0
        push 0
        push 0x190
        push ecx
        call ebx
        cmp eax, 1
        jne short L_fail
        mov edx, dword ptr [edi + 0x768]
        xor esi, esi
        push esi
        push esi
        push 0x18b
        push edx
        call ebx
        test eax, eax
        jle short L_fail
L_loop:
        mov eax, dword ptr [edi + 0x768]
        push 0
        push esi
        push 0x187
        push eax
        call ebx
        test eax, eax
        jne short L_found
        mov ecx, dword ptr [edi + 0x768]
        push eax
        push eax
        push 0x18b
        push ecx
        add esi, 1
        call ebx
        cmp esi, eax
        jl short L_loop
L_fail:
        mov esi, dword ptr [esp + 0x14]
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
L_found:
        push esi
        mov esi, dword ptr [esp + 0x18]
        push esi
        mov ecx, edi
        call ext_0044DBF0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x0045BD30] sub_0045BD30 (253 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045BD30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x0087F7EA
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x10], 0x0
        mov eax, dword ptr [esp + 0x28]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        push 0x4
        push 0x110A
        push ecx
        mov dword ptr [esp + 0x24], esi
        call dword ptr [mem_00925694]
    L70:
        mov ebp, eax
        test ebp, ebp
        je Ld3
        push ebp
        lea edx, [esp + 0x2C]
        push edx
        mov ecx, esi
        call ext_006A6826
        mov edi, eax
        mov ecx, dword ptr [esp + 0x2C]
        or dword ptr [esp + 0x10], 0x1
        mov dword ptr [esp + 0x20], 0x0
        call dword ptr [mem_00924FF0]
        mov ecx, edi
        mov esi, eax
        call dword ptr [mem_00924300]
    La6:
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [esi]
        jne Lc6
        test cl, cl
        je Lc2
        mov cl, byte ptr [eax + 0x1]
        cmp cl, byte ptr [esi + 0x1]
        jne Lc6
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne La6
    Lc2:
        xor eax, eax
        jmp Lcb
    Lc6:
        sbb eax, eax
        sbb eax, -0x1
    Lcb:
        test eax, eax
        je Ld3
        mov bl, 0x1
        jmp Ld5
    Ld3:
        xor bl, bl
    Ld5:
        test byte ptr [esp + 0x10], 0x1
        mov dword ptr [esp + 0x20], 0xFFFFFFFF
        je Lf3
        and dword ptr [esp + 0x10], -0x2
        lea ecx, [esp + 0x28]
        call dword ptr [mem_009242F4]
    Lf3:
        test bl, bl
        je L116
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x20]
        push ebp
        push 0x1
        push 0x110A
        push ecx
        call dword ptr [mem_00925694]
        mov esi, dword ptr [esp + 0x14]
        jmp L70
    L116:
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x8
    }
}

extern "C" void ext_0044DAE0();
extern "C" void ext_0044DCF0();
extern "C" void ext_004951F0();
extern "C" void ext_00586140();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_x1;
// [0x00450120] sub_00450120 (246 bytes)
extern "C" __declspec(naked) void __fastcall fn_00450120(void* self) {
    __asm {
        push -1
        mov eax, fs:[0]
        push offset mem_x1
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp [esi+0x74], ebx
        push edi
        je L_fail
        mov ebp, [esp+0x58]
        push offset mem_x1
        push ebp
        call [mem_00924FC0]
        add esp, 8
        test al, al
        jne L_fail
        mov edi, [esp+0x5c]
        test edi, edi
        jl L_fail
        lea eax, [esp+0x2c]
        push eax
        mov ecx, esi
        call ext_0044DAE0
        push edi
        lea ecx, [esp+0x14]
        push ecx
        mov ecx, esi
        mov [esp+0x58], ebx
        call ext_0044DCF0
        push ebp
        lea edx, [esp+0x30]
        push edx
        lea ecx, [esi+0x78]
        mov byte ptr [esp+0x58], 1
        call ext_004951F0
        test eax, eax
        je L_skip
        push ebx
        push offset mem_x1
        push offset mem_x1
        push ebx
        lea ecx, [esp+0x20]
        push ecx
        mov ecx, eax
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        mov ebx, eax
    L_skip:
        lea ecx, [esp+0x10]
        mov byte ptr [esp+0x50], 0
        call [mem_00924FF4]
        lea ecx, [esp+0x2c]
        mov dword ptr [esp+0x50], 0xffffffff
        call [mem_00924FF4]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov ecx, [esp+0x38]
        mov fs:[0], ecx
        add esp, 0x44
        ret 8
    L_fail:
        mov ecx, [esp+0x48]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret 8
    }
}

// [0x00459260] sub_00459260 (144 bytes)
extern "C" void ext_00440EE0();
extern "C" void ext_00493D90();
extern "C" __declspec(naked) void* __fastcall fn_00459260(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, float f1, float f2, float f3, float f4) {
    __asm {
        push -1
        push 0x0087B938
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        sub esp, 0x10
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x14], esp
        fld dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x20], 0x0
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x38]
        push eax
        mov eax, dword ptr [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esi], 0x00937934
        mov dword ptr [esp + 0x10], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x24
    }
}

// [0x00459300] sub_00459300 (151 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00459300(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, float f1, float f2, float f3, float f4) {
    __asm {
        push -1
        push 0x0087B938
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        sub esp, 0x10
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp + 0x14], esp
        fld dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x20], 0x0
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x38]
        push eax
        mov eax, dword ptr [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esi], 0x0093794c
        mov byte ptr [esi + 0x8e], 0x0
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x24
    }
}

// [0x00450000] sub_00450000 (282 bytes)
extern "C" void ext_0044DAE0();
extern "C" void ext_0044DBF0();
extern "C" void ext_0044DCF0();
extern "C" void ext_004951F0();
extern "C" void ext_00586140();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_00450000(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008A57AB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x74], 0
        push edi
        mov dword ptr [esp + 0xc], 0
        je L_fail
        mov ebp, dword ptr [esp + 0x74]
        test ebp, ebp
        jl L_fail
        mov edi, dword ptr [esp + 0x78]
        test edi, edi
        jl L_fail
        lea eax, [esp + 0x48]
        push eax
        call ext_0044DAE0
        push ebp
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x74], 0
        call ext_0044DBF0
        push edi
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x74], 1
        call ext_0044DCF0
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x74], 2
        call ext_004951F0
        test eax, eax
        je L_skip
        push 0
        push 0x00A30138
        push 0x00A2E2BC
        push 0
        lea edx, [esp + 0x20]
        push edx
        mov ecx, eax
        call ext_00586140
        push eax
        call ext_006A6E9E
        add esp, 0x14
        mov esi, eax
        jmp L_cont
    L_skip:
        mov esi, dword ptr [esp + 0xc]
    L_cont:
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x6c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6c], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 8
    L_fail:
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 8
    }
}

// [0x00455970] sub_00455970 (286 bytes)
extern "C" void ext_006A5E5A();
extern "C" int mem_0092566C;
extern "C" int mem_00925640;
extern "C" int mem_0092564C;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00455970(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x159], 0
        je loc_455A87
        mov ecx, dword ptr [esi + 0x94]
        push ebx
        push edi
        mov edi, dword ptr [mem_0092566C]
        lea eax, [esp + 0x1c]
        push eax
        push ecx
        call edi
        mov eax, dword ptr [esi + 0xe8]
        lea edx, [esp + 0xc]
        push edx
        push eax
        call edi
        mov ecx, dword ptr [esp + 0x10]
        sub ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        mov ebx, dword ptr [mem_00925640]
        lea edx, [ecx + edi - 0xc]
        push edx
        add eax, -0x8
        push eax
        push 0
        push 0
        lea ecx, [esp + 0x2c]
        push ecx
        call ebx
        mov edx, dword ptr [esp + 0x18]
        sub edx, dword ptr [esp + 0x10]
        lea eax, [esp + 0xc]
        push edx
        push edi
        push 0
        push 0
        push eax
        call ebx
        mov edi, dword ptr [mem_0092564C]
        push 0
        push 4
        lea ecx, [esp + 0x24]
        push ecx
        call edi
        push 0
        push 4
        lea edx, [esp + 0x14]
        push edx
        call edi
        push 4
        push 0
        lea eax, [esp + 0x24]
        push eax
        call edi
        mov ecx, dword ptr [esp + 0x28]
        add ecx, 4
        push ecx
        push 0
        lea edx, [esp + 0x14]
        push edx
        call edi
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [esi + 0x74]
        call ext_006A5E5A
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        sub ecx, eax
        push 1
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [esi + 0xc8]
        call ext_006A5E5A
        mov eax, dword ptr [esi + 0x94]
        mov edi, dword ptr [mem_00925688]
        push 1
        push 0
        push eax
        call edi
        mov ecx, dword ptr [esi + 0xe8]
        push 1
        push 0
        push ecx
        call edi
        pop edi
        pop ebx
loc_455A87:
        pop esi
        add esp, 0x20
        ret 8
    }
}

// [0x0045E570] sub_0045E570 (287 bytes)
extern "C" void ext_0043DCF0();
extern "C" void ext_00594000();
extern "C" void ext_00599F10();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0045E570(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr [ebp + 0xbc]
        mov eax, dword ptr [ebp + 0xc0]
        push esi
        lea esi, [ebp + 0xb0]
        add eax, ebx
        cmp ebx, eax
        push edi
        mov dword ptr [esp + 0x10], ebp
        jbe loc_45E5A0
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00

    loc_45E5A0:
        mov eax, dword ptr [esi + 0xc]
        mov edi, dword ptr [esi + 0x10]
        add edi, eax
        cmp eax, edi
        jbe loc_45E5B2
        call dword ptr [mem_00925134]

    loc_45E5B2:
        cmp esi, esi
        je loc_45E5BC
        call dword ptr [mem_00925134]

    loc_45E5BC:
        cmp ebx, edi
        je loc_45E60D
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        mov edi, ebx
        mov ebp, ebx
        shr edi, 2
        and ebp, 3
        cmp ebx, ecx
        jb loc_45E5DA
        call dword ptr [mem_00925134]

    loc_45E5DA:
        mov eax, dword ptr [esi + 8]
        cmp eax, edi
        ja loc_45E5E3
        sub edi, eax

    loc_45E5E3:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + 4*edi]
        mov ebp, dword ptr [eax + 4*ebp]
        test ebp, ebp
        je loc_45E5F4
        mov byte ptr [ebp + 0x35], 0

    loc_45E5F4:
        mov ecx, dword ptr [esi + 0x10]
        add ecx, dword ptr [esi + 0xc]
        cmp ebx, ecx
        jb loc_45E604
        call dword ptr [mem_00925134]

    loc_45E604:
        mov ebp, dword ptr [esp + 0x10]
        add ebx, 1
        jmp loc_45E5A0

    loc_45E60D:
        mov ebx, dword ptr [esp + 0x18]
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        jbe loc_45E620
        call dword ptr [mem_00925134]
        nop

    loc_45E620:
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe loc_45E62E
        call dword ptr [mem_00925134]

    loc_45E62E:
        cmp esi, edi
        je loc_45E687
        cmp esi, dword ptr [ebx + 8]
        jb loc_45E63D
        call dword ptr [mem_00925134]

    loc_45E63D:
        mov edx, dword ptr [esi]
        push 0
        push 0xa2fb54
        push 0xa2e2d8
        push 0
        push edx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je loc_45E677
        push eax
        call ext_00594000
        mov ecx, eax
        call ext_00599F10
        push eax
        mov ecx, ebp
        call ext_0043DCF0
        test eax, eax
        je loc_45E677
        mov byte ptr [eax + 0x35], 1

    loc_45E677:
        cmp esi, dword ptr [ebx + 8]
        jb loc_45E682
        call dword ptr [mem_00925134]

    loc_45E682:
        add esi, 4
        jmp loc_45E620

    loc_45E687:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x0045B720] sub_0045B720 (291 bytes)
extern "C" void ext_006A6E9E();
extern "C" int __stdcall fn_0045B720(void* a1) {
    typedef void* (__cdecl *D)(void*, int, void*, void*, int);
    D dc = (D)ext_006A6E9E;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB54, 0)) return 1;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBBC, 0)) return 2;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB78, 0)) return 5;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC0C, 0)) return 6;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBE4, 0)) return 7;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC50, 0)) return 8;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB9C, 0)) return 3;
    return dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC74, 0) ? 11 : 0;
}

// [0x0045B850] sub_0045B850 (291 bytes)
extern "C" int __stdcall fn_0045B850(void* a1) {
    typedef void* (__cdecl *D)(void*, int, void*, void*, int);
    D dc = (D)ext_006A6E9E;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB54, 0)) return 13;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBBC, 0)) return 14;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB78, 0)) return 17;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC0C, 0)) return 18;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBE4, 0)) return 19;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC50, 0)) return 20;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB9C, 0)) return 15;
    return dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC74, 0) ? 23 : 0;
}

// [0x0045B980] sub_0045B980 (291 bytes)
extern "C" int __stdcall fn_0045B980(void* a1) {
    typedef void* (__cdecl *D)(void*, int, void*, void*, int);
    D dc = (D)ext_006A6E9E;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB54, 0)) return 25;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBBC, 0)) return 26;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB78, 0)) return 29;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC0C, 0)) return 30;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBE4, 0)) return 31;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC50, 0)) return 32;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB9C, 0)) return 27;
    return dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC74, 0) ? 35 : 0;
}

// [0x0045BAB0] sub_0045BAB0 (291 bytes)
extern "C" int __stdcall fn_0045BAB0(void* a1) {
    typedef void* (__cdecl *D)(void*, int, void*, void*, int);
    D dc = (D)ext_006A6E9E;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB54, 0)) return 37;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBBC, 0)) return 38;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB78, 0)) return 41;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC0C, 0)) return 42;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FBE4, 0)) return 43;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC50, 0)) return 44;
    if (dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FB9C, 0)) return 39;
    return dc(a1, 0, (void*)0xA2E2BC, (void*)0xA2FC74, 0) ? 47 : 0;
}

// [0x00455D80] sub_00455D80 (291 bytes)
extern "C" void ext_006A63B2();
extern "C" void ext_006A67A2();
extern "C" int mem_00925680;

extern "C" __declspec(naked) void* __fastcall fn_00455D80(void* self) {
    __asm {
        push -1
        push 0x87eb26
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_006A67A2
        xor edi, edi
        mov dword ptr [esi], 0x936d5c
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x100], edi
        mov dword ptr [esi + 0xfc], 0x92a254
        mov eax, 0x21
        mov ecx, 0x20
        push 0x5
        mov dword ptr [esi + 0xb4], eax
        mov dword ptr [esi + 0xbc], eax
        mov dword ptr [esi + 0xc4], eax
        mov eax, 0xc8
        mov dword ptr [esi + 0xb8], ecx
        mov dword ptr [esi + 0xc0], ecx
        mov dword ptr [esi + 0xc8], ecx
        mov ecx, eax
        push 0x5
        mov edx, 0x1
        push 0x5
        mov dword ptr [esi + 0xa0], ecx
        mov dword ptr [esi + 0xa8], ecx
        mov dword ptr [esi + 0xb0], ecx
        push 0x5
        mov ecx, esi
        mov byte ptr [esp + 0x24], dl
        mov dword ptr [esi + 0x9c], eax
        mov dword ptr [esi + 0xa4], eax
        mov dword ptr [esi + 0xac], eax
        mov dword ptr [esi + 0xdc], edi
        mov dword ptr [esi + 0xe0], edi
        mov dword ptr [esi + 0xe4], edi
        mov dword ptr [esi + 0xec], edx
        mov dword ptr [esi + 0xf0], edx
        mov dword ptr [esi + 0xf8], 0x5
        call ext_006A63B2
        push 0xf
        mov dword ptr [esi + 0xe8], edi
        mov dword ptr [esi + 0xf4], edi
        mov dword ptr [esi + 0x94], edi
        mov dword ptr [esi + 0xcc], edi
        mov dword ptr [esi + 0xd0], edi
        mov dword ptr [esi + 0xd4], edi
        mov dword ptr [esi + 0xd8], edi
        call dword ptr [mem_00925680]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x104], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0045C0C0] sub_0045C0C0 (100 bytes)
extern "C" void ext_0045B720();
extern "C" void ext_0045B850();
extern "C" void ext_0045B980();
extern "C" void ext_0045BAB0();
extern "C" void ext_006A6442();
extern "C" void ext_006A6820();
extern "C" void ext_006A682C();

extern "C" __declspec(naked) void __fastcall fn_0045C0C0(void* self, int edx_unused, void* arg1, unsigned char arg2) {
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0x0c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x0c]
        push    esi
        movzx   eax, bl
        push    edi
        push    eax
        push    ebp
        mov     esi, ecx
        call    ext_006A682C
        push    ebp
        mov     ecx, esi
        call    ext_006A6820
        test    bl, bl
        mov     edi, eax
        push    edi
        mov     ecx, esi
        je      loc_45C0FA
        call    ext_0045B850
        push    edi
        mov     ecx, esi
        mov     ebx, eax
        call    ext_0045B720
        jmp     loc_45C109
loc_45C0FA:
        call    ext_0045BAB0
        push    edi
        mov     ecx, esi
        mov     ebx, eax
        call    ext_0045B980
loc_45C109:
        push    0
        push    0
        push    0
        push    ebx
        push    eax
        push    0
        push    0x22
        push    ebp
        mov     ecx, esi
        call    ext_006A6442
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}

// [0x00455020] sub_00455020 (49 bytes)
extern "C" void ext_00454E70();
extern "C" void ext_00455D80();
extern "C" int mem_0093652C;

extern "C" __declspec(naked) void* __fastcall fn_00455020(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        call    ext_00455D80
        lea     ecx, [esi + 0x10c]
        mov     dword ptr [esi], offset mem_0093652C
        call    ext_00454E70
        mov     dword ptr [esi + 0x108], 0xe
        mov     dword ptr [esi + 0x120], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}

// [0x004581C0] sub_004581C0 (56 bytes)
extern "C" void ext_00455020();
extern "C" void* __fastcall fn_004581C0(void* self) {
    char* p = (char*)self;
    ext_00455020();
    p[0x124] = 0;
    p[0x125] = 0;
    p[0x126] = 0;
    p[0x127] = 0;
    p[0x128] = 0;
    p[0x129] = 0;
    *(void**)p = (void*)0x93712c;
    return self;
}

// [0x0045C130] sub_0045C130 (129 bytes)
extern "C" void ext_00422E00();
extern "C" void ext_0045BC30();
extern "C" void ext_0045C0C0();
extern "C" void ext_006A60D0();
extern "C" void ext_006A6820();
extern "C" void ext_006A6832();

extern "C" __declspec(naked) void __fastcall fn_0045C130(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov esi, ecx
        call ext_006A60D0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_006A6832
        mov edi, eax
        test edi, edi
        je L_end_0045C130
        mov al, byte ptr [esp + 0x8]
        test al, 0x42
        jne L_branch2_0045C130
        test al, 0x4
        je L_not4_0045C130
        push edi
        mov ecx, esi
        call ext_0045BC30
        pop edi
        pop esi
        pop ecx
        ret 0xc
L_not4_0045C130:
        test al, 0x10
        je L_end_0045C130
        push 3
        push edi
        mov ecx, esi
        call ext_00422E00
        pop edi
        pop esi
        pop ecx
        ret 0xc
L_branch2_0045C130:
        cmp dword ptr [esi + 0x54], 0
        je L_end_0045C130
        mov eax, dword ptr [esi + 0x54]
        push ebx
        mov ebx, dword ptr [eax]
        push edi
        mov ecx, esi
        call ext_006A6820
        mov ecx, dword ptr [esi + 0x54]
        mov edx, dword ptr [ebx + 0x4]
        push eax
        call edx
        mov ecx, esi
        push eax
        push edi
        call ext_0045C0C0
        pop ebx
L_end_0045C130:
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_0045C130();
extern "C" void ext_006A6820();
extern "C" void ext_006A6832();

// [0x0045C260] sub_0045C260 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045C260(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x54], 0
        je L_exit_0045C260
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push edi
        lea eax, [esp + 0x8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_006A6832
        mov edi, eax
        test edi, edi
        je L_pop_edi_0045C260
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0045C130
        mov eax, dword ptr [esi + 0x54]
        mov ebx, dword ptr [eax]
        lea ecx, [esp + 0x18]
        push ecx
        push edi
        mov ecx, esi
        call ext_006A6820
        mov ecx, dword ptr [esi + 0x54]
        mov edx, dword ptr [ebx]
        push eax
        call edx
        pop ebx
L_pop_edi_0045C260:
        pop edi
L_exit_0045C260:
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_00455020();
extern "C" void ext_004F2810();
extern "C" void ext_006A6190();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A6748();
extern "C" int mem_0087E75F;
extern "C" int mem_009362F4;
extern "C" int mem_009362E4;
extern "C" int mem_009362D8;
extern "C" int mem_009240AC;
extern "C" int mem_009240D0;
extern "C" int mem_009242F8;
extern "C" int mem_009242FC;

// [0x004545D0] sub_004545D0 (243 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004545D0(void* self) {
    __asm {
        push    -1
        push    offset mem_0087E75F
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        call    ext_00455020
        lea     edi, [esi + 0x12c]
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esi], offset mem_009362F4
        call    dword ptr [mem_009242FC]
        mov     eax, 0xcfcfcf
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x28], 0x1
        mov     dword ptr [esi + 0x130], 0x505050
        mov     dword ptr [esi + 0x134], ebx
        mov     dword ptr [esi + 0x138], eax
        mov     dword ptr [esi + 0x13c], 0x9f9f9f
        mov     dword ptr [esi + 0x140], eax
        mov     dword ptr [esi + 0x124], ebx
        call    ext_006A61A2
        push    ebx
        mov     byte ptr [esp + 0x2c], 0x2
        call    dword ptr [mem_009240AC]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_006A6190
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    offset ext_004F2810
        push    offset mem_009362E4
        push    eax
        call    dword ptr [mem_009240D0]
        test    eax, eax
        mov     eax, offset mem_009362E4
        je      L_00454689
        mov     eax, offset mem_009362D8
    L_00454689:
        push    eax
        mov     ecx, edi
        call    dword ptr [mem_009242F8]
        lea     ecx, [esp + 0x10]
        call    ext_006A6748
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esi + 0x128], bl
        mov     byte ptr [esp + 0x28], 0x1
        call    ext_006A619C
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20
        ret
    }
}

// [0x00454420] sub_00454420 (201 bytes)
extern "C" void ext_004543F0();
extern "C" void ext_004545D0();
extern "C" void ext_00468180();
extern "C" void ext_00468F30();
extern "C" void ext_00594000();

extern "C" __declspec(naked) void* __fastcall fn_00454420(void* self, int edx_unused, void* arg0) {
    __asm {
        push    -1
        push    0x87b328
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        call    ext_004545D0
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x144], 0x9328b8
        mov     dword ptr [esi + 0x148], 0x9355dc
        lea     edi, [esi + 0x144]
        mov     dword ptr [esi + 0x14c], 0x9328cc
        lea     ebx, [esi + 0x148]
        lea     ebp, [esi + 0x14c]
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esi], 0x935c1c
        mov     dword ptr [edi], 0x935c08
        mov     dword ptr [ebx], 0x935bf4
        mov     dword ptr [ebp], 0x935bec
        mov     dword ptr [esi + 0x150], eax
        call    ext_00594000
        mov     ecx, dword ptr [eax + 0x2dc]
        push    edi
        call    ext_004543F0
        call    ext_00594000
        mov     ecx, dword ptr [eax + 0x26c]
        mov     ecx, dword ptr [ecx + 0x58]
        push    ebx
        call    ext_004543F0
        push    ebp
        call    ext_00468180
        mov     ecx, eax
        call    ext_00468F30
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}

// [0x0045AF50] sub_0045AF50 (291 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A6220();
extern "C" __declspec(naked) void* __fastcall fn_0045AF50(void* self) {
    __asm {
        push -1
        push 0x87f668
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x34
        xor edi, edi
        push edi
        mov esi, ecx
        push 0x20a
        mov dword ptr [esp + 0x14], esi
        call ext_006A6220
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x88], edi
        lea edi, [esi + 0x8c]
        mov ecx, edi
        mov dword ptr [esi], 0x937a64
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xe0]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x134]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x188]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x1dc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x230]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x284]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x2d8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 7
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x32c]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 8
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x929e0c
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00430370();
extern "C" void ext_00430380();
extern "C" void ext_0044CCF0();
extern "C" void ext_0044E190();
extern "C" void ext_00494300();
extern "C" void ext_0052F600();
extern "C" void ext_00594000();
extern "C" void ext_006A6E9E();
extern "C" void ext_006AD940();
extern "C" int mem_00ACDB40;
extern "C" int mem_00925134;
extern "C" int mem_00A2E2BC;
extern "C" int mem_00A2E2D8;
extern "C" int mem_00A2FB54;

// [0x00451180] sub_00451180 (311 bytes)
extern "C" __declspec(naked) void __fastcall fn_00451180(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        push edi
        mov dword ptr [esp + 0x10], esi
        xor ebp, ebp
        call ext_00430370
        test al, al
        je L_0045124C
        mov ebx, dword ptr [esp + 0x18]
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        jbe L_004511B2
        call dword ptr [mem_00925134]
    L_004511B2:
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        jbe L_004511C0
        call dword ptr [mem_00925134]
    L_004511C0:
        cmp edi, esi
        je L_0045128D
        cmp edi, dword ptr [ebx + 8]
        jb L_004511D3
        call dword ptr [mem_00925134]
    L_004511D3:
        mov eax, dword ptr [edi]
        push 0
        push offset mem_00A2E2BC
        push offset mem_00A2E2D8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_00451239
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc0]
        call eax
        test al, al
        je L_00451239
        test ebp, ebp
        jne L_00451283
        cmp edi, dword ptr [ebx + 8]
        jb L_0045120F
        call dword ptr [mem_00925134]
    L_0045120F:
        mov ecx, dword ptr [edi]
        push 0
        push offset mem_00A2FB54
        push offset mem_00A2E2D8
        push 0
        push ecx
        call ext_006A6E9E
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        add esp, 0x14
        mov ecx, esi
        call eax
        test al, al
        jne L_00451239
        mov ebp, esi
    L_00451239:
        cmp edi, dword ptr [ebx + 8]
        jb L_00451244
        call dword ptr [mem_00925134]
    L_00451244:
        add edi, 4
        jmp L_004511B2
    L_0045124C:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430380
        test al, al
        je L_00451283
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_0052F600
        mov ebp, eax
        test ebp, ebp
        je L_00451283
        mov ecx, ebp
        call ext_0044CCF0
        test al, al
        je L_00451291
    L_00451283:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
    L_0045128D:
        mov esi, dword ptr [esp + 0x10]
    L_00451291:
        test ebp, ebp
        je L_00451283
        cmp ebp, dword ptr [esi + 0x74]
        je L_00451283
        push ebp
        lea ecx, [esi + 0x78]
        mov dword ptr [esi + 0x74], ebp
        call ext_00494300
        mov ecx, esi
        call ext_0044E190
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x0045D960] sub_0045D960 (345 bytes)
extern "C" void ext_00584A10();
extern "C" int mem_0087FC3E;
extern "C" int mem_00928B5D;
extern "C" int mem_00924FE4;
extern "C" int mem_00AD4F70;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FC8;
extern "C" int mem_00937F28;
extern "C" int mem_00937F24;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0045D960(void* self) {
    __asm {
        push -1
        push offset mem_0087FC3E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], ebx
        mov edi, dword ptr [esp + 0x58]
        push offset mem_00928B5D
        mov ecx, edi
        mov dword ptr [esp + 0x54], ebx
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x5c]
        cmp esi, ebx
        mov dword ptr [esp + 0x50], ebx
        mov dword ptr [esp + 0xc], 1
        je loc_0045DAA3
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        mov ecx, esi
        call edx
        lea ecx, [eax*8]
        sub ecx, eax
        lea edx, [ecx*4 + 0xad4f70]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        push offset mem_00928B5D
        mov ecx, esi
        call ext_00584A10
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        mov ecx, esi
        je loc_0045DA44
        call ext_00584A10
        push eax
        lea eax, [esp + 0x30]
        push offset mem_00937F28
        push eax
        call dword ptr [mem_00924FCC]
        push offset mem_00937F24
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov dword ptr [esp + 0x68], 1
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x54], 2
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x50], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        jmp loc_0045DA99
    loc_0045DA44:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        lea ecx, [esp + 0x14]
        push offset mem_00937F28
        push ecx
        call dword ptr [mem_00924FCC]
        push offset mem_00937F24
        push eax
        lea edx, [esp + 0x40]
        push edx
        mov dword ptr [esp + 0x68], 3
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x54], 4
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
    loc_0045DA99:
        mov byte ptr [esp + 0x50], bl
        call dword ptr [mem_00924FF4]
    loc_0045DAA3:
        mov ecx, dword ptr [esp + 0x48]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 8
    }
}


extern "C" void ext_006A5FF2();
extern "C" void ext_006A6010();
extern "C" void ext_006A617E();
extern "C" void ext_006A61C6();
extern "C" int mem_0087E7A1;
extern "C" int mem_00925680;
extern "C" int mem_009240CC;
extern "C" int mem_009240FC;
extern "C" int mem_00924218;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_0092A5D4;
extern "C" int mem_0092A23C;
extern "C" int mem_009366D8;
extern "C" int mem_009366D4;

// [0x00454E80] sub_00454E80 (409 bytes)
extern "C" __declspec(naked) void __fastcall fn_00454E80(void* self) {
    __asm {
        push -1
        push offset mem_0087E7A1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x44]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esp + 0x28], eax
        add eax, 0xb
        mov dword ptr [esp + 0x2c], ecx
        add ecx, 0xb
        xor ebx, ebx
        cmp dword ptr [edi], ebx
        mov dword ptr [esp + 0x30], eax
        mov dword ptr [esp + 0x34], ecx
        je loc_454EDB
        mov ebp, dword ptr [mem_00925680]
        push 0x14
        call ebp
        push eax
        push 0x10
        call ebp
        push eax
        lea eax, [esp + 0x30]
        push eax
        jmp loc_454EF5

    loc_454EDB:
        cmp dword ptr [edi + 4], ebx
        je loc_454EFC
        mov ebp, dword ptr [mem_00925680]
        push 0x10
        call ebp
        push eax
        push 0x14
        call ebp
        push eax
        lea ecx, [esp + 0x30]
        push ecx

    loc_454EF5:
        mov ecx, esi
        call ext_006A61C6

    loc_454EFC:
        mov edx, dword ptr [esi + 8]
        push edx
        call dword ptr [mem_009240CC]
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        push 1
        mov ecx, esi
        call ext_006A6010
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x20], offset mem_0092A5D4
        mov eax, dword ptr [esi + 8]
        push 0x58
        push eax
        mov dword ptr [esp + 0x48], ebx
        call dword ptr [mem_009240FC]
        push eax
        push 0x60
        push 0x3c
        call dword ptr [mem_00924218]
        push ebx
        push offset mem_009366D8
        push eax
        lea ecx, [esp + 0x2c]
        call ext_006A617E
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call edx
        push offset mem_009366D4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_009242F0]
        mov ebx, eax
        mov ebp, dword ptr [edi + 0xc]
        mov edi, dword ptr [edi + 8]
        mov eax, dword ptr [esi]
        mov ecx, ebx
        mov byte ptr [esp + 0x40], 1
        add ebp, 2
        add edi, 2
        mov dword ptr [esp + 0x48], eax
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x4c]
        push eax
        mov eax, dword ptr [edx + 0x64]
        push ebp
        push edi
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x40], 0
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_006A6010
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0x38]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x40], 0xffffffff
        mov dword ptr [esp + 0x20], offset mem_0092A23C
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}


// [0x004513B0] sub_004513B0 (519 bytes)
extern "C" void ext_00410D10();
extern "C" void ext_00425E30();
extern "C" void ext_004512C0();
extern "C" void ext_00489320();
extern "C" void ext_00492A50();
extern "C" void ext_00494300();
extern "C" void ext_00495320();
extern "C" void ext_0049AD40();
extern "C" void ext_005AA8D0();
extern "C" void ext_006A6E9E();
extern "C" int mem_008A2A89;
extern "C" int mem_00924FB0;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00928B5D;
extern "C" int mem_00A2E2BC;
extern "C" int mem_00A30138;

extern "C" __declspec(naked) void __fastcall fn_004513B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008A2A89
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        je L_00451597
        mov eax, dword ptr [ebp + 0Ch]
        test eax, eax
        je L_00451597
        mov ecx, dword ptr [ecx + 22Ch]
        test ecx, ecx
        mov ebx, dword ptr [eax + 22Ch]
        mov dword ptr [esp + 14h], ecx
        je L_00451597
        test ebx, ebx
        je L_00451597
        mov eax, dword ptr [eax + 18Ch]
        lea esi, [edi + 78h]
        push eax
        mov ecx, esi
        call ext_00494300
        push ebx
        mov ecx, edi
        call ext_004512C0
        mov ebx, eax
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 18Ch]
        push eax
        mov ecx, esi
        call ext_00494300
        mov ecx, dword ptr [esp + 14h]
        push ecx
        mov ecx, edi
        call ext_004512C0
        test ebx, ebx
        mov dword ptr [esp + 10h], eax
        je L_00451597
        test eax, eax
        je short L_00451478
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 24h]
        mov ecx, ebx
        call eax
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 24h]
        call eax
        push eax
        call dword ptr [mem_00924FB0]
        add esp, 8
        test al, al
        je L_00451597
    L_00451478:
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 18Ch]
        push eax
        mov ecx, esi
        call ext_00494300
        mov edx, dword ptr [edi + 0A4h]
        push edx
        mov ecx, esi
        call ext_00495320
        test eax, eax
        je L_00451597
        lea esi, [eax + 7Ch]
        lea eax, [esp + 1Ch]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 1Ch], esi
        call ext_00489320
        lea ecx, [esp + 24h]
        push ecx
        mov ecx, esi
        call ext_00410D10
        push eax
        lea ecx, [esp + 20h]
        call ext_0049AD40
        test al, al
        je L_00451597
    L_004514D0:
        lea ecx, [esp + 1Ch]
        call ext_00492A50
        mov edx, dword ptr [eax]
        push 0
        push offset mem_00A30138
        push offset mem_00A2E2BC
        push 0
        push edx
        call ext_006A6E9E
        mov esi, eax
        add esp, 14h
        test esi, esi
        je short L_00451519
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 24h]
        mov ecx, ebx
        call edx
        push eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        mov ecx, esi
        call edx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 8
        test al, al
        jne short L_00451540
    L_00451519:
        lea ecx, [esp + 1Ch]
        call ext_00425E30
        mov ecx, dword ptr [esp + 18h]
        lea eax, [esp + 24h]
        push eax
        call ext_00410D10
        push eax
        lea ecx, [esp + 20h]
        call ext_0049AD40
        test al, al
        jne short L_004514D0
        jmp short L_00451597
    L_00451540:
        mov ebx, dword ptr [esp + 10h]
        test ebx, ebx
        je short L_0045157D
        push offset mem_00928B5D
        lea ecx, [esp + 30h]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 2Ch]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 58h], 0
        call ext_005AA8D0
        lea ecx, [esp + 2Ch]
        mov dword ptr [esp + 54h], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_0045157D:
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 24h]
        call eax
        push eax
        mov ecx, esi
        call ext_005AA8D0
        mov byte ptr [edi + 0AAh], 1
    L_00451597:
        mov ecx, dword ptr [edi + 74h]
        push ecx
        lea ecx, [edi + 78h]
        call ext_00494300
        mov ecx, dword ptr [esp + 4Ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

extern "C" void ext_0055C4E0();
extern "C" void ext_0055C5D0();

// [0x0045E770] sub_0045E770 (185 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045E770(void* self) {
    __asm {
        sub     esp, 0Ch
        push    ebp
        mov     ebp, dword ptr [esp + 18h]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 4]
        mov     eax, dword ptr [esi + 4]
        cmp     byte ptr [eax + 15h], 0
        mov     cl, 1
        mov     byte ptr [esp + 0Ch], cl
        jne     loc_45E7AE
        mov     edx, dword ptr [ebp]
    loc_45E791:
        cmp     edx, dword ptr [eax + 0Ch]
        mov     esi, eax
        setb    cl
        test    cl, cl
        mov     byte ptr [esp + 0Ch], cl
        je      loc_45E7A5
        mov     eax, dword ptr [eax]
        jmp     loc_45E7A8
    loc_45E7A5:
        mov     eax, dword ptr [eax + 8]
    loc_45E7A8:
        cmp     byte ptr [eax + 15h], 0
        je      loc_45E791
    loc_45E7AE:
        test    cl, cl
        mov     edx, esi
        mov     dword ptr [esp + 14h], edx
        mov     dword ptr [esp + 10h], edi
        je      loc_45E7F9
        mov     eax, dword ptr [edi + 4]
        cmp     esi, dword ptr [eax]
        lea     ecx, [esp + 10h]
        jne     loc_45E7F0
        push    ebp
        push    esi
        push    1
        push    ecx
    loc_45E7CC:
        mov     ecx, edi
        call    ext_0055C5D0
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
    loc_45E7F0:
        call    ext_0055C4E0
        mov     edx, dword ptr [esp + 14h]
    loc_45E7F9:
        mov     eax, dword ptr [edx + 0Ch]
        cmp     eax, dword ptr [ebp]
        jae     loc_45E80F
        mov     ecx, dword ptr [esp + 0Ch]
        push    ebp
        push    esi
        push    ecx
        lea     edx, [esp + 1Ch]
        push    edx
        jmp     loc_45E7CC
    loc_45E80F:
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

// [0x0045E940] sub_0045E940 (132 bytes)
extern "C" void ext_0041A190();
extern "C" void ext_0045E770();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0045E940(void* self) {
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    ext_0041A190
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edi, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [esi + 0x4]
        je      loc_45E969
        cmp     ecx, esi
        je      loc_45E96F
    loc_45E969:
        call    dword ptr [mem_00925134]
    loc_45E96F:
        cmp     edi, ebx
        jne     loc_45E9B9
        mov     edi, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x28]
        lea     edx, [esp + 0x0c]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], ebx
        call    ext_0045E770
        lea     ecx, [esp + 0x0c]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esi + 0x0c]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], edi
        call    ext_0045E770
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x14
        ret     8
    loc_45E9B9:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}

// [0x00459920] sub_00459920 (333 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468660();
extern "C" void ext_0041A790();
extern "C" void ext_006A610C();
extern "C" void ext_006A6172();
extern "C" int mem_0092BD70;
extern "C" int mem_009240A4;
extern "C" __declspec(naked) void __fastcall fn_00459920(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x3c
        push edi
        mov edi, ecx
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xa0]
        call eax
        test eax, eax
        jle L_ret
        mov ecx, dword ptr [edi + 0x24]
        add eax, -1
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        fsub qword ptr [ecx + 0x110]
        fmul qword ptr [ecx + 0x120]
        fadd qword ptr [ecx + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x8]
        fistp dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [edi + 0x24]
        cmp ecx, dword ptr [eax + 0xfc]
        jle L_ret
        mov edx, dword ptr [esp + 0x48]
        push esi
        mov esi, dword ptr [edx + 0x8]
        cmp ecx, esi
        jle L_a
        mov ecx, esi
L_a:
        fldz
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0xc]
        fld qword ptr [esp + 0xc]
        fistp dword ptr [esp + 0x4c]
        mov esi, dword ptr [edi + 0x24]
        mov eax, dword ptr [esp + 0x4c]
        mov esi, dword ptr [esi + 0xfc]
        cmp eax, esi
        jge L_b
        mov eax, esi
L_b:
        mov esi, dword ptr [esp + 0x48]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [edi + 0x28]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edx + 0x4]
        add ecx, eax
        push 0x897e7b
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x24], ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x20], eax
        call ext_006A6172
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x24], ecx
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [esp + 0x18]
        push 0x0
        push 0x1
        mov dword ptr [esp + 0x38], ecx
        mov dword ptr [esp + 0x40], ecx
        mov ecx, dword ptr [edi + 0x24]
        add eax, -1
        push 0xaeaeae
        add ecx, 0x1b4
        push esi
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x44], edx
        mov dword ptr [esp + 0x4c], edx
        mov dword ptr [esp + 0x50], eax
        call ext_0041A790
        mov ecx, dword ptr [esi + 0x4]
        mov edi, eax
        push 0x4
        lea eax, [esp + 0x28]
        push eax
        push ecx
        call dword ptr [mem_009240A4]
        push edi
        mov ecx, esi
        call ext_006A610C
        pop esi
L_ret:
        pop edi
        add esp, 0x3c
        ret 0x8
    }
}

extern "C" void ext_00492520();
extern "C" void ext_00492550();
extern "C" void ext_00494300();
extern "C" void ext_00495420();
extern "C" void ext_0052F600();
extern "C" void ext_00584A10();
extern "C" void ext_00594000();
extern "C" void ext_006A6E9E();
extern "C" void ext_006AD940();
extern "C" int mem_00925134;
extern "C" int mem_00925694;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

// [0x00451D30] sub_00451D30 (940 bytes)
extern "C" __declspec(naked) void __fastcall fn_00451D30(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87e1d6
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x80
        push esi
        push edi
        mov edi, dword ptr [esp + 0x98]
        test edi, edi
        mov esi, ecx
        je L_4520c3
        push ebp
        mov ebp, dword ptr [edi + 0x80]
        cmp ebp, dword ptr [edi + 0x84]
        jbe L_451d73
        call dword ptr [mem_00925134]
    L_451d73:
        push ebx
        mov ebx, dword ptr [mem_00925694]
    L_451d7a:
        mov eax, dword ptr [edi + 0x84]
        cmp dword ptr [edi + 0x80], eax
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x14], eax
        jbe L_451d9a
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x14]
    L_451d9a:
        cmp ebp, eax
        je L_4520c1
        cmp ebp, dword ptr [edi + 0x84]
        jb L_451db0
        call dword ptr [mem_00925134]
    L_451db0:
        mov eax, dword ptr [ebp]
        test eax, eax
        je L_4520ab
        push 0x0
        push 0xa30138
        push 0xa2e2bc
        push 0x0
        push eax
        call ext_006A6E9E
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je L_4520a4
        mov ecx, edi
        call ext_00584A10
        push eax
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FE0]
        lea eax, [esp + 0x3c]
        push 0x928b5d
        push eax
        mov dword ptr [esp + 0xa0], 0x0
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_45208f
        lea ecx, [esp + 0x3c]
        push ecx
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE0]
        lea ebp, [edi + 0x170]
        push 0x928b5d
        push ebp
        mov byte ptr [esp + 0xa0], 0x1
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_451e62
        push ebp
        lea edx, [esp + 0x5c]
        push 0xad2868
        push edx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov byte ptr [esp + 0x98], 0x2
        jmp L_451e82
    L_451e62:
        push 0x92ab78
        lea eax, [esp + 0x5c]
        push 0xad2868
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov byte ptr [esp + 0x98], 0x3
    L_451e82:
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x98], 0x1
        call dword ptr [mem_00924FF4]
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x14], ebp
        call ext_00492550
        test al, al
        je L_451ff9
        push 0x0
        mov ecx, ebp
        call ext_00492520
        mov ecx, dword ptr [esp + 0x14]
        push 0x1
        mov ebp, eax
        call ext_00492520
        test ebp, ebp
        mov dword ptr [esp + 0x10], eax
        je L_451ff9
        test eax, eax
        je L_451ff9
        mov ecx, dword ptr [esp + 0x14]
        call ext_0052F600
        cmp eax, ebp
        lea ecx, [esi + 0x78]
        jne L_451f3a
        mov edx, dword ptr [esp + 0x10]
        push edx
        call ext_00494300
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, edi
        call edx
        push eax
        lea ecx, [esi + 0x78]
        call ext_00495420
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00451CE0
        push ebp
        lea ecx, [esi + 0x78]
        mov dword ptr [esp + 0x18], eax
        call ext_00494300
        mov ebp, dword ptr [esp + 0x14]
        jmp L_451f6a
    L_451f3a:
        push ebp
        call ext_00494300
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, edi
        call eax
        push eax
        lea ecx, [esi + 0x78]
        call ext_00495420
        push eax
        push ebp
        mov ecx, esi
        call ext_00451CE0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        lea ecx, [esi + 0x78]
        mov ebp, eax
        call ext_00494300
    L_451f6a:
        test ebp, ebp
        je L_451fbc
        push 0x928b5d
        mov ecx, ebp
        call ext_00584A10
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_451fbc
        mov ecx, ebp
        call ext_00584A10
        push eax
        lea edx, [esp + 0x5c]
        push 0xad2868
        push edx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x9c], 0x4
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x58]
        jmp L_451feb
    L_451fbc:
        push 0x92ab78
        lea eax, [esp + 0x78]
        push 0xad2868
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x9c], 0x5
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x74]
    L_451feb:
        mov byte ptr [esp + 0x98], 0x1
        call dword ptr [mem_00924FF4]
    L_451ff9:
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x5b8]
        push eax
        push 0x0
        push 0x180
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x5b8]
        push 0x0
        push 0x0
        push 0x18b
        push edx
        call ebx
        push edi
        sub eax, 0x1
        push eax
        mov eax, dword ptr [esi + 0x5b8]
        push 0x19a
        push eax
        call ebx
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x98c]
        push eax
        push 0x0
        push 0x180
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x98c]
        push 0x0
        push 0x0
        push 0x18b
        push edx
        call ebx
        push edi
        sub eax, 0x1
        push eax
        mov eax, dword ptr [esi + 0x98c]
        push 0x19a
        push eax
        call ebx
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x98], 0x0
        call dword ptr [mem_00924FF4]
        mov ebp, dword ptr [esp + 0x1c]
    L_45208f:
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x98], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_4520a4:
        mov edi, dword ptr [esp + 0xa0]
    L_4520ab:
        cmp ebp, dword ptr [edi + 0x84]
        jb L_4520b9
        call dword ptr [mem_00925134]
    L_4520b9:
        add ebp, 0x4
        jmp L_451d7a
    L_4520c1:
        pop ebx
        pop ebp
    L_4520c3:
        mov ecx, dword ptr [esp + 0x88]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x8c
        ret 0x4
    }
}

// [0x00452830] sub_00452830 (1027 bytes)
extern "C" void ext_0044CF80();
extern "C" void ext_0044E020();
extern "C" void ext_0044E100();
extern "C" void ext_0044DA40();
extern "C" void ext_0044DA90();
extern "C" void ext_004512C0();
extern "C" void ext_00452100();
extern "C" void ext_0044F740();
extern "C" void ext_00430380();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A5E00();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925694;
extern "C" int mem_00925654;
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_00452830(void* self) {
    __asm {
        sub esp, 0ch
        push ebx
        xor bl, bl
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 74h], 0
        push edi
        mov byte ptr [esp + 0eh], bl
        mov byte ptr [esp + 0fh], bl
        mov byte ptr [esp + 10h], bl
        mov byte ptr [esp + 11h], bl
        mov byte ptr [esp + 13h], bl
        mov byte ptr [esp + 12h], bl
        je n_h
        push ebp
        call ext_0044CF80
        mov bl, al
        call ext_0044E020
        mov ecx, esi
        mov byte ptr [esp + 12h], al
        call ext_0044E100
        push 0
        push 0
        mov byte ptr [esp + 1bh], al
        mov eax, dword ptr [esi + 768h]
        push 190h
        push eax
        call dword ptr [mem_00925694]
        cmp eax, 1
        mov ecx, esi
        sete byte ptr [esp + 16h]
        call ext_0044DA40
        mov ecx, esi
        mov edi, eax
        call ext_0044DA90
        mov ebp, eax
        push ebp
        mov ecx, esi
        call ext_004512C0
        push edi
        mov ecx, esi
        mov dword ptr [esp + 1ch], eax
        call ext_00452100
        test edi, edi
        je n_a
        test ebp, ebp
        je n_a
        cmp edi, dword ptr [esp + 18h]
        je n_a
        cmp ebp, eax
        mov byte ptr [esp + 14h], 1
        jne n_b
    n_a:
        mov byte ptr [esp + 14h], 0
    n_b:
        test edi, edi
        pop ebp
        je n_c
        test eax, eax
        mov byte ptr [esp + 11h], 1
        jne n_d
    n_c:
        mov byte ptr [esp + 11h], 0
    n_d:
        mov ecx, esi
        call ext_0044F740
        test al, al
        je n_e
        cmp byte ptr [esi + 0a9h], 0
        sete al
        and byte ptr [esp + 10h], al
        and byte ptr [esp + 11h], al
    n_e:
        test bl, bl
        je n_f
        cmp byte ptr [esp + 0eh], 0
        je n_f
        cmp byte ptr [esp + 0fh], 0
        je n_f
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430380
        test al, al
        mov byte ptr [esp + 13h], 1
        je n_g
    n_f:
        mov byte ptr [esp + 13h], 0
    n_g:
        test bl, bl
        je n_h
        cmp byte ptr [esp + 0eh], 0
        je n_h
        mov eax, 1
        jmp n_i
    n_h:
        xor eax, eax
    n_i:
        push eax
        lea ecx, [esi + 0ach]
        call ext_006A5FDA
        test bl, bl
        je n_j
        cmp byte ptr [esp + 0eh], 0
        je n_j
        mov eax, 1
        jmp n_k
    n_j:
        xor eax, eax
    n_k:
        push eax
        lea ecx, [esi + 598h]
        call ext_006A5FDA
        test bl, bl
        je n_l
        cmp byte ptr [esp + 0eh], 0
        je n_l
        mov eax, 1
        jmp n_m
    n_l:
        xor eax, eax
    n_m:
        push eax
        lea ecx, [esi + 5fch]
        call ext_006A5FDA
        test bl, bl
        je n_n
        cmp byte ptr [esp + 0eh], 0
        je n_n
        cmp byte ptr [esp + 10h], 0
        je n_n
        mov eax, 1
        jmp n_o
    n_n:
        xor eax, eax
    n_o:
        push eax
        lea ecx, [esi + 660h]
        call ext_006A5FDA
        test bl, bl
        je n_p
        cmp byte ptr [esp + 0eh], 0
        je n_p
        cmp byte ptr [esp + 11h], 0
        je n_p
        mov eax, 1
        jmp n_q
    n_p:
        xor eax, eax
    n_q:
        push eax
        lea ecx, [esi + 6d4h]
        call ext_006A5FDA
        test bl, bl
        je n_r
        cmp byte ptr [esp + 0eh], 0
        je n_r
        mov eax, 1
        jmp n_s
    n_r:
        xor eax, eax
    n_s:
        push eax
        lea ecx, [esi + 748h]
        call ext_006A5FDA
        test bl, bl
        je n_t
        cmp byte ptr [esp + 0eh], 0
        je n_t
        mov eax, 1
        jmp n_u
    n_t:
        xor eax, eax
    n_u:
        push eax
        lea ecx, [esi + 79ch]
        call ext_006A5FDA
        test bl, bl
        je n_v
        cmp byte ptr [esp + 0eh], 0
        je n_v
        cmp byte ptr [esp + 12h], 0
        je n_v
        mov eax, 1
        jmp n_w
    n_v:
        xor eax, eax
    n_w:
        push eax
        lea ecx, [esi + 810h]
        call ext_006A5FDA
        test bl, bl
        je n_x
        cmp byte ptr [esp + 0eh], 0
        je n_x
        cmp byte ptr [esp + 0fh], 0
        je n_x
        mov eax, 1
        jmp n_y
    n_x:
        xor eax, eax
    n_y:
        push eax
        lea ecx, [esi + 884h]
        call ext_006A5FDA
        test bl, bl
        je n_z
        cmp byte ptr [esp + 0eh], 0
        je n_z
        cmp byte ptr [esp + 0fh], 0
        je n_z
        cmp byte ptr [esp + 12h], 0
        je n_z
        mov eax, 1
        jmp n_aa
    n_z:
        xor eax, eax
    n_aa:
        push eax
        lea ecx, [esi + 8f8h]
        call ext_006A5FDA
        test bl, bl
        je n_ab
        cmp byte ptr [esp + 0eh], 0
        je n_ab
        mov eax, 1
        jmp n_ac
    n_ab:
        xor eax, eax
    n_ac:
        push eax
        lea ecx, [esi + 96ch]
        call ext_006A5FDA
        test bl, bl
        je n_ad
        cmp byte ptr [esp + 0eh], 0
        je n_ad
        cmp byte ptr [esp + 0fh], 0
        je n_ad
        mov eax, 1
        jmp n_ae
    n_ad:
        xor eax, eax
    n_ae:
        push eax
        lea ecx, [esi + 9c0h]
        call ext_006A5FDA
        test bl, bl
        je n_af
        cmp byte ptr [esp + 0eh], 0
        je n_af
        cmp byte ptr [esp + 0fh], 0
        je n_af
        mov eax, 1
        jmp n_ag
    n_af:
        xor eax, eax
    n_ag:
        push eax
        lea ecx, [esi + 0a14h]
        call ext_006A5FDA
        test bl, bl
        je n_ah
        cmp byte ptr [esp + 0eh], 0
        je n_ah
        cmp byte ptr [esp + 0fh], 0
        je n_ah
        mov eax, 1
        jmp n_ai
    n_ah:
        xor eax, eax
    n_ai:
        push eax
        lea ecx, [esi + 0a68h]
        call ext_006A5FDA
        test bl, bl
        je n_aj
        cmp byte ptr [esp + 0eh], 0
        je n_aj
        cmp byte ptr [esp + 0fh], 0
        je n_aj
        mov eax, 1
        jmp n_ak
    n_aj:
        xor eax, eax
    n_ak:
        push eax
        lea ecx, [esi + 0abch]
        call ext_006A5FDA
        test bl, bl
        je n_al
        cmp byte ptr [esp + 0eh], 0
        je n_al
        cmp byte ptr [esp + 0fh], 0
        je n_al
        mov eax, 1
        jmp n_am
    n_al:
        xor eax, eax
    n_am:
        push eax
        lea ecx, [esi + 0b10h]
        call ext_006A5FDA
        test bl, bl
        je n_an
        cmp byte ptr [esp + 0eh], 0
        je n_an
        cmp byte ptr [esp + 0fh], 0
        je n_an
        mov eax, 1
        jmp n_ao
    n_an:
        xor eax, eax
    n_ao:
        push eax
        lea ecx, [esi + 0b64h]
        call ext_006A5FDA
        test bl, bl
        je n_ap
        cmp byte ptr [esp + 0eh], 0
        je n_ap
        cmp byte ptr [esp + 0fh], 0
        je n_ap
        mov eax, 1
        jmp n_aq
    n_ap:
        xor eax, eax
    n_aq:
        push eax
        lea ecx, [esi + 0bb8h]
        call ext_006A5FDA
        movzx ecx, byte ptr [esp + 13h]
        push ecx
        lea ecx, [esi + 0c0ch]
        call ext_006A5FDA
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        push 0
        push 0A2E4A4h
        push 0A2E034h
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 14h
        test esi, esi
        je n_end
        mov edx, dword ptr [esi + 20h]
        mov edi, dword ptr [mem_00925694]
        push -1
        push 0
        push 0b1h
        push edx
        call edi
        mov eax, dword ptr [esi + 20h]
        push 0
        push 0
        push 0b7h
        push eax
        call edi
    n_end:
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ret
    }
}

extern "C" void ext_0044F740();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A6DE0();
extern "C" int mem_0092566C;
extern "C" int mem_009357C0;
extern "C" int mem_00993828;
extern "C" int mem_00925640;
extern "C" int mem_0092564C;
extern "C" int mem_00925688;

// [0x00450630] sub_00450630 (1093 bytes)
extern "C" __declspec(naked) void __fastcall fn_00450630(void* self) {
    __asm {
        sub esp, 0x8c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [mem_0092566C]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0xcc]
        lea eax, [esp + 0x44]
        push eax
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x120]
        lea edx, [esp + 0x34]
        push edx
        push eax
        call esi
        mov edx, dword ptr [edi + 0x61c]
        lea ecx, [esp + 0x64]
        push ecx
        push edx
        call esi
        mov ecx, dword ptr [edi + 0x174]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x5b8]
        lea edx, [esp + 0x74]
        push edx
        push eax
        call esi
        mov edx, dword ptr [edi + 0x680]
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call esi
        mov ecx, dword ptr [edi + 0x6f4]
        lea eax, [esp + 0x8c]
        push eax
        push ecx
        call esi
        mov eax, dword ptr [edi + 0xca0]
        lea edx, [esp + 0x54]
        push edx
        push eax
        call esi
        mov esi, dword ptr [esp + 0x50]
        mov ebx, dword ptr [esp + 0x48]
        mov ecx, esi
        sub ecx, ebx
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        fmul qword ptr [mem_009357C0]
        call ext_006A6DE0
        mov edx, dword ptr [esp + 0x18]
        sub edx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x88], eax
        sub edx, dword ptr [esp + 0x40]
        mov ecx, edi
        sub edx, dword ptr [esp + 0x30]
        sub edx, esi
        sub edx, eax
        mov eax, dword ptr [esp + 0xa4]
        add edx, ebx
        add edx, dword ptr [esp + 0x38]
        add edx, dword ptr [esp + 0x28]
        lea esi, [edx + eax - 0x20]
        mov dword ptr [esp + 0x10], esi
        call ext_0044F740
        test al, al
        je L_00450723
        mov ecx, dword ptr [esp + 0x58]
        sub ecx, dword ptr [esp + 0x60]
        lea edx, [esi + ecx - 0x4]
        mov dword ptr [esp + 0x10], edx
    L_00450723:
        fild dword ptr [esp + 0x10]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        call ext_006A6DE0
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0xa0]
        add eax, -0xc
        mov dword ptr [esp + 0x84], eax
        fimul dword ptr [esp + 0x84]
        call ext_006A6DE0
        mov ecx, dword ptr [esp + 0x50]
        sub ecx, dword ptr [esp + 0x48]
        mov esi, dword ptr [mem_00925640]
        push ecx
        mov ebp, eax
        lea ebx, [ebp + ebp + 4]
        push ebx
        push 0
        push 0
        lea edx, [esp + 0x54]
        push edx
        call esi
        mov eax, dword ptr [esp + 0x40]
        sub eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x3c]
        sub ecx, dword ptr [esp + 0x34]
        push eax
        push ecx
        push 0
        push 0
        lea edx, [esp + 0x44]
        push edx
        call esi
        mov eax, dword ptr [esp + 0x10]
        push eax
        push ebx
        push 0
        push 0
        lea ecx, [esp + 0x74]
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x30]
        sub edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x2c]
        sub eax, dword ptr [esp + 0x24]
        push edx
        push eax
        push 0
        push 0
        lea ecx, [esp + 0x34]
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x10]
        push edx
        push ebx
        push 0
        push 0
        lea eax, [esp + 0x84]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x20]
        sub ecx, dword ptr [esp + 0x18]
        lea edx, [esp + 0x14]
        push ecx
        push ebp
        push 0
        push 0
        push edx
        call esi
        mov eax, dword ptr [esp + 0x20]
        sub eax, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x8c]
        push eax
        push ebp
        push 0
        push 0
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x60]
        sub edx, dword ptr [esp + 0x58]
        push edx
        push ebx
        push 0
        push 0
        lea eax, [esp + 0x64]
        push eax
        call esi
        mov esi, dword ptr [mem_0092564C]
        push 0
        push 4
        lea ecx, [esp + 0x4c]
        push ecx
        call esi
        push 0
        push 4
        lea edx, [esp + 0x3c]
        push edx
        call esi
        push 0
        push 4
        lea eax, [esp + 0x6c]
        push eax
        call esi
        push 0
        push 4
        lea ecx, [esp + 0x2c]
        push ecx
        call esi
        push 0
        push 4
        lea edx, [esp + 0x7c]
        push edx
        call esi
        push 0
        push 4
        lea eax, [esp + 0x1c]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x1c]
        push 0
        add ecx, 4
        push ecx
        lea edx, [esp + 0x94]
        push edx
        call esi
        push 0
        push 4
        lea eax, [esp + 0x5c]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x88]
        push ecx
        push 0
        lea edx, [esp + 0x4c]
        push edx
        call esi
        mov eax, dword ptr [esp + 0x50]
        add eax, 8
        push eax
        push 0
        lea ecx, [esp + 0x2c]
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x30]
        add edx, 4
        push edx
        push 0
        lea eax, [esp + 0x7c]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x80]
        add ecx, 8
        push ecx
        push 0
        lea edx, [esp + 0x3c]
        push edx
        call esi
        mov eax, dword ptr [esp + 0x40]
        add eax, 4
        push eax
        push 0
        lea ecx, [esp + 0x6c]
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x70]
        add edx, 4
        push edx
        push 0
        lea eax, [esp + 0x1c]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x70]
        add ecx, 4
        push ecx
        push 0
        lea edx, [esp + 0x94]
        push edx
        call esi
        mov eax, dword ptr [esp + 0x20]
        add eax, 4
        push eax
        push 0
        lea ecx, [esp + 0x5c]
        push ecx
        call esi
        mov eax, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x50]
        mov ecx, dword ptr [esp + 0x44]
        push 1
        sub edx, eax
        push edx
        mov edx, dword ptr [esp + 0x54]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0xac]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [esp + 0x3c]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x3c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x100]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x68]
        mov ecx, dword ptr [esp + 0x70]
        mov edx, dword ptr [esp + 0x6c]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x6c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x5fc]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x2c]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x154]
        call ext_006A5E5A
        mov ecx, dword ptr [esp + 0x80]
        mov eax, dword ptr [esp + 0x78]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x7c]
        mov edx, dword ptr [esp + 0x84]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x598]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x660]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x90]
        mov ecx, dword ptr [esp + 0x98]
        mov edx, dword ptr [esp + 0x94]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x94]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0x6d4]
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x58]
        mov ecx, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x5c]
        push 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x5c]
        sub edx, ecx
        push edx
        push eax
        push ecx
        lea ecx, [edi + 0xc80]
        call ext_006A5E5A
        mov eax, dword ptr [edi + 0x61c]
        mov esi, dword ptr [mem_00925688]
        push 1
        push 0
        push eax
        call esi
        mov ecx, dword ptr [edi + 0x5b8]
        push 1
        push 0
        push ecx
        call esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8c
        ret 8
    }
}

// [0x00450B00] sub_00450B00 (1504 bytes)
extern "C" void ext_0044CF40();
extern "C" void ext_0044CF60();
extern "C" void ext_00450000();
extern "C" void ext_0056B670();
extern "C" void ext_00664840();
extern "C" void ext_006A5F50();
extern "C" int mem_00925694;
extern "C" int mem_00A300B0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00450B00(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        push -1
        push 0x87e156
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xa4
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push -1
        mov esi, ecx
        mov eax, dword ptr [esi + 0x9e0]
        push 0x14e
        push eax
        call edi
        lea ecx, [esi + 0xa14]
        push 0x928b5d
        call ext_006A5F50
        lea ecx, [esi + 0xa68]
        push 0x928b5d
        call ext_006A5F50
        lea ecx, [esi + 0xabc]
        push 0x928b5d
        call ext_006A5F50
        lea ecx, [esi + 0xb10]
        push 0x928b5d
        call ext_006A5F50
        lea ecx, [esi + 0xb64]
        push 0x928b5d
        call ext_006A5F50
        lea ecx, [esi + 0xbb8]
        push 0x928b5d
        mov dword ptr [esp + 0x30], ecx
        call ext_006A5F50
        fldz
        mov ecx, dword ptr [esi + 0x98c]
        fst dword ptr [esp + 0x38]
        push 0x0
        fst dword ptr [esp + 0x38]
        push 0x0
        fst dword ptr [esp + 0x38]
        push 0x190
        fst dword ptr [esp + 0x50]
        mov ebp, 0x7
        fst dword ptr [esp + 0x4c]
        push ecx
        fstp dword ptr [esp + 0x4c]
        mov dword ptr [esp + 0x34], ebp
        call edi
        mov edx, dword ptr [esi + 0x768]
        cmp eax, 0x1
        setg byte ptr [esp + 0x1c]
        xor ebx, ebx
        push ebx
        push ebx
        push 0x18b
        push edx
        mov byte ptr [esp + 0x2b], 0x0
        mov byte ptr [esp + 0x2d], 0x0
        mov byte ptr [esp + 0x2e], 0x0
        mov byte ptr [esp + 0x2f], 0x0
        mov byte ptr [esp + 0x30], 0x0
        mov byte ptr [esp + 0x31], 0x0
        mov byte ptr [esp + 0x32], 0x0
        mov byte ptr [esp + 0x33], 0x0
        call edi
        test eax, eax
        jle L4510CA
L450C22:
        mov eax, dword ptr [esi + 0x768]
        push 0x0
        push ebx
        push 0x187
        push eax
        call edi
        test eax, eax
        je L450E54
        mov ecx, dword ptr [esi + 0x98c]
        xor ebp, ebp
        push ebp
        push ebp
        push 0x18b
        push ecx
        call edi
        test eax, eax
        jle L450E50
L450C55:
        mov edx, dword ptr [esi + 0x98c]
        push 0x0
        push ebp
        push 0x187
        push edx
        call edi
        test eax, eax
        je L450E33
        push ebp
        push ebx
        mov ecx, esi
        call ext_00450000
        mov ecx, eax
        test ecx, ecx
        je L450E33
        cmp byte ptr [esp + 0x1b], 0x0
        jne L450CD8
        fld dword ptr [ecx + 0x158]
        mov eax, dword ptr [ecx + 0x154]
        fstp dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x24], eax
        fld dword ptr [ecx + 0x15c]
        mov byte ptr [esp + 0x1b], 0x1
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ecx + 0x160]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [ecx + 0x164]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [ecx + 0x168]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [ecx + 0x16c]
        fstp dword ptr [esp + 0x44]
        jmp L450E33
L450CD8:
        mov edx, dword ptr [esp + 0x24]
        cmp dword ptr [ecx + 0x154], edx
        je L450CE9
        mov byte ptr [esp + 0x1d], 0x1
L450CE9:
        fld dword ptr [ecx + 0x158]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450D20
        mov byte ptr [esp + 0x1e], 0x1
L450D20:
        fld dword ptr [ecx + 0x15c]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x4c]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450D57
        mov byte ptr [esp + 0x1f], 0x1
L450D57:
        fld dword ptr [ecx + 0x160]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x50]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450D8E
        mov byte ptr [esp + 0x20], 0x1
L450D8E:
        fld dword ptr [ecx + 0x164]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x54]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450DC5
        mov byte ptr [esp + 0x21], 0x1
L450DC5:
        fld dword ptr [ecx + 0x168]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x58]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450DFC
        mov byte ptr [esp + 0x22], 0x1
L450DFC:
        fld dword ptr [ecx + 0x16c]
        sub esp, 0x18
        fstp dword ptr [esp + 0x40]
        fld qword ptr [mem_00A300B0]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x5c]
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 0x18
        test al, al
        jne L450E33
        mov byte ptr [esp + 0x23], 0x1
L450E33:
        mov eax, dword ptr [esi + 0x98c]
        push 0x0
        push 0x0
        push 0x18b
        push eax
        add ebp, 0x1
        call edi
        cmp ebp, eax
        jl L450C55
L450E50:
        mov ebp, dword ptr [esp + 0x24]
L450E54:
        mov ecx, dword ptr [esi + 0x768]
        push 0x0
        push 0x0
        push 0x18b
        push ecx
        add ebx, 0x1
        call edi
        cmp ebx, eax
        jl L450C22
        cmp byte ptr [esp + 0x1b], 0x0
        je L4510CA
        cmp byte ptr [esp + 0x1d], 0x0
        jne L450E94
        mov edx, dword ptr [esi + 0x9e0]
        push 0x0
        push ebp
        push 0x14e
        push edx
        call edi
L450E94:
        cmp byte ptr [esp + 0x1e], 0x0
        jne L450EF9
        push ebp
        mov ecx, esi
        call ext_0044CF40
        test al, al
        mov bl, byte ptr [esp + 0x1c]
        jne L450EAF
        test bl, bl
        je L450EFD
L450EAF:
        fld dword ptr [esp + 0x30]
        push ecx
        lea eax, [esp + 0x4c]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xa14]
        call ext_006A5F50
        or edi, -1
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
        jmp L450F00
L450EF9:
        mov bl, byte ptr [esp + 0x1c]
L450EFD:
        or edi, -1
L450F00:
        cmp byte ptr [esp + 0x1f], 0x0
        jne L450F5C
        push ebp
        mov ecx, esi
        call ext_0044CF40
        test al, al
        jne L450F17
        test bl, bl
        je L450F5C
L450F17:
        fld dword ptr [esp + 0x34]
        push ecx
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xa68]
        call ext_006A5F50
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
L450F5C:
        cmp byte ptr [esp + 0x20], 0x0
        jne L450FB8
        push ebp
        mov ecx, esi
        call ext_0044CF40
        test al, al
        jne L450F73
        test bl, bl
        je L450FB8
L450F73:
        fld dword ptr [esp + 0x38]
        push ecx
        lea edx, [esp + 0x4c]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xabc]
        call ext_006A5F50
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
L450FB8:
        cmp byte ptr [esp + 0x21], 0x0
        jne L451014
        push ebp
        mov ecx, esi
        call ext_0044CF60
        test al, al
        jne L450FCF
        test bl, bl
        je L451014
L450FCF:
        fld dword ptr [esp + 0x3c]
        push ecx
        lea eax, [esp + 0x4c]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x3
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xb10]
        call ext_006A5F50
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
L451014:
        cmp byte ptr [esp + 0x22], 0x0
        jne L451070
        push ebp
        mov ecx, esi
        call ext_0044CF60
        test al, al
        jne L45102B
        test bl, bl
        je L451070
L45102B:
        fld dword ptr [esp + 0x40]
        push ecx
        lea ecx, [esp + 0x4c]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x4
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xb64]
        call ext_006A5F50
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
L451070:
        cmp byte ptr [esp + 0x23], 0x0
        jne L4510CA
        push ebp
        mov ecx, esi
        call ext_0044CF60
        test al, al
        jne L451087
        test bl, bl
        je L4510CA
L451087:
        fld dword ptr [esp + 0x44]
        push ecx
        lea edx, [esp + 0x68]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0xbc], 0x5
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        call ext_006A5F50
        lea ecx, [esp + 0x64]
        mov dword ptr [esp + 0xbc], edi
        call dword ptr [mem_00924FF4]
L4510CA:
        mov ecx, dword ptr [esp + 0xb4]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00452EA0] sub_00452EA0 (233 bytes)
extern "C" void ext_00450000();
extern "C" void ext_00450B00();
extern "C" void ext_005AA830();
extern "C" void ext_00452830();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00452EA0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push ebp
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x9e0]
        push 0x147
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x768]
        xor ebp, ebp
        push ebp
        push ebp
        push 0x18b
        push ecx
        mov dword ptr [esp + 0x1c], eax
        call ebx
        test eax, eax
        jle tail_common
        push edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    outer_loop:
        mov edx, dword ptr [esi + 0x768]
        push 0
        push ebp
        push 0x187
        push edx
        call ebx
        test eax, eax
        je outer_next
        mov eax, dword ptr [esi + 0x98c]
        xor edi, edi
        push edi
        push edi
        push 0x18b
        push eax
        call ebx
        test eax, eax
        jle outer_next
        jmp inner_loop
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    inner_loop:
        mov ecx, dword ptr [esi + 0x98c]
        push 0
        push edi
        push 0x187
        push ecx
        call ebx
        test eax, eax
        je inner_next
        push edi
        push ebp
        mov ecx, esi
        call ext_00450000
        test eax, eax
        je inner_next
        mov edx, dword ptr [esp + 0x10]
        push edx
        mov ecx, eax
        call ext_005AA830
    inner_next:
        mov eax, dword ptr [esi + 0x98c]
        push 0
        push 0
        push 0x18b
        push eax
        add edi, 1
        call ebx
        cmp edi, eax
        jl inner_loop
    outer_next:
        mov ecx, dword ptr [esi + 0x768]
        push 0
        push 0
        push 0x18b
        push ecx
        add ebp, 1
        call ebx
        cmp ebp, eax
        jl outer_loop
        pop edi
    tail_common:
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 4
        jmp ext_00452830
    }
}

// [0x00452C40] sub_00452C40 (234 bytes)
extern "C" void ext_00450B00();
extern "C" void ext_00452100();
extern "C" void ext_00452830();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00452C40(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        call    ext_00450B00
        mov     ecx, esi
        pop     esi
        jmp     ext_00452830

        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [mem_00925694]
        push    0
        push    0
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x5b8]
        push    0x188
        push    eax
        call    edi
        mov     ebx, eax
        test    ebx, ebx
        jl      L_ret
        mov     ecx, dword ptr [esi + 0x5b8]
        push    0
        push    0
        push    0x18b
        push    ecx
        call    edi
        sub     eax, 1
        cmp     ebx, eax
        jg      L_ret
        mov     edx, dword ptr [esi + 0x5b8]
        push    0
        push    ebx
        push    0x199
        push    edx
        call    edi
        test    eax, eax
        je      L_pop_edi
        push    ebp
        push    eax
        mov     ecx, esi
        call    ext_00452100
        mov     ebp, eax
        test    ebp, ebp
        je      L_pop_ebp
        mov     eax, dword ptr [esi + 0x61c]
        xor     ebx, ebx
        push    ebx
        push    ebx
        push    0x18b
        push    eax
        call    edi
        sub     eax, 1
        js      L_pop_ebp
        nop
    L_loop:
        mov     ecx, dword ptr [esi + 0x61c]
        push    0
        push    ebx
        push    0x199
        push    ecx
        call    edi
        cmp     eax, ebp
        push    0
        je      L_found
        mov     edx, dword ptr [esi + 0x61c]
        push    0
        push    0x18b
        push    edx
        add     ebx, 1
        call    edi
        sub     eax, 1
        cmp     ebx, eax
        jle     L_loop
        pop     ebp
        pop     edi
        mov     ecx, esi
        pop     esi
        pop     ebx
        jmp     ext_00452830
    L_found:
        mov     eax, dword ptr [esi + 0x61c]
        push    ebx
        push    0x186
        push    eax
        call    edi
    L_pop_ebp:
        pop     ebp
    L_pop_edi:
        pop     edi
        mov     ecx, esi
        pop     esi
        pop     ebx
        jmp     ext_00452830
    L_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}

extern "C" void ext_005AA850();
extern "C" void ext_005AA890();
extern "C" void ext_006A6C99();
extern "C" void ext_006A6D5C();

// [0x00452F90] sub_00452F90 (658 bytes)
extern "C" __declspec(naked) void __fastcall fn_00452F90(void* self) {
    __asm {
        push    -1
        push    0x87e2d8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 34h
        mov     eax, dword ptr [mem_009242F4]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [mem_009242FC]
        push    ecx
        push    3
        push    4
        lea     edx, [esp + 2ch]
        push    edx
        call    ext_006A6C99
        mov     eax, dword ptr [mem_009242F4]
        mov     ecx, dword ptr [mem_009242FC]
        push    eax
        push    ecx
        push    3
        push    4
        lea     edx, [esp + 20h]
        push    edx
        mov     dword ptr [esp + 5ch], 0
        call    ext_006A6C99
        lea     eax, [esp + 1ch]
        push    eax
        lea     ecx, [esi + 0a14h]
        mov     byte ptr [esp + 4ch], 1
        call    ext_006A5F4A
        lea     ecx, [esp + 20h]
        push    ecx
        lea     ecx, [esi + 0a68h]
        call    ext_006A5F4A
        lea     edx, [esp + 24h]
        push    edx
        lea     ecx, [esi + 0abch]
        call    ext_006A5F4A
        lea     eax, [esp + 10h]
        push    eax
        lea     ecx, [esi + 0b10h]
        call    ext_006A5F4A
        lea     ecx, [esp + 14h]
        push    ecx
        lea     ecx, [esi + 0b64h]
        call    ext_006A5F4A
        lea     edx, [esp + 18h]
        push    edx
        lea     ecx, [esi + 0bb8h]
        call    ext_006A5F4A
        fldz
        fst     dword ptr [esp + 30h]
        lea     ecx, [esp + 1ch]
        fst     dword ptr [esp + 2ch]
        fst     dword ptr [esp + 28h]
        fst     dword ptr [esp + 3ch]
        fst     dword ptr [esp + 38h]
        fstp    dword ptr [esp + 34h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 2ch]
        add     esp, 4
        lea     ecx, [esp + 20h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 30h]
        add     esp, 4
        lea     ecx, [esp + 24h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 34h]
        add     esp, 4
        lea     ecx, [esp + 10h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 38h]
        add     esp, 4
        lea     ecx, [esp + 14h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 3ch]
        add     esp, 4
        lea     ecx, [esp + 18h]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251F0]
        fstp    dword ptr [esp + 40h]
        mov     eax, dword ptr [esi + 768h]
        mov     ebp, dword ptr [mem_00925694]
        add     esp, 4
        xor     ebx, ebx
        push    ebx
        push    ebx
        push    18bh
        push    eax
        mov     dword ptr [esp + 1ch], ebx
        call    ebp
        test    eax, eax
        jle     L_end
        push    edi
        nop
    L_outer:
        mov     ecx, dword ptr [esi + 768h]
        push    0
        push    ebx
        push    187h
        push    ecx
        call    ebp
        test    eax, eax
        je      L_next_outer
        mov     edx, dword ptr [esi + 98ch]
        xor     edi, edi
        push    edi
        push    edi
        push    18bh
        push    edx
        call    ebp
        test    eax, eax
        jle     L_next_outer
        jmp     L_inner
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_inner:
        mov     eax, dword ptr [esi + 98ch]
        push    0
        push    edi
        push    187h
        push    eax
        call    ebp
        test    eax, eax
        je      L_skip
        push    edi
        push    ebx
        mov     ecx, esi
        call    ext_00450000
        mov     ebx, eax
        test    ebx, ebx
        je      L_skip
        lea     ecx, [esp + 2ch]
        push    ecx
        mov     ecx, ebx
        call    ext_005AA850
        lea     edx, [esp + 38h]
        push    edx
        mov     ecx, ebx
        call    ext_005AA890
    L_skip:
        mov     eax, dword ptr [esi + 98ch]
        push    0
        push    0
        push    18bh
        push    eax
        add     edi, 1
        call    ebp
        cmp     edi, eax
        mov     ebx, dword ptr [esp + 10h]
        jl      L_inner
    L_next_outer:
        mov     ecx, dword ptr [esi + 768h]
        push    0
        push    0
        push    18bh
        add     ebx, 1
        push    ecx
        mov     dword ptr [esp + 20h], ebx
        call    ebp
        cmp     ebx, eax
        jl      L_outer
        pop     edi
    L_end:
        mov     ecx, esi
        call    ext_00450B00
        mov     ecx, esi
        call    ext_00452830
        mov     edx, dword ptr [mem_009242F4]
        push    edx
        push    3
        push    4
        lea     eax, [esp + 1ch]
        push    eax
        mov     byte ptr [esp + 58h], 0
        call    ext_006A6D5C
        mov     ecx, dword ptr [mem_009242F4]
        push    ecx
        push    3
        push    4
        lea     edx, [esp + 28h]
        push    edx
        mov     dword ptr [esp + 58h], 0ffffffffh
        call    ext_006A6D5C
        mov     ecx, dword ptr [esp + 40h]
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 40h
        ret
    }
}

extern "C" void ext_00452F90();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925654;
extern "C" int mem_00A2E4A4;
extern "C" int mem_00A2E034;

// [0x00453C80] sub_00453C80 (71 bytes)
extern "C" void __fastcall fn_00453C80(void* self, int edx_unused, int a1, int a2, int a3) {
    if (a1 == 0xd) {
        void* focus = ((void* (__stdcall*)())mem_00925654)();
        void* wnd = ((void* (__stdcall*)(void*))ext_006A5E00)(focus);
        if (((void* (__cdecl*)(void*, int, void*, void*, int))ext_006A6E9E)(wnd, 0, &mem_00A2E034, &mem_00A2E4A4, 0)) {
            ((void (__thiscall*)(void*))ext_00452F90)(self);
            return;
        }
    }
    ((void (__thiscall*)(void*))ext_006A5EA8)(self);
}

extern "C" void ext_0052ADA0();
extern "C" void ext_00669E40();
extern "C" int mem_00AED9D0;
extern "C" int mem_00A9ED90;
extern "C" int mem_00A9ED60;
extern "C" int mem_009324A4;

// [0x0045D270] sub_0045D270 (1588 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045D270(void* self) {
    __asm {
        push -0x1
        push 0x87fbf3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00AED9D0]
        mov esi, ecx
        push 0x934448
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x0
        call ext_0052ADA0
        or ebx, -0x1
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2b8], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9346b8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x1
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xc4], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934678
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x2
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xc8], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934638
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x3
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xcc], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9344a8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x4
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xd0], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934474
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x5
        call ext_0052ADA0
        mov dword ptr [esi + 0xd4], eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934608
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x6
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xd8], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934528
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x7
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x288], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [mem_00A9ED90]
        push edx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x8
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x28c], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x93455c
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x9
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2c0], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x93458c
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xa
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2bc], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9344cc
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xb
        call ext_0052ADA0
        mov dword ptr [esi + 0x2c8], eax
        mov dword ptr [esp + 0x4c], ebx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FF4]
        push 0x9344cc
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xc
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2cc], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9347e4
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xd
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2c4], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9345d8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xe
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xdc], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x937f18
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0xf
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xe0], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x937f08
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x10
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0xe4], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9344f0
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x11
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2b4], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x9347b4
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x12
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x290], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934804
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x13
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x294], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x928d38
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x14
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x298], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00A9ED60]
        push ecx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x15
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x29c], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934884
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x16
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2a0], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x928d30
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x17
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2a4], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x93481c
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x18
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2a8], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x934860
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x19
        call ext_0052ADA0
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x2ac], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        push 0x928c00
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x50], 0x1a
        call ext_0052ADA0
        lea ecx, [esp + 0x28]
        mov dword ptr [esi + 0x2b0], eax
        mov dword ptr [esp + 0x4c], ebx
        call dword ptr [mem_00924FF4]
        fld dword ptr [mem_009324A4]
        mov ecx, dword ptr [esi + 0x2cc]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [esp]
        call ext_00669E40
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

// [0x00451140] sub_00451140 (53 bytes)
extern "C" void ext_0044CF90();
extern "C" void ext_0044E600();
extern "C" void ext_00450630();
extern "C" __declspec(naked) void __fastcall fn_00451140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xa8], 0x0
        je done
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        call ext_0044CF90
        push edi
        push ebx
        mov ecx, esi
        call ext_00450630
        push edi
        push ebx
        mov ecx, esi
        call ext_0044E600
        pop edi
        pop ebx
done:
        pop esi
        ret 0x8
    }
}

// [0x004510E0] sub_004510E0 (88 bytes)
extern "C" void ext_00450630();
extern "C" void ext_0044E600();
extern "C" int mem_0092566C;
extern "C" __declspec(naked) void __fastcall fn_004510E0(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xa8], 0x0
        je done
        mov ecx, dword ptr [esi + 0xd14]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov edx, dword ptr [esp + 0x10]
        sub edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        sub eax, dword ptr [esp + 0x4]
        push edx
        push eax
        mov ecx, esi
        call ext_00450630
        mov ecx, dword ptr [esp + 0x10]
        sub ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        sub edx, dword ptr [esp + 0x4]
        push ecx
        push edx
        mov ecx, esi
        call ext_0044E600
done:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0045C5C0] sub_0045C5C0 (34 bytes)
extern "C" void __fastcall ext_0045C2D0(void* self, int edx_unused, int a1, int a2);
extern "C" int (__stdcall *mem_0092568C)(void*);

extern "C" void __fastcall fn_0045C5C0(void* self, int edx_unused, int a1, int a2) {
    ext_0045C2D0(self, edx_unused, a1, a2);
    mem_0092568C(*(void**)((char*)self + 0x20));
}

// [0x0045C5F0] sub_0045C5F0 (43 bytes)
extern "C" void ext_0045C5C0();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0045C5F0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push 0xffff0000
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push 0x1101
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esp + 0x8]
        push 0
        push ecx
        mov ecx, esi
        call ext_0045C5C0
        pop esi
        ret 4
    }
}

// [0x0045D240] sub_0045D240 (39 bytes)
extern "C" void __fastcall ext_0045CC30(void* self, int edx_unused, int a1, int a2, int a3);
extern "C" int (__stdcall *mem_0092568C)(void*);

extern "C" int __fastcall fn_0045D240(void* self, int edx_unused, int a1, int a2) {
    ext_0045CC30(self, edx_unused, a1, a2, 0xffff0001);
    return mem_0092568C(*(void**)((char*)self + 0x20));
}

// [0x0045E830] sub_0045E830 (106 bytes)
extern "C" void __fastcall ext_0045E510(void* self, int edx_unused, int* out, int a1);
extern "C" void __cdecl ext_0045E4C0(int a0, int a1, int a2, int a3, int* out, int z);
extern "C" void __fastcall ext_005DF840(void* self, int edx_unused, int* p, int a0, int a1, int a2, int a3);

extern "C" __declspec(naked) int __fastcall fn_0045E830(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0045E510
        mov edi, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x24], 0x0
        mov edx, dword ptr [esp + 0x24]
        push edx
        lea eax, [esp + 0x28]
        push eax
        push edi
        push ebx
        push ebp
        push ecx
        call ext_0045E4C0
        mov edx, dword ptr [esp + 0x28]
        add esp, 0x18
        push edi
        push ebx
        push ebp
        push edx
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_005DF840
        mov eax, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0045E9D0] sub_0045E9D0 (132 bytes)
extern "C" void ext_0041A190();
extern "C" void ext_0045E830();
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __fastcall fn_0045E9D0(void* self, int edx_unused, int arg1) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je loc_45e9f9
        cmp edi, esi
        je loc_45e9ff
    loc_45e9f9:
        call dword ptr [mem_00925134]
    loc_45e9ff:
        mov ebp, dword ptr [esp + 0x14]
        cmp ebp, ebx
        je loc_45ea48
        test edi, edi
        jne loc_45ea11
        call dword ptr [mem_00925134]
    loc_45ea11:
        cmp ebp, dword ptr [edi + 0x4]
        jne loc_45ea1c
        call dword ptr [mem_00925134]
    loc_45ea1c:
        mov edx, dword ptr [ebp + 0x10]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x14], edx
        call ext_0045E830
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_0045E830
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x8
        ret 0x4
    loc_45ea48:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0045EA60] sub_0045EA60 (140 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0045EA60(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        lea esi, [ebx + 0xc]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebp, dword ptr [esi + 0x4]
        je loc_45ea8c
        cmp edi, esi
        je loc_45ea92
    loc_45ea8c:
        call dword ptr [mem_00925134]
    loc_45ea92:
        cmp dword ptr [esp + 0x14], ebp
        je loc_45eae0
        test edi, edi
        jne loc_45eaa2
        call dword ptr [mem_00925134]
    loc_45eaa2:
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [edi + 0x4]
        jne loc_45eab1
        call dword ptr [mem_00925134]
    loc_45eab1:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x10]
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], ecx
        push edx
        mov ecx, ebx
        call ext_0045E830
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_0045E830
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x8
        ret 0x4
    loc_45eae0:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0045F550] sub_0045F550 (146 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045F550(void* self) {
    __asm {
        push -1
        push 0x87fdb8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x0c
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x0c], esi
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        lea edi, [esi + 0x0c]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x20]
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], ebx
        call ext_005DF840
        mov eax, dword ptr [edi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 4
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_005DF840
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 4
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x0045FF80] sub_0045FF80 (59 bytes)
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0045FF80(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x938028
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AEC70
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

// [0x00453680] sub_00453680 (64 bytes)
extern "C" void ext_0044F780();
extern "C" void ext_00450B00();
extern "C" void ext_004510E0();
extern "C" void ext_00451BE0();
extern "C" void ext_00452120();
extern "C" void ext_00452580();
extern "C" void ext_00452830();

extern "C" __declspec(naked) void __fastcall fn_00453680(void* self) {
    __asm {
        push esi
        push 1
        mov esi, ecx
        call ext_00451BE0
        mov ecx, esi
        call ext_00452120
        mov ecx, esi
        call ext_00452580
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        call ext_0044F780
        mov ecx, esi
        call ext_00452830
        mov ecx, esi
        call ext_004510E0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092568C]
        pop esi
        ret
    }
}

// [0x00450AB0] sub_00450AB0 (66 bytes)
extern "C" void ext_0058F2F0();
extern "C" __declspec(naked) void* __fastcall fn_00450AB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_0058F2F0
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x935afc
        mov dword ptr [esi + 4], 0x935ab4
        mov dword ptr [esi + 8], 0x935a74
        mov dword ptr [esi + 0xc], 0x935a24
        mov dword ptr [esi + 0x150], 0x935a10
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00452120] sub_00452120 (1112 bytes)
extern "C" void ext_0042F050();
extern "C" void ext_0044DD70();
extern "C" void ext_00451D30();
extern "C" void ext_00492520();
extern "C" void ext_00492550();
extern "C" void ext_00494300();
extern "C" void ext_00495320();
extern "C" void ext_00495A20();
extern "C" void ext_00496CC0();
extern "C" void ext_0052F600();
extern "C" void ext_00594000();
extern "C" void ext_006AD940();
extern "C" int mem_00925694;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FCC;

extern "C" __declspec(naked) void __fastcall fn_00452120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87e26a
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xac
        push ebp
        mov ebp, dword ptr [mem_00925694]
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x5b8]
        push 0x184
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x98c]
        push 0
        push 0
        push 0x184
        push ecx
        call ebp
        cmp dword ptr [esi + 0x74], 0
        je L_452561
        push ebx
        push edi
        mov edi, dword ptr [mem_00924FD0]
        push 0xad2868
        lea edx, [esp + 0xa4]
        push 0xad2884
        push edx
        call edi
        push 0xad28a0
        push eax
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0xdc], 0
        call edi
        add esp, 0x18
        lea ecx, [esp + 0xa0]
        mov byte ptr [esp + 0xc4], 2
        call dword ptr [mem_00924FF4]
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ebx, eax
        mov ecx, ebx
        call ext_00492550
        test al, al
        je L_45246b
        push 0
        mov ecx, ebx
        call ext_00492520
        push 1
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call ext_00492520
        cmp dword ptr [esp + 0x10], 0
        je L_45246b
        test eax, eax
        je L_45246b
        mov ecx, ebx
        call ext_0052F600
        cmp eax, dword ptr [esp + 0x10]
        push 0xad2868
        push 0xad2884
        jne L_4522c5
        lea ecx, [esp + 0x8c]
        push ecx
        call edi
        push 0xad28bc
        push eax
        lea edx, [esp + 0x7c]
        push edx
        mov byte ptr [esp + 0xdc], 3
        call edi
        push 0xad2868
        push eax
        lea eax, [esp + 0x6c]
        push eax
        mov byte ptr [esp + 0xe8], 4
        call edi
        push 0xad28d8
        push eax
        lea ecx, [esp + 0x5c]
        mov bl, 5
        push ecx
        mov byte ptr [esp + 0xf4], bl
        call edi
        add esp, 0x30
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xc8], 6
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xc4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xc4], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xc4], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x84]
        jmp L_452364
    L_4522c5:
        lea edx, [esp + 0x38]
        push edx
        call edi
        push 0xad28d8
        push eax
        lea eax, [esp + 0x60]
        push eax
        mov byte ptr [esp + 0xdc], 7
        call edi
        push 0xad2868
        push eax
        lea ecx, [esp + 0x88]
        push ecx
        mov byte ptr [esp + 0xe8], 8
        call edi
        push 0xad28bc
        push eax
        lea edx, [esp + 0xb0]
        mov bl, 9
        push edx
        mov byte ptr [esp + 0xf4], bl
        call edi
        add esp, 0x30
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xc8], 0xa
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xc4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xc4], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xc4], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
    L_452364:
        mov byte ptr [esp + 0xc4], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esi + 0x5b8]
        push 0
        push 0x180
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x5b8]
        push 1
        push 0
        push 0
        push 0x18b
        push ecx
        call ebp
        sub eax, 1
        push eax
        lea ecx, [esi + 0x598]
        call ext_0042F050
        push 0xad2868
        lea edx, [esp + 0x34]
        push 0x92ab78
        push edx
        call dword ptr [mem_00924FCC]
        push 0xad28a0
        push eax
        lea eax, [esp + 0x60]
        push eax
        mov byte ptr [esp + 0xdc], 0xb
        call edi
        push 0xad2868
        push eax
        lea ecx, [esp + 0x88]
        push ecx
        mov byte ptr [esp + 0xe8], 0xc
        call edi
        push 0xad28a0
        push eax
        lea edx, [esp + 0xb0]
        mov bl, 0xd
        push edx
        mov byte ptr [esp + 0xf4], bl
        call edi
        add esp, 0x30
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xc8], 0xe
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xc4], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xc4], 0xc
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xc4], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xc4], 2
        call dword ptr [mem_00924FF4]
    L_45246b:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esi + 0x5b8]
        push 0
        push 0x180
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x5b8]
        push 1
        push 0
        push 0
        push 0x18b
        push ecx
        lea ebx, [esi + 0x598]
        call ebp
        sub eax, 1
        push eax
        mov ecx, ebx
        call ext_0042F050
        lea edi, [esi + 0x78]
        mov ecx, edi
        call ext_00495A20
        mov edx, dword ptr [esi + 0xa4]
        push edx
        mov ecx, edi
        call ext_00496CC0
        mov eax, dword ptr [esi + 0x74]
        push eax
        mov ecx, edi
        call ext_00494300
        mov ecx, dword ptr [esi + 0xa4]
        push ecx
        mov ecx, edi
        call ext_00495320
        push eax
        mov ecx, esi
        call ext_00451D30
        mov edx, dword ptr [esi + 0x5b8]
        push 0
        push -1
        push 0x186
        push edx
        call ebp
        mov eax, dword ptr [esi + 0x98c]
        push -1
        push 0
        push 0x185
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x98c]
        push 0
        push 0
        push 0x18b
        push ecx
        call ebp
        test eax, eax
        jle L_452530
        mov edx, dword ptr [esi + 0x98c]
        push 0
        push 1
        push 0x185
        push edx
        call ebp
    L_452530:
        push 1
        push ebx
        mov ecx, esi
        call ext_0044DD70
        push 0
        lea eax, [esi + 0x96c]
        push eax
        mov ecx, esi
        call ext_0044DD70
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc4], -1
        call dword ptr [mem_00924FF4]
        pop edi
        pop ebx
    L_452561:
        mov ecx, dword ptr [esp + 0xb4]
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0xb8
        ret
    }
}

// [0x00459000] sub_00459000 (82 bytes)
extern "C" void ext_00458DF0();
extern "C" void ext_00459100();
extern "C" __declspec(naked) void* __fastcall fn_00459000(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87f218
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00458DF0
        mov eax, dword ptr [esp + 0x18]
        push 0
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], 0x93786c
        call ext_00459100
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00459060] sub_00459060 (116 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_00AD3E34;
extern "C" int mem_00925694;
extern "C" __declspec(naked) int __fastcall fn_00459060(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [mem_00AD3E34]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push 0
        push 0
        push eax
        push esi
        call dword ptr [mem_00925694]
        test eax, eax
        jne L_done_00459060
        push 0x20
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_zero_00459060
        push esi
        mov ecx, eax
        call fn_00459000
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
L_zero_00459060:
        xor eax, eax
L_done_00459060:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00459100] sub_00459100 (152 bytes)
extern "C" void ext_00458E30();
extern "C" void ext_00459060();
extern "C" int mem_0092561C;
extern "C" int mem_0092422C;
extern "C" int mem_00924228;
extern "C" int mem_009255F0;
extern "C" int mem_00925644;
extern "C" int mem_00925650;
extern "C" __declspec(naked) int __fastcall fn_00459100(void* self) {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x1c], 0
        jne L_fail_00459100
        mov ebx, dword ptr [esp + 0xc]
        push ebx
        call dword ptr [mem_0092561C]
        test eax, eax
        je L_fail_00459100
        push esi
        lea esi, [edi + 0x4]
        mov eax, offset ext_00458E30
        sub eax, esi
        push 0xd
        sub eax, 0xd
        push esi
        mov dword ptr [esi], 0x42444c7
        mov dword ptr [esi + 0x4], edi
        mov byte ptr [esi + 0x8], 0xe9
        mov dword ptr [esi + 0x9], eax
        call dword ptr [mem_0092422C]
        push eax
        call dword ptr [mem_00924228]
        push esi
        push -4
        push ebx
        call dword ptr [mem_009255F0]
        test eax, eax
        pop esi
        je L_fail_00459100
        cmp dword ptr [esp + 0x10], 0
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [edi + 0x1c], ebx
        je L_success_00459100
        push -0x10
        push ebx
        call dword ptr [mem_00925644]
        test eax, 0x40000000
        je L_success_00459100
        push ebx
        call dword ptr [mem_00925650]
        push eax
        call ext_00459060
        add esp, 4
    L_success_00459100:
        pop edi
        mov eax, 1
        pop ebx
        ret 8
    L_fail_00459100:
        pop edi
        xor eax, eax
        pop ebx
        ret 8
    }
}

// [0x00453620] sub_00453620 (85 bytes)
extern "C" void ext_0044CF30();
extern "C" void ext_0044D8E0();
extern "C" void ext_0044E190();
extern "C" void ext_0044F780();
extern "C" void ext_00450B00();
extern "C" void ext_004510E0();
extern "C" void ext_00451BE0();
extern "C" void ext_00452120();
extern "C" void ext_00452580();
extern "C" void ext_00452830();

extern "C" __declspec(naked) void __fastcall fn_00453620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0044CF30
        mov ecx, esi
        call ext_0044E190
        mov ecx, esi
        call ext_0044D8E0
        push 1
        mov ecx, esi
        call ext_00451BE0
        mov ecx, esi
        call ext_00452120
        mov ecx, esi
        call ext_00452580
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        call ext_0044F780
        mov ecx, esi
        call ext_00452830
        mov ecx, esi
        call ext_004510E0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092568C]
        pop esi
        ret
    }
}

// [0x00455AF0] sub_00455AF0 (89 bytes)
extern "C" void __fastcall ext_004691C0(void*);
extern "C" void __fastcall ext_004553D0(void*);

extern "C" void __fastcall fn_00455AF0(void* self) {
    typedef int (__stdcall *SendMsgFn)(void*, unsigned int, unsigned int, int);
    SendMsgFn send_msg = (SendMsgFn)mem_00925694;
    char* p = (char*)self;
    send_msg(*(void**)(p + 0x94), 0x445, 0, 0);
    void* obj = ((void* (__stdcall *)(void*, void*))ext_00465B30)(p + 0x158, p + 0x13c);
    ext_004691C0(obj);
    ((void (__fastcall *)(void*))ext_00455820)(p);
    ext_004553D0(p);
    send_msg(*(void**)(p + 0x94), 0x445, 0, 1);
}

// [0x0045D1D0] sub_0045D1D0 (101 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045D1D0(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        mov dword ptr [esp + 0x4], ecx
        je L_end_0045D1D0
        cmp byte ptr [ebx + 0x179], 0
        jne L_end_0045D1D0
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, 1
        add ebx, 0x180
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop_0045D1D0:
        mov esi, dword ptr [ebx]
        test esi, esi
        je L_next_0045D1D0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x78]
        mov ecx, esi
        call edx
        test al, al
        je L_next_0045D1D0
        mov ecx, dword ptr [esp + 0x10]
        push 0xffff0001
        push ebp
        push esi
        call ext_0045CC30
L_next_0045D1D0:
        sub edi, 1
        sub ebx, 4
        test edi, edi
        jge L_loop_0045D1D0
        pop edi
        pop esi
        pop ebp
L_end_0045D1D0:
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x0045F610] sub_0045F610 (220 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0043F4C0();
extern "C" void ext_0045E920();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0045F610(void* self, int edx_unused, void* vec) {
    __asm {
        push    -1
        push    0x87ba98
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        xor     eax, eax
        push    esi
        push    edi
        mov     ebp, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     ebx, dword ptr [esp + 0x30]
        mov     esi, dword ptr [ebx + 4]
        cmp     esi, dword ptr [ebx + 8]
        mov     dword ptr [esp + 0x28], eax
        jbe     L_45f652
        call    dword ptr [mem_00925134]
    L_45f652:
        mov     edi, dword ptr [ebx + 8]
        cmp     dword ptr [ebx + 4], edi
        jbe     L_45f660
        call    dword ptr [mem_00925134]
    L_45f660:
        cmp     esi, edi
        je      L_45f6ba
        cmp     esi, dword ptr [ebx + 8]
        jb      L_45f66f
        call    dword ptr [mem_00925134]
    L_45f66f:
        mov     eax, dword ptr [esi]
        push    0
        push    0xa2e914
        push    0xa2e2d8
        push    0
        push    eax
        call    ext_006A6E9E
        add     esp, 0x14
        test    eax, eax
        je      L_45f6aa
        push    eax
        mov     ecx, ebp
        call    ext_0045E920
        test    eax, eax
        mov     dword ptr [esp + 0x30], eax
        je      L_45f6aa
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    ext_0041A920
    L_45f6aa:
        cmp     esi, dword ptr [ebx + 8]
        jb      L_45f6b5
        call    dword ptr [mem_00925134]
    L_45f6b5:
        add     esi, 4
        jmp     L_45f652
    L_45f6ba:
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, ebp
        call    ext_0043F4C0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        je      L_45f6db
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    L_45f6db:
        mov     ecx, dword ptr [esp + 0x10]
        mov     fs:[0], ecx
        add     esp, 0x1c
        ret     4
    }
}

// [0x0045DD20] sub_0045DD20 (268 bytes)
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" void ext_006A5E60();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FD8;

extern "C" __declspec(naked) void __fastcall fn_0045DD20(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x87fc77
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x78
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0x10], esp
        mov esi, ecx
        push 0x937fb0
        lea ecx, [ebp - 0x68]
        mov dword ptr [ebp - 0x4], 0
        call dword ptr [mem_00924FE4]
        push 0x937fa4
        lea ecx, [ebp - 0x4c]
        mov byte ptr [ebp - 0x4], 1
        call dword ptr [mem_00924FE4]
        mov byte ptr [ebp - 0x4], 2
        call ext_006690D0
        lea ecx, [ebp - 0x68]
        push ecx
        lea edx, [ebp - 0x4c]
        push edx
        lea ecx, [ebp - 0x84]
        push ecx
        mov ecx, eax
        call ext_00669AD0
        lea ecx, [ebp - 0x4c]
        mov byte ptr [ebp - 0x4], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x68]
        mov byte ptr [ebp - 0x4], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [ebp - 0x84]
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0x254]
        lea ecx, [esi + 0x254]
        push 1
        push eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        lea ecx, [ebp - 0x84]
        mov byte ptr [ebp - 0x4], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        push 0x937f84
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [ebp - 0x14]
        add ecx, 0xc
        push ecx
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 7
        call dword ptr [mem_00924FD8]
        push 0
        push 0
        lea ecx, [ebp - 0x30]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        lea ecx, [ebp - 0x30]
        mov byte ptr [ebp - 0x4], 6
        call dword ptr [mem_00924FF4]
        mov eax, 0x45ddd3
        ret
    }
}

// [0x00458A90] sub_00458A90 (367 bytes)
extern "C" void ext_004584F0();
extern "C" void ext_00458520();
extern "C" void ext_00458550();
extern "C" void ext_00458580();
extern "C" void ext_00458860();
extern "C" void ext_0046B120();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00458A90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 088D1B8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], edi
        push 4
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi + 24h], ebp
        call ext_0046B120
        push 10h
        call ext_006A5C62
        add esp, 4
        cmp eax, edi
        je short L_null_1
        mov ecx, dword ptr [esp + 24h]
        push esi
        push ebp
        push ecx
        mov ecx, eax
        call ext_004584F0
        mov ebx, eax
        jmp short L_store_1
    L_null_1:
        xor ebx, ebx
    L_store_1:
        mov eax, dword ptr [esi + 4]
        cmp eax, edi
        je short L_inv_1
        mov edx, dword ptr [esi + 8]
        sub edx, eax
        sar edx, 2
        jne short L_ok_1
    L_inv_1:
        call dword ptr [mem_00925134]
    L_ok_1:
        mov eax, dword ptr [esi + 4]
        push 10h
        mov dword ptr [eax], ebx
        call ext_006A5C62
        add esp, 4
        cmp eax, edi
        je short L_null_2
        mov ecx, dword ptr [esp + 24h]
        push esi
        push ebp
        push ecx
        mov ecx, eax
        call ext_00458550
        mov ebx, eax
        jmp short L_store_2
    L_null_2:
        xor ebx, ebx
    L_store_2:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, edi
        je short L_inv_2
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja short L_ok_2
    L_inv_2:
        call dword ptr [mem_00925134]
    L_ok_2:
        mov edx, dword ptr [esi + 4]
        push 10h
        mov dword ptr [edx + 4], ebx
        call ext_006A5C62
        add esp, 4
        cmp eax, edi
        je short L_null_3
        mov ecx, dword ptr [esp + 24h]
        push esi
        push ebp
        push ecx
        mov ecx, eax
        call ext_00458520
        mov ebx, eax
        jmp short L_store_3
    L_null_3:
        xor ebx, ebx
    L_store_3:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, edi
        je short L_inv_3
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja short L_ok_3
    L_inv_3:
        call dword ptr [mem_00925134]
    L_ok_3:
        mov edx, dword ptr [esi + 4]
        push 18h
        mov dword ptr [edx + 8], ebx
        call ext_006A5C62
        add esp, 4
        cmp eax, edi
        je short L_null_4
        mov ecx, dword ptr [esp + 24h]
        push esi
        push ebp
        push ecx
        mov ecx, eax
        call ext_00458580
        mov ebx, eax
        jmp short L_store_4
    L_null_4:
        xor ebx, ebx
    L_store_4:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, edi
        je short L_inv_4
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 3
        ja short L_ok_4
    L_inv_4:
        call dword ptr [mem_00925134]
    L_ok_4:
        mov edx, dword ptr [esi + 4]
        push edi
        mov ecx, esi
        mov dword ptr [edx + 0ch], ebx
        call ext_00458860
        mov ecx, dword ptr [esp + 14h]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 8
    }
}

// [0x00458C00] sub_00458C00 (113 bytes)
extern "C" void ext_00458A90();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C6E();

extern "C" __declspec(naked) void* __fastcall fn_00458C00(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 087EC13h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_006A5C6E
        push 28h
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esi], 093764Ch
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov byte ptr [esp + 14h], 1
        je short L_null
        mov ecx, dword ptr [esp + 1ch]
        push esi
        push ecx
        mov ecx, eax
        call ext_00458A90
        jmp short L_store
    L_null:
        xor eax, eax
    L_store:
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 54h], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
    }
}

// [0x00452E20] sub_00452E20 (113 bytes)
extern "C" void ext_00451BE0();
extern "C" void ext_00452120();
extern "C" void ext_00452830();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00452E20(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x5b8]
        push 0x188
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x61c]
        push 0
        push 0
        push 0x188
        push ecx
        mov ebx, eax
        call edi
        push 0
        mov ecx, esi
        mov ebp, eax
        call ext_00451BE0
        mov ecx, esi
        call ext_00452120
        mov edx, dword ptr [esi + 0x5b8]
        push 0
        push ebx
        push 0x186
        push edx
        call edi
        mov eax, dword ptr [esi + 0x61c]
        push 0
        push ebp
        push 0x186
        push eax
        call edi
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        jmp ext_00452830
    }
}

// [0x00453C00] sub_00453C00 (116 bytes)
extern "C" void ext_0044DA40();
extern "C" void ext_00452E20();
extern "C" void ext_005AA8D0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00453C00(void* self) {
    __asm {
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 0x8b56f9
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        call ext_0044DA40
        mov edi, eax
        test edi, edi
        je done
        push 0x928b5d
        lea ecx, [esp + 0x0c]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x08]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call ext_005AA8D0
        lea ecx, [esp + 0x08]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_00452E20
    done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0x28
        ret
    }
}

// [0x0045C620] sub_0045C620 (501 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_0045BD30();
extern "C" void ext_00665570();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6826();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0045C620(void* self) {
    __asm {
        push    -1
        push    0x87f85b
        _emit   0x64
        _emit   0xa1
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        push    eax
        _emit   0x64
        _emit   0x89
        _emit   0x25
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        sub     esp, 0x38
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        mov     edi, ecx
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        push    0x92ab70
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x54], ebx
        call    dword ptr [mem_00924FE4]
        mov     esi, dword ptr [esp + 0x58]
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        push    esi
        mov     byte ptr [esp + 0x5c], 1
        call    ext_00665570
        add     esp, 0xc
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x50], bl
        call    dword ptr [mem_00924FF4]
        mov     edx, dword ptr [edi + 0x20]
        push    ebx
        push    ebx
        push    0x110a
        push    edx
        call    dword ptr [mem_00925694]
        mov     ebp, eax
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x58], ebp
        je      L_0045C70D
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    ext_006A6826
        mov     edi, eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x50], 2
        mov     dword ptr [esp + 0x10], 1
        call    dword ptr [mem_00924FF0]
        mov     ecx, edi
        mov     esi, eax
        call    dword ptr [mem_00924300]
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_0045C6E0:
        mov     cl, byte ptr [eax]
        cmp     cl, byte ptr [esi]
        jne     L_0045C700
        test    cl, cl
        je      L_0045C6FC
        mov     cl, byte ptr [eax + 1]
        cmp     cl, byte ptr [esi + 1]
        jne     L_0045C700
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_0045C6E0
    L_0045C6FC:
        xor     eax, eax
        jmp     L_0045C705
    L_0045C700:
        sbb     eax, eax
        sbb     eax, -1
    L_0045C705:
        cmp     eax, ebx
        jne     L_0045C70D
        mov     bl, 1
        jmp     L_0045C70F
    L_0045C70D:
        xor     bl, bl
    L_0045C70F:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x50], 0
        je      L_0045C728
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_009242F4]
    L_0045C728:
        test    bl, bl
        je      L_0045C754
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x50], -1
        call    ext_004026E0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        mov     ecx, dword ptr [esp + 0x38]
        _emit   0x64
        _emit   0x89
        _emit   0x0d
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        add     esp, 0x44
        ret     4
    L_0045C754:
        mov     esi, dword ptr [esp + 0x20]
        cmp     esi, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [mem_00925134]
        jbe     L_0045C766
        call    ebp
    L_0045C766:
        lea     eax, [esp + 0x1c]
        mov     ebx, eax
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    L_0045C770:
        mov     edi, dword ptr [esp + 0x24]
        cmp     dword ptr [esp + 0x20], edi
        jbe     L_0045C77C
        call    ebp
    L_0045C77C:
        test    ebx, ebx
        je      L_0045C788
        lea     ecx, [esp + 0x1c]
        cmp     ebx, ecx
        je      L_0045C78A
    L_0045C788:
        call    ebp
    L_0045C78A:
        cmp     esi, edi
        je      L_0045C7BE
        test    ebx, ebx
        jne     L_0045C794
        call    ebp
    L_0045C794:
        cmp     esi, dword ptr [ebx + 8]
        jb      L_0045C79B
        call    ebp
    L_0045C79B:
        mov     edx, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        push    edx
        call    ext_0045BD30
        test    eax, eax
        mov     dword ptr [esp + 0x58], eax
        je      L_0045C7C2
        cmp     esi, dword ptr [ebx + 8]
        jb      L_0045C7B9
        call    ebp
    L_0045C7B9:
        add     esi, 0x1c
        jmp     L_0045C770
    L_0045C7BE:
        mov     eax, dword ptr [esp + 0x58]
    L_0045C7C2:
        mov     esi, dword ptr [esp + 0x20]
        test    esi, esi
        mov     dword ptr [esp + 0x50], -1
        je      L_0045C800
        mov     edi, dword ptr [esp + 0x24]
        cmp     esi, edi
        je      L_0045C7EF
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_0045C7E0:
        mov     ecx, esi
        call    dword ptr [mem_00924FF4]
        add     esi, 0x1c
        cmp     esi, edi
        jne     L_0045C7E0
    L_0045C7EF:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    ext_006A5C5C
        mov     eax, dword ptr [esp + 0x5c]
        add     esp, 4
    L_0045C800:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        _emit   0x64
        _emit   0x89
        _emit   0x0d
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        add     esp, 0x44
        ret     4
    }
}

// [0x0045C820] sub_0045C820 (155 bytes)
extern "C" void ext_0045C620();
extern "C" void ext_006A6616();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0045C820(void* self, int edx_unused, const char* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        push esi
        push edi
        mov esi, ecx
        push ebx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        call ext_0045C620
        lea ecx, [esp + 0xc]
        mov edi, eax
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        test edi, edi
        jne not_zero
        push 0xffff0002
        push 0xffff0000
        push edi
        push edi
        push edi
        push edi
        push edi
        push ebx
        push 1
        mov ecx, esi
        call ext_006A6616
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    not_zero:
        mov ecx, dword ptr [esp + 0x28]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x0045C8C0] sub_0045C8C0 (178 bytes)
extern "C" void ext_0045C620();
extern "C" void ext_00584A10();
extern "C" void ext_006A6616();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0045C8C0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [esp + 0x38]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x74]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x34], 0
        call edx
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_0045C620
        mov esi, eax
        test esi, esi
        jne not_zero
        mov ecx, ebx
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x44]
        push ecx
        mov ecx, dword ptr [esp + 0x44]
        push edx
        mov edx, dword ptr [esp + 0x44]
        push esi
        push esi
        push esi
        push ecx
        push edx
        push eax
        push 0x23
        mov ecx, edi
        call ext_006A6616
        mov esi, eax
    not_zero:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x14
    }
}

// [0x0045C980] sub_0045C980 (182 bytes)
extern "C" void ext_0045C620();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE8;
extern "C" int mem_00925694;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0045C980(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE8]
        mov ebx, dword ptr [esp + 0x38]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x74]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x34], 0
        call edx
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0045C620
        mov edi, eax
        test edi, edi
        je L_done
        push 0
        push 0xa2fb54
        push 0xa2e2bc
        push 0
        push ebx
        call ext_006A6E9E
        mov ebx, dword ptr [mem_00925694]
        add esp, 0x14
        test eax, eax
        jne L_skip
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 2
        push 0x1102
        push ecx
        call ebx
L_skip:
        mov edx, dword ptr [esi + 0x20]
        push edi
        push 0
        push 0x1114
        push edx
        call ebx
L_done:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

extern "C" void ext_0045C620();
extern "C" void ext_006A6442();
extern "C" void ext_006A683E();
extern "C" int mem_00924FE8;
extern "C" int mem_00925694;
extern "C" int mem_00924FF4;

// [0x0045CB50] sub_0045CB50 (223 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045CB50(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x74]
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x30], 0x0
        call eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_0045C620
        mov edi, eax
        test edi, edi
        je L_0045CC0A
        push 0x8
        push edi
        mov ecx, esi
        call ext_006A683E
        test al, 0x10
        je L_0045CBCC
        push 0x0
        push 0x2
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push edi
        mov ecx, esi
        call ext_006A6442
        push 0x0
        push 0x10
        push 0x0
        jmp L_0045CBFA
L_0045CBCC:
        mov edx, dword ptr [esi + 0x20]
        push edi
        push 0x0
        push 0x110b
        push edx
        call dword ptr [mem_00925694]
        push 0x0
        push 0x2
        push 0x2
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push edi
        mov ecx, esi
        call ext_006A6442
        push 0x0
        push 0x10
        push 0x10
L_0045CBFA:
        push 0x0
        push 0x0
        push 0x0
        push 0x8
        push edi
        mov ecx, esi
        call ext_006A6442
L_0045CC0A:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x0045CA40] sub_0045CA40 (257 bytes)
extern "C" void ext_0045C620();
extern "C" void ext_006A6442();
extern "C" int mem_00925694;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0045CA40(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push 0x110a
        push eax
        call ebx
        push 0
        push 2
        push 0
        push 0
        push 0
        push 0
        push 8
        push eax
        mov ecx, esi
        call ext_006A6442
        mov ecx, dword ptr [esi + 0x20]
        push 0
        push 0
        push 0x110a
        push ecx
        call ebx
        push 0
        push 0x10
        push 0
        push 0
        push 0
        push 0
        push 8
        push eax
        mov ecx, esi
        call ext_006A6442
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x74]
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0x34], 0
        call edx
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0045C620
        mov edi, eax
        test edi, edi
        je label_45cb1b
        mov ecx, dword ptr [esi + 0x20]
        push edi
        push 0
        push 0x110b
        push ecx
        call ebx
        push 0
        push 2
        push 2
        push 0
        push 0
        push 0
        push 8
        push edi
        mov ecx, esi
        call ext_006A6442
        push 0
        push 0x10
        push 0x10
        push 0
        push 0
        push 0
        push 8
        push edi
        mov ecx, esi
        call ext_006A6442
    label_45cb1b:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00453E20] sub_00453E20 (143 bytes)
extern "C" void ext_00453390();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00453E20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        cmp byte ptr [esp + 0x30], 0x0
        push esi
        mov esi, ecx
        je L_else_00453E20
        mov eax, dword ptr [esp + 0x30]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_00453390
        push eax
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    L_else_00453E20:
        mov edx, dword ptr [esp + 0x30]
        push edx
        lea ecx, [esi + 0xb0]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x00453390] sub_00453390 (151 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00495F90();
extern "C" void ext_00662880();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00453390(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x87e332
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        mov eax, dword ptr [esp + 0x28]
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], ebx
        mov edi, dword ptr [esp + 0x30]
        mov esi, ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x2c], ebx
        call dword ptr [mem_00924FE0]
        mov eax, 1
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebx
        mov ecx, dword ptr [esi + 0x74]
        push ecx
        add esi, 0x94
        lea edx, [esp + 0x14]
        push esi
        push edx
        mov dword ptr [esp + 0x34], eax
        call ext_00495F90
        lea eax, [esp + 0x1c]
        push edi
        push eax
        call ext_00662880
        add esp, 0x14
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], bl
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 8
    }
}

// [0x00454D10] sub_00454D10 (152 bytes)
extern "C" void ext_00457100();
extern "C" int mem_00925690;
extern "C" int mem_0092564C;
extern "C" int mem_00925628;

extern "C" __declspec(naked) int __fastcall fn_00454D10(void* self, int edx_unused, int x, int y) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x1c]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [esp + 0x30]
        push edi
        push ebx
        mov ecx, esi
        call ext_00457100
        cmp eax, 0x1
        jne L_ret
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1a0]
        mov ecx, esi
        call eax
        test eax, eax
        je L_ret1
        mov eax, dword ptr [esi + 0x114]
        mov ecx, dword ptr [esp + 0x20]
        mov esi, dword ptr [esi + 0x118]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0xc], eax
        add eax, 0xb
        push ecx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        push edx
        lea eax, [esp + 0x14]
        add esi, 0xb
        push eax
        mov dword ptr [esp + 0x24], esi
        call dword ptr [mem_0092564C]
        push edi
        push ebx
        lea ecx, [esp + 0x14]
        push ecx
        call dword ptr [mem_00925628]
        test eax, eax
        mov eax, 0x14
        jne L_ret
    L_ret1:
        mov eax, 0x1
    L_ret:
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x8
    }
}

// [0x004586E0] sub_004586E0 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_004586E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        cmp dword ptr [ecx + 0x1c], edx
        push esi
        mov esi, dword ptr [eax + 0x4]
        jne L_body
        cmp dword ptr [ecx + 0x20], esi
        je L_done
L_body:
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x1c], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x20], edx
        mov ecx, dword ptr [ecx + 0x10]
        mov edx, dword ptr [ecx]
        push esi
        push eax
        mov eax, dword ptr [edx + 0x20]
        call eax
L_done:
        pop esi
        ret 0x8
    }
}

// [0x00455820] sub_00455820 (49 bytes)
extern "C" void __fastcall fn_00455820(void* self) {
    int s[3];
    s[0] = (int)((char*)self + 0x13c);
    s[2] = (int)fn_00455240;
    typedef int (__stdcall *SendMsgFn)(void*, unsigned int, unsigned int, void*);
    ((SendMsgFn)mem_00925694)(*(void**)((char*)self + 0x94), 0x449, 2, s);
}

// [0x00457100] sub_00457100 (163 bytes)
extern "C" void ext_00455D40();
extern "C" int ext_00455F40();
extern "C" void ext_00456510();
extern "C" int mem_00925690;
extern "C" int mem_00925628;

extern "C" __declspec(naked) void __fastcall fn_00457100(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        call    dword ptr [mem_00925690]
        mov     ecx, edi
        call    ext_00455F40
        test    eax, eax
        jne     done_true
        mov     ebx, dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x34]
        xor     esi, esi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop_top:
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        mov     ecx, edi
        call    ext_00455D40
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, edi
        mov     dword ptr [eax + 0xc], edx
        call    ext_00456510
        test    eax, eax
        je      next_iter
        push    ebx
        push    ebp
        lea     eax, [esp + 0x28]
        push    eax
        call    dword ptr [mem_00925628]
        test    eax, eax
        jne     hit
next_iter:
        add     esi, 0x1
        cmp     esi, 0x4
        jl      loop_top
done_true:
        mov     eax, 0x1
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x8
hit:
        push    esi
        mov     ecx, edi
        call    ext_00455D40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}

// [0x00451A20] sub_00451A20 (191 bytes)
extern "C" void ext_004513B0();
extern "C" void ext_004515C0();
extern "C" void ext_00451A20();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00451A20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        mov ebp, ecx
        je l_epilogue
        cmp byte ptr [esi + 0x179], 0x0
        jne l_epilogue
        cmp byte ptr [esi + 0x8d], 0x0
        je l_else
        mov eax, dword ptr [esi + 0x90]
        push 0x0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0x0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        push eax
        push esi
        mov ecx, ebp
        call ext_004513B0
        jmp l_after
l_else:
        push esi
        call ext_004515C0
l_after:
        push edi
        mov edi, dword ptr [esi + 0x1d4]
        cmp edi, dword ptr [esi + 0x1d8]
        jbe l_c1
        call dword ptr [mem_00925134]
l_c1:
        push ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
l_loop:
        mov ebx, dword ptr [esi + 0x1d8]
        cmp dword ptr [esi + 0x1d4], ebx
        jbe l_c2
        call dword ptr [mem_00925134]
l_c2:
        cmp edi, ebx
        je l_done
        cmp edi, dword ptr [esi + 0x1d8]
        jb l_c3
        call dword ptr [mem_00925134]
l_c3:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        mov ecx, ebp
        call ext_00451A20
        cmp edi, dword ptr [esi + 0x1d8]
        jb l_c4
        call dword ptr [mem_00925134]
l_c4:
        add edi, 0x4
        jmp l_loop
l_done:
        pop ebx
        pop edi
l_epilogue:
        pop esi
        pop ebp
        ret 0x8
    }
}

// [0x00452750] sub_00452750 (224 bytes)
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;
extern "C" void ext_0044DAE0();
extern "C" void ext_00450220();
extern "C" void ext_004519B0();
extern "C" void ext_00452580();
extern "C" void ext_004951F0();

extern "C" __declspec(naked) void __fastcall fn_00452750(void* self) {
    __asm {
        push -1
        push 0x8b2ae2
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push esi
        push edi
        lea eax, [esp + 0x24]
        push eax
        mov esi, ecx
        call ext_00450220
        mov edi, eax
        lea ecx, [esp + 8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], 0
        call ext_0044DAE0
        push edi
        push eax
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x50], 1
        call ext_004951F0
        lea ecx, [esp + 8]
        mov edi, eax
        mov byte ptr [esp + 0x48], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        test edi, edi
        je loc_452816
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x50]
        mov edx, dword ptr [edx + 0x5c]
        push ebp
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi + 0x768]
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        push 0x188
        push eax
        call edi
        mov ecx, esi
        mov ebp, eax
        call ext_00452580
        mov ecx, dword ptr [esi + 0x768]
        push -1
        push 0
        push 0x185
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x768]
        push ebp
        push 1
        push 0x185
        push edx
        call edi
        pop ebp
    loc_452816:
        mov ecx, esi
        call ext_004519B0
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x44
        ret 4
    }
}

// [0x00458340] sub_00458340 (240 bytes)
extern "C" void ext_00454D10();

extern "C" __declspec(naked) void __fastcall fn_00458340(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x10]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov ecx, esi
        call ext_00455F40
        test eax, eax
        mov ebp, dword ptr [esp + 0x38]
        jne L_458407
        mov ebx, dword ptr [mem_00925628]
        xor edi, edi
    L_458373:
        push edi
        mov ecx, esi
        call ext_00455D40
        cmp eax, 0x0a
        jne L_45838B
        cmp byte ptr [esi + 0x124], 0x0
        je L_4583B9
        jmp L_4583FB
    L_45838B:
        cmp eax, 0x0c
        jne L_45839B
        cmp byte ptr [esi + 0x125], 0x0
        je L_4583B9
        jmp L_4583FB
    L_45839B:
        cmp eax, 0x0b
        jne L_4583AB
        cmp byte ptr [esi + 0x126], 0x0
        je L_4583B9
        jmp L_4583FB
    L_4583AB:
        cmp eax, 0x0f
        jne L_4583FB
        cmp byte ptr [esi + 0x127], 0x0
        jne L_4583FB
    L_4583B9:
        mov ecx, dword ptr [esp + 0x10]
        lea edx, [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [eax + 0x04], edx
        mov edx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x08], ecx
        mov ecx, esi
        mov dword ptr [eax + 0x0c], edx
        call ext_00456510
        test eax, eax
        je L_4583FB
        mov eax, dword ptr [esp + 0x34]
        push ebp
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        call ebx
        test eax, eax
        jne L_45841E
    L_4583FB:
        add edi, 0x1
        cmp edi, 0x4
        jl L_458373
    L_458407:
        mov edx, dword ptr [esp + 0x34]
        push ebp
        push edx
        mov ecx, esi
        call ext_00454D10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0x8
    L_45841E:
        push edi
        mov ecx, esi
        call ext_00455D40
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0x8
    }
}

// [0x0045E380] sub_0045E380 (240 bytes)
extern "C" void ext_0045A8C0();
extern "C" void ext_0043EAA0();
extern "C" void ext_004607A0();

extern "C" __declspec(naked) void __fastcall fn_0045E380(void* self) {
    __asm {
        push    -0x1
        push    0x87fcb5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        xor     ebx, ebx
        mov     esi, ecx
        mov     dword ptr [esp + 0xc], ebx
        call    ext_006A5EA8
        cmp     eax, -0x1
        jne     loc_45E3C1
        pop     esi
        or      eax, eax
        pop     ebx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x18
        ret     0x4
    loc_45E3C1:
        push    edi
        push    0x7c
        call    ext_006A5C62
        mov     edi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], edi
        cmp     edi, ebx
        mov     dword ptr [esp + 0x20], ebx
        je      loc_45E40A
        push    0x928b5d
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242F0]
        push    esi
        lea     eax, [esp + 0x10]
        push    eax
        mov     ebx, 0x1
        push    -0x1
        mov     ecx, edi
        mov     byte ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_0045A8C0
        mov     edi, eax
        jmp     loc_45E40C
    loc_45E40A:
        xor     edi, edi
    loc_45E40C:
        test    bl, 0x1
        mov     dword ptr [esp + 0x20], 0xffffffff
        je      loc_45E423
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_009242F4]
    loc_45E423:
        push    edi
        mov     ecx, esi
        mov     byte ptr [edi + 0x36], 0x0
        call    ext_0043EAA0
        mov     ecx, dword ptr [esi + 0x2d0]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [mem_00ACDB40]
        mov     edx, dword ptr [edx + 0x13c]
        push    0x80
        push    0x80c80000
        push    eax
        call    edx
        mov     ecx, dword ptr [esi + 0x2d0]
        call    ext_004607A0
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x18
        ret     0x4
    }
}

// [0x00451BE0] sub_00451BE0 (243 bytes)
extern "C" void ext_0042EE50();
extern "C" void ext_00451700();
extern "C" void ext_0052F600();
extern "C" void ext_006A5F50();
extern "C" void ext_006AD940();
extern "C" int mem_00924300;
extern "C" int mem_00925688;
extern "C" __declspec(naked) void __fastcall fn_00451BE0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, 0xad299c
        lea ebx, [esi + 0x100]
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov edi, eax
        mov ecx, edi
        call ext_00492550
        test al, al
        je label_skip
        push 0
        mov ecx, edi
        call ext_00492520
        push 1
        mov ecx, edi
        mov ebp, eax
        call ext_00492520
        test ebp, ebp
        je label_skip
        test eax, eax
        je label_skip
        mov ecx, edi
        call ext_0052F600
        cmp eax, ebp
        mov ecx, 0xad29a0
        je label_have
        mov ecx, 0xad29a4
label_have:
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call ext_006A5F50
label_skip:
        mov ebx, dword ptr [esp + 0x14]
        test bl, bl
        mov ebp, dword ptr [mem_00925694]
        je label_noinv
        mov eax, dword ptr [esi + 0x61c]
        push 0
        push 0
        push 0x184
        push eax
        call ebp
label_noinv:
        lea edi, [esi + 0x5fc]
        mov ecx, edi
        call ext_0042EE50
        mov eax, dword ptr [esi + 0x74]
        test eax, eax
        je label_end
        push ebx
        push 0
        add eax, 0x160
        push eax
        mov ecx, esi
        call ext_00451700
        mov ecx, dword ptr [esi + 0x61c]
        push 0
        push -1
        push 0x186
        push ecx
        call ebp
        push 0
        push edi
        mov ecx, esi
        call ext_0044DD70
        mov edx, dword ptr [esi + 0x61c]
        push 1
        push 0
        push edx
        call dword ptr [mem_00925688]
label_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00453930] sub_00453930 (249 bytes)
extern "C" void ext_00450120();
extern "C" void ext_00450B00();
extern "C" void ext_004519B0();
extern "C" void ext_00452830();
extern "C" void ext_004536C0();
extern "C" void ext_005AA830();
extern "C" void ext_005AA850();
extern "C" void ext_005AA890();

extern "C" __declspec(naked) void __fastcall fn_00453930(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        push eax
        mov esi, ecx
        call ext_004536C0
        mov ecx, dword ptr [esi + 0x98c]
        mov ebx, dword ptr [mem_00925694]
        xor edi, edi
        push edi
        push edi
        push 0x18b
        push ecx
        call ebx
        test eax, eax
        jle tail
        push ebp
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        mov edx, dword ptr [esp + 0x14]
        push edi
        push edx
        mov ecx, esi
        call ext_00450120
        mov ebx, eax
        mov eax, dword ptr [esp + 0x18]
        push edi
        push eax
        mov ecx, esi
        call ext_00450120
        test ebx, ebx
        mov ebp, eax
        je skip
        test ebp, ebp
        je skip
        mov ecx, dword ptr [ebx + 0x154]
        push ecx
        mov ecx, ebp
        call ext_005AA830
        lea edx, [ebx + 0x158]
        push edx
        mov ecx, ebp
        call ext_005AA850
        add ebx, 0x164
        push ebx
        mov ecx, ebp
        call ext_005AA890
    skip:
        mov eax, dword ptr [esi + 0x98c]
        push 0
        push 0
        push 0x18b
        push eax
        add edi, 1
        call dword ptr [mem_00925694]
        cmp edi, eax
        jl loop_top
        mov ebx, dword ptr [mem_00925694]
        pop ebp
    tail:
        mov ecx, dword ptr [esi + 0x768]
        push 0
        push 0
        push 0x18b
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x768]
        push -1
        push 0
        push 0x185
        mov edi, eax
        push edx
        sub edi, 1
        call ebx
        mov eax, dword ptr [esi + 0x768]
        push edi
        push 1
        push 0x185
        push eax
        call ebx
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        call ext_00452830
        mov ecx, esi
        call ext_004519B0
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0045C2D0] sub_0045C2D0 (261 bytes)
extern "C" void ext_0045B720();
extern "C" void ext_0045B850();
extern "C" void ext_00584C00();
extern "C" void ext_006A643C();
extern "C" void ext_006A6442();
extern "C" void ext_006A6616();
extern "C" __declspec(naked) void __fastcall fn_0045C2D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        push edi
        mov edi, ecx
        mov ecx, esi
        call edx
        push esi
        mov ecx, edi
        mov ebx, eax
        call ext_0045B850
        push esi
        mov ecx, edi
        mov ebp, eax
        call ext_0045B720
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push 0xffff0002
        push ecx
        push 0
        push 0
        push 0
        push ebp
        push edx
        push eax
        push 0x23
        mov ecx, edi
        call ext_006A6616
        mov ebx, eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], ebx
        call ext_006A643C
        test eax, 0x100
        je L_skip
        mov ecx, esi
        call ext_00584C00
        mov ecx, edi
        push eax
        push ebx
        call fn_0045C0C0
L_skip:
        push esi
        push 0
        push 0
        push 0
        push 0
        push 0
        push 4
        push ebx
        mov ecx, edi
        call ext_006A6442
        mov ebx, dword ptr [esi + 0x80]
        add esi, 0x7c
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_loop
        call dword ptr [mem_00925134]
L_loop:
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x18], eax
        jbe L_c1
        call dword ptr [mem_00925134]
L_c1:
        test esi, esi
        je L_c2
        cmp esi, esi
        je L_c3
L_c2:
        call dword ptr [mem_00925134]
L_c3:
        cmp ebx, dword ptr [esp + 0x18]
        je L_end
        test esi, esi
        jne L_c4
        call dword ptr [mem_00925134]
L_c4:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_c5
        call dword ptr [mem_00925134]
L_c5:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        mov ecx, edi
        call fn_0045C2D0
        cmp ebx, dword ptr [esi + 0x8]
        jb L_c6
        call dword ptr [mem_00925134]
L_c6:
        add ebx, 0x4
        jmp L_loop
L_end:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00454000] sub_00454000 (279 bytes)
extern "C" void ext_0044CFC0();
extern "C" void ext_0044CFD0();
extern "C" void ext_0044CFE0();
extern "C" void ext_0044D010();
extern "C" void ext_0044DAE0();
extern "C" void ext_0044F9D0();
extern "C" void ext_0044FB70();
extern "C" void ext_004536C0();
extern "C" void ext_00453E20();
extern "C" void ext_006A5FA4();
extern "C" int mem_00924FF4;
extern "C" int mem_00925690;

extern "C" __declspec(naked) void __fastcall fn_00454000(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87e403
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3f0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x74]
        test eax, eax
        je L_done
        push 0
        push eax
        lea ecx, [esp + 0x38]
        call ext_0044F9D0
        push 0xad28f4
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x400], 0
        call ext_0044CFC0
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0044DAE0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x400], 1
        call ext_0044CFD0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x3fc], 0
        call dword ptr [mem_00924FF4]
        push 1
        push 0xad2980
        lea ecx, [esp + 0x38]
        call ext_00453E20
        mov edx, dword ptr [esi + 0x7bc]
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        call dword ptr [mem_00925690]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        push ecx
        lea ecx, [esp + 0x38]
        call ext_0044D010
        call ext_006A5FA4
        cmp eax, 1
        jne L_skip
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x34]
        call ext_0044CFE0
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x400], 2
        call ext_004536C0
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x3fc], 0
        call dword ptr [mem_00924FF4]
    L_skip:
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x3fc], 0xffffffff
        call ext_0044FB70
    L_done:
        mov ecx, dword ptr [esp + 0x3f4]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x3fc
        ret
    }
}

// [0x00453CD0] sub_00453CD0 (289 bytes)
extern "C" void ext_00453A30();
extern "C" void ext_006A5E60();
extern "C" int mem_00924FE4;
extern "C" int mem_00925694;
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00935E08;
extern "C" int mem_00935DE0;
extern "C" int mem_00935DD0;
extern "C" __declspec(naked) void __fastcall fn_00453CD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0087E3D4
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x70
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x74], 0
        je L_end
        push offset mem_00935E08
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x768]
        push 0
        push 0
        push 0x190
        push eax
        mov dword ptr [esp + 0x8c], 0
        call dword ptr [mem_00925694]
        cmp eax, 1
        jne L_skip
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, esi
        call ext_00450220
        push eax
        lea edx, [esp + 0x40]
        push offset mem_00935DE0
        push edx
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FCC]
        push offset mem_00935DD0
        push eax
        lea eax, [esp + 0x34]
        push eax
        mov byte ptr [esp + 0x94], 2
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x80], 3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x7c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x7c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x7c], 0
        call dword ptr [mem_00924FF4]
    L_skip:
        push 0
        push 1
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FF0]
        push eax
        call ext_006A5E60
        cmp eax, 1
        jne short L_noCall
        mov ecx, esi
        call ext_00453A30
    L_noCall:
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x7c], -1
        call dword ptr [mem_00924FF4]
    L_end:
        mov ecx, dword ptr [esp + 0x74]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x7c
        ret
    }
}

// [0x004542B0] sub_004542B0 (300 bytes)
extern "C" void ext_0044CFC0();
extern "C" void ext_0044CFD0();
extern "C" void ext_0044CFE0();
extern "C" void ext_0044D010();
extern "C" void ext_0044DAE0();
extern "C" void ext_0044F9D0();
extern "C" void ext_0044FB70();
extern "C" void ext_00450220();
extern "C" void ext_00452750();
extern "C" void ext_00453E20();
extern "C" void ext_006A5FA4();
extern "C" int mem_00924FF4;
extern "C" int mem_00925690;

extern "C" __declspec(naked) void __fastcall fn_004542B0(void* self) {
    __asm {
        push -1
        push 0x87e49f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3f0
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x74]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, [esp + 0x3c]
        call ext_0044F9D0
        push 0xad2964
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x404], ebx
        call ext_0044CFC0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_0044DAE0
        push eax
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x404], 1
        call ext_0044CFD0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x400], bl
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_00450220
        push ebx
        push eax
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x408], 2
        call ext_00453E20
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x400], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x918]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x24]
        push edx
        push eax
        lea ecx, [esp + 0x3c]
        call ext_0044D010
        call ext_006A5FA4
        cmp eax, 1
        jne L_skip
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x38]
        call ext_0044CFE0
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x404], 3
        call ext_00452750
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x400], bl
        call dword ptr [mem_00924FF4]
    L_skip:
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x400], -1
        call ext_0044FB70
        mov ecx, dword ptr [esp + 0x3f8]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x3fc
        ret
    }
}

// [0x00453250] sub_00453250 (316 bytes)
extern "C" void ext_00430380();
extern "C" void ext_00451A20();
extern "C" void ext_00452E20();
extern "C" void ext_00492520();
extern "C" void ext_00494860();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" void ext_006AD940();
extern "C" int mem_00ACDB40;
extern "C" int mem_00A3464C;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FF4;
extern "C" int (__stdcall *mem_0092568C)(void*);

extern "C" __declspec(naked) void __fastcall fn_00453250(void* self) {
    __asm {
        push -1
        push 0x87e301
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0x8], ebx
        call ext_0065C640
        mov ecx, dword ptr [mem_00ACDB40]
        mov dword ptr [esp + 0x30], 0
        call ext_00430380
        test al, al
        jne loc_4532C5
        mov ecx, ebx
        mov dword ptr [esp + 0x30], -1
        call ext_0065C650
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    loc_4532C5:
        push ebp
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov edi, eax
        push 0
        mov ecx, edi
        call ext_00492520
        push 1
        mov ecx, edi
        mov ebp, eax
        call ext_00492520
        test ebp, ebp
        mov edi, eax
        je loc_45336A
        test edi, edi
        je loc_45336A
        mov eax, dword ptr [esi + 0xa4]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esi + 0x78]
        call ext_00494860
        mov edx, dword ptr [mem_00A3464C]
        push edx
        push eax
        mov byte ptr [esp + 0x40], 1
        call dword ptr [mem_00924FC8]
        add esp, 8
        lea ecx, [esp + 0x14]
        mov bl, al
        mov byte ptr [esp + 0x38], 0
        call dword ptr [mem_00924FF4]
        test bl, bl
        jne loc_453364
        push ebp
        add edi, 0x160
        push edi
        mov ecx, esi
        mov byte ptr [esi + 0xaa], bl
        call ext_00451A20
        cmp byte ptr [esi + 0xaa], bl
        je loc_453364
        mov ecx, esi
        call ext_00452E20
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092568C]
    loc_453364:
        mov ecx, dword ptr [esp + 0x10]
        jmp loc_45336C
    loc_45336A:
        mov ecx, ebx
    loc_45336C:
        mov dword ptr [esp + 0x38], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop ebp
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00457460] sub_00457460 (320 bytes)
extern "C" void ext_00455CB0();
extern "C" int ext_00455F40();
extern "C" void ext_004573A0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5EA2();
extern "C" void ext_006A63BE();
extern "C" void ext_006A6778();
extern "C" void ext_006A6784();
extern "C" void ext_006A67A8();
extern "C" void ext_006A67D8();
extern "C" int mem_00925644;
extern "C" int mem_00925650;

extern "C" __declspec(naked) void __fastcall fn_00457460(void* self, void* dummy, int arg1, int arg2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87eba8
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        push esi
        mov esi, ecx
        call ext_00455F40
        test eax, eax
        je loc_4574e5
        push edi
        call ext_006A67A8
        mov edi, eax
        test edi, edi
        je loc_4574e4
        call ext_006A67D8
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        je loc_4574e4
        mov eax, dword ptr [edi + 0x20]
        push -0x10
        push eax
        call dword ptr [mem_00925644]
        test eax, 0x200
        je loc_4574e4
        push 0x0
        push 0x0
        push 0x200
        mov ecx, edi
        call ext_006A5EA2
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        push 0x2000000
        push 0x0
        push ecx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A5EA2
    loc_4574e4:
        pop edi
    loc_4574e5:
        and dword ptr [esi + 0x94], -0x10
        mov ecx, esi
        call ext_00455F40
        test eax, eax
        jne loc_457576
        cmp dword ptr [esi + 0x8c], eax
        je loc_457576
        lea ecx, [esp + 0x8]
        call ext_006A6778
        mov dword ptr [esp + 0x8], 0x936d44
        lea edx, [esp + 0x4]
        push edx
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0x0
        call ext_004573A0
        mov ecx, esi
        call ext_00455CB0
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        jle loc_45754a
        mov edx, eax
        neg edx
        sbb edx, edx
        and edx, -0x3
        add edx, 0x4
        or dword ptr [esi + 0x94], edx
    loc_45754a:
        mov edx, dword ptr [esp + 0x10]
        add edx, -0x1
        cmp ecx, edx
        jge loc_457565
        neg eax
        sbb eax, eax
        and eax, -0x6
        add eax, 0x8
        or dword ptr [esi + 0x94], eax
    loc_457565:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_006A6784
    loc_457576:
        mov ecx, dword ptr [esi + 0xf4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [eax + 0x198]
        push ecx
        push edx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x1c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x24
        ret 0x8
    }
}

extern "C" void ext_0044DAE0();
extern "C" void ext_0044DBF0();
extern "C" void ext_00450B00();
extern "C" void ext_004519B0();
extern "C" void ext_00452580();
extern "C" void ext_00452830();
extern "C" void ext_00587470();
extern "C" void ext_0059DCD0();
extern "C" void ext_0059DD00();
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;

// [0x00453A30] sub_00453A30 (351 bytes)
extern "C" __declspec(naked) void __fastcall fn_00453A30(void* self) {
    __asm {
        push -1
        push 0x87e39b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push esi
        push edi
        lea eax, [esp + 0x10]
        push eax
        mov esi, ecx
        call ext_0044DAE0
        mov ecx, dword ptr [esi + 0x74]
        push eax
        mov dword ptr [esp + 0x70], 0
        call ext_0059DCD0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x6c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x768]
        mov ebx, dword ptr [mem_00925694]
        xor edi, edi
        push edi
        push edi
        push 0x18b
        push ecx
        call ebx
        test eax, eax
        jle loc_453b3d
        push ebp
        nop
    loc_453aa0:
        mov edx, dword ptr [esi + 0x768]
        push 0
        push edi
        push 0x187
        push edx
        call ebx
        test eax, eax
        je loc_453b1f
        push edi
        lea eax, [esp + 0x50]
        push eax
        mov ecx, esi
        call ext_0044DBF0
        mov ebp, eax
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x74], 1
        call ext_0044DAE0
        mov ecx, dword ptr [esi + 0x74]
        push ebp
        push eax
        mov byte ptr [esp + 0x78], 2
        call ext_0059DD00
        lea ecx, [esp + 0x30]
        mov ebp, eax
        mov byte ptr [esp + 0x70], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x70], -1
        call dword ptr [mem_00924FF4]
        cmp dword ptr [esp + 0x10], 0
        jne loc_453b15
        test ebp, ebp
        je loc_453b1f
    loc_453b15:
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        call ext_00587470
    loc_453b1f:
        mov edx, dword ptr [esi + 0x768]
        push 0
        push 0
        push 0x18b
        push edx
        add edi, 1
        call ebx
        cmp edi, eax
        jl loc_453aa0
        pop ebp
    loc_453b3d:
        mov ecx, esi
        call ext_00452580
        mov eax, dword ptr [esi + 0x768]
        push -1
        push 0
        push 0x185
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x768]
        push 0
        push 1
        push 0x185
        push ecx
        call ebx
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        call ext_00452830
        mov ecx, esi
        call ext_004519B0
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00453430] sub_00453430 (369 bytes)
extern "C" void ext_008B6151();
extern "C" void ext_00495F90();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FC8;
extern "C" int mem_00928B5D;
extern "C" int mem_00A34650;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FB0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00453430(void* self) {
    __asm {
        push -0x1
        push offset ext_008B6151
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [esi + 0x74]
        push eax
        lea ecx, [esi + 0x94]
        push ecx
        lea edx, [esp + 0x24]
        push edx
        call ext_00495F90
        lea edi, [esi + 0xb0]
        mov esi, dword ptr [mem_00924FC8]
        push offset mem_00928B5D
        push edi
        mov dword ptr [esp + 0x24], edi
        call esi
        add esp, 0x14
        test al, al
        je L_4534A8
        mov eax, dword ptr [mem_00A34650]
        push eax
        push edi
        call esi
        add esp, 0x8
        test al, al
        je L_4534A8
        mov bl, 0x1
        jmp L_4534AA
    L_4534A8:
        xor bl, bl
    L_4534AA:
        mov esi, dword ptr [esp + 0x20]
        cmp esi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [mem_00925134]
        jbe L_4534BC
        call ebp
    L_4534BC:
        lea eax, [esp + 0x1c]
        mov dword ptr [esp + 0x14], eax
    L_4534C4:
        mov edi, dword ptr [esp + 0x24]
        cmp dword ptr [esp + 0x20], edi
        jbe L_4534D0
        call ebp
    L_4534D0:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_4534E0
        lea ecx, [esp + 0x1c]
        cmp eax, ecx
        je L_4534E2
    L_4534E0:
        call ebp
    L_4534E2:
        cmp esi, edi
        je L_45354E
        test bl, bl
        je L_453532
        cmp dword ptr [esp + 0x14], 0x0
        jne L_4534F3
        call ebp
    L_4534F3:
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_4534FE
        call ebp
    L_4534FE:
        push esi
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x2c]
        push eax
        push ecx
        mov byte ptr [esp + 0x58], 0x1
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        lea ecx, [esp + 0x2c]
        mov bl, al
        mov byte ptr [esp + 0x50], 0x0
        call dword ptr [mem_00924FF4]
    L_453532:
        cmp dword ptr [esp + 0x14], 0x0
        jne L_45353B
        call ebp
    L_45353B:
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_453546
        call ebp
    L_453546:
        add esi, 0x1c
        jmp L_4534C4
    L_45354E:
        mov esi, dword ptr [esp + 0x20]
        test esi, esi
        movzx ebp, bl
        mov dword ptr [esp + 0x50], 0xffffffff
        je L_45358C
        mov edi, dword ptr [esp + 0x24]
        cmp esi, edi
        je L_45357F
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_453570:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne L_453570
    L_45357F:
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_45358C:
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

extern "C" void ext_0044CFC0();
extern "C" void ext_0044CFD0();
extern "C" void ext_0044CFE0();
extern "C" void ext_0044D010();
extern "C" void ext_0044DAE0();
extern "C" void ext_0044F9D0();
extern "C" void ext_0044FB70();
extern "C" void ext_00450220();
extern "C" void ext_00453930();
extern "C" void ext_00453E20();
extern "C" void ext_006A5FA4();
extern "C" int mem_00924FF4;
extern "C" int mem_00924FD0;
extern "C" int mem_00925690;

// [0x00454120] sub_00454120 (398 bytes)
extern "C" __declspec(naked) void __fastcall fn_00454120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87e457
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x40c
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x74]
        xor ebx, ebx
        cmp eax, ebx
        je L_exit
        push ebx
        push eax
        lea ecx, [esp + 0x58]
        call ext_0044F9D0
        push 0xad2910
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0x420], ebx
        call ext_0044CFC0
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_0044DAE0
        push eax
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0x420], 0x1
        call ext_0044CFD0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x41c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, esi
        call ext_00450220
        push eax
        lea edx, [esp + 0xc]
        push 0xad292c
        push edx
        mov byte ptr [esp + 0x428], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0x1
        push eax
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x424], 0x3
        call ext_00453E20
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x41c], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x41c], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x7bc]
        lea eax, [esp + 0x24]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x24]
        push edx
        push eax
        lea ecx, [esp + 0x58]
        call ext_0044D010
        call ext_006A5FA4
        cmp eax, 0x1
        jne L_cleanup
        push edi
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esp + 0x58]
        call ext_0044CFE0
        mov edi, eax
        lea edx, [esp + 0x38]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x424], 0x4
        call ext_00450220
        push edi
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x428], 0x5
        call ext_00453930
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x420], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x420], bl
        call dword ptr [mem_00924FF4]
        pop edi
    L_cleanup:
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x41c], 0xffffffff
        call ext_0044FB70
    L_exit:
        mov ecx, dword ptr [esp + 0x414]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x418
        ret
    }
}

// [0x0045C3E0] sub_0045C3E0 (449 bytes)
extern "C" void ext_00584A10();
extern "C" void ext_006A6826();
extern "C" int mem_00925694;
extern "C" int mem_00925134;
extern "C" int mem_00924300;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0045C3E0(void* self) {
    __asm {
        push -0x1
        push 0x87f81a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        mov dword ptr [esp], 0x0
        mov eax, dword ptr [esp + 0x24]
        test eax, eax
        push ebx
        mov ebx, ecx
        mov dword ptr [esp + 0x8], ebx
        je loc_45c58f
        push edi
        mov edi, dword ptr [esp + 0x30]
        test edi, edi
        je loc_45c58e
        push ebp
        push eax
        mov eax, dword ptr [ebx + 0x20]
        push 0x4
        push 0x110a
        push eax
        call dword ptr [mem_00925694]
        mov ebp, eax
        test ebp, ebp
        je loc_45c58d
        push esi
        __emit 0x8d
        __emit 0x49
        __emit 0x00
    loc_45c440:
        mov ecx, dword ptr [ebx + 0x20]
        push ebp
        push 0x1
        push 0x110a
        push ecx
        call dword ptr [mem_00925694]
        mov esi, dword ptr [edi + 0x80]
        cmp esi, dword ptr [edi + 0x84]
        mov dword ptr [esp + 0x18], eax
        jbe loc_45c46a
        call dword ptr [mem_00925134]
    loc_45c46a:
        mov dword ptr [esp + 0x20], esi
        mov edi, edi
    loc_45c470:
        mov esi, dword ptr [edi + 0x84]
        cmp dword ptr [edi + 0x80], esi
        jbe loc_45c484
        call dword ptr [mem_00925134]
    loc_45c484:
        mov eax, dword ptr [esp + 0x20]
        cmp eax, esi
        je loc_45c56e
        cmp eax, dword ptr [edi + 0x84]
        jb loc_45c49e
        call dword ptr [mem_00925134]
    loc_45c49e:
        mov edx, dword ptr [esp + 0x20]
        mov edi, dword ptr [edx]
        test edi, edi
        je loc_45c50d
        push ebp
        lea eax, [esp + 0x38]
        push eax
        mov ecx, ebx
        call ext_006A6826
        or dword ptr [esp + 0x10], 0x1
        mov ecx, eax
        mov dword ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924300]
        mov ecx, edi
        mov esi, eax
        call ext_00584A10
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        jmp loc_45c4e0
        __emit 0x8d
        __emit 0x49
        __emit 0x00
    loc_45c4e0:
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [esi]
        jne loc_45c500
        test cl, cl
        je loc_45c4fc
        mov cl, byte ptr [eax + 0x1]
        cmp cl, byte ptr [esi + 0x1]
        jne loc_45c500
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne loc_45c4e0
    loc_45c4fc:
        xor eax, eax
        jmp loc_45c505
    loc_45c500:
        sbb eax, eax
        sbb eax, -0x1
    loc_45c505:
        test eax, eax
        jne loc_45c50d
        mov bl, 0x1
        jmp loc_45c50f
    loc_45c50d:
        xor bl, bl
    loc_45c50f:
        test byte ptr [esp + 0x10], 0x1
        mov dword ptr [esp + 0x2c], 0xffffffff
        je loc_45c52d
        and dword ptr [esp + 0x10], -0x2
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F4]
    loc_45c52d:
        test bl, bl
        jne loc_45c559
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x20]
        cmp edx, dword ptr [ecx + 0x84]
        jb loc_45c547
        call dword ptr [mem_00925134]
    loc_45c547:
        add dword ptr [esp + 0x20], 0x4
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x38]
        jmp loc_45c470
    loc_45c559:
        mov ecx, dword ptr [esp + 0x14]
        push edi
        push ebp
        call fn_0045C3E0
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x38]
        jmp loc_45c580
    loc_45c56e:
        mov eax, dword ptr [ebx + 0x20]
        push ebp
        push 0x0
        push 0x1101
        push eax
        call dword ptr [mem_00925694]
    loc_45c580:
        mov ebp, dword ptr [esp + 0x18]
        test ebp, ebp
        jne loc_45c440
        pop esi
    loc_45c58d:
        pop ebp
    loc_45c58e:
        pop edi
    loc_45c58f:
        mov ecx, dword ptr [esp + 0x18]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    }
}

// [0x00452580] sub_00452580 (462 bytes)
extern "C" void ext_0044DD70();
extern "C" void ext_00494860();
extern "C" void ext_00495F90();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00452580(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87e29a
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        xor edi, edi
        push edi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x768]
        push 0x184
        push eax
        call ebx
        cmp dword ptr [esi + 0x74], edi
        je loc_45273c

        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], edi
        mov ecx, dword ptr [esi + 0xa4]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        lea ecx, [esi + 0x78]
        mov dword ptr [esp + 0x68], edi
        call ext_00494860
        mov eax, dword ptr [esi + 0x74]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov byte ptr [esp + 0x6c], 0x1
        call ext_00495F90
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        add esp, 0xc
        cmp edi, eax
        jbe loc_452613
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x18]

    loc_452613:
        push ebp
        lea ebp, [esp + 0x14]
        jmp loc_452620
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_452620:
        cmp dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], eax
        jbe loc_452630
        call dword ptr [mem_00925134]

    loc_452630:
        test ebp, ebp
        je loc_45263c
        lea eax, [esp + 0x14]
        cmp ebp, eax
        je loc_452642

    loc_45263c:
        call dword ptr [mem_00925134]

    loc_452642:
        cmp edi, dword ptr [esp + 0x10]
        je loc_4526ae
        test ebp, ebp
        jne loc_452652
        call dword ptr [mem_00925134]

    loc_452652:
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_45265d
        call dword ptr [mem_00925134]

    loc_45265d:
        push edi
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x768]
        push eax
        push 0x0
        push 0x180
        push ecx
        call ebx
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FF4]
        cmp edi, dword ptr [ebp + 0x8]
        jb loc_4526a2
        call dword ptr [mem_00925134]

    loc_4526a2:
        mov eax, dword ptr [esp + 0x1c]
        add edi, 0x1c
        jmp loc_452620

    loc_4526ae:
        mov edx, dword ptr [esi + 0x768]
        push -0x1
        push 0x0
        push 0x185
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x768]
        push 0x0
        push 0x0
        push 0x18b
        push eax
        call ebx
        test eax, eax
        pop ebp
        jle loc_4526e9
        mov ecx, dword ptr [esi + 0x768]
        push 0x0
        push 0x1
        push 0x185
        push ecx
        call ebx

    loc_4526e9:
        push 0x0
        lea edx, [esi + 0x748]
        push edx
        mov ecx, esi
        call ext_0044DD70
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x60], 0x0
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        mov dword ptr [esp + 0x60], 0xffffffff
        je loc_45273c
        mov edi, dword ptr [esp + 0x18]
        cmp esi, edi
        je loc_452733

    loc_452720:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne loc_452720
        mov esi, dword ptr [esp + 0x14]

    loc_452733:
        push esi
        call ext_006A5C5C
        add esp, 0x4

    loc_45273c:
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret
    }
}

// [0x004536C0] sub_004536C0 (610 bytes)
extern "C" void ext_0044DAE0();
extern "C" void ext_00450AB0();
extern "C" void ext_00450B00();
extern "C" void ext_004519B0();
extern "C" void ext_00452580();
extern "C" void ext_00452830();
extern "C" void ext_00495F90();
extern "C" void ext_00586140();
extern "C" void ext_00587470();
extern "C" void ext_00587920();
extern "C" void ext_0059DCD0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00A34650;
extern "C" int mem_00924FC8;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004536C0(void* self, int dummy, int arg0) {
    __asm {
        push -1
        push 0x87e376
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push esi
        push edi
        lea eax, [esp + 0x48]
        push eax
        mov esi, ecx
        call ext_0044DAE0
        mov ecx, dword ptr [esi + 0x74]
        xor ebx, ebx
        push eax
        mov dword ptr [esp + 0x70], ebx
        call ext_0059DCD0
        mov edi, eax
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x6c], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp edi, ebx
        je L_done
        push 0x154
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x6c], 1
        je L_null_item
        push edi
        mov ecx, eax
        call ext_00450AB0
        mov edi, eax
        jmp L_after_item
    L_null_item:
        xor edi, edi
    L_after_item:
        push ebp
        mov dword ptr [esp + 0x10], edi
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x78]
        mov edx, dword ptr [edx + 0x5c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x74], 2
        call edx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x74], 3
        call ext_0044DAE0
        mov ecx, dword ptr [esi + 0x74]
        push ecx
        push eax
        lea edx, [esp + 0x28]
        push edx
        mov byte ptr [esp + 0x7c], 4
        call ext_00495F90
        add esp, 0xc
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 3
        call dword ptr [mem_00924FF4]
        mov ebp, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        cmp ebp, eax
        jbe L_vec_ok1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x28]
    L_vec_ok1:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], ecx
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_loop:
        cmp dword ptr [esp + 0x24], eax
        mov ebx, eax
        jbe L_vec_ok2
        call dword ptr [mem_00925134]
    L_vec_ok2:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_vec_bad
        lea ecx, [esp + 0x20]
        cmp eax, ecx
        je L_vec_ok3
    L_vec_bad:
        call dword ptr [mem_00925134]
    L_vec_ok3:
        cmp ebp, ebx
        je L_loop_end
        cmp dword ptr [esp + 0x18], 0
        mov ebx, dword ptr [mem_00925134]
        jne L_vec_ok4
        call ebx
    L_vec_ok4:
        mov edx, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [edx + 8]
        jb L_vec_ok5
        call ebx
    L_vec_ok5:
        push ebp
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [mem_00A34650]
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        mov byte ptr [esp + 0x78], 5
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je L_skip_item
        lea edx, [esp + 0x30]
        push edx
        mov ecx, edi
        call ext_00586140
        test eax, eax
        je L_skip_item
        push eax
        mov ecx, edi
        call ext_00587470
    L_skip_item:
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 3
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [eax + 8]
        jb L_vec_ok6
        call ebx
    L_vec_ok6:
        mov eax, dword ptr [esp + 0x28]
        add ebp, 0x1c
        jmp L_loop
    L_loop_end:
        mov ecx, dword ptr [esp + 0x14]
        push 1
        push edi
        mov dword ptr [esp + 0x18], 0
        call ext_00587920
        mov ecx, esi
        call ext_00452580
        mov ecx, dword ptr [esi + 0x768]
        mov ebp, dword ptr [mem_00925694]
        push 0
        push 0
        push 0x18b
        push ecx
        call ebp
        mov edx, dword ptr [esi + 0x768]
        push -1
        push 0
        push 0x185
        mov edi, eax
        push edx
        sub edi, 1
        call ebp
        mov eax, dword ptr [esi + 0x768]
        push edi
        push 1
        push 0x185
        push eax
        call ebp
        mov ecx, esi
        call ext_00450B00
        mov ecx, esi
        call ext_00452830
        mov ecx, esi
        call ext_004519B0
        mov esi, dword ptr [esp + 0x24]
        test esi, esi
        mov byte ptr [esp + 0x70], 2
        pop ebp
        je L_done
        mov edi, dword ptr [esp + 0x24]
        cmp esi, edi
        je L_free_vec
    L_dtor_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, edi
        jne L_dtor_loop
        mov esi, dword ptr [esp + 0x20]
    L_free_vec:
        push esi
        call ext_006A5C5C
        add esp, 4
    L_done:
        mov ecx, dword ptr [esp + 0x64]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 4
    }
}

// [0x00451700] sub_00451700 (674 bytes)
extern "C" void ext_0042F050();
extern "C" void ext_004512C0();
extern "C" int mem_0087E195;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00928B5D;
extern "C" int mem_00A9F118;
extern "C" int mem_00AD2654;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_00451700(void* self) {
    __asm {
        push    -1
        push    offset mem_0087E195
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x60
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x7c]
        xor     esi, esi
        cmp     edi, esi
        mov     ebp, ecx
        mov     dword ptr [esp + 0xc], esi
        je      loc_45198e
        push    ebx
        mov     ebx, dword ptr [edi + 0x22c]
        cmp     ebx, esi
        je      loc_45198d
        lea     eax, [edi + 0x1b4]
        push    eax
        lea     ecx, [esp + 0x20]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0x1c]
        push    offset mem_00928B5D
        push    ecx
        mov     dword ptr [esp + 0x80], esi
        call    dword ptr [mem_00924FC8]
        add     esp, 8
        test    al, al
        je      loc_451887
        mov     eax, dword ptr [esp + 0x84]
        cmp     eax, esi
        jl      loc_4517bd
        mov     edi, dword ptr [mem_00924FD0]
        lea     esi, [eax + 1]
    loc_451785:
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x58]
        push    offset mem_00AD2654
        push    eax
        call    edi
        add     esp, 0xc
        push    eax
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x7c], 1
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x78], 0
        call    dword ptr [mem_00924FF4]
        sub     esi, 1
        jne     loc_451785
    loc_4517bd:
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    dword ptr [mem_00924FE0]
        push    ebx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x7c], 2
        call    ext_004512C0
        lea     ecx, [esp + 0x38]
        mov     edi, eax
        call    dword ptr [mem_00924FF0]
        cmp     byte ptr [esp + 0x88], 0
        push    eax
        push    0
        je      loc_451848
        mov     edx, dword ptr [ebp + 0x61c]
        mov     esi, dword ptr [mem_00925694]
        push    0x180
        push    edx
        call    esi
        mov     eax, dword ptr [ebp + 0x61c]
        push    0
        push    0
        push    0x18b
        push    eax
        call    esi
        mov     ecx, dword ptr [ebp + 0x61c]
        push    ebx
        sub     eax, 1
        push    eax
        push    0x19a
        push    ecx
        call    esi
        mov     eax, dword ptr [ebp + 0x61c]
        test    edi, edi
        setne   dl
        push    edx
        push    0
        push    0
        push    0x18b
        push    eax
        call    esi
        sub     eax, 1
        jmp     loc_451865
    loc_451848:
        mov     ecx, dword ptr [ebp + 0x61c]
        push    0x1a2
        push    ecx
        call    dword ptr [mem_00925694]
        cmp     eax, -1
        je      loc_451871
        test    edi, edi
        setne   dl
        push    edx
    loc_451865:
        push    eax
        lea     ecx, [ebp + 0x5fc]
        call    ext_0042F050
    loc_451871:
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x78], 0
        call    dword ptr [mem_00924FF4]
        mov     edi, dword ptr [esp + 0x80]
    loc_451887:
        mov     esi, dword ptr [edi + 0x1d4]
        add     dword ptr [esp + 0x84], 1
        cmp     esi, dword ptr [edi + 0x1d8]
        jbe     loc_4518a3
        call    dword ptr [mem_00925134]
    loc_4518a3:
        mov     ebx, esi
        mov     dword ptr [esp + 0x18], ebx
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_4518b0:
        mov     esi, dword ptr [edi + 0x1d8]
        cmp     dword ptr [edi + 0x1d4], esi
        jbe     loc_4518c4
        call    dword ptr [mem_00925134]
    loc_4518c4:
        cmp     ebx, esi
        je      loc_45197b
        cmp     ebx, dword ptr [edi + 0x1d8]
        jb      loc_4518da
        call    dword ptr [mem_00925134]
    loc_4518da:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        je      loc_45191f
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xec]
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [mem_00A9F118]
        or      dword ptr [esp + 0x10], 1
        push    ecx
        push    eax
        mov     byte ptr [esp + 0x80], 3
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        jne     loc_45191f
        cmp     byte ptr [esi + 0x179], al
        jne     loc_45191f
        mov     bl, 1
        jmp     loc_451921
    loc_45191f:
        xor     bl, bl
    loc_451921:
        test    byte ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x78], 0
        je      loc_45193f
        and     dword ptr [esp + 0x10], -2
        lea     ecx, [esp + 0x54]
        call    dword ptr [mem_00924FF4]
    loc_45193f:
        test    bl, bl
        je      loc_45195b
        mov     edx, dword ptr [esp + 0x88]
        mov     eax, dword ptr [esp + 0x84]
        push    edx
        push    eax
        push    esi
        mov     ecx, ebp
        call    ext_00451700
    loc_45195b:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, dword ptr [edi + 0x1d8]
        jb      loc_45196d
        call    dword ptr [mem_00925134]
    loc_45196d:
        add     dword ptr [esp + 0x18], 4
        mov     ebx, dword ptr [esp + 0x18]
        jmp     loc_4518b0
    loc_45197b:
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x78], -1
        call    dword ptr [mem_00924FF4]
    loc_45198d:
        pop     ebx
    loc_45198e:
        mov     ecx, dword ptr [esp + 0x6c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x6c
        ret     0xc
    }
}

// [0x00456E40] sub_00456E40 (695 bytes)
extern "C" void ext_00455D40();
extern "C" void ext_00456510();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A61C6();
extern "C" void ext_006A6526();
extern "C" void ext_006A652C();
extern "C" void ext_006A6748();
extern "C" void ext_006A67C0();
extern "C" void ext_006A67C6();
extern "C" void ext_006A67CC();
extern "C" int mem_0092566C;
extern "C" int mem_00925690;
extern "C" int mem_0092564C;
extern "C" int mem_009240AC;
extern "C" int mem_0092408C;
extern "C" int mem_00925648;
extern "C" int mem_009240F8;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_00456E40(void* self) {
    __asm {
        push -0x1
        push 0x87eb88
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x6c
        push ebp
        push esi
        mov esi, ecx
        push edi
        push esi
        lea ecx, [esp + 0x68]
        call ext_006A652C
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x34]
        push eax
        push ecx
        mov dword ptr [esp + 0x88], 0x0
        call dword ptr [mem_0092566C]
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        call ext_006A67CC
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_00925690]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edi, dword ptr [mem_0092564C]
        neg eax
        push eax
        neg ecx
        push ecx
        lea edx, [esp + 0x3c]
        push edx
        call edi
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        neg eax
        push eax
        neg ecx
        push ecx
        lea eax, [esp + 0x1c]
        push eax
        call edi
        lea ecx, [esp + 0x24]
        call ext_006A61A2
        mov ecx, dword ptr [esp + 0x68]
        push ecx
        mov byte ptr [esp + 0x84], 0x1
        call dword ptr [mem_009240AC]
        push eax
        lea ecx, [esp + 0x28]
        call ext_006A6190
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0xc], 0x92c4ac
        mov eax, dword ptr [esp + 0x20]
        sub eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x68]
        push eax
        push ecx
        push edx
        mov byte ptr [esp + 0x8c], 0x2
        call dword ptr [mem_0092408C]
        push eax
        lea ecx, [esp + 0x10]
        call ext_006A5FFE
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        call ext_006A6196
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        mov ebp, eax
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x4c], ecx
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x150]
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x50], edx
        push ecx
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call eax
        lea eax, [esi + 0xfc]
        test eax, eax
        je L_456F85
        mov eax, dword ptr [eax + 0x4]
    L_456F85:
        mov edx, dword ptr [esp + 0x28]
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        push edx
        call dword ptr [mem_00925648]
        test byte ptr [esi + 0x94], 0x10
        je L_456FF8
        xor edi, edi
    L_456FA1:
        lea eax, [esp + 0x54]
        push eax
        push edi
        mov ecx, esi
        call ext_00455D40
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0xc], edx
        call ext_00456510
        test eax, eax
        je L_456FF0
        mov eax, dword ptr [esi + 0x104]
        push eax
        push eax
        lea eax, [esp + 0x5c]
        push eax
        lea ecx, [esp + 0x30]
        call ext_006A61C6
    L_456FF0:
        add edi, 0x1
        cmp edi, 0x4
        jl L_456FA1
    L_456FF8:
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x194]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x48]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr [eax + 0xc], ecx
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        call edx
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x68]
        call ext_006A67C6
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [esp + 0x68]
        call ext_006A67C0
        mov eax, dword ptr [esp + 0x20]
        sub eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, dword ptr [esp + 0x14]
        push 0xcc0020
        push 0x0
        push 0x0
        push edx
        push eax
        mov eax, dword ptr [esp + 0x7c]
        push ecx
        push 0x0
        push 0x0
        push eax
        call dword ptr [mem_009240F8]
        mov ecx, dword ptr [esp + 0x68]
        mov edx, dword ptr [esi + 0x20]
        push ecx
        push edx
        call dword ptr [mem_00925620]
        test ebp, ebp
        je L_45708A
        mov ebp, dword ptr [ebp + 0x4]
    L_45708A:
        mov eax, dword ptr [esp + 0x28]
        push ebp
        push eax
        call ext_006A6196
        lea ecx, [esp + 0xc]
        call ext_006A5FF2
        lea ecx, [esp + 0x24]
        call ext_006A6748
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x80], 0x1
        mov dword ptr [esp + 0xc], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x80], 0x0
        call ext_006A619C
        lea ecx, [esp + 0x64]
        mov dword ptr [esp + 0x80], 0xffffffff
        call ext_006A6526
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebp
        add esp, 0x78
        ret
    }
}

// [0x0045FFC0] sub_0045FFC0 (747 bytes)
extern "C" void ext_0043EFA0();
extern "C" void ext_004543F0();
extern "C" void ext_0045F4B0();
extern "C" void ext_004605F0();
extern "C" void ext_00468180();
extern "C" void ext_00468F30();
extern "C" void ext_00594000();
extern "C" void ext_0059F5C0();
extern "C" void ext_006629B0();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" void ext_0066A330();
extern "C" void ext_006A5C62();
extern "C" int mem_0087FEE3;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00928EFC;
extern "C" int mem_009324A4;
extern "C" int mem_009328B8;
extern "C" int mem_009328CC;
extern "C" int mem_009355DC;
extern "C" int mem_00937FA4;
extern "C" int mem_00937FB0;
extern "C" int mem_00938028;
extern "C" int mem_00938030;
extern "C" int mem_0093805C;
extern "C" int mem_00938064;
extern "C" int mem_00938078;
extern "C" int mem_0093808C;

extern "C" __declspec(naked) void __fastcall fn_0045FFC0(void* self) {
    __asm {
        push    -1
        push    offset mem_0087FEE3
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x5c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x14], esi
        call    ext_0043EFA0
        lea     ebp, [esi + 0x248]
        mov     dword ptr [ebp], offset mem_009328B8
        lea     ebx, [esi + 0x24c]
        mov     dword ptr [ebx], offset mem_009355DC
        mov     dword ptr [esi + 0x250], offset mem_009328CC
        mov     dword ptr [esp + 0x74], 0
        mov     dword ptr [esi + 0x254], offset mem_00928EFC
        push    0
        push    0
        lea     ecx, [esi + 0x258]
        mov     byte ptr [esp + 0x7c], 1
        mov     dword ptr [esi], offset mem_0093808C
        mov     dword ptr [ebp], offset mem_00938078
        mov     dword ptr [ebx], offset mem_00938064
        mov     dword ptr [esi + 0x250], offset mem_0093805C
        mov     dword ptr [esi + 0x254], offset mem_00938030
        call    ext_0045F4B0
        lea     edi, [esi + 0x27c]
        mov     ecx, edi
        mov     byte ptr [esp + 0x74], 2
        mov     dword ptr [esi + 0x278], offset mem_00938028
        call    ext_0059F5C0
        mov     dword ptr [edi + 4], eax
        mov     byte ptr [eax + 0x2d], 1
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 4], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [eax + 8], eax
        xor     eax, eax
        mov     dword ptr [edi + 8], eax
        mov     dword ptr [esi + 0x2d0], eax
        fld1
        sub     esp, 0x10
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [mem_009324A4]
        lea     edi, [esi + 0x2d4]
        fst     dword ptr [esp + 8]
        mov     ecx, edi
        fst     dword ptr [esp + 4]
        mov     byte ptr [esp + 0x84], 4
        fstp    dword ptr [esp]
        call    ext_0066A330
        push    offset mem_00937FB0
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x78], 5
        call    dword ptr [mem_00924FE4]
        push    offset mem_00937FA4
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x78], 6
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     byte ptr [esp + 0x80], 7
        call    ext_006690D0
        mov     ecx, eax
        call    ext_00669AD0
        mov     byte ptr [esp + 0x74], 9
        lea     ecx, [esp + 0x34]
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x74], 0xa
        call    dword ptr [mem_00924FF4]
        lea     eax, [esp + 0x18]
        push    eax
        call    ext_006629B0
        add     esp, 4
        test    al, al
        je      L_00460165
        mov     ecx, dword ptr [esi + 0x254]
        mov     dword ptr [esp + 0x10], ecx
        push    0
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FF0]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [edx + 0x20]
        lea     ecx, [esi + 0x254]
        call    eax
    L_00460165:
        call    ext_00594000
        mov     eax, dword ptr [eax + 0x2dc]
        push    ebp
        mov     ecx, eax
        call    ext_004543F0
        call    ext_00594000
        mov     eax, dword ptr [eax + 0x26c]
        mov     eax, dword ptr [eax + 0x58]
        push    ebx
        mov     ecx, eax
        call    ext_004543F0
        lea     eax, [esi + 0x250]
        push    eax
        call    ext_00468180
        mov     ecx, eax
        call    ext_00468F30
        push    0x1b4
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        test    eax, eax
        mov     byte ptr [esp + 0x74], 0xb
        je      L_004601C7
        push    esi
        mov     ecx, eax
        call    ext_004605F0
        mov     ebx, eax
        jmp     L_004601C9
    L_004601C7:
        xor     ebx, ebx
    L_004601C9:
        mov     ecx, dword ptr [esi + 0x2d0]
        cmp     ebx, ecx
        mov     byte ptr [esp + 0x74], 0xa
        je      L_004601E5
        test    ecx, ecx
        je      L_004601E5
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    1
        call    eax
    L_004601E5:
        mov     dword ptr [esi + 0x2d0], ebx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esi + 0x2b8], edi
        mov     dword ptr [esi + 0x288], edi
        mov     dword ptr [esi + 0x28c], edi
        mov     dword ptr [esi + 0x2c0], edi
        mov     dword ptr [esi + 0x2bc], edi
        mov     dword ptr [esi + 0x2c8], edi
        mov     dword ptr [esi + 0x2cc], edi
        mov     dword ptr [esi + 0x2c4], edi
        mov     dword ptr [esi + 0xc4], edi
        mov     dword ptr [esi + 0xc8], edi
        mov     dword ptr [esi + 0xd0], edi
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0x2b4], edi
        mov     dword ptr [esi + 0x290], edi
        mov     dword ptr [esi + 0x294], edi
        mov     dword ptr [esi + 0x298], edi
        mov     dword ptr [esi + 0x29c], edi
        mov     dword ptr [esi + 0x2a0], edi
        mov     dword ptr [esi + 0x2a4], edi
        mov     dword ptr [esi + 0x2a8], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2b0], edi
        mov     byte ptr [esp + 0x74], 5
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x6c]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x68
        ret
    }
}
