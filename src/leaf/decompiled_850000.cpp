// Decompiled translation unit: src/leaf/decompiled_850000.cpp

// [0x008598C0] sub_008598C0 (32 bytes)
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

// [0x0085A110] sub_0085A110 (32 bytes)
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

// [0x0085D510] sub_0085D510 (32 bytes)
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

// [0x0085BEA0] sub_0085BEA0 (32 bytes)
extern "C" void __cdecl ext_00859730(void* p);

extern "C" void __cdecl fn_0085BEA0(void* self) {
    void** s = static_cast<void**>(self);
    if (s[1] != 0) {
        ext_00859730(s[1]);
    }
    ext_00859730(self);
}

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
