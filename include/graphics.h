#pragma once


  //  //  //  GBA GRAPHICS SPECS  //  //  //


#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 160
#define SCREEN_CENTER_X (SCREEN_WIDTH/2)
#define SCREEN_CENTER_Y (SCREEN_HEIGHT/2)

#define BG_TILESET_BASE(offset) (void *)(VRAMBase + offset)
#define BG_MAP_BASE(offset) (void *)(VRAMBase + offset)
#define OBJ_TILESET_BASE(offset) (void *)(VRAMBase + 0x10000 + offset)

enum BGLayersEnum {
    BG_LAYER_0,
    BG_LAYER_1,
    BG_LAYER_2,
    BG_LAYER_3
};


  //  //  //  OBJECT ANIMATION  //  //  //


typedef u16 AnimationCel;

struct Animation {
    const AnimationCel *cel;
    u8 duration;
};

struct StaticAnimation {
    AnimationCel *cel;
    u8 duration;
};

#define END_ANIMATION { NULL, 0 }


  //  //  //  PALETTE  //  //  //


typedef u16 Palette[16];
typedef u16 FontPalette[4];

#define TO_RGB555(x)                        \
      (((((x) >> 16) & 0xff) >> 3) << 0 )   \
    | (((((x) >> 8 ) & 0xff) >> 3) << 5 )   \
    | (((((x) >> 0 ) & 0xff) >> 3) << 10)


  //  //  //  FONT  //  //  //


// Read-Only Definition for a Font
struct FontDefinition {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 *font1Tiles;
    u8 *font1Map;
    u8 *font2Tiles;
    u8 *font2Map;
    u8 *font3Tiles;
    u8 *font3Map;
};

typedef void (*FontFunc)(u8 *, u8 *);

struct TextObject1 {
    u16 id; // mem_id
    const struct FontDefinition *data;
    u16 unk8;
    u8 length;
    u16 *unkC; // text..?
    u8 *unk10; // mapping..?
    FontFunc unk14; // function
    void *unk18; // some graphics sort of thing
};

struct TextObject2 {
    const struct FontDefinition *data;
    u16 unk4;
    u8 unk6;
    u8 length;
    u16 *unk8; // text?
    u8 *unkC; // mapping?
};


  //  //  //  GRAPHICS BUFFER  //  //  //


#define DISPCNT_DISPLAY_BG(x)   ((1 << 8) << (x))
#define BGCNT_PRIORITY(x)       ((x) << 0)
#define BGCNT_TILEDATA_ADDR(x)  ((x) << 2)
#define BGCNT_TILEMAP_ADDR(x)   ((x) << 8)
#define BGCNT_TILEMAP_SIZE(x)   ((x) << 14)
#define MOSAIC_BG_XSIZE(x)      ((x) << 0)
#define MOSAIC_BG_YSIZE(y)      ((y) << 4)
#define MOSAIC_SPR_XSIZE(x)     ((x) << 8)
#define MOSAIC_SPR_YSIZE(y)     ((y) << 12)
#define BLDMOD_BLEND_MODE(x)    ((x) << 6)
#define COLEV_SRC_PIXEL(x)      ((x) << 0)
#define COLEV_TGT_PIXEL(x)      ((x) << 8)

extern struct GraphicsBuffer {
    u16 DISPCNT;    // LCD Control
    u16 unk2;
    u16 BG_CNT[4]; // BG Registers (IORAMBase + 0x8)
    struct Vector2 BG_OFS[4]; // BG Horizontal & Vertical Offsets
    u32 unk1C[4];
    u32 unk2C[4];
    u16 WIN0H; // Window Registers (IORAMBase + 0x40)
    u16 WIN1H;
    u16 WIN0V;
    u16 WIN1V;
    u16 WININ;
    u16 WINOUT;
    u16 MOSAIC;
    u16 unk4A;
    u16 BLDMOD;
    u16 COLEV;
    u16 COLEY;
    u16 unk52;
    u16 bgPalette[16][16];   // BG Palette Buffer, 03004b64, 0x54
    u16 objPalette[16][16];  // OBJ Palette Buffer, 03004d64, 0x254
    u32 oam[0x100];   // OAM Buffer, 03004f64
    u16 updateDisplay:1;
    u16 unk854_1:1;
    u16 unk854_2:1;
    u16 unk854_3:1;
    u16 unk854_4:12;
    void (*modifyPalette)(Palette *);
} D_03004b10; // gGfxBuffer

#define BG_PALETTE_BUFFER(p) ((u16 *)D_03004b10.bgPalette) + ((u32)((p)*0x10))
#define OBJ_PALETTE_BUFFER(p) ((u16 *)D_03004b10.objPalette) + ((u32)((p)*0x10))


  //  //  //  SPRITE HANDLER (LIBRARY)  //  //  //


extern struct SpriteHandler *D_03005380; // gSpriteHandler

struct SpritePlaybackData {
    const struct Animation *anim;
    s8 unk4;
    u8 unk5;
    u8 unk6;
};


  //  //  //  SCENE GRAPHICS  //  //  //


struct Huffman {
    const u16 *data;
    u16 size;
    u16 count;
    const u32 *window1;
    const u32 *window2;
};

struct CompressedGraphics {
    union {
        const struct Huffman *huffman;
        const u16 *raw;
    } data;
    const u8 *rleData;
    u16 rleSize;
    u16 rleOffset;
    u8 doubleCompressed;
};

#define END_OF_BUFFERED_TEXTURES_LIST NULL


typedef void (*GfxTableSrcFunc)(void *dest);

struct GraphicsTable {
    const void *src;
    void *dest;
    s32 size;
};

#define COMPRESSED_GFX_SOURCE -1
#define FUNCTION_GFX_SOURCE -2
#define END_OF_GRAPHICS_TABLE { NULL, NULL, 0 }