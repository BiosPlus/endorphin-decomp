// Decompiled translation unit: src/Properties/GWCPropertiesControlDriver.cpp

// [0x0041D370] Properties::GWCPropertiesControlDriver::vfunc_1 (20 bytes)
extern "C" void __fastcall ext_006AA890(void* self);

extern "C" void __fastcall fn_0041D370(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* child = *(void**)(p + 0x0c);
    ext_006AA890(child);
    *(int*)(p + 0x10) = 0;
}

// [0x0041CA70] Properties::GWCPropertiesControlDriver::vfunc_8 (21 bytes)
extern "C" void ext_006AD180();

// Ignores ecx-this; takes one stack arg (a1 at [esp+4]). If a1 is null, return 0;
// otherwise replace ecx with a1 and tail-call 0x006AD180 (ret 4 after it).
extern "C" __declspec(naked) void __fastcall fn_0041CA70(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        jne has_arg
        xor eax, eax
        ret 4
    has_arg:
        call ext_006AD180
        ret 4
    }
}

// [0x0041D390] Properties::GWCPropertiesControlDriver::vfunc_2 (52 bytes)
extern "C" void __fastcall ext_006A95C0(void* self);
extern "C" void* __fastcall ext_006A7BB0(void* self);
extern "C" void* __fastcall ext_006ACFB0(void* self);

extern "C" void __fastcall fn_0041D390(void* self) {
    unsigned char* p = (unsigned char*)self;
    ext_006A95C0(*(void**)(p + 0x0c));
    if (ext_006A7BB0(*(void**)(p + 0x0c)) != 0) {
        void* r = ext_006ACFB0(ext_006A7BB0(*(void**)(p + 0x0c)));
        *(void**)(p + 0x18) = r;
    } else {
        *(int*)(p + 0x18) = 0;
    }
}

// [0x0041DED0] Properties::GWCPropertiesControlDriver::vfunc_5 (60 bytes)
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041DED0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip1
        call ebp
    L_skip1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_skip2
        call ebp
    L_skip2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x0041D610] Properties::GWCPropertiesControlDriver::vfunc_7 (414 bytes)
extern "C" void ext_006B4440();
extern "C" void ext_006A6E9E();
extern "C" void ext_006AD180();
extern "C" void ext_006AD970();
extern "C" void ext_0041CEB0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00991074;
extern "C" int mem_00991070;
extern "C" int mem_009242F0;
extern "C" int mem_00991078;
extern "C" int mem_00991080;

extern "C" __declspec(naked) void __fastcall fn_0041D610(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x877622
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        mov esi, dword ptr [esp + 0x4c]
        push edi
        mov ecx, esi
        call ext_006B4440
        test eax, eax
        jne L_nonzero
        push eax
        push 0xa2f0ac
        push 0xa2f08c
        push eax
        push esi
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_end
        mov ecx, dword ptr [esp + 0x54]
        lea eax, [esp + 0x8]
        push eax
        call ext_0041CEB0
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [edi + 0x30]
        push eax
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_nonzero:
        mov ecx, esi
        call ext_006AD180
        mov ecx, esi
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD970
        cmp eax, dword ptr [mem_00991074]
        jne L_check2
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov byte ptr [edi + 0x58], al
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check2:
        cmp eax, dword ptr [mem_00991070]
        jne L_check3
        mov ecx, esi
        call ext_006B4440
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x58]
        mov esi, eax
        call ext_0041CEB0
        mov ecx, eax
        mov dword ptr [esp + 0x48], 1
        call dword ptr [mem_00924FF0]
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check3:
        cmp eax, dword ptr [mem_00991078]
        jne L_check4
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        mov dword ptr [edi + 0x58], eax
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x44
        ret 8
    L_check4:
        cmp eax, dword ptr [mem_00991080]
        jne L_end
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp qword ptr [edi + 0x58]
    L_end:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x44
        ret 8
    }
}

// [0x0041D3D0] Properties::GWCPropertiesControlDriver::vfunc_3 (52 bytes)
extern "C" void ext_006A7BC0();
extern "C" void ext_006A89B0();
extern "C" void ext_006A93A0();
extern "C" void ext_006AC2E0();

extern "C" __declspec(naked) void __fastcall fn_0041D3D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0xc]
        push eax
        mov byte ptr [esi + 0x2c], 0
        call ext_006A89B0
        test eax, eax
        je L_skip
        mov ecx, dword ptr [esi + 0xc]
        push eax
        call ext_006A7BC0
    L_skip:
        mov ecx, dword ptr [esi + 0xc]
        call ext_006AC2E0
        mov ecx, dword ptr [esi + 0xc]
        push 1
        call ext_006A93A0
        pop esi
        ret
    }
}

// [0x0041E400] Properties::GWCPropertiesControlDriver::vfunc_4 (178 bytes)
extern "C" void ext_0041E160();
extern "C" void ext_00598FF0();
extern "C" void ext_006A63BE();
extern "C" void ext_006AEC60();
extern "C" void ext_006AEC90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041E400(void* self, int edx_unused, int arg0, int arg1) {
    __asm {
        sub esp, 0x8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0xc]
        test eax, eax
        mov dword ptr [esp + 0x8], edi
        je loc_41e4ab
        mov eax, dword ptr [eax + 0x19c]
        cmp eax, dword ptr [esp + 0x14]
        jne loc_41e4ab
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        mov ebx, dword ptr [ecx]
        push ebp
loc_41e431:
        cmp ebx, dword ptr [esi + 0x4]
        je loc_41e4a8
        mov ebp, dword ptr [ebx + 0x44]
        call ext_006AEC60
        push eax
        mov ecx, ebp
        call ext_006A63BE
        test eax, eax
        je loc_41e495
        mov edx, dword ptr [ebx + 0x1c]
        lea eax, [esp + 0x20]
        lea esi, [edi + 0x1c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], edx
        call ext_00598FF0
        mov ecx, ebp
        mov edi, eax
        call ext_006AEC90
        neg al
        sbb eax, eax
        neg eax
        add eax, 1
        test edi, edi
        mov dword ptr [esp + 0x10], eax
        je loc_41e47e
        mov dword ptr [edi], eax
        jmp loc_41e491
loc_41e47e:
        push 1
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call ext_0041E160
loc_41e491:
        mov esi, dword ptr [esp + 0x1c]
loc_41e495:
        cmp ebx, dword ptr [esi + 0x4]
        jne loc_41e4a0
        call dword ptr [mem_00925134]
loc_41e4a0:
        mov ebx, dword ptr [ebx]
        mov edi, dword ptr [esp + 0x14]
        jmp loc_41e431
loc_41e4a8:
        pop ebp
        pop esi
        pop ebx
loc_41e4ab:
        pop edi
        add esp, 0x8
        ret 0x8
    }
}

// [0x0041E5A0] Properties::GWCPropertiesControlDriver::vfunc_0 (5728 bytes)
extern "C" void ext_00401AC0();
extern "C" void ext_004026E0();
extern "C" void ext_00403530();
extern "C" void ext_0041CCC0();
extern "C" void ext_0041CD10();
extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_0041DA50();
extern "C" void ext_0041DF10();
extern "C" void ext_0041E0D0();
extern "C" void ext_0041E160();
extern "C" void ext_0041E540();
extern "C" void ext_004622F0();
extern "C" void ext_00465CF0();
extern "C" void ext_00489320();
extern "C" void ext_00492A50();
extern "C" void ext_00594000();
extern "C" void ext_00598FF0();
extern "C" void ext_0060E860();
extern "C" void ext_00660A50();
extern "C" void ext_006616C0();
extern "C" void ext_00672D10();
extern "C" void ext_00673B60();
extern "C" void ext_00673B80();
extern "C" void ext_00673B90();
extern "C" void ext_00675000();
extern "C" void ext_00675100();
extern "C" void ext_00676230();
extern "C" void ext_00676780();
extern "C" void ext_00677900();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6C87();
extern "C" void ext_006A6E9E();
extern "C" void ext_006A8760();
extern "C" void ext_006A8840();
extern "C" void ext_006ABF00();
extern "C" void ext_006ACEE0();
extern "C" void ext_006AD040();
extern "C" void ext_006AD060();
extern "C" void ext_006AD170();
extern "C" void ext_006AD920();
extern "C" void ext_006ADD30();
extern "C" void ext_006AEC70();
extern "C" void ext_006AF5D0();
extern "C" void ext_006AF770();
extern "C" void ext_006AF9F0();
extern "C" void ext_006AFCD0();
extern "C" void ext_006AFD40();
extern "C" void ext_006AFDC0();
extern "C" void ext_006B0040();
extern "C" void ext_006B0280();
extern "C" void ext_006B0520();
extern "C" void ext_006B4440();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_009244D4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00991070;
extern "C" int mem_00991074;
extern "C" int mem_00991078;
extern "C" int mem_00ACC56C;
extern "C" int mem_00ACC570;
extern "C" int mem_00B599BC;
extern "C" int mem_00B5D220;
extern "C" int mem_00B5D224;

extern "C" __declspec(naked) void __fastcall fn_0041E5A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push 0xffffffff
        push 0x877900
        mov eax,fs:[0]
        push eax
        mov dword ptr fs:[0],esp
        sub esp,0x2e8
        mov eax,dword ptr [esp+0x2fc]
        push ebx
        push ebp
        mov ebp,dword ptr [esp+0x300]
        push esi
        push edi
        xor edi,edi
        cmp eax,edi
        mov dword ptr [esp+0x18],edi
        mov ebx,dword ptr [ebp+0x0]
        mov esi,ecx
        mov dword ptr [esp+0x70],ebx
        je L_41E5F7
        push edi
        push 0xa2f0ac
        push 0xa2f08c
        push edi
        push eax
        call ext_006A6E9E
        add esp,0x14
        mov edi,eax
L_41E5F7:
        mov eax,dword ptr [ebx+0x48]
        mov ecx,ebp
        mov dword ptr [esp+0x1c],eax
        call ext_00673B90
        lea ecx,[ebp+0x10]
        call ext_006616C0
        call ext_00594000
        mov eax,dword ptr [eax+0x274]
        mov dword ptr [esp+0x24],eax
        mov eax,dword ptr [eax+0x4]
        test eax,eax
        je L_41E788
        mov ecx,dword ptr [esp+0x24]
        mov edx,dword ptr [ecx+0x8]
        sub edx,eax
        sar edx,0x2
        je L_41E788
        lea ecx,[esp+0x74]
        call dword ptr mem_00924FE8
        lea ecx,[esp+0x90]
        mov dword ptr [esp+0x300],0x0
        
        call ext_00676780
        mov eax,dword ptr [esi+0x4]
        push 0x0
        push 0xa2f18c
        push 0xa2f15c
        push 0x0
        push eax
        mov byte ptr [esp+0x314],0x1
        
        call ext_006A6E9E
        add esp,0x14
        test eax,eax
        je L_41E733
        lea ecx,[esp+0x90]
        push ecx
        push ebp
        mov ecx,eax
        call ext_00677900
        lea edx,[esp+0xc4]
        push edx
        lea ecx,[esp+0x94]
        call ext_00676230
        push eax
        lea ecx,[esp+0x78]
        mov byte ptr [esp+0x304],0x2
        
        call dword ptr mem_00924FDC
        lea ecx,[esp+0xc4]
        mov byte ptr [esp+0x300],0x1
        
        call dword ptr mem_00924FF4
        mov ecx,dword ptr [esp+0x24]
        lea eax,[esp+0x74]
        push eax
        call ext_00675100
        test eax,eax
        je L_41E733
        lea ecx,[esp+0x10]
        push ecx
        mov ecx,eax
        mov dword ptr [esp+0x20],0x2
        
        call ext_00675000
        push eax
        lea ecx,[ebp+0x34]
        mov byte ptr [esp+0x304],0x3
        
        call ext_0041CF50
        mov ecx,dword ptr [esp+0x14]
        test ecx,ecx
        mov byte ptr [esp+0x300],0x1
        
        je L_41E723
        mov edx,dword ptr [ecx]
        mov edx,dword ptr [edx+0x78]
        lea eax,[esp+0x10]
        push eax
        call edx
L_41E723:
        push 0xff0000
        mov ecx,ebp
        call ext_00673B80
        mov byte ptr [ebp+0x66],0x1
L_41E733:
        mov eax,dword ptr [esp+0xb4]
        test eax,eax
        mov byte ptr [esp+0x300],0x0
        
        je L_41E74F
        push eax
        call ext_006A5C5C
        add esp,0x4
L_41E74F:
        xor eax,eax
        lea ecx,[esp+0x94]
        mov dword ptr [esp+0xb4],eax
        mov dword ptr [esp+0xb8],eax
        mov dword ptr [esp+0xbc],eax
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x74]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
L_41E788:
        mov eax,dword ptr [esp+0x1c]
        add eax,0xfffffffe
        cmp eax,0x19
        ja L_41FA89
        movzx eax, byte ptr [eax + 0x41fc3c]
        jmp dword ptr [4*eax + 0x41fc00]
L_41E7A6:
        cmp byte ptr [ebx+0xb2],0x0
        jne L_41E944
        cmp byte ptr [ebx+0xb3],0x0
        jne L_41E944
        cmp byte ptr [ebx+0xb9],0x0
        jne L_41E875
        cmp byte ptr [ebx+0xba],0x0
        jne L_41E875
        test edi,edi
        je L_41E801
        mov ebx,dword ptr [esi+0x10]
        lea ecx,[ebx+0x1]
        mov dword ptr [esi+0x10],ecx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFD40
        jmp L_41E827
L_41E801:
        mov edi,dword ptr [esi+0x10]
        mov ebx,dword ptr [esi+0xc]
        lea edx,[edi+0x1]
        push 0xffffffff
        mov ecx,ebp
        mov dword ptr [esi+0x10],edx
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push edi
        mov ecx,ebx
        call ext_006ABF00
L_41E827:
        mov ebx,eax
        lea eax,[esp+0x250]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov edi,dword ptr [ebx]
        mov ecx,eax
        mov dword ptr [esp+0x300],0xc
        
        add edi,0x30
        call dword ptr mem_00924FF0
        mov edx,dword ptr [edi]
        push eax
        mov ecx,ebx
        call edx
        lea ecx,[esp+0x250]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        jmp L_41EA9E
L_41E875:
        push 0xb0
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x9
        
        je L_41E900
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        lea ecx,[esp+0x28]
        call dword ptr mem_009242F0
        mov eax,dword ptr [esi+0x10]
        lea ecx,[eax+0x1]
        mov dword ptr [esi+0x10],ecx
        mov dl,byte ptr [ebx+0xba]
        mov ecx,dword ptr mem_00B5D220
        push ecx
        mov byte ptr [esp+0x20],dl
        mov edx,dword ptr mem_00B5D224
        mov ecx,dword ptr [esp+0x20]
        push edx
        push 0x92ab40
        push 0x92dfdc
        push ecx
        mov ecx,dword ptr [esp+0x24]
        lea edx,[esp+0x38]
        push edx
        push eax
        mov byte ptr [esp+0x31c],0xa
        
        mov dword ptr [esp+0x34],0x2
        
        call ext_006B0520
        jmp L_41E902
L_41E900:
        xor eax,eax
L_41E902:
        mov dword ptr [esp+0x1c],eax
        test byte ptr [esp+0x18],0x2
        mov ebx,eax
        mov dword ptr [esp+0x300],0xffffffff
        
        je L_41E926
        lea ecx,[esp+0x24]
        call dword ptr mem_009242F4
        mov eax,ebx
L_41E926:
        test edi,edi
        push eax
        je L_41E937
        mov ecx,edi
        call ext_006AF770
        jmp L_41EA9E
L_41E937:
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8760
        jmp L_41EA9E
L_41E944:
        push 0xb4
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x1c],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x4
        
        je L_41E9BB
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        lea ecx,[esp+0x30]
        call dword ptr mem_009242F0
        mov eax,dword ptr [esi+0x10]
        lea ecx,[eax+0x1]
        mov dword ptr [esi+0x10],ecx
        mov dl,byte ptr [ebx+0xb2]
        mov byte ptr [esp+0x10],dl
        mov ecx,dword ptr [esp+0x10]
        push 0xffffffff
        push ecx
        mov ecx,dword ptr [esp+0x24]
        lea edx,[esp+0x34]
        push edx
        push eax
        mov byte ptr [esp+0x310],0x5
        
        mov dword ptr [esp+0x28],0x1
        
        call ext_006B0280
        mov ebx,eax
        jmp L_41E9BD
L_41E9BB:
        xor ebx,ebx
L_41E9BD:
        test byte ptr [esp+0x18],0x1
        mov dword ptr [esp+0x300],0xffffffff
        
        je L_41E9D9
        lea ecx,[esp+0x2c]
        call dword ptr mem_009242F4
L_41E9D9:
        lea eax,[esp+0x234]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x7
        
        call dword ptr mem_00924FF0
        push eax
        lea ecx,[esp+0x2c]
        call dword ptr mem_009242F0
        lea ecx,[esp+0x28]
        push ecx
        lea ecx,[ebx+0x8c]
        mov byte ptr [esp+0x304],0x8
        
        call dword ptr mem_009244D4
        lea ecx,[esp+0x28]
        call dword ptr mem_009242F4
        lea ecx,[esp+0x234]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        test edi,edi
        push ebx
        je L_41EA50
        mov ecx,edi
        call ext_006AF770
        jmp L_41EA58
L_41EA50:
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8760
L_41EA58:
        mov edx,dword ptr [ebp+0x14]
        lea eax,[esp+0x1c]
        lea edi,[esi+0x1c]
        push eax
        mov ecx,edi
        mov dword ptr [esp+0x20],edx
        call ext_00598FF0
        test eax,eax
        jne L_41EA93
        xor ecx,ecx
        cmp byte ptr [esi+0x2c],cl
        push 0x1
        sete cl
        lea edx,[esp+0x14]
        push edx
        lea eax,[esp+0x24]
        push eax
        mov dword ptr [esp+0x1c],ecx
        mov ecx,edi
        call ext_0041E160
        jmp L_41EA9E
L_41EA93:
        cmp dword ptr [eax],0x0
        jne L_41EA9E
        mov dword ptr [eax],0x1
L_41EA9E:
        mov ecx,dword ptr [ebp+0x14]
        lea edx,[esp+0x10]
        mov dword ptr [esp+0x10],ecx
        push edx
        lea ecx,[esi+0x1c]
        call ext_00598FF0
        test eax,eax
        je L_41EAC4
        cmp dword ptr [eax],0x1
        jne L_41EAC4
        push 0x0
        mov ecx,ebx
        call ext_006AEC70
L_41EAC4:
        mov edi,ebx
        jmp L_41FB66
L_41EACB:
        mov ecx,dword ptr [ebp+0x38]
        mov edx,dword ptr [ecx]
        lea eax,[ebp+0x34]
        push eax
        mov eax,dword ptr [edx+0xc]
        call eax
        lea ecx,[ebp+0x58]
        mov byte ptr [ecx],al
        mov ebx,dword ptr [esi+0x10]
        lea edx,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],edx
        mov eax,mem_00991074
        push ecx
        push eax
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfd0
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        push 0x8
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0xd
        
        je L_41EB52
        mov ecx,eax
        call ext_006B0040
        jmp L_41EB54
L_41EB52:
        xor eax,eax
L_41EB54:
        push eax
        mov ecx,edi
        mov dword ptr [esp+0x304],0xffffffff
        
        call ext_006B4440
        mov ecx,eax
        call ext_006AD920
        jmp L_41FB66
L_41EB73:
        mov ecx,dword ptr [ebp+0x38]
        mov edx,dword ptr [ecx]
        lea eax,[ebp+0x34]
        push eax
        mov eax,dword ptr [edx+0x8]
        call eax
        mov dword ptr [ebp+0x58],eax
        mov eax,dword ptr [esi+0x10]
        lea ecx,[ebp+0x58]
        mov dword ptr [esp+0x18],eax
        push 0x0
        add eax,0x1
        push ecx
        mov dword ptr [esi+0x10],eax
        mov ecx,dword ptr mem_00991078
        push ecx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        mov edx,dword ptr [esp+0x24]
        push eax
        push edx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        lea ecx,[ebx+0x118]
        mov dword ptr [esp+0x1c],ecx
        xor ebx,ebx
        call ext_0060E860
        test eax,eax
        jle L_41FB66
        jmp L_41EC00
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_41EC00:
        mov ecx,dword ptr [esp+0x1c]
        push ebx
        call ext_0041CD10
        push ebx
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        mov ecx,dword ptr [esp+0x1c]
        add ebx,0x1
        call ext_0060E860
        cmp ebx,eax
        jl L_41EC00
        jmp L_41FB66
L_41EC37:
        mov ecx,dword ptr [ebp+0x38]
        mov eax,dword ptr [ecx]
        mov edx,dword ptr [eax+0x8]
        lea ebx,[ebp+0x34]
        push ebx
        call edx
        mov dword ptr [ebp+0x58],eax
        mov eax,dword ptr [esi+0x10]
        lea ecx,[ebp+0x58]
        mov dword ptr [esp+0x18],eax
        add eax,0x1
        push 0x0
        mov dword ptr [esi+0x10],eax
        mov eax,mem_00991078
        push ecx
        push eax
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        mov ecx,dword ptr [esp+0x24]
        push eax
        push ecx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        push ebx
        lea ecx,[esp+0x20]
        call ext_0041CF00
        mov ecx,dword ptr [esp+0x20]
        mov edx,dword ptr [ecx]
        mov edx,dword ptr [edx+0x68]
        lea eax,[esp+0x1c]
        push eax
        mov dword ptr [esp+0x304],0xe
        
        call edx
        xor ebx,ebx
        test eax,eax
        mov dword ptr [esp+0x10],eax
        jle L_41ED27
L_41ECD0:
        mov ecx,dword ptr [esp+0x20]
        mov eax,dword ptr [ecx]
        mov eax,dword ptr [eax+0x6c]
        push ebx
        lea edx,[esp+0x20]
        push edx
        lea edx,[esp+0x274]
        push edx
        call eax
        push ebx
        mov ecx,eax
        mov byte ptr [esp+0x304],0xf
        
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        lea ecx,[esp+0x26c]
        mov byte ptr [esp+0x300],0xe
        
        call dword ptr mem_00924FF4
        add ebx,0x1
        cmp ebx,dword ptr [esp+0x10]
        jl L_41ECD0
L_41ED27:
        mov ecx,dword ptr [esp+0x20]
        test ecx,ecx
        mov dword ptr [esp+0x300],0xffffffff
        
        je L_41FB66
        mov edx,dword ptr [ecx]
        mov edx,dword ptr [edx+0x78]
        lea eax,[esp+0x1c]
        push eax
        call edx
        jmp L_41FB66
L_41ED4F:
        mov ebx,dword ptr [esi+0x10]
        lea eax,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],eax
        mov ecx,dword ptr mem_00991070
        push 0x0
        push ecx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        xor eax,eax
        mov dword ptr [esp+0x44],eax
        mov dword ptr [esp+0x48],eax
        mov dword ptr [esp+0x4c],eax
        mov dword ptr [esp+0x300],0x10
        
        mov dword ptr [esp+0x34],eax
        mov dword ptr [esp+0x38],eax
        mov dword ptr [esp+0x3c],eax
        mov byte ptr [esp+0x300],0x11
        
        call ext_0041DA50
        push 0x0
        push 0xa2f13c
        push 0xa2e2f8
        mov ebx,eax
        push 0x0
        push ebx
        call ext_006A6E9E
        add esp,0x14
        test eax,eax
        je L_41EEE6
        mov eax,dword ptr [eax+0xb8]
        test eax,eax
        je L_41EE27
        mov ecx,dword ptr [eax+0xfc]
        test ecx,ecx
        je L_41EE18
        mov edx,dword ptr [ecx+0x10]
        mov edx,dword ptr [edx+0x18]
        add ecx,0x10
        lea eax,[esp+0x30]
        push eax
        call edx
        jmp L_41EE27
L_41EE18:
        lea ecx,[eax+0x10]
        mov eax,dword ptr [ecx]
        mov eax,dword ptr [eax+0x18]
        lea edx,[esp+0x30]
        push edx
        call eax
L_41EE27:
        lea ecx,[esp+0xe0]
        push ecx
        lea ecx,[esp+0x34]
        call ext_00489320
        mov ebx,dword ptr [eax]
        mov edx,dword ptr [eax+0x4]
        mov dword ptr [esp+0x1c],ebx
        mov dword ptr [esp+0x20],edx
        jmp L_41EE50
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        mov edi,edi
L_41EE50:
        mov eax,dword ptr [esp+0x38]
        cmp dword ptr [esp+0x34],eax
        mov dword ptr [esp+0x10],eax
        jbe L_41EE64
        call dword ptr mem_00925134
L_41EE64:
        test ebx,ebx
        je L_41EE70
        lea eax,[esp+0x30]
        cmp ebx,eax
        je L_41EE76
L_41EE70:
        call dword ptr mem_00925134
L_41EE76:
        mov ecx,dword ptr [esp+0x10]
        cmp dword ptr [esp+0x20],ecx
        je L_41EF35
        lea ecx,[esp+0x1c]
        call ext_00492A50
        push eax
        lea ecx,[esp+0xec]
        call dword ptr mem_00924FE0
        mov dword ptr [esp+0x104],0x0
        
        lea edx,[esp+0xe8]
        push edx
        lea ecx,[esp+0x44]
        mov byte ptr [esp+0x304],0x12
        
        call ext_0041E0D0
        lea ecx,[esp+0xe8]
        mov byte ptr [esp+0x300],0x11
        
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x1c]
        call ext_00403530
        mov ebx,dword ptr [esp+0x1c]
        jmp L_41EE50
L_41EEE6:
        push 0x928b5d
        lea ecx,[esp+0x1e4]
        call dword ptr mem_00924FE4
        mov byte ptr [esp+0x300],0x13
        
        call ext_00660A50
        mov edx,dword ptr [eax]
        mov edx,dword ptr [edx+0x8]
        push 0x0
        push 0x1
        push ebx
        lea ecx,[esp+0x4c]
        push ecx
        lea ecx,[esp+0x1f0]
        push ecx
        mov ecx,eax
        call edx
        lea ecx,[esp+0x1e0]
        mov byte ptr [esp+0x300],0x11
        
        call dword ptr mem_00924FF4
L_41EF35:
        push 0x92dfb8
        lea ecx,[esp+0x1ac]
        call dword ptr mem_00924FE4
        lea eax,[esp+0x1a8]
        mov bl,0x14
        push eax
        lea ecx,[esp+0x114]
        mov byte ptr [esp+0x304],bl
        call dword ptr mem_00924FE0
        mov dword ptr [esp+0x12c],0x0
        
        lea ecx,[esp+0x110]
        push ecx
        lea ecx,[esp+0x44]
        mov byte ptr [esp+0x304],0x15
        
        call ext_0041E0D0
        lea ecx,[esp+0x110]
        mov byte ptr [esp+0x300],bl
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x1a8]
        mov byte ptr [esp+0x300],0x11
        
        call dword ptr mem_00924FF4
        xor ebx,ebx
        mov dword ptr [esp+0x18],ebx
        jmp L_41EFC0
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_41EFC0:
        mov eax,dword ptr [esp+0x44]
        test eax,eax
        mov edx,dword ptr [esp+0x48]
        jne L_41EFD0
        xor ecx,ecx
        jmp L_41EFD7
L_41EFD0:
        mov ecx,edx
        sub ecx,eax
        sar ecx,0x5
L_41EFD7:
        cmp ebx,ecx
        jge L_41F01A
        test eax,eax
        je L_41EFE8
        sub edx,eax
        sar edx,0x5
        cmp ebx,edx
        jb L_41EFF2
L_41EFE8:
        call dword ptr mem_00925134
        mov eax,dword ptr [esp+0x44]
L_41EFF2:
        mov edx,dword ptr [esp+0x18]
        add eax,edx
        push ebx
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        add ebx,0x1
        add dword ptr [esp+0x18],0x20
        jmp L_41EFC0
L_41F01A:
        lea eax,[esp+0x170]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,edi
        mov byte ptr [esp+0x300],0x16
        
        call ext_006B4440
        lea ecx,[esp+0x170]
        mov ebx,eax
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x170]
        mov byte ptr [esp+0x300],0x11
        
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x30]
        mov byte ptr [esp+0x300],0x10
        
        call ext_004026E0
        lea ecx,[esp+0x40]
        mov dword ptr [esp+0x300],0xffffffff
        
        call ext_00672D10
        jmp L_41FB66
L_41F09E:
        mov ebx,dword ptr [esi+0x10]
        lea ecx,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],ecx
        mov edx,dword ptr mem_00991070
        push 0x0
        push edx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        xor ebx,ebx
        mov dword ptr [esp+0x64],ebx
        mov dword ptr [esp+0x68],ebx
        mov dword ptr [esp+0x6c],ebx
        mov dword ptr [esp+0x300],0x17
        
        mov dword ptr [esp+0x54],ebx
        mov dword ptr [esp+0x58],ebx
        mov dword ptr [esp+0x5c],ebx
        mov byte ptr [esp+0x300],0x18
        
        call ext_0041DA50
        push ebx
        push 0xa2e264
        push 0xa2e2f8
        push ebx
        push eax
        call ext_006A6E9E
        add esp,0x14
        cmp eax,ebx
        je L_41F202
        mov edx,dword ptr [eax]
        mov edx,dword ptr [edx+0xe8]
        lea ecx,[esp+0x50]
        push ecx
        mov ecx,eax
        call edx
        lea eax,[esp+0x108]
        push eax
        lea ecx,[esp+0x54]
        call ext_00489320
        mov ebx,dword ptr [eax]
        mov ecx,dword ptr [eax+0x4]
        mov dword ptr [esp+0x1c],ebx
        mov dword ptr [esp+0x20],ecx
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
L_41F170:
        mov eax,dword ptr [esp+0x58]
        cmp dword ptr [esp+0x54],eax
        mov dword ptr [esp+0x10],eax
        jbe L_41F184
        call dword ptr mem_00925134
L_41F184:
        test ebx,ebx
        je L_41F190
        lea edx,[esp+0x50]
        cmp ebx,edx
        je L_41F196
L_41F190:
        call dword ptr mem_00925134
L_41F196:
        mov eax,dword ptr [esp+0x10]
        cmp dword ptr [esp+0x20],eax
        je L_41F202
        lea ecx,[esp+0x1c]
        call ext_00492A50
        push eax
        lea ecx,[esp+0x154]
        call dword ptr mem_00924FE0
        mov dword ptr [esp+0x16c],0x0
        
        lea ecx,[esp+0x150]
        push ecx
        lea ecx,[esp+0x64]
        mov byte ptr [esp+0x304],0x19
        
        call ext_0041E0D0
        lea ecx,[esp+0x150]
        mov byte ptr [esp+0x300],0x18
        
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x1c]
        call ext_00403530
        mov ebx,dword ptr [esp+0x1c]
        jmp L_41F170
L_41F202:
        push 0x92dfb8
        lea ecx,[esp+0x190]
        call dword ptr mem_00924FE4
        lea edx,[esp+0x18c]
        mov bl,0x1a
        push edx
        lea ecx,[esp+0x134]
        mov byte ptr [esp+0x304],bl
        call dword ptr mem_00924FE0
        mov dword ptr [esp+0x14c],0x0
        
        lea eax,[esp+0x130]
        push eax
        lea ecx,[esp+0x64]
        mov byte ptr [esp+0x304],0x1b
        
        call ext_0041E0D0
        lea ecx,[esp+0x130]
        mov byte ptr [esp+0x300],bl
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x18c]
        mov byte ptr [esp+0x300],0x18
        
        call dword ptr mem_00924FF4
        xor ebx,ebx
        mov dword ptr [esp+0x18],ebx
L_41F285:
        mov eax,dword ptr [esp+0x64]
        test eax,eax
        mov edx,dword ptr [esp+0x68]
        jne L_41F295
        xor ecx,ecx
        jmp L_41F29C
L_41F295:
        mov ecx,edx
        sub ecx,eax
        sar ecx,0x5
L_41F29C:
        cmp ebx,ecx
        jge L_41F2DF
        test eax,eax
        je L_41F2AD
        sub edx,eax
        sar edx,0x5
        cmp ebx,edx
        jb L_41F2B7
L_41F2AD:
        call dword ptr mem_00925134
        mov eax,dword ptr [esp+0x64]
L_41F2B7:
        mov ecx,dword ptr [esp+0x18]
        add eax,ecx
        push ebx
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        add ebx,0x1
        add dword ptr [esp+0x18],0x20
        jmp L_41F285
L_41F2DF:
        lea edx,[esp+0x1c4]
        push edx
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,edi
        mov byte ptr [esp+0x300],0x1c
        
        call ext_006B4440
        lea ecx,[esp+0x1c4]
        mov ebx,eax
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov eax,dword ptr [ebx]
        mov edx,dword ptr [eax+0xc]
        mov ecx,ebx
        call edx
        lea ecx,[esp+0x1c4]
        mov byte ptr [esp+0x300],0x18
        
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x50]
        mov byte ptr [esp+0x300],0x17
        
        call ext_004026E0
        lea ecx,[esp+0x60]
        mov dword ptr [esp+0x300],0xffffffff
        
        call ext_00672D10
        jmp L_41FB66
L_41F363:
        mov ebx,dword ptr [esi+0x10]
        lea eax,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],eax
        mov ecx,dword ptr mem_00991070
        push 0x0
        push ecx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        xor ebx,ebx
        mov dword ptr [esp+0x78],ebx
        mov dword ptr [esp+0x7c],ebx
        mov dword ptr [esp+0x80],ebx
        lea edx,[esp+0x74]
        push edx
        mov dword ptr [esp+0x304],0x1d
        
        call ext_0041E540
        mov ecx,eax
        call ext_0041DF10
L_41F3E0:
        mov eax,dword ptr [esp+0x78]
        test eax,eax
        je L_41F401
        mov ecx,dword ptr [esp+0x7c]
        sub ecx,eax
        mov eax,0x92492493
        imul ecx
        add edx,ecx
        sar edx,0x4
        mov eax,edx
        shr eax,0x1f
        add eax,edx
L_41F401:
        cmp ebx,eax
        jge L_41F42C
        push ebx
        push ebx
        lea ecx,[esp+0x7c]
        call ext_0041CCC0
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        add ebx,0x1
        jmp L_41F3E0
L_41F42C:
        lea eax,[esp+0x1fc]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,edi
        mov byte ptr [esp+0x300],0x1e
        
        call ext_006B4440
        lea ecx,[esp+0x1fc]
        mov ebx,eax
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x1fc]
        mov byte ptr [esp+0x300],0x1d
        
        call dword ptr mem_00924FF4
        lea ecx,[esp+0x74]
        mov dword ptr [esp+0x300],0xffffffff
        
        call ext_004026E0
        jmp L_41FB66
L_41F49F:
        mov eax,dword ptr [esi+0x10]
        mov dword ptr [esp+0x18],eax
        add eax,0x1
        push 0x0
        mov dword ptr [esi+0x10],eax
        mov ecx,dword ptr mem_00991070
        push 0x0
        push ecx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        mov edx,dword ptr [esp+0x24]
        push eax
        push edx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ebx,dword ptr [ebx+0x4]
        lea ecx,[ebx+0x4]
        mov dword ptr [esp+0x1c],ecx
        xor ebx,ebx
        call ext_00401AC0
        test eax,eax
        jle L_41F542
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
L_41F510:
        mov ecx,dword ptr [esp+0x1c]
        push ebx
        push ebx
        call ext_0041CCC0
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        mov ecx,dword ptr [esp+0x1c]
        add ebx,0x1
        call ext_00401AC0
        cmp ebx,eax
        jl L_41F510
L_41F542:
        lea eax,[esp+0x90]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,edi
        mov dword ptr [esp+0x300],0x1f
        
        call ext_006B4440
        lea ecx,[esp+0x90]
        mov ebx,eax
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x90]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        jmp L_41FB66
L_41F5A7:
        push 0x48
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x20
        
        je L_41F5D6
        mov ecx,dword ptr [esi+0x10]
        mov edx,dword ptr [esi+0x4]
        push ecx
        push ebp
        push edx
        mov ecx,eax
        call ext_004622F0
        jmp L_41F5D8
L_41F5D6:
        xor eax,eax
L_41F5D8:
        mov ecx,dword ptr [esi+0x10]
        mov dword ptr [esp+0x18],ecx
        add ecx,0x1
        push 0x0
        mov dword ptr [esi+0x10],ecx
        push eax
        mov ecx,ebp
        mov dword ptr [esp+0x308],0xffffffff
        
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov eax,dword ptr [esp+0x24]
        push eax
        mov ecx,edi
        call ext_006AF5D0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfc8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        lea ecx,[ebx+0x118]
        mov dword ptr [esp+0x1c],ecx
        xor ebx,ebx
        call ext_0060E860
        test eax,eax
        jle L_41F682
        jmp L_41F650
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_41F650:
        mov ecx,dword ptr [esp+0x1c]
        push ebx
        call ext_0041CD10
        push ebx
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006B4440
        mov ecx,eax
        call ext_006ADD30
        mov ecx,dword ptr [esp+0x1c]
        add ebx,0x1
        call ext_0060E860
        cmp ebx,eax
        jl L_41F650
L_41F682:
        lea ecx,[esp+0xc4]
        push ecx
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,edi
        mov dword ptr [esp+0x300],0x21
        
        call ext_006B4440
        lea ecx,[esp+0xc4]
        mov ebx,eax
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0xc4]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        jmp L_41FB66
L_41F6E7:
        push 0x48
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x22
        
        je L_41F716
        mov ecx,dword ptr [esi+0x10]
        mov edx,dword ptr [esi+0x4]
        push ecx
        push ebp
        push edx
        mov ecx,eax
        call ext_004622F0
        jmp L_41F718
L_41F716:
        xor eax,eax
L_41F718:
        push 0x0
        push eax
        mov ecx,ebp
        mov dword ptr [esp+0x308],0xffffffff
        
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov eax,dword ptr [esi+0x10]
        push eax
        mov ecx,edi
        call ext_006AF5D0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92dfa8
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ecx,edi
        call ext_006B4440
        lea ecx,[esp+0x2a4]
        push ecx
        lea ecx,[ebp+0x34]
        mov ebx,eax
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x23
        
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        or ebx,0xffffffff
        lea ecx,[esp+0x2a4]
        mov dword ptr [esp+0x300],ebx
        call dword ptr mem_00924FF4
        push 0x8
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x24
        
        je L_41F7E5
        mov ecx,eax
        call ext_006AFDC0
        jmp L_41F7E7
L_41F7E5:
        xor eax,eax
L_41F7E7:
        push eax
        mov ecx,edi
        mov dword ptr [esp+0x304],ebx
        call ext_006B4440
        mov ecx,eax
        call ext_006AD920
        test byte ptr mem_00ACC570,0x1
        jne L_41F824
        or dword ptr mem_00ACC570,0x1
        push 0x914bc0
        mov dword ptr [mem_00ACC56C], 0x92dd60
        
        call ext_006A6C87
        add esp,0x4
L_41F824:
        mov dword ptr [edi+0x4c], offset mem_00ACC56C
        jmp L_41FB62
L_41F830:
        mov ebx,dword ptr [esi+0x10]
        lea ecx,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],ecx
        mov edx,dword ptr mem_00991070
        push 0x0
        push edx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92df98
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ecx,edi
        call ext_006B4440
        mov ebx,eax
        lea eax,[esp+0x2dc]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x25
        
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x2dc]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        jmp L_41FB66
L_41F8E0:
        mov ebx,dword ptr [esi+0x10]
        lea ecx,[ebx+0x1]
        push 0x0
        mov dword ptr [esi+0x10],ecx
        mov edx,dword ptr mem_00991070
        push 0x0
        push edx
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AFCD0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92df90
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ecx,edi
        call ext_006B4440
        mov ebx,eax
        lea eax,[esp+0x218]
        push eax
        lea ecx,[ebp+0x34]
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x26
        
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x218]
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
        jmp L_41FB66
L_41F990:
        mov ebx,dword ptr [esi+0x10]
        lea ecx,[ebx+0x1]
        mov dword ptr [esi+0x10],ecx
        push 0x0
        mov ecx,ebp
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        push ebx
        mov ecx,edi
        call ext_006AF9F0
        mov edi,eax
        jmp L_41FB66
L_41F9BA:
        mov ecx,dword ptr [ebp+0x38]
        mov edx,dword ptr [ecx]
        lea eax,[ebp+0x34]
        push eax
        mov eax,dword ptr [edx+0x4]
        call eax
        fstp dword ptr [esp+0x10]
        fld dword ptr [esp+0x10]
        push 0x48
        fstp qword ptr [ebp+0x58]
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x27
        
        je L_41FA02
        mov ecx,dword ptr [esi+0x10]
        mov edx,dword ptr [esi+0x4]
        push ecx
        push ebp
        push edx
        mov ecx,eax
        call ext_004622F0
        jmp L_41FA04
L_41FA02:
        xor eax,eax
L_41FA04:
        push 0x0
        push eax
        mov ecx,ebp
        mov dword ptr [esp+0x308],0xffffffff
        
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov eax,dword ptr [esi+0x10]
        push eax
        mov ecx,edi
        call ext_006AF5D0
        mov edi,eax
        mov eax,dword ptr [esi+0x8]
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ecx,edi
        call ext_006B4440
        lea ecx,[esp+0x2c0]
        push ecx
        lea ecx,[ebp+0x34]
        mov ebx,eax
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x28
        
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x2c0]
        jmp L_41FB51
L_41FA89:
        push 0x48
        call ext_006A5C62
        add esp,0x4
        mov dword ptr [esp+0x10],eax
        test eax,eax
        mov dword ptr [esp+0x300],0x29
        
        je L_41FAB8
        mov ecx,dword ptr [esi+0x10]
        mov edx,dword ptr [esi+0x4]
        push ecx
        push ebp
        push edx
        mov ecx,eax
        call ext_004622F0
        jmp L_41FABA
L_41FAB8:
        xor eax,eax
L_41FABA:
        push 0x0
        push eax
        mov ecx,ebp
        mov dword ptr [esp+0x308],0xffffffff
        
        call ext_00673B60
        mov ecx,eax
        call dword ptr mem_00924FF0
        push eax
        mov eax,dword ptr [esi+0x10]
        push eax
        mov ecx,edi
        call ext_006AF5D0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92df88
        mov edi,eax
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
        mov ecx,edi
        call ext_006B4440
        lea ecx,[esp+0x288]
        push ecx
        lea ecx,[ebp+0x34]
        mov ebx,eax
        call ext_0041CEB0
        mov ecx,eax
        mov dword ptr [esp+0x300],0x2a
        
        call dword ptr mem_00924FF0
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push eax
        call dword ptr mem_009242F0
        mov edx,dword ptr [ebx]
        mov eax,dword ptr [edx+0xc]
        mov ecx,ebx
        call eax
        lea ecx,[esp+0x288]
L_41FB51:
        mov dword ptr [esp+0x300],0xffffffff
        
        call dword ptr mem_00924FF4
L_41FB62:
        add dword ptr [esi+0x10],0x1
L_41FB66:
        mov ecx,dword ptr [esi+0x4]
        mov edx,dword ptr [ecx]
        mov eax,dword ptr [edx+0x18]
        call eax
        test al,al
        je L_41FB96
        push ecx
        mov ecx,esp
        mov dword ptr [esp+0x14],esp
        push 0x92df98
        call dword ptr mem_009242F0
        mov ecx,dword ptr [esi+0xc]
        call ext_006A8840
        push eax
        mov ecx,edi
        call ext_006AD060
L_41FB96:
        mov ecx,dword ptr [esp+0x70]
        add ecx,0xbc
        call dword ptr mem_00924FF0
        push eax
        mov ecx,edi
        call ext_006AD040
        push ebp
        mov ecx,edi
        call ext_006AD170
        cmp byte ptr [ebp+0x65],0x0
        je L_41FBC7
        mov ecx,dword ptr [ebp+0x60]
        push ecx
        mov ecx,edi
        call ext_00465CF0
L_41FBC7:
        mov eax,dword ptr [ebp+0x4c]
        test eax,eax
        je L_41FBE3
        cmp eax,dword ptr mem_00B599BC
        je L_41FBE3
        add ebp,0x64
        push ebp
        push 0x1
        mov ecx,edi
        call ext_006ACEE0
L_41FBE3:
        mov ecx,dword ptr [esp+0x2f8]
        mov eax,edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0],ecx
        pop ebx
        add esp,0x2f4
        ret 0xc
    }
}
