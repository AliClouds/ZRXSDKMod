

#pragma warning( disable: 4049 )

#ifdef __cplusplus
extern "C"{
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ZXAUTOLib,0x478D9CB7,0x0EB9,0x4C81,0x83,0x0F,0xED,0xD1,0x24,0xD0,0x8C,0xDA);

MIDL_DEFINE_GUID(IID, IID_IZcadObject,0x00871D57,0xD0B0,0x4249,0xAE,0xF6,0x07,0x0A,0x3B,0xEE,0x9D,0x4A);

MIDL_DEFINE_GUID(IID, IID_IZcadDictionary,0x9443FAC0,0xDDF1,0x483C,0x80,0x6C,0x3C,0xE9,0x98,0xA1,0x04,0xEF);

MIDL_DEFINE_GUID(IID, IID_IZcadEntity,0xF42665FA,0xAA30,0x4D9C,0xB1,0x6F,0x76,0xFE,0xA4,0xEF,0x97,0xDE);

MIDL_DEFINE_GUID(IID, IID_IZcadBlock,0xADE50C33,0x3408,0x49BF,0xA5,0x04,0x91,0x0A,0x27,0x1E,0x24,0x74);

MIDL_DEFINE_GUID(IID, IID_IZcadDatabase,0xFB7FCB07,0x0CD4,0x4AB2,0xB5,0xB0,0x0C,0x95,0xF2,0x16,0x10,0x76);

MIDL_DEFINE_GUID(IID, IID_IZcadSectionTypeSettings,0x62BC10FC,0xF2E3,0x4132,0xB2,0xCA,0x75,0x3C,0x79,0x3F,0x1E,0x54);

MIDL_DEFINE_GUID(IID, IID_IZcadSectionTypeSettings2,0xB51F3969,0xDB28,0x49AA,0x81,0x6A,0x41,0xF9,0xFF,0xCE,0x4F,0xFB);

MIDL_DEFINE_GUID(IID, IID_IZcadHyperlink,0xC72D55DF,0x650D,0x4F00,0x8B,0x84,0xD6,0x65,0x0B,0xDE,0xDA,0xE9);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadHyperlink,0x63627DE3,0x9D2C,0x4CF9,0xBA,0x61,0x69,0x5D,0x7E,0xD3,0xE1,0x61);

MIDL_DEFINE_GUID(IID, IID_IZcadDynamicBlockReferenceProperty,0x94D6A068,0xA4BD,0x40E7,0xAF,0x87,0x07,0x45,0x15,0xD8,0x14,0x07);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDynamicBlockReferenceProperty,0x1FB68AC9,0x434C,0x46C2,0x91,0x9D,0x7D,0x70,0xA4,0xFB,0x3D,0x4E);

MIDL_DEFINE_GUID(IID, IID_IZcadZcCmColor,0x5C93292F,0xE1E3,0x4F61,0x98,0x42,0x57,0xA7,0x72,0xD3,0x83,0x39);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadZcCmColor,0x7A2750DF,0x2766,0x43D5,0x8E,0x3F,0x1B,0xCB,0xA8,0x4F,0x60,0x38);

MIDL_DEFINE_GUID(IID, IID_IZcadObjectEvents,0x8441472F,0x2383,0x4D72,0xAC,0xCD,0x1B,0x55,0xEA,0x38,0xDD,0x0D);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadObject,0x41FF1B3D,0x35DF,0x43A9,0x8F,0xA5,0xE1,0x98,0x52,0x1B,0x03,0x70);

MIDL_DEFINE_GUID(IID, IID_IZcadXRecord,0xCC45AC3E,0x4E5E,0x4F4E,0xA6,0x63,0xD9,0xBC,0x58,0x26,0x93,0x6E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadXRecord,0xC3F5B8AE,0x752C,0x4D65,0x8C,0xF2,0x90,0x7B,0x42,0x78,0xD1,0x2F);

MIDL_DEFINE_GUID(IID, IID_IZcadSortentsTable,0x54AF3676,0x9F3C,0x4C7F,0x87,0x12,0x00,0xDB,0x43,0x1C,0x8A,0x0A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSortentsTable,0xA6BA812E,0xB776,0x4F73,0x8E,0x2C,0xC4,0x45,0xEA,0x3F,0xC2,0xC8);

MIDL_DEFINE_GUID(IID, IID_IZcadDimStyle,0xF90564D2,0x7D55,0x4E4D,0xB0,0x1E,0x78,0x68,0x1F,0x6B,0xBC,0x29);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimStyle,0xE00E7853,0xEB6A,0x4006,0xAE,0x85,0x0A,0x14,0x3E,0x4B,0xA2,0x61);

MIDL_DEFINE_GUID(IID, IID_IZcadLayer,0x92C0895F,0x2902,0x4A9C,0xB3,0xFB,0xE8,0x5E,0xC2,0x7F,0xF4,0x18);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLayer,0x1D9B34EA,0xD990,0x414C,0x8B,0xC1,0x35,0x94,0xC0,0xE3,0xF7,0xF7);

MIDL_DEFINE_GUID(IID, IID_IZcadLineType,0xB94348F2,0x8635,0x47E8,0xB5,0x0A,0x08,0x87,0x41,0x7E,0x1E,0x92);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLineType,0x50E40618,0x4F5F,0x48DA,0x85,0xE1,0x72,0x5F,0x43,0x16,0x91,0x71);

MIDL_DEFINE_GUID(IID, IID_IZcadMaterial,0x7FACF69E,0xA791,0x447F,0xBF,0x8A,0xAD,0x1A,0x1A,0xAD,0x43,0xFB);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMaterial,0x31FE96B1,0x13DB,0x43F8,0xB5,0x2E,0x41,0xE4,0x31,0xDC,0xEA,0x15);

MIDL_DEFINE_GUID(IID, IID_IZcadRegisteredApplication,0x9C67BA52,0x900E,0x4B8F,0x9A,0x0C,0x42,0x38,0xA4,0x77,0x14,0x80);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRegisteredApplication,0x549B6B38,0xCC93,0x4B3A,0x90,0x51,0x38,0x5E,0x57,0x96,0x48,0x11);

MIDL_DEFINE_GUID(IID, IID_IZcadTextStyle,0x774DE363,0x8137,0x4074,0xAB,0x9D,0x05,0x72,0x07,0x58,0x8B,0xF3);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTextStyle,0x8615E9A9,0x7A5F,0x4B3B,0xB4,0x71,0x00,0x04,0xCF,0xAC,0x22,0x65);

MIDL_DEFINE_GUID(IID, IID_IZcadUCS,0xECA2EB4B,0xF1A4,0x441D,0x89,0x45,0xD8,0xA3,0x09,0x6D,0x08,0xAE);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadUCS,0x27842D94,0x1447,0x48A8,0x9D,0x82,0xC4,0x0D,0xF5,0x0E,0x26,0x34);

MIDL_DEFINE_GUID(IID, IID_IZcadView,0x4018F648,0xA5AC,0x45BC,0x8D,0xBF,0x61,0x64,0x00,0x55,0x77,0xCF);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadView,0xBB48B8D2,0xE618,0x412D,0xA5,0xFE,0x49,0xC5,0x49,0x42,0x4F,0x7E);

MIDL_DEFINE_GUID(IID, IID_IZcadViewport,0xA09F3EE1,0xFE5C,0x4C85,0xA8,0xFA,0x71,0xA6,0xD6,0x1B,0x9B,0x0A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadViewport,0xAEB14F29,0xFD64,0x4C8A,0x9B,0x97,0x00,0x1A,0x49,0xD6,0x5E,0xD1);

MIDL_DEFINE_GUID(IID, IID_IZcadGroup,0x7AB99E34,0x8EE3,0x4716,0xB3,0xBF,0x9B,0x06,0x23,0xE7,0xB2,0x83);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadGroup,0x0AB0F060,0xB0D4,0x460B,0xBB,0x1A,0xD9,0x04,0x1A,0x05,0x17,0x62);

MIDL_DEFINE_GUID(IID, IID_IZcadPlotConfiguration,0xCAD74697,0x230E,0x4022,0xAC,0x5E,0x82,0x90,0x19,0xFD,0x08,0x9D);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPlotConfiguration,0xC15303DC,0x0EF6,0x4D2D,0xA5,0xDF,0x5F,0xF2,0x15,0x89,0xC0,0xBC);

MIDL_DEFINE_GUID(IID, IID_IZcadLayout,0x15DD1D69,0x851C,0x4906,0x99,0x3C,0x08,0xB5,0x3D,0xC3,0x8A,0x72);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLayout,0x087AFAC4,0x8E34,0x4C57,0xA5,0xA9,0x35,0x68,0x75,0x02,0x08,0xDC);

MIDL_DEFINE_GUID(IID, IID_IZcadIdPair,0x64B81284,0x9B25,0x45A2,0x8B,0xDE,0xBF,0x24,0x58,0xE3,0x7F,0xE7);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadIdPair,0xCD35BAD3,0x57CE,0x45F1,0x8C,0xEB,0x7D,0xA3,0x02,0xFA,0x68,0x2B);

MIDL_DEFINE_GUID(IID, IID_IZcadTableStyle,0x242F3029,0x9B29,0x4436,0x9E,0x2D,0xDC,0xA6,0x3A,0xB5,0xF7,0x4E);

MIDL_DEFINE_GUID(IID, IID_IZcadTableStyle2,0xD835588D,0xBD58,0x4F38,0x9D,0xC4,0x7E,0xB8,0xDD,0x2C,0x52,0x74);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTableStyle,0xE7B4185F,0xE8E9,0x412C,0xA6,0x50,0x8D,0xFE,0x0C,0x24,0xE1,0xCF);

MIDL_DEFINE_GUID(IID, IID_IZcadSectionSettings,0x704CCDB8,0x051F,0x49FC,0x98,0x46,0x19,0x4B,0x15,0xFA,0x16,0x20);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSectionSettings,0x650AB93A,0x46DC,0x437C,0xB2,0x32,0xBD,0x08,0x49,0x7F,0xFE,0x60);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSectionTypeSettings,0x3309DC7D,0x9422,0x4A90,0xAE,0x3B,0x24,0x65,0x0E,0x3D,0xDF,0xA7);

MIDL_DEFINE_GUID(IID, IID_IZcadMLeaderStyle,0x3FD3ABBD,0x4943,0x4DC1,0xBD,0x50,0x35,0xCA,0xBA,0x81,0x45,0xE5);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMLeaderStyle,0xF7C554E3,0xF8D1,0x4659,0x9A,0x6C,0x3D,0x12,0x63,0xCF,0xC5,0x8B);

MIDL_DEFINE_GUID(IID, IID_IZcadHyperlinks,0xBB91829A,0xAD49,0x46E5,0x89,0xCF,0x00,0x43,0x4E,0xA2,0x1E,0x81);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadHyperlinks,0xD8AD568F,0xFDDD,0x40FE,0xBE,0x63,0x57,0xFF,0xFB,0x26,0x65,0xB3);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDictionary,0x8E323A4A,0x7FA3,0x45CB,0xA7,0xA3,0x78,0x15,0xFD,0x0A,0xAE,0x56);

MIDL_DEFINE_GUID(IID, IID_IZcadLayers,0x7F71DF65,0x094C,0x4D5F,0xB9,0x35,0xD6,0x8F,0xAF,0xD9,0x53,0x3A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLayers,0x982AA35C,0xDDC9,0x44CD,0xBE,0x5B,0x07,0x11,0x62,0x9B,0xC6,0x60);

MIDL_DEFINE_GUID(IID, IID_IZcadDimStyles,0x89E4981A,0xAFE2,0x47BD,0x98,0x74,0x28,0x66,0x13,0x9F,0xA7,0x98);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimStyles,0xB8BD6E31,0x81B7,0x4FFF,0xB0,0x3D,0xBD,0x96,0xA9,0xBB,0xE7,0x65);

MIDL_DEFINE_GUID(IID, IID_IZcadDictionaries,0x0EECE654,0xB158,0x4C13,0x91,0x86,0xCA,0x8B,0xBF,0xAD,0xD8,0x73);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDictionaries,0x1DF6D5BA,0x3413,0x48A9,0xB6,0xD6,0x17,0x09,0x42,0x67,0x09,0x8C);

MIDL_DEFINE_GUID(IID, IID_IZcadLineTypes,0x4FFD1D86,0xBE81,0x49F3,0x91,0x6D,0xC5,0x0F,0x19,0x1C,0x99,0x6E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLineTypes,0xF1EF1F72,0x0BF1,0x45A8,0x8F,0xA9,0xBD,0x4E,0x63,0x8A,0xBE,0xCE);

MIDL_DEFINE_GUID(IID, IID_IZcadMaterials,0x6F5B1927,0xE25E,0x450B,0xBB,0x24,0xBA,0xC5,0xA8,0x9C,0xAB,0x7E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMaterials,0x4692BDE3,0x3F55,0x447D,0x83,0x2A,0xE0,0x78,0xFA,0xF6,0x2D,0x2D);

MIDL_DEFINE_GUID(IID, IID_IZcadTextStyles,0xDBB7994D,0xEC95,0x4A2B,0xB9,0x1E,0x2A,0x57,0x7E,0x13,0x9B,0xF8);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTextStyles,0x73A1E8E1,0x3F2F,0x4D66,0xA9,0x30,0x44,0x15,0x59,0x3E,0xD7,0x4B);

MIDL_DEFINE_GUID(IID, IID_IZcadUCSs,0x17A87D61,0x2C8A,0x4C9A,0x8D,0xAD,0xA9,0x84,0x97,0x9A,0xAA,0xAB);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadUCSs,0xA5AD75DB,0x2D90,0x49AC,0x89,0xEA,0x2A,0x4C,0x3D,0x4D,0xD8,0x87);

MIDL_DEFINE_GUID(IID, IID_IZcadRegisteredApplications,0xAC028D1C,0x34B9,0x4C54,0x8E,0x73,0x33,0x01,0x3D,0x98,0xC3,0x9B);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRegisteredApplications,0xF4D8EEB4,0xF654,0x493E,0x81,0x63,0x5C,0xFE,0x41,0x38,0x84,0xF4);

MIDL_DEFINE_GUID(IID, IID_IZcadViews,0x21A2129C,0xA9B6,0x447F,0xB3,0x8A,0xD5,0xCA,0xD2,0x29,0x28,0x4D);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadViews,0x5BC66B00,0x0F89,0x41EB,0xA0,0x04,0xE7,0xFE,0x2C,0x61,0xCA,0xDF);

MIDL_DEFINE_GUID(IID, IID_IZcadViewports,0x4981DB79,0x4454,0x4DBE,0xB2,0x5B,0x4E,0x9D,0x7D,0x0A,0x3B,0x15);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadViewports,0x4173D990,0xE04A,0x4ADB,0x88,0xC5,0xEB,0x46,0x84,0x30,0xA5,0xEA);

MIDL_DEFINE_GUID(IID, IID_IZcadGroups,0x6AB898F8,0x09F2,0x408C,0x93,0x60,0x70,0x37,0x0B,0x4D,0x2F,0x4C);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadGroups,0x407B63EA,0xBCCE,0x45E7,0x81,0x00,0xCE,0x97,0xFE,0xC5,0x62,0x90);

MIDL_DEFINE_GUID(IID, IID_IZcadBlocks,0xD4D83603,0x80BF,0x4DCC,0xBF,0xFD,0x49,0xF1,0x1A,0xDF,0xDC,0x91);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadBlocks,0x1C16AFE0,0xF123,0x4A2E,0x88,0x02,0xB3,0x14,0x41,0x5D,0xB6,0xD1);

MIDL_DEFINE_GUID(IID, IID_IZcadLayouts,0x1B3590D4,0x05F8,0x4415,0x84,0xE1,0xC6,0x27,0xBA,0xFB,0x3A,0x94);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLayouts,0x4A878CB9,0x5751,0x4BBE,0xA1,0xE3,0xAE,0xB8,0xC4,0x8A,0x62,0xA0);

MIDL_DEFINE_GUID(IID, IID_IZcadPlotConfigurations,0x5B51E914,0xF31E,0x4429,0xB7,0x17,0xCF,0xEE,0x36,0x2D,0xB7,0x3F);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPlotConfigurations,0x83863BA1,0x63E2,0x4099,0x83,0xF3,0x42,0x56,0x61,0xAF,0x69,0x92);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadEntity,0x16712B49,0x72AF,0x49C8,0xB1,0x12,0x73,0xFE,0xD3,0x6B,0x49,0x80);

MIDL_DEFINE_GUID(IID, IID_IZcadShadowDisplay,0x93397123,0x5E07,0x47EB,0xA6,0xBB,0x62,0xA0,0x31,0xBC,0x44,0x37);

MIDL_DEFINE_GUID(IID, IID_IZcadRasterImage,0x4DAE9B25,0xC81F,0x4609,0xB0,0x9E,0x8C,0x2C,0x82,0xC2,0x40,0xF1);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRasterImage,0x3F0685DE,0x72BF,0x492F,0xAE,0xC0,0xA7,0xC8,0x37,0xC2,0xEF,0x47);

MIDL_DEFINE_GUID(IID, IID_IZcad3DFace,0x17E12047,0xDE34,0x4240,0x95,0xAF,0x08,0x11,0x8D,0x3C,0x55,0xAF);

MIDL_DEFINE_GUID(CLSID, CLSID_Zcad3DFace,0xD0A97D47,0x96D4,0x4E61,0xAE,0x1D,0xCA,0xFA,0xF3,0x5D,0x07,0xF5);

MIDL_DEFINE_GUID(IID, IID_IZcad3DPolyline,0x87F9387C,0x8792,0x4144,0x83,0x8D,0x4C,0x11,0x1E,0xF5,0x08,0xB8);

MIDL_DEFINE_GUID(CLSID, CLSID_Zcad3DPolyline,0x77503071,0x8435,0x4C5F,0x8D,0x67,0xEA,0xED,0x44,0xCF,0x0B,0x0B);

MIDL_DEFINE_GUID(IID, IID_IZcadRegion,0x2B32931F,0x55D7,0x4EBB,0xA3,0x71,0x27,0xEF,0x3B,0xA1,0x26,0xD4);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRegion,0x45D07F17,0x52D9,0x4025,0x83,0x5B,0x05,0xF1,0xEE,0x3F,0xCC,0x0D);

MIDL_DEFINE_GUID(IID, IID_IZcad3DSolid,0x887C91EC,0xC933,0x48BE,0xA9,0x8F,0x00,0x78,0xB1,0x66,0x0E,0x03);

MIDL_DEFINE_GUID(CLSID, CLSID_Zcad3DSolid,0x651BF7DE,0x3DE5,0x447A,0x8F,0x1F,0x60,0xA2,0x0F,0xBD,0xE4,0x0C);

MIDL_DEFINE_GUID(IID, IID_IZcadArc,0x7FBBCF42,0xD8F7,0x4D10,0xA9,0xB0,0xA8,0x91,0x21,0x0C,0x87,0xD8);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadArc,0xCB4CAE8F,0xBBC0,0x4442,0x80,0xC7,0xF9,0x67,0x81,0x64,0x06,0xAA);

MIDL_DEFINE_GUID(IID, IID_IZcadAttribute,0xDC36382F,0x3E5B,0x4F3C,0x96,0xC2,0x3B,0xC8,0x1F,0xDC,0x2A,0x48);

MIDL_DEFINE_GUID(IID, IID_IZcadAttribute2,0xD4CA6CE8,0x1824,0x4CF5,0xAF,0x57,0xC1,0xB5,0x74,0x7A,0x39,0x4C);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadAttribute,0x20DBE474,0x77E1,0x44A4,0x83,0xF5,0xAE,0x64,0xA0,0x52,0x68,0xB3);

MIDL_DEFINE_GUID(IID, IID_IZcadAttributeReference,0x74B2DB9E,0xA03D,0x4736,0xB3,0x36,0x2E,0xAB,0xB0,0x20,0xBA,0x19);

MIDL_DEFINE_GUID(IID, IID_IZcadAttributeReference2,0xBCF188D4,0xD472,0x4F40,0x97,0xF3,0xF1,0xFD,0xEA,0x23,0xD4,0x80);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadAttributeReference,0xD3FA1D72,0x4AA6,0x4247,0x83,0x8A,0xC7,0xD2,0x22,0x97,0xE9,0x2F);

MIDL_DEFINE_GUID(IID, IID_IZcadBlockReference,0x9F5E581A,0xE35C,0x4F2F,0x89,0xEC,0x2B,0x6F,0xB6,0x38,0xB4,0x19);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadBlockReference,0xDA55A90B,0x86FF,0x4924,0x84,0xCB,0x6B,0xE9,0x89,0x6A,0x07,0x92);

MIDL_DEFINE_GUID(IID, IID_IZcadCircle,0x0AB7DFC9,0x2439,0x46F9,0xA1,0x90,0xB7,0x34,0x4F,0xB4,0x32,0xDB);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadCircle,0x84258070,0x710C,0x4CC1,0xB3,0xC3,0xDD,0xE5,0x5F,0xFF,0x72,0xD5);

MIDL_DEFINE_GUID(IID, IID_IZcadEllipse,0x3F1DCF74,0x252D,0x4AFA,0x88,0xDB,0x46,0x02,0x2B,0xC7,0xD0,0x15);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadEllipse,0x90015F83,0x3482,0x4826,0x9E,0xF6,0x6D,0xC1,0x3A,0x9D,0xAB,0x04);

MIDL_DEFINE_GUID(IID, IID_IZcadHatch,0xD03EE601,0xD609,0x49E3,0xA1,0xA6,0x92,0xBC,0x67,0x4F,0x8E,0x4E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadHatch,0x6229D94D,0x72D0,0x4180,0x9F,0x8A,0x8D,0x02,0x82,0x6B,0xD4,0x0D);

MIDL_DEFINE_GUID(IID, IID_IZcadLeader,0x93FC39AF,0xF7E1,0x4ECD,0xB5,0x2F,0xDF,0xBD,0x16,0x58,0xD4,0x51);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLeader,0xF3711036,0xB245,0x43BE,0x89,0x22,0x9A,0x3C,0x7C,0xE8,0x41,0x09);

MIDL_DEFINE_GUID(IID, IID_IZcadMLeader,0xD86A93FF,0x463F,0x47AD,0xAD,0x9A,0xC7,0x3B,0x5C,0x9E,0x04,0x74);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMLeader,0x5B2D0B65,0x9350,0x4B81,0xA8,0x20,0xA2,0x5B,0xD5,0xB0,0x3B,0xE3);

MIDL_DEFINE_GUID(IID, IID_IZcadLWPolyline,0xDEF13726,0x5EB7,0x4B5C,0x91,0x5D,0x2B,0xE4,0x17,0x21,0xD4,0x22);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLWPolyline,0xDDC7B80E,0xED50,0x45F4,0xA2,0x94,0x16,0xD2,0x96,0xD6,0x87,0x8E);

MIDL_DEFINE_GUID(IID, IID_IZcadLine,0xEA9C2313,0x47D2,0x4352,0xA5,0x11,0xAE,0x17,0x37,0x77,0xC4,0xE4);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLine,0x03F3C5C8,0x5DE5,0x4125,0x98,0xD9,0x80,0xA4,0xB0,0x23,0x09,0xDA);

MIDL_DEFINE_GUID(IID, IID_IZcadMText,0x2A0C5D77,0xA112,0x4067,0x85,0xA1,0xBD,0x06,0x8C,0xF7,0x7D,0x9A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMText,0x779EF1EE,0x5349,0x42B9,0x91,0x57,0xF5,0xEE,0xDF,0x1A,0x3C,0x95);

MIDL_DEFINE_GUID(IID, IID_IZcadPoint,0x3D726990,0xF886,0x4540,0x8F,0x0A,0xE5,0x2C,0x75,0xE5,0x91,0x88);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPoint,0xF4B174F6,0xAE9D,0x4D21,0xB7,0xAA,0xC4,0x41,0x51,0xF9,0xDC,0xC2);

MIDL_DEFINE_GUID(IID, IID_IZcadPolyline,0xC54DCEC2,0xD185,0x4C55,0xA7,0xD3,0x2E,0x3C,0x5C,0x39,0x55,0xE5);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPolyline,0x9D4D1320,0x2308,0x4BCD,0xBF,0x41,0x25,0xAE,0x31,0x7D,0xE9,0x2B);

MIDL_DEFINE_GUID(IID, IID_IZcadPolygonMesh,0x969E4A32,0x6EF3,0x45F9,0xAA,0x12,0x67,0xC0,0x6A,0x52,0x31,0x0B);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPolygonMesh,0x1EB21020,0xE781,0x41A8,0xB6,0x47,0x9A,0xEF,0x2E,0x1A,0x5D,0xF9);

MIDL_DEFINE_GUID(IID, IID_IZcadRay,0x5A6F0F98,0x9CB1,0x4AAA,0x93,0x63,0xB3,0xD0,0x2C,0xE5,0x3E,0x44);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRay,0x137ABD37,0x6A31,0x45A1,0x91,0x65,0xE6,0xAC,0x34,0xE5,0x64,0x3C);

MIDL_DEFINE_GUID(IID, IID_IZcadShape,0x4B5EE2BB,0x1240,0x44FB,0x85,0xEB,0x51,0x2A,0x2C,0xCD,0xE3,0xC2);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadShape,0x57C7C8A7,0x469D,0x43A4,0xA8,0x4D,0xD9,0xCD,0xF5,0x9B,0x9B,0xCD);

MIDL_DEFINE_GUID(IID, IID_IZcadSolid,0x55BCD618,0xB5EB,0x4922,0x87,0x53,0x0A,0x51,0xA4,0xCA,0xEF,0xAC);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSolid,0x2A842A58,0xB175,0x45E6,0x9E,0xF6,0x4B,0xEF,0xE4,0x3D,0x54,0x30);

MIDL_DEFINE_GUID(IID, IID_IZcadSpline,0xF5CFE7F6,0x9446,0x4E35,0x8F,0xDC,0x1C,0x3E,0xB8,0x32,0x1D,0xB0);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSpline,0x84808A39,0xA541,0x47D6,0xA9,0xE3,0x84,0x0E,0x02,0x77,0xB1,0x4B);

MIDL_DEFINE_GUID(IID, IID_IZcadText,0xA2DED3A3,0x29D7,0x485C,0x97,0x9C,0xEC,0xB8,0x68,0x22,0x1E,0x93);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadText,0x54B19EBA,0x5008,0x41E3,0xBC,0x17,0x6A,0xC0,0x0F,0x07,0xA3,0x86);

MIDL_DEFINE_GUID(IID, IID_IZcadTolerance,0x3A88AAF8,0x3FDF,0x4F27,0xA4,0x95,0x41,0xB7,0xB5,0x8D,0x34,0x23);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTolerance,0xD3C5131F,0xCDE9,0x47C5,0xB1,0x92,0x51,0xA2,0x9B,0x5F,0xF2,0xAB);

MIDL_DEFINE_GUID(IID, IID_IZcadTrace,0x61EFD8FF,0xFDD2,0x494A,0xA2,0xD2,0xCB,0x52,0x22,0x61,0xFC,0x3B);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTrace,0x77713C78,0x4C48,0x4E41,0xBB,0x39,0x79,0xC3,0x16,0x4F,0xD0,0x77);

MIDL_DEFINE_GUID(IID, IID_IZcadXline,0xAFE5A78D,0x3D97,0x41B7,0xB4,0xEB,0x17,0x40,0xFF,0x34,0x2C,0xEB);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadXline,0x1692C613,0xEDE5,0x4DA4,0x9A,0xFE,0x52,0x86,0x9F,0x01,0xD2,0xF7);

MIDL_DEFINE_GUID(IID, IID_IZcadPViewport,0xF1B0CF5B,0x1FAF,0x4EFE,0xA3,0x53,0x03,0x5E,0x65,0xCB,0xBA,0x6D);

MIDL_DEFINE_GUID(IID, IID_IZcadPViewport2,0x98A8BF80,0xF5AF,0x4CE8,0xB6,0x4D,0x21,0x7D,0x1B,0xF6,0x60,0xE8);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPViewport,0x3D7727A9,0x413A,0x46DC,0xA0,0x39,0x67,0x85,0xBA,0x3A,0x6C,0xA2);

MIDL_DEFINE_GUID(IID, IID_IZcadMInsertBlock,0x24B611A1,0xE868,0x42E8,0xB3,0x7F,0x36,0xD6,0x97,0x5D,0x07,0xC0);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMInsertBlock,0x72ED3497,0x971F,0x447B,0xB8,0xF1,0x93,0xF3,0x26,0x75,0x1F,0xDC);

MIDL_DEFINE_GUID(IID, IID_IZcadPolyfaceMesh,0x0EE59A03,0x91DF,0x4185,0x8A,0x96,0x2F,0xF2,0xFE,0xE6,0xC1,0x7D);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPolyfaceMesh,0x5CCED522,0x3714,0x4DA0,0x86,0xEB,0x39,0xDC,0x10,0x7B,0xFC,0x71);

MIDL_DEFINE_GUID(IID, IID_IZcadMLine,0x821F1E49,0x7C12,0x40A2,0xB7,0x0D,0x56,0xB9,0xF5,0xDF,0x81,0xFA);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadMLine,0x11524CD3,0xE1F4,0x482E,0xBC,0x3E,0xF2,0x64,0xBC,0x47,0x72,0x3F);

MIDL_DEFINE_GUID(IID, IID_IZcadExternalReference,0x394D4C7C,0xB0A2,0x45DE,0x9F,0x1F,0xE6,0xD5,0x65,0xDC,0x01,0xBE);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadExternalReference,0x2C198B2E,0x4225,0x4FAE,0xA1,0xC2,0x06,0xBA,0x6E,0x49,0xC4,0x7B);

MIDL_DEFINE_GUID(IID, IID_IZcadTable,0x5C7895F6,0x70CE,0x41D6,0x94,0xB6,0x07,0x34,0x1C,0x2A,0x3E,0x94);

MIDL_DEFINE_GUID(IID, IID_IZcadTable2,0x20012BE2,0x43D0,0x433F,0xB5,0x04,0xB2,0x3A,0xBD,0x16,0x5A,0xB5);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadTable,0xCAC26288,0x00B5,0x47DF,0xA8,0xA7,0x14,0xB2,0xB4,0x04,0xEE,0x85);

MIDL_DEFINE_GUID(IID, IID_IZcadOle,0xACB84340,0xBED8,0x41DF,0x97,0x2F,0x06,0x9E,0xA0,0xE9,0x52,0xF2);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadOle,0x57EF1254,0x55D9,0x44E8,0xA6,0x0A,0xED,0x60,0x11,0x12,0x76,0x03);

MIDL_DEFINE_GUID(IID, IID_IZcadHelix,0x6CE69E09,0x1B99,0x42BF,0xB1,0x86,0x67,0xA3,0x62,0x7E,0xD7,0x86);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadHelix,0x704C3C40,0xF524,0x430F,0x84,0x7F,0x68,0x51,0xEF,0x91,0x56,0x97);

MIDL_DEFINE_GUID(IID, IID_IZcadSurface,0xF08D4A0E,0x2D64,0x4C04,0xAC,0x09,0x87,0x7D,0x82,0xB7,0xDB,0x88);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSurface,0x4BDCE115,0x3118,0x445B,0x89,0x50,0x10,0xFB,0x91,0x5D,0xA7,0xEA);

MIDL_DEFINE_GUID(IID, IID_IZcadPlaneSurface,0x6CB8ABB6,0x9329,0x4F15,0xAF,0x58,0xE9,0x20,0xA2,0xD3,0x83,0x9A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPlaneSurface,0x3B2B1199,0xA29D,0x4E56,0xB1,0x2B,0x83,0x9B,0x0E,0x6D,0xA0,0x70);

MIDL_DEFINE_GUID(IID, IID_IZcadExtrudedSurface,0xCCB941E8,0x69E3,0x4926,0xAE,0xE5,0x43,0xB3,0x0D,0x35,0xE1,0xAD);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadExtrudedSurface,0x4D064CC7,0x2027,0x4307,0x84,0xE4,0xE0,0x6A,0xEA,0x5B,0xC8,0x66);

MIDL_DEFINE_GUID(IID, IID_IZcadRevolvedSurface,0xDDB92F5D,0x3D4A,0x4F80,0xBB,0xAA,0xE5,0xBD,0x72,0x06,0xF0,0x0E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadRevolvedSurface,0x1264D1BD,0xAFA7,0x43A5,0x8B,0x18,0xA6,0x7A,0xBC,0x84,0xAF,0x78);

MIDL_DEFINE_GUID(IID, IID_IZcadSweptSurface,0x43949A55,0xD6BD,0x4D05,0x92,0xE8,0x10,0x82,0x0D,0x91,0x70,0x57);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSweptSurface,0x4EDF8FCF,0xB67D,0x4B7E,0xAB,0x57,0x39,0x38,0xD0,0x4F,0x27,0xA1);

MIDL_DEFINE_GUID(IID, IID_IZcadLoftedSurface,0x6AF68CD2,0x4810,0x4795,0x9B,0xA7,0x52,0x7E,0x74,0x2D,0xB9,0xA6);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLoftedSurface,0x12973215,0xFD58,0x4538,0xB5,0x0E,0xA2,0x83,0x58,0xC3,0x17,0x38);

MIDL_DEFINE_GUID(IID, IID_IZcadSection,0xEB54FA9E,0x8DF7,0x4903,0x91,0x6D,0x56,0xB3,0x53,0x65,0x2E,0x8C);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSection,0x3525AEA2,0xE6A3,0x4EF7,0xB7,0x65,0x61,0x8B,0xFE,0x11,0x8F,0x6E);

MIDL_DEFINE_GUID(IID, IID_IZcadSectionManager,0x9A1F7185,0x9C01,0x4F9D,0xB6,0x8E,0xE0,0x02,0x63,0xE6,0xF6,0x92);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSectionManager,0x1F9B13E2,0x2E3C,0x4B99,0xAF,0x18,0x67,0xF7,0xDD,0x8B,0x23,0xAC);

MIDL_DEFINE_GUID(IID, IID_IZcadUnderlay,0x8A36ABEA,0xF8C2,0x4A39,0x99,0xD4,0x17,0x42,0x38,0x41,0x74,0x0C);

MIDL_DEFINE_GUID(IID, IID_IZcadUnderlay2,0xA9BFA946,0x5053,0x4B82,0xBA,0xD5,0x52,0xF0,0x81,0xCA,0x75,0x65);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDwfUnderlay,0xA249F921,0xA8F8,0x4D94,0xBA,0x24,0x29,0xE7,0xD6,0xB1,0xA9,0x1F);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDgnUnderlay,0xF779D165,0x9A0A,0x4482,0xB1,0x8D,0xF9,0x40,0x59,0xE3,0xCB,0x4A);

MIDL_DEFINE_GUID(IID, IID_IZcadSubEntity,0x494C600F,0xEFDA,0x4379,0x91,0x40,0xFA,0x43,0xE5,0xF7,0x2E,0xAA);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSubEntity,0xD8F80288,0x9908,0x4A85,0xBF,0xFD,0x7C,0xE9,0x28,0x6D,0x98,0x51);

MIDL_DEFINE_GUID(IID, IID_IZcadSubEntSolidFace,0xB2B924B8,0xC431,0x4BD7,0x88,0x51,0x4C,0xB5,0x61,0x5A,0xD5,0x7F);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSubEntSolidFace,0x605545E6,0x33F8,0x47E0,0x8B,0xEA,0x89,0x40,0x8A,0x7C,0x58,0xF5);

MIDL_DEFINE_GUID(IID, IID_IZcadSubEntSolidEdge,0xA6EAD337,0x2B4F,0x47EC,0x88,0xCE,0xBF,0x97,0xB6,0xF1,0x62,0x6A);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSubEntSolidEdge,0xCF87BFC2,0x79B4,0x42FA,0xAF,0x13,0x13,0x99,0x6F,0xA6,0xB4,0xCC);

MIDL_DEFINE_GUID(IID, IID_IZcadSubEntSolidVertex,0x16E13F14,0x6C3D,0x493E,0x97,0x22,0x40,0xAE,0xFA,0x0A,0xD2,0xC0);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSubEntSolidVertex,0x8181103F,0x3C4F,0x4516,0x81,0x0F,0x57,0x44,0x4B,0x68,0x0F,0x3F);

MIDL_DEFINE_GUID(IID, IID_IZcadSubEntSolidNode,0x8153157B,0xC750,0x4788,0xA3,0x3D,0x96,0xAD,0xE0,0x37,0xF8,0x7F);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSubEntSolidNode,0xC87E3A37,0xF999,0x432D,0xA7,0x1A,0x31,0xE5,0x01,0xFE,0xD5,0x2B);

MIDL_DEFINE_GUID(IID, IID_IZcadDimension,0x88D2389F,0x8BC8,0x4ABA,0xB3,0xA9,0x33,0x71,0x76,0xF6,0x54,0xBC);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimension,0x2EF4B27A,0x210C,0x4E48,0xA4,0x5F,0xFE,0xE0,0xDD,0x85,0xC1,0x48);

MIDL_DEFINE_GUID(IID, IID_IZcadDimAligned,0x07057014,0xEEFB,0x4F9D,0xBE,0x2A,0xC4,0xA1,0x7E,0xA2,0x3C,0xA1);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimAligned,0x8084895E,0xE2DA,0x44D8,0xB7,0x81,0x89,0x0A,0xA9,0xEF,0x6E,0xF1);

MIDL_DEFINE_GUID(IID, IID_IZcadDimAngular,0x25E3C70F,0x57AD,0x4D4C,0xA8,0x46,0xB1,0x6E,0x7C,0x6F,0xB1,0x38);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimAngular,0xE373A224,0x0340,0x43EC,0x80,0xC5,0x9A,0x2E,0xD6,0x22,0x5E,0xF6);

MIDL_DEFINE_GUID(IID, IID_IZcadDimDiametric,0xB5A394A5,0x1232,0x4053,0x96,0x74,0xA6,0x71,0x26,0x9B,0x94,0xB9);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimDiametric,0xD4AC53AF,0xE541,0x4E9F,0x90,0x2B,0xC6,0xA5,0x2F,0x9B,0xD9,0x14);

MIDL_DEFINE_GUID(IID, IID_IZcadDimOrdinate,0xEE4AA3FC,0x525C,0x49E8,0x8C,0xA9,0x4E,0x4D,0x22,0x71,0xAA,0xB5);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimOrdinate,0xB8AF3240,0x6433,0x418A,0xB0,0x4D,0xC1,0x88,0xB6,0xA3,0x13,0xA3);

MIDL_DEFINE_GUID(IID, IID_IZcadDimRadial,0xFC4FBA26,0x43BA,0x4E49,0x90,0xDB,0xAC,0x05,0x70,0x4C,0x54,0x70);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimRadial,0x132A760A,0x260E,0x49D4,0xAA,0x06,0x38,0x1F,0xF4,0x18,0x5F,0x4A);

MIDL_DEFINE_GUID(IID, IID_IZcadDimRotated,0xEC622D62,0x9CC3,0x4D4B,0xAF,0x72,0x81,0x1C,0xD0,0x41,0x71,0x18);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimRotated,0x7C9C2451,0xDCCD,0x42AA,0xA3,0xBF,0x34,0xB9,0xE2,0xB2,0x31,0x0A);

MIDL_DEFINE_GUID(IID, IID_IZcadDim3PointAngular,0xC5F08D0E,0xA957,0x4942,0xA0,0x19,0x84,0x29,0x1C,0x84,0x39,0xEA);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDim3PointAngular,0xC1977F76,0xD02B,0x40E0,0x93,0x7E,0x03,0x8D,0x71,0x23,0xE7,0x60);

MIDL_DEFINE_GUID(IID, IID_IZcadDimArcLength,0x77FA9B25,0xA981,0x47D2,0xA7,0xAA,0x9B,0xB9,0xD7,0x2B,0x5D,0x40);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimArcLength,0x4C287A2D,0xAF93,0x4868,0x80,0x2B,0x16,0x40,0x36,0xBE,0x0B,0x00);

MIDL_DEFINE_GUID(IID, IID_IZcadDimRadialLarge,0xA7B8C3F5,0x3B7E,0x4948,0x9A,0x2E,0xAF,0xDF,0x9D,0x97,0x1C,0x0E);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDimRadialLarge,0xE3E6B421,0x6BCA,0x446C,0xB6,0xB0,0xA2,0x77,0x19,0xBB,0x5E,0xE8);

MIDL_DEFINE_GUID(IID, IID_IZcadBlock2,0x5BD964DF,0x26F4,0x4C7A,0x97,0x59,0xB4,0x8F,0x89,0x4E,0x08,0xB2);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadBlock,0x04327EFF,0x2F1E,0x4B72,0xB3,0xB9,0x95,0xE9,0xA6,0x81,0x88,0x2C);

MIDL_DEFINE_GUID(IID, IID_IZcadModelSpace,0x24ECAB2A,0x77E2,0x4BE4,0x94,0x02,0x69,0x7A,0x39,0x04,0xDB,0xD4);

MIDL_DEFINE_GUID(IID, IID_IZcadModelSpace2,0x2DAAAC81,0x9E71,0x4F94,0xAB,0x20,0x61,0xA2,0xD5,0xF8,0x55,0x10);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadModelSpace,0xB1BA6A13,0x16A1,0x4252,0x88,0xD0,0x68,0xD9,0x75,0x41,0xE7,0x73);

MIDL_DEFINE_GUID(IID, IID_IZcadPaperSpace,0x6DF7AE07,0x6945,0x47E7,0x95,0xA5,0x29,0x42,0xBF,0xD1,0xE2,0x71);

MIDL_DEFINE_GUID(IID, IID_IZcadPaperSpace2,0x49E4B8A1,0x6A04,0x480A,0xB2,0x82,0x58,0xBB,0xDE,0xB8,0xAA,0x1D);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadPaperSpace,0xBB94096C,0x086C,0x4326,0xB1,0xF5,0xC0,0xEE,0xCD,0xD2,0xF7,0x51);

MIDL_DEFINE_GUID(IID, IID_IZcadFileDependency,0x962BF050,0xC95D,0x4585,0x81,0xB6,0x05,0x0C,0xAC,0x2A,0x3C,0xBC);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadFileDependency,0x7165CE1C,0x0076,0x4F52,0xA5,0x17,0x5A,0xB2,0x28,0x8F,0x7D,0x07);

MIDL_DEFINE_GUID(IID, IID_IZcadFileDependencies,0xFCCDBEF0,0x5C89,0x4471,0xA4,0xCE,0x46,0xE0,0x42,0xEA,0x9D,0xDC);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadFileDependencies,0x9888668D,0xA132,0x4A6B,0x88,0xEA,0x50,0xE3,0xD9,0xF1,0xEA,0xD1);

MIDL_DEFINE_GUID(IID, IID_IZcadSummaryInfo,0x4121BCE6,0x3829,0x4B26,0xAD,0x6B,0xC6,0xEE,0x00,0x11,0x94,0x2F);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSummaryInfo,0xD4568E9A,0x6625,0x46B3,0xAD,0x1E,0xF8,0xA2,0x5F,0x41,0xF6,0xAC);

MIDL_DEFINE_GUID(IID, IID_IZcadDatabasePreferences,0x467F7F96,0xBE8C,0x4036,0x88,0x73,0xD0,0x94,0xFF,0x07,0x4B,0xAE);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDatabasePreferences,0xD9E389D6,0x1A2E,0x40AA,0x93,0xBE,0xAB,0x98,0x3D,0x92,0x9D,0x6C);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadDatabase,0x5B5BB822,0x1006,0x47CF,0xBD,0xAF,0x4C,0x51,0xB3,0xF9,0xB9,0x7C);

MIDL_DEFINE_GUID(IID, IID_IZcadSecurityParams,0xB47E42AF,0xB48F,0x459A,0x9D,0x0F,0xB9,0xA4,0x58,0x5A,0x36,0x70);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadSecurityParams,0xB9FC85CE,0x4606,0x4576,0x85,0x27,0x09,0x21,0x96,0x38,0xE4,0xA9);

MIDL_DEFINE_GUID(IID, IID_IZcadLayerStateManager,0x1F838377,0x2A76,0x4DB5,0xA9,0x1D,0x68,0x8C,0x2A,0xA9,0x47,0x09);

MIDL_DEFINE_GUID(CLSID, CLSID_ZcadLayerStateManager,0xBE0F405E,0xE3D7,0x4C2A,0xB3,0x04,0xD2,0x15,0xED,0xF1,0x2B,0x6C);

MIDL_DEFINE_GUID(IID, IID_IZxDbDocumentEvents,0x49C74794,0x57FD,0x4CAF,0xB7,0xC6,0xCC,0x4F,0x33,0x34,0xC7,0x21);

MIDL_DEFINE_GUID(IID, IID_IZxDbDocument,0x87DEED30,0xF5E8,0x4226,0xA5,0x1A,0xBD,0x6E,0xA7,0x16,0x2D,0x45);

MIDL_DEFINE_GUID(CLSID, CLSID_ZxDbDocument,0x43C60B33,0xFD4B,0x4194,0xAD,0x92,0x62,0xC4,0x0F,0xB9,0x65,0xA4);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


