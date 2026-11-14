// Decompiled translation unit: src/Properties/PropertyManager.cpp

// [0x00676210] Properties::PropertyManager::vfunc_0 (28 bytes)
// Forwards its three stack arguments to sub_00675DD0 as (a1, a2, a3, 0) using cdecl, then pops 0xC bytes.
extern "C" void ext_00675DD0();

extern "C" int __stdcall fn_00676210(int a1, int a2, int a3) {
    typedef int (__cdecl *Fn)(int, int, int, int);
    return ((Fn)ext_00675DD0)(a1, a2, a3, 0);
}

// [0x00675D30] Properties::PropertyManager::vfunc_7 (37 bytes)
// Walks a singly linked list of nodes via the +0xC next pointer starting at a1; when the
// last node is reached, forwards (node + 0x10) as `this` to sub_006616C0 and returns its result.
extern "C" void ext_006616C0();

extern "C" __declspec(naked) int __fastcall fn_00675D30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        je L_null
    L_loop:
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je L_call
        mov eax, ecx
        test eax, eax
        jne L_loop
    L_null:
        xor eax, eax
        ret 0x4
    L_call:
        lea ecx, [eax + 0x10]
        call ext_006616C0
        ret 0x4
    }
}

// [0x00675D80] Properties::PropertyManager::vfunc_6 (46 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00675D80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x70], 0
        je fail
        mov ecx, dword ptr [esi + 0x70]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        test al, al
        je fail
        mov esi, dword ptr [esi + 0x6c]
        test esi, esi
        je fail
        xor eax, eax
        cmp byte ptr [esi + 0xb8], al
        pop esi
        sete al
        ret
    fail:
        xor al, al
        pop esi
        ret
    }
}

// [0x00676380] Properties::PropertyManager::vfunc_3 (322 bytes)
extern "C" void ext_004EF2B0();
extern "C" void ext_006616C0();
extern "C" void ext_00493D90();
extern "C" void ext_00661620();
extern "C" void ext_006618C0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00676380(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8b4510
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov ebx, dword ptr [esi]
        push edi
        mov edi, dword ptr [ebx + 0x134]
        cmp edi, dword ptr [ebx + 0x138]
        mov ebp, ecx
        jbe L_chk2
        call dword ptr [mem_00925134]
        cmp edi, dword ptr [ebx + 0x138]
    L_chk2:
        jb L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov edi, dword ptr [edi]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], ecx
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x44], 0
        call ext_004EF2B0
        mov ecx, eax
        mov byte ptr [esp + 0x40], 1
        call ext_006616C0
        lea ecx, [esp + 0x20]
        mov esi, eax
        mov byte ptr [esp + 0x40], 0
        call ext_00493D90
        lea ecx, [esp + 0x10]
        call ext_00661620
        mov eax, dword ptr [esp + 0x4c]
        test eax, eax
        mov bl, 2
        mov byte ptr [esp + 0x40], bl
        je L_else
        push esi
        push edi
        add eax, 0x10
        push eax
        mov eax, dword ptr [ebp + 0x40]
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        lea ecx, [esp + 0x2c]
        call ext_006618C0
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 0x10], edx
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x14], eax
        lea ecx, [esp + 0x28]
        jmp L_merge
    L_else:
        lea ecx, [esp + 0x30]
        call ext_00661620
        mov ecx, dword ptr [ebp + 0x40]
        push esi
        push edi
        push eax
        push ecx
        lea edx, [esp + 0x38]
        push edx
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x54], 3
        call ext_006618C0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x14], edx
        call ext_00493D90
        mov byte ptr [esp + 0x40], bl
        lea ecx, [esp + 0x30]
    L_merge:
        call ext_00493D90
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x40], 0
        call ext_00493D90
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x40], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 8
    }
}

// [0x00675A00] Properties::PropertyManager::vfunc_4 (359 bytes)
extern "C" void ext_004EF2B0();
extern "C" void ext_006616C0();
extern "C" void ext_00493D90();
extern "C" void ext_00661620();
extern "C" void ext_006616B0();
extern "C" void ext_00661880();
extern "C" void ext_006618F0();

extern "C" __declspec(naked) void __fastcall fn_00675A00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8b43b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov dword ptr [esp + 0xc], ecx
        xor edi, edi
        mov esi, ebx
    L_loop:
        test esi, esi
        je L_done
        cmp dword ptr [esi + 0xc], 0
        je L_done
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_004EF2B0
        mov ecx, eax
        mov dword ptr [esp + 0x3c], 0
        call ext_006616C0
        lea ecx, [esp + 0x20]
        mov edi, eax
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_00493D90
        test edi, edi
        mov esi, dword ptr [esi + 0xc]
        je L_loop
    L_done:
        mov esi, dword ptr [ebp + 0xc]
        cmp ebx, esi
        jne L_ne
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0xb2], 0
        je L_b
        mov ecx, dword ptr [ebx + 0x10]
        mov edx, dword ptr [ebx + 0x14]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], edx
        mov ebx, 1
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x3c], ebx
        call ext_00661620
        push edi
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x40]
        push ecx
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x48], 2
        call ext_006618F0
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x3c], bl
        call ext_00493D90
        lea ecx, [esp + 0x10]
        jmp L_end
    L_b:
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_004EF2B0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x3c], 3
        call ext_006616B0
        test al, al
        jne L_c
        lea ecx, [esp + 0x10]
        call ext_00661880
        test al, al
        je L_c
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x40]
        push edi
        add esi, 0x10
        push esi
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_006618F0
    L_c:
        lea ecx, [esp + 0x10]
        jmp L_end
    L_ne:
        mov edx, dword ptr [ebx + 0x10]
        mov eax, dword ptr [ebx + 0x14]
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x40]
        push edi
        add esi, 0x10
        push esi
        push edx
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], 4
        call ext_006618F0
        lea ecx, [esp + 0x18]
    L_end:
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x006758E0] Properties::PropertyManager::vfunc_2 (277 bytes)
extern "C" void ext_0041CF00();
extern "C" void ext_00666670();
extern "C" void ext_006720A0();
extern "C" void ext_006A0360();
extern "C" void ext_006A5C62();
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void __fastcall fn_006758E0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b4383
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        add eax, 0x48
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je L_exit
        cmp ecx, dword ptr [mem_00B599BC]
        je L_exit
        push eax
        lea ecx, [esp + 0x18]
        call ext_0041CF00
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x28], 0
        call eax
        mov ebx, dword ptr [esp + 0x30]
        cmp al, bl
        mov byte ptr [esp + 0x2c], al
        je L_cleanup
        push 0x28
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x30], esi
        test esi, esi
        mov byte ptr [esp + 0x24], 1
        je L_null_esi
        sub esp, 8
        mov dword ptr [esp + 0x14], esp
        mov ecx, esp
        push ebx
        call ext_006720A0
        mov edx, dword ptr [esp + 0x34]
        sub esp, 8
        mov dword ptr [esp + 0x20], esp
        mov ecx, esp
        push edx
        mov byte ptr [esp + 0x38], 2
        call ext_006720A0
        mov eax, dword ptr [edi + 0x40]
        push 0
        push eax
        sub esp, 8
        lea edx, [esp + 0x34]
        mov ecx, esp
        mov dword ptr [esp + 0x4c], esp
        push edx
        mov byte ptr [esp + 0x48], 3
        call ext_0041CF00
        mov ecx, esi
        mov byte ptr [esp + 0x44], 1
        call ext_006A0360
        jmp L_call_666670
    L_null_esi:
        xor eax, eax
    L_call_666670:
        mov ecx, dword ptr [edi + 0xc]
        push eax
        mov byte ptr [esp + 0x28], 0
        call ext_00666670
    L_cleanup:
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x24], -1
        je L_exit
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x14]
        push edx
        call eax
    L_exit:
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x1c
        ret 8
    }
}

// [0x00675680] Properties::PropertyManager::vfunc_1 (607 bytes)
extern "C" void ext_0041CEB0();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_00493D90();
extern "C" void ext_004EF2B0();
extern "C" void ext_006616B0();
extern "C" void ext_00661890();
extern "C" void ext_00661920();
extern "C" void ext_00666670();
extern "C" void ext_006A0360();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00675680(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b434e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov dword ptr [esp + 0x10], ebx
        mov edi, dword ptr [esp + 0x68]
        mov esi, dword ptr [esp + 0x64]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [edi + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xa8]
        lea ebp, [esi + 0x40]
        push ebp
        push edi
        call edx
        test al, al
        jne L_exit
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x64], eax
        mov eax, dword ptr [eax + 0x48]
        cmp eax, 0x13
        jne L_case_not_13
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        call ext_004EF2B0
        mov dword ptr [esp + 0x5c], ebx
        mov ebx, 1
        mov ecx, eax
        mov dword ptr [esp + 0x10], ebx
        call ext_006616B0
        test al, al
        jne L_case_not_13
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_004EF2B0
        mov dword ptr [esp + 0x5c], ebx
        mov ebx, 3
        mov ecx, eax
        mov dword ptr [esp + 0x10], ebx
        call ext_00661890
        test al, al
        mov byte ptr [esp + 0x68], 1
        jne L_check_bl
    L_case_not_13:
        mov byte ptr [esp + 0x68], 0
    L_check_bl:
        test bl, 2
        mov dword ptr [esp + 0x5c], 0
        je L_skip_destroy_18
        and ebx, -3
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], ebx
        call ext_00493D90
    L_skip_destroy_18:
        test bl, 1
        mov dword ptr [esp + 0x5c], 0xffffffff
        je L_skip_destroy_30
        lea ecx, [esp + 0x30]
        call ext_00493D90
    L_skip_destroy_30:
        cmp byte ptr [esp + 0x68], 0
        je L_branch_7d2
        lea edx, [esp + 0x38]
        push edx
        mov ecx, edi
        call ext_0041CEB0
        mov edi, eax
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x60], 2
        call ext_004EF2B0
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx + 0x40]
        push edi
        add esi, 0x10
        push esi
        push edx
        mov ecx, eax
        mov byte ptr [esp + 0x68], 3
        call ext_00661920
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x5c], 2
        call ext_00493D90
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
    L_branch_7d2:
        mov eax, dword ptr [esp + 0x64]
        xor ebx, ebx
        cmp dword ptr [eax + 0x74], 1
        jne L_skip_ebx_1
        mov ebx, 1
    L_skip_ebx_1:
        add esi, 0x34
        push esi
        lea ecx, [esp + 0x2c]
        call ext_0041CF00
        push ebp
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x60], 4
        call ext_0041CF00
        push edi
        mov ecx, ebp
        mov byte ptr [esp + 0x60], 5
        call ext_0041CF50
        push 0x28
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x68], esi
        test esi, esi
        mov byte ptr [esp + 0x5c], 6
        je L_esi_null
        sub esp, 8
        mov ecx, esp
        mov dword ptr [esp + 0x6c], esp
        push edi
        call ext_0041CF00
        sub esp, 8
        lea edx, [esp + 0x30]
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        mov byte ptr [esp + 0x70], 7
        call ext_0041CF00
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [eax + 0x40]
        push ebx
        push ecx
        sub esp, 8
        lea edx, [esp + 0x48]
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push edx
        mov byte ptr [esp + 0x80], 8
        call ext_0041CF00
        mov ecx, esi
        mov byte ptr [esp + 0x7c], 6
        call ext_006A0360
        jmp L_push_eax
    L_esi_null:
        xor eax, eax
    L_push_eax:
        push eax
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0xc]
        mov byte ptr [esp + 0x60], 5
        call ext_00666670
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov byte ptr [esp + 0x5c], 4
        je L_check_esp_2c
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x20]
        push eax
        call edx
    L_check_esp_2c:
        mov ecx, dword ptr [esp + 0x2c]
        test ecx, ecx
        mov dword ptr [esp + 0x5c], 0xffffffff
        je L_exit
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x28]
        push edx
        call eax
    L_exit:
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x50
        ret 8
    }
}

extern "C" void ext_00665870();
extern "C" void ext_00666120();
extern "C" void ext_006720C0();
extern "C" void ext_00677460();

// [0x006776C0] Properties::PropertyManager::vfunc_5 (137 bytes)
extern "C" __declspec(naked) void __fastcall fn_006776C0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 8b33b8h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        lea ecx, [esp + 0ch]
        call ext_006720C0
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ecx]
        add eax, 34h
        lea edi, [esp + 8]
        push edi
        push eax
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [esp + 20h], 0
        call eax
        mov ecx, dword ptr [esp + 0ch]
        test ecx, ecx
        mov dword ptr [esp + 18h], 0ffffffffh
        je skip_release
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 78h]
        mov eax, edi
        push eax
        call edx
skip_release:
        call ext_00665870
        mov ecx, eax
        call ext_00666120
        mov ecx, esi
        call ext_00677460
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 14h
        ret 4
    }
}
