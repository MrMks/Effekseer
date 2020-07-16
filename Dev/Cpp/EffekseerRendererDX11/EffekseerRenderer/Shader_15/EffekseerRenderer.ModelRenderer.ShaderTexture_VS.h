#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tvs_4_0_level_9_3 /Emain /D __INST__=40 /Fh
//    Shader_15/EffekseerRenderer.ModelRenderer.ShaderTexture_VS.h
//    Shader_15/model_renderer_texture_VS.fx
//
//
// Buffer Definitions: 
//
// cbuffer VS_ConstantBuffer
// {
//
//   float4x4 mCameraProj;              // Offset:    0 Size:    64
//   float4x4 mModel[40];               // Offset:   64 Size:  2560
//   float4 fUV[40];                    // Offset: 2624 Size:   640
//   float4 fModelColor[40];            // Offset: 3264 Size:   640
//   float4 fLightDirection;            // Offset: 3904 Size:    16 [unused]
//   float4 fLightColor;                // Offset: 3920 Size:    16 [unused]
//   float4 fLightAmbient;              // Offset: 3936 Size:    16 [unused]
//   float4 mUVInversed;                // Offset: 3952 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// VS_ConstantBuffer                 cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// POSITION                 0   xyz         0     NONE  float   xyz 
// NORMAL                   0   xyz         1     NONE  float       
// NORMAL                   1   xyz         2     NONE  float       
// NORMAL                   2   xyz         3     NONE  float       
// TEXCOORD                 0   xy          4     NONE  float   xy  
// NORMAL                   3   xyzw        5     NONE  float   xyzw
// BLENDINDICES             0   xyzw        6     NONE   uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float   xyzw
// TEXCOORD                 0   xy          1     NONE  float   xy  
// COLOR                    0   xyzw        2     NONE  float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c0         cb0             0       248  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c248                            Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_x
    def c249, 4, 0, 0, 0
    dcl_texcoord v0
    dcl_texcoord4 v4
    dcl_texcoord5 v5
    dcl_texcoord6 v6
    mova a0.x, v6.x
    mul oT1, v5, c204[a0.x]
    mad oT0.x, v4.x, c164[a0.x].z, c164[a0.x].x
    mad r0.x, v4.y, c164[a0.x].w, c164[a0.x].y
    mad oT0.y, c247.y, r0.x, c247.x
    mul r0.x, v6.x, c249.x
    mova a0.x, r0.x
    mul r0, v0.y, c5[a0.x]
    mad r0, c4[a0.x], v0.x, r0
    mad r0, c6[a0.x], v0.z, r0
    add r0, r0, c7[a0.x]
    mul r1, r0.y, c1
    mad r1, c0, r0.x, r1
    mad r1, c2, r0.z, r1
    mad r0, c3, r0.w, r1
    mad oPos.xy, r0.w, c248, r0
    mov oPos.zw, r0

// approximately 17 instruction slots used
vs_4_0
dcl_constantbuffer cb0[248], dynamicIndexed
dcl_input v0.xyz
dcl_input v4.xy
dcl_input v5.xyzw
dcl_input v6.x
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_output o2.xyzw
dcl_temps 2
ishl r0.x, v6.x, l(2)
mul r1.xyzw, v0.yyyy, cb0[r0.x + 5].xyzw
mad r1.xyzw, cb0[r0.x + 4].xyzw, v0.xxxx, r1.xyzw
mad r1.xyzw, cb0[r0.x + 6].xyzw, v0.zzzz, r1.xyzw
add r0.xyzw, r1.xyzw, cb0[r0.x + 7].xyzw
mul r1.xyzw, r0.yyyy, cb0[1].xyzw
mad r1.xyzw, cb0[0].xyzw, r0.xxxx, r1.xyzw
mad r1.xyzw, cb0[2].xyzw, r0.zzzz, r1.xyzw
mad o0.xyzw, cb0[3].xyzw, r0.wwww, r1.xyzw
mov r0.x, v6.x
mad r0.y, v4.y, cb0[r0.x + 164].w, cb0[r0.x + 164].y
mad o1.y, cb0[247].y, r0.y, cb0[247].x
mad o1.x, v4.x, cb0[r0.x + 164].z, cb0[r0.x + 164].x
mul o2.xyzw, v5.xyzw, cb0[r0.x + 204].xyzw
ret 
// Approximately 15 instruction slots used
#endif

const BYTE g_main[] =
{
     68,  88,  66,  67, 212, 205, 
    117, 228, 105, 216, 175, 194, 
     65, 145, 191,  84, 121,  49, 
    118,  61,   1,   0,   0,   0, 
    180,   8,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
     16,   2,   0,   0, 216,   4, 
      0,   0,  84,   5,   0,   0, 
     96,   7,   0,   0,  64,   8, 
      0,   0,  65, 111, 110,  57, 
    208,   1,   0,   0, 208,   1, 
      0,   0,   0,   2, 254, 255, 
    156,   1,   0,   0,  52,   0, 
      0,   0,   1,   0,  36,   0, 
      0,   0,  48,   0,   0,   0, 
     48,   0,   0,   0,  36,   0, 
      1,   0,  48,   0,   0,   0, 
      0,   0, 248,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    248,   0,   1,   2, 254, 255, 
     81,   0,   0,   5, 249,   0, 
     15, 160,   0,   0, 128,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      5, 128,   5,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      6, 128,   6,   0,  15, 144, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   6,   0,   0, 144, 
      5,   0,   0,   4,   1,   0, 
     15, 224,   5,   0, 228, 144, 
    204,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   6, 
      0,   0,   1, 224,   4,   0, 
      0, 144, 164,  32, 170, 160, 
      0,   0,   0, 176, 164,  32, 
      0, 160,   0,   0,   0, 176, 
      4,   0,   0,   6,   0,   0, 
      1, 128,   4,   0,  85, 144, 
    164,  32, 255, 160,   0,   0, 
      0, 176, 164,  32,  85, 160, 
      0,   0,   0, 176,   4,   0, 
      0,   4,   0,   0,   2, 224, 
    247,   0,  85, 160,   0,   0, 
      0, 128, 247,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   6,   0,   0, 144, 
    249,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      0,   0,   0, 128,   5,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0,  85, 144,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
      0, 144,   0,   0, 228, 128, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
    170, 144,   0,   0, 228, 128, 
      2,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      7,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      1,   0,  15, 128,   0,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      3,   0, 228, 160,   0,   0, 
    255, 128,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
      3, 192,   0,   0, 255, 128, 
    248,   0, 228, 160,   0,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   0,  12, 192,   0,   0, 
    228, 128, 255, 255,   0,   0, 
     83,  72,  68,  82, 192,   2, 
      0,   0,  64,   0,   1,   0, 
    176,   0,   0,   0,  89,   8, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0, 248,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
     50,  16,  16,   0,   4,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   5,   0, 
      0,   0,  95,   0,   0,   3, 
     18,  16,  16,   0,   6,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3,  50,  32, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   2,   0,   0,   0, 
    104,   0,   0,   2,   2,   0, 
      0,   0,  41,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,  16,  16,   0, 
      6,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
     56,   0,   0,  10, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     86,  21,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,   5,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  12, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   6,   0,   0,   0,   0, 
      4,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  12, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   6,   0,   0,   0,   0, 
      6,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
    166,  26,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   0,   0, 
      0,  10, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   6,   0,   0, 
      0,   0,   7,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  86,   5,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 242,   0,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  10, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0, 166,  10,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     50,   0,   0,  10, 242,  32, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  54,   0, 
      0,   5,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,  16, 
     16,   0,   6,   0,   0,   0, 
     50,   0,   0,  15,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     26,  16,  16,   0,   4,   0, 
      0,   0,  58, 128,  32,   6, 
      0,   0,   0,   0, 164,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  26, 128, 
     32,   6,   0,   0,   0,   0, 
    164,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  11,  34,  32, 
     16,   0,   1,   0,   0,   0, 
     26, 128,  32,   0,   0,   0, 
      0,   0, 247,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0, 247,   0, 
      0,   0,  50,   0,   0,  15, 
     18,  32,  16,   0,   1,   0, 
      0,   0,  10,  16,  16,   0, 
      4,   0,   0,   0,  42, 128, 
     32,   6,   0,   0,   0,   0, 
    164,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32,   6,   0,   0, 
      0,   0, 164,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,  10, 
    242,  32,  16,   0,   2,   0, 
      0,   0,  70,  30,  16,   0, 
      5,   0,   0,   0,  70, 142, 
     32,   6,   0,   0,   0,   0, 
    204,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 116,   0,   0,   0, 
     15,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,   4,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  82,  68,  69,  70, 
      4,   2,   0,   0,   1,   0, 
      0,   0,  80,   0,   0,   0, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   0,   4, 254, 255, 
     16,   1,   0,   0, 210,   1, 
      0,   0,  60,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  86,  83, 
     95,  67, 111, 110, 115, 116, 
     97, 110, 116,  66, 117, 102, 
    102, 101, 114,   0, 171, 171, 
     60,   0,   0,   0,   8,   0, 
      0,   0, 104,   0,   0,   0, 
    128,  15,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     40,   1,   0,   0,   0,   0, 
      0,   0,  64,   0,   0,   0, 
      2,   0,   0,   0,  52,   1, 
      0,   0,   0,   0,   0,   0, 
     68,   1,   0,   0,  64,   0, 
      0,   0,   0,  10,   0,   0, 
      2,   0,   0,   0,  76,   1, 
      0,   0,   0,   0,   0,   0, 
     92,   1,   0,   0,  64,  10, 
      0,   0, 128,   2,   0,   0, 
      2,   0,   0,   0,  96,   1, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0, 192,  12, 
      0,   0, 128,   2,   0,   0, 
      2,   0,   0,   0, 124,   1, 
      0,   0,   0,   0,   0,   0, 
    140,   1,   0,   0,  64,  15, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0, 156,   1, 
      0,   0,   0,   0,   0,   0, 
    172,   1,   0,   0,  80,  15, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0, 156,   1, 
      0,   0,   0,   0,   0,   0, 
    184,   1,   0,   0,  96,  15, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0, 156,   1, 
      0,   0,   0,   0,   0,   0, 
    198,   1,   0,   0, 112,  15, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0, 156,   1, 
      0,   0,   0,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,  80, 114, 111, 106,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 109,  77, 
    111, 100, 101, 108,   0, 171, 
      3,   0,   3,   0,   4,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 102,  85, 
     86,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,  40,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  77, 111, 100, 101, 108, 
     67, 111, 108, 111, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 102,  76, 
    105, 103, 104, 116,  68, 105, 
    114, 101,  99, 116, 105, 111, 
    110,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  76, 105, 103, 104, 116, 
     67, 111, 108, 111, 114,   0, 
    102,  76, 105, 103, 104, 116, 
     65, 109,  98, 105, 101, 110, 
    116,   0, 109,  85,  86,  73, 
    110, 118, 101, 114, 115, 101, 
    100,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171,  73,  83, 
     71,  78, 216,   0,   0,   0, 
      7,   0,   0,   0,   8,   0, 
      0,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   7,   7, 
      0,   0, 185,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   7,   0, 
      0,   0, 185,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   7,   0, 
      0,   0, 185,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   7,   0, 
      0,   0, 192,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,   3,   3, 
      0,   0, 185,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,  15,  15, 
      0,   0, 201,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      6,   0,   0,   0,  15,   1, 
      0,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0,  78, 
     79,  82,  77,  65,  76,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0,  66,  76,  69, 
     78,  68,  73,  78,  68,  73, 
     67,  69,  83,   0, 171, 171, 
     79,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  92,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      3,  12,   0,   0, 101,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0, 171
};
