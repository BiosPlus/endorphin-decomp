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
