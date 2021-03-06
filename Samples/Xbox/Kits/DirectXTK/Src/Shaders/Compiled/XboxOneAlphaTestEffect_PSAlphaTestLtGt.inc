#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float      w
// TEXCOORD                 0   xy          2     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[106]
// Embedded Data:
//  0x0000006a - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000065 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[8], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.w
dcl_input_ps linear v2.xy
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v2.xyxx, t0.xyzw, s0
mul r0.xyzw, r0.xyzw, v0.xyzw
lt r1.x, r0.w, cb0[1].x
movc r1.x, r1.x, cb0[1].z, cb0[1].w
lt r1.x, r1.x, l(0.000000)
discard_nz r1.x
mad r1.xyz, cb0[2].xyzx, r0.wwww, -r0.xyzx
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
mov o0.w, r0.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[106], bundle is:[178] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : D:\ATG\st_dev\Kits\DirectXTK\src\Shaders\Compiled\XboxOneAlphaTestEffect_PSAlphaTestLtGt.pdb
// Shader Semantic Hash      : 0x448ff5da79153c61
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask  8, param1, paramSlot1, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 2, channelMask  3, param2, paramSlot2, DefaultVal={0,0,0,0}

codeLenInByte        = 216 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 10;
NumSgprs             = 20;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000003
SPIC:NUM_INTERP             = 3
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000050
DB:Z_ORDER                  = 1
DB:KILL_ENABLE              = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0xC4, dwords=0x31)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, off, off, off done vm         // 000000000008: F8001801 00000002
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, off, off done vm          // 000000000008: F8001803 00000302
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v5, off, off done vm          // 000000000008: F8001803 00000502
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000000: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000004: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v2, v3                      // 000000000000: 5C000702
  v_cvt_pknorm_u16_f32  v1, v4, v5                      // 000000000004: 5C020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v2, v3                      // 000000000000: 5A000702
  v_cvt_pknorm_i16_f32  v1, v4, v5                      // 000000000004: 5A020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v2, v3                          // 000000000000: 60000702
  v_cvt_pk_u16_u32  v1, v4, v5                          // 000000000004: 60020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v2, v3                          // 000000000000: 62000702
  v_cvt_pk_i16_i32  v1, v4, v5                          // 000000000004: 62020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, v4, v5 done vm            // 000000000008: F800180F 05040302
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[16:17], exec                          // 000000000000: BE90047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  s_load_dwordx16  s[0:15], s[0:1], 0x00                // 00000000000C: C1000100
  v_interp_p1_f32  v2, v0, attr2.x                      // 000000000010: C8080800
  v_interp_p2_f32  v2, v1, attr2.x                      // 000000000014: C8090801
  v_interp_p1_f32  v3, v0, attr2.y                      // 000000000018: C80C0900
  v_interp_p2_f32  v3, v1, attr2.y                      // 00000000001C: C80D0901
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[2:5], v[2:3], s[0:7], s[8:11] dmask:0xf // 000000000024: F0800F00 00400202
  v_interp_p1_f32  v6, v0, attr0.x                      // 00000000002C: C8180000
  v_interp_p2_f32  v6, v1, attr0.x                      // 000000000030: C8190001
  v_interp_p1_f32  v7, v0, attr0.y                      // 000000000034: C81C0100
  v_interp_p2_f32  v7, v1, attr0.y                      // 000000000038: C81D0101
  v_interp_p1_f32  v8, v0, attr0.z                      // 00000000003C: C8200200
  v_interp_p2_f32  v8, v1, attr0.z                      // 000000000040: C8210201
  v_interp_p1_f32  v9, v0, attr0.w                      // 000000000044: C8240300
  v_interp_p2_f32  v9, v1, attr0.w                      // 000000000048: C8250301
  s_waitcnt     vmcnt(0)                                // 00000000004C: BF8C0F70
  v_mul_legacy_f32  v2, v2, v6                          // 000000000050: 0E040D02
  v_mul_legacy_f32  v3, v3, v7                          // 000000000054: 0E060F03
  v_mul_legacy_f32  v4, v4, v8                          // 000000000058: 0E081104
  v_mul_legacy_f32  v5, v5, v9                          // 00000000005C: 0E0A1305
  s_buffer_load_dwordx4  s[0:3], s[12:15], 0x04         // 000000000060: C2800D04
  s_waitcnt     lgkmcnt(0)                              // 000000000064: BF8C007F
  v_cmp_gt_f32  vcc, s0, v5                             // 000000000068: 7C080A00
  v_mov_b32     v6, s2                                  // 00000000006C: 7E0C0202
  v_mov_b32     v7, s3                                  // 000000000070: 7E0E0203
  v_cndmask_b32  v6, v7, v6, vcc                        // 000000000074: 000C0D07
  v_cmp_gt_f32  vcc, 0, v6                              // 000000000078: 7C080C80
  s_andn2_b64   s[16:17], s[16:17], vcc // wrscc        // 00000000007C: 8A906A10
  s_cbranch_scc0  label_0030                            // 000000000080: BF84000F
  s_and_b64     exec, exec, s[16:17] // wrscc           // 000000000084: 87FE107E
  s_wqm_b64     exec, exec // wrscc                     // 000000000088: BEFE0A7E
  s_buffer_load_dwordx4  s[0:3], s[12:15], 0x08         // 00000000008C: C2800D08
  s_waitcnt     lgkmcnt(0)                              // 000000000090: BF8C007F
  v_mad_legacy_f32  v6, s0, v5, -v2                     // 000000000094: D2800006 840A0A00
  v_mad_legacy_f32  v7, s1, v5, -v3                     // 00000000009C: D2800007 840E0A01
  v_mad_legacy_f32  v8, s2, v5, -v4                     // 0000000000A4: D2800008 84120A02
  v_interp_p1_f32  v0, v0, attr1.w                      // 0000000000AC: C8000700
  v_interp_p2_f32  v0, v1, attr1.w                      // 0000000000B0: C8010701
  v_mac_f32     v2, v0, v6                              // 0000000000B4: 3E040D00
  v_mac_f32     v3, v0, v7                              // 0000000000B8: 3E060F00
  v_mac_f32     v4, v0, v8                              // 0000000000BC: 3E081100
label_0030:
  s_mov_b64     exec, s[16:17]                          // 0000000000C0: BEFE0410
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 0000000000C4: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 0000000000C8: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 0000000000CC: F8001C0F 00000100
  s_endpgm                                              // 0000000000D4: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   10
//  NumSRegs:                   20
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   83
//  CycleSimNWaves:             83
//  Code Size:                  216
//Assembler Counts:
//  num_32bit_ops                     : 44
//  num_64bit_ops                     : 5
//  num_alu                           : 31
//  num_fc                            : 16
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 6
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 5
//  num_inst_sop2                     : 2
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 2
//  num_inst_vop2                     : 10
//  num_inst_vop3                     : 3
//  num_inst_vopc                     : 2
//  num_inst_vintrp                   : 14
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 10
// m_uNumSRegs                       : 20
// m_uSCCodeSize                     : 216
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 83
// m_uCycleSimNWaves                 : 83

// Assembler Counts:
// num_32bit_ops                     : 44
// num_64bit_ops                     : 5
// num_alu                           : 31
// num_fc                            : 16
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 6
// num_inst_sopc                     : 0
// num_inst_sop1                     : 5
// num_inst_sop2                     : 2
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 2
// num_inst_vop2                     : 10
// num_inst_vop3                     : 3
// num_inst_vopc                     : 2
// num_inst_vintrp                   : 14
// num_inst_smem                     : 3
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE AlphaTestEffect_PSAlphaTestLtGt[] =
{
     68,  88,  66,  67,  59, 125, 
    102, 171, 103, 187, 184, 144, 
     91,  74, 119, 220,  54, 119, 
    172,  37,   1,   0,   0,   0, 
    196,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    156,   0,   0,   0, 208,   0, 
      0,   0,  80,   5,   0,   0, 
     96,   5,   0,   0,  73,  83, 
     71,  78,  96,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  80,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   8, 
      0,   0,  86,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 120,   4,   0,   0, 
     80,   0,   0,   0,  30,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 106,   0, 
      0,   0,  80,   0,   0,   0, 
    101,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  98,  16, 
      0,   3, 130,  16,  16,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     69,   0,   0, 139, 194,   0, 
      0, 128,  67,  85,  21,   0, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     49,   0,   0,   8,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  55,   0,   0,  11, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  58, 128, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  49,   0, 
      0,   7,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  13,   0,   4,   3, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  11, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,  50,   0, 
      0,   9, 114,  32,  16,   0, 
      0,   0,   0,   0, 246,  31, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 180,   0,   0,   0, 
     23,   0,   1,   0,  41,  25, 
     16,   0, 120,   1, 237,  87, 
    207, 107,  19,  65,  20, 126, 
     51, 187,  77,  54, 219, 100, 
     55, 213,  42,  41,  84, 173, 
     88, 193, 131,   8, 130,  39, 
    145,  98, 107, 165, 135,  22, 
     44, 180, 135,  82, 214, 254, 
     72, 147, 208,  74, 181, 161, 
     89,  68, 161, 196,   8,   1, 
     65,  10, 246, 208, 131, 127, 
    128, 255, 134,  77, 245,  52, 
      7, 189, 120,  42, 222,  60, 
    120, 247,  34, 244,  80, 170, 
    239, 219, 204, 166, 107, 181, 
    183,   5,   5, 247, 131, 239, 
    189, 249, 118, 223, 190, 253, 
     50, 179, 129, 153, 190,  60, 
      5, 144, 179, 231, 223,  34, 
    127, 249,  74, 251, 219, 130, 
    168, 139, 199, 156, 130,  12, 
    188, 206,  33,  18, 237,  58, 
    136,  68,  87,  16,  80,  32, 
    137, 108,  78, 189, 204,  61, 
    230, 109,  38, 238, 133, 172, 
     84,  10,  35,  31,  63,  12, 
    140, 240, 144, 206,  50,  81, 
     59, 165, 121, 149, 137, 254, 
     23, 152, 176, 129, 118,  64, 
    152, 129,  20,   2,   3, 117, 
    252, 170,  14,  48,  70,  47, 
    131, 137,  49, 108,  97,  12, 
     64,  71, 123,  80,  25, 225, 
    207, 184, 206,  68, 159, 147, 
      0, 111,  97,  47, 100,  61, 
     93, 193, 239, 253, 219, 104, 
    251,  58, 138,  96, 184,  78, 
      0, 214,  35,  10, 204,  17, 
    106, 128,  42,   4,  35, 156, 
    179, 166, 214, 152,  11, 252, 
    182,  93, 230,  73, 248, 193, 
      8, 231,  33,  68, 168, 209, 
     47,  69,  46,  71, 206, 162, 
     64, 100, 113, 150, 151, 142, 
     10, 254,   3, 152,   8,  12, 
    204,   5, 190, 197,  73, 102, 
    123,  70, 218,   8, 239, 227, 
    219,  35, 106, 180, 192, 173, 
      2, 237,  67, 133, 154, 167, 
    110,  31, 207, 134, 218, 128, 
     70, 195, 168, 230,  63, 133, 
     76, 211, 156, 217,  45, 231, 
    220, 126, 126, 158,  23, 151, 
    181, 199, 218, 139, 232,  89, 
    214, 179,  17, 189, 192, 122, 
     33, 162, 139, 172, 139, 161, 
     14, 251, 187, 193, 251, 204, 
     46, 172,  53,  95, 172, 255, 
    203,  76,  60, 198, 195, 196, 
     99,  60,  76,  60, 198, 195, 
    196,  99,  60,  76,  60, 198, 
    195, 196,  99,  60,  76,  60, 
    198,  70, 170, 155,  91,  59, 
    117, 251, 112,  71,  26,   7, 
     59, 188, 127, 123,  71, 150, 
    165, 132, 149,  81, 148, 201, 
     42, 145, 201, 169, 103, 180, 
    217,  34, 183, 241,  77,  74, 
    156, 204,  10,  74,  80, 159, 
     34, 209, 175, 132,  56, 167, 
     72,  14,  40,  33,  47,  42, 
     50,   6, 149,  48,  46, 171, 
    170, 187, 217, 146,  57, 211, 
     49, 220, 148,  99, 246,  88, 
     78, 215, 105, 219,  49, 115, 
    141, 247,  65,  15, 219, 218, 
    144,  50,  91,  55, 164,  83, 
     79, 231, 178, 212, 200,  90, 
     27, 249,   7,  91,  47,  93, 
    106, 182, 234, 249, 195,  23, 
    240,  96, 233, 218,  20,  53, 
     62, 145, 109,  55, 211, 156, 
    133, 237,  52,  45, 206, 210, 
     62, 213, 164,  52,  41, 145, 
     22, 138, 114, 230,  16, 185, 
    169,  33, 234, 177, 134, 242, 
     38, 123,  63, 182, 135,  37, 
    122, 222, 234,  67, 110, 111, 
    128, 127, 133,  21,  20, 116, 
     16,  40,  83, 224, 152, 209, 
     65, 240,  24,  95, 203,  34, 
    107,  28, 232, 243, 205, 158, 
    206, 131, 204,  12,  83,   4, 
    187, 244, 224, 152, 194, 251, 
    242, 246, 105, 115, 241, 214, 
    153, 167, 159, 191, 191,  26, 
    197,  24, 184, 161,  55, 239, 
    189,  58,  15,  48, 163, 189, 
    137, 222,  32, 252,   6,  79, 
    215,  79, 232, 140,  35,  16, 
    246, 254,  78, 112, 154, 101, 
    104,  47,  27, 250, 190, 175, 
     51, 188, 116,  51, 143, 251, 
    216, 214, 247, 239,  51, 225, 
    116, 244, 166,  55,  60,  61, 
    230, 213, 252, 249,  82, 249, 
    177,  55, 190, 226, 215, 188, 
    209, 149, 245, 242, 146,  63, 
     51,  61, 238, 213, 214, 151, 
    188, 169, 229, 197,  82, 121, 
    189, 230, 221,  89, 123,  88, 
     93,  89,  45, 151, 188, 153, 
    226, 218, 147, 123, 143, 202, 
    195, 171, 213, 229, 197, 233, 
    114, 205, 191,  91, 169, 112, 
    249, 252, 228,  84, 231, 202, 
    132,  63, 230,  95, 171, 150, 
    138, 244,  19, 206, 150, 252, 
     28,   0,   0,   0,  88,  72, 
     83,  72,   8,   0,   0,   0, 
     97,  60,  21, 121, 218, 245, 
    143,  68,  88,  80,  68,  80, 
     92,   0,   0,   0,  68,  58, 
     92,  65,  84,  71,  92, 115, 
    116,  95, 100, 101, 118,  92, 
     75, 105, 116, 115,  92,  68, 
    105, 114, 101,  99, 116,  88, 
     84,  75,  92, 115, 114,  99, 
     92,  83, 104,  97, 100, 101, 
    114, 115,  92,  67, 111, 109, 
    112, 105, 108, 101, 100,  92, 
     88,  98, 111, 120,  79, 110, 
    101,  65, 108, 112, 104,  97, 
     84, 101, 115, 116,  69, 102, 
    102, 101,  99, 116,  95,  80, 
     83,  65, 108, 112, 104,  97, 
     84, 101, 115, 116,  76, 116, 
     71, 116,  46, 112, 100,  98
};
