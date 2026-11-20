// Decompiled translation unit: src/leaf/decompiled_850000.cpp
extern "C" { void* __cdecl ext_0085B2C0(void* a, void* b); int __cdecl ext_0086CDB0(void* p); void __cdecl ext_00859A90(void* p); }
extern "C" void ext_008692F0();
extern "C" void ext_008596F0();
extern "C" void ext_0086D250();
extern "C" void ext_00859B30();
extern "C" void ext_008599F0();
extern "C" void ext_0086CCC0();

extern "C" void ext_0086CCC0();
extern "C" __declspec(naked) char* __cdecl fn_008598C0(void) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, ecx
        mov dl, byte ptr [esi]
        test dl, dl
        mov byte ptr [ecx], dl
        je done
    copy_loop:
        mov dl, byte ptr [esi + 1]
        inc ecx
        inc esi
        test dl, dl
        mov byte ptr [ecx], dl
        jne copy_loop
    done:
        pop esi
        ret
    }
}
extern "C" { void ext_0085A310(); void ext_00859780(); }
extern "C" void* __cdecl ext_008596E0(unsigned int size);

extern "C" void* __cdecl ext_008596E0(unsigned int size);
extern "C" __declspec(naked) void __cdecl fn_0085A110(void) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        cmp eax, -1
        je done
        mov edx, dword ptr [esp + 4]
        cmp eax, edx
        jb done
        jne decrement
        mov dword ptr [ecx], 0xffffffff
        ret
    decrement:
        dec eax
        mov dword ptr [ecx], eax
    done:
        ret
    }
}
extern "C" void ext_0085BBC0();
extern "C" void ext_00868690();

extern "C" void ext_00868690();
extern "C" __declspec(naked) void __cdecl fn_0085D510(void) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        push ebx
        mov eax, edx
        dec edx
        test eax, eax
        je done
        mov bl, byte ptr [esp + 0xc]
        mov eax, dword ptr [esp + 8]
    fill_loop:
        mov byte ptr [eax], bl
        inc eax
        mov ecx, edx
        dec edx
        test ecx, ecx
        jne fill_loop
    done:
        pop ebx
        ret
    }
}
extern "C" int mem_00924214;
extern "C" void __cdecl ext_008536D0(void* a, void* b, void* c);
extern "C" void ext_00857BE0();
extern "C" void ext_00869310();

extern "C" void ext_00869310();
extern "C" void __cdecl ext_00859730(void* p);

extern "C" void __cdecl fn_0085BEA0(void* self) {
    void** s = static_cast<void**>(self);
    if (s[1] != 0) {
        ext_00859730(s[1]);
    }
    ext_00859730(self);
}
extern "C" { void ext_00857440(); void ext_00857470(); void ext_00857490(); void ext_0085D510(); void ext_0085D530(); void ext_0085D560(); void ext_0086D480(); void ext_0086D4D0(); int mem_00924210; }

// [0x00859A20] sub_00859A20 (47 bytes)
extern "C" __declspec(naked) char* __cdecl fn_00859A20(char* dst, const char* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, ecx
        cmp byte ptr [ecx], 0x0
        je L_end_dst
    L_find_end:
        mov dl, byte ptr [ecx + 0x1]
        inc ecx
        test dl, dl
        jne L_find_end
    L_end_dst:
        push esi
        mov esi, dword ptr [esp + 0xc]
        inc ecx
        mov dl, byte ptr [esi]
        inc esi
        mov byte ptr [ecx - 0x1], dl
        test dl, dl
        je L_done
    L_copy:
        mov dl, byte ptr [esi]
        mov byte ptr [ecx], dl
        inc ecx
        inc esi
        test dl, dl
        jne L_copy
    L_done:
        pop esi
        ret
    }
}

// [0x0085BF40] sub_0085BF40 (47 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0085BF40(void* self, unsigned int key) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        push esi
        mov edx, dword ptr [ecx]
        push edi
        test edx, edx
        jbe L_notfound
        mov esi, dword ptr [ecx + 0x4]
        mov edi, dword ptr [esp + 0x10]
        mov ecx, esi
    L_loop:
        cmp edi, dword ptr [ecx]
        je L_found
        inc eax
        add ecx, 0x8
        cmp eax, edx
        jb L_loop
    L_notfound:
        pop edi
        pop esi
        xor eax, eax
        ret
    L_found:
        mov eax, dword ptr [esi + 8*eax + 0x4]
        pop edi
        pop esi
        ret
    }
}

// [0x0085F7B0] sub_0085F7B0 (47 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085F7B0(const char* s1, const char* s2, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        test eax, eax
        jne L_nonzero
        xor eax, eax
        pop ebx
        ret
    L_nonzero:
        dec eax
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        je L_exit
    L_loop:
        mov bl, byte ptr [ecx]
        cmp byte ptr [edx], bl
        jne L_exit
        inc ecx
        inc edx
        dec eax
        jne L_loop
    L_exit:
        xor eax, eax
        pop ebx
        mov al, byte ptr [ecx]
        xor ecx, ecx
        mov cl, byte ptr [edx]
        sub eax, ecx
        ret
    }
}

// [0x00859300] sub_00859300 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00859300(void* a1, unsigned int a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        test byte ptr [ecx + 0x14], 0x4
        je short L_noderef
        mov ecx, dword ptr [ecx]
L_noderef:
        mov eax, dword ptr [ecx + 0x14]
        test al, 0x1
        jne short L_flagset
        xor eax, eax
        ret
L_flagset:
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp edx, esi
        pop esi
        jne short L_mismatch
        and al, 0xfe
        mov dword ptr [ecx + 0x14], eax
        xor eax, eax
        ret
L_mismatch:
        mov eax, 0xd
        ret
    }
}

// [0x00859740] sub_00859740 (64 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00859740(void* dst, int c, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, eax
        dec eax
        test ecx, ecx
        jbe L_ret_dst_00859740
        lea ecx, [eax + 1]
        mov al, byte ptr [esp + 8]
        push ebx
        mov bl, al
        mov bh, bl
        push esi
        mov esi, dword ptr [esp + 0Ch]
        mov eax, ebx
        mov edx, ecx
        push edi
        shl eax, 10h
        mov edi, esi
        mov ax, bx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret
L_ret_dst_00859740:
        mov eax, dword ptr [esp + 4]
        ret
    }
}

// [0x0085E720] sub_0085E720 (76 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085E720(const char* src, int len) {
    __asm {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        xor esi, esi
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        test ebp, ebp
        je done
        mov eax, 0
        jle done
        mov edi, dword ptr [esp + 0x28]
        mov edx, 0x2e
        xor ebx, ebx
    loop_top:
        mov cl, byte ptr [edi + eax]
        mov byte ptr [esp + esi + 0x10], dl
        cmp cl, 0x20
        jb skip_store
        mov byte ptr [esp + esi + 0x10], cl
    skip_store:
        mov byte ptr [esp + esi + 0x11], bl
        inc esi
        cmp esi, 0xf
        jle no_wrap
        xor esi, esi
    no_wrap:
        inc eax
        cmp eax, ebp
        jl loop_top
    done:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x008597E0] sub_008597E0 (79 bytes)
extern "C" __declspec(naked) void* __cdecl fn_008597E0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, eax
        push edi
        mov edx, eax
        jae forward
        lea edi, [esi + ecx]
        cmp eax, edi
        jae forward
        mov edx, edi
        lea esi, [eax + ecx]
        mov edi, ecx
        dec ecx
        test edi, edi
        je done
        lea edi, [ecx + 1]
    back_loop:
        mov cl, byte ptr [edx - 1]
        dec edx
        dec esi
        dec edi
        mov byte ptr [esi], cl
        jne back_loop
        pop edi
        pop esi
        ret
    forward:
        mov edi, ecx
        dec ecx
        test edi, edi
        je done
        sub esi, eax
        lea edi, [ecx + 1]
    fwd_loop:
        mov cl, byte ptr [esi + edx]
        mov byte ptr [edx], cl
        inc edx
        dec edi
        jne fwd_loop
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00859E00] sub_00859E00 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_00859E00(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        or eax, -1
        push esi
        mov esi, ecx
        test byte ptr [ecx + 0x14], 0x4
        je short L_noderef
        mov esi, dword ptr [ecx]
    L_noderef:
        mov edx, dword ptr [esp + 0x10]
        sub edx, 0
        je short L_mode0
        dec edx
        je short L_mode1
        dec edx
        jne short L_check
        mov eax, dword ptr [esp + 0xc]
        jmp short L_check
    L_mode1:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esp + 0xc]
        sub eax, edx
        jmp short L_check
    L_mode0:
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [esp + 0xc]
        add eax, edx
    L_check:
        mov edx, dword ptr [esi + 0x4]
        pop esi
        cmp eax, edx
        jbe short L_ok
        mov eax, 0x1d
        ret
    L_ok:
        mov dword ptr [ecx + 0x8], eax
        xor eax, eax
        ret
    }
}

// [0x0085D340] sub_0085D340 (80 bytes)
extern "C" int mem_00AB91A0;

extern "C" __declspec(naked) unsigned int __cdecl fn_0085D340(const unsigned char* buf, unsigned int len) {
    __asm {
        push ebx
        mov eax, 0xffffffff
        push esi
        xor ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x14]
        cmp edi, ecx
        je L_done
        mov edx, dword ptr [esp + 0x10]
    L_loop:
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx]
        inc ecx
        xor ebx, eax
        shr eax, 8
        and ebx, 0xff
        mov esi, dword ptr [4*ebx + mem_00AB91A0]
        xor esi, eax
        cmp ecx, edi
        mov eax, esi
        jb L_loop
    L_done:
        not eax
        pop edi
        pop esi
        pop ebx
        ret
        __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [ecx], eax
        mov eax, 0x1
        ret
    }
}

// [0x0085D9D0] sub_0085D9D0 (106 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085D9D0(void) {
    __asm {
        push ebx
        mov eax, 1
        mov cx, word ptr [esp + 0x8]
        push esi
        mov dx, word ptr [esp + 0x10]
        push edi
        mov si, word ptr [esp + 0x18]
        push ebp
        mov ebp, 0xffffffff
        mov ebx, 0xabb380
        mov edi, dword ptr [esp + 0x20]
loop_top:
        cmp dword ptr [ebx], 0x0
        jne check_keys
        test ebp, ebp
        jge next_entry
        mov ebp, eax
        jmp next_entry
check_keys:
        cmp word ptr [ebx - 0x8], si
        jne next_entry
        cmp word ptr [ebx - 0xc], cx
        jne next_entry
        cmp word ptr [ebx - 0xa], dx
        jne next_entry
        cmp dword ptr [ebx - 0x4], edi
        je found
next_entry:
        add ebx, 0x14
        inc eax
        cmp ebx, 0xac018c
        jbe loop_top
        test ebp, ebp
        jge neg_empty
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
neg_empty:
        mov eax, ebp
        neg eax
found:
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0085DA90] sub_0085DA90 (175 bytes)
extern "C" void ext_0081743A();
extern "C" void ext_0081D9A4();
extern "C" void ext_00843D46();

extern "C" __declspec(naked) void __cdecl fn_0085DA90(void) {
    __asm {
        sub esp, 8
        lea eax, [esp + 4]
        push ebx
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push edi
        push ebp
        push eax
        push ecx
        call ext_0081743A
        add esp, 8
        test eax, eax
        jne short L_0085DAB7
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    L_0085DAB7:
        xor esi, esi
        xor ebp, ebp
        xor ebx, ebx
    L_0085DABD:
        xor edi, edi
    L_0085DABF:
        lea eax, [esp + 0x13]
        push 1
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        call ext_0081D9A4
        add esp, 0xc
        test eax, eax
        je short L_0085DAF9
        xor eax, eax
        mov al, byte ptr [esp + 0x13]
        cmp eax, 0xa
        je short L_0085DAE9
        cmp eax, 0xd
        je short L_0085DAF1
        jmp short L_0085DABD
    L_0085DAE9:
        inc ebp
        test edi, edi
        je short L_0085DABF
        inc ebx
        jmp short L_0085DABD
    L_0085DAF1:
        inc esi
        mov edi, 1
        jmp short L_0085DABF
    L_0085DAF9:
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_00843D46
        add esp, 4
        test ebx, ebx
        jle short L_0085DB1B
        cmp ebx, esi
        jne short L_0085DB1B
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    L_0085DB1B:
        cmp ebp, esi
        jle short L_0085DB2C
        mov eax, 3
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    L_0085DB2C:
        mov eax, 2
        test esi, esi
        jg short L_0085DB37
        xor eax, eax
    L_0085DB37:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0085D5F0] sub_0085D5F0 (556 bytes)
extern "C" int mem_009241D4;
extern "C" int mem_009241D8;
extern "C" int mem_00AB964C;
extern "C" int mem_00BC70E4;
extern "C" int mem_00BC70D8;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00BC6724;
extern "C" int mem_00BC70EC;
extern "C" int mem_00BC7100;
extern "C" int mem_00BC70C0;
extern "C" int mem_00BC672C;
extern "C" int mem_00BC70B8;
extern "C" int mem_00BC6718;
extern "C" int mem_00BC671C;
extern "C" int mem_00BC70FC;
extern "C" int mem_00BC70E8;
extern "C" int mem_00BC6658;
extern "C" int mem_00BC6734;
extern "C" int mem_00BC70F0;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6730;
extern "C" int mem_00BC6728;

extern "C" __declspec(naked) int __cdecl fn_0085D5F0(void) {
    __asm {
        push esi
        push edi
        push 0xac01bc
        call dword ptr [mem_009241D4]
        mov esi, eax
        test esi, esi
        jne L_start
        mov eax, 1
        pop edi
        pop esi
        ret
    L_start:
        push 0xac01c8
        mov edi, dword ptr [mem_009241D8]
        push esi
        call edi
        mov dword ptr [mem_00AB964C], eax
        test eax, eax
        jne L_1
        mov eax, 1
        pop edi
        pop esi
        ret
    L_1:
        push 0xac01d4
        push esi
        call edi
        mov dword ptr [mem_00BC70E4], eax
        test eax, eax
        jne L_2
        mov eax, 1
        pop edi
        pop esi
        ret
    L_2:
        push 0xac01dc
        push esi
        call edi
        mov dword ptr [mem_00BC70D8], eax
        test eax, eax
        jne L_3
        mov eax, 1
        pop edi
        pop esi
        ret
    L_3:
        push 0xac01e4
        push esi
        call edi
        mov dword ptr [mem_00BC70BC], eax
        test eax, eax
        jne L_4
        mov eax, 1
        pop edi
        pop esi
        ret
    L_4:
        push 0xac01ec
        push esi
        call edi
        mov dword ptr [mem_00BC70F4], eax
        test eax, eax
        jne L_5
        mov eax, 1
        pop edi
        pop esi
        ret
    L_5:
        push 0xac01f8
        push esi
        call edi
        mov dword ptr [mem_00BC6724], eax
        test eax, eax
        jne L_6
        mov eax, 1
        pop edi
        pop esi
        ret
    L_6:
        push 0xac0200
        push esi
        call edi
        mov dword ptr [mem_00BC70EC], eax
        test eax, eax
        jne L_7
        mov eax, 1
        pop edi
        pop esi
        ret
    L_7:
        push 0xac020c
        push esi
        call edi
        mov dword ptr [mem_00BC7100], eax
        test eax, eax
        jne L_8
        mov eax, 1
        pop edi
        pop esi
        ret
    L_8:
        push 0xac0218
        push esi
        call edi
        mov dword ptr [mem_00BC70C0], eax
        test eax, eax
        jne L_9
        mov eax, 1
        pop edi
        pop esi
        ret
    L_9:
        push 0xac0224
        push esi
        call edi
        mov dword ptr [mem_00BC672C], eax
        test eax, eax
        jne L_10
        mov eax, 1
        pop edi
        pop esi
        ret
    L_10:
        push 0xac0230
        push esi
        call edi
        mov dword ptr [mem_00BC70B8], eax
        test eax, eax
        jne L_11
        mov eax, 1
        pop edi
        pop esi
        ret
    L_11:
        push 0xac0240
        push esi
        call edi
        mov dword ptr [mem_00BC6718], eax
        test eax, eax
        jne L_12
        mov eax, 1
        pop edi
        pop esi
        ret
    L_12:
        push 0xac024c
        push esi
        call edi
        mov dword ptr [mem_00BC671C], eax
        test eax, eax
        jne L_13
        mov eax, 1
        pop edi
        pop esi
        ret
    L_13:
        push 0xac025c
        push esi
        call edi
        mov dword ptr [mem_00BC70FC], eax
        test eax, eax
        jne L_14
        mov eax, 1
        pop edi
        pop esi
        ret
    L_14:
        push 0xac026c
        push esi
        call edi
        mov dword ptr [mem_00BC70E8], eax
        test eax, eax
        jne L_15
        mov eax, 1
        pop edi
        pop esi
        ret
    L_15:
        push 0xac027c
        push esi
        call edi
        mov dword ptr [mem_00BC6658], eax
        test eax, eax
        jne L_16
        mov eax, 1
        pop edi
        pop esi
        ret
    L_16:
        push 0xac0288
        push esi
        call edi
        mov dword ptr [mem_00BC6734], eax
        test eax, eax
        jne L_17
        mov eax, 1
        pop edi
        pop esi
        ret
    L_17:
        push 0xac0294
        push esi
        call edi
        mov dword ptr [mem_00BC70F0], eax
        test eax, eax
        jne L_18
        mov eax, 1
        pop edi
        pop esi
        ret
    L_18:
        push 0xac029c
        push esi
        call edi
        mov dword ptr [mem_00BC70F8], eax
        test eax, eax
        jne L_19
        mov eax, 1
        pop edi
        pop esi
        ret
    L_19:
        push 0xac02a4
        push esi
        call edi
        mov dword ptr [mem_00BC6730], eax
        test eax, eax
        jne L_20
        mov eax, 1
        pop edi
        pop esi
        ret
    L_20:
        push 0xac02ac
        push esi
        call edi
        pop edi
        mov dword ptr [mem_00BC6728], eax
        pop esi
        cmp eax, 1
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x0085BF70] sub_0085BF70 (64 bytes)
extern "C" void* ext_00859DA0();
extern "C" unsigned int ext_0085BC20(void*);
extern "C" __declspec(naked) void* __cdecl fn_0085BF70(void* a1) {
    __asm {
        push esi
        call ext_00859DA0
        mov esi, eax
        test esi, esi
        je done
        mov eax, dword ptr [esp + 8]
        test byte ptr [eax + 0x14], 4
        je skip_deref
        mov eax, dword ptr [eax]
    skip_deref:
        mov ecx, dword ptr [eax + 0x18]
        push eax
        inc ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [esi], eax
        call ext_0085BC20
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 0x14]
        add esp, 4
        or al, 6
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x10], 0
    done:
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_00859DD0();

// [0x0085BDA0] sub_0085BDA0 (127 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085BDA0(void* stream, unsigned int len, int* out_val) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x0C]
        push esi
        push ebp
        call ext_0085BC20
        mov esi, dword ptr [esp + 0x1C]
        mov ebx, dword ptr [esp + 0x18]
        add esp, 4
        mov dword ptr [esp + 0x10], eax
        test ebx, ebx
        mov dword ptr [esi], 0
        jbe loc_85BE0C

        push ebp
        call ext_00859DD0
        add esp, 4
        cmp eax, 0xFF00
        je loc_85BE0C
        test al, 0x80
        mov dword ptr [esi], eax
        je loc_85BDE3
        or eax, 0xFFFFFF00
        mov dword ptr [esi], eax

    loc_85BDE3:
        push edi
        mov edi, 1
        cmp ebx, edi
        jbe loc_85BE0B

    loc_85BDED:
        push ebp
        call ext_00859DD0
        add esp, 4
        cmp eax, 0xFF00
        je loc_85BE0B
        mov ecx, dword ptr [esi]
        shl ecx, 8
        or ecx, eax
        inc edi
        cmp edi, ebx
        mov dword ptr [esi], ecx
        jb loc_85BDED

    loc_85BE0B:
        pop edi

    loc_85BE0C:
        push ebp
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x14]
        add esp, 4
        sub eax, ecx
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_0085D530();
extern "C" int mem_00ABA454;

// [0x0085E470] sub_0085E470 (154 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085E470(void) {
    __asm {
        sub esp, 4
        cmp dword ptr [esp + 8], 0
        push esi
        push edi
        je loc_85e504
        mov ecx, dword ptr [mem_00ABA454]
        test ecx, ecx
        je loc_85e4be
        mov edi, 0
        jle loc_85e4be
        mov esi, offset mem_00ABA454 + 5
    loc_85e496:
        lea eax, [esp + 8]
        push 4
        push esi
        push eax
        call ext_0085D530
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0xc
        mov ecx, dword ptr [mem_00ABA454]
        cmp dword ptr [esp + 8], eax
        je loc_85e504
        add esi, 0xd
        inc edi
        cmp edi, ecx
        jl loc_85e496
    loc_85e4be:
        lea eax, [esp + 0x10]
        push 4
        push eax
        lea edx, [ecx + 2*ecx]
        lea eax, [ecx + 4*edx]
        add eax, offset mem_00ABA454 + 5
        push eax
        call ext_0085D530
        add esp, 0xc
        mov eax, dword ptr [mem_00ABA454]
        lea ecx, [eax + 2*eax]
        lea esi, [eax + 4*ecx]
        mov byte ptr [esi + 0xaba458], 8
        mov ax, word ptr [esp + 0x14]
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [esi + mem_00ABA454 + 0xf], ax
        inc dword ptr [mem_00ABA454]
    loc_85e504:
        pop edi
        pop esi
        add esp, 4
        ret
    }
}

// [0x0085F310] sub_0085F310 (154 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085E690();
extern "C" void ext_0085E720();

extern "C" int mem_00AB98EC;
extern "C" int mem_00ABA9D8;
extern "C" int mem_00ABAA3C;
extern "C" int mem_00AC0560;

extern "C" __declspec(naked) int __cdecl fn_0085F310(void* pData, int length) {
    __asm {
        push    esi
        push    edi
        xor     esi, esi
        push    0x64
        push    esi
        mov     dword ptr [mem_00AB98EC], esi
        push    offset mem_00ABA9D8
        call    ext_0085D510
        mov     edi, dword ptr [esp + 0x1c]
        add     esp, 0xc
        mov     dword ptr [mem_00ABAA3C], esi
        cmp     edi, esi
        jne     L_check_len
        xor     eax, eax
        pop     edi
        pop     esi
        ret

    L_check_len:
        cmp     edi, 0x7
        jbe     L_process
        mov     eax, 0x1
        pop     edi
        mov     dword ptr [mem_00AB98EC], 0x96
        pop     esi
        ret

    L_process:
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        push    eax
        xor     esi, esi
        mov     dword ptr [mem_00ABAA3C], 0x1
        push    offset mem_00ABA9D8
        call    ext_0085D530
        add     esp, 0xc
        test    edi, edi
        jle     L_finish

    L_loop:
        mov     al, byte ptr [esi + mem_00ABA9D8]
        inc     esi
        push    eax
        call    ext_0085E690
        add     esp, 0x4
        mov     byte ptr [esi + mem_00ABA9D8 - 1], al
        cmp     esi, edi
        jl      L_loop

    L_finish:
        push    offset mem_00AC0560
        push    0x30
        push    offset mem_00ABA9D8
        call    ext_0085E720
        add     esp, 0xc
        xor     eax, eax
        pop     edi
        pop     esi
        ret
    }
}

// [0x0085B9D0] sub_0085B9D0 (160 bytes)
extern "C" void ext_0085B330();

extern "C" __declspec(naked) void __cdecl fn_0085B9D0(void* dst, int v) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp eax, -0x80
        jl L_16
        cmp eax, 0x7f
        jg L_16
        mov byte ptr [esp + 0x8], al
        mov eax, 0x1
        jmp L_call
L_16:
        cmp eax, 0xffff8000
        jl L_24
        cmp eax, 0x7fff
        jg L_24
        mov ecx, eax
        mov byte ptr [esp + 0x9], al
        sar ecx, 0x8
        mov byte ptr [esp + 0x8], cl
        mov eax, 0x2
        jmp L_call
L_24:
        cmp eax, 0xff800000
        jl L_32
        cmp eax, 0x7fffff
        jg L_32
        mov edx, eax
        mov ecx, eax
        sar edx, 0x10
        sar ecx, 0x8
        mov byte ptr [esp + 0xa], al
        mov byte ptr [esp + 0x8], dl
        mov byte ptr [esp + 0x9], cl
        mov eax, 0x3
        jmp L_call
L_32:
        mov edx, eax
        mov ecx, eax
        sar edx, 0x18
        mov byte ptr [esp + 0x8], dl
        mov edx, eax
        sar ecx, 0x10
        sar edx, 0x8
        mov byte ptr [esp + 0xb], al
        mov byte ptr [esp + 0x9], cl
        mov byte ptr [esp + 0xa], dl
        mov eax, 0x4
L_call:
        mov ecx, dword ptr [esp + 0x4]
        lea edx, [esp + 0x8]
        push ecx
        push eax
        push 0x1
        push edx
        call ext_0085B330
        add esp, 0x10
        ret
    }
}

// [0x0085F270] sub_0085F270 (160 bytes)
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E690();
extern "C" void ext_0085E6A0();
extern "C" __declspec(naked) void __cdecl fn_0085F270(void) {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [esp + 0x18], edi
        je L_go
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_go:
        mov esi, dword ptr [esp + 0x10]
        push esi
        call ext_0085E1F0
        add esp, 0x4
        cmp eax, 0x2
        jb L_b10
        push 0xac055c
        mov ebx, 0x10
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        je L_chk
    L_b10:
        mov ebx, 0xa
    L_chk:
        cmp byte ptr [esi], 0x0
        je L_end
    L_loop:
        mov al, byte ptr [esi]
        push eax
        call ext_0085E690
        add esp, 0x4
        cmp ebx, 0x10
        jne L_dec
        cmp al, 0x30
        jb L_end
        cmp al, 0x46
        ja L_end
        cmp al, 0x39
        jbe L_dig
        cmp al, 0x41
        jae L_dig
        jmp L_end
    L_dec:
        cmp al, 0x30
        jb L_end
        cmp al, 0x39
        ja L_end
    L_dig:
        xor ecx, ecx
        mov cl, al
        sub ecx, 0x30
        cmp ecx, 0x9
        jbe L_k
        sub ecx, 0x7
    L_k:
        test edi, 0xf0000000
        jne L_end
        imul edi, ebx
        add edi, ecx
        inc esi
        cmp byte ptr [esi], 0x0
        jne L_loop
    L_end:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_ret
        mov dword ptr [eax], esi
    L_ret:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0085E510] sub_0085E510 (175 bytes)
extern "C" void ext_0085E5C0();
extern "C" int mem_00ABA970;
extern "C" int mem_00ABA9D4;

extern "C" __declspec(naked) void __cdecl fn_0085E510(void) {
    __asm {
        sub     esp, 0x80
        push    ebx
        push    esi
        push    edi
        push    0x64
        push    0x0
        push    offset mem_00ABA970
        call    ext_0085D510
        mov     edi, dword ptr [esp + 0x9c]
        add     esp, 0xc
        mov     dword ptr [mem_00ABA9D4], 0x0
        push    edi
        call    ext_0085E1F0
        add     esp, 0x4
        test    eax, eax
        jne     L_has_data
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret

    L_has_data:
        xor     esi, esi
        xor     ebx, ebx
        mov     byte ptr [esp + 0xc], 0x0
        push    edi
        call    ext_0085E1F0
        add     esp, 0x4
        test    eax, eax
        jle     L_after_loop

    L_loop:
        mov     al, byte ptr [edi + ebx]
        cmp     al, 0x2c
        jne     L_store_char
        lea     eax, [esp + 0xc]
        xor     esi, esi
        push    eax
        call    ext_0085E5C0
        add     esp, 0x4
        jmp     L_loop_next

    L_store_char:
        cmp     esi, 0x7f
        jge     L_loop_next
        mov     byte ptr [esp + esi + 0xc], al
        inc     esi
        mov     byte ptr [esp + esi + 0xc], 0x0

    L_loop_next:
        inc     ebx
        push    edi
        call    ext_0085E1F0
        add     esp, 0x4
        cmp     eax, ebx
        jg      L_loop

    L_after_loop:
        test    esi, esi
        je      L_done
        lea     eax, [esp + 0xc]
        push    eax
        call    ext_0085E5C0
        add     esp, 0x4

    L_done:
        mov     eax, 0x1
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x80
        ret
    }
}

// [0x0085E5C0] sub_0085E5C0 (201 bytes)
extern "C" void ext_0085E3A0();

extern "C" __declspec(naked) void __cdecl fn_0085E5C0(void* p) {
    __asm {
        sub esp, 0ch
        cmp dword ptr [mem_00ABA9D4], 5
        push ebx
        push esi
        push edi
        push ebp
        jg L_end_0085E5C0
        mov edi, dword ptr [esp + 20h]
        push edi
        call ext_0085E3A0
        add esp, 4
        push edi
        call ext_0085E1F0
        add esp, 4
        mov ebp, eax
        cmp ebp, 1
        jl L_end_0085E5C0
        cmp ebp, 7
        jle L_len_ok_0085E5C0
        mov byte ptr [edi + 7], 0
        mov ebp, 7
    L_len_ok_0085E5C0:
        xor ebx, ebx
        test ebp, ebp
        jle L_after_loop_0085E5C0
    L_enc_loop_0085E5C0:
        lea esi, [edi + ebx]
        inc ebx
        mov al, byte ptr [esi]
        push eax
        call ext_0085E690
        add esp, 4
        mov byte ptr [esi], al
        cmp ebp, ebx
        jg L_enc_loop_0085E5C0
    L_after_loop_0085E5C0:
        mov esi, 0ABA970h
    L_copy_loop_0085E5C0:
        lea eax, [esp + 10h]
        push 8
        push esi
        push eax
        call ext_0085D530
        lea eax, [esp + 1ch]
        add esp, 0ch
        push edi
        push eax
        call ext_0085E6A0
        add esp, 8
        test eax, eax
        je L_end_0085E5C0
        add esi, 8
        cmp esi, 0ABA9A0h
        jb L_copy_loop_0085E5C0
        mov eax, dword ptr [mem_00ABA9D4]
        push ebp
        push edi
        lea ecx, [eax*8 + 0ABA970h]
        push ecx
        call ext_0085D530
        add esp, 0ch
        inc dword ptr [mem_00ABA9D4]
        push 0AC02D0h
        push 30h
        push 0ABA970h
        call ext_0085E720
        add esp, 0ch
    L_end_0085E5C0:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ret
    }
}

// [0x0085CE00] sub_0085CE00 (344 bytes)
extern "C" void ext_0085CE90();
extern "C" void ext_00869310();

extern "C" __declspec(naked) unsigned int __cdecl fn_0085CE00(void* node) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        test esi, esi
        jne has_node
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    has_node:
        mov eax, dword ptr [esi + 0x14]
        test eax, eax
        je no_child0
        push eax
        lea ebx, [esi + 0x4]
        call fn_0085CE00
        mov dword ptr [ebx], eax
        add esp, 4
        mov edi, eax
        jmp after_child0
    no_child0:
        lea ebx, [esi + 0x4]
        mov edi, dword ptr [ebx]
    after_child0:
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je no_child1
        push eax
        call fn_0085CE00
        add esp, 4
        add edi, eax
    no_child1:
        mov eax, dword ptr [ebx]
        cmp eax, 0x80
        jae ge_80
        lea eax, [edi + 2]
        inc edi
        pop edi
        pop esi
        pop ebx
        ret
    ge_80:
        cmp eax, 0x100
        jae ge_100
        lea eax, [edi + 3]
        add edi, 2
        pop edi
        pop esi
        pop ebx
        ret
    ge_100:
        cmp eax, 0xffff
        ja ge_ffff
        lea eax, [edi + 4]
        add edi, 3
        pop edi
        pop esi
        pop ebx
        ret
    ge_ffff:
        cmp eax, 0xffffff
        ja ge_ffffff
        lea eax, [edi + 5]
        add edi, 4
        pop edi
        pop esi
        pop ebx
        ret
    ge_ffffff:
        lea eax, [edi + 6]
        add edi, 5
        pop edi
        pop esi
        pop ebx
        ret
        __asm _emit 0x00
    writer_entry:
        push ebx
        push esi
        push edi
        push ebp
        mov edi, dword ptr [esp + 0x18]
        push edi
        call fn_0085CE00
        mov esi, dword ptr [esp + 0x18]
        add esp, 4
        mov ebp, eax
        test esi, esi
        jne w_has_dst
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    w_has_dst:
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        inc esi
        mov eax, dword ptr [edi + 0x4]
        cmp eax, 0x80
        jae w_ge_80
        mov byte ptr [esi], al
        inc esi
        jmp w_children
    w_ge_80:
        cmp eax, 0xff
        ja w_gt_ff
        mov ebx, 1
        jmp w_have_len
    w_gt_ff:
        mov ebx, 2
        cmp eax, 0xffff
        jbe w_have_len
        mov ecx, 0xffffff
        mov ebx, 4
        cmp ecx, eax
        adc ebx, -1
    w_have_len:
        mov al, bl
        or al, -0x80
        mov byte ptr [esi], al
        mov eax, 1
        cmp ebx, eax
        jl w_skip_bytes
    w_byte_loop:
        mov edx, dword ptr [edi + 0x4]
        mov cl, bl
        sub cl, al
        inc eax
        shl cl, 3
        shr edx, cl
        mov byte ptr [eax + esi - 0x1], dl
        cmp eax, ebx
        jle w_byte_loop
    w_skip_bytes:
        lea esi, [ebx + esi + 0x1]
    w_children:
        mov eax, dword ptr [edi + 0x14]
        test eax, eax
        je w_no_child0
        push eax
        push esi
        call writer_entry
        add esp, 8
        add esi, eax
        jmp w_after_child0
    w_no_child0:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        push esi
        call ext_00869310
        add esp, 0xc
        add esi, dword ptr [edi + 0x4]
    w_after_child0:
        mov eax, dword ptr [edi + 0x18]
        test eax, eax
        je w_end
        push eax
        push esi
        call writer_entry
        add esp, 8
    w_end:
        mov eax, ebp
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0085EF70] sub_0085EF70 (448 bytes)
extern "C" void ext_0085DA80();
extern "C" int mem_00ABB25C;
extern "C" int mem_00AB98F0;

extern "C" __declspec(naked) void fn_0085EF70() {
    __asm {
        push esi
        push 0x00ac04ec
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_1
        xor eax, eax
        pop esi
        ret
    lbl_1:
        push 0x00ac04f0
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_2
        xor eax, eax
        pop esi
        ret
    lbl_2:
        push 0x00ac04f4
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_3
        xor eax, eax
        pop esi
        ret
    lbl_3:
        push 0x00ac04f8
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_4
        xor eax, eax
        pop esi
        ret
    lbl_4:
        push 0x00ac0504
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_5
        xor eax, eax
        pop esi
        ret
    lbl_5:
        push 0x00ac050c
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_6
        xor eax, eax
        pop esi
        ret
    lbl_6:
        push 0x00ac0510
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_7
        xor eax, eax
        pop esi
        ret
    lbl_7:
        push 0x00ac0518
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_8
        xor eax, eax
        pop esi
        ret
    lbl_8:
        push 0x00ac051c
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_9
        mov eax, 0x1
        pop esi
        ret
    lbl_9:
        push 0x00ac0520
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_10
        mov eax, 0x1
        pop esi
        ret
    lbl_10:
        push 0x00ac0524
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_11
        mov eax, 0x1
        pop esi
        ret
    lbl_11:
        push 0x00ac0528
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_12
        mov eax, 0x1
        pop esi
        ret
    lbl_12:
        push 0x00ac0530
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_13
        mov eax, 0x1
        pop esi
        ret
    lbl_13:
        push 0x00ac0538
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_14
        mov eax, 0x1
        pop esi
        ret
    lbl_14:
        push 0x00ac053c
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_15
        mov eax, 0x1
        pop esi
        ret
    lbl_15:
        push 0x00ac0540
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_16
        mov eax, 0x1
        pop esi
        ret
    lbl_16:
        push 0x00ac0544
        push esi
        call ext_0085E6A0
        add esp, 0x8
        test eax, eax
        jne lbl_17
        mov eax, 0x1
        pop esi
        ret
    lbl_17:
        push esi
        push 0x00ac0548
        call ext_0085DA80
        mov eax, dword ptr [esp + 0x14]
        add esp, 0x8
        mov dword ptr [mem_00AB98EC], 0x13
        mov ecx, dword ptr [mem_00ABB25C]
        pop esi
        mov dword ptr [mem_00AB98F0], ecx
        ret
    }
}

// [0x0085F7E0] sub_0085F7E0 (490 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085F9D0();
extern "C" void ext_0085FA70();
extern "C" void ext_0085FB40();
extern "C" void ext_0085FC10();
extern "C" void ext_0085FCE0();
extern "C" void ext_0085FDB0();
extern "C" void ext_0085FE90();
extern "C" int mem_00AB98D0;
extern "C" int mem_00AB98B4;
extern "C" int mem_00AB98EC;
extern "C" int mem_00AB9884;
extern "C" int mem_00BC70DC;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC66AF;
extern "C" int mem_00BC6671;
extern "C" int mem_00BC659A;
extern "C" int mem_00BC6598;
extern "C" int mem_00BC659C;
extern "C" int mem_00BC659E;
extern "C" int mem_00BC6670;
extern "C" int mem_00BC65A0;
extern "C" int mem_00BC65A1;

extern "C" __declspec(naked) void __cdecl fn_0085F7E0(void) {
    __asm {
        push esi
        mov ecx, offset mem_00AB98D0
        mov esi, dword ptr [esp + 8]
        push edi
        mov eax, dword ptr [esi]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi + 4]
        mov dword ptr [ecx + 4], edx
        mov edi, dword ptr [esi + 8]
        mov dword ptr [ecx + 8], edi
        mov edi, dword ptr [esp + 0x10]
        mov al, byte ptr [esi + 0xc]
        test edi, edi
        mov byte ptr [ecx + 0xc], al
        je skip_inc
        inc word ptr [mem_00AB98B4]
    skip_inc:
        xor eax, eax
        mov al, byte ptr [esi]
        cmp eax, 1
        je case1
        cmp eax, 8
        je case8
        mov eax, 0xfffffef1
        pop edi
        mov dword ptr [mem_00AB98EC], 0xa
        pop esi
        ret
    case1:
        mov ax, word ptr [mem_00BC70DC]
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC66AF], ax
        test edi, edi
        je c1_nofn
        call ext_0085FA70
    c1_nofn:
        cmp byte ptr [mem_00BC6671], 0x31
        je c1_tail
        cmp byte ptr [mem_00BC6671], 0x62
        je c1_tail
        cmp byte ptr [mem_00BC6671], 0x60
        je c1_tail
        push 0xad
        push 0
        push offset mem_00BC6598
        call ext_0085D510
        mov ax, word ptr [mem_00AB98B4]
        add esp, 0xc
        mov word ptr [mem_00BC659A], ax
        push 0xa5
        mov word ptr [mem_00BC6598], 0x2309
        mov word ptr [mem_00BC659C], 0x12c
        mov word ptr [mem_00BC659E], 0xa5
        push offset mem_00BC6670
        push offset mem_00BC65A0
        call ext_0085D530
        add esp, 0xc
        mov al, byte ptr [mem_00BC6670]
        push 0xa4
        push offset mem_00BC65A1
        push eax
        call ext_0085F9D0
        add esp, 0xc
        push esi
        call ext_0085FC10
        jmp c1_done
    c1_tail:
        push esi
        call ext_0085FB40
    c1_done:
        add esp, 4
        xor eax, eax
        mov dword ptr [mem_00AB98EC], 0
        pop edi
        pop esi
        ret
    case8:
        mov ax, word ptr [mem_00AB9884]
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC66AF], ax
        test edi, edi
        je c8_nofn
        call ext_0085FCE0
    c8_nofn:
        cmp byte ptr [mem_00BC6671], 0x31
        je c8_tail
        cmp byte ptr [mem_00BC6671], 0x62
        je c8_tail
        cmp byte ptr [mem_00BC6671], 0x60
        je c8_tail
        push 0xad
        push 0
        push offset mem_00BC6598
        call ext_0085D510
        mov ax, word ptr [mem_00AB98B4]
        add esp, 0xc
        mov word ptr [mem_00BC659A], ax
        push 0xa5
        mov word ptr [mem_00BC6598], 0x2309
        mov word ptr [mem_00BC659C], 0x12c
        mov word ptr [mem_00BC659E], 0xa5
        push offset mem_00BC6670
        push offset mem_00BC65A0
        call ext_0085D530
        add esp, 0xc
        mov al, byte ptr [mem_00BC6670]
        push 0xa4
        push offset mem_00BC65A1
        push eax
        call ext_0085F9D0
        add esp, 0xc
        push offset mem_00BC6598
        push esi
        call ext_0085FE90
        add esp, 8
        jmp c8_done
    c8_tail:
        push esi
        call ext_0085FDB0
        add esp, 4
    c8_done:
        xor eax, eax
        pop edi
        mov dword ptr [mem_00AB98EC], 0
        pop esi
        ret
    }
}

extern "C" void ext_0085A130();
extern "C" void ext_0085A370();
extern "C" void ext_0085A3E0();
extern "C" void ext_0086D0A0();

// [0x0085AE30] sub_0085AE30 (495 bytes)
extern "C" __declspec(naked) void __fastcall fn_0085AE30(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x18
        _emit 0x8d
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push 1
        push 8
        push ecx
        call ext_0086D0A0
        add esp, 0x10
        cmp eax, 1
        je ok_path
        pop edi
        pop esi
        pop ebp
        mov eax, 0x20
        pop ebx
        add esp, 0x18
        ret
    ok_path:
        mov ebx, dword ptr [esp + 0x34]
        push ebx
        call ext_0085A370
        mov edi, eax
        add esp, 4
        cmp edi, -1
        je fail_c
        mov ecx, dword ptr [ebx + 0x14]
        mov esi, edi
        shl esi, 4
        add esi, ecx
        mov ecx, dword ptr [esp + 0x2c]
        cmp ecx, 1
        jne plain1
        mov edx, dword ptr [esp + 0x11]
        xor eax, eax
        mov ah, byte ptr [esp + 0x10]
        and edx, 0xff
        or eax, edx
        mov edx, dword ptr [esp + 0x12]
        shl eax, 8
        and edx, 0xff
        or eax, edx
        mov edx, dword ptr [esp + 0x13]
        shl eax, 8
        and edx, 0xff
        or eax, edx
        jmp store1
    plain1:
        mov eax, dword ptr [esp + 0x10]
    store1:
        xor ebp, ebp
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], ebp
        mov ebx, dword ptr [esp + 0x14]
        cmp ecx, 1
        jne plain2
        mov eax, dword ptr [esp + 0x15]
        mov ecx, dword ptr [esp + 0x16]
        and ebx, 0xff
        mov edx, dword ptr [esp + 0x17]
        shl ebx, 8
        and eax, 0xff
        and ecx, 0xff
        or ebx, eax
        and edx, 0xff
        shl ebx, 8
        or ebx, ecx
        shl ebx, 8
        or ebx, edx
    plain2:
        cmp ebx, ebp
        jbe done_loop
    loop_top:
        mov eax, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x1c]
        push eax
        push 1
        push 8
        push ecx
        call ext_0086D0A0
        add esp, 0x10
        cmp eax, 1
        jne fail_b
        push esi
        call ext_0085A3E0
        mov edi, eax
        add esp, 4
        cmp edi, -1
        je fail_d
        mov ecx, dword ptr [esp + 0x2c]
        cmp ecx, 1
        jne plain3
        mov edx, dword ptr [esp + 0x1d]
        xor eax, eax
        mov ah, byte ptr [esp + 0x1c]
        and edx, 0xff
        or eax, edx
        mov edx, dword ptr [esp + 0x1e]
        shl eax, 8
        and edx, 0xff
        or eax, edx
        mov edx, dword ptr [esp + 0x1f]
        shl eax, 8
        and edx, 0xff
        or eax, edx
        jmp store2
    plain3:
        mov eax, dword ptr [esp + 0x1c]
    store2:
        mov edx, dword ptr [esi + 8]
        cmp ecx, 1
        mov dword ptr [edx + edi * 8], eax
        mov eax, dword ptr [esp + 0x20]
        jne plain4
        mov ecx, dword ptr [esp + 0x21]
        mov edx, dword ptr [esp + 0x22]
        and eax, 0xff
        and ecx, 0xff
        shl eax, 8
        or eax, ecx
        mov ecx, dword ptr [esp + 0x23]
        shl eax, 8
        and edx, 0xff
        and ecx, 0xff
        or eax, edx
        shl eax, 8
        or eax, ecx
    plain4:
        mov edx, dword ptr [esi + 8]
        inc ebp
        cmp ebp, ebx
        mov dword ptr [edx + edi * 8 + 4], eax
        jb loop_top
    done_loop:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret
    fail_b:
        mov eax, dword ptr [esp + 0x34]
        push edi
        push eax
        mov esi, 0x20
        call ext_0085A130
        add esp, 8
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    fail_d:
        mov ecx, dword ptr [esp + 0x34]
        push -1
        push ecx
        mov esi, 0xc
        call ext_0085A130
        add esp, 8
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    fail_c:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x0085E770] sub_0085E770 (617 bytes)
extern "C" void ext_0085DA90();
extern "C" void ext_0085E030();
extern "C" void ext_0085E9E0();
extern "C" void ext_0085EA10();
extern "C" int mem_00AC02D8;
extern "C" int mem_00AC02DC;
extern "C" int mem_00ABAE50;
extern "C" int mem_00ABAE54;

extern "C" __declspec(naked) void __fastcall fn_0085E770(void* self) {
    __asm {
        sub esp, 0x42c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x438]
        push edi
        push ebp
        push esi
        call ext_0085E1F0
        add esp, 0x4
        test eax, eax
        jne t770_L1
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x42c
        ret
    t770_L1:
        push esi
        call ext_0085DA90
        add esp, 0x4
        mov ebx, eax
        lea eax, [esp + 0x14]
        push eax
        push esi
        call ext_0081743A
        add esp, 0x8
        test eax, eax
        jne t770_L2
        mov eax, 1
        pop ebp
        mov dword ptr [mem_00AB98EC], 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0x42c
        ret
    t770_L2:
        xor esi, esi
        push 1
        lea eax, [esp + 0x17]
        mov ecx, dword ptr [esp + 0x18]
        mov byte ptr [esp + 0x1c], 0x0
        mov byte ptr [esp + 0x128], 0x0
        mov dword ptr [mem_00ABB25C], 1
        push eax
        push ecx
        call ext_0081D9A4
        add esp, 0xc
        test eax, eax
        je t770_L9B7
    t770_L807:
        cmp byte ptr [esp + 0x13], 0xa
        je t770_L84C
        cmp byte ptr [esp + 0x13], 0xd
        je t770_L84C
        cmp byte ptr [esp + 0x13], 0x20
        jae t770_L821
        mov byte ptr [esp + 0x13], 0x20
    t770_L821:
        lea eax, [esp + 0x18]
        push eax
        call ext_0085E1F0
        add esp, 0x4
        cmp eax, 0x100
        jae t770_L96C
        mov al, byte ptr [esp + 0x13]
        mov byte ptr [esp + esi + 0x18], al
        inc esi
        mov byte ptr [esp + esi + 0x18], 0x0
        jmp t770_L96C
    t770_L84C:
        lea eax, [esp + 0x18]
        push eax
        call ext_0085E3A0
        lea eax, [esp + 0x1c]
        add esp, 0x4
        push eax
        call ext_0085E1F0
        add esp, 0x4
        mov edx, eax
        cmp edx, 0x400
        jge t770_L898
        lea edi, [esp + 0x18]
        mov ecx, 0xffffffff
        sub eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 0x2
        mov esi, edi
        mov edi, offset mem_00ABAE50
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp t770_L8C6
    t770_L898:
        mov eax, dword ptr [mem_00AC02D8]
        mov ebp, dword ptr [mem_00AC02DC]
        mov dword ptr [mem_00ABAE50], eax
        mov esi, offset mem_00AC02D8
        mov dword ptr [mem_00ABAE54], ebp
        mov ecx, offset mem_00ABAE50
        mov eax, dword ptr [esi + 0x8]
        mov si, word ptr [esi + 0xc]
        mov dword ptr [ecx + 0x8], eax
        mov word ptr [ecx + 0xc], si
    t770_L8C6:
        test edx, edx
        je t770_L965
        cmp byte ptr [esp + 0x18], 0x5b
        jne t770_L90A
        lea eax, [esp + edx + 0x17]
        cmp byte ptr [eax], 0x5d
        jne t770_L90A
        mov byte ptr [esp + 0x18], 0x20
        mov byte ptr [eax], 0x20
        lea eax, [esp + 0x18]
        push eax
        call ext_0085E3A0
        lea eax, [esp + 0x1c]
        lea ecx, [esp + 0x128]
        add esp, 0x4
        push eax
        push ecx
        call ext_0085E030
        add esp, 0x8
        jmp t770_L965
    t770_L90A:
        lea eax, [esp + 0x124]
        lea ecx, [esp + 0x230]
        push eax
        push ecx
        call ext_0085E030
        lea ecx, [esp + 0x238]
        add esp, 0x8
        push 0x00ac02e8
        push ecx
        call ext_0085E9E0
        lea ecx, [esp + 0x20]
        lea edx, [esp + 0x238]
        add esp, 0x8
        push ecx
        push edx
        call ext_0085E9E0
        lea ecx, [esp + 0x238]
        add esp, 0x8
        push ecx
        call ext_0085EA10
        add esp, 0x4
        cmp dword ptr [mem_00AB98EC], 0x13
        je t770_L9B7
    t770_L965:
        mov byte ptr [esp + 0x18], 0x0
        xor esi, esi
    t770_L96C:
        xor eax, eax
        mov al, byte ptr [esp + 0x13]
        cmp eax, 0xa
        je t770_L97E
        cmp eax, 0xd
        je t770_L990
        jmp t770_L99B
    t770_L97E:
        cmp ebx, 0x3
        jne t770_L989
        inc dword ptr [mem_00ABB25C]
    t770_L989:
        cmp ebx, 0x1
        jne t770_L99B
        jmp t770_L995
    t770_L990:
        cmp ebx, 0x2
        jne t770_L99B
    t770_L995:
        inc dword ptr [mem_00ABB25C]
    t770_L99B:
        lea eax, [esp + 0x13]
        push 0x1
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        call ext_0081D9A4
        add esp, 0xc
        test eax, eax
        jne t770_L807
    t770_L9B7:
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_00843D46
        add esp, 0x4
        cmp dword ptr [mem_00AB98EC], 0x1
        sbb eax, eax
        pop ebp
        inc eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x42c
        ret
    }
}

// [0x00853410] sub_00853410 (623 bytes)
extern "C" void __cdecl ext_00868E70(const void* src, void* dst, void* key, int rounds);

extern "C" __declspec(naked) int __cdecl fn_00853410(unsigned char* mode, unsigned char* ctx, const unsigned char* in, int len, unsigned char* out) {
    __asm {
        sub esp, 24h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+38h]
        test edi, edi
        je L_m5
        mov ecx, dword ptr [esp+3Ch]
        test ecx, ecx
        je L_m5
        cmp byte ptr [ecx], 0
        je L_m5
        mov esi, dword ptr [esp+40h]
        test esi, esi
        je L_zero
        mov eax, dword ptr [esp+44h]
        test eax, eax
        jle L_zero
        mov edx, eax
        and edx, 8000000Fh
        jns L_chk
        dec edx
        or edx, 0FFFFFFF0h
        inc edx
L_chk:
        je L_aligned
        pop edi
        pop esi
        pop ebp
        mov eax, 0FFFFFFF8h
        pop ebx
        add esp, 24h
        ret
L_aligned:
        cdq
        and edx, 0Fh
        add eax, edx
        xor edx, edx
        mov dl, byte ptr [edi]
        sar eax, 4
        dec edx
        mov dword ptr [esp+40h], eax
        je L_pathA
        dec edx
        jne L_m5
        inc edi
        dec eax
        mov edx, edi
        test eax, eax
        mov ebx, dword ptr [edx]
        mov edi, dword ptr [edx+4]
        mov ebp, dword ptr [edx+8]
        mov edx, dword ptr [edx+0Ch]
        mov dword ptr [esp+1Ch], edx
        jle L_finalB
        mov dword ptr [esp+38h], eax
L_loopB:
        mov eax, dword ptr [ecx+4Ch]
        add ecx, 54h
        push eax
        push ecx
        lea ecx, [esp+28h]
        push ecx
        push esi
        call ext_00868E70
        mov ecx, dword ptr [esp+34h]
        mov eax, dword ptr [esp+30h]
        mov edx, dword ptr [esp+2Ch]
        xor ecx, edi
        mov edi, dword ptr [esp+3Ch]
        xor eax, ebx
        mov ebx, dword ptr [esp+38h]
        xor edi, edx
        xor ebx, ebp
        mov edx, esi
        mov dword ptr [esp+38h], ebx
        mov dword ptr [esp+3Ch], edi
        mov ebx, dword ptr [edx]
        mov dword ptr [esp+30h], eax
        mov dword ptr [esp+34h], ecx
        add esp, 10h
        mov edi, dword ptr [edx+4]
        add esi, 10h
        mov ebp, dword ptr [edx+8]
        mov edx, dword ptr [edx+0Ch]
        mov dword ptr [esp+1Ch], edx
        mov edx, dword ptr [esp+48h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [esp+28h]
        mov dword ptr [edx+4], ecx
        mov ecx, dword ptr [esp+2Ch]
        mov dword ptr [edx+8], eax
        mov eax, dword ptr [esp+38h]
        mov dword ptr [edx+0Ch], ecx
        mov ecx, edx
        add ecx, 10h
        dec eax
        mov dword ptr [esp+48h], ecx
        mov ecx, dword ptr [esp+3Ch]
        mov dword ptr [esp+38h], eax
        jne L_loopB
L_finalB:
        mov edx, dword ptr [ecx+4Ch]
        add ecx, 54h
        push edx
        lea eax, [esp+24h]
        push ecx
        push eax
        push esi
        call ext_00868E70
        mov ecx, dword ptr [esp+2Ch]
        mov edx, dword ptr [esp+3Ch]
        mov eax, dword ptr [esp+30h]
        mov esi, dword ptr [esp+38h]
        xor edx, ecx
        xor eax, ebx
        mov ebx, dword ptr [esp+34h]
        mov dword ptr [esp+3Ch], edx
        mov edx, dword ptr [esp+3Fh]
        add esp, 10h
        xor ebx, edi
        xor esi, ebp
        and edx, 0FFh
        mov dword ptr [esp+20h], eax
        mov dword ptr [esp+24h], ebx
        mov dword ptr [esp+28h], esi
        jle L_m8
        cmp edx, 10h
        jg L_m8
        mov esi, 10h
        sub esi, edx
        mov eax, esi
        cmp eax, 10h
        jge L_pBcopy
L_pBchk:
        xor ecx, ecx
        mov cl, byte ptr [esp+eax+20h]
        cmp ecx, edx
        jne L_m8
        inc eax
        cmp eax, 10h
        jl L_pBchk
L_pBcopy:
        mov edi, dword ptr [esp+48h]
        mov ecx, esi
        lea esi, [esp+20h]
        jmp L_copy
L_pathA:
        lea ebx, [eax-1]
        test ebx, ebx
        jle L_A0
        mov edi, dword ptr [esp+48h]
        lea ebp, [ecx+54h]
        jmp L_A1
L_Aloop:
        mov ecx, dword ptr [esp+3Ch]
L_A1:
        mov ecx, dword ptr [ecx+4Ch]
        push ecx
        push ebp
        push edi
        push esi
        call ext_00868E70
        add esp, 10h
        add esi, 10h
        add edi, 10h
        dec ebx
        jne L_Aloop
        mov ecx, dword ptr [esp+3Ch]
L_Afinal:
        mov edx, dword ptr [ecx+4Ch]
        add ecx, 54h
        push edx
        lea eax, [esp+24h]
        push ecx
        push eax
        push esi
        call ext_00868E70
        mov edx, dword ptr [esp+3Fh]
        add esp, 10h
        and edx, 0FFh
        cmp edx, 10h
        jl L_Aok
L_m8:
        pop edi
        pop esi
        pop ebp
        mov eax, 0FFFFFFF8h
        pop ebx
        add esp, 24h
        ret
L_A0:
        mov edi, dword ptr [esp+48h]
        jmp L_Afinal
L_Aok:
        mov esi, 10h
        sub esi, edx
        mov eax, esi
        cmp eax, 10h
        jge L_Acopy
L_Achk:
        xor ecx, ecx
        mov cl, byte ptr [esp+eax+20h]
        cmp ecx, edx
        jne L_m8
        inc eax
        cmp eax, 10h
        jl L_Achk
L_Acopy:
        mov ecx, esi
        lea esi, [esp+20h]
L_copy:
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [esp+40h]
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        shl eax, 4
        pop ebp
        sub eax, edx
        pop ebx
        add esp, 24h
        ret
L_zero:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 24h
        ret
L_m5:
        pop edi
        pop esi
        pop ebp
        mov eax, 0FFFFFFFBh
        pop ebx
        add esp, 24h
        ret
    }
}

// [0x0085BFE0] sub_0085BFE0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085BFE0(void* a) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_00859730
        pop ecx
        ret
    }
}

// [0x00857420] sub_00857420 (32 bytes)
extern "C" int mem_00AB86EC;
struct Fn857420Tbl { int pad0; int pad4; int (__cdecl *fn)(int, int); };
extern "C" __declspec(naked) int __cdecl fn_00857420(int a, int b) {
    __asm {
        mov eax, dword ptr [mem_00AB86EC]
        test eax, eax
        je short L_null
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push ecx
        push edx
        call dword ptr [eax + 8]
        add esp, 8
        ret
    L_null:
        or eax, -1
        ret
        nop
        nop
    }
}

// [0x00857470] sub_00857470 (32 bytes)
extern "C" int mem_00AB86EC;

// [0x00857470]
extern "C" __declspec(naked) void __cdecl fn_00857470(void* arg) {
    __asm {
        mov eax, dword ptr [mem_00AB86EC]
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 4]
        push ecx
        call dword ptr [eax + 0Ch]
        pop ecx
    done:
        ret
    }
}

// [0x00859E50] sub_00859E50 (32 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00859E50(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov cl, byte ptr [eax + 0x14]
        mov eax, dword ptr [eax]
        test cl, 0x4
        je short L_00859E60
        mov eax, dword ptr [eax]
    L_00859E60:
        ret
    }
}

// [0x00859E70] sub_00859E70 (32 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00859E70(void* node, int key) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je done_00859E70
        mov ecx, dword ptr [esp + 8]
loop_00859E70:
        cmp ecx, dword ptr [eax]
        je done_00859E70
        mov eax, dword ptr [eax + 1Ch]
        test eax, eax
        jne loop_00859E70
done_00859E70:
        ret
    }
}

// [0x0085BE80] sub_0085BE80 (32 bytes)
extern "C" void* __cdecl ext_008596E0(unsigned int size);

extern "C" void __cdecl fn_0085BE80() {
    int* p = (int*)ext_008596E0(8);
    if (p) {
        p[0] = 0;
        p[1] = 0;
    }
}

// [0x00859BB0] sub_00859BB0 (32 bytes)
extern "C" void ext_00859BD0();
extern "C" __declspec(naked) void __cdecl fn_00859BB0(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push 0
        push eax
        push ecx
        call ext_00859BD0
        add esp, 0Ch
        ret
    }
}

// [0x0085B2C0] sub_0085B2C0 (32 bytes)
extern "C" void __cdecl fn_0085B2C0(int a1, int a2) {
    int* p = (int*)ext_00859DA0();
    if (p) {
        p[5] = 2;
        p[1] = a2;
        p[0] = a1;
    }
}

// [0x00857440] sub_00857440 (48 bytes)
extern "C" int mem_00AB86EC;

extern "C" __declspec(naked) void __cdecl fn_00857440(void) {
    __asm {
        mov eax, dword ptr [mem_00AB86EC]
        test eax, eax
        je not_set
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push edx
        push ecx
        call dword ptr [eax + 0x18]
        add esp, 0xc
        ret
not_set:
        or eax, -1
        ret
    }
}

// [0x00858B60] sub_00858B60 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00858B60(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0x28
        ret
    L_one:
        mov eax, 0x40
        ret
    L_zero:
        mov eax, 0x4
        ret
    }
}

// [0x00859330] sub_00859330 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00859330(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        test byte ptr [ecx + 0x14], 0x4
        je short fn_00859330_a
        mov ecx, dword ptr [ecx]
fn_00859330_a:
        push ebx
        mov bl, byte ptr [ecx + 0x14]
        mov edx, 1
        __asm _emit 0x84
        __asm _emit 0xDA
        pop ebx
        jne short fn_00859330_b
        mov eax, dword ptr [ecx + 0x14]
        or eax, edx
        mov dword ptr [ecx + 0x14], eax
        mov eax, dword ptr [ecx]
fn_00859330_b:
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00859780] sub_00859780 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_00859780(void* dst, const void* src, unsigned int n) {
    __asm {
        mov ecx, dword ptr [esp+0Ch]
        mov eax, dword ptr [esp+04h]
        push esi
        mov esi, dword ptr [esp+0Ch]
        mov edx, ecx
        push edi
        mov edi, eax
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret
    }
}

// [0x008597B0] sub_008597B0 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_008597B0(const char* a, const char* b, unsigned int n) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        push esi
        push edi
        test edx, edx
        jbe zero_result
        mov esi, dword ptr [esp + 0x10]
        sub esi, ecx
    cmp_loop:
        movsx edi, byte ptr [esi + ecx]
        movsx eax, byte ptr [ecx]
        sub eax, edi
        inc ecx
        dec edx
        test eax, eax
        jne done
        test edx, edx
        ja cmp_loop
    zero_result:
        xor eax, eax
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x00859DD0] sub_00859DD0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_00859DD0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, edx
        test byte ptr [edx + 0x14], 0x4
        je short L_done_859DD0
        mov eax, dword ptr [edx]
    L_done_859DD0:
        mov ecx, dword ptr [edx + 0x8]
        push ebx
        cmp ecx, dword ptr [eax + 0x4]
        jb short L_read_859DD0
        mov eax, 0xff00
        pop ebx
        ret
    L_read_859DD0:
        mov eax, dword ptr [eax]
        xor ebx, ebx
        mov bl, byte ptr [eax + ecx]
        inc ecx
        mov eax, ebx
        mov dword ptr [edx + 0x8], ecx
        pop ebx
        ret
    }
}

// [0x008599F0] sub_008599F0 (48 bytes)
extern "C" void ext_0086CCE0();

extern "C" __declspec(naked) int __cdecl fn_008599F0(const char* s) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_0086CCE0
        add esp, 0x4
        cmp al, 0x1
        je ret_field
        mov cl, byte ptr [esi]
        xor eax, eax
        test cl, cl
        je done
loop_top:
        mov cl, byte ptr [eax + esi + 0x1]
        inc eax
        test cl, cl
        jne loop_top
        pop esi
        ret
ret_field:
        mov eax, dword ptr [esi + 0x8]
done:
        pop esi
        ret
    }
}

// [0x00859DA0] sub_00859DA0 (48 bytes)
extern "C" void* __fastcall fn_00859DA0(void* self) {
    unsigned int* p = (unsigned int*)ext_008596E0(0x1c);
    if (p) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p[4] = 0x8000;
        p[5] = 0;
        p[6] = 1;
    }
    return p;
}

// [0x0085A620] sub_0085A620 (48 bytes)
extern "C" void* __fastcall fn_0085A620(void* self) {
    int* p = (int*)ext_008596E0(0x1c);
    if (p) {
        p[0] = 2;
        p[1] = 0;
        p[4] = 0;
        p[2] = 0;
        p[5] = 0;
        p[3] = 0;
        p[6] = 0;
    }
    return p;
}

// [0x0085BFB0] sub_0085BFB0 (48 bytes)
extern "C" void* __cdecl ext_008596E0(unsigned int size);
extern "C" void* __fastcall fn_0085BFB0(void* self) {
    int* p = (int*)ext_008596E0(0x18);
    if (p != 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        p[4] = 0;
        p[5] = 0;
    }
    return p;
}

// [0x0085C130] sub_0085C130 (64 bytes)
extern "C" int __cdecl fn_0085C130(unsigned int v) {
    if (v < 0x80) return 1;
    if (v < 0x100) return 2;
    if (v < 0x10000) return 3;
    if (v < 0x1000000) return 4;
    return 5;
}

// [0x00859A50] sub_00859A50 (64 bytes)
// strncat-style: append at most n chars of src to dst, always NUL-terminate.
extern "C" __declspec(naked) char* __cdecl fn_00859A50(char* dst, const char* src, unsigned int n) {
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        je      done
        mov     dl, byte ptr [eax]
        mov     ecx, eax
        test    dl, dl
        je      scan_done
scan_loop:
        mov     dl, byte ptr [ecx + 1]
        inc     ecx
        test    dl, dl
        jne     scan_loop
scan_done:
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     dl, byte ptr [esi]
        inc     esi
        test    dl, dl
        mov     byte ptr [ecx], dl
        je      term
copy_top:
        inc     ecx
        dec     edi
        je      term
copy_loop:
        mov     dl, byte ptr [esi]
        inc     esi
        test    dl, dl
        mov     byte ptr [ecx], dl
        jne     copy_top
term:
        mov     byte ptr [ecx], 0
        pop     esi
done:
        pop     edi
        ret
    }
}

// [0x008596F0] sub_008596F0 (64 bytes)
extern "C" int mem_009242CC; /* u32 0x0062D742 */
extern "C" int mem_00924210; /* u32 0x006282F4 */
extern "C" int mem_00924214; /* u32 0x00628300 */
extern "C" __declspec(naked) void __cdecl fn_008596F0(void* mem, unsigned int size) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 8]
        test ecx, ecx
        je null_path
        test eax, eax
        je free_path
        push 2
        push eax
        push ecx
        call dword ptr [mem_009242CC]
        ret
free_path:
        push ecx
        call dword ptr [mem_00924210]
zero_ret:
        xor eax, eax
        ret
null_path:
        test eax, eax
        je zero_ret
        push eax
        push 0
        call dword ptr [mem_00924214]
        ret
    }
}

// [0x0085C220] sub_0085C220 (64 bytes)
extern "C" void* __cdecl ext_008596E0(unsigned int size);

extern "C" void __fastcall fn_0085C220(void* self) {
    int* p = (int*)ext_008596E0(0x2c);
    if (p == 0) {
        return;
    }
    p[1] = 0;
    p[0] = -1;
    p[2] = -1;
    p[3] = 0;
    p[4] = -1;
    p[5] = 0;
    p[6] = 1;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
}

// [0x00859AF0] sub_00859AF0 (64 bytes)
extern "C" void __cdecl ext_00859AF0();
extern "C" void __cdecl ext_0086CD00();

extern "C" __declspec(naked) void __cdecl fn_00859AF0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        shr eax, 18h
        test al, 20h
        je L_skip_child
        mov eax, dword ptr [esi + 20h]
        test eax, eax
        je L_skip_child
        push eax
        call ext_00859AF0
        add esp, 4
L_skip_child:
        mov eax, dword ptr [esi + 1Ch]
        test eax, eax
        je L_skip_next
        push eax
        call ext_00859AF0
        add esp, 4
L_skip_next:
        push esi
        call ext_0086CD00
        add esp, 4
        pop esi
        ret
    }
}

// [0x0085C350] sub_0085C350 (64 bytes)
extern "C" void ext_00852700();
extern "C" void ext_00859360();

extern "C" __declspec(naked) void __fastcall fn_0085C350(void* self) {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push edi
        mov edi, dword ptr [esp + 0Ch]
        push eax
        push ecx
        push eax
        push ecx
        push esi
        push edi
        call ext_00852700
        add esp, 10h
        push edx
        push eax
        call ext_00859360
        add esp, 10h
        sub edi, eax
        sbb esi, edx
        mov eax, edi
        mov edx, esi
        pop edi
        pop esi
        ret
    }
}

// [0x00859CF0] sub_00859CF0 (64 bytes)
extern "C" void* __cdecl fn_00859CF0(void* a1, void* a2) {
    void* r = ext_0085B2C0(a1, a2);
    if (r != 0) {
        if (ext_0086CDB0(r) != 0) {
            ext_00859A90(r);
            return 0;
        }
    }
    return r;
}

// [0x0085C170] sub_0085C170 (80 bytes)
extern "C" int __cdecl fn_0085C170(unsigned int v) {
    if (v < 0x1f) return 1;
    if (v < 0x80) return 2;
    if (v < 0x4000) return 3;
    if (v < 0x200000) return 4;
    if (v < 0x10000000) return 5;
    return 6;
}

// [0x008598E0] sub_008598E0 (80 bytes)
// strncpy(dst, src, n) — cdecl, returns dst
extern "C" __declspec(naked) void* __cdecl fn_008598E0(char* dst, const char* src, unsigned int n) {
    __asm {
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        test    ecx, ecx
        push    edi
        je      early
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [edx]
        inc     edx
        test    al, al
        mov     byte ptr [esi], al
        lea     edi, [esi + 0x1]
        je      pad
        sub     edx, edi
loop1:
        dec     ecx
        je      done
        mov     al, byte ptr [edx + edi]
        mov     byte ptr [edi], al
        inc     edi
        test    al, al
        jne     loop1
pad:
        dec     ecx
        je      done
        mov     edx, ecx
        xor     eax, eax
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
done:
        mov     eax, esi
        pop     edi
        pop     esi
        ret
early:
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        ret
    }
}

// [0x0085A3E0] sub_0085A3E0 (80 bytes)
extern "C" void ext_008596F0();

extern "C" __declspec(naked) int __cdecl fn_0085A3E0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        or edi, -0x1
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi + 0x8]
        lea ecx, [8*eax + 0x8]
        push ecx
        push edx
        call ext_008596F0
        mov ecx, eax
        add esp, 0x8
        test ecx, ecx
        je fail
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], ecx
        mov dword ptr [ecx + 8*eax], 0x0
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 8*eax + 0x4], edi
        mov ecx, dword ptr [esi + 0x4]
        inc ecx
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    fail:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x0085A5D0] sub_0085A5D0 (80 bytes)
extern "C" void __cdecl ext_00859740(void* a, int b, int c);

extern "C" __declspec(naked) void __cdecl fn_0085A5D0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x64
        push 0x0
        push esi
        call ext_00859740
        add esp, 0xc
        or eax, -1
        mov byte ptr [esi], 0x0
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x2c], 0x1
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x48], eax
        mov dword ptr [esi + 0x4c], eax
        mov dword ptr [esi + 0x54], eax
        mov dword ptr [esi + 0x50], eax
        mov dword ptr [esi + 0x58], eax
        pop esi
        ret
    }
}

// [0x00853680] sub_00853680 (80 bytes)
// memset(self, 0, 0x5c) followed by SHA-1 style context init (h0..h4, count).
extern "C" __declspec(naked) void __cdecl fn_00853680(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x5c
        push 0x0
        push esi
        call ext_008692F0
        add esp, 0xc
        mov dword ptr [esi], 0x67452301
        mov dword ptr [esi + 0x4], 0xefcdab89
        mov dword ptr [esi + 0x8], 0x98badcfe
        mov dword ptr [esi + 0xc], 0x10325476
        mov dword ptr [esi + 0x10], 0xc3d2e1f0
        mov dword ptr [esi + 0x18], 0x0
        mov dword ptr [esi + 0x14], 0x0
        pop esi
        ret
    }
}

// [0x0085A580] sub_0085A580 (80 bytes)
extern "C" void ext_008596F0();
extern "C" void ext_0085A5D0();

extern "C" __declspec(naked) int __cdecl fn_0085A580(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        or edi, -1
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 10h]
        inc eax
        lea eax, [eax + 4*eax]
        lea eax, [eax + 4*eax]
        shl eax, 2
        push eax
        push ecx
        call ext_008596F0
        add esp, 8
        test eax, eax
        je done
        mov edi, dword ptr [esi + 4]
        mov dword ptr [esi + 10h], eax
        lea ecx, [edi + 4*edi]
        lea edx, [ecx + 4*ecx]
        lea eax, [eax + 4*edx]
        push eax
        call ext_0085A5D0
        mov eax, dword ptr [esi + 4]
        add esp, 4
        inc eax
        mov dword ptr [esi + 4], eax
    done:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x0085B2E0] sub_0085B2E0 (80 bytes)
extern "C" void ext_008599F0();
extern "C" void ext_00859E90();
extern "C" void ext_00859F60();
extern "C" void ext_0086CCC0();
extern "C" void ext_0086D110();

extern "C" __declspec(naked) void* __cdecl fn_0085B2E0(void* a) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        call ext_0086CCC0
        push esi
        mov edi, eax
        call ext_008599F0
        push eax
        push edi
        call ext_00859F60
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je short FAIL
        push esi
        call ext_0086D110
        add esp, 0x4
        test eax, eax
        je short FAIL
        push esi
        call ext_00859E90
        add esp, 0x4
        xor eax, eax
        pop edi
        pop esi
        ret
FAIL:
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x00852AD0] sub_00852AD0 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_00852AD0(unsigned char* dst, unsigned char kind, const unsigned int* src) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        cmp al, 0x1
        je ok
        cmp al, 0x2
        je ok
        cmp al, 0x3
        je ok
        mov eax, 0xfffffffc
        ret
ok:
        mov ecx, dword ptr [esp + 0x4]
        mov byte ptr [ecx], al
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je zero
        mov edx, dword ptr [eax]
        inc ecx
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], edx
        mov eax, dword ptr [eax + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov eax, 0x1
        ret
zero:
        xor edx, edx
        inc ecx
        mov eax, 0x1
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 0x4], edx
        mov dword ptr [ecx + 0x8], edx
        mov dword ptr [ecx + 0xc], edx
        ret
    }
}

// [0x008592A0] sub_008592A0 (96 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_008592A0(const void* p, unsigned int n) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0xc]
        xor eax, eax
        test edi, edi
        jbe done
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
loop_top:
        xor edx, edx
        mov ecx, eax
        mov dl, byte ptr [esi]
        and ecx, 0xf
        mov ebx, edx
        mov ecx, dword ptr [4*ecx + 0xab8c70]
        and ebx, 0xf
        shr ax, 0x4
        xor cx, word ptr [4*ebx + 0xab8c70]
        shr edx, 0x4
        xor ecx, eax
        mov eax, ecx
        and eax, 0xf
        shr cx, 0x4
        mov eax, dword ptr [4*eax + 0xab8c70]
        xor ax, word ptr [4*edx + 0xab8c70]
        xor eax, ecx
        inc esi
        dec edi
        jne loop_top
        pop esi
        pop ebx
done:
        pop edi
        ret
    }
}

// [0x0085BBC0] sub_0085BBC0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0085BBC0(void* self) {
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp+0Ch]
        mov     edx, dword ptr [esp+10h]
        push    esi
        mov     esi, dword ptr [esp+18h]
        test    esi, esi
        mov     dword ptr [esp+4], eax
        je      L_done
        cmp     esi, 40h
        jb      L_small
        xor     eax, eax
        xor     edx, edx
        pop     esi
        add     esp, 8
        ret
L_small:
        cmp     esi, 1Fh
        push    edi
        jbe     L_lt32
        lea     ecx, [esi-20h]
        xor     edi, edi
        shl     eax, cl
        mov     edx, eax
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 8
        ret
L_lt32:
        mov     edi, eax
        mov     ecx, esi
        shl     edi, cl
        mov     ecx, 20h
        sub     ecx, esi
        shr     eax, cl
        mov     ecx, esi
        shl     edx, cl
        or      eax, edx
        mov     edx, eax
        mov     eax, edi
        pop     edi
L_done:
        pop     esi
        add     esp, 8
        ret
    }
}

// [0x0085BE20] sub_0085BE20 (96 bytes)
extern "C" unsigned int ext_0085BC20(void*);
extern "C" void ext_00859DD0();

extern "C" __declspec(naked) unsigned int __cdecl fn_0085BE20(void* a1, unsigned int count, unsigned int* out) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        push ebp
        call ext_0085BC20
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x1c]
        add esp, 4
        xor esi, esi
        test ebx, ebx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [edi], 0
        jbe fn0085BE20_end
fn0085BE20_loop:
        push ebp
        call ext_00859DD0
        add esp, 4
        cmp eax, 0xff00
        je fn0085BE20_end
        mov ecx, dword ptr [edi]
        shl ecx, 8
        or ecx, eax
        inc esi
        cmp esi, ebx
        mov dword ptr [edi], ecx
        jb fn0085BE20_loop
fn0085BE20_end:
        push ebp
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x18]
        add esp, 4
        sub eax, ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085A310] sub_0085A310 (96 bytes)
extern "C" void ext_0086CFF0();

extern "C" __declspec(naked) int __cdecl fn_0085A310(void* self, void* a2, void* a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+8]
        push ebp
        push esi
        mov ecx, dword ptr [ebx+0ch]
        or eax, -1
        xor esi, esi
        push edi
        test ecx, ecx
        jbe L_ret_esi
        mov edi, dword ptr [esp+1ch]
        mov ebp, dword ptr [esp+18h]
L_loop:
        mov eax, dword ptr [ebx+18h]
        mov ecx, dword ptr [eax+esi*8]
        lea eax, [eax+esi*8]
        cmp ecx, edi
        jne L_next
        mov ecx, dword ptr [eax+4]
        push edi
        push ebp
        push ecx
        call ext_0086CFF0
        add esp, 0ch
        test eax, eax
        je L_found
L_next:
        mov eax, dword ptr [ebx+0ch]
        inc esi
        cmp esi, eax
        jb L_loop
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret
L_found:
        mov eax, esi
L_ret_esi:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00859F60] sub_00859F60 (96 bytes)
extern "C" void __cdecl ext_00859730(void* p);
extern "C" void ext_0086CF90();
extern "C" void ext_0086CFB0();
extern "C" __declspec(naked) void* __cdecl fn_00859F60(void) {
    __asm {
        push esi
        push edi
        push 0
        call ext_0086CFB0
        mov esi, eax
        add esp, 4
        test esi, esi
        je done
        mov eax, dword ptr [esp + 0xc]
        mov edi, dword ptr [esp + 0x10]
        test eax, eax
        jne store
        test edi, edi
        mov dword ptr [esi + 0xc], 0
        je store
        push 1
        push edi
        call ext_0086CF90
        add esp, 8
        test eax, eax
        jne store
        push esi
        call ext_00859730
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        ret
store:
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edi
done:
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x00859A90] sub_00859A90 (96 bytes)
extern "C" void __cdecl ext_00859730(void* p);

extern "C" __declspec(naked) void __cdecl fn_00859A90(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0x14]
        dec eax
        test cl, 0x4
        mov dword ptr [esi + 0x18], eax
        je short L_flag4_clear
        mov eax, dword ptr [esi]
        push eax
        call ext_00859A90
        mov eax, dword ptr [esi + 0x18]
        add esp, 0x4
        test eax, eax
        jne short L_done
        push esi
        call ext_00859730
        add esp, 0x4
        pop esi
        ret
L_flag4_clear:
        test eax, eax
        jne short L_done
        mov eax, dword ptr [esi]
        test eax, eax
        je short L_skip_head
        test cl, 0x2
        jne short L_skip_head
        push eax
        call ext_00859730
        add esp, 0x4
L_skip_head:
        push esi
        call ext_00859730
        add esp, 0x4
L_done:
        pop esi
        ret
    }
}

// [0x0085A650] sub_0085A650 (96 bytes)
extern "C" void __cdecl ext_00859730(void* p);
extern "C" void ext_00859FC0();
extern "C" void ext_0085A130();
extern "C" void ext_0085A430();

extern "C" __declspec(naked) void __cdecl fn_0085A650(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jbe L_skip1
    L_loop1:
        dec eax
        push eax
        push esi
        call ext_0085A430
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x8
        test eax, eax
        ja L_loop1
    L_skip1:
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        jbe L_skip2
    L_loop2:
        dec eax
        push eax
        push esi
        call ext_0085A130
        mov eax, dword ptr [esi + 0x8]
        add esp, 0x8
        test eax, eax
        ja L_loop2
    L_skip2:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        jbe L_skip3
    L_loop3:
        dec eax
        push eax
        push esi
        call ext_00859FC0
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x8
        test eax, eax
        ja L_loop3
    L_skip3:
        push esi
        call ext_00859730
        add esp, 0x4
        pop esi
        ret
    }
}

// [0x0085A370] sub_0085A370 (112 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085A370(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp+0xc]
        or ebx, -0x1
        mov eax, dword ptr [esi+0x8]
        mov ecx, dword ptr [esi+0x14]
        inc eax
        shl eax, 0x4
        push eax
        push ecx
        call ext_008596F0
        add esp, 0x8
        test eax, eax
        je fail_path
        mov edx, dword ptr [esi+0x8]
        mov dword ptr [esi+0x14], eax
        mov ecx, edx
        shl ecx, 0x4
        mov dword ptr [ecx+eax], 0xffffffff
        mov eax, dword ptr [esi+0x14]
        mov dword ptr [eax+ecx+0x4], 0x0
        mov eax, dword ptr [esi+0x14]
        mov dword ptr [eax+ecx+0x8], 0x0
        mov eax, dword ptr [esi+0x14]
        mov dword ptr [eax+ecx+0xc], 0x0
        mov eax, dword ptr [esi+0x8]
        inc eax
        mov dword ptr [esi+0x8], eax
        pop esi
        mov eax, edx
        pop ebx
        ret
fail_path:
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}

// [0x00859D40] sub_00859D40 (96 bytes)
extern "C" void ext_00859E50();
extern "C" void ext_0085B330();
extern "C" void ext_0086CE10();
extern "C" void ext_0086CEE0();

extern "C" __declspec(naked) int __cdecl fn_00859D40(void) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov eax, dword ptr [esi]
        mov ebx, eax
        push eax
        shr ebx, 0x18
        push ebp
        and bl, 0xe0
        call ext_0086CEE0
        mov edi, eax
        mov eax, dword ptr [esi + 0xc]
        push eax
        push ebp
        call ext_0086CE10
        add esp, 0x10
        add edi, eax
        test bl, 0x20
        jne L_done_859D40
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        call ext_00859E50
        mov edx, dword ptr [esi + 0x8]
        push ebp
        add eax, edx
        mov edx, dword ptr [esi + 0xc]
        push edx
        push 0x1
        push eax
        call ext_0085B330
        add esp, 0x14
        add edi, eax
    L_done_859D40:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085C1C0] sub_0085C1C0 (96 bytes)
extern "C" void ext_0085C130();
extern "C" void ext_0085C170();
extern "C" void ext_0085C1C0();
extern "C" void ext_0086D210();

extern "C" __declspec(naked) void __cdecl fn_0085C1C0(void* p) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        mov ecx, eax
        shr ecx, 0x18
        test cl, 0x20
        je L_else
        mov edx, dword ptr [edi + 0x20]
        push ebx
        and eax, 0xfffffff
        push edx
        mov ebx, eax
        call ext_0085C1C0
        mov esi, eax
        push esi
        call ext_0085C130
        push ebx
        add esi, eax
        call ext_0085C170
        add esp, 0xc
        add esi, eax
        pop ebx
        jmp L_join
    L_else:
        push edi
        call ext_0086D210
        add esp, 4
        mov esi, eax
    L_join:
        mov edi, dword ptr [edi + 0x1c]
        test edi, edi
        je L_done
        push edi
        call ext_0085C1C0
        add esp, 4
        add esi, eax
    L_done:
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x0085C2E0] sub_0085C2E0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_0085C2E0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov al, 8
        push esi
        movsx ecx, byte ptr [ebx]
        push edi
        mov esi, ebx
        test byte ptr [2*ecx + 0xab8e00], al
        je SKIPWS
    WSLOOP:
        movsx edx, byte ptr [esi + 1]
        inc esi
        test byte ptr [2*edx + 0xab8e00], al
        jne WSLOOP
    SKIPWS:
        mov al, byte ptr [esi]
        cmp al, 0x2d
        jne NOTNEG
        mov eax, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        inc esi
        push eax
        push edi
        push esi
        call ext_0086D250
        add esp, 0xc
        neg eax
        jmp DONE
    NOTNEG:
        cmp al, 0x2b
        jne NOPLUS
        inc esi
    NOPLUS:
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        push ecx
        push edi
        push esi
        call ext_0086D250
        add esp, 0xc
    DONE:
        test eax, eax
        jne EXIT
        test edi, edi
        je EXIT
        cmp dword ptr [edi], esi
        jne EXIT
        mov dword ptr [edi], ebx
    EXIT:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0085C270] sub_0085C270 (112 bytes)
extern "C" void ext_00859D40();
extern "C" void ext_0085B330();
extern "C" void ext_0085C270();

extern "C" __declspec(naked) int __cdecl fn_0085C270(void) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        push ebp
        mov ebx, dword ptr [edi]
        shr ebx, 0x18
        and bl, -0x20
        call ext_00859D40
        add esp, 0x8
        mov esi, eax
        test bl, 0x20
        je skip_child
        mov eax, dword ptr [edi + 0x20]
        push eax
        push ebp
        call ext_0085C270
        add esi, eax
        mov eax, dword ptr [edi + 0xc]
        add esp, 0x8
        cmp eax, -1
        jne skip_child
        push ebp
        push 0x2
        push 0x1
        push 0xbc5c10
        call ext_0085B330
        add esp, 0x10
        add esi, eax
    skip_child:
        mov edi, dword ptr [edi + 0x1c]
        test edi, edi
        je done
        push edi
        push ebp
        call ext_0085C270
        add esp, 0x8
        add esi, eax
    done:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085BEC0] sub_0085BEC0 (128 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085BEC0(void* t, int key) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor eax, eax
        push edi
        mov ecx, dword ptr [esi]
        test ecx, ecx
        jbe NOTFOUND
        mov edi, dword ptr [esi + 4]
        mov edx, edi
    SCAN:
        cmp ebx, dword ptr [edx]
        je FOUND
        inc eax
        add edx, 8
        cmp eax, ecx
        jb SCAN
    NOTFOUND:
        lea eax, [8*ecx + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        call ext_008596F0
        add esp, 8
        test eax, eax
        jne GROW
        pop edi
        pop esi
        mov eax, 0ch
        pop ebx
        ret
    FOUND:
        mov ecx, dword ptr [edi + 8*eax + 4]
        inc ecx
        mov dword ptr [edi + 8*eax + 4], ecx
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    GROW:
        mov edx, dword ptr [esi]
        pop edi
        mov dword ptr [eax + 8*edx + 4], 1
        mov ecx, dword ptr [esi]
        mov dword ptr [eax + 8*ecx], ebx
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esi]
        inc eax
        mov dword ptr [esi], eax
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x0085BB40] sub_0085BB40 (128 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_0085BB40(unsigned int c, unsigned char* a) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, edi
        test byte ptr [edi + 0x14], 0x4
        je L_B50
        mov esi, dword ptr [edi]
L_B50:
        mov eax, dword ptr [esi + 0x14]
        test al, 0x1
        jne L_FAIL
        test al, 0x2
        je L_B65
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x8]
        cmp eax, ecx
        jbe L_FAIL
L_B65:
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [edi + 0x8]
        cmp ecx, eax
        ja L_B8B
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x8]
        lea ecx, [edx + eax + 0x1]
        mov edx, dword ptr [edi]
        push ecx
        push edx
        call ext_008596F0
        add esp, 0x8
        test eax, eax
        je L_FAIL
        mov dword ptr [esi], eax
L_B8B:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0xc]
        mov byte ptr [ecx + edx], al
        mov edx, dword ptr [edi + 0x8]
        and eax, 0xff
        inc edx
        mov dword ptr [edi + 0x8], edx
        mov ecx, dword ptr [esi + 0x4]
        mov edi, edx
        cmp edi, ecx
        jbe L_DONE
        mov dword ptr [esi + 0x4], edi
        pop edi
        pop esi
        ret
L_FAIL:
        mov eax, 0xff00
L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x00859B30] sub_00859B30 (128 bytes)
// cdecl: int fn(int* node_list, int* pat, int flag, int (*cb)(int*, void*), void* ctx)
// Recursive pattern walk over a sibling/child node list terminated by -1.
extern "C" __declspec(naked) void __cdecl fn_00859B30() {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        xor ebx, ebx
        mov eax, dword ptr [ecx]
        push esi
        cmp eax, -0x1
        push edi
        jne L_48
L_early:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
L_48:
        mov ebp, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x14]
L_54:
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi]
        cmp eax, edx
        jne L_9f
        mov eax, dword ptr [ecx + 0x4]
        add ecx, 0x4
        cmp eax, -0x1
        je L_83
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je L_early
        mov edx, dword ptr [esp + 0x1c]
        push ebp
        push edi
        push edx
        push ecx
        push eax
        call ext_00859B30
        add esp, 0x14
        add ebx, eax
        jmp L_93
L_83:
        inc ebx
        test edi, edi
        je L_93
        push ebp
        push esi
        call edi
        add esp, 0x8
        test eax, eax
        jne L_a6
L_93:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        je L_a6
        mov ecx, dword ptr [esp + 0x18]
L_9f:
        mov esi, dword ptr [esi + 0x1c]
        test esi, esi
        jne L_54
L_a6:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret
    }
}

// [0x008587C0] sub_008587C0 (144 bytes)
// RC4-style KSA: S = identity; key-mixed swap loop over 256 entries.
// Args (cdecl, stack): [esp+4]=key, [esp+8]=keylen, [esp+0xC]=S (256-byte state).
extern "C" __declspec(naked) void __cdecl fn_008587C0(void) {
    __asm {
        sub esp, 8
        xor eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+24h]
        mov ecx, edi
    init_loop:
        mov byte ptr [ecx], al
        inc eax
        inc ecx
        cmp ax, 100h
        jl init_loop
        mov byte ptr [esp+24h], 0
        xor ecx, ecx
        mov esi, edi
        mov dword ptr [esp+10h], 100h
    ksa_loop:
        mov eax, dword ptr [esp+24h]
        mov ebp, dword ptr [esp+1ch]
        mov dl, byte ptr [esi]
        and eax, 0ffh
        xor ebx, ebx
        mov bl, byte ptr [eax+ebp]
        mov ebp, edx
        and ebp, 0ffh
        sub ebx, ebp
        add ebx, ecx
        and ebx, 800000ffh
        jns skip_fix
        dec ebx
        or ebx, 0ffffff00h
        inc ebx
    skip_fix:
        mov byte ptr [esp+14h], bl
        mov ecx, dword ptr [esp+14h]
        and ecx, 0ffh
        inc eax
        mov bl, byte ptr [ecx+edi]
        mov byte ptr [esi], bl
        mov byte ptr [ecx+edi], dl
        cdq
        idiv dword ptr [esp+20h]
        mov eax, dword ptr [esp+10h]
        inc esi
        dec eax
        mov dword ptr [esp+10h], eax
        mov byte ptr [esp+24h], dl
        jne ksa_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00859830] sub_00859830 (144 bytes)
extern "C" void ext_008599F0();
extern "C" void ext_0086CCC0();

extern "C" __declspec(naked) int __cdecl fn_00859830(unsigned int a, unsigned int b) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 16]
        push esi
        push edi
        xor esi, esi
        xor edi, edi
        cmp ebx, ebp
        jne L_NE
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
L_NE:
        push ebx
        call ext_0086CCC0
        push ebp
        mov dword ptr [esp + 32], eax
        call ext_0086CCC0
        push ebx
        mov dword ptr [esp + 32], eax
        call ext_008599F0
        push ebp
        mov ebx, eax
        call ext_008599F0
        add esp, 16
        test ebx, ebx
        jbe L_END
        mov edx, dword ptr [esp + 20]
        mov ebp, dword ptr [esp + 24]
        sub edx, ebp
L_LOOP:
        cmp edi, eax
        jae L_END
        lea ecx, [edi + ebp]
        movsx esi, byte ptr [edx + ecx]
        mov dword ptr [esp + 20], esi
        movsx esi, byte ptr [ecx]
        mov ecx, dword ptr [esp + 20]
        sub esi, ecx
        jne L_RET
        inc edi
        cmp edi, ebx
        jb L_LOOP
L_END:
        cmp ebx, eax
        jae L_GE
        or esi, -1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
L_GE:
        jbe L_RET
        mov esi, 1
L_RET:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085BD10] sub_0085BD10 (144 bytes)
extern "C" void ext_00859DD0();
extern "C" void ext_0085BBC0();
extern "C" unsigned int ext_0085BC20(void*);

extern "C" __declspec(naked) void __cdecl fn_0085BD10(unsigned int a1, unsigned int a2, unsigned __int64* out) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        push eax
        call ext_0085BC20
        mov esi, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x1c]
        xor edi, edi
        add esp, 0x4
        mov dword ptr [esi], edi
        cmp ebp, edi
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esi + 0x4], edi
        jbe L_end
        push ebx
L_loop:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        call ext_00859DD0
        mov ebx, eax
        add esp, 0x4
        cmp ebx, 0xff00
        je L_break
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        push 0x8
        push edx
        push eax
        call ext_0085BBC0
        mov dword ptr [esi], eax
        mov eax, ebx
        mov dword ptr [esi + 0x4], edx
        mov ecx, dword ptr [esi]
        cdq
        or ecx, eax
        add esp, 0xc
        mov dword ptr [esi], ecx
        mov ebx, dword ptr [esi + 0x4]
        or ebx, edx
        inc edi
        cmp edi, ebp
        mov dword ptr [esi + 0x4], ebx
        jb L_loop
L_break:
        pop ebx
L_end:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x10]
        add esp, 0x4
        sub eax, ecx
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret
    }
}

// [0x0085C390] sub_0085C390 (160 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085C390(unsigned int a, unsigned int b) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [esp + 16]
        push esi
        push edi
        xor esi, esi
        xor edi, edi
        cmp ebx, ebp
        jne L_NE
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    L_NE:
        push ebx
        call ext_0086CCC0
        push ebp
        mov dword ptr [esp + 32], eax
        call ext_0086CCC0
        push ebx
        mov dword ptr [esp + 32], eax
        call ext_008599F0
        push ebp
        mov ebx, eax
        call ext_008599F0
        add esp, 16
        test ebx, ebx
        jbe L_END
        mov edx, dword ptr [esp + 20]
        mov ebp, dword ptr [esp + 24]
        sub edx, ebp
    L_LOOP:
        cmp edi, eax
        jae L_END
        lea ecx, [edi + ebp]
        movsx esi, byte ptr [edx + ecx]
        movsx ecx, byte ptr [ecx]
        movsx esi, byte ptr [esi + 0xac3940]
        mov dword ptr [esp + 20], esi
        movsx esi, byte ptr [ecx + 0xac3940]
        mov ecx, dword ptr [esp + 20]
        sub esi, ecx
        jne L_DIFF
        inc edi
        cmp edi, ebx
        jb L_LOOP
    L_END:
        cmp ebx, eax
        jae L_TAIL
        or esi, -1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    L_TAIL:
        jbe L_DIFF
        mov esi, 1
    L_DIFF:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085A270] sub_0085A270 (160 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085A270(void* self, void* a2, void* a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test eax, eax
        push edi
        je lblzero
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push eax
        push esi
        call ext_0085A310
        mov edi, eax
        add esp, 0xc
        cmp edi, -1
        mov dword ptr [esp + 0x20], edi
        jne lblretedi
        jmp lblafter
    lblzero:
        mov edi, dword ptr [esp + 0x20]
    lblafter:
        push ebx
        call ext_008596E0
        mov ebp, eax
        add esp, 0x4
        test ebp, ebp
        je lblretedi
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x18]
        lea edx, [8 * ecx + 0x8]
        push edx
        push eax
        call ext_008596F0
        mov edi, eax
        add esp, 0x8
        test edi, edi
        je lblstored
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        push ecx
        push ebp
        call ext_00859780
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esi + 0x18], edi
        add esp, 0xc
        mov dword ptr [edi + 8 * eax + 0x4], ebp
        mov edx, dword ptr [esi + 0x18]
        pop edi
        mov dword ptr [edx + 8 * eax], ebx
        mov ecx, dword ptr [esi + 0xc]
        inc ecx
        mov dword ptr [esi + 0xc], ecx
        pop esi
        pop ebp
        pop ebx
        ret
    lblstored:
        mov eax, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    lblretedi:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00852860] sub_00852860 (176 bytes)
extern "C" __declspec(naked) void __cdecl fn_00852860(void) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        mov ecx, 0x1f
        push esi
        xor ebx, ebx
        push edi
        xor ebp, ebp
        mov dword ptr [esp + 0x10], ecx
    L_top:
        test eax, 0x80000000
        jne L_norm
        shl eax, 1
        dec ecx
        jns L_top
    L_norm:
        push 0x20
        push 0
        push eax
        mov dword ptr [esp + 0x1c], ecx
        call ext_0085BBC0
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, eax
        mov eax, 0x3f
        add esp, 0xc
        sub eax, ecx
        mov edi, edx
        mov dword ptr [esp + 0x20], eax
        js L_ret
        jmp L_cmp
    L_loop:
        mov eax, dword ptr [esp + 0x20]
    L_cmp:
        cmp edi, dword ptr [esp + 0x1c]
        ja L_skip
        jb L_sub
        cmp esi, dword ptr [esp + 0x18]
        ja L_skip
    L_sub:
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        sub edx, esi
        sbb ecx, edi
        add ebx, 1
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], ecx
        adc ebp, 0
    L_skip:
        test eax, eax
        je L_ret
        push 1
        push ebp
        push ebx
        call ext_0085BBC0
        push 1
        push edi
        push esi
        mov ebx, eax
        mov ebp, edx
        call ext_00868690
        mov esi, eax
        mov eax, dword ptr [esp + 0x38]
        add esp, 0x18
        dec eax
        mov edi, edx
        mov dword ptr [esp + 0x20], eax
        jns L_loop
    L_ret:
        pop edi
        mov edx, ebp
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
        nop
        nop
        nop
        nop
    }
}

// [0x008570B0] sub_008570B0 (18 bytes)
extern "C" void __cdecl fn_008570B0(void* a1) {
    ((void (__cdecl*)(void*, int, int))ext_008692F0)(a1, 0, 0x28);
}

// [0x0085D560] sub_0085D560 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085D560(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        push 0
        call dword ptr [mem_00924214]
        ret
        mov edi, edi
    }
}

// [0x0085E1F0] sub_0085E1F0 (32 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085E1F0(const char* s) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, ecx
    scan_loop:
        mov edx, eax
        inc eax
        cmp byte ptr [edx], 0
        jne scan_loop
        sub eax, ecx
        dec eax
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085DA40] sub_0085DA40 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085DA40(void) {
    __asm {
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x008573F0] sub_008573F0 (35 bytes)
extern "C" int mem_00AB86EC;
extern "C" __declspec(naked) int __cdecl fn_008573F0(void) {
    __asm {
        mov eax, dword ptr [mem_00AB86EC]
        test eax, eax
        je fail
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 8]
        push ecx
        mov ecx, dword ptr [esp + 8]
        push edx
        push ecx
        call dword ptr [eax + 4]
        add esp, 0xc
        ret
    fail:
        or eax, -1
        ret
    }
}

// [0x0085D530] sub_0085D530 (36 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085D530(void) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, esi
        dec     esi
        test    eax, eax
        je      done
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
    loop_start:
        mov     dl, byte ptr [ecx]
        inc     eax
        inc     ecx
        mov     byte ptr [eax - 0x1], dl
        mov     edx, esi
        dec     esi
        test    edx, edx
        jne     loop_start
    done:
        pop     esi
        ret
    }
}

// [0x00856F00] sub_00856F00 (38 bytes)
extern "C" __declspec(naked) int __cdecl fn_00856F00(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x10
        push 0x0
        lea eax, [esi + 0x4]
        push eax
        call ext_008692F0
        add esp, 0xc
        mov dword ptr [esi + 0x14], 0x0
        mov dword ptr [esi], 0x100
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00858A50] sub_00858A50 (46 bytes)
extern "C" __declspec(naked) int __cdecl fn_00858A50(void* a, void* b, void* c) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        jne arg1_ok
        mov eax, 0xc9
        ret
    arg1_ok:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        jne arg3_ok
        mov eax, 0xc9
        ret
    arg3_ok:
        mov edx, dword ptr [esp + 0x8]
        push edx
        push ecx
        push eax
        call ext_008536D0
        add esp, 0xc
        xor eax, eax
        ret
    }
}

// [0x0085D860] sub_0085D860 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085D860(void) {
    __asm {
        mov dx, word ptr [esp + 0x8]
        test dx, dx
        je done
        mov ecx, dword ptr [esp + 0x4]
    loop_start:
        mov eax, dword ptr [ecx]
        test eax, 0x80000000
        je branch_zero
        add eax, eax
        mov dword ptr [ecx], eax
        or eax, 0x1
        dec dx
        mov dword ptr [ecx], eax
        jne loop_start
        ret
    branch_zero:
        add eax, eax
        dec dx
        mov dword ptr [ecx], eax
        jne loop_start
    done:
        ret
        mov edi, edi
    }
}

// [0x0085E9E0] sub_0085E9E0 (48 bytes)
extern "C" __declspec(naked) char* __cdecl fn_0085E9E0(char* dst, const char* src) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov edx, eax
        cmp byte ptr [eax], 0
        je copy_start
    find_end:
        inc edx
        cmp byte ptr [edx], 0
        jne find_end
    copy_start:
        mov ecx, dword ptr [esp + 0x10]
    copy_loop:
        mov bl, byte ptr [ecx]
        mov esi, edx
        inc edx
        inc ecx
        mov byte ptr [esi], bl
        test bl, bl
        jne copy_loop
        pop esi
        pop ebx
        ret
        __emit 0x8d
        __emit 0x49
        __emit 0x00
        __emit 0x8d
        __emit 0xa4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    }
}

// [0x0085F700] sub_0085F700 (48 bytes)
extern "C" void __cdecl ext_0085F730(void* ptr, int count);
extern "C" __declspec(naked) void __cdecl fn_0085F700(char* p) {
    __asm {
        push esi
        push 8
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esi + 2]
        add esi, 0xe
        push eax
        call ext_0085F730
        add esp, 8
        push 0x18
        push esi
        call ext_0085F730
        add esp, 8
        pop esi
        ret
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085C430] sub_0085C430 (61 bytes)
extern "C" __declspec(naked) void* __stdcall fn_0085C430(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x4
        ja L_0085C468
        jmp dword ptr [4*eax + 0x85c470]
        mov eax, 0x99f0c0
        ret 0x4
        mov eax, 0x99f0b0
        ret 0x4
        mov eax, 0x99f0d0
        ret 0x4
        mov eax, 0x99f0e0
        ret 0x4
        mov eax, 0x99f0f0
        ret 0x4
    L_0085C468:
        xor eax, eax
        ret 0x4
    }
}

// [0x008539E0] sub_008539E0 (61 bytes)
extern "C" void __cdecl fn_008539E0(unsigned int* ctx) {
    ((void (__cdecl*)(void*, int, unsigned int))ext_008692F0)(ctx, 0, 0x58);
    ctx[0] = 0x67452301;
    ctx[1] = 0xefcdab89;
    ctx[2] = 0x98badcfe;
    ctx[3] = 0x10325476;
    ctx[5] = 0;
    ctx[4] = 0;
}

// [0x0085D820] sub_0085D820 (59 bytes)
extern "C" unsigned char mem_00ABB260[];
extern "C" __declspec(naked) void __cdecl fn_0085D820(unsigned char* buf, int len) {
    __asm {
        push ebx
        xor eax, eax
        push esi
        xor ebx, ebx
        mov esi, dword ptr [esp + 0xc]
        mov ecx, 0x4
        mov al, byte ptr [esi + 0x2]
        mov bl, byte ptr mem_00ABB260[eax]
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ecx
        jle done
    loop_start:
        mov edx, ebx
        inc ecx
        and edx, 0xff
        inc ebx
        mov dl, byte ptr mem_00ABB260[edx]
        xor byte ptr [esi + ecx - 0x1], dl
        cmp ecx, eax
        jl loop_start
    done:
        pop esi
        pop ebx
        ret
    }
}

// [0x0085D890] sub_0085D890 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085D890(void) {
    __asm {
        mov cx, word ptr [esp + 8]
        test cx, cx
        je done
        mov eax, dword ptr [esp + 4]
    loop_start:
        mov edx, dword ptr [eax]
        test dl, 1
        je shift_only
        _emit 0xc1
        _emit 0xea
        _emit 0x01
        mov dword ptr [eax], edx
        or edx, 0x80000000
        dec cx
        mov dword ptr [eax], edx
        jne loop_start
        ret
    shift_only:
        _emit 0xc1
        _emit 0xea
        _emit 0x01
        dec cx
        mov dword ptr [eax], edx
        jne loop_start
    done:
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085E420] sub_0085E420 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085E420(void) {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp edx, edi
        jbe fwd
        lea ecx, [edi + esi]
        cmp edx, ecx
        jae fwd
        lea edx, [esi + edx - 1]
        dec ecx
        mov eax, esi
        dec esi
        test eax, eax
        je fwd_done
    bwd_loop:
        mov al, byte ptr [ecx]
        dec edx
        dec ecx
        mov byte ptr [edx + 1], al
        mov eax, esi
        dec esi
        test eax, eax
        jne bwd_loop
    bwd_done:
        pop edi
        pop esi
        ret
    fwd:
        mov eax, esi
        dec esi
        test eax, eax
        je fwd_done
    fwd_loop:
        mov al, byte ptr [edi]
        inc edx
        inc edi
        mov byte ptr [edx - 1], al
        mov eax, esi
        dec esi
        test eax, eax
        jne fwd_loop
    fwd_done:
        pop edi
        pop esi
        ret
        mov edi, edi
    }
}

// [0x008522E0] sub_008522E0 (91 bytes)
extern "C" void ext_008179EA();
extern "C" void ext_008179F2();
extern "C" void ext_008203F7();
extern "C" void ext_0083CAAF();
extern "C" void ext_00852345();
extern "C" __declspec(naked) void __fastcall fn_008522E0(void* self) {
    __asm {
        _emit 0xbf
        _emit 0x2d
        _emit 0x66
        _emit 0x93
        _emit 0x66
        _emit 0x93
        mov edi, dword ptr [ebp - 0x19]
        mov ecx, dword ptr [ebp - 0x1a]
        mov edx, dword ptr [ebp - 0x1b]
        and edi, 0xff
        jb ext_008179EA
        _emit 0x66
        _emit 0x89
        _emit 0xf6
        mov eax, dword ptr [ebp - 0x1c]
        and ecx, 0xff
        jb ext_008179F2
        _emit 0x88
        _emit 0xff
        shl edi, 8
        _emit 0x01
        _emit 0xcf
        and edx, 0xff
        jb ext_008203F7
        shl edi, 8
        _emit 0x01
        _emit 0xd7
        clc
        and eax, 0xff
        jb ext_0083CAAF
        shl edi, 8
        _emit 0x01
        _emit 0xc7
        jmp ext_00852345
    }
}

// [0x0085F750] sub_0085F750 (96 bytes)
extern "C" void ext_0085F7B0();
extern "C" __declspec(naked) void __fastcall fn_0085F750(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ecx, dword ptr [esp + 0xc]
        mov bl, byte ptr [eax]
        cmp byte ptr [ecx], bl
        je same
        xor eax, eax
        pop ebx
        ret
    same:
        xor edx, edx
        mov dl, bl
        cmp edx, 1
        je case1
        cmp edx, 4
        je case4
        cmp edx, 8
        je case4
        xor eax, eax
        pop ebx
        ret
    case1:
        push 0xa
        inc ecx
        push ecx
        inc eax
        push eax
        call ext_0085F7B0
        add esp, 0xc
        cmp eax, 1
        sbb eax, eax
        pop ebx
        neg eax
        ret
    case4:
        push 4
        inc ecx
        push ecx
        inc eax
        push eax
        call ext_0085F7B0
        add esp, 0xc
        cmp eax, 1
        sbb eax, eax
        pop ebx
        neg eax
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// [0x00858A80] sub_00858A80 (97 bytes)
extern "C" void ext_00853840();
extern "C" __declspec(naked) unsigned int __cdecl fn_00858A80(void) {
    __asm {
        sub esp, 0x14
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        push edi
        push eax
        call ext_00853840
        add esp, 8
        xor esi, esi
        xor eax, eax
        xor ecx, ecx
    bits_loop:
        xor edx, edx
        mov dl, byte ptr [esp + eax + 0xc]
        mov dl, byte ptr [edx + edi + 0x5c]
        shr edx, 3
        and edx, 3
        shl edx, cl
        add ecx, 2
        or esi, edx
        inc eax
        cmp ecx, 0x20
        jb bits_loop
        mov dword ptr [esp + 0x24], esi
        xor eax, eax
        lea ecx, [esp + 0x27]
    xor_loop:
        mov dl, byte ptr [esp + eax + 0x1c]
        mov bl, byte ptr [ecx]
        xor bl, dl
        inc eax
        mov byte ptr [ecx], bl
        dec ecx
        cmp eax, 4
        jb xor_loop
        mov eax, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x00858AF0] sub_00858AF0 (105 bytes)
extern "C" void ext_00853840();
extern "C" __declspec(naked) void __cdecl fn_00858AF0(void) {
    __asm {
        sub esp, 0x14
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        push edi
        push eax
        call ext_00853840
        add esp, 8
        xor esi, esi
        xor eax, eax
        xor ecx, ecx
    loop1:
        xor edx, edx
        xor ebx, ebx
        mov dl, byte ptr [esp + eax + 0xc]
        mov bl, byte ptr [edx + edi + 0x5c]
        and ebx, 0x80000003
        jns skip
        dec ebx
        or ebx, -4
        inc ebx
    skip:
        shl ebx, cl
        add ecx, 2
        or esi, ebx
        inc eax
        cmp ecx, 0x20
        jl loop1
        mov dword ptr [esp + 0x24], esi
        xor eax, eax
    loop2:
        mov cl, byte ptr [esp + eax + 0x1c]
        mov bl, byte ptr [esp + eax + 0x24]
        xor bl, cl
        mov byte ptr [esp + eax + 0x24], bl
        inc eax
        cmp eax, 4
        jb loop2
        mov eax, dword ptr [esp + 0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x0085D570] sub_0085D570 (128 bytes)
extern "C" void ext_0082132A();
extern "C" void ext_0085D5F0();
extern "C" void ext_00862010();
extern "C" void ext_00865C80();
extern "C" int mem_00AB9644;
extern "C" int mem_00AB9648;
extern "C" __declspec(naked) void __cdecl fn_0085D570(void) {
    __asm {
        cmp dword ptr [mem_00AB9644], 0
        jne L_59d
        call ext_0082132A
        mov ecx, 1
        test eax, 0x80000000
        mov dword ptr [mem_00AB9644], ecx
        je L_5ba
        test eax, 0x40000000
        jne L_59d
        mov dword ptr [mem_00AB9648], ecx
    L_59d:
        xor eax, eax
        mov ecx, dword ptr [esp + 4]
        mov ax, word ptr [ecx + 6]
        test eax, eax
        je L_5d3
        cmp eax, 4
        je L_5dd
        mov eax, 3
        mov word ptr [ecx + 0x1a], ax
        ret
    L_5ba:
        call ext_0085D5F0
        test eax, eax
        je L_59d
        mov ecx, dword ptr [esp + 4]
        mov eax, 8
        mov word ptr [ecx + 0x1a], 8
        ret
    L_5d3:
        push ecx
        call ext_00865C80
        add esp, 4
        ret
    L_5dd:
        push ecx
        call ext_00862010
        add esp, 4
        ret
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0085E6A0] sub_0085E6A0 (128 bytes)
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E690();

extern "C" __declspec(naked) int __cdecl fn_0085E6A0(const char* a, const char* b) {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push ebp
        push esi
        call ext_0085E1F0
        mov edi, dword ptr [esp + 0x20]
        add esp, 4
        mov ebp, eax
        push edi
        call ext_0085E1F0
        add esp, 4
        cmp eax, ebp
        je same_len
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    same_len:
        xor ebx, ebx
        test ebp, ebp
        je equal
    loop_top:
        mov al, byte ptr [edi + ebx]
        push eax
        call ext_0085E690
        mov byte ptr [esp + 0x14], al
        add esp, 4
        mov al, byte ptr [esi + ebx]
        push eax
        call ext_0085E690
        add esp, 4
        cmp byte ptr [esp + 0x10], al
        jne differ
        inc ebx
        cmp ebp, ebx
        ja loop_top
    equal:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    differ:
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
    }
}

// [0x0085E3A0] sub_0085E3A0 (128 bytes)
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E420();
extern "C" __declspec(naked) void __cdecl fn_0085E3A0(char* s) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        je semi
    trim:
        cmp byte ptr [esi], 0x20
        jg semi
        push esi
        call ext_0085E1F0
        add esp, 4
        push eax
        lea eax, [esi + 1]
        push eax
        push esi
        call ext_0085E420
        add esp, 0xc
        push esi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        jne trim
    semi:
        push esi
        call ext_0085E1F0
        add esp, 4
        xor ecx, ecx
        test eax, eax
        jle after
    semi_loop:
        lea edx, [esi + ecx]
        cmp byte ptr [edx], 0x3b
        jne skip
        mov byte ptr [edx], 0
    skip:
        inc ecx
        cmp ecx, eax
        jl semi_loop
    after:
        push esi
        call ext_0085E1F0
        add esp, 4
        dec eax
        js done
    rtrim:
        lea ecx, [esi + eax]
        cmp byte ptr [ecx], 0x20
        jg done
        dec eax
        mov byte ptr [ecx], 0
        jns rtrim
    done:
        pop esi
        ret
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0085F1F0] sub_0085F1F0 (128 bytes)
extern "C" void ext_0085E690();
extern "C" void ext_0085F270();
extern "C" __declspec(naked) unsigned int __cdecl fn_0085F1F0(void) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        xor esi, esi
        cmp eax, 0x10
        je hex_branch
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        call ext_0085F270
        add esp, 0xc
        pop edi
        pop esi
        ret
    hex_branch:
        mov edi, dword ptr [esp + 0xc]
        cmp byte ptr [edi], 0x0
        je finish
    hex_loop:
        mov al, byte ptr [edi]
        push eax
        call ext_0085E690
        add esp, 0x4
        cmp al, 0x30
        jb finish
        cmp al, 0x46
        ja finish
        cmp al, 0x39
        jbe digit
        cmp al, 0x41
        jb finish
    digit:
        xor ecx, ecx
        mov cl, al
        sub ecx, 0x30
        cmp ecx, 0x9
        jbe have_val
        sub ecx, 0x7
    have_val:
        test esi, 0xf0000000
        jne finish
        shl esi, 0x4
        inc edi
        or esi, ecx
        cmp byte ptr [edi], 0x0
        jne hex_loop
    finish:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je done
        mov dword ptr [eax], edi
    done:
        mov eax, esi
        pop edi
        pop esi
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// [0x0085F9D0] sub_0085F9D0 (148 bytes)
extern "C" __declspec(naked) unsigned short __cdecl fn_0085F9D0(unsigned char key, unsigned char* buf, unsigned int len) {
    __asm {
        xor     ax, ax
        sub     esp, 8
        mov     al, byte ptr [esp + 0Ch]
        push    ebx
        and     ax, 0Fh
        push    esi
        mov     word ptr [esp + 0Ah], ax
        push    edi
        mov     eax, dword ptr [esp + 1Ch]
        push    ebp
        mov     ebp, dword ptr [esp + 24h]
        lea     ecx, [eax + ebp - 1]
        mov     dword ptr [esp + 14h], ecx
    outer_loop:
        xor     cl, cl
        mov     esi, dword ptr [esp + 14h]
        test    bp, bp
        lea     eax, [ebp - 1]
        je      after_inner
    inner_loop:
        mov     dl, byte ptr [esi]
        mov     edi, esi
        dec     esi
        mov     bl, cl
        mov     cl, dl
        add     dl, dl
        shr     cl, 7
        or      dl, bl
        mov     bx, ax
        mov     byte ptr [edi], dl
        dec     ax
        test    bx, bx
        jne     inner_loop
    after_inner:
        test    cl, cl
        je      no_carry
        mov     eax, dword ptr [esp + 14h]
        or      byte ptr [eax], 1
    no_carry:
        mov     ax, word ptr [esp + 12h]
        dec     word ptr [esp + 12h]
        test    ax, ax
        jne     outer_loop
        xor     si, si
        test    ebp, ebp
        je      done
    xor_loop:
        mov     dl, byte ptr [esp + 1Ch]
        mov     eax, dword ptr [esp + 20h]
        movzx   ecx, si
        inc     si
        xor     byte ptr [ecx + eax], dl
        movzx   ecx, si
        cmp     ecx, ebp
        jb      xor_loop
    done:
        xor     ax, ax
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret
    }
}

// [0x00857350] sub_00857350 (119 bytes)
extern "C" void ext_00818AE9();
extern "C" void ext_0083B5FC();
extern "C" void ext_00869380();
extern "C" void ext_008693B0();
extern "C" void ext_00869460();
extern "C" __declspec(naked) void __cdecl fn_00857350(void* self) {
    __asm {
        sub esp, 0x58
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x64]
        push esi
        mov ebx, 0fffffffch
        push edi
        lea esi, [ebp + 4]
        lea edi, [ebp + 0x13]
        sub ebx, ebp
    loop_top:
        call ext_00818AE9
        mov cl, byte ptr [esi]
        push 0
        xor cl, al
        mov byte ptr [esi], cl
        call ext_0083B5FC
        mov cl, byte ptr [edi]
        add esp, 4
        xor cl, al
        inc esi
        mov byte ptr [edi], cl
        dec edi
        lea eax, [ebx + esi]
        cmp eax, 10h
        jb loop_top
        lea ecx, [esp + 10h]
        push ecx
        call ext_00869380
        lea eax, [ebp + 4]
        push 10h
        lea edx, [esp + 18h]
        push eax
        push edx
        call ext_008693B0
        lea eax, [esp + 20h]
        lea ecx, [ebp + 18h]
        push eax
        push ecx
        call ext_00869460
        add esp, 18h
        mov dword ptr [ebp + 14h], 10h
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 58h
        ret
    }
}

// [0x0085DD70] sub_0085DD70 (160 bytes)
extern "C" void ext_0085D510(); extern "C" void ext_0085D530(); extern "C" void ext_0085DE10(); extern "C" void ext_0085DE20(); extern "C" void ext_0085DF30();
extern "C" int mem_00AB98EC; extern "C" int mem_00AB9878; extern "C" int mem_00AB98AC;
extern "C" char mem_00ABAA40[];
extern "C" __declspec(naked) int __cdecl fn_0085DD70(void* buf, unsigned int size) {
    __asm {
        mov dword ptr [mem_00AB98EC], 0
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, 0x400
        jbe ok
        mov eax, 0xfffffff4
        pop esi
        mov dword ptr [mem_00AB98EC], 0x14
        ret
    ok:
        push 0x40a
        push 0
        push offset mem_00ABAA40
        call ext_0085D510
        add esp, 0xc
        test esi, esi
        je skip
        mov eax, dword ptr [esp + 8]
        push esi
        push eax
        push offset mem_00ABAA40
        call ext_0085D530
        add esp, 0xc
    skip:
        call ext_0085DE10
        cmp dword ptr [mem_00AB9878], 0
        jne good
        mov eax, 0xffffffff
        pop esi
        mov dword ptr [mem_00AB98EC], 1
        ret
    good:
        push offset mem_00ABAA40
        call ext_0085DF30
        add esp, 4
        call ext_0085DE20
        xor eax, eax
        pop esi
        mov dword ptr [mem_00AB98AC], 1
        ret
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    }
}

// [0x0085E300] sub_0085E300 (160 bytes)
extern "C" void ext_0085D530();
extern "C" void ext_0085DE10();
extern "C" void ext_0085E3A0();
extern "C" void ext_0085E470();
extern "C" int mem_00BC6658;
extern "C" int mem_00BC671C;

extern "C" __declspec(naked) void __cdecl fn_0085E300(void* a1) {
    __asm {
        sub esp, 4
        push esi
        push edi
        mov esi, dword ptr [esp + 0x10]
        push esi
        call ext_0085E3A0
        add esp, 4
        push esi
        call dword ptr [mem_00BC6658]
        mov dword ptr [esp + 8], eax
        cmp eax, -1
        jne ok_path
        call ext_0085DE10
        push esi
        call dword ptr [mem_00BC671C]
        mov esi, eax
        test esi, esi
        je epilogue
        mov eax, dword ptr [esi + 0xc]
        cmp dword ptr [eax], 0
        je epilogue
        xor edi, edi
    loop_top:
        push 4
        mov eax, dword ptr [esi + 0xc]
        lea edx, [esp + 0xc]
        nop
        mov ecx, dword ptr [eax + edi]
        add edi, 4
        push ecx
        push edx
        call ext_0085D530
        mov ecx, dword ptr [esp + 0x14]
        add esp, 0xc
        push 0x1db
        push ecx
        call ext_0085E470
        add esp, 8
        mov ecx, dword ptr [esi + 0xc]
        cmp dword ptr [ecx + edi], 0
        jne loop_top
        pop edi
        pop esi
        add esp, 4
        ret
    ok_path:
        mov eax, dword ptr [esp + 8]
        push 0x1db
        push eax
        call ext_0085E470
        add esp, 8
    epilogue:
        pop edi
        pop esi
        add esp, 4
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085D190] sub_0085D190 (171 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085D190(void) {
    __asm {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov esi, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        cmp esi, ebx
        je ret0
        cmp dword ptr [esi], ebx
        je ret0
        mov edi, dword ptr [esp + 0x20]
    top:
        mov eax, dword ptr [esi]
        cmp dword ptr [ebp], eax
        jne next
        lea ecx, [esi + 4]
        cmp dword ptr [ecx], 0
        je leaf
        mov eax, dword ptr [ebp + 0x14]
        test eax, eax
        je ret0b
        mov edx, dword ptr [esp + 0x24]
        push edx
        push edi
        mov edx, dword ptr [esp + 0x24]
        push edx
        push ecx
        push eax
        call fn_0085D190
        add esp, 0x14
        add ebx, eax
        cmp eax, -1
        jne chk
        mov eax, 0xffffffff
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    leaf:
        inc ebx
        test edi, edi
        je chk
        mov edx, dword ptr [esp + 0x24]
        push edx
        push ebp
        call edi
        add esp, 8
        cmp eax, -1
        je retm1
        test eax, eax
        je retb
    chk:
        cmp dword ptr [esp + 0x1c], 0
        je retb2
    next:
        mov ebp, dword ptr [ebp + 0x18]
        test ebp, ebp
        jne top
    retb2:
        mov eax, ebx
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    ret0b:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    retm1:
        mov eax, 0xffffffff
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    retb:
        mov eax, ebx
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    ret0:
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00856F30] sub_00856F30 (163 bytes)
extern "C" void ext_00869380();
extern "C" void ext_008693B0();
extern "C" void ext_00869460();
extern "C" __declspec(naked) void __fastcall fn_00856F30(void* self) {
    __asm {
        sub esp, 0x68
        lea eax, [esp + 0x10]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call ext_00869380
        mov ecx, dword ptr [esp + 0x88]
        mov edx, dword ptr [esp + 0x84]
        push ecx
        lea eax, [esp + 0x28]
        push edx
        push eax
        call ext_008693B0
        lea ecx, [esp + 0x30]
        lea edx, [esp + 0x20]
        push ecx
        push edx
        call ext_00869460
        mov ebp, dword ptr [esp + 0x94]
        add esp, 0x18
        xor ecx, ecx
        lea esi, [esp + 0x1f]
        lea eax, [ebp + 0x13]
        mov edi, 0x10
    carry_loop:
        movzx dx, byte ptr [esi]
        movzx bx, byte ptr [eax]
        add edx, ecx
        lea ecx, [edx + ebx]
        xor edx, edx
        mov byte ptr [eax], cl
        dec esi
        mov dl, ch
        dec eax
        dec edi
        mov ecx, edx
        jne carry_loop
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [esp + 0x84]
        cmp eax, ecx
        jae sub_path
        mov dword ptr [ebp], 0
        jmp after_store
    sub_path:
        sub eax, ecx
        mov dword ptr [ebp], eax
    after_store:
        push 0x10
        lea eax, [esp + 0x14]
        push 0
        push eax
        call ext_008692F0
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x68
        ret
    }
}

// [0x00856FF0] sub_00856FF0 (187 bytes)
extern "C" void ext_00869310();
extern "C" void ext_00869380();
extern "C" void ext_008693B0();
extern "C" void ext_00869460();
extern "C" __declspec(naked) unsigned int __cdecl fn_00856FF0(void) {
    __asm {
        sub esp, 0x58
        push edi
        mov edi, dword ptr [esp + 0x68]
        cmp dword ptr [edi], 0x0
        je body
        mov eax, 0x408
        pop edi
        add esp, 0x58
        ret
    body:
        push ebx
        mov ebx, dword ptr [esp + 0x68]
        push ebp
        mov ebp, dword ptr [esp + 0x68]
        push esi
        mov esi, dword ptr [edi + 0x14]
        cmp esi, ebx
        jae tail
    loop_top:
        mov eax, edi
        push esi
        sub eax, esi
        add eax, 0x28
        push eax
        push ebp
        call ext_00869310
        lea ecx, [esp + 0x1c]
        sub ebx, esi
        push ecx
        mov dword ptr [esp + 0x80], ebx
        add ebp, esi
        call ext_00869380
        lea eax, [edi + 0x4]
        push 0x10
        lea edx, [esp + 0x24]
        push eax
        push edx
        call ext_008693B0
        lea eax, [esp + 0x2c]
        push eax
        lea eax, [edi + 0x18]
        push eax
        call ext_00869460
        mov ecx, 0xfffffffd
        add esp, 0x24
        mov esi, 0x10
        lea eax, [edi + 0x13]
        sub ecx, edi
    inc_loop:
        mov dl, byte ptr [eax]
        mov bl, dl
        inc bl
        test dl, dl
        mov byte ptr [eax], bl
        jne inc_done
        dec eax
        lea edx, [ecx + eax]
        test edx, edx
        ja inc_loop
    inc_done:
        mov ebx, dword ptr [esp + 0x70]
        cmp ebx, 0x10
        ja loop_top
    tail:
        mov eax, edi
        push ebx
        sub eax, esi
        add eax, 0x28
        push eax
        push ebp
        call ext_00869310
        add esp, 0xc
        sub esi, ebx
        mov dword ptr [edi + 0x14], esi
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 0x58
        ret
    }
}

// [0x00857FA0] sub_00857FA0 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_00857FA0(void) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 4], edi
        jle fn00857FA0_exit
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        xor ecx, ecx
        xor esi, esi
    fn00857FA0_loop:
        inc ecx
        and ecx, 0x800000ff
        jns fn00857FA0_s1
        dec ecx
        or ecx, 0xffffff00
        inc ecx
    fn00857FA0_s1:
        mov byte ptr [esp + 0x20], cl
        xor edx, edx
        mov ecx, dword ptr [esp + 0x20]
        and ecx, 0xff
        mov dl, byte ptr [ecx + eax]
        add edx, esi
        and edx, 0x800000ff
        jns fn00857FA0_s2
        dec edx
        or edx, 0xffffff00
        inc edx
    fn00857FA0_s2:
        mov byte ptr [esp + 0x18], dl
        mov dl, byte ptr [ecx + eax]
        mov esi, dword ptr [esp + 0x18]
        and esi, 0xff
        mov bl, byte ptr [esi + eax]
        mov byte ptr [ecx + eax], bl
        mov byte ptr [esi + eax], dl
        xor edx, edx
        xor ebx, ebx
        mov dl, byte ptr [ecx + eax]
        mov bl, byte ptr [esi + eax]
        add edx, ebx
        and edx, 0x800000ff
        jns fn00857FA0_s3
        dec edx
        or edx, 0xffffff00
        inc edx
    fn00857FA0_s3:
        mov bl, byte ptr [edi + ebp]
        and edx, 0xff
        mov dl, byte ptr [edx + eax]
        xor bl, dl
        mov edx, dword ptr [esp + 0x10]
        inc edx
        mov byte ptr [edi + ebp], bl
        movsx edi, dx
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [esp + 0x1c]
        cmp edi, edx
        jl fn00857FA0_loop
        pop esi
        pop ebp
        pop ebx
    fn00857FA0_exit:
        pop edi
        pop ecx
        ret
    }
}

// [0x00859930] sub_00859930 (192 bytes)
extern "C" __declspec(naked) int __cdecl fn_00859930(void) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr [esp + 0x10], ebx
        jne L_953
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret
    L_953:
        push esi
        call ext_0086CCC0
        push edi
        mov dword ptr [esp + 0x20], eax
        call ext_0086CCC0
        push esi
        mov dword ptr [esp + 0x28], eax
        call ext_008599F0
        push edi
        mov esi, eax
        call ext_008599F0
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x10
        cmp ecx, esi
        jbe L_982
        mov ebp, esi
    L_982:
        cmp ebp, eax
        jbe L_988
        mov ebp, eax
    L_988:
        test ebp, ebp
        jbe L_9BD
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x1c]
        sub edi, ecx
    L_996:
        movsx edx, byte ptr [edi + ecx]
        movsx ebx, byte ptr [ecx]
        movsx edx, byte ptr [edx + 0xac3940]
        movsx ebx, byte ptr [ebx + 0xac3940]
        sub ebx, edx
        jne L_9DF
        mov edx, dword ptr [esp + 0x10]
        inc edx
        inc ecx
        cmp edx, ebp
        mov dword ptr [esp + 0x10], edx
        jb L_996
    L_9BD:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x10]
        cmp edx, ecx
        jae L_9DF
        cmp esi, eax
        jae L_9D8
        or ebx, -1
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
    L_9D8:
        jbe L_9DF
        mov ebx, 1
    L_9DF:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00852910] sub_00852910 (192 bytes)
extern "C" __declspec(naked) int __cdecl fn_00852910(unsigned __int64 x) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov ecx, eax
        or ecx, edx
        jne non_zero
        mov eax, 0x40
        ret
    non_zero:
        push esi
        xor esi, esi
        test edx, edx
        ja check_16
        jb do_32
        cmp eax, -1
        ja check_16
    do_32:
        mov esi, 0x20
        push esi
        push edx
        push eax
        call ext_0085BBC0
        add esp, 0xc
    check_16:
        cmp edx, 0xffff
        ja check_8
        jb do_16
        cmp eax, -1
        ja check_8
    do_16:
        push 0x10
        push edx
        push eax
        add esi, 0x10
        call ext_0085BBC0
        add esp, 0xc
    check_8:
        cmp edx, 0xffffff
        ja check_4
        jb do_8
        cmp eax, -1
        ja check_4
    do_8:
        push 8
        push edx
        push eax
        add esi, 8
        call ext_0085BBC0
        add esp, 0xc
    check_4:
        cmp edx, 0xfffffff
        ja check_2
        jb do_4
        cmp eax, -1
        ja check_2
    do_4:
        push 4
        push edx
        push eax
        add esi, 4
        call ext_0085BBC0
        add esp, 0xc
    check_2:
        cmp edx, 0x3fffffff
        ja check_1
        jb do_2
        cmp eax, -1
        ja check_1
    do_2:
        push 2
        push edx
        push eax
        add esi, 2
        call ext_0085BBC0
        add esp, 0xc
    check_1:
        cmp edx, 0x7fffffff
        ja done
        jb do_1
        cmp eax, -1
        ja done
    do_1:
        inc esi
    done:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0085B330] sub_0085B330 (192 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085B330(void) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov esi, edi
        test byte ptr [edi + 0x14], 0x4
        je L_b342
        mov esi, dword ptr [edi]
    L_b342:
        mov eax, dword ptr [esi + 0x14]
        test al, 0x1
        je L_b350
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    L_b350:
        mov ebx, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [esp + 0x18]
        test al, 0x2
        je L_b377
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x8]
        sub eax, ecx
        mov ecx, ebp
        imul ecx, ebx
        cmp ecx, eax
        jbe L_b377
        xor edx, edx
        div ebp
        mov dword ptr [esp + 0x20], eax
        jmp L_b3aa
    L_b377:
        mov eax, ebp
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        imul eax, ebx
        sub edx, ecx
        cmp eax, edx
        jbe L_b3a6
        mov edx, dword ptr [esi + 0x10]
        add edx, eax
        mov eax, dword ptr [esi]
        add edx, ecx
        push edx
        push eax
        call ext_008596F0
        add esp, 0x8
        test eax, eax
        jne L_b3a4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_b3a4:
        mov dword ptr [esi], eax
    L_b3a6:
        mov dword ptr [esp + 0x20], ebx
    L_b3aa:
        mov ebx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esi]
        imul ebx, ebp
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        push ebx
        add edx, eax
        push ecx
        push edx
        call ext_00859780
        mov ecx, dword ptr [edi + 0x8]
        add esp, 0xc
        add ecx, ebx
        mov dword ptr [edi + 0x8], ecx
        mov eax, dword ptr [esi + 0x4]
        mov edi, ecx
        cmp edi, eax
        jbe L_b3db
        mov dword ptr [esi + 0x4], edi
    L_b3db:
        mov eax, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085E050] sub_0085E050 (144 bytes)
extern "C" int mem_00AB98F8;
extern "C" int mem_00AB98FC;
extern "C" int mem_00AB9910;
extern "C" int mem_00AB9D28;
extern "C" int mem_00AB9914;
extern "C" int mem_00AB9920;
extern "C" int mem_00AB9B24;
extern "C" int mem_00AB9B28;
extern "C" int mem_00AB990C;
extern "C" int mem_00AB9B20;
extern "C" int mem_00AB9F2C;
extern "C" int mem_00AB9F34;
extern "C" int mem_00AB9908;
extern "C" int mem_00AB9F38;
extern "C" int mem_00AB9F30;
extern "C" int mem_00AB9918;
extern "C" int mem_00AB9F28;
extern "C" int mem_00ABA454;
extern "C" __declspec(naked) void __fastcall fn_0085E050(void* self) {
    __asm {
        mov ecx, 1
        xor edx, edx
        mov dword ptr [mem_00AB98F8], ecx
        mov dword ptr [mem_00AB98FC], ecx
        mov dword ptr [mem_00AB9910], ecx
        mov byte ptr [mem_00AB9D28], dl
        mov dword ptr [mem_00AB9914], ecx
        mov byte ptr [mem_00AB9920], dl
        mov dword ptr [mem_00AB9B24], ecx
        mov byte ptr [mem_00AB9B28], dl
        mov dword ptr [mem_00AB990C], 3
        mov dword ptr [mem_00AB9B20], 3
        mov dword ptr [mem_00AB9F2C], ecx
        mov dword ptr [mem_00AB9F34], ecx
        mov dword ptr [mem_00AB9908], edx
        mov dword ptr [mem_00AB9F38], edx
        mov dword ptr [mem_00AB9F30], 3
        mov word ptr [mem_00AB9918], 0x7483
        mov word ptr [mem_00AB9F28], 0x1db
        mov dword ptr [mem_00ABA454], edx
        ret
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24
        __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    }
}

// [0x0085F130] sub_0085F130 (192 bytes)
extern "C" void ext_0085E030();
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E420();
extern "C" void ext_0085F1F0();
extern "C" int mem_00ABB25C;
extern "C" int mem_00AB98F0;
extern "C" int mem_00AB98EC;
extern "C" __declspec(naked) void __cdecl fn_0085F130(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x110
        lea ecx, [esp + 4]
        push esi
        push eax
        push ecx
        call ext_0085E030
        lea ecx, [esp + 0x10]
        add esp, 8
        push ecx
        call ext_0085E1F0
        add esp, 4
        mov esi, eax
        test esi, esi
        jne L_181
        mov ecx, dword ptr [mem_00ABB25C]
        mov eax, dword ptr [esp + 0x11c]
        pop esi
        mov dword ptr [mem_00AB98F0], ecx
        mov dword ptr [mem_00AB98EC], 0x13
        add esp, 0x110
        ret
    L_181:
        cmp byte ptr [esp + esi + 7], 0x48
        jne L_1AA
        lea eax, [esp + 8]
        push esi
        lea ecx, [esp + 0xe]
        push eax
        push ecx
        call ext_0085E420
        mov byte ptr [esp + 0x14], 0x30
        mov byte ptr [esp + 0x15], 0x78
        mov byte ptr [esp + esi + 0x15], 0
        add esp, 0xc
    L_1AA:
        lea eax, [esp + 4]
        push 0
        lea ecx, [esp + 0xc]
        push eax
        push ecx
        call ext_0085F1F0
        add esp, 0xc
        test eax, eax
        jg L_1D1
        mov eax, dword ptr [esp + 0x11c]
        pop esi
        add esp, 0x110
        ret
    L_1D1:
        cmp eax, 0xffff
        jl L_1DF
        mov eax, dword ptr [esp + 0x11c]
    L_1DF:
        pop esi
        add esp, 0x110
        ret
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x008578E0] sub_008578E0 (207 bytes)
extern "C" void ext_00857BE0();
extern "C" void ext_00869310();
extern "C" __declspec(naked) int __cdecl fn_008578E0(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x14]
        xor eax, eax
        sub esp, 0x100
        mov ax, word ptr [ecx]
        add eax, 7
        push esi
        cdq
        and edx, 7
        add eax, edx
        mov edx, dword ptr [esp + 0x114]
        mov esi, eax
        sar esi, 3
        lea eax, [edx + 0xb]
        cmp eax, esi
        jbe ok
        mov eax, 0x406
        pop esi
        add esp, 0x100
        ret
    ok:
        mov ecx, esi
        mov eax, 2
        sub ecx, edx
        mov byte ptr [esp + 4], 0
        dec ecx
        mov byte ptr [esp + 5], 1
        cmp ecx, eax
        jbe skip_fill
        push ebx
        push ebp
        lea ebp, [ecx - 2]
        push edi
        mov ecx, ebp
        or eax, -1
        mov ebx, ecx
        lea edi, [esp + 0x12]
        shr ecx, 2
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        lea eax, [ebp + 2]
        pop edi
        pop ebp
        pop ebx
    skip_fill:
        push edx
        mov edx, dword ptr [esp + 0x114]
        mov byte ptr [esp + eax + 8], 0
        lea eax, [esp + eax + 9]
        push edx
        push eax
        call ext_00869310
        mov ecx, dword ptr [esp + 0x124]
        mov eax, dword ptr [esp + 0x118]
        push ecx
        mov ecx, dword ptr [esp + 0x118]
        lea edx, [esp + 0x14]
        push esi
        push edx
        push eax
        push ecx
        call ext_00857BE0
        push 0x100
        lea edx, [esp + 0x28]
        push 0
        push edx
        mov esi, eax
        call ext_008692F0
        add esp, 0x2c
        mov eax, esi
        pop esi
        add esp, 0x100
        ret
    }
}

// [0x0085BA70] sub_0085BA70 (208 bytes)
extern "C" void ext_0085B330();

extern "C" __declspec(naked) void __cdecl fn_0085BA70(void* stream, unsigned int v) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x8
        cmp eax, 0x80
        jae L_16
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov eax, 0x1
        jmp L_call
L_16:
        cmp eax, 0x8000
        jae L_24
        mov ecx, eax
        mov byte ptr [esp + 0x1], al
        shr ecx, 0x8
        _emit 0x88
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov eax, 0x2
        jmp L_call
L_24:
        cmp eax, 0x800000
        jae L_32
        mov edx, eax
        mov ecx, eax
        shr edx, 0x10
        shr ecx, 0x8
        mov byte ptr [esp + 0x2], al
        _emit 0x88
        _emit 0x54
        _emit 0x24
        _emit 0x00
        mov byte ptr [esp + 0x1], cl
        mov eax, 0x3
        jmp L_call
L_32:
        cmp eax, 0x80000000
        jae L_5
        mov edx, eax
        mov ecx, eax
        shr edx, 0x18
        _emit 0x88
        _emit 0x54
        _emit 0x24
        _emit 0x00
        mov edx, eax
        shr ecx, 0x10
        shr edx, 0x8
        mov byte ptr [esp + 0x3], al
        mov byte ptr [esp + 0x1], cl
        mov byte ptr [esp + 0x2], dl
        mov eax, 0x4
        jmp L_call
L_5:
        mov ecx, eax
        mov edx, eax
        shr ecx, 0x18
        mov byte ptr [esp + 0x1], cl
        mov ecx, eax
        shr edx, 0x10
        shr ecx, 0x8
        mov byte ptr [esp + 0x4], al
        _emit 0xc6
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x00
        mov byte ptr [esp + 0x2], dl
        mov byte ptr [esp + 0x3], cl
        mov eax, 0x5
L_call:
        mov edx, dword ptr [esp + 0xc]
        push edx
        push eax
        lea eax, [esp + 0x8]
        push 0x1
        push eax
        call ext_0085B330
        add esp, 0x18
        ret
    }
}

// [0x0085FCE0] sub_0085FCE0 (208 bytes)
extern "C" void ext_0085D560();
extern "C" int mem_00AB9880;
extern "C" int mem_00924248;
extern "C" int mem_00BC5C20;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00924210;

extern "C" __declspec(naked) void __cdecl fn_0085FCE0(void) {
    __asm {
        sub esp, 0x120
        cmp dword ptr [mem_00AB9880], 0
        push ebx
        push esi
        push edi
        push ebp
        je fn85fce0_exit
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov edi, eax
        test edi, edi
        jne fn85fce0_have
        push 5
        call dword ptr [mem_00924248]
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov edi, eax
        test edi, edi
        je fn85fce0_exit
    fn85fce0_have:
        mov esi, 0x64
        mov ecx, dword ptr [mem_00BC5C20]
        xor ebx, ebx
        mov ebp, 1
    fn85fce0_loop:
        dec esi
        lea eax, [esp + 0x14]
        lea edx, [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x30], ebx
        push ebx
        mov dword ptr [esp + 0x38], ecx
        push ebx
        inc dword ptr [esp + 0x38]
        push edx
        mov dword ptr [esp + 0x24], ebx
        push ecx
        mov dword ptr [esp + 0x2c], ebp
        call dword ptr [mem_00BC70BC]
        mov ecx, dword ptr [mem_00BC5C20]
        test eax, eax
        je fn85fce0_free
        lea eax, [esp + 0x10]
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], 0x10
        push eax
        push edx
        push ebx
        push 0x5fa
        push edi
        push ecx
        call dword ptr [mem_00BC70F4]
        mov ecx, dword ptr [mem_00BC5C20]
        test esi, esi
        jne fn85fce0_loop
    fn85fce0_free:
        push edi
        call dword ptr [mem_00924210]
    fn85fce0_exit:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085FB40] sub_0085FB40 (203 bytes)
extern "C" {
    void ext_0085D510();
    void ext_0085D530();
    void ext_0085E210();
    void ext_0085F9D0();
    int mem_00BC6670;
    int mem_00AB9898;
    int mem_00BC70F8;
    int mem_00BC6720;
    int mem_00BC70D8;
    int mem_00924248;
}

extern "C" __declspec(naked) void __cdecl fn_0085FB40(void) {
    __asm {
        sub esp, 0x410
        lea eax, [esp + 0x10]
        push esi
        push 0x400
        push 0
        push eax
        call ext_0085D510
        lea eax, [esp + 0x20]
        add esp, 0xc
        push 0xa5
        push offset mem_00BC6670
        push eax
        call ext_0085D530
        lea eax, [esp + 0x21]
        add esp, 0xc
        mov cl, byte ptr [mem_00BC6670]
        push 0xa4
        push eax
        push ecx
        call ext_0085F9D0
        lea ecx, [esp + 0x10]
        add esp, 0xc
        inc dword ptr [mem_00AB9898]
        push 0xe
        push 0
        push ecx
        call ext_0085D510
        mov esi, dword ptr [esp + 0x424]
        lea eax, [esp + 0x12]
        mov word ptr [esp + 0x10], 6
        add esp, 0xc
        lea ecx, [esi + 1]
        push 0xa
        push ecx
        push eax
        call ext_0085D530
        add esp, 0xc
        push 0x7483
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x10], ax
        push esi
        call ext_0085E210
        lea ecx, [esp + 8]
        lea edx, [esp + 0x18]
        add esp, 4
        mov eax, dword ptr [mem_00BC6720]
        push 0xe
        push ecx
        push 0
        push 0xa5
        push edx
        push eax
        call dword ptr [mem_00BC70D8]
        push 1
        call dword ptr [mem_00924248]
        pop esi
        add esp, 0x410
        ret
    }
}

// [0x0085FA70] sub_0085FA70 (208 bytes)
extern "C" void ext_0085D560();
extern "C" int mem_00AB98A4;
extern "C" int mem_00924248;
extern "C" int mem_00BC6720;
extern "C" int mem_00BC70BC;
extern "C" int mem_00BC70F4;
extern "C" int mem_00924210;

extern "C" __declspec(naked) void __cdecl fn_0085FA70(void) {
    __asm {
        sub esp, 0x120
        cmp dword ptr [mem_00AB98A4], 0
        push ebx
        push esi
        push edi
        push ebp
        je fn85fa70_exit
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov edi, eax
        test edi, edi
        jne fn85fa70_have
        push 5
        call dword ptr [mem_00924248]
        push 0x7d0
        call ext_0085D560
        add esp, 4
        mov edi, eax
        test edi, edi
        je fn85fa70_exit
    fn85fa70_have:
        mov esi, 0x64
        mov ecx, dword ptr [mem_00BC6720]
        xor ebx, ebx
        mov ebp, 1
    fn85fa70_loop:
        dec esi
        lea eax, [esp + 0x14]
        lea edx, [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x30], ebx
        push ebx
        mov dword ptr [esp + 0x38], ecx
        push ebx
        inc dword ptr [esp + 0x38]
        push edx
        mov dword ptr [esp + 0x24], ebx
        push ecx
        mov dword ptr [esp + 0x2c], ebp
        call dword ptr [mem_00BC70BC]
        mov ecx, dword ptr [mem_00BC6720]
        test eax, eax
        je fn85fa70_free
        lea eax, [esp + 0x10]
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], 0x10
        push eax
        push edx
        push ebx
        push 0x5fa
        push edi
        push ecx
        call dword ptr [mem_00BC70F4]
        mov ecx, dword ptr [mem_00BC6720]
        test esi, esi
        jne fn85fa70_loop
    fn85fa70_free:
        push edi
        call dword ptr [mem_00924210]
    fn85fa70_exit:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x120
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085D0C0] sub_0085D0C0 (202 bytes)
extern "C" void ext_0081CEBA();
extern "C" void ext_0084D8E8();
extern "C" void ext_0085CF60();
extern "C" __declspec(naked) void* __cdecl fn_0085D0C0(void) {
    __asm {
        sub     esp, 4
        push    ebx
        push    esi
        push    edi
        xor     ebx, ebx
        mov     dword ptr [esp + 0xc], ebx
        push    0x1c
        call    ext_0081CEBA
        add     esp, 4
        mov     esi, eax
        test    esi, esi
        je      ret_null
        xor     eax, eax
        mov     edx, dword ptr [esp + 0x14]
        mov     al, byte ptr [edx]
        inc     edx
        xor     edi, edi
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 4], edi
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], 1
        mov     al, byte ptr [edx]
        test    al, 0x80
        je      short_len
        and     al, 0x7f
        xor     ebx, ebx
        mov     bl, al
        test    ebx, ebx
        jle     after_len
    len_loop:
        xor     eax, eax
        mov     ecx, dword ptr [esi + 4]
        shl     ecx, 8
        mov     al, byte ptr [edi + edx + 1]
        or      eax, ecx
        inc     edi
        mov     dword ptr [esi + 4], eax
        cmp     edi, ebx
        jl      len_loop
        jmp     after_len
    short_len:
        xor     ecx, ecx
        mov     cl, al
        mov     dword ptr [esi + 4], ecx
    after_len:
        lea     edi, [ebx + 2]
        lea     edx, [ebx + edx + 1]
        test    byte ptr [esi], 0x20
        je      not_constructed
        lea     eax, [esp + 0xc]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        push    ecx
        push    edx
        call    ext_0085CF60
        add     esp, 0xc
        mov     dword ptr [esi + 0x14], eax
        add     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      ret_node
        mov     dword ptr [eax], edi
    ret_node:
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 4
        ret
    not_constructed:
        test    esi, esi
        je      clear_out
        push    esi
        call    ext_0084D8E8
        add     esp, 4
    clear_out:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], 0
        xor     eax, eax
    ret_null:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 4
        ret
    }
}

// [0x00859E90] sub_00859E90 (208 bytes)
extern "C" void __cdecl ext_00859730(void* p);
extern "C" void ext_00859E90();
extern "C" void ext_0086CCE0();
extern "C" __declspec(naked) void __cdecl fn_00859E90(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_0086CCE0
        and eax, 0xff
        add esp, 4
        dec eax
        je case_a
        dec eax
        je case_b
        dec eax
        jne cleanup
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_00859E90
        mov eax, dword ptr [esi + 8]
        add esp, 4
        test eax, eax
        je skip_store
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0xc], ecx
    skip_store:
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je cleanup
        mov edx, dword ptr [esi + 8]
        push esi
        mov dword ptr [eax + 8], edx
        call ext_00859730
        add esp, 4
        pop esi
        ret
    case_b:
        mov eax, dword ptr [esi + 4]
        push ebp
        xor ebp, ebp
        test eax, eax
        jbe after_loop_b
        push edi
        xor edi, edi
    loop_b:
        mov eax, dword ptr [esi + 8]
        add eax, edi
        test byte ptr [eax + 0xc], 1
        jne loop_b_next
        mov ecx, dword ptr [eax + 4]
        push ecx
        call ext_00859730
        add esp, 4
    loop_b_next:
        mov eax, dword ptr [esi + 4]
        inc ebp
        add edi, 0x10
        cmp ebp, eax
        jb loop_b
        pop edi
    after_loop_b:
        mov eax, dword ptr [esi + 8]
        pop ebp
        test eax, eax
        je cleanup
        push eax
        call ext_00859730
        add esp, 4
        push esi
        call ext_00859730
        add esp, 4
        pop esi
        ret
    case_a:
        mov eax, dword ptr [esi + 0xc]
        test al, 2
        jne done
        test al, 1
        jne cleanup
        mov edx, dword ptr [esi + 4]
        push edx
        call ext_00859730
        add esp, 4
    cleanup:
        push esi
        call ext_00859730
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x0085DC90] sub_0085DC90 (224 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085DC90(void) {
    __asm {
        mov ax, word ptr [esp + 8]
        push ebx
        and ax, 0x8000
        push esi
        mov dx, word ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        cmp ax, 1
        sbb eax, eax
        add dx, dx
        inc eax
        or ax, dx
        mov word ptr [esp + 0x10], ax
        xor byte ptr [esp + 0x11], al
        mov ax, word ptr [esp + 0x10]
        and ax, 1
        mov dx, word ptr [esp + 0x10]
        cmp ax, 1
        mov eax, 0
        adc eax, -1
        and ax, 0x8000
        _emit 0x66
        _emit 0xc1
        _emit 0xea
        _emit 0x01
        or ax, dx
        mov word ptr [esp + 0x10], ax
        and ax, 1
        mov dx, word ptr [esp + 0x10]
        cmp ax, 1
        mov eax, 0
        adc eax, -1
        mov esi, 0x55
        and ax, 0x8000
        _emit 0x66
        _emit 0xc1
        _emit 0xea
        _emit 0x01
        or ax, dx
        mov word ptr [esp + 0x10], ax
        mov eax, 0x58
    loop_top:
        mov dl, byte ptr [esp + 0x10]
        mov bl, byte ptr [esp + 0x10]
        and dl, -0x80
        add bl, bl
        shr dl, 7
        add ecx, 2
        or dl, bl
        mov byte ptr [esp + 0x10], dl
        mov dl, byte ptr [esp + 0x11]
        and dl, 1
        mov bl, byte ptr [esp + 0x11]
        shl dl, 7
        _emit 0xc0
        _emit 0xeb
        _emit 0x01
        or dl, bl
        mov byte ptr [esp + 0x11], dl
        mov bl, byte ptr [esp + 0x10]
        xor byte ptr [esp + 0x11], bl
        mov dx, word ptr [esp + 0x10]
        not dx
        mov word ptr [esp + 0x10], dx
        xor word ptr [ecx - 2], dx
        add word ptr [esp + 0x10], si
        dec eax
        jne loop_top
        pop esi
        pop ebx
        ret
        _emit 0x8b
        _emit 0xff
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085BC30] sub_0085BC30 (224 bytes)
extern "C" void ext_00859DD0();
extern "C" unsigned int ext_0085BC20(void*);
extern "C" __declspec(naked) int __cdecl fn_0085BC30(void) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        push edi
        call ext_0085BC20
        mov esi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        test ebp, ebp
        jbe tail
        push edi
        call ext_00859DD0
        add esp, 4
        cmp eax, 0ff00h
        je tail
        cdq
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [esi]
        mov eax, edx
        mov dword ptr [esp + 18h], eax
        mov eax, ecx
        and eax, 80h
        xor edx, edx
        or eax, edx
        je skip_sign
        or ecx, 0ffffff00h
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], 0ffffffffh
    skip_sign:
        mov ebx, 1
        cmp ebp, ebx
        jbe tail
        jmp loop_call
    loop_top:
        mov edi, dword ptr [esp + 20h]
    loop_call:
        push edi
        call ext_00859DD0
        mov edi, eax
        add esp, 4
        cmp edi, 0ff00h
        je loop_exit
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi]
        push 8
        push ecx
        push edx
        call ext_0085BBC0
        mov dword ptr [esi], eax
        mov eax, edi
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [esi]
        cdq
        or ecx, eax
        add esp, 0ch
        mov dword ptr [esi], ecx
        mov edi, dword ptr [esi + 4]
        or edi, edx
        inc ebx
        cmp ebx, ebp
        mov dword ptr [esi + 4], edi
        jb loop_top
    loop_exit:
        mov edi, dword ptr [esp + 20h]
    tail:
        push edi
        call ext_0085BC20
        mov ecx, dword ptr [esp + 14h]
        add esp, 4
        sub eax, ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret
    }
}

// [0x0085FC10] sub_0085FC10 (196 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D820();
extern "C" void ext_0085E210();
extern "C" int mem_00BC6598;
extern "C" int mem_00AB9898;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6720;
extern "C" int mem_00BC70D8;
extern "C" int mem_00924248;

extern "C" __declspec(naked) void __cdecl fn_0085FC10(void) {
    __asm {
        sub esp, 0x410
        lea eax, [esp + 0x10]
        push esi
        push 0x400
        push 0
        push eax
        call ext_0085D510
        lea eax, [esp + 0x20]
        add esp, 0xc
        push 0xad
        push offset mem_00BC6598
        push eax
        call ext_0085D530
        lea ecx, [esp + 0x10]
        add esp, 0xc
        inc dword ptr [mem_00AB9898]
        push 0xe
        push 0
        push ecx
        call ext_0085D510
        mov esi, dword ptr [esp + 0x424]
        lea eax, [esp + 0x12]
        mov word ptr [esp + 0x10], 6
        add esp, 0xc
        lea ecx, [esi + 1]
        push 0xa
        push ecx
        push eax
        call ext_0085D530
        add esp, 0xc
        push 0x7483
        call dword ptr [mem_00BC70F8]
        mov word ptr [esp + 0x10], ax
        push esi
        call ext_0085E210
        lea ecx, [esp + 0x18]
        add esp, 4
        push 0xad
        push ecx
        call ext_0085D820
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x1c]
        add esp, 8
        mov eax, dword ptr [mem_00BC6720]
        push 0xe
        push ecx
        push 0
        push 0xad
        push edx
        push eax
        call dword ptr [mem_00BC70D8]
        push 1
        call dword ptr [mem_00924248]
        pop esi
        add esp, 0x410
        ret
    }
}

// [0x0085E220] sub_0085E220 (224 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E210();
extern "C" void ext_0085E300();
extern "C" int mem_00ABA454;
extern "C" __declspec(naked) int __cdecl fn_0085E220(void* s) {
    __asm {
        sub esp, 80h
        push ebx
        push esi
        push edi
        push 514h
        push 0
        push 0ABA458h
        call ext_0085D510
        mov edi, dword ptr [esp + 9Ch]
        add esp, 0Ch
        mov dword ptr [mem_00ABA454], 0
        push edi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        jne fn_0085E220_nonzero
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 80h
        ret
    fn_0085E220_nonzero:
        xor esi, esi
        xor ebx, ebx
        mov byte ptr [esp + 0Ch], 0
        push edi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        jle fn_0085E220_after_loop
    fn_0085E220_loop:
        mov al, byte ptr [edi + ebx]
        cmp al, 2Ch
        jne fn_0085E220_store
        lea eax, [esp + 0Ch]
        xor esi, esi
        push eax
        call ext_0085E300
        add esp, 4
        jmp fn_0085E220_next
    fn_0085E220_store:
        cmp esi, 7Fh
        jge fn_0085E220_next
        mov byte ptr [esp + esi + 0Ch], al
        inc esi
        mov byte ptr [esp + esi + 0Ch], 0
    fn_0085E220_next:
        inc ebx
        push edi
        call ext_0085E1F0
        add esp, 4
        cmp eax, ebx
        jg fn_0085E220_loop
    fn_0085E220_after_loop:
        test esi, esi
        je fn_0085E220_flush_done
        lea eax, [esp + 0Ch]
        push eax
        call ext_0085E300
        add esp, 4
    fn_0085E220_flush_done:
        xor esi, esi
        cmp dword ptr [mem_00ABA454], esi
        jle fn_0085E220_ret1
        mov edi, 0ABA458h
    fn_0085E220_reg:
        push edi
        inc esi
        add edi, 0Dh
        call ext_0085E210
        add esp, 4
        cmp esi, dword ptr [mem_00ABA454]
        jl fn_0085E220_reg
    fn_0085E220_ret1:
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 80h
        ret
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x008579B0] sub_008579B0 (237 bytes)
extern "C" __declspec(naked) void __cdecl fn_008579B0(void) {
    __asm {
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, eax
        sub     esp, 0x104
        mov     ax, word ptr [ecx]
        add     eax, 0x7
        push    esi
        cdq
        and     edx, 0x7
        add     eax, edx
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x118]
        sar     esi, 0x3
        cmp     eax, esi
        jbe     L_8579e6
        mov     eax, 0x406
        pop     esi
        add     esp, 0x104
        ret
    L_8579e6:
        push    ecx
        push    eax
        mov     eax, dword ptr [esp + 0x11c]
        lea     ecx, [esp + 0xc]
        push    eax
        lea     edx, [esp + 0x14]
        push    ecx
        push    edx
        call    ext_00857BE0
        add     esp, 0x14
        test    eax, eax
        jne     L_857a95
        cmp     dword ptr [esp + 0x4], esi
        je      L_857a1d
        mov     eax, 0x406
        pop     esi
        add     esp, 0x104
        ret
    L_857a1d:
        mov     al, byte ptr [esp + 0x8]
        test    al, al
        jne     L_857a90
        mov     cl, byte ptr [esp + 0x9]
        mov     eax, 0x2
        cmp     cl, al
        jne     L_857a90
        lea     ecx, [esi - 0x1]
        cmp     ecx, eax
        jbe     L_857a46
    L_857a39:
        mov     dl, byte ptr [esp + eax + 0x8]
        test    dl, dl
        je      L_857a46
        inc     eax
        cmp     eax, ecx
        jb      L_857a39
    L_857a46:
        inc     eax
        cmp     eax, esi
        jae     L_857a90
        mov     edx, dword ptr [esp + 0x110]
        mov     ecx, esi
        sub     ecx, eax
        mov     dword ptr [edx], ecx
        lea     edx, [ecx + 0xb]
        cmp     edx, esi
        ja      L_857a90
        push    ecx
        mov     ecx, dword ptr [esp + 0x110]
        lea     eax, [esp + eax + 0xc]
        push    eax
        push    ecx
        call    ext_00869310
        push    0x100
        lea     edx, [esp + 0x18]
        push    0x0
        push    edx
        call    ext_008692F0
        add     esp, 0x18
        xor     eax, eax
        pop     esi
        add     esp, 0x104
        ret
    L_857a90:
        mov     eax, 0x401
    L_857a95:
        pop     esi
        add     esp, 0x104
        ret
    }
}

// [0x0085AD60] sub_0085AD60 (208 bytes)
extern "C" void ext_00859300();
extern "C" void ext_00859330();
extern "C" void ext_00859E00();
extern "C" void ext_0085A270();
extern "C" unsigned int ext_0085BC20(void*);
extern "C" void ext_0086D0A0();

// [0x0085AD60] sub_0085AD60 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_0085AD60(void) {
    __asm {
        sub esp, 8
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        push esi
        push 1
        push 4
        push eax
        call ext_0086D0A0
        add esp, 0x10
        cmp eax, 1
        je short loc_85ad8d
        pop edi
        pop esi
        mov eax, 0x20
        pop ebx
        add esp, 8
        ret

    loc_85ad8d:
        cmp dword ptr [esp + 0x18], 1
        jne short loc_85adc5
        mov ecx, dword ptr [esp + 0xd]
        mov edx, dword ptr [esp + 0xe]
        xor ebx, ebx
        mov eax, dword ptr [esp + 0xf]
        mov bh, byte ptr [esp + 0xc]
        and ecx, 0xff
        or ebx, ecx
        and edx, 0xff
        shl ebx, 8
        or ebx, edx
        and eax, 0xff
        shl ebx, 8
        or ebx, eax
        jmp short loc_85adc9

    loc_85adc5:
        mov ebx, dword ptr [esp + 0xc]

    loc_85adc9:
        push esi
        call ext_00859330
        mov edi, eax
        add esp, 4
        test edi, edi
        jne short loc_85ade4
        pop edi
        pop esi
        mov eax, 0x20
        pop ebx
        add esp, 8
        ret

    loc_85ade4:
        push 0
        push ebx
        push esi
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x2c]
        add esp, 4
        add eax, edi
        push eax
        push ecx
        call ext_0085A270
        add esp, 0x10
        cmp eax, -1
        jne short loc_85ae11
        pop edi
        pop esi
        mov eax, 0xc
        pop ebx
        add esp, 8
        ret

    loc_85ae11:
        push edi
        push esi
        call ext_00859300
        push 0
        push ebx
        push esi
        call ext_00859E00
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
        nop
        nop
        nop
    }
}

// [0x0085FDB0] sub_0085FDB0 (224 bytes)
extern "C" int mem_00BC6670;
extern "C" int mem_00AB9888;
extern "C" int mem_00BC6400;
extern "C" int mem_00AB9F28;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6402;
extern "C" int mem_00BC6404;
extern "C" int mem_00BC5C20;
extern "C" int mem_00BC70D8;
extern "C" int mem_00924248;
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085F9D0();

extern "C" __declspec(naked) void __cdecl fn_0085FDB0(void) {
    __asm {
        sub esp, 0x400
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push 0x400
        push 0
        push eax
        call ext_0085D510
        lea eax, [esp + 0xc]
        add esp, 0xc
        push 0xa5
        push offset mem_00BC6670
        push eax
        call ext_0085D530
        lea eax, [esp + 0xd]
        add esp, 0xc
        mov cl, byte ptr [mem_00BC6670]
        push 0xa4
        push eax
        push ecx
        call ext_0085F9D0
        add esp, 0xc
        inc dword ptr [mem_00AB9888]
        push 0x10
        push 0
        push offset mem_00BC6400
        call ext_0085D510
        mov eax, dword ptr [esp + 0x410]
        add esp, 0xc
        mov word ptr [mem_00BC6400], 2
        push 4
        inc eax
        push eax
        push offset mem_00BC6404
        call ext_0085D530
        mov ax, word ptr [mem_00AB9F28]
        add esp, 0xc
        test ax, ax
        jne skip
        mov ax, 0x1db
    skip:
        mov word ptr [mem_00AB9F28], ax
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC6402], ax
        push 0x10
        lea eax, [esp + 4]
        push offset mem_00BC6400
        push 0
        mov ecx, dword ptr [mem_00BC5C20]
        push 0xa5
        push eax
        push ecx
        call dword ptr [mem_00BC70D8]
        push 1
        call dword ptr [mem_00924248]
        add esp, 0x400
        ret
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x00859360] sub_00859360 (240 bytes)
extern "C" __declspec(naked) void __fastcall fn_00859360(void* self) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x1a]
        mov ecx, dword ptr [esp + 0x10]
        and eax, 0xffff
        and ecx, 0xffff
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x4], eax
        imul eax, ecx
        and ebx, 0xffff
        mov edx, ecx
        imul edx, ebx
        push ebp
        push esi
        mov esi, eax
        push edi
        shl esi, 0x10
        add esi, edx
        mov dword ptr [esp + 0x18], 0x1
        cmp esi, edx
        mov edi, esi
        jb short L_lt
        mov dword ptr [esp + 0x18], 0x0
    L_lt:
        mov edx, dword ptr [esp + 0x2e]
        mov ebp, dword ptr [esp + 0x2c]
        and edx, 0xffff
        and ebp, 0xffff
        shl edx, 0x10
        add edx, ebp
        imul edx, ecx
        mov ecx, dword ptr [esp + 0x18]
        shr eax, 0x10
        add eax, ecx
        add eax, edx
        mov edx, dword ptr [esp + 0x22]
        and edx, 0xffff
        mov dword ptr [esp + 0x18], eax
        mov ecx, edx
        imul ecx, ebx
        mov eax, ecx
        shl eax, 0x10
        add esi, eax
        cmp esi, edi
        mov dword ptr [esp + 0x14], esi
        jae short L_ae
        inc dword ptr [esp + 0x18]
    L_ae:
        mov esi, dword ptr [esp + 0x26]
        mov eax, edx
        and esi, 0xffff
        mov edi, dword ptr [esp + 0x24]
        imul esi, ebx
        imul eax, ebp
        and edi, 0xffff
        add esi, eax
        mov eax, dword ptr [esp + 0x10]
        mov ebp, edi
        imul ebp, eax
        imul edx, eax
        imul edi, ebx
        mov eax, dword ptr [esp + 0x18]
        add esi, ebp
        shl esi, 0x10
        add esi, edx
        shr ecx, 0x10
        add esi, edi
        add ecx, eax
        mov eax, dword ptr [esp + 0x14]
        add ecx, esi
        pop edi
        pop esi
        pop ebp
        mov edx, ecx
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x0085FE90] sub_0085FE90 (240 bytes)
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085D820();
extern "C" void ext_0085D8D0();
extern "C" int mem_00AB9888;
extern "C" int mem_00BC6400;
extern "C" int mem_00AB9F28;
extern "C" int mem_00BC70F8;
extern "C" int mem_00BC6402;
extern "C" int mem_00BC5C20;
extern "C" int mem_00BC70D8;
extern "C" int mem_00924248;

extern "C" __declspec(naked) void __cdecl fn_0085FE90(int a, void* p) {
    __asm {
        sub esp, 0x400
        push esi
        push edi
        xor esi, esi
        mov edi, dword ptr [esp + 0x410]
        mov si, word ptr [edi + 6]
        push 0x10
        add esi, 8
        push 0
        push 0xbc6400
        inc dword ptr [mem_00AB9888]
        call ext_0085D510
        mov eax, dword ptr [esp + 0x418]
        add esp, 0xc
        _emit 0x66
        _emit 0xc7
        _emit 0x05
        _emit 0x00
        _emit 0x64
        _emit 0xbc
        _emit 0x00
        _emit 0x02
        _emit 0x00
        push 4
        inc eax
        push eax
        push 0xbc6404
        call ext_0085D530
        add esp, 0xc
        cmp word ptr [mem_00AB9F28], 0
        jne have_val
        mov word ptr [mem_00AB9F28], 0x1db
    have_val:
        mov ax, word ptr [mem_00AB9F28]
        push eax
        call dword ptr [mem_00BC70F8]
        mov word ptr [mem_00BC6402], ax
        push esi
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_0085D530
        add esp, 0xc
        cmp word ptr [esp + 0xc], 0x135
        jne after_fill
        xor eax, eax
        lea ecx, [esp + 0x10]
        mov ax, word ptr [esp + 0xa]
        add eax, 0x22030000
        push eax
        push 0x36
        push ecx
        call ext_0085D8D0
        add esp, 0xc
    after_fill:
        lea eax, [esp + 8]
        push esi
        push eax
        call ext_0085D820
        lea eax, [esp + 0x10]
        add esp, 8
        mov ecx, dword ptr [mem_00BC5C20]
        push 0x10
        push 0xbc6400
        push 0
        push esi
        push eax
        push ecx
        call dword ptr [mem_00BC70D8]
        push 1
        call dword ptr [mem_00924248]
        pop edi
        pop esi
        add esp, 0x400
        ret
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    }
}

// [0x0085DF30] sub_0085DF30 (244 bytes)
extern "C" void ext_0085DE20();
extern "C" void ext_0085E030();
extern "C" void ext_0085E050();
extern "C" void ext_0085E0E0();
extern "C" void ext_0085E220();
extern "C" void ext_0085E510();
extern "C" void ext_0085E770();
extern "C" int mem_009242D0;
extern "C" int mem_00AB98EC;
extern "C" int mem_00AB9920;
extern "C" int mem_00AB9B20;
extern "C" int mem_00AB9B24;
extern "C" int mem_00AB9B28;
extern "C" int mem_00AB9D28;
extern "C" int mem_00AB9F30;
extern "C" int mem_00AB9F34;

extern "C" __declspec(naked) void __fastcall fn_0085DF30(void* self) {
    __asm {
        sub esp, 0x404
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        lea ecx, [esp + 0x8]
        push eax
        mov edx, dword ptr [esp + 0x410]
        push ecx
        push 0x200
        mov esi, dword ptr [mem_009242D0]
        push 0
        push edx
        push 0
        call esi
        test eax, eax
        jne L_found
        mov eax, 1
        pop esi
        mov dword ptr [mem_00AB98EC], 0x14
        add esp, 0x404
        ret
    L_found:
        call ext_0085E050
        xor eax, eax
        lea ecx, [esp + 0x8]
        push ecx
        mov dword ptr [mem_00AB9B20], eax
        mov dword ptr [mem_00AB9B24], eax
        mov dword ptr [mem_00AB9F30], eax
        mov dword ptr [mem_00AB9F34], eax
        call ext_0085E770
        add esp, 0x4
        call ext_0085DE20
        cmp dword ptr [mem_00AB98EC], 0x1
        jle L_cont
        mov eax, 1
        pop esi
        add esp, 0x404
        ret
    L_cont:
        lea eax, [esp + 0x4]
        lea ecx, [esp + 0x208]
        push eax
        push ecx
        push 0x200
        push 0
        push offset mem_00AB9920
        push 0
        call esi
        test eax, eax
        je L_skip
        lea eax, [esp + 0x208]
        push eax
        push offset mem_00AB9920
        call ext_0085E030
        add esp, 0x8
    L_skip:
        push offset mem_00AB9920
        call ext_0085E0E0
        add esp, 0x4
        call ext_0085DE20
        push offset mem_00AB9B28
        call ext_0085E220
        add esp, 0x4
        push offset mem_00AB9D28
        call ext_0085E510
        add esp, 0x4
        xor eax, eax
        pop esi
        add esp, 0x404
        ret
    }
}

// [0x0085D8D0] sub_0085D8D0 (256 bytes)
extern "C" void ext_0085D860();
extern "C" void ext_0085D890();
extern "C" __declspec(naked) void __cdecl fn_0085D8D0(void) {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov si, word ptr [esp + 0x14]
        push edi
        test si, si
        mov ebx, dword ptr [esp + 0x14]
        je done
    outer:
        mov di, 0x10
    inner:
        mov eax, dword ptr [ebx + 4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esp + 0x1c]
        and eax, 0xf
        push eax
        push ecx
        call ext_0085D860
        mov ecx, dword ptr [esp + 0x24]
        lea eax, [esp + 0x24]
        xor dword ptr [esp + 0x14], ecx
        add esp, 8
        mov edx, dword ptr [ebx]
        push 2
        xor dword ptr [esp + 0x10], edx
        push eax
        call ext_0085D890
        add esp, 8
        mov ecx, dword ptr [ebx + 4]
        dec di
        mov dword ptr [ebx], ecx
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ebx + 4], edx
        jne inner
        add ebx, 8
        inc dword ptr [esp + 0x1c]
        dec si
        jne outer
    done:
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 4
        push ebx
        push esi
        mov si, word ptr [esp + 0x14]
        push edi
        test si, si
        mov edi, dword ptr [esp + 0x14]
        je done2
    outer2:
        mov bx, 0x10
    inner2:
        lea eax, [esp + 0x1c]
        push 2
        push eax
        call ext_0085D860
        lea ecx, [esp + 0x14]
        add esp, 8
        mov eax, dword ptr [edi]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esp + 0x1c]
        and eax, 0xf
        push eax
        push ecx
        call ext_0085D860
        mov ecx, dword ptr [esp + 0x24]
        xor dword ptr [esp + 0x14], ecx
        add esp, 8
        mov edx, dword ptr [edi + 0x4]
        xor dword ptr [esp + 0xc], edx
        dec bx
        mov eax, dword ptr [edi]
        mov dword ptr [edi + 0x4], eax
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], ecx
        jne inner2
        add edi, 8
        inc dword ptr [esp + 0x1c]
        dec si
        jne outer2
    done2:
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x008529D0] sub_008529D0 (256 bytes)
extern "C" void ext_008686E0();
extern "C" void ext_008688E0();

extern "C" __declspec(naked) int __cdecl fn_008529D0(void* p, unsigned char flag, int bits, const void* src) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        test ebp, ebp
        jne L1
        pop ebp
        mov eax, 0xfffffffd
        pop ebx
        add esp, 0x20
        ret
    L1:
        mov al, byte ptr [esp + 0x30]
        test al, al
        je L2
        cmp al, 1
        je L2
        pop ebp
        or eax, -1
        pop ebx
        add esp, 0x20
        ret
    L2:
        mov ebx, dword ptr [esp + 0x34]
        mov byte ptr [ebp], al
        cmp ebx, 0x80
        je L3
        cmp ebx, 0xc0
        je L3
        cmp ebx, 0x100
        je L3
        pop ebp
        mov eax, 0xfffffffe
        pop ebx
        add esp, 0x20
        ret
    L3:
        push esi
        mov esi, dword ptr [esp + 0x3c]
        test esi, esi
        push edi
        mov dword ptr [ebp + 4], ebx
        je L4
        mov eax, ebx
        lea edi, [ebp + 8]
        cdq
        and edx, 7
        add eax, edx
        mov ecx, eax
        sar ecx, 3
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
    L4:
        mov eax, ebx
        xor ecx, ecx
        cdq
        and edx, 0x1f
        add eax, edx
        sar eax, 5
        lea esi, [eax + 6]
        mov eax, dword ptr [ebp + 4]
        cdq
        and edx, 7
        mov dword ptr [ebp + 0x4c], esi
        add eax, edx
        sar eax, 3
        test eax, eax
        jle L5
    L6:
        mov bl, byte ptr [ecx + ebp + 8]
        mov edi, ecx
        mov edx, ecx
        and edi, 3
        sar edx, 2
        lea edi, [esp + edi + 0x10]
        inc ecx
        cmp ecx, eax
        mov byte ptr [edi + 4*edx], bl
        jl L6
    L5:
        lea edi, [ebp + 0x54]
        push esi
        lea eax, [esp + 0x14]
        push edi
        push eax
        call ext_008686E0
        mov al, byte ptr [esp + 0x44]
        add esp, 0xc
        cmp al, 1
        jne L7
        mov ecx, dword ptr [ebp + 0x4c]
        push ecx
        push edi
        call ext_008688E0
        add esp, 8
    L7:
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x20
        ret
    }
}

// [0x0085DE20] sub_0085DE20 (272 bytes)
extern "C" int mem_00AB990C;
extern "C" int mem_00AB9910;
extern "C" int mem_00AB9B20;
extern "C" int mem_00AB9B24;
extern "C" int mem_00AB9F30;
extern "C" int mem_00AB9F34;

extern "C" __declspec(naked) void __fastcall fn_0085DE20(void* self) {
    __asm {
        mov edx, dword ptr [mem_00AB990C]
        cmp edx, 1
        jge L1
        mov edx, 2
    L1:
        mov dword ptr [mem_00AB990C], edx
        cmp edx, 60
        jle L2
        mov edx, 60
    L2:
        mov ecx, dword ptr [mem_00AB9910]
        cmp ecx, 1
        jge L3
        mov ecx, 1
    L3:
        mov dword ptr [mem_00AB9910], ecx
        cmp ecx, 30
        jle L4
        mov ecx, 30
    L4:
        mov eax, dword ptr [mem_00AB9B20]
        test eax, eax
        jne L5
        mov eax, edx
    L5:
        mov dword ptr [mem_00AB9B20], eax
        cmp eax, 1
        jge L6
        mov eax, 1
    L6:
        mov dword ptr [mem_00AB9B20], eax
        cmp eax, 60
        jle L7
        mov dword ptr [mem_00AB9B20], 60
    L7:
        mov eax, dword ptr [mem_00AB9B24]
        test eax, eax
        jne L8
        mov eax, ecx
    L8:
        mov dword ptr [mem_00AB9B24], eax
        cmp eax, 1
        jge L9
        mov eax, 1
    L9:
        mov dword ptr [mem_00AB9B24], eax
        cmp eax, 30
        jle L10
        mov dword ptr [mem_00AB9B24], 30
    L10:
        mov eax, dword ptr [mem_00AB9F30]
        mov dword ptr [mem_00AB990C], edx
        test eax, eax
        jne L11
        mov eax, edx
    L11:
        mov dword ptr [mem_00AB9F30], eax
        cmp eax, 1
        jge L12
        mov eax, 1
    L12:
        mov dword ptr [mem_00AB9F30], eax
        cmp eax, 60
        jle L13
        mov dword ptr [mem_00AB9F30], 60
    L13:
        mov eax, dword ptr [mem_00AB9F34]
        mov dword ptr [mem_00AB9910], ecx
        test eax, eax
        jne L14
        mov eax, ecx
    L14:
        mov dword ptr [mem_00AB9F34], eax
        cmp eax, 1
        jge L15
        mov eax, 1
    L15:
        mov dword ptr [mem_00AB9F34], eax
        cmp eax, 30
        jle L16
        mov dword ptr [mem_00AB9F34], 30
    L16:
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x0085E0E0] sub_0085E0E0 (272 bytes)
extern "C" int mem_00AB9F38;
extern "C" void ext_0081743A();
extern "C" void ext_0081D9A4();
extern "C" void ext_00843D46();
extern "C" void ext_0085D510();
extern "C" void ext_0085D530();
extern "C" void ext_0085E1F0();
extern "C" void ext_0085E210();

extern "C" __declspec(naked) int __cdecl fn_0085E0E0(void* src) {
    __asm {
        sub esp, 0x84
        push ebx
        push esi
        push edi
        push 0x514
        push 0
        push 0xab9f40
        call ext_0085D510
        mov esi, dword ptr [esp + 0xa0]
        add esp, 0xc
        mov dword ptr [mem_00AB9F38], 0
        push esi
        call ext_0085E1F0
        add esp, 4
        test eax, eax
        jne L_have_src
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x84
        ret
    L_have_src:
        lea eax, [esp + 0xc]
        push eax
        push esi
        call ext_0081743A
        add esp, 8
        test eax, eax
        jne L_have_out
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x84
        ret
    L_have_out:
        cmp dword ptr [mem_00AB9F38], 0x63
        jge L_after_loop
        mov ebx, 1
    L_loop:
        lea eax, [esp + 0x10]
        push 0xc
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        call ext_0081D9A4
        add esp, 0xc
        mov ecx, dword ptr [mem_00AB9F38]
        cmp eax, 0xc
        jne L_after_loop
        lea eax, [esp + 0x10]
        push 0xc
        push eax
        lea edx, [ecx + 2*ecx]
        lea eax, [ecx + 4*edx]
        add eax, 0xab9f41
        push eax
        call ext_0085D530
        add esp, 0xc
        mov eax, dword ptr [mem_00AB9F38]
        inc eax
        lea ecx, [eax + 2*eax - 3]
        mov dword ptr [mem_00AB9F38], eax
        cmp eax, 0x63
        mov byte ptr [eax + 4*ecx + 0xab9f3f], bl
        jl L_loop
    L_after_loop:
        mov eax, dword ptr [esp + 0xc]
        xor edi, edi
        push eax
        call ext_00843D46
        add esp, 4
        cmp dword ptr [mem_00AB9F38], edi
        jle L_done
        mov esi, 0xab9f40
    L_kloop:
        push esi
        inc edi
        add esi, 0xd
        call ext_0085E210
        add esp, 4
        cmp dword ptr [mem_00AB9F38], edi
        jg L_kloop
    L_done:
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 0x84
        ret
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// [0x00859BD0] sub_00859BD0 (288 bytes)
extern "C" unsigned int ext_0085BC20(void*);
extern "C" void ext_00859DD0();
extern "C" void ext_00859E00();
extern "C" void ext_0085C220();
extern "C" void ext_0086CD20();
extern "C" void ext_00859AF0();
extern "C" void ext_00859BD0();

extern "C" __declspec(naked) void __cdecl fn_00859BD0(void) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        call ext_0085BC20
        mov edi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x10], eax
        add esp, 4
        cmp dword ptr [edi], 0
        jne L_cd0
        push ebp
        push esi
        call ext_0085BC20
        push esi
        mov ebx, eax
        call ext_00859DD0
        push esi
        mov ebp, eax
        call ext_00859DD0
        push 2
        push ebx
        push esi
        mov dword ptr [esp + 0x30], eax
        call ext_00859E00
        add esp, 0x18
        test ebp, ebp
        pop ebp
        jne L_c2a
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_cd0
    L_c2a:
        call ext_0085C220
        test eax, eax
        mov dword ptr [edi], eax
        je L_cd0
        push eax
        push esi
        call ext_0086CD20
        add esp, 8
        test eax, eax
        jne L_c6c
        mov eax, dword ptr [edi]
        push eax
        call ext_00859AF0
        add esp, 4
        mov dword ptr [edi], 0
        push esi
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x10]
        add esp, 4
        sub eax, ecx
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    L_c6c:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        shr edx, 0x18
        test dl, 0x20
        je L_c9f
        push esi
        mov ebx, ecx
        call ext_0085BC20
        mov edx, dword ptr [ebx + 0xc]
        add ebx, 0x20
        add eax, edx
        push eax
        push ebx
        push esi
        call ext_00859BD0
        mov eax, dword ptr [edi]
        add esp, 0x10
        mov ecx, dword ptr [eax + 0x20]
        test ecx, ecx
        je L_c9f
        mov dword ptr [ecx + 0x28], eax
    L_c9f:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_cb4
        push esi
        call ext_0085BC20
        add esp, 4
        cmp eax, ebx
        jae L_cd0
    L_cb4:
        mov eax, dword ptr [edi]
        push ebx
        add eax, 0x1c
        push eax
        push esi
        call ext_00859BD0
        mov edi, dword ptr [edi]
        add esp, 0xc
        mov eax, dword ptr [edi + 0x1c]
        test eax, eax
        je L_cd0
        mov dword ptr [eax + 0x24], edi
    L_cd0:
        push esi
        call ext_0085BC20
        mov ecx, dword ptr [esp + 0x10]
        add esp, 4
        sub eax, ecx
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x008595B0] sub_008595B0 (304 bytes)
extern "C" int mem_00AB8D74;
extern "C" __declspec(naked) int __cdecl fn_008595B0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push ebp
        push esi
        test al, 3
        push edi
        je aligned
    bad:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x403
        pop ebx
        ret
    aligned:
        cmp eax, 1
        jae nonzero
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], 0
        xor eax, eax
        pop ebx
        ret
    nonzero:
        mov esi, dword ptr [esp + 0x1c]
        xor ebp, ebp
        test eax, eax
        jbe finish
        mov edi, dword ptr [esp + 0x14]
    loop_top:
        mov al, byte ptr [esi]
        test al, 0x80
        jne bad
        and eax, 0xff
        xor edx, edx
        mov dl, byte ptr [eax + mem_00AB8D74]
        test dl, 0x80
        jne bad
        mov al, byte ptr [esi + 1]
        inc esi
        test al, 0x80
        jne bad
        and eax, 0xff
        xor ebx, ebx
        mov bl, byte ptr [eax + mem_00AB8D74]
        test bl, 0x80
        mov dword ptr [esp + 0x1c], ebx
        jne bad
        mov cl, byte ptr [esi + 1]
        inc esi
        cmp cl, 0x3d
        jne not_pad2
        xor ecx, ecx
        xor eax, eax
        inc ebp
        inc esi
        cmp byte ptr [esi], 0x3d
        jne bad
        jmp store
    not_pad2:
        test cl, 0x80
        jne bad
        and ecx, 0xff
        xor eax, eax
        mov al, byte ptr [ecx + mem_00AB8D74]
        test al, 0x80
        jne bad
        mov bl, byte ptr [esi + 1]
        inc esi
        cmp bl, 0x3d
        jne not_pad3
        xor ecx, ecx
        add ebp, 2
        jmp store_mid
    not_pad3:
        test bl, 0x80
        jne bad
        and ebx, 0xff
        xor ecx, ecx
        mov cl, byte ptr [ebx + mem_00AB8D74]
        test cl, 0x80
        jne bad
        add ebp, 3
    store_mid:
        mov ebx, dword ptr [esp + 0x1c]
    store:
        shr ebx, 4
        shl dl, 2
        or bl, dl
        mov dl, byte ptr [esp + 0x1c]
        mov byte ptr [edi], bl
        mov ebx, eax
        inc esi
        inc edi
        shr ebx, 2
        shl dl, 4
        or bl, dl
        mov byte ptr [edi], bl
        inc edi
        shl al, 6
        or al, cl
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 0x20]
        inc edi
        sub eax, 4
        mov dword ptr [esp + 0x20], eax
        jne loop_top
    finish:
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr [ecx], ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x00857AA0] sub_00857AA0 (306 bytes)
extern "C" void ext_00869E50();
extern "C" void ext_00869EC0();
extern "C" void ext_0086A8A0();
extern "C" void ext_0086AEB0();
extern "C" void ext_0086AF50();

extern "C" __declspec(naked) void __cdecl fn_00857AA0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x410
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push eax
        push ecx
        push 0x41
        push edx
        call ext_00869E50
        mov edi, dword ptr [esp + 0x440]
        push 0x100
        lea ecx, [esp + 0x124]
        lea eax, [edi + 2]
        push eax
        push 0x41
        push ecx
        call ext_00869E50
        lea edx, [edi + 0x102]
        push 0x100
        push edx
        lea eax, [esp + 0x23c]
        push 0x41
        push eax
        call ext_00869E50
        lea ecx, [esp + 0x140]
        push 0x41
        push ecx
        call ext_0086AF50
        lea edx, [esp + 0x24c]
        push 0x41
        push edx
        mov esi, eax
        call ext_0086AF50
        add esp, 0x40
        mov ebx, eax
        lea eax, [esp + 0x110]
        lea ecx, [esp + 0xc]
        push esi
        push eax
        push ecx
        call ext_0086AEB0
        add esp, 0xc
        test eax, eax
        jl fail_path
        pop edi
        pop esi
        mov eax, 0x401
        pop ebx
        add esp, 0x410
        ret
    fail_path:
        xor eax, eax
        push esi
        mov ax, word ptr [edi]
        mov edi, dword ptr [esp + 0x428]
        add eax, 7
        lea ecx, [esp + 0x10]
        cdq
        and edx, 7
        add eax, edx
        lea edx, [esp + 0x114]
        sar eax, 3
        mov dword ptr [edi], eax
        push edx
        lea eax, [esp + 0x21c]
        push ebx
        push eax
        lea edx, [esp + 0x328]
        push ecx
        push edx
        call ext_0086A8A0
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esp + 0x438]
        lea eax, [esp + 0x330]
        push esi
        push eax
        push ecx
        push edx
        call ext_00869EC0
        push 0x104
        lea eax, [esp + 0x344]
        push 0
        push eax
        call ext_008692F0
        push 0x104
        lea ecx, [esp + 0x44]
        push 0
        push ecx
        call ext_008692F0
        add esp, 0x40
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x410
        ret
    }
}

// [0x0085BFF0] sub_0085BFF0 (320 bytes)
extern "C" void ext_0085BFF0();

extern "C" __declspec(naked) void __cdecl fn_0085BFF0(void* self, void* cb) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [esp + 0x30]
        push edi
        mov eax, dword ptr [esi + 0x8]
        push esi
        mov dword ptr [esp + 0x14], eax
        push 0
        lea eax, [eax + 4*eax]
        lea edi, [eax + 4*eax]
        mov eax, dword ptr [esi + 0x4]
        shl edi, 2
        mov ebx, dword ptr [eax + 0x10]
        add ebx, edi
        call ebp
        mov ebx, dword ptr [ebx + 0x44]
        add esp, 8
        cmp ebx, -1
        mov dword ptr [esp + 0x30], eax
        je L_a
        mov dword ptr [esi + 0x8], ebx
    L_a:
        mov ebx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0x4]
        inc ebx
        mov dword ptr [esi + 0x8], ebx
        mov edx, dword ptr [edx + 0x10]
        mov ecx, ebx
        mov edi, dword ptr [edx + edi + 0x18]
        add edi, ecx
        cmp eax, 0x7d0
        je L_b
        cmp eax, 0x7d1
        jne L_c
        mov dword ptr [esi + 0x8], edi
        jmp L_b
    L_c:
        test eax, eax
        jne L_ret_slot
    L_b:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        jae L_d
    L_loop:
        mov ecx, dword ptr [esi + 0x4]
        lea edx, [eax + 4*eax]
        mov ebx, dword ptr [ecx + 0x10]
        lea edx, [edx + 4*edx]
        lea ebx, [ebx + 4*edx]
        cmp byte ptr [ebx], 0xa
        jne L_e
        mov edx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x18], ecx
        mov ecx, dword ptr [esi + 0x14]
        lea edx, [esp + 0x14]
        inc eax
        push ebp
        push edx
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x28], eax
        mov dword ptr [esp + 0x30], ecx
        call ext_0085BFF0
        add esp, 8
        test eax, eax
        jne L_ret_eax
        mov edx, dword ptr [esi + 0x8]
        inc edx
        mov dword ptr [esi + 0x8], edx
        mov ecx, dword ptr [ebx + 0x44]
        cmp ecx, -1
        mov eax, edx
        jne L_f
        mov ecx, dword ptr [ebx + 0x18]
        add ecx, eax
        mov dword ptr [esi + 0x8], ecx
        jmp L_f
    L_e:
        push esi
        push 2
        call ebp
        add esp, 8
        test eax, eax
        jne L_ret_eax
        inc dword ptr [esi + 0x8]
    L_f:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, edi
        jb L_loop
    L_d:
        push esi
        push 1
        call ebp
        add esp, 8
        test eax, eax
        jne L_ret_eax
        cmp dword ptr [esp + 0x30], 0x7d0
        jne L_ret_eax
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 0x8], edx
        push ebp
        mov ecx, dword ptr [eax + 0x10]
        push esi
        mov dword ptr [esi + 0x10], ecx
        call ext_0085BFF0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    L_ret_slot:
        mov eax, dword ptr [esp + 0x30]
    L_ret_eax:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    }
}

// [0x0085A130] sub_0085A130 (320 bytes)
extern "C" void ext_0085A110();
extern "C" void ext_00859FC0();

extern "C" __declspec(naked) void __cdecl fn_0085A130(void* self, unsigned int idx) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp ebp, dword ptr [edi + 0x8]
        jae end_fn
        mov ecx, dword ptr [edi + 0x4]
        xor eax, eax
        push ebx
        cmp ecx, eax
        push esi
        mov dword ptr [esp + 0x18], eax
        jbe after_outer
        mov dword ptr [esp + 0x14], eax
    outer_loop:
        mov esi, dword ptr [esp + 0x14]
        mov edx, dword ptr [edi + 0x10]
        add esi, edx
        lea eax, [esi + 0x1c]
        push eax
        push ebp
        call ext_0085A110
        lea ecx, [esi + 0x20]
        push ecx
        push ebp
        call ext_0085A110
        lea edx, [esi + 0x24]
        push edx
        push ebp
        call ext_0085A110
        mov eax, dword ptr [esi + 0x5c]
        add esp, 0x18
        xor ebx, ebx
        test eax, eax
        jbe skip_inner
    inner_loop:
        mov eax, dword ptr [esi + 0x60]
        lea ecx, [eax + 4*ebx]
        push ecx
        push ebp
        call ext_0085A110
        mov eax, dword ptr [esi + 0x5c]
        add esp, 0x8
        inc ebx
        cmp ebx, eax
        jb inner_loop
    skip_inner:
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edi + 0x4]
        inc eax
        add edx, 0x64
        cmp eax, ecx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], edx
        jb outer_loop
    after_outer:
        mov edx, dword ptr [edi + 0x14]
        mov esi, ebp
        shl esi, 0x4
        mov eax, dword ptr [esi + edx]
        cmp eax, -1
        je skip_first
        push eax
        push edi
        call ext_00859FC0
        add esp, 0x8
    skip_first:
        mov eax, dword ptr [edi + 0x14]
        xor ebx, ebx
        add eax, esi
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jbe skip_second
    second_loop:
        mov ecx, dword ptr [eax + 0x8]
        lea eax, [ecx + 8*ebx]
        mov ecx, dword ptr [ecx + 8*ebx]
        cmp ecx, 0x1
        jne skip_item
        mov edx, dword ptr [eax + 0x4]
        push edx
        push edi
        call ext_00859FC0
        add esp, 0x8
    skip_item:
        mov eax, dword ptr [edi + 0x14]
        inc ebx
        add eax, esi
        cmp ebx, dword ptr [eax + 0x4]
        jb second_loop
    skip_second:
        mov ecx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esi + ecx + 0x8]
        test eax, eax
        je skip_free
        push eax
        call ext_00859730
        add esp, 0x4
    skip_free:
        mov ebx, dword ptr [edi + 0x8]
        lea eax, [ebp + 0x1]
        mov ecx, dword ptr [edi + 0x14]
        mov edx, eax
        shl edx, 0x1c
        sub edx, eax
        add edx, ebx
        shl eax, 0x4
        shl edx, 0x4
        add eax, ecx
        push edx
        add ecx, esi
        push eax
        push ecx
        call ext_00859780
        mov eax, dword ptr [edi + 0x8]
        dec eax
        mov dword ptr [edi + 0x8], eax
        shl eax, 0x4
        push eax
        mov eax, dword ptr [edi + 0x14]
        push eax
        call ext_008596F0
        add esp, 0x14
        test eax, eax
        pop esi
        pop ebx
        jne store_ptr
        mov ecx, dword ptr [edi + 0x8]
        test ecx, ecx
        jne end_fn
    store_ptr:
        mov dword ptr [edi + 0x14], eax
    end_fn:
        pop edi
        pop ebp
        ret
    }
}

// [0x0085DB40] sub_0085DB40 (336 bytes)
extern "C" void ext_0085DC90();

extern "C" __declspec(naked) void __cdecl fn_0085DB40(void) {
    __asm {
        mov cx, word ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        xor cx, 0x2203
        sub esp, 0xdc
        xor edx, 0x31011964
        push ebx
        push esi
        push edi
        mov si, word ptr [esp + 0xf0]
        mov ax, si
        shr ax, 0x8
        movzx edi, ax
        mov ax, word ptr [esp + 0xec]
        mov bl, byte ptr [edi + 0xabb260]
        mov di, ax
        shr di, 0x8
        movzx edi, di
        xor bl, byte ptr [edi + 0xabb260]
        xor edi, edi
        mov di, si
        and edi, 0xff
        xor bl, byte ptr [edi + 0xabb260]
        xor edi, edi
        mov di, ax
        and edi, 0xff
        xor bl, byte ptr [edi + 0xabb260]
        mov edi, edx
        and edi, 0xff
        mov byte ptr [esp + 0xc], bl
        mov bl, byte ptr [edi + 0xabb260]
        xor edi, edi
        mov di, cx
        mov byte ptr [esp + 0xd], bl
        and edi, 0xff
        mov bl, byte ptr [edi + 0xabb260]
        mov edi, edx
        and edi, 0xff0000
        mov byte ptr [esp + 0xe], bl
        shr edi, 0x10
        mov bl, byte ptr [edi + 0xabb260]
        mov di, cx
        mov byte ptr [esp + 0xf], bl
        shr di, 0x8
        movzx edi, di
        mov bl, byte ptr [edi + 0xabb260]
        mov edi, edx
        shr edi, 0x18
        mov byte ptr [esp + 0x10], bl
        xor ebx, ebx
        lea eax, [eax + esi]
        mov bl, dh
        add al, dl
        add al, cl
        mov bl, byte ptr [ebx + 0xabb260]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x11], bl
        movzx ax, al
        mov bl, byte ptr [edi + 0xabb260]
        push eax
        mov byte ptr [esp + 0x16], bl
        push ecx
        mov esi, 0xac02b4
        call ext_0085DC90
        mov edx, dword ptr [esp + 0x104]
        add esp, 0x8
        mov edi, edx
        mov ecx, 0x6
        rep movsd
        movsb
        mov esi, 0x8
        xor eax, eax
    loop_top:
        mov cl, byte ptr [esp + eax + 0xc]
        inc esi
        mov bl, cl
        inc esi
        shr cl, 0x4
        and bl, 0xf
        add bl, 0x61
        inc eax
        mov byte ptr [edx + esi - 0x2], bl
        mov bl, 0x7a
        sub bl, cl
        cmp eax, 0x7
        mov byte ptr [edx + esi - 0x1], bl
        jl loop_top
        pop edi
        pop esi
        pop ebx
        add esp, 0xdc
        ret
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// [0x00859FC0] sub_00859FC0 (336 bytes)
extern "C" void ext_0085A110();
extern "C" __declspec(naked) void __cdecl fn_00859FC0(void* a, unsigned int idx) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        cmp ebp, dword ptr [ebx + 0xc]
        jae end_fn
        mov eax, dword ptr [ebx + 0x4]
        push esi
        xor esi, esi
        push edi
        cmp eax, esi
        mov dword ptr [esp + 0x20], esi
        jbe skip_outer
        mov dword ptr [esp + 0x10], esi
    outer_loop:
        add esi, dword ptr [ebx + 0x10]
        mov dword ptr [esp + 0x14], esi
        lea eax, [esi + 0x10]
        push eax
        push ebp
        call ext_0085A110
        lea ecx, [esi + 0x14]
        push ecx
        push ebp
        call ext_0085A110
        lea edx, [esi + 0x3c]
        push edx
        push ebp
        call ext_0085A110
        mov eax, dword ptr [esi + 0x5c]
        add esp, 0x18
        test eax, eax
        mov dword ptr [esp + 0x1c], 0
        jbe short after_inner
        xor esi, esi
    inner_loop:
        mov edx, dword ptr [ebx + 0x14]
        mov eax, esi
        add eax, edx
        push eax
        push ebp
        call ext_0085A110
        mov eax, dword ptr [ebx + 0x14]
        add esp, 8
        xor edi, edi
        mov ecx, dword ptr [esi + eax + 0x4]
        test ecx, ecx
        jbe short inner_done
    elem_loop:
        mov ecx, dword ptr [esi + eax + 0x8]
        cmp dword ptr [ecx + edi*8], 1
        jne short elem_next
        mov edx, ecx
        lea eax, [edx + edi*8 + 0x4]
        push eax
        push ebp
        call ext_0085A110
        add esp, 8
    elem_next:
        mov eax, dword ptr [ebx + 0x14]
        inc edi
        cmp edi, dword ptr [esi + eax + 0x4]
        jb short elem_loop
    inner_done:
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x1c]
        inc eax
        add esi, 0x10
        mov edx, dword ptr [ecx + 0x5c]
        mov dword ptr [esp + 0x1c], eax
        cmp eax, edx
        jb short inner_loop
    after_inner:
        mov eax, dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebx + 0x4]
        inc eax
        add esi, 0x64
        cmp eax, ecx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x10], esi
        jb outer_loop
    skip_outer:
        mov edx, dword ptr [ebx + 0x18]
        mov eax, dword ptr [edx + ebp*8 + 0x4]
        push eax
        call ext_00859730
        mov edi, dword ptr [ebx + 0xc]
        lea eax, [ebp + 0x1]
        mov ecx, dword ptr [ebx + 0x18]
        mov edx, eax
        shl edx, 0x1d
        sub edx, eax
        lea eax, [ecx + eax*8]
        add edx, edi
        lea ecx, [ecx + ebp*8]
        shl edx, 0x3
        push edx
        push eax
        push ecx
        call ext_00859780
        mov ebp, dword ptr [ebx + 0xc]
        dec ebp
        mov eax, ebp
        mov dword ptr [ebx + 0xc], ebp
        lea edx, [eax*8]
        mov eax, dword ptr [ebx + 0x18]
        push edx
        push eax
        call ext_008596F0
        add esp, 0x18
        test eax, eax
        pop edi
        pop esi
        jne short store_root
        mov ecx, dword ptr [ebx + 0xc]
        test ecx, ecx
        jne short end_fn
    store_root:
        mov dword ptr [ebx + 0x18], eax
    end_fn:
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0085A430] sub_0085A430 (336 bytes)
extern "C" void ext_00859FC0();
extern "C" __declspec(naked) void __cdecl fn_0085A430(void* self, unsigned int idx) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        cmp edi, dword ptr [esi + 0x4]
        jae L11
        push ebx
        mov edx, dword ptr [esi + 0x10]
        lea ebx, [edi + 4*edi]
        push ebp
        lea ebx, [ebx + 4*ebx]
        shl ebx, 0x2
        mov ebp, ebx
        mov dword ptr [esp + 0x10], ebx
        add ebp, edx
        mov eax, dword ptr [ebp + 0x10]
        cmp eax, -1
        je L1
        push eax
        push esi
        call ext_00859FC0
        add esp, 8
    L1:
        mov eax, dword ptr [ebp + 0x14]
        cmp eax, -1
        je L2
        push eax
        push esi
        call ext_00859FC0
        add esp, 8
    L2:
        mov eax, dword ptr [ebp + 0x3c]
        cmp eax, -1
        je L3
        push eax
        push esi
        call ext_00859FC0
        add esp, 8
    L3:
        mov eax, dword ptr [ebp + 0x60]
        test eax, eax
        je L4
        mov eax, dword ptr [ebp + 0x5c]
        mov dword ptr [esp + 0x18], 0
        test eax, eax
        jbe L5
    L6:
        mov eax, dword ptr [ebp + 0x60]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [eax + 4*ecx]
        shl eax, 0x4
        mov ebx, eax
        mov eax, dword ptr [edx + ebx]
        push eax
        push esi
        call ext_00859FC0
        mov ecx, dword ptr [esi + 0x14]
        add esp, 8
        xor edi, edi
        lea eax, [ecx + ebx]
        mov ecx, dword ptr [ecx + ebx + 0x4]
        test ecx, ecx
        jbe L7
    L8:
        mov edx, dword ptr [eax + 0x8]
        mov ecx, dword ptr [edx + 8*edi]
        lea eax, [edx + 8*edi]
        cmp ecx, 1
        jne L9
        mov eax, dword ptr [eax + 0x4]
        push eax
        push esi
        call ext_00859FC0
        add esp, 8
    L9:
        mov ecx, dword ptr [esi + 0x14]
        inc edi
        lea eax, [ecx + ebx]
        mov ecx, dword ptr [ecx + ebx + 0x4]
        cmp edi, ecx
        jb L8
    L7:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebp + 0x5c]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x18], eax
        jb L6
        mov ebx, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x1c]
    L5:
        mov edx, dword ptr [ebp + 0x60]
        push edx
        call ext_00859730
        add esp, 4
    L4:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi + 0x10]
        sub ecx, edi
        lea edi, [edi + 4*edi + 0x5]
        dec ecx
        lea edx, [edi + 4*edi]
        push ecx
        lea ecx, [eax + 4*edx]
        add eax, ebx
        push ecx
        push eax
        call ext_00859780
        mov eax, dword ptr [esi + 0x4]
        dec eax
        mov dword ptr [esi + 0x4], eax
        lea eax, [eax + 4*eax]
        lea edx, [eax + 4*eax]
        mov eax, dword ptr [esi + 0x10]
        shl edx, 0x2
        push edx
        push eax
        call ext_008596F0
        add esp, 0x14
        test eax, eax
        pop ebp
        pop ebx
        jne L10
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        jne L11
    L10:
        mov dword ptr [esi + 0x10], eax
    L11:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x0085CF60] sub_0085CF60 (342 bytes)
extern "C" void ext_0081CEBA();
extern "C" void ext_0084D8E8();
extern "C" void ext_0085CF60();

extern "C" __declspec(naked) void* __cdecl fn_0085CF60(void) {
    __asm {
        sub esp, 4
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov dword ptr [esp + 0xc], ebx
        push ebp
        push 0x1c
        call ext_0081CEBA
        add esp, 4
        mov edi, eax
        test edi, edi
        je epilogue
        xor eax, eax
        mov esi, dword ptr [esp + 0x18]
        mov al, byte ptr [esi]
        inc esi
        xor edx, edx
        mov dword ptr [edi], eax
        mov dword ptr [edi + 0x4], edx
        mov dword ptr [edi + 0x8], edx
        mov dword ptr [edi + 0x14], edx
        mov dword ptr [edi + 0x18], edx
        mov dword ptr [edi + 0x10], edx
        mov dword ptr [edi + 0xc], 1
        mov al, byte ptr [esi]
        test al, 0x80
        je single_len
        and al, 0x7f
        xor ebx, ebx
        mov bl, al
        test ebx, ebx
        jle after_len
    len_loop:
        xor eax, eax
        mov ecx, dword ptr [edi + 0x4]
        shl ecx, 8
        mov al, byte ptr [esi + edx + 1]
        or eax, ecx
        inc edx
        mov dword ptr [edi + 0x4], eax
        cmp edx, ebx
        jl len_loop
        jmp after_len
    single_len:
        xor ecx, ecx
        mov cl, al
        mov dword ptr [edi + 0x4], ecx
    after_len:
        mov ecx, dword ptr [edi + 0x4]
        cmp dword ptr [esp + 0x1c], ecx
        jae have_len
        push edi
        call ext_0084D8E8
        add esp, 4
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    have_len:
        lea ebp, [ebx + 2]
        lea esi, [ebx + esi + 1]
        test byte ptr [edi], 0x20
        je plain_data
        lea eax, [esp + 0x10]
        push eax
        push ecx
        push esi
        call ext_0085CF60
        add esp, 0xc
        mov dword ptr [edi + 0x14], eax
        add ebp, dword ptr [esp + 0x10]
        add esi, dword ptr [esp + 0x10]
        jmp check_rest
    plain_data:
        mov dword ptr [edi + 0x8], esi
        mov eax, dword ptr [edi + 0x4]
        add ebp, eax
        add esi, eax
    check_rest:
        cmp dword ptr [esp + 0x1c], ebp
        jbe store_out
        lea eax, [esp + 0x10]
        push eax
        mov eax, dword ptr [esp + 0x20]
        sub eax, ebp
        push eax
        push esi
        call ext_0085CF60
        add esp, 0xc
        mov dword ptr [edi + 0x18], eax
        add ebp, dword ptr [esp + 0x10]
    store_out:
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        je no_out
        mov dword ptr [eax], ebp
    no_out:
        mov eax, edi
    epilogue:
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    free_tree:
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        jne free_tree_nonnull
        xor eax, eax
        pop esi
        ret
    free_tree_nonnull:
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je skip_child2
        push eax
        call free_tree
        add esp, 4
    skip_child2:
        mov eax, dword ptr [esi + 0x14]
        test eax, eax
        je skip_child1
        push eax
        call free_tree
        add esp, 4
    skip_child1:
        cmp dword ptr [esi + 0x10], 0
        je skip_data
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je skip_data
        push eax
        call ext_0084D8E8
        add esp, 4
    skip_data:
        cmp dword ptr [esi + 0xc], 0
        je skip_node
        push esi
        call ext_0084D8E8
        add esp, 4
    skip_node:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00859450] sub_00859450 (352 bytes)
extern "C" char mem_00AB8D30[];

extern "C" __declspec(naked) void __cdecl fn_00859450(void) {
    __asm {
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 20h]
        cmp ebx, 1
        jae nonzero
        mov eax, dword ptr [esp + 18h]
        pop ebx
        mov dword ptr [eax], 0
        xor eax, eax
        add esp, 0ch
        ret
    nonzero:
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esp + 4], ebx
        test ebx, ebx
        mov dword ptr [ecx], 0
        jbe ret0
        mov eax, dword ptr [esp + 1ch]
        or ecx, -1
        push ebp
        push esi
        sub ecx, eax
        push edi
        mov dword ptr [esp + 14h], 0
        lea edi, [eax + 1]
        mov dword ptr [esp + 18h], ecx
        jmp loop_check
    loop_top:
        mov ebx, dword ptr [esp + 10h]
    loop_check:
        cmp ebx, 3
        jb L1
        mov ebx, 3
    L1:
        mov eax, 0aaaaaaabh
        mul dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 20h]
        shr edx, 1
        add edx, eax
        xor eax, eax
        mov al, byte ptr [edi - 1]
        mov esi, eax
        shr esi, 2
        cmp ebx, 1
        jle L2
        xor ecx, ecx
        and eax, 3
        mov cl, byte ptr [edi]
        shr ecx, 4
        shl eax, 4
        or ecx, eax
        jmp L3
    L2:
        and eax, 3
        shl eax, 4
        mov ecx, eax
    L3:
        cmp ebx, 2
        jle L4
        xor eax, eax
        mov al, byte ptr [edi + 1]
        mov ebp, eax
        mov al, byte ptr [edi]
        and eax, 0fh
        shr ebp, 6
        shl eax, 2
        or ebp, eax
        jmp L5
    L4:
        mov al, byte ptr [edi]
        and eax, 0fh
        shl eax, 2
        mov ebp, eax
    L5:
        mov al, byte ptr [edi + 1]
        and esi, 3fh
        and eax, 3fh
        and ecx, 3fh
        mov dword ptr [esp + 28h], eax
        mov al, byte ptr [esi + mem_00AB8D30]
        mov byte ptr [edx], al
        mov cl, byte ptr [ecx + mem_00AB8D30]
        inc edx
        mov byte ptr [edx], cl
        inc edx
        cmp ebx, 1
        jne L6
        mov byte ptr [edx], 3dh
        mov byte ptr [edx + 1], 3dh
        jmp L9
    L6:
        and ebp, 3fh
        inc edx
        cmp ebx, 2
        mov al, byte ptr [ebp + mem_00AB8D30]
        mov byte ptr [edx - 1], al
        jne L7
        mov byte ptr [edx], 3dh
        jmp L9
    L7:
        mov eax, dword ptr [esp + 28h]
        and eax, 3fh
        mov cl, byte ptr [eax + mem_00AB8D30]
        mov byte ptr [edx], cl
    L9:
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        mov esi, dword ptr [eax]
        add edi, 3
        add esi, 4
        add edx, edi
        mov dword ptr [eax], esi
        mov eax, dword ptr [esp + 2ch]
        sub ebx, 3
        add ecx, 0ch
        cmp edx, eax
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 14h], ecx
        jb loop_top
        pop edi
        pop esi
        pop ebp
    ret0:
        xor eax, eax
        pop ebx
        add esp, 0ch
        ret
    }
}

// [0x00852700] sub_00852700 (352 bytes)
extern "C" void ext_00852860();
extern "C" void ext_00852910();
extern "C" void ext_00859360();

extern "C" __declspec(naked) void __cdecl fn_00852700(void) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        push 0x20
        push ebp
        push esi
        call ext_00868690
        add esp, 0xc
        or eax, edx
        jne slow
        mov ebx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x14]
        push 0x20
        push ebx
        push edi
        call ext_00868690
        add esp, 0xc
        cmp edx, ebp
        ja big
        jb l_lo
        cmp eax, esi
        jae big
    l_lo:
        push esi
        push ebx
        push edi
        call ext_00852860
        add esp, 0xc
        xor edx, edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    big:
        push 0x20
        push ebx
        push edi
        call ext_00868690
        mov ebx, edx
        mov edi, eax
        push esi
        push ebx
        push edi
        call ext_00852860
        xor ecx, ecx
        push ebp
        push esi
        push ecx
        push eax
        mov dword ptr [esp + 0x44], eax
        call ext_00859360
        add esp, 0x28
        sub edi, eax
        sbb ebx, edx
        push esi
        push 0x20
        push ebx
        push edi
        call ext_0085BBC0
        mov esi, dword ptr [esp + 0x24]
        add esp, 0xc
        xor ecx, ecx
        add eax, esi
        adc edx, ecx
        push edx
        push eax
        call ext_00852860
        mov edx, dword ptr [esp + 0x28]
        mov esi, eax
        xor eax, eax
        push 0x20
        push eax
        push edx
        xor edi, edi
        call ext_0085BBC0
        add esp, 0x18
        add eax, esi
        adc edx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    slow:
        push ebp
        push esi
        call ext_00852910
        add esp, 0x8
        mov edi, eax
        push 0x20
        push edi
        push ebp
        push esi
        call ext_0085BBC0
        add esp, 0xc
        push edx
        push eax
        call ext_00868690
        mov ecx, dword ptr [esp + 0x20]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x24]
        push 0x1
        push eax
        push ecx
        mov dword ptr [esp + 0x38], edx
        call ext_00868690
        push ebx
        push edx
        push eax
        call ext_00852860
        add esp, 0x24
        xor ecx, ecx
        push 0x1f
        push edi
        push ecx
        push eax
        call ext_0085BBC0
        add esp, 0xc
        push edx
        push eax
        call ext_00868690
        mov edi, eax
        mov ebx, edx
        mov edx, edi
        add esp, 0xc
        or edx, ebx
        je skip
        add edi, -1
        adc ebx, -1
    skip:
        push ebp
        push esi
        push ebx
        push edi
        call ext_00859360
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0x10
        sub ecx, eax
        mov eax, dword ptr [esp + 0x18]
        sbb eax, edx
        cmp eax, ebp
        jb nochg
        ja inc1
        cmp ecx, esi
        jb nochg
    inc1:
        add edi, 1
        adc ebx, 0
    nochg:
        mov eax, edi
        pop edi
        pop esi
        mov edx, ebx
        pop ebp
        pop ebx
        ret
    }
}

// [0x00853A20] sub_00853A20 (362 bytes)
extern "C" void ext_00855ED0();
extern "C" int mem_00AB7A50;

extern "C" __declspec(naked) void __cdecl fn_00853A20(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edx, dword ptr [esi + 0x10]
        mov eax, edx
        shr eax, 0x3
        lea ecx, [edx + 8*ebx]
        and eax, 0x3f
        cmp ecx, edx
        jae L_nocarry
        inc dword ptr [esi + 0x14]
    L_nocarry:
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [esi + 0x10], ecx
        mov ecx, ebx
        shr ecx, 0x1d
        add edx, ecx
        test eax, eax
        mov dword ptr [esi + 0x14], edx
        je L_off0
        mov edi, 0x40
        lea ecx, [eax + esi + 0x18]
        sub edi, eax
        cmp ebx, edi
        jge L_big
        mov edx, dword ptr [esp + 0x18]
        push ebx
        push edx
        push ecx
        call ext_00869310
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_big:
        mov ebp, dword ptr [esp + 0x18]
        push edi
        push ebp
        push ecx
        call ext_00869310
        mov eax, dword ptr [mem_00AB7A50]
        add esp, 0xc
        and eax, 0xffff
        lea edx, [esi + 0x18]
        and al, 0
        cmp eax, 0x5000
        je L_skip1
        mov ebx, 0x10
    L_bs1:
        mov ecx, dword ptr [edx]
        add edx, 4
        mov eax, ecx
        shr eax, 0x10
        shl ecx, 0x10
        or eax, ecx
        mov ecx, eax
        and ch, 0
        shr eax, 0x8
        shl ecx, 0x8
        and eax, 0xff00ff
        or ecx, eax
        dec ebx
        mov dword ptr [edx - 4], ecx
        jne L_bs1
        mov ebx, dword ptr [esp + 0x1c]
    L_skip1:
        push esi
        call ext_00855ED0
        add esp, 0x4
        add ebp, edi
        sub ebx, edi
        mov dword ptr [esp + 0x1c], ebx
        jmp L_after
    L_off0:
        mov ebp, dword ptr [esp + 0x18]
    L_after:
        cmp ebx, 0x40
        jl L_tail
        mov eax, dword ptr [esp + 0x1c]
        lea ebx, [esi + 0x18]
        mov edi, eax
        shr edi, 0x6
        mov edx, edi
        mov dword ptr [esp + 0x18], edi
        neg edx
        shl edx, 0x6
        add eax, edx
        mov dword ptr [esp + 0x1c], eax
    L_loop:
        push 0x40
        push ebp
        push ebx
        call ext_00869310
        mov eax, dword ptr [mem_00AB7A50]
        add esp, 0xc
        and eax, 0xffff
        and al, 0
        cmp eax, 0x5000
        je L_skip2
        mov edx, ebx
        mov edi, 0x10
    L_bs2:
        mov ecx, dword ptr [edx]
        add edx, 4
        mov eax, ecx
        shr eax, 0x10
        shl ecx, 0x10
        or eax, ecx
        mov ecx, eax
        and ah, 0
        shr ecx, 0x8
        and ecx, 0xff00ff
        shl eax, 0x8
        or ecx, eax
        dec edi
        mov dword ptr [edx - 4], ecx
        jne L_bs2
        mov edi, dword ptr [esp + 0x18]
    L_skip2:
        push esi
        call ext_00855ED0
        add esp, 0x4
        add ebp, 0x40
        dec edi
        mov dword ptr [esp + 0x18], edi
        jne L_loop
        mov ebx, dword ptr [esp + 0x1c]
    L_tail:
        push ebx
        add esi, 0x18
        push ebp
        push esi
        call ext_00869310
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x008536D0] sub_008536D0 (368 bytes)
extern "C" void ext_00853D30();
extern "C" int mem_00AB7A50;

extern "C" __declspec(naked) void __cdecl fn_008536D0(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edx, dword ptr [esi + 0x14]
        mov eax, edx
        shr eax, 0x3
        lea ecx, [edx + 8*ebx]
        and eax, 0x3f
        cmp ecx, edx
        jae L_nocarry
        inc dword ptr [esi + 0x18]
    L_nocarry:
        mov edx, dword ptr [esi + 0x18]
        mov dword ptr [esi + 0x14], ecx
        mov ecx, ebx
        shr ecx, 0x1d
        add edx, ecx
        test eax, eax
        mov dword ptr [esi + 0x18], edx
        je L_off0
        mov edi, 0x40
        lea ecx, [eax + esi + 0x1c]
        sub edi, eax
        cmp ebx, edi
        jge L_big
        mov edx, dword ptr [esp + 0x18]
        push ebx
        push edx
        push ecx
        call ext_00869310
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_big:
        mov ebp, dword ptr [esp + 0x18]
        push edi
        push ebp
        push ecx
        call ext_00869310
        mov eax, dword ptr [mem_00AB7A50]
        add esp, 0xc
        and eax, 0xffff
        lea edx, [esi + 0x1c]
        and al, 0x0
        cmp eax, 0x5000
        je L_skip_swap1
        mov ebx, 0x10
    L_swap1:
        mov ecx, dword ptr [edx]
        add edx, 0x4
        mov eax, ecx
        shr eax, 0x10
        shl ecx, 0x10
        or eax, ecx
        mov ecx, eax
        and ch, 0x0
        shr eax, 0x8
        shl ecx, 0x8
        and eax, 0xff00ff
        or ecx, eax
        dec ebx
        mov dword ptr [edx - 0x4], ecx
        jne L_swap1
        mov ebx, dword ptr [esp + 0x1c]
    L_skip_swap1:
        push esi
        call ext_00853D30
        add esp, 0x4
        add ebp, edi
        sub ebx, edi
        mov dword ptr [esp + 0x1c], ebx
        jmp L_check_64
    L_off0:
        mov ebp, dword ptr [esp + 0x18]
    L_check_64:
        cmp ebx, 0x40
        jl L_tail
        mov eax, dword ptr [esp + 0x1c]
        lea ebx, [esi + 0x1c]
        mov edi, eax
        shr edi, 0x6
        mov edx, edi
        mov dword ptr [esp + 0x18], edi
        neg edx
        shl edx, 0x6
        add eax, edx
        mov dword ptr [esp + 0x1c], eax
    L_block_loop:
        push 0x40
        push ebp
        push ebx
        call ext_00869310
        mov eax, dword ptr [mem_00AB7A50]
        add esp, 0xc
        and eax, 0xffff
        and al, 0x0
        cmp eax, 0x5000
        je L_skip_swap2
        mov edx, ebx
        mov edi, 0x10
    L_swap2:
        mov ecx, dword ptr [edx]
        add edx, 0x4
        mov eax, ecx
        shr eax, 0x10
        shl ecx, 0x10
        or eax, ecx
        mov ecx, eax
        and ah, 0x0
        shr ecx, 0x8
        and ecx, 0xff00ff
        shl eax, 0x8
        or ecx, eax
        dec edi
        mov dword ptr [edx - 0x4], ecx
        jne L_swap2
        mov edi, dword ptr [esp + 0x18]
    L_skip_swap2:
        push esi
        call ext_00853D30
        add esp, 0x4
        add ebp, 0x40
        dec edi
        mov dword ptr [esp + 0x18], edi
        jne L_block_loop
        mov ebx, dword ptr [esp + 0x1c]
    L_tail:
        push ebx
        add esi, 0x1c
        push ebp
        push esi
        call ext_00869310
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0085D390] sub_0085D390 (372 bytes)
extern "C" __declspec(naked) int __cdecl fn_0085D390(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x40
        test eax, eax
        push ebx
        push esi
        push edi
        push ebp
        jne L_85d3ac
        mov eax, 0xc9
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    L_85d3ac:
        mov ebx, dword ptr [esp + 0x58]
        mov esi, dword ptr [esp + 0x5c]
        and ebx, -8
        test esi, esi
        lea ecx, [ebx + 0x10]
        jne L_85d3ca
        pop ebp
        mov dword ptr [eax], ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    L_85d3ca:
        cmp dword ptr [eax], ecx
        jae L_85d3dd
        pop ebp
        mov dword ptr [eax], ecx
        mov eax, 0xca
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    L_85d3dd:
        mov ebp, dword ptr [esp + 0x54]
        test ebp, ebp
        je L_85d4f7
        cmp dword ptr [esp + 0x64], 0
        je L_85d4f7
        lea eax, [esp + 0x28]
        push eax
        call ext_00857490
        lea eax, [esp + 0x2c]
        lea ecx, [esp + 0x14]
        add esp, 4
        push eax
        push 8
        push ecx
        call ext_00857440
        lea ecx, [esp + 0x34]
        add esp, 0xc
        push ecx
        call ext_00857470
        add esp, 4
        push 0x105c
        call ext_0085D560
        add esp, 4
        mov edi, eax
        test edi, edi
        jne L_85d442
        mov eax, 0xc
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    L_85d442:
        lea eax, [esp + 0x10]
        push 1
        mov ecx, dword ptr [esp + 0x68]
        push eax
        push 0x10
        push ecx
        push edi
        call ext_0086D480
        lea ecx, [esp + 0x24]
        add esp, 0x14
        push 8
        push ecx
        push esi
        call ext_0085D530
        add esp, 0xc
        add esi, 8
        test ebx, ebx
        je L_85d47e
        push ebx
        push ebp
        push esi
        push edi
        add esi, ebx
        call ext_0086D4D0
        add esp, 0x10
    L_85d47e:
        push 8
        mov cl, 8
        mov eax, dword ptr [esp + 0x5c]
        and al, 7
        sub cl, al
        xor eax, eax
        mov al, cl
        lea ecx, [esp + 0x1c]
        push eax
        push ecx
        add ebx, ebp
        call ext_0085D510
        mov eax, dword ptr [esp + 0x64]
        lea ecx, [esp + 0x24]
        add esp, 0xc
        and eax, 7
        push eax
        push ebx
        push ecx
        call ext_0085D530
        lea eax, [esp + 0x24]
        add esp, 0xc
        push 8
        push eax
        push esi
        push edi
        call ext_0086D4D0
        lea eax, [esp + 0x20]
        add esp, 0x10
        push 8
        push 0
        push eax
        call ext_0085D510
        add esp, 0xc
        push 0x105c
        push 0
        push edi
        call ext_0085D510
        add esp, 0xc
        push edi
        call dword ptr [mem_00924210]
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    L_85d4f7:
        mov eax, 0xc9
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret
    }
}
