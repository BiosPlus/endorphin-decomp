// Decompiled translation unit: src/classes/OptimizedMatrixStackManager.cpp

// [0x0054E990] OptimizedMatrixStackManager::vfunc_4 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E990(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x10]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x10]
        add ecx, 0xc
        jmp eax
    }
}

// [0x0054E9B0] OptimizedMatrixStackManager::vfunc_5 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E9B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x14]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 0xc
        jmp eax
    }
}

// [0x0054E9D0] OptimizedMatrixStackManager::vfunc_7 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E9D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov edx, dword ptr [edx + 0x1c]
        add ecx, 0x20
        jmp edx
    L_ge:
        mov eax, dword ptr [ecx + 0xc]
        mov eax, dword ptr [eax + 0x1c]
        add ecx, 0xc
        jmp eax
    }
}

// [0x0054E9F0] OptimizedMatrixStackManager::vfunc_6 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E9F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        cmp eax, dword ptr [ecx + 0x8]
        jge L_ge
        mov edx, dword ptr [ecx + 0x20]
        mov eax, dword ptr [edx + 0x18]
        add ecx, 0x20
        jmp eax
    L_ge:
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [edx + 0x18]
        add ecx, 0xc
        jmp eax
    }
}

// [0x0054EFC0] OptimizedMatrixStackManager::vfunc_0 (46 bytes)
extern "C" void ext_0054ECB0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0054EFC0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0xc]
        mov dword ptr [esi + 0x20], 0x956f94
        call ext_0054ECB0
        test byte ptr [esp + 0x8], 0x1
        mov dword ptr [esi], 0x956f94
        je L_skip
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0054E940] OptimizedMatrixStackManager::vfunc_2 (66 bytes)
extern "C" void __fastcall fn_0054E940(void* self) {
    unsigned char* s = (unsigned char*)self;
    *(int*)(s + 0x4) += 1;
    if (*(int*)(s + 0x4) < *(int*)(s + 0x8)) {
        void* sub = s + 0x20;
        void** vt = *(void***)sub;
        ((void (__fastcall*)(void*))vt[2])(sub);
        return;
    }
    if (*(int*)(s + 0x4) == *(int*)(s + 0x8)) {
        void* sub = s + 0x20;
        void** vt = *(void***)sub;
        ((void (__fastcall*)(void*))vt[2])(sub);
        void* sub2 = s + 0xc;
        void** vt2 = *(void***)sub2;
        ((void (__fastcall*)(void*))vt2[1])(sub2);
        return;
    }
    void* sub3 = s + 0xc;
    void** vt3 = *(void***)sub3;
    ((void (__fastcall*)(void*))vt3[2])(sub3);
}
