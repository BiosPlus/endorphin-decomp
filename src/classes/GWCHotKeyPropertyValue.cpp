// Decompiled translation unit: src/classes/GWCHotKeyPropertyValue.cpp

// [0x006B3CC0] GWCHotKeyPropertyValue::vfunc_5 (93 bytes)
extern "C" void __cdecl ext_006A5C5C(void* p);
extern "C" void* __cdecl ext_006A5C62(int n);

extern "C" void __fastcall fn_006B3CC0(void* self, int edx_unused, int a1, unsigned char a2) {
    unsigned char* esi = (unsigned char*)self;
    if (esi[0x34] == 1 && *(int*)(esi + 0x4) == 0x12c) {
        ext_006A5C5C(*(void**)(esi + 0x40));
    }
    unsigned char al = a2;
    esi[0x34] = al;
    if (al == 0) {
        if (*(int*)(esi + 0x4) == 0x12c) {
            *(int*)(esi + 0x40) = a1;
        }
    } else {
        if (*(int*)(esi + 0x4) == 0x12c) {
            void* p = ext_006A5C62(4);
            *(void**)(esi + 0x40) = p;
            *(int*)p = 0;
        }
    }
}

// [0x006B3DC0] GWCHotKeyPropertyValue::vfunc_2 (483 bytes)
extern "C" void ext_00430E20();
extern "C" int mem_009242FC;
extern "C" int mem_0092556C;
extern "C" int mem_00925570;
extern "C" int mem_009242F0;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00924B80;
extern "C" int mem_00924518;
extern "C" int mem_009242F8;

extern "C" __declspec(naked) void* __fastcall fn_006B3DC0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b79b0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr [esp + 0xc], edi
        mov ebp, dword ptr [esp + 0x50]
        mov esi, ecx
        mov ecx, ebp
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 0x40]
        movzx ecx, word ptr [eax]
        cmp ecx, edi
        mov dword ptr [esp + 0x48], edi
        mov dword ptr [esp + 0xc], 1
        je L_6b3f80
        mov esi, dword ptr [mem_0092556C]
        push ebx
        movzx ebx, word ptr [eax + 2]
        push edi
        push ecx
        call esi
        mov edi, dword ptr [mem_00925570]
        mov edx, ebx
        and edx, 8
        shl edx, 5
        push 0x14
        lea ecx, [esp + 0x34]
        add edx, eax
        push ecx
        shl edx, 0x10
        push edx
        call edi
        test bl, 2
        je L_6b3e9e
        push 0
        push 0x11
        call esi
        push 0x14
        lea ecx, [esp + 0x20]
        push ecx
        shl eax, 0x10
        push eax
        call edi
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F0]
        push 0x991a04
        push eax
        lea eax, [esp + 0x1c]
        push eax
        mov dword ptr [esp + 0x58], 1
        call ext_00430E20
        add esp, 0xc
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x50], 2
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x4c], 0
        call dword ptr [mem_009242F4]
L_6b3e9e:
        test bl, 1
        je L_6b3f07
        push 0
        push 0x10
        call esi
        push 0x14
        lea ecx, [esp + 0x20]
        push ecx
        shl eax, 0x10
        push eax
        call edi
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F0]
        push 0x991a04
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov dword ptr [esp + 0x58], 3
        call ext_00430E20
        add esp, 0xc
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x50], 4
        call dword ptr [mem_00924B80]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x4c], 0
        call dword ptr [mem_009242F4]
L_6b3f07:
        test bl, 4
        pop ebx
        je L_6b3f71
        push 0
        push 0x12
        call esi
        push 0x14
        lea ecx, [esp + 0x1c]
        push ecx
        shl eax, 0x10
        push eax
        call edi
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        push 0x991a04
        push eax
        lea eax, [esp + 0x1c]
        push eax
        mov dword ptr [esp + 0x54], 5
        call ext_00430E20
        add esp, 0xc
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x4c], 6
        call dword ptr [mem_00924B80]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x48], 0
        call dword ptr [mem_009242F4]
L_6b3f71:
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_00924518]
        jmp L_6b3f8d
L_6b3f80:
        push 0x938d40
        mov ecx, ebp
        call dword ptr [mem_009242F8]
L_6b3f8d:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 4
    }
}
