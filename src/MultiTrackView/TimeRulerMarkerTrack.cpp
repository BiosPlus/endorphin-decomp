// Decompiled translation unit: src/MultiTrackView/TimeRulerMarkerTrack.cpp

extern "C" void ext_00412690();
extern "C" void ext_0041AEE0();
extern "C" void ext_0043B450();
extern "C" void ext_0043B4D0();
extern "C" void ext_0043F2C0();
extern "C" void ext_00441020();
extern "C" void ext_00459920();
extern "C" void ext_0066A180();
extern "C" void ext_006A6142();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E98();
extern "C" void ext_006A6EEC();
extern "C" int mem_00925134;
extern "C" int mem_0092BD70;
extern "C" int mem_0092566C;
extern "C" int mem_00925230;
extern "C" int mem_00924080;
extern "C" int mem_0092520C;
extern "C" int mem_00996B98;
extern "C" int mem_00993828;

// [0x00459F20] MultiTrackView::TimeRulerMarkerTrack::vfunc_1 (1610 bytes)
extern "C" __declspec(naked) void __fastcall fn_00459F20(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp                                 // 0x00459F20: 55
        mov ebp, esp                             // 0x00459F21: 8b ec
        and esp, -0x40                           // 0x00459F23: 83 e4 c0
        push -0x1                                // 0x00459F26: 6a ff
        push 0x87f2ab                            // 0x00459F28: 68 ab f2 87 00
        mov eax, dword ptr fs:[0x0]              // 0x00459F2D: 64 a1 00 00 00 00
        push eax                                 // 0x00459F33: 50
        mov dword ptr fs:[0x0], esp              // 0x00459F34: 64 89 25 00 00 00 00
        sub esp, 0x268                           // 0x00459F3B: 81 ec 68 02 00 00
        push ebx                                 // 0x00459F41: 53
        push esi                                 // 0x00459F42: 56
        mov esi, ecx                             // 0x00459F43: 8b f1
        push edi                                 // 0x00459F45: 57
        lea ecx, [esp + 0xb8]                    // 0x00459F46: 8d 8c 24 b8 00 00 00
        call ext_0043B450                        // 0x00459F4D: e8 fe 14 fe ff
        mov edi, dword ptr [ebp + 0xc]           // 0x00459F52: 8b 7d 0c
        mov ecx, dword ptr [edi + 0x4]           // 0x00459F55: 8b 4f 04
        mov edx, dword ptr [esi + 0x28]          // 0x00459F58: 8b 56 28
        mov eax, dword ptr [edi]                 // 0x00459F5B: 8b 07
        mov ebx, dword ptr [edi + 0x8]           // 0x00459F5D: 8b 5f 08
        mov dword ptr [esp + 0xc4], edx          // 0x00459F60: 89 94 24 c4 00 00 00
        mov dword ptr [esp + 0xc0], ebx          // 0x00459F67: 89 9c 24 c0 00 00 00
        add edx, ecx                             // 0x00459F6E: 03 d1
        push 0x675753                            // 0x00459F70: 68 53 57 67 00
        add ebx, eax                             // 0x00459F75: 03 d8
        sub edx, ecx                             // 0x00459F77: 2b d1
        push edx                                 // 0x00459F79: 52
        sub ebx, eax                             // 0x00459F7A: 2b d8
        push ebx                                 // 0x00459F7C: 53
        mov ebx, dword ptr [ebp + 0x8]           // 0x00459F7D: 8b 5d 08
        push ecx                                 // 0x00459F80: 51
        mov dword ptr [esp + 0xcc], ecx          // 0x00459F81: 89 8c 24 cc 00 00 00
        push eax                                 // 0x00459F88: 50
        mov ecx, ebx                             // 0x00459F89: 8b cb
        mov dword ptr [esp + 0x290], 0x0         // 0x00459F8B: c7 84 24 90 02 00 00 00 00 00 00
        mov dword ptr [esp + 0xcc], eax          // 0x00459F96: 89 84 24 cc 00 00 00
        call ext_006A6142                        // 0x00459F9D: e8 a0 c1 24 00
        push edi                                 // 0x00459FA2: 57
        push ebx                                 // 0x00459FA3: 53
        mov ecx, esi                             // 0x00459FA4: 8b ce
        call ext_00459920                        // 0x00459FA6: e8 75 f9 ff ff
        mov edi, dword ptr [esi + 0x18]          // 0x00459FAB: 8b 7e 18
        cmp edi, dword ptr [esi + 0x1c]          // 0x00459FAE: 3b 7e 1c
        jbe loc_00459FB9                         // 0x00459FB1: 76 06
        call dword ptr [mem_00925134]            // 0x00459FB3: ff 15 34 51 92 00
    loc_00459FB9:
        mov eax, dword ptr [esi + 0x1c]          // 0x00459FB9: 8b 46 1c
        cmp dword ptr [esi + 0x18], eax          // 0x00459FBC: 39 46 18
        mov dword ptr [esp + 0x54], edi          // 0x00459FBF: 89 7c 24 54
        mov dword ptr [esp + 0x1c], eax          // 0x00459FC3: 89 44 24 1c
        jbe loc_00459FD0                         // 0x00459FC7: 76 07
        call dword ptr [mem_00925134]            // 0x00459FC9: ff 15 34 51 92 00
        nop                                      // 0x00459FCF: 90
    loc_00459FD0:
        lea edi, [esi + 0x14]                    // 0x00459FD0: 8d 7e 14
        cmp edi, edi                             // 0x00459FD3: 3b ff
        je loc_00459FDD                          // 0x00459FD5: 74 06
        call dword ptr [mem_00925134]            // 0x00459FD7: ff 15 34 51 92 00
    loc_00459FDD:
        mov eax, dword ptr [esp + 0x54]          // 0x00459FDD: 8b 44 24 54
        cmp eax, dword ptr [esp + 0x1c]          // 0x00459FE1: 3b 44 24 1c
        je loc_0045A0CB                          // 0x00459FE5: 0f 84 e0 00 00 00
        cmp eax, dword ptr [edi + 0x8]           // 0x00459FEB: 3b 47 08
        jb loc_00459FFA                          // 0x00459FEE: 72 0a
        call dword ptr [mem_00925134]            // 0x00459FF0: ff 15 34 51 92 00
        mov eax, dword ptr [esp + 0x54]          // 0x00459FF6: 8b 44 24 54
    loc_00459FFA:
        mov ecx, dword ptr [esi + 0x24]          // 0x00459FFA: 8b 4e 24
        mov edi, dword ptr [eax]                 // 0x00459FFD: 8b 38
        fld qword ptr [ecx + 0xe8]               // 0x00459FFF: dd 81 e8 00 00 00
        fcomp qword ptr [edi + 0x58]             // 0x0045A005: dc 5f 58
        fnstsw ax                                // 0x0045A008: df e0
        test ah, 0x41                            // 0x0045A00A: f6 c4 41
        jp loc_0045A0AB                          // 0x0045A00D: 0f 8a 98 00 00 00
        fld qword ptr [ecx + 0xf0]               // 0x0045A013: dd 81 f0 00 00 00
        fcomp qword ptr [edi + 0x50]             // 0x0045A019: dc 5f 50
        fnstsw ax                                // 0x0045A01C: df e0
        test ah, 0x1                             // 0x0045A01E: f6 c4 01
        jne loc_0045A0AB                         // 0x0045A021: 0f 85 84 00 00 00
        mov ecx, edi                             // 0x0045A027: 8b cf
        call ext_00441020                        // 0x0045A029: e8 f2 6f fe ff
        mov dword ptr [esp + 0x34], eax          // 0x0045A02E: 89 44 24 34
        fild dword ptr [esp + 0x34]              // 0x0045A032: db 44 24 34
        mov eax, dword ptr [esi + 0x24]          // 0x0045A036: 8b 46 24
        fsub qword ptr [eax + 0x110]             // 0x0045A039: dc a0 10 01 00 00
        fmul qword ptr [eax + 0x120]             // 0x0045A03F: dc 88 20 01 00 00
        fadd qword ptr [eax + 0x118]             // 0x0045A045: dc 80 18 01 00 00
        fadd qword ptr [mem_0092BD70]            // 0x0045A04B: dc 05 70 bd 92 00
        fstp qword ptr [esp + 0x60]              // 0x0045A051: dd 5c 24 60
        fld qword ptr [esp + 0x60]               // 0x0045A055: dd 44 24 60
        fistp dword ptr [esp + 0x28]             // 0x0045A059: db 5c 24 28
        mov eax, dword ptr [esp + 0x28]          // 0x0045A05D: 8b 44 24 28
        mov ecx, dword ptr [esi + 0x24]          // 0x0045A061: 8b 4e 24
        push edi                                 // 0x0045A064: 57
        mov dword ptr [esp + 0xbc], eax          // 0x0045A065: 89 84 24 bc 00 00 00
        call ext_0043F2C0                        // 0x0045A06C: e8 4f 52 fe ff
        mov edx, dword ptr [edi]                 // 0x0045A071: 8b 17
        mov edx, dword ptr [edx + 0x4]           // 0x0045A073: 8b 52 04
        lea eax, [esp + 0xb8]                    // 0x0045A076: 8d 84 24 b8 00 00 00
        push eax                                 // 0x0045A07D: 50
        push ebx                                 // 0x0045A07E: 53
        lea ecx, [esp + 0xb0]                    // 0x0045A07F: 8d 8c 24 b0 00 00 00
        push ecx                                 // 0x0045A086: 51
        mov ecx, edi                             // 0x0045A087: 8b cf
        mov byte ptr [edi + 0x8a], 0x1           // 0x0045A089: c6 87 8a 00 00 00 01
        call edx                                 // 0x0045A090: ff d2
        mov ecx, dword ptr [eax]                 // 0x0045A092: 8b 08
        mov dword ptr [edi + 0x60], ecx          // 0x0045A094: 89 4f 60
        mov edx, dword ptr [eax + 0x4]           // 0x0045A097: 8b 50 04
        mov dword ptr [edi + 0x64], edx          // 0x0045A09A: 89 57 64
        mov ecx, dword ptr [eax + 0x8]           // 0x0045A09D: 8b 48 08
        mov dword ptr [edi + 0x68], ecx          // 0x0045A0A0: 89 4f 68
        mov edx, dword ptr [eax + 0xc]           // 0x0045A0A3: 8b 50 0c
        mov dword ptr [edi + 0x6c], edx          // 0x0045A0A6: 89 57 6c
        jmp loc_0045A0B2                         // 0x0045A0A9: eb 07
    loc_0045A0AB:
        mov byte ptr [edi + 0x8a], 0x0           // 0x0045A0AB: c6 87 8a 00 00 00 00
    loc_0045A0B2:
        mov eax, dword ptr [esp + 0x54]          // 0x0045A0B2: 8b 44 24 54
        cmp eax, dword ptr [esi + 0x1c]          // 0x0045A0B6: 3b 46 1c
        jb loc_0045A0C1                          // 0x0045A0B9: 72 06
        call dword ptr [mem_00925134]            // 0x0045A0BB: ff 15 34 51 92 00
    loc_0045A0C1:
        add dword ptr [esp + 0x54], 0x4          // 0x0045A0C1: 83 44 24 54 04
        jmp loc_00459FD0                         // 0x0045A0C6: e9 05 ff ff ff
    loc_0045A0CB:
        mov eax, dword ptr [esi + 0x24]          // 0x0045A0CB: 8b 46 24
        mov edi, dword ptr [ebx]                 // 0x0045A0CE: 8b 3b
        lea ecx, [eax + 0x1b4]                   // 0x0045A0D0: 8d 88 b4 01 00 00
        mov eax, dword ptr [eax + 0xd0]          // 0x0045A0D6: 8b 80 d0 00 00 00
        mov dword ptr [esp + 0x1c], ecx          // 0x0045A0DC: 89 4c 24 1c
        mov ecx, eax                             // 0x0045A0E0: 8b c8
        add edi, 0x38                            // 0x0045A0E2: 83 c7 38
        call ext_0066A180                        // 0x0045A0E5: e8 96 00 21 00
        mov edx, dword ptr [edi]                 // 0x0045A0EA: 8b 17
        push eax                                 // 0x0045A0EC: 50
        mov ecx, ebx                             // 0x0045A0ED: 8b cb
        call edx                                 // 0x0045A0EF: ff d2
        mov eax, dword ptr [esi + 0x24]          // 0x0045A0F1: 8b 46 24
        mov ecx, dword ptr [eax + 0xd0]          // 0x0045A0F4: 8b 88 d0 00 00 00
        push 0x0                                 // 0x0045A0FA: 6a 00
        push 0x1                                 // 0x0045A0FC: 6a 01
        call ext_0066A180                        // 0x0045A0FE: e8 7d 00 21 00
        mov ecx, dword ptr [esp + 0x24]          // 0x0045A103: 8b 4c 24 24
        push eax                                 // 0x0045A107: 50
        call ext_0041AEE0                        // 0x0045A108: e8 d3 0d fc ff
        mov dword ptr [esp + 0x1c], eax          // 0x0045A10D: 89 44 24 1c
        mov eax, dword ptr [esi + 0x24]          // 0x0045A111: 8b 46 24
        mov edx, dword ptr [eax + 0x20]          // 0x0045A114: 8b 50 20
        lea ecx, [esp + 0x68]                    // 0x0045A117: 8d 4c 24 68
        push ecx                                 // 0x0045A11B: 51
        push edx                                 // 0x0045A11C: 52
        call dword ptr [mem_0092566C]            // 0x0045A11D: ff 15 6c 56 92 00
        mov eax, dword ptr [ebp + 0xc]           // 0x0045A123: 8b 45 0c
        mov edi, dword ptr [eax + 0x8]           // 0x0045A126: 8b 78 08
        mov eax, dword ptr [eax + 0x4]           // 0x0045A129: 8b 40 04
        mov edx, dword ptr [esi + 0x28]          // 0x0045A12C: 8b 56 28
        lea ecx, [eax + 0x2]                     // 0x0045A12F: 8d 48 02
        mov dword ptr [esp + 0x5c], ecx          // 0x0045A132: 89 4c 24 5c
        mov ecx, dword ptr [esi + 0x24]          // 0x0045A136: 8b 4e 24
        mov ecx, dword ptr [ecx + 0xfc]          // 0x0045A139: 8b 89 fc 00 00 00
        lea eax, [eax + edx - 0x2]               // 0x0045A13F: 8d 44 10 fe
        mov dword ptr [esp + 0x48], ecx          // 0x0045A143: 89 4c 24 48
        mov ecx, dword ptr [esp + 0x1c]          // 0x0045A147: 8b 4c 24 1c
        lea edx, [esp + 0x48]                    // 0x0045A14B: 8d 54 24 48
        add ecx, 0x8                             // 0x0045A14F: 83 c1 08
        push edx                                 // 0x0045A152: 52
        mov dword ptr [esp + 0x24], edi          // 0x0045A153: 89 7c 24 24
        mov dword ptr [esp + 0x38], eax          // 0x0045A157: 89 44 24 38
        mov dword ptr [esp + 0x3c], edi          // 0x0045A15B: 89 7c 24 3c
        mov dword ptr [esp + 0x40], eax          // 0x0045A15F: 89 44 24 40
        mov dword ptr [esp + 0x50], eax          // 0x0045A163: 89 44 24 50
        mov dword ptr [esp + 0x20], ecx          // 0x0045A167: 89 4c 24 20
        call ext_00412690                        // 0x0045A16B: e8 20 85 fb ff
        mov ecx, dword ptr [esp + 0x1c]          // 0x0045A170: 8b 4c 24 1c
        lea eax, [esp + 0x38]                    // 0x0045A174: 8d 44 24 38
        push eax                                 // 0x0045A178: 50
        call ext_00412690                        // 0x0045A179: e8 12 85 fb ff
        mov ecx, dword ptr [esi + 0x24]          // 0x0045A17E: 8b 4e 24
        fld qword ptr [ecx + 0xf0]               // 0x0045A181: dd 81 f0 00 00 00
        lea edx, [esp + 0x140]                   // 0x0045A187: 8d 94 24 40 01 00 00
        push 0xa                                 // 0x0045A18E: 6a 0a
        push edx                                 // 0x0045A190: 52
        call ext_006A6DE0                        // 0x0045A191: e8 4a cc 24 00
        push eax                                 // 0x0045A196: 50
        call dword ptr [mem_00925230]            // 0x0045A197: ff 15 30 52 92 00
        lea eax, [esp + 0x14c]                   // 0x0045A19D: 8d 84 24 4c 01 00 00
        add esp, 0xc                             // 0x0045A1A4: 83 c4 0c
        lea ecx, [eax + 0x1]                     // 0x0045A1A7: 8d 48 01
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00 // 0x0045A1AA: 8d 9b 00 00 00 00
    loc_0045A1B0:
        mov dl, byte ptr [eax]                   // 0x0045A1B0: 8a 10
        add eax, 0x1                             // 0x0045A1B2: 83 c0 01
        test dl, dl                              // 0x0045A1B5: 84 d2
        jne loc_0045A1B0                         // 0x0045A1B7: 75 f7
        sub eax, ecx                             // 0x0045A1B9: 2b c1
        lea ecx, [esp + 0x40]                    // 0x0045A1BB: 8d 4c 24 40
        push ecx                                 // 0x0045A1BF: 51
        push eax                                 // 0x0045A1C0: 50
        mov eax, dword ptr [ebx + 0x8]           // 0x0045A1C1: 8b 43 08
        lea edx, [esp + 0x148]                   // 0x0045A1C4: 8d 94 24 48 01 00 00
        push edx                                 // 0x0045A1CB: 52
        push eax                                 // 0x0045A1CC: 50
        call dword ptr [mem_00924080]            // 0x0045A1CD: ff 15 80 40 92 00
        mov eax, dword ptr [esi + 0x24]          // 0x0045A1D3: 8b 46 24
        fld qword ptr [eax + 0xe8]               // 0x0045A1D6: dd 80 e8 00 00 00
        lea ecx, [edi + 2*edi]                   // 0x0045A1DC: 8d 0c 7f
        fst qword ptr [esp + 0x28]               // 0x0045A1DF: dd 54 24 28
        fld qword ptr [eax + 0xf0]               // 0x0045A1E3: dd 80 f0 00 00 00
        mov eax, 0x51eb851f                      // 0x0045A1E9: b8 1f 85 eb 51
        imul ecx                                 // 0x0045A1EE: f7 e9
        fst qword ptr [esp + 0x60]               // 0x0045A1F0: dd 54 24 60
        fild dword ptr [esp + 0x20]              // 0x0045A1F4: db 44 24 20
        fxch st(1)                               // 0x0045A1F8: d9 c9
        fsubrp st(2), st                         // 0x0045A1FA: de e2
        fdivrp st(1), st                         // 0x0045A1FC: de f1
        mov ecx, dword ptr [esp + 0x40]          // 0x0045A1FE: 8b 4c 24 40
        sar edx, 0x5                             // 0x0045A202: c1 fa 05
        mov eax, edx                             // 0x0045A205: 8b c2
        shr eax, 0x1f                            // 0x0045A207: c1 e8 1f
        add eax, edx                             // 0x0045A20A: 03 c2
        cmp ecx, eax                             // 0x0045A20C: 3b c8
        jl loc_0045A23F                          // 0x0045A20E: 7c 2f
        mov eax, 0x66666667                      // 0x0045A210: b8 67 66 66 66
        imul edi                                 // 0x0045A215: f7 ef
        sar edx, 0x2                             // 0x0045A217: c1 fa 02
        mov eax, edx                             // 0x0045A21A: 8b c2
        shr eax, 0x1f                            // 0x0045A21C: c1 e8 1f
        add eax, edx                             // 0x0045A21F: 03 c2
        cmp ecx, eax                             // 0x0045A221: 3b c8
        jg loc_0045A23F                          // 0x0045A223: 7f 1a
        lea edx, [4*edi]                         // 0x0045A225: 8d 14 bd 00 00 00 00
        mov eax, 0x10624dd3                      // 0x0045A22C: b8 d3 4d 62 10
        imul edx                                 // 0x0045A231: f7 ea
        sar edx, 0x6                             // 0x0045A233: c1 fa 06
        mov eax, edx                             // 0x0045A236: 8b c2
        shr eax, 0x1f                            // 0x0045A238: c1 e8 1f
        add eax, edx                             // 0x0045A23B: 03 c2
        add eax, ecx                             // 0x0045A23D: 03 c1
    loc_0045A23F:
        mov dword ptr [esp + 0x18], eax          // 0x0045A23F: 89 44 24 18
        fidivr dword ptr [esp + 0x18]            // 0x0045A243: da 7c 24 18
        mov edi, 0x5                             // 0x0045A247: bf 05 00 00 00
        mov dword ptr [esp + 0x18], 0xa          // 0x0045A24C: c7 44 24 18 0a 00 00 00
        mov dword ptr [esp + 0x58], edi          // 0x0045A254: 89 7c 24 58
        fst qword ptr [esp + 0x40]               // 0x0045A258: dd 54 24 40
        call ext_006A6E98                        // 0x0045A25C: e8 37 cc 24 00
        sub esp, 0x8                             // 0x0045A261: 83 ec 08
        fstp qword ptr [esp]                     // 0x0045A264: dd 1c 24
        call dword ptr [mem_0092520C]            // 0x0045A267: ff 15 0c 52 92 00
        fld qword ptr [mem_00996B98]             // 0x0045A26D: dd 05 98 6b 99 00
        add esp, 0x8                             // 0x0045A273: 83 c4 08
        fxch st(1)                               // 0x0045A276: d9 c9
        call ext_006A6EEC                        // 0x0045A278: e8 6f cc 24 00
        fst qword ptr [esp + 0x20]               // 0x0045A27D: dd 54 24 20
        fld st(0)                                // 0x0045A281: d9 c0
        fld qword ptr [mem_00996B98]             // 0x0045A283: dd 05 98 6b 99 00
        fdiv st(1), st                           // 0x0045A289: dc f9
        fxch st(1)                               // 0x0045A28B: d9 c9
        fst qword ptr [esp + 0x48]               // 0x0045A28D: dd 54 24 48
        fld st(2)                                // 0x0045A291: d9 c2
        fmul qword ptr [mem_00993828]            // 0x0045A293: dc 0d 28 38 99 00
        fld qword ptr [esp + 0x40]               // 0x0045A299: dd 44 24 40
        fcomp st(1)                              // 0x0045A29D: d8 d9
        fnstsw ax                                // 0x0045A29F: df e0
        test ah, 0x5                             // 0x0045A2A1: f6 c4 05
        jp loc_0045A2D7                          // 0x0045A2A4: 7a 31
        fstp st(3)                               // 0x0045A2A6: dd db
        mov dword ptr [esp + 0x18], edi          // 0x0045A2A8: 89 7c 24 18
        fxch st(2)                               // 0x0045A2AC: d9 ca
        mov dword ptr [esp + 0x58], 0x64         // 0x0045A2AE: c7 44 24 58 64 00 00 00
        fst qword ptr [esp + 0x20]               // 0x0045A2B6: dd 54 24 20
        fxch st(2)                               // 0x0045A2BA: d9 ca
    loc_0045A2BC:
        fld1                                     // 0x0045A2BC: d9 e8
        fcom st(1)                               // 0x0045A2BE: d8 d1
        fnstsw ax                                // 0x0045A2C0: df e0
        test ah, 0x41                            // 0x0045A2C2: f6 c4 41
        jne loc_0045A2DB                         // 0x0045A2C5: 75 14
        fstp st(1)                               // 0x0045A2C7: dd d9
        fst qword ptr [esp + 0x48]               // 0x0045A2C9: dd 54 24 48
        fxch st(2)                               // 0x0045A2CD: d9 ca
        fmulp st(1), st                          // 0x0045A2CF: de c9
        fstp qword ptr [esp + 0x20]              // 0x0045A2D1: dd 5c 24 20
        jmp loc_0045A2E1                         // 0x0045A2D5: eb 0a
    loc_0045A2D7:
        fstp st(0)                               // 0x0045A2D7: dd d8
        jmp loc_0045A2BC                         // 0x0045A2D9: eb e1
    loc_0045A2DB:
        fstp st(3)                               // 0x0045A2DB: dd db
        fstp st(2)                               // 0x0045A2DD: dd da
        fstp st(0)                               // 0x0045A2DF: dd d8
    loc_0045A2E1:
        mov edi, dword ptr [esp + 0x34]          // 0x0045A2E1: 8b 7c 24 34
        fdivr qword ptr [esp + 0x28]             // 0x0045A2E5: dc 7c 24 28
        mov ecx, edi                             // 0x0045A2E9: 8b cf
        sub ecx, dword ptr [esp + 0x5c]          // 0x0045A2EB: 2b 4c 24 5c
        sub esp, 0x8                             // 0x0045A2EF: 83 ec 08
        mov eax, ecx                             // 0x0045A2F2: 8b c1
        cdq                                      // 0x0045A2F4: 99
        sub eax, edx                             // 0x0045A2F5: 2b c2
        sar eax, 1                               // 0x0045A2F7: d1 f8
        mov dword ptr [esp + 0x80], eax          // 0x0045A2F9: 89 84 24 80 00 00 00
        mov eax, ecx                             // 0x0045A300: 8b c1
        cdq                                      // 0x0045A302: 99
        and edx, 0x3                             // 0x0045A303: 83 e2 03
        add eax, edx                             // 0x0045A306: 03 c2
        sar eax, 0x2                             // 0x0045A308: c1 f8 02
        mov dword ptr [esp + 0x58], eax          // 0x0045A30B: 89 44 24 58
        add ecx, ecx                             // 0x0045A30F: 03 c9
        add ecx, ecx                             // 0x0045A311: 03 c9
        mov eax, 0x66666667                      // 0x0045A313: b8 67 66 66 66
        imul ecx                                 // 0x0045A318: f7 e9
        fstp qword ptr [esp]                     // 0x0045A31A: dd 1c 24
        sar edx, 0x2                             // 0x0045A31D: c1 fa 02
        mov eax, edx                             // 0x0045A320: 8b c2
        shr eax, 0x1f                            // 0x0045A322: c1 e8 1f
        add eax, edx                             // 0x0045A325: 03 c2
        mov dword ptr [esp + 0x84], eax          // 0x0045A327: 89 84 24 84 00 00 00
        call dword ptr [mem_0092520C]            // 0x0045A32E: ff 15 0c 52 92 00
        fmul qword ptr [esp + 0x50]              // 0x0045A334: dc 4c 24 50
        fstp qword ptr [esp + 0x40]              // 0x0045A338: dd 5c 24 40
        fld qword ptr [esp + 0x30]               // 0x0045A33C: dd 44 24 30
        fdiv qword ptr [esp + 0x28]              // 0x0045A340: dc 74 24 28
        fstp qword ptr [esp]                     // 0x0045A344: dd 1c 24
        call dword ptr [mem_0092520C]            // 0x0045A347: ff 15 0c 52 92 00
        fmul qword ptr [esp + 0x28]              // 0x0045A34D: dc 4c 24 28
        fild dword ptr [esp + 0x20]              // 0x0045A351: db 44 24 20
        add esp, 0x8                             // 0x0045A355: 83 c4 08
        fxch st(1)                               // 0x0045A358: d9 c9
        fsub qword ptr [esp + 0x38]              // 0x0045A35A: dc 64 24 38
        fdiv qword ptr [esp + 0x48]              // 0x0045A35E: dc 74 24 48
        fsubp st(1), st                          // 0x0045A362: de e9
        fadd qword ptr [mem_0092BD70]            // 0x0045A364: dc 05 70 bd 92 00
        fstp qword ptr [esp + 0x40]              // 0x0045A36A: dd 5c 24 40
        fld qword ptr [esp + 0x40]               // 0x0045A36E: dd 44 24 40
        fistp dword ptr [esp + 0x28]             // 0x0045A372: db 5c 24 28
        mov eax, dword ptr [esp + 0x28]          // 0x0045A376: 8b 44 24 28
        test eax, eax                            // 0x0045A37A: 85 c0
        jne loc_0045A382                         // 0x0045A37C: 75 04
        mov eax, dword ptr [esp + 0x18]          // 0x0045A37E: 8b 44 24 18
    loc_0045A382:
        mov esi, dword ptr [esi + 0x24]          // 0x0045A382: 8b 76 24
        mov ecx, dword ptr [esi + 0xfc]          // 0x0045A385: 8b 8e fc 00 00 00
        fld qword ptr [esi + 0xf0]               // 0x0045A38B: dd 86 f0 00 00 00
        fsub qword ptr [esi + 0xe8]              // 0x0045A391: dc a6 e8 00 00 00
        mov edx, dword ptr [esp + 0x70]          // 0x0045A397: 8b 54 24 70
        sub edx, ecx                             // 0x0045A39B: 2b d1
        mov dword ptr [esp + 0x20], edx          // 0x0045A39D: 89 54 24 20
        fild dword ptr [esp + 0x20]              // 0x0045A3A1: db 44 24 20
        mov edx, dword ptr [esp + 0x70]          // 0x0045A3A5: 8b 54 24 70
        fld qword ptr [esi + 0xf0]               // 0x0045A3A9: dd 86 f0 00 00 00
        add ecx, edx                             // 0x0045A3AF: 03 ca
        fadd qword ptr [esi + 0xe8]              // 0x0045A3B1: dc 86 e8 00 00 00
        mov dword ptr [esp + 0x20], ecx          // 0x0045A3B7: 89 4c 24 20
        fld qword ptr [mem_00993828]             // 0x0045A3BB: dd 05 28 38 99 00
        lea ecx, [eax - 0x1]                     // 0x0045A3C1: 8d 48 ff
        fmul st(1), st                           // 0x0045A3C4: dc c9
        fxch st(1)                               // 0x0045A3C6: d9 c9
        fstp qword ptr [esp + 0x88]              // 0x0045A3C8: dd 9c 24 88 00 00 00
        fild dword ptr [esp + 0x20]              // 0x0045A3CF: db 44 24 20
        fmulp st(1), st                          // 0x0045A3D3: de c9
        fstp qword ptr [esp + 0xa0]              // 0x0045A3D5: dd 9c 24 a0 00 00 00
        fdivrp st(1), st                         // 0x0045A3DC: de f1
        fstp qword ptr [esp + 0x98]              // 0x0045A3DE: dd 9c 24 98 00 00 00
        fld qword ptr [esp + 0x60]               // 0x0045A3E5: dd 44 24 60
        fld qword ptr [esp + 0x38]               // 0x0045A3E9: dd 44 24 38
        fcom st(1)                               // 0x0045A3ED: d8 d1
        fnstsw ax                                // 0x0045A3EF: df e0
        fstp st(1)                               // 0x0045A3F1: dd d9
        test ah, 0x5                             // 0x0045A3F3: f6 c4 05
        jp loc_0045A53A                          // 0x0045A3F6: 0f 8a 3e 01 00 00
        jmp loc_0045A402                         // 0x0045A3FC: eb 04
    loc_0045A3FE:
        mov ecx, dword ptr [esp + 0x20]          // 0x0045A3FE: 8b 4c 24 20
    loc_0045A402:
        fsub qword ptr [esp + 0x88]              // 0x0045A402: dc a4 24 88 00 00 00
        add ecx, 0x1                             // 0x0045A409: 83 c1 01
        mov dword ptr [esp + 0x20], ecx          // 0x0045A40C: 89 4c 24 20
        fmul qword ptr [esp + 0x98]              // 0x0045A410: dc 8c 24 98 00 00 00
        fadd qword ptr [esp + 0xa0]              // 0x0045A417: dc 84 24 a0 00 00 00
        fadd qword ptr [mem_0092BD70]            // 0x0045A41E: dc 05 70 bd 92 00
        fstp qword ptr [esp + 0x90]              // 0x0045A424: dd 9c 24 90 00 00 00
        fld qword ptr [esp + 0x90]               // 0x0045A42B: dd 84 24 90 00 00 00
        fistp dword ptr [esp + 0x28]             // 0x0045A432: db 5c 24 28
        cmp ecx, dword ptr [esp + 0x58]          // 0x0045A436: 3b 4c 24 58
        mov esi, edi                             // 0x0045A43A: 8b f7
        jne loc_0045A447                         // 0x0045A43C: 75 09
        sub esi, dword ptr [esp + 0x7c]          // 0x0045A43E: 2b 74 24 7c
        jmp loc_0045A4E1                         // 0x0045A442: e9 9a 00 00 00
    loc_0045A447:
        cmp ecx, dword ptr [esp + 0x18]          // 0x0045A447: 3b 4c 24 18
        jne loc_0045A4DD                         // 0x0045A44B: 0f 85 8c 00 00 00
        fld qword ptr [esp + 0x38]               // 0x0045A451: dd 44 24 38
        sub esi, dword ptr [esp + 0x78]          // 0x0045A455: 2b 74 24 78
        lea eax, [esp + 0x140]                   // 0x0045A459: 8d 84 24 40 01 00 00
        push 0xa                                 // 0x0045A460: 6a 0a
        push eax                                 // 0x0045A462: 50
        call ext_006A6DE0                        // 0x0045A463: e8 78 c9 24 00
        push eax                                 // 0x0045A468: 50
        call dword ptr [mem_00925230]            // 0x0045A469: ff 15 30 52 92 00
        lea eax, [esp + 0x14c]                   // 0x0045A46F: 8d 84 24 4c 01 00 00
        add esp, 0xc                             // 0x0045A476: 83 c4 0c
        lea edi, [eax + 0x1]                     // 0x0045A479: 8d 78 01
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00 // 0x0045A47C: 8d 64 24 00
    loc_0045A480:
        mov cl, byte ptr [eax]                   // 0x0045A480: 8a 08
        add eax, 0x1                             // 0x0045A482: 83 c0 01
        test cl, cl                              // 0x0045A485: 84 c9
        jne loc_0045A480                         // 0x0045A487: 75 f7
        sub eax, edi                             // 0x0045A489: 2b c7
        lea ecx, [esp + 0xa8]                    // 0x0045A48B: 8d 8c 24 a8 00 00 00
        push ecx                                 // 0x0045A492: 51
        mov edi, eax                             // 0x0045A493: 8b f8
        mov eax, dword ptr [ebx + 0x8]           // 0x0045A495: 8b 43 08
        push edi                                 // 0x0045A498: 57
        lea edx, [esp + 0x148]                   // 0x0045A499: 8d 94 24 48 01 00 00
        push edx                                 // 0x0045A4A0: 52
        push eax                                 // 0x0045A4A1: 50
        call dword ptr [mem_00924080]            // 0x0045A4A2: ff 15 80 40 92 00
        mov eax, dword ptr [esp + 0xa8]          // 0x0045A4A8: 8b 84 24 a8 00 00 00
        mov edx, dword ptr [ebx]                 // 0x0045A4AF: 8b 13
        mov edx, dword ptr [edx + 0x64]          // 0x0045A4B1: 8b 52 64
        push edi                                 // 0x0045A4B4: 57
        lea ecx, [esp + 0x144]                   // 0x0045A4B5: 8d 8c 24 44 01 00 00
        push ecx                                 // 0x0045A4BC: 51
        mov ecx, dword ptr [esp + 0x64]          // 0x0045A4BD: 8b 4c 24 64
        push ecx                                 // 0x0045A4C1: 51
        mov ecx, dword ptr [esp + 0x34]          // 0x0045A4C2: 8b 4c 24 34
        sar eax, 1                               // 0x0045A4C6: d1 f8
        sub ecx, eax                             // 0x0045A4C8: 2b c8
        push ecx                                 // 0x0045A4CA: 51
        mov ecx, ebx                             // 0x0045A4CB: 8b cb
        call edx                                 // 0x0045A4CD: ff d2
        mov edi, dword ptr [esp + 0x34]          // 0x0045A4CF: 8b 7c 24 34
        mov dword ptr [esp + 0x20], 0x0          // 0x0045A4D3: c7 44 24 20 00 00 00 00
        jmp loc_0045A4E1                         // 0x0045A4DB: eb 04
    loc_0045A4DD:
        sub esi, dword ptr [esp + 0x50]          // 0x0045A4DD: 2b 74 24 50
    loc_0045A4E1:
        mov eax, dword ptr [esp + 0x28]          // 0x0045A4E1: 8b 44 24 28
        add esi, 0x2                             // 0x0045A4E5: 83 c6 02
        mov dword ptr [esp + 0x40], eax          // 0x0045A4E8: 89 44 24 40
        mov dword ptr [esp + 0x80], eax          // 0x0045A4EC: 89 84 24 80 00 00 00
        mov dword ptr [esp + 0x44], esi          // 0x0045A4F3: 89 74 24 44
        mov esi, dword ptr [esp + 0x1c]          // 0x0045A4F7: 8b 74 24 1c
        lea eax, [esp + 0x80]                    // 0x0045A4FB: 8d 84 24 80 00 00 00
        push eax                                 // 0x0045A502: 50
        mov ecx, esi                             // 0x0045A503: 8b ce
        mov dword ptr [esp + 0x88], edi          // 0x0045A505: 89 bc 24 88 00 00 00
        call ext_00412690                        // 0x0045A50C: e8 7f 81 fb ff
        lea ecx, [esp + 0x40]                    // 0x0045A511: 8d 4c 24 40
        push ecx                                 // 0x0045A515: 51
        mov ecx, esi                             // 0x0045A516: 8b ce
        call ext_00412690                        // 0x0045A518: e8 73 81 fb ff
        fld qword ptr [esp + 0x38]               // 0x0045A51D: dd 44 24 38
        fadd qword ptr [esp + 0x48]              // 0x0045A521: dc 44 24 48
        fst qword ptr [esp + 0x38]               // 0x0045A525: dd 54 24 38
        fld qword ptr [esp + 0x60]               // 0x0045A529: dd 44 24 60
        fcomp st(1)                              // 0x0045A52D: d8 d9
        fnstsw ax                                // 0x0045A52F: df e0
        test ah, 0x41                            // 0x0045A531: f6 c4 41
        je loc_0045A3FE                          // 0x0045A534: 0f 84 c4 fe ff ff
    loc_0045A53A:
        lea ecx, [esp + 0xb8]                    // 0x0045A53A: 8d 8c 24 b8 00 00 00
        fstp st(0)                               // 0x0045A541: dd d8
        mov dword ptr [esp + 0x27c], 0xffffffff  // 0x0045A543: c7 84 24 7c 02 00 00 ff ff ff ff
        call ext_0043B4D0                        // 0x0045A54E: e8 7d 0f fe ff
        mov ecx, dword ptr [esp + 0x274]         // 0x0045A553: 8b 8c 24 74 02 00 00
        pop edi                                  // 0x0045A55A: 5f
        pop esi                                  // 0x0045A55B: 5e
        mov dword ptr fs:[0x0], ecx              // 0x0045A55C: 64 89 0d 00 00 00 00
        pop ebx                                  // 0x0045A563: 5b
        mov esp, ebp                             // 0x0045A564: 8b e5
        pop ebp                                  // 0x0045A566: 5d
        ret 0x8                                  // 0x0045A567: c2 08 00
    }
}
