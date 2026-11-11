// Decompiled translation unit: src/leaf/decompiled_450000.cpp

extern "C" void ext_00454BB0();

// [0x00454BE0] sub_00454BE0 (25 bytes)
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
