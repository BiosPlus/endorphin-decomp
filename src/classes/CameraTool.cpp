// Decompiled translation unit: src/classes/CameraTool.cpp

// [0x00543470] CameraTool::vfunc_32 (71 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543470(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x88], 0x0
        je done
        mov eax, dword ptr [ebx + 0x88]
        mov edx, dword ptr [ebx]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x78]
        push edi
        call eax
        mov ecx, dword ptr [ebx + 0x88]
        mov edx, dword ptr [esi + 0x18]
        push eax
        call edx
        lea edx, [ebx + 0x4]
        mov ecx, 0x10
        mov esi, eax
        mov edi, edx
        rep movsd
        lea edi, [ebx + 0x44]
        mov ecx, 0x10
        mov esi, edx
        rep movsd
        pop edi
        pop esi
done:
        pop ebx
        ret
    }
}

// [0x005433F0] CameraTool::vfunc_33 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_005433F0(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov eax, dword ptr [esi + 0x88]
        mov edx, dword ptr [esi]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x78]
        call eax
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [edi + 0x18]
        push eax
        call edx
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x8]
        pop edi
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        fst dword ptr [esi + 0x34]
        fld dword ptr [esp + 0x8]
        fst dword ptr [esi + 0x38]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x3c]
        fld1
        fst dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x80]
        fxch st(2)
        fstp dword ptr [esi + 0x74]
        fstp dword ptr [esi + 0x78]
        fstp dword ptr [esi + 0x7c]
done:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00543D70] CameraTool::vfunc_31 (140 bytes)
extern "C" int mem_00925424;
extern "C" int mem_00925438;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;
extern "C" int mem_00925418;
extern "C" void ext_00543C00();

extern "C" __declspec(naked) void __fastcall fn_00543D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        cmp dword ptr [esp + 0x4], 0x1c02
        push esi
        mov esi, ecx
        je done
        mov eax, dword ptr [esi + 0x84]
        mov ecx, dword ptr [eax + 0xf8]
        cmp ecx, dword ptr [eax + 0xfc]
        jne done
        cmp byte ptr [esi + 0xc4], 0x0
        je done
        push edi
        push 0xb50
        call dword ptr [mem_00925424]
        movzx edi, al
        test edi, edi
        je skip_enable
        push 0xb50
        call dword ptr [mem_00925438]
skip_enable:
        mov ecx, esi
        call ext_00543C00
        call dword ptr [mem_00925414]
        lea edx, [esi + 0x4]
        push edx
        call dword ptr [mem_009253C8]
        mov eax, dword ptr [esi + 0x98]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x98]
        push 0x1
        call edx
        call dword ptr [mem_00925404]
        test edi, edi
        pop edi
        je done
        push 0xb50
        call dword ptr [mem_00925418]
done:
        pop esi
        ret 0x8
    }
}

extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F0E0;
extern "C" int mem_00A9FAF0;
extern "C" int mem_00A9F874;
extern "C" int mem_00A9F80C;
extern "C" int mem_00A9FADC;
extern "C" int mem_00A9F978;

// [0x00543C60] CameraTool::vfunc_2 (269 bytes)
extern "C" __declspec(naked) void __fastcall fn_00543C60(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F0E0]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        push 0x1
        push 0x0
        mov esi, ecx
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je hit
        cmp eax, 0xb53b30
        je hit
        cmp eax, 0xb53ab0
        je hit
        cmp eax, 0xb53a70
        je hit
        cmp eax, 0xb53af0
        jne not_hit
    hit:
        mov edi, 0xb53b30
        jmp cont
    not_hit:
        mov edi, eax
    cont:
        mov ecx, dword ptr [mem_00A9FAF0]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        lea eax, [esi + 0xb4]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9F874]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        lea eax, [esi + 0xb8]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9F80C]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        lea eax, [esi + 0xbc]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9FADC]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        lea eax, [esi + 0xc0]
        push eax
        call ext_0046C0A0
        add esi, 0xc4
        mov byte ptr [esi], 0x1
        mov ecx, dword ptr [mem_00A9F978]
        add esp, 0x8
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        lea edx, [esp + 0x10]
        push edx
        push esi
        mov dword ptr [esp + 0x18], eax
        call ext_00427640
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00543930] CameraTool::vfunc_15 (647 bytes)
extern "C" void ext_005417E0();
extern "C" void ext_00541890();
extern "C" void ext_00541940();
extern "C" void ext_005419F0();
extern "C" void ext_00543630();
extern "C" int mem_00956228;

extern "C" __declspec(naked) void __fastcall fn_00543930(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x28]
        push edi
        xor eax, eax
        mov edi, esi
        mov ebx, esi
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x1c], eax
        and edi, 0x8
        and ebx, 0x4
        call ext_00543630
        mov ecx, esi
        mov ebp, esi
        and esi, 0x2
        mov edx, esi
        xor esi, esi
        and ecx, 0x1
        and ebp, 0x10
        cmp edi, esi
        jne L_543a1e
        test al, al
        jne L_5439c0
        cmp ebx, esi
        jne L_543a70
        cmp ecx, esi
        jne L_543997
        cmp ebp, esi
        je L_543997
        cmp edx, esi
        jne L_543997
        mov dword ptr [esp + 0x18], 0x1
        jmp L_5439a3
    L_543997:
        cmp ecx, esi
        mov dword ptr [esp + 0x18], esi
        jne L_543a6c
    L_5439a3:
        cmp ebp, esi
        je L_543a6c
        cmp edx, esi
        je L_543a6c
        mov dword ptr [esp + 0x10], 0x1
        jmp L_543a70
    L_5439c0:
        cmp ebx, esi
        jne L_543a70
        cmp ecx, esi
        je L_5439df
        cmp ebp, esi
        jne L_5439df
        cmp edx, esi
        jne L_5439df
        mov eax, 0x1
        mov dword ptr [esp + 0x18], eax
        jmp L_5439e8
    L_5439df:
        mov dword ptr [esp + 0x18], esi
        mov eax, 0x1
    L_5439e8:
        cmp ecx, esi
        jne L_5439fa
        cmp ebp, esi
        je L_5439fa
        cmp edx, esi
        jne L_5439fa
        mov dword ptr [esp + 0x10], eax
        jmp L_543a02
    L_5439fa:
        cmp ecx, esi
        mov dword ptr [esp + 0x10], esi
        jne L_543a10
    L_543a02:
        cmp ebp, esi
        jne L_543a42
        cmp edx, esi
        jne L_543a18
        mov dword ptr [esp + 0x1c], esi
        jmp L_543a70
    L_543a10:
        cmp ebp, esi
        je L_543a42
        cmp edx, esi
        jne L_543a42
    L_543a18:
        mov dword ptr [esp + 0x1c], eax
        jmp L_543a70
    L_543a1e:
        test al, al
        je L_543a4c
        cmp ebx, esi
        jne L_543a48
        cmp ecx, esi
        je L_543a3a
        cmp ebp, esi
        jne L_543a3a
        cmp edx, esi
        mov dword ptr [esp + 0x10], 0x1
        je L_543a3e
    L_543a3a:
        mov dword ptr [esp + 0x10], esi
    L_543a3e:
        mov dword ptr [esp + 0x18], esi
    L_543a42:
        mov dword ptr [esp + 0x1c], esi
        jmp L_543a70
    L_543a48:
        test al, al
        jne L_543a70
    L_543a4c:
        cmp ebx, esi
        je L_543a70
        cmp ecx, esi
        jne L_543a64
        cmp ebp, esi
        jne L_543a64
        cmp edx, esi
        mov dword ptr [esp + 0x1c], 0x1
        jne L_543a68
    L_543a64:
        mov dword ptr [esp + 0x1c], esi
    L_543a68:
        mov dword ptr [esp + 0x18], esi
    L_543a6c:
        mov dword ptr [esp + 0x10], esi
    L_543a70:
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [eax + 0x4]
        sub ecx, dword ptr [edx]
        sub eax, dword ptr [edx + 0x4]
        mov ebx, dword ptr [esp + 0x18]
        cmp ebx, esi
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x2c], eax
        je L_543add
        fild dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [edi + 0x84]
        fmul dword ptr [edi + 0xb4]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp]
        call ext_00541890
        fild dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [edi + 0x84]
        fmul dword ptr [edi + 0xb4]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp]
        call ext_00541940
        jmp L_543b83
    L_543add:
        cmp dword ptr [esp + 0x10], esi
        je L_543b22
        fild dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x84]
        sub esp, 0x8
        fmul dword ptr [eax + 0xb8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x4]
        fild dword ptr [esp + 0x30]
        fmul dword ptr [eax + 0xb8]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call ext_005419F0
        jmp L_543b7f
    L_543b22:
        cmp dword ptr [esp + 0x1c], esi
        je L_543b7f
        cdq
        mov edi, eax
        xor edi, edx
        sub edi, edx
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp edi, eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [eax + 0x84]
        jl L_543b5f
        fild dword ptr [esp + 0x30]
        fmul qword ptr [mem_00956228]
        fmul dword ptr [eax + 0xbc]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        jmp L_543b77
    L_543b5f:
        fild dword ptr [esp + 0x2c]
        fmul qword ptr [mem_00956228]
        fmul dword ptr [eax + 0xbc]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
    L_543b77:
        fstp dword ptr [esp]
        call ext_005417E0
    L_543b7f:
        mov edi, dword ptr [esp + 0x14]
    L_543b83:
        cmp dword ptr [edi + 0x88], esi
        je L_543ba8
        cmp dword ptr [esp + 0x10], esi
        jne L_543b9b
        cmp ebx, esi
        jne L_543b9b
        cmp dword ptr [esp + 0x1c], esi
        je L_543ba8
    L_543b9b:
        mov ecx, dword ptr [edi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x6c]
        call edx
    L_543ba8:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00543820] CameraTool::vfunc_3 (194 bytes)
struct Node_00543820 {
    Node_00543820* find(int key);
    void* get(int key);
};
extern "C" Node_00543820* __fastcall ext_006404E0(void* self, int edx_unused, int key);
extern "C" void* __fastcall ext_00640110(void* self, int edx_unused, int key);
extern "C" void __cdecl ext_00640BC0(void* node, float val);
extern "C" void __cdecl ext_00640A80(void* node, unsigned char val);
extern "C" int mem_00A9F0E0;
extern "C" int mem_00A9FAF0;
extern "C" int mem_00A9F874;
extern "C" int mem_00A9F80C;
extern "C" int mem_00A9FADC;
extern "C" int mem_00A9F978;

extern "C" void* __fastcall fn_00543820(void* self, int edx_unused, void* arg) {
    char* s = (char*)self;
    void* node = ((Node_00543820*)arg)->find(mem_00A9F0E0);
    void* p0 = ((Node_00543820*)node)->get(mem_00A9FAF0);
    ext_00640BC0(p0, *(float*)(s + 0xb4));
    void* p1 = ((Node_00543820*)node)->get(mem_00A9F874);
    ext_00640BC0(p1, *(float*)(s + 0xb8));
    void* p2 = ((Node_00543820*)node)->get(mem_00A9F80C);
    ext_00640BC0(p2, *(float*)(s + 0xbc));
    void* p3 = ((Node_00543820*)node)->get(mem_00A9FADC);
    ext_00640BC0(p3, *(float*)(s + 0xc0));
    void* p4 = ((Node_00543820*)arg)->get(mem_00A9F978);
    ext_00640A80(p4, *(unsigned char*)(s + 0xc4));
    return arg;
}
