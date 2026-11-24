// Lifted C++ translation unit: lifted/classes/VideoGeneratorDialog.cpp
#include "lift_compat.h"

// [0x004636E0]
namespace lift_004636E0 {
// @name VideoGeneratorDialog::setProgressRange
// @class VideoGeneratorDialog
// @summary Sets the progress bar range on m_hProgressWnd via PBM_SETRANGE
// @field VideoGeneratorDialog +0x120 uint32_t m_hProgressWnd


extern uint32_t mem_00925694;

using SendMessageA_t = uint32_t(__stdcall*)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);

uint32_t __thiscall fn_004636E0(uint8_t* self, uint16_t minVal, uint16_t maxVal) {
    uint32_t lParam = (static_cast<uint32_t>(maxVal) << 16) | static_cast<uint32_t>(minVal);
    uint32_t hWnd = *reinterpret_cast<uint32_t*>(self + 0x120);
    auto sendMessage = reinterpret_cast<SendMessageA_t>(mem_00925694);
    return sendMessage(hWnd, 0x401, 0, lParam);
}
} // namespace lift_004636E0
