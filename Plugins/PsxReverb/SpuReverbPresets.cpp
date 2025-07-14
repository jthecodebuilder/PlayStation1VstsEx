#include "SpuReverbPresets.h"

BEGIN_NAMESPACE(SpuReverbPresets)

/*
The format between SPU and SPU2 reverb presets is exactly the same in content.
LIBSD even uses the same preset data from LIBSPU.
The only thing different we're seeing between the data and what's written to the registers,
is that they're multiplying time-sensitive values by 4x so they decay at a similar rate.
And I have no idea why, but pre-dividing the original reflectionVolume1 by 4 seems to result in a similar level of dampening as real hardware.
However, for opimization, the presets corresponding to their SPU2 counterparts will be hardcoded like usual.
*/

//TODO: Reimplement original SPU presets

const SpuReverbDef gReverbDefs[SPU_REV_MODE_MAX] = {
    // SPU_REV_MODE_OFF
    {
        0x0,        // apfOffset1
        0x0,        // apfOffset2
        0x0,        // reflectionVolume1
        0x0,        // combVolume1
        0x0,        // combVolume2
        0x0,        // combVolume3
        0x0,        // combVolume4
        0x0,        // reflectionVolume2
        0x0,        // apfVolume1
        0x0,        // apfVolume2
        0x0,        // sameSideRefractAddr1Left
        0x0,        // sameSideRefractAddr1Right
        0x0,        // combAddr1Left
        0x0,        // combAddr1Right
        0x0,        // combAddr2Left
        0x0,        // combAddr2Right
        0x0,        // sameSideRefractAddr2Left
        0x0,        // sameSideRefractAddr2Right
        0x0,        // diffSideReflectAddr1Left
        0x0,        // diffSideReflectAddr1Right
        0x0,        // combAddr3Left
        0x0,        // combAddr3Right
        0x0,        // combAddr4Left
        0x0,        // combAddr4Right
        0x0,        // diffSideReflectAddr2Left
        0x0,        // diffSideReflectAddr2Right
        0x0,        // apfAddr1Left
        0x0,        // apfAddr1Right
        0x0,        // apfAddr2Left
        0x0,        // apfAddr2Right
        0x0,        // inputVolLeft
        0x0,        // inputVolRight
    },
    // SPU_REV_MODE_ROOM
    {
        0x1F4,       // apfOffset1
        0x16C,       // apfOffset2
        0x1B60,     // reflectionVolume1
        0x54B8,     // combVolume1
        0xBED0,     // combVolume2
        0x0,        // combVolume3
        0x0,        // combVolume4
        0xBA80,     // reflectionVolume2
        0x5800,     // apfVolume1
        0x5300,     // apfVolume2
        0x1358,      // sameSideRefractAddr1Left
        0xCCC,      // sameSideRefractAddr1Right
        0xFC0,      // combAddr1Left
        0x89C,      // combAddr1Right
        0xDD0,      // combAddr2Left
        0x7BC,      // combAddr2Right
        0xCD0,      // sameSideRefractAddr2Left
        0x6D4,      // sameSideRefractAddr2Right
        0x0,        // diffSideReflectAddr1Left
        0x0,        // diffSideReflectAddr1Right
        0x0,        // combAddr3Left
        0x0,        // combAddr3Right
        0x0,        // combAddr4Left
        0x0,        // combAddr4Right
        0x0,        // diffSideReflectAddr2Left
        0x0,        // diffSideReflectAddr2Right
        0x6D0,      // apfAddr1Left
        0x4D8,      // apfAddr1Right
        0x2E0,       // apfAddr2Left
        0x170,       // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_STUDIO_A
    {
        0xCC,       // apfOffset1
        0x94,       // apfOffset2
        0x1C3C,     // reflectionVolume1
        0x4FA8,     // combVolume1
        0xBCE0,     // combVolume2
        0x4410,     // combVolume3
        0xC0F0,     // combVolume4
        0x9C00,     // reflectionVolume2
        0x5280,     // apfVolume1
        0x4EC0,     // apfVolume2
        0xF90,      // sameSideRefractAddr1Left
        0xC6C,      // sameSideRefractAddr1Right
        0xE90,      // combAddr1Left
        0xABC,      // combAddr1Right
        0xDC8,      // combAddr2Left
        0x998,      // combAddr2Right
        0xC70,      // sameSideRefractAddr2Left
        0x974,      // sameSideRefractAddr2Right
        0x970,      // diffSideReflectAddr1Left
        0x638,      // diffSideReflectAddr1Right
        0x8BC,      // combAddr3Left
        0x4D4,      // combAddr3Right
        0x748,      // combAddr4Left
        0x2DC,       // combAddr4Right
        0x63C,      // diffSideReflectAddr2Left
        0x2D4,       // diffSideReflectAddr2Right
        0x2D0,       // apfAddr1Left
        0x200,       // apfAddr1Right
        0x130,       // apfAddr2Left
        0x98,       // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_STUDIO_B
    {
        0x2C4,       // apfOffset1
        0x1FC,       // apfOffset2
        0x1C3C,     // reflectionVolume1
        0x4FA8,     // combVolume1
        0xBCE0,     // combVolume2
        0x4510,     // combVolume3
        0xBEF0,     // combVolume4
        0xB4C0,     // reflectionVolume2
        0x5280,     // apfVolume1
        0x4EC0,     // apfVolume2
        0x2410,      // sameSideRefractAddr1Left
        0x1DAC,      // sameSideRefractAddr1Right
        0x2090,      // combAddr1Left
        0x197C,      // combAddr1Right
        0x1E88,      // combAddr2Left
        0x1858,      // combAddr2Right
        0x1DB0,      // sameSideRefractAddr2Left
        0x17B4,      // sameSideRefractAddr2Right
        0x17B0,      // diffSideReflectAddr1Left
        0x10B8,      // diffSideReflectAddr1Right
        0x143C,      // combAddr3Left
        0xC14,      // combAddr3Right
        0x1188,      // combAddr4Left
        0xADC,      // combAddr4Right
        0x10BC,      // diffSideReflectAddr2Left
        0x994,      // diffSideReflectAddr2Right
        0x990,      // apfAddr1Left
        0x6C8,      // apfAddr1Right
        0x400,      // apfAddr2Left
        0x200,       // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_STUDIO_C
    {
        0x38C,       // apfOffset1
        0x2A4,       // apfOffset2
        0x1BD8,     // reflectionVolume1
        0x4FA8,     // combVolume1
        0xBCE0,     // combVolume2
        0x4510,     // combVolume3
        0xBEF0,     // combVolume4
        0xA680,     // reflectionVolume2
        0x5680,     // apfVolume1
        0x52C0,     // apfVolume2
        0x37EC,      // sameSideRefractAddr1Left
        0x2D60,      // sameSideRefractAddr1Right
        0x3424,      // combAddr1Left
        0x28F0,      // combAddr1Right
        0x2F64,      // combAddr2Left
        0x25CC,      // combAddr2Right
        0x2D64,      // sameSideRefractAddr2Left
        0x2368,      // sameSideRefractAddr2Right
        0x2364,      // diffSideReflectAddr1Left
        0x17A4,      // diffSideReflectAddr1Right
        0x1FB0,      // combAddr3Left
        0x12C0,      // combAddr3Right
        0x1BBC,      // combAddr4Left
        0xF48,      // combAddr4Right
        0x17A8,      // diffSideReflectAddr2Left
        0xC74,      // diffSideReflectAddr2Right
        0xC70,      // apfAddr1Left
        0x8E0,      // apfAddr1Right
        0x550,      // apfAddr2Left
        0x2A8,       // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_HALL
    {
        0x694,      // apfOffset1
        0x4E4,      // apfOffset2
        0x1800,     // reflectionVolume1
        0x5000,     // combVolume1
        0x4C00,     // combVolume2
        0xB800,     // combVolume3
        0xBC00,     // combVolume4
        0xC000,     // reflectionVolume2
        0x6000,     // apfVolume1
        0x5C00,     // apfVolume2
        0x56E8,     // sameSideRefractAddr1Left
        0x46EC,     // sameSideRefractAddr1Right
        0x5308,     // combAddr1Left
        0x42F4,     // combAddr1Right
        0x46F0,     // combAddr2Left
        0x3704,      // combAddr2Right
        0x4700,     // sameSideRefractAddr2Left
        0x370C,      // sameSideRefractAddr2Right
        0x3700,      // diffSideReflectAddr1Left
        0x2704,      // diffSideReflectAddr1Right
        0x2F10,      // combAddr3Left
        0x1F04,      // combAddr3Right
        0x2800,      // combAddr4Left
        0x1B34,      // combAddr4Right
        0x2708,      // diffSideReflectAddr2Left
        0x1704,      // diffSideReflectAddr2Right
        0x1700,      // apfAddr1Left
        0x1068,      // apfAddr1Right
        0x9D0,      // apfAddr2Left
        0x4E8,      // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_SPACE
    {
        0xCF4,      // apfOffset1
        0x8C4,      // apfOffset2
        0x1F80,     // reflectionVolume1
        0x5000,     // combVolume1
        0xB400,     // combVolume2
        0xB000,     // combVolume3
        0x4C00,     // combVolume4
        0xB000,     // reflectionVolume2
        0x6000,     // apfVolume1
        0x5400,     // apfVolume2
        0x7B58,     // sameSideRefractAddr1Left
        0x68C4,     // sameSideRefractAddr1Right
        0x7450,     // combAddr1Left
        0x60EC,     // combAddr1Right
        0x6F08,     // combAddr2Left
        0x5AC8,     // combAddr2Right
        0x68C8,     // sameSideRefractAddr2Left
        0x57BC,     // sameSideRefractAddr2Right
        0x57B8,     // diffSideReflectAddr1Left
        0x4154,     // diffSideReflectAddr1Right
        0x4CD0,     // combAddr3Left
        0x3CB4,      // combAddr3Right
        0x47D8,     // combAddr4Left
        0x3174,      // combAddr4Right
        0x4158,     // diffSideReflectAddr2Left
        0x2B84,      // diffSideReflectAddr2Right
        0x2B80,      // apfAddr1Left
        0x1E88,      // apfAddr1Right
        0x1190,      // apfAddr2Left
        0x8C8,      // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_ECHO
    {
        0x4,        // apfOffset1
        0x4,        // apfOffset2
        0x1FFF,     // reflectionVolume1
        0x7FFF,     // combVolume1
        0x0,        // combVolume2
        0x0,        // combVolume3
        0x0,        // combVolume4
        0x8100,     // reflectionVolume2
        0x0,        // apfVolume1
        0x0,        // apfVolume2
        0x7FFC,     // sameSideRefractAddr1Left
        0x3FFC,      // sameSideRefractAddr1Right
        0x4014,     // combAddr1Left
        0x14,        // combAddr1Right
        0x0,        // combAddr2Left
        0x0,        // combAddr2Right
        0x4014,     // sameSideRefractAddr2Left
        0x14,        // sameSideRefractAddr2Right
        0x0,        // diffSideReflectAddr1Left
        0x0,        // diffSideReflectAddr1Right
        0x0,        // combAddr3Left
        0x0,        // combAddr3Right
        0x0,        // combAddr4Left
        0x0,        // combAddr4Right
        0x0,        // diffSideReflectAddr2Left
        0x0,        // diffSideReflectAddr2Right
        0x4010,     // apfAddr1Left
        0x4008,     // apfAddr1Right
        0x10,        // apfAddr2Left
        0x8,        // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_DELAY
    {
        0x4,        // apfOffset1
        0x4,        // apfOffset2
        0x1FFF,     // reflectionVolume1
        0x7FFF,     // combVolume1
        0x0,        // combVolume2
        0x0,        // combVolume3
        0x0,        // combVolume4
        0x0,        // reflectionVolume2
        0x0,        // apfVolume1
        0x0,        // apfVolume2
        0x7FFC,     // sameSideRefractAddr1Left
        0x3FFC,      // sameSideRefractAddr1Right
        0x4014,     // combAddr1Left
        0x14,        // combAddr1Right
        0x0,        // combAddr2Left
        0x0,        // combAddr2Right
        0x4014,     // sameSideRefractAddr2Left
        0x14,        // sameSideRefractAddr2Right
        0x0,        // diffSideReflectAddr1Left
        0x0,        // diffSideReflectAddr1Right
        0x0,        // combAddr3Left
        0x0,        // combAddr3Right
        0x0,        // combAddr4Left
        0x0,        // combAddr4Right
        0x0,        // diffSideReflectAddr2Left
        0x0,        // diffSideReflectAddr2Right
        0x4010,     // apfAddr1Left
        0x4008,     // apfAddr1Right
        0x10,        // apfAddr2Left
        0x8,        // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    },
    // SPU_REV_MODE_PIPE
    {
        0x5C,       // apfOffset1
        0x4C,       // apfOffset2
        0x1C3C,     // reflectionVolume1
        0x4FA8,     // combVolume1
        0xBCE0,     // combVolume2
        0x4510,     // combVolume3
        0xBEF0,     // combVolume4
        0x8500,     // reflectionVolume2
        0x5F80,     // apfVolume1
        0x54C0,     // apfVolume2
        0xDC4,      // sameSideRefractAddr1Left
        0xABC,      // sameSideRefractAddr1Right
        0xB94,      // combAddr1Left
        0x77C,      // combAddr1Right
        0xAC0,      // combAddr2Left
        0x75C,      // combAddr2Right
        0xD60,      // sameSideRefractAddr2Left
        0x9A8,      // sameSideRefractAddr2Right
        0x758,      // diffSideReflectAddr1Left
        0x478,      // diffSideReflectAddr1Right
        0x4B4,      // combAddr3Left
        0x2C4,       // combAddr3Right
        0x47C,      // combAddr4Left
        0x164,       // combAddr4Right
        0xB60,      // diffSideReflectAddr2Left
        0x38C,       // diffSideReflectAddr2Right
        0x160,       // apfAddr1Left
        0x100,       // apfAddr1Right
        0xA0,       // apfAddr2Left
        0x50,       // apfAddr2Right
        0x8000,     // inputVolLeft
        0x8000,     // inputVolRight
    }
};

// Same sort of thing here, 65536 - ((65536 - LIBSPU Base) * 4) = SPU2 Base
const uint16_t gReverbWorkAreaBaseAddrs[SPU_REV_MODE_MAX] = {
    0xFFFE,     // SPU_REV_MODE_OFF
    0xECA3,     // SPU_REV_MODE_ROOM
    0xF063,     // SPU_REV_MODE_STUDIO_A
    0xDBE3,     // SPU_REV_MODE_STUDIO_B
    0xC813,     // SPU_REV_MODE_STUDIO_C
    0xA913,     // SPU_REV_MODE_HALL
    0x84A3,     // SPU_REV_MODE_SPACE
    0x3FE3,     // SPU_REV_MODE_ECHO
    0x3FE3,     // SPU_REV_MODE_DELAY
    0xE203      // SPU_REV_MODE_PIPE
};

extern const char* const gReverbModeNames[SPU_REV_MODE_MAX] = {
    "Off",
    "Room",
    "Studio A",
    "Studio B",
    "Studio C",
    "Hall",
    "Space",
    "Echo",
    "Delay",
    "Pipe"
};

END_NAMESPACE(SpuReverbPresets)
