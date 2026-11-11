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
