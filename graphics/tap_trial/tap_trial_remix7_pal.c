#include "global.h"
#include "graphics.h"

// [D_0891c964] Tap Trial (Pig Ver.) OBJ Palette
const Palette tap_trial_remix7_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x10E8A8),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0xA8A8A8),
        /* 03 */ TO_RGB555(0x6098A8),
        /* 04 */ TO_RGB555(0x70B0C8),
        /* 05 */ TO_RGB555(0x90E0F8),
        /* 06 */ TO_RGB555(0xA87008),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0xF87828),
        /* 11 */ TO_RGB555(0xF89898),
        /* 12 */ TO_RGB555(0xF80000),
        /* 13 */ TO_RGB555(0x58E0F8),
        /* 14 */ TO_RGB555(0xF8B0B0),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x10E8A8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0xF8B810),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x10E8A8),
        /* 01 */ TO_RGB555(0xF8B8E8),
        /* 02 */ TO_RGB555(0xE890E0),
        /* 03 */ TO_RGB555(0xB870B0),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0xF80000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_0891ca04] Tap Trial (Pig Ver.) BG Palette
const Palette tap_trial_remix7_bg_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0xF8B088),
        /* 05 */ TO_RGB555(0xF87808),
        /* 06 */ TO_RGB555(0xF80000),
        /* 07 */ TO_RGB555(0xA00000),
        /* 08 */ TO_RGB555(0xC85000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0xB87850),
        /* 11 */ TO_RGB555(0xA8A8A8),
        /* 12 */ TO_RGB555(0x707070),
        /* 13 */ TO_RGB555(0x40F8F8),
        /* 14 */ TO_RGB555(0x2890C0),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x783808),
        /* 10 */ TO_RGB555(0xA85808),
        /* 11 */ TO_RGB555(0x989898),
        /* 12 */ TO_RGB555(0x707070),
        /* 13 */ TO_RGB555(0x40F8F8),
        /* 14 */ TO_RGB555(0x2890C0),
        /* 15 */ TO_RGB555(0x186088)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xF8B830),
        /* 04 */ TO_RGB555(0xD89008),
        /* 05 */ TO_RGB555(0xB87000),
        /* 06 */ TO_RGB555(0xB07000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x989898),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xF8B018),
        /* 04 */ TO_RGB555(0xE0A018),
        /* 05 */ TO_RGB555(0xC08810),
        /* 06 */ TO_RGB555(0xA87810),
        /* 07 */ TO_RGB555(0x886008),
        /* 08 */ TO_RGB555(0x705008),
        /* 09 */ TO_RGB555(0x583800),
        /* 10 */ TO_RGB555(0xF8F8E0),
        /* 11 */ TO_RGB555(0xF8F8B0),
        /* 12 */ TO_RGB555(0xD0C890),
        /* 13 */ TO_RGB555(0x40F8F8),
        /* 14 */ TO_RGB555(0x38C0F8),
        /* 15 */ TO_RGB555(0x989898)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0x50F8F8),
        /* 04 */ TO_RGB555(0x50E8E8),
        /* 05 */ TO_RGB555(0x48D8D8),
        /* 06 */ TO_RGB555(0x40C8C8),
        /* 07 */ TO_RGB555(0x38B8B8),
        /* 08 */ TO_RGB555(0x30A8A8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xB88870),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0xE0F840),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0xF87088),
        /* 06 */ TO_RGB555(0xF80000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x10D020),
        /* 09 */ TO_RGB555(0x109818),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x40F8F8),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0x985008),
        /* 04 */ TO_RGB555(0xD87810),
        /* 05 */ TO_RGB555(0xF8B060),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x40B0B8),
        /* 11 */ TO_RGB555(0x50F0F8),
        /* 12 */ TO_RGB555(0x98F8F8),
        /* 13 */ TO_RGB555(0xF87070),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};