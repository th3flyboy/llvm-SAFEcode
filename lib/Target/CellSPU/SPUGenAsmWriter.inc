/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Writer Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void SPUAsmPrinter::printInstruction(const MachineInstr *MI, raw_ostream &O) {
  static const uint32_t OpInfo[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// PROLOG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    1428U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    1421U,	// BUNDLE
    1438U,	// LIFETIME_START
    1408U,	// LIFETIME_END
    2115U,	// ABSDB
    2892U,	// ADDXr32
    2892U,	// ADDXr64
    2892U,	// ADDXv2i64
    2892U,	// ADDXv4i32
    20485U,	// ADJCALLSTACKDOWN
    36869U,	// ADJCALLSTACKUP
    8391067U,	// AHIr16
    8391067U,	// AHIvec
    2262U,	// AHr16
    2262U,	// AHv8i16
    8390949U,	// AIf32
    8390949U,	// AIr32
    8390949U,	// AIv4f32
    8390949U,	// AIv4i32
    16779561U,	// ANDBIr8
    16779561U,	// ANDBIv16i8
    2178U,	// ANDCr128
    2178U,	// ANDCr16
    2178U,	// ANDCr32
    2178U,	// ANDCr64
    2178U,	// ANDCr8
    2178U,	// ANDCv16i8
    2178U,	// ANDCv16i8_conv
    2178U,	// ANDCv2i64
    2178U,	// ANDCv4i32
    2178U,	// ANDCv8i16
    16779680U,	// ANDHIi8i16
    16779680U,	// ANDHIr16
    8391072U,	// ANDHIv8i16
    8391052U,	// ANDIi16i32
    8391052U,	// ANDIi8i32
    8391052U,	// ANDIr32
    8391052U,	// ANDIv4i32
    2205U,	// ANDfabs32
    2205U,	// ANDfabs64
    2205U,	// ANDfabsvec
    2205U,	// ANDi16i32
    2205U,	// ANDr128
    2205U,	// ANDr16
    2205U,	// ANDr32
    2205U,	// ANDr64
    2205U,	// ANDr8
    2205U,	// ANDv16i8
    2205U,	// ANDv2i64
    2205U,	// ANDv4i32
    2205U,	// ANDv8i16
    2129U,	// AVGB
    2051U,	// Ar32
    2051U,	// Av16i8
    2051U,	// Av4i32
    2903U,	// BGXvec
    2250U,	// BGr32
    2250U,	// BGr64
    2250U,	// BGv2i64
    2250U,	// BGv4i32
    51500U,	// BI
    52450U,	// BISL
    7369U,	// BISLED_00
    7369U,	// BISLED_0D
    7369U,	// BISLED_E0
    7369U,	// BISLED_ED
    8860U,	// BR
    8243U,	// BRA
    7382U,	// BRASL
    68511U,	// BRHNZr16
    68511U,	// BRHNZv8i16
    68500U,	// BRHZr16
    68500U,	// BRHZv8i16
    68518U,	// BRNZr32
    68518U,	// BRNZv4i32
    9453U,	// BRSL
    68524U,	// BRZr32
    68524U,	// BRZv4i32
    133261U,	// CBD
    265026U,	// CBX
    133266U,	// CDD
    133266U,	// CDDf64
    265031U,	// CDX
    265031U,	// CDXf64
    8390976U,	// CEQBIr8
    8390976U,	// CEQBIv16i8
    2153U,	// CEQBr8
    2153U,	// CEQBv16i8
    8391092U,	// CEQHIr16
    8391092U,	// CEQHIv8i16
    2306U,	// CEQHr16
    2306U,	// CEQHv8i16
    8391177U,	// CEQIr32
    8391177U,	// CEQIv4i32
    2699U,	// CEQr32
    2699U,	// CEQv4i32
    2099918U,	// CFSif32
    2099918U,	// CFSiv4f32
    2100010U,	// CFUif32
    2100010U,	// CFUiv4f32
    8391006U,	// CGTBIr8
    8391006U,	// CGTBIv16i8
    2159U,	// CGTBr8
    2159U,	// CGTBv16i8
    8391106U,	// CGTHIr16
    8391106U,	// CGTHIv8i16
    2312U,	// CGTHr16
    2312U,	// CGTHv8i16
    8391195U,	// CGTIf32
    8391195U,	// CGTIr32
    8391195U,	// CGTIv4f32
    8391195U,	// CGTIv4i32
    2780U,	// CGTr32
    2780U,	// CGTv4i32
    2254U,	// CGr32
    2254U,	// CGr64
    2254U,	// CGv2i64
    2254U,	// CGv4i32
    133271U,	// CHD
    265052U,	// CHX
    8391013U,	// CLGTBIr8
    8391013U,	// CLGTBIv16i8
    2165U,	// CLGTBr8
    2165U,	// CLGTBv16i8
    8391113U,	// CLGTHIr16
    8391113U,	// CLGTHIv8i16
    2318U,	// CLGTHr16
    2318U,	// CLGTHv8i16
    8391207U,	// CLGTIr32
    8391207U,	// CLGTIv4i32
    2790U,	// CLGTr32
    2790U,	// CLGTv4i32
    4197274U,	// CLZr32
    4197274U,	// CLZv4i32
    4196476U,	// CNTBv16i8
    4196476U,	// CNTBv4i32
    4196476U,	// CNTBv8i16
    2099961U,	// CSiFf32
    2099961U,	// CSiFv4f32
    2099968U,	// CUiFf32
    2099968U,	// CUiFv4f32
    133307U,	// CWD
    133307U,	// CWDf32
    265073U,	// CWX
    265073U,	// CWXf32
    3325U,	// CellSDKa
    3430U,	// CellSDKaddx
    3346U,	// CellSDKah
    25562417U,	// CellSDKahi
    25562408U,	// CellSDKai
    3051U,	// CellSDKand
    16780295U,	// CellSDKandbi
    3043U,	// CellSDKandc
    8391735U,	// CellSDKandhi
    8391728U,	// CellSDKandi
    3338U,	// CellSDKbg
    3441U,	// CellSDKbgx
    3204U,	// CellSDKceq
    3014U,	// CellSDKceqb
    16780303U,	// CellSDKceqbi
    3057U,	// CellSDKceqh
    8391743U,	// CellSDKceqhi
    8391776U,	// CellSDKceqi
    3342U,	// CellSDKcg
    3252U,	// CellSDKcgt
    3021U,	// CellSDKcgtb
    16780319U,	// CellSDKcgtbi
    3064U,	// CellSDKcgth
    8391759U,	// CellSDKcgthi
    8391790U,	// CellSDKcgti
    3446U,	// CellSDKcgx
    3258U,	// CellSDKclgt
    3028U,	// CellSDKclgtb
    16780327U,	// CellSDKclgtbi
    3071U,	// CellSDKclgth
    8391767U,	// CellSDKclgthi
    8391797U,	// CellSDKclgti
    2993U,	// CellSDKdfa
    3197U,	// CellSDKdfm
    2999U,	// CellSDKdfma
    3236U,	// CellSDKdfms
    3006U,	// CellSDKdfnma
    3243U,	// CellSDKdfnms
    3230U,	// CellSDKdfs
    2994U,	// CellSDKfa
    3203U,	// CellSDKfceq
    3251U,	// CellSDKfcgt
    3210U,	// CellSDKfcmeq
    3265U,	// CellSDKfcmgt
    3198U,	// CellSDKfm
    67111864U,	// CellSDKfma
    67112101U,	// CellSDKfms
    67112108U,	// CellSDKfnms
    3231U,	// CellSDKfs
    3451U,	// CellSDKmpy
    67112192U,	// CellSDKmpya
    3362U,	// CellSDKmpyh
    3355U,	// CellSDKmpyhh
    3320U,	// CellSDKmpyhha
    3407U,	// CellSDKmpyhhau
    3416U,	// CellSDKmpyhhu
    8392003U,	// CellSDKmpyi
    3401U,	// CellSDKmpys
    3424U,	// CellSDKmpyu
    8391996U,	// CellSDKmpyui
    3050U,	// CellSDKnand
    3218U,	// CellSDKnor
    3219U,	// CellSDKor
    16780312U,	// CellSDKorbi
    3036U,	// CellSDKorc
    8391752U,	// CellSDKorhi
    8391784U,	// CellSDKori
    3334U,	// CellSDKsf
    3350U,	// CellSDKsfh
    25562422U,	// CellSDKsfhi
    25562412U,	// CellSDKsfi
    3436U,	// CellSDKsfx
    3224U,	// CellSDKxor
    16780311U,	// CellSDKxorbi
    8391751U,	// CellSDKxorhi
    8391783U,	// CellSDKxori
    2759U,	// DFNMSf64
    2759U,	// DFNMSv2f64
    1454U,	// ENOP
    2871U,	// EQVr128
    2871U,	// EQVr128_1
    2871U,	// EQVr128_2
    2871U,	// EQVr128_3
    2871U,	// EQVr16
    2871U,	// EQVr16_1
    2871U,	// EQVr16_2
    2871U,	// EQVr16_3
    2871U,	// EQVr32
    2871U,	// EQVr32_1
    2871U,	// EQVr32_2
    2871U,	// EQVr32_3
    2871U,	// EQVr64
    2871U,	// EQVr64_1
    2871U,	// EQVr64_2
    2871U,	// EQVr64_3
    2871U,	// EQVr8
    2871U,	// EQVr8_1
    2871U,	// EQVr8_2
    2871U,	// EQVr8_3
    2871U,	// EQVv16i8
    2871U,	// EQVv16i8_1
    2871U,	// EQVv16i8_2
    2871U,	// EQVv16i8_3
    2871U,	// EQVv2i64
    2871U,	// EQVv2i64_1
    2871U,	// EQVv2i64_2
    2871U,	// EQVv2i64_3
    2871U,	// EQVv4i32
    2871U,	// EQVv4i32_1
    2871U,	// EQVv4i32_2
    2871U,	// EQVv4i32_3
    2871U,	// EQVv8i16
    2871U,	// EQVv8i16_1
    2871U,	// EQVv8i16_2
    2871U,	// EQVv8i16_3
    2050U,	// FAf32
    2049U,	// FAf64
    2049U,	// FAv2f64
    2050U,	// FAv4f32
    2698U,	// FCEQf32
    2779U,	// FCGTf32
    2709U,	// FCMEQf32
    2802U,	// FCMGTf32
    4196533U,	// FESDf32
    4196533U,	// FESDvec
    2451U,	// FIf32
    2451U,	// FIv4f32
    67110932U,	// FMAf32
    2067U,	// FMAf64
    2067U,	// FMAv2f64
    67110932U,	// FMAv4f32
    67111618U,	// FMSf32
    2753U,	// FMSf64
    2753U,	// FMSv2f64
    67111618U,	// FMSv4f32
    2676U,	// FMf32
    2675U,	// FMf64
    2675U,	// FMv2f64
    2676U,	// FMv4f32
    2073U,	// FNMAf64
    2073U,	// FNMAv2f64
    67111624U,	// FNMSf32
    67111624U,	// FNMSv4f32
    4197046U,	// FRDSf64
    4197132U,	// FRESTf32
    4197132U,	// FRESTv4f32
    51373U,	// FSCRRf32
    10926U,	// FSCRWf32
    4196991U,	// FSM64r16
    4196991U,	// FSM64r32
    526649U,	// FSMBIv16i8
    526649U,	// FSMBIv2i64
    526649U,	// FSMBIv4i32
    526649U,	// FSMBIv8i16
    4196445U,	// FSMBv16i8
    4196445U,	// FSMBv16i8_r16
    4196604U,	// FSMHv8i16
    4196604U,	// FSMHv8i16_r16
    4196991U,	// FSMr16
    4196991U,	// FSMr32
    4196991U,	// FSMv4i32
    2749U,	// FSf32
    2748U,	// FSf64
    2748U,	// FSv2f64
    2749U,	// FSv4f32
    4196414U,	// GBBv16i8
    4196414U,	// GBBv16i8_r16
    4196414U,	// GBBv16i8_r32
    4196570U,	// GBHv8i16
    4196570U,	// GBHv8i16_r16
    4196570U,	// GBHv8i16_r32
    4196435U,	// GBv4i32
    4196435U,	// GBv4i32_r16
    4196435U,	// GBv4i32_r32
    667698U,	// HBRA
    94213U,	// HBR_LABEL
    789007U,	// HEQIr32
    4197008U,	// HEQr32
    789025U,	// HGTIr32
    4197089U,	// HGTr32
    789038U,	// HLGTIr32
    4197100U,	// HLGTr32
    919566U,	// ILAf32
    919566U,	// ILAf64
    1050638U,	// ILAhi
    1181710U,	// ILAlo
    1312782U,	// ILAlsa
    919566U,	// ILAr32
    919566U,	// ILAr64
    919566U,	// ILAv2i64
    919566U,	// ILAv4i32
    527140U,	// ILHUf32
    1051428U,	// ILHUhi
    527140U,	// ILHUr32
    527140U,	// ILHUr64
    527140U,	// ILHUv2i64
    527140U,	// ILHUv4i32
    1444087U,	// ILHr16
    1444087U,	// ILHr8
    1444087U,	// ILHv8i16
    1444463U,	// ILf32
    1444463U,	// ILf64
    1444463U,	// ILr32
    1444463U,	// ILr64
    1444463U,	// ILv2i64
    1444463U,	// ILv4i32
    4590180U,	// IOHLf32
    1575524U,	// IOHLlo
    4590180U,	// IOHLr32
    1706596U,	// IOHLv2i64
    1706596U,	// IOHLv4i32
    1453U,	// LNOP
    1837095U,	// LQAf32
    1837095U,	// LQAf64
    1837095U,	// LQAr128
    1837095U,	// LQAr16
    1837095U,	// LQAr32
    1837095U,	// LQAr64
    1837095U,	// LQAr8
    1837095U,	// LQAv16i8
    1837095U,	// LQAv2f64
    1837095U,	// LQAv2i64
    1837095U,	// LQAv4f32
    1837095U,	// LQAv4i32
    1837095U,	// LQAv8i16
    1968290U,	// LQDf32
    1968290U,	// LQDf64
    1968290U,	// LQDr128
    1968290U,	// LQDr16
    1968290U,	// LQDr32
    1968290U,	// LQDr64
    1968290U,	// LQDr8
    1968290U,	// LQDv16i8
    1968290U,	// LQDv2f64
    1968290U,	// LQDv2i64
    1968290U,	// LQDv4f32
    1968290U,	// LQDv4i32
    1968290U,	// LQDv8i16
    265057U,	// LQXf32
    265057U,	// LQXf64
    265057U,	// LQXr128
    265057U,	// LQXr16
    265057U,	// LQXr32
    265057U,	// LQXr64
    265057U,	// LQXr8
    265057U,	// LQXv16i8
    265057U,	// LQXv2f64
    265057U,	// LQXv2i64
    265057U,	// LQXv4f32
    265057U,	// LQXv4i32
    265057U,	// LQXv8i16
    4197024U,	// LRf32
    4197024U,	// LRf64
    4197024U,	// LRr128
    4197024U,	// LRr16
    4197024U,	// LRr32
    4197024U,	// LRr64
    4197024U,	// LRr8
    4197024U,	// LRv16i8
    4197024U,	// LRv2f64
    4197024U,	// LRv2i64
    4197024U,	// LRv4f32
    4197024U,	// LRv4i32
    4197024U,	// LRv8i16
    67110968U,	// MPYAr32
    67110968U,	// MPYAr32_sext
    67110968U,	// MPYAr32_sextinreg
    67110968U,	// MPYAv4i32
    2835U,	// MPYHHAUr32
    2835U,	// MPYHHAUvec
    2054U,	// MPYHHAr32
    2054U,	// MPYHHAvec
    2844U,	// MPYHHUr32
    2844U,	// MPYHHUv4i32
    2282U,	// MPYHHr32
    2282U,	// MPYHHv8i16
    2331U,	// MPYHr32
    2331U,	// MPYHv4i32
    8391262U,	// MPYIr16
    8391262U,	// MPYIvec
    2773U,	// MPYSr16
    2773U,	// MPYSv4i32
    8391227U,	// MPYUIr16
    8391227U,	// MPYUIvec
    2865U,	// MPYUr16
    2865U,	// MPYUr32
    2865U,	// MPYUv4i32
    2959U,	// MPYr16
    2959U,	// MPYv8i16
    2204U,	// NANDr128
    2204U,	// NANDr16
    2204U,	// NANDr32
    2204U,	// NANDr64
    2204U,	// NANDr8
    2204U,	// NANDv16i8
    2204U,	// NANDv2i64
    2204U,	// NANDv4i32
    2204U,	// NANDv8i16
    2724U,	// NORr128
    2724U,	// NORr16
    2724U,	// NORr32
    2724U,	// NORr64
    2724U,	// NORr8
    2724U,	// NORv16i8
    2724U,	// NORv2i64
    2724U,	// NORv4i32
    2724U,	// NORv8i16
    16779608U,	// ORBIr8
    16779608U,	// ORBIv16i8
    2184U,	// ORCr128
    2184U,	// ORCr16
    2184U,	// ORCr32
    2184U,	// ORCr64
    2184U,	// ORCr8
    2184U,	// ORCv16i8
    2184U,	// ORCv2i64
    2184U,	// ORCv4i32
    2184U,	// ORCv8i16
    8391100U,	// ORHIi8i16
    16779708U,	// ORHIr16
    16779708U,	// ORHIv8i16
    8391190U,	// ORIi16i32
    8391190U,	// ORIi8i32
    8391190U,	// ORIr32
    16779798U,	// ORIv4i32
    2924U,	// ORXv4i32
    2725U,	// ORf32
    2725U,	// ORf64
    2725U,	// ORr128
    2725U,	// ORr16
    2725U,	// ORr32
    2725U,	// ORr64
    2725U,	// ORr8
    2725U,	// ORv16i8
    2725U,	// ORv2f64
    2725U,	// ORv2i64
    2725U,	// ORv4f32
    2725U,	// ORv4i32
    2725U,	// ORv8i16
    1458U,	// RET
    33556945U,	// ROTHIr16
    33556945U,	// ROTHIr16_r32
    33556945U,	// ROTHIv8i16
    41945594U,	// ROTHMIr16
    41945594U,	// ROTHMIv8i16
    2680U,	// ROTHMr16
    2680U,	// ROTHMv8i16
    2325U,	// ROTHr16
    2325U,	// ROTHr16_r32
    2325U,	// ROTHv8i16
    33557045U,	// ROTIr32
    33557045U,	// ROTIr32_i16
    33557045U,	// ROTIr32_i8
    33557045U,	// ROTIv4i32
    33557045U,	// ROTIv4i32_i16
    33557045U,	// ROTIv4i32_i8
    41945495U,	// ROTMAHIr16
    41945495U,	// ROTMAHIv8i16
    2258U,	// ROTMAHr16
    2258U,	// ROTMAHv8i16
    50333985U,	// ROTMAIr32_i32
    50333985U,	// ROTMAIr64_i32
    50333985U,	// ROTMAIv2i64_i32
    50333985U,	// ROTMAIv4i32_i32
    2080U,	// ROTMAr32
    2080U,	// ROTMAv4i32
    50334210U,	// ROTMIr32
    50334210U,	// ROTMIv4i32
    2692U,	// ROTMr32
    2692U,	// ROTMv4i32
    33556971U,	// ROTQBIIr128
    33556971U,	// ROTQBIIr64
    33556971U,	// ROTQBIIv16i8
    33556971U,	// ROTQBIIv2i64
    33556971U,	// ROTQBIIv4i32
    33556971U,	// ROTQBIIv8i16
    2383U,	// ROTQBIr128
    2383U,	// ROTQBIr64
    2383U,	// ROTQBIv16i8
    2383U,	// ROTQBIv2i64
    2383U,	// ROTQBIv4i32
    2383U,	// ROTQBIv8i16
    2434U,	// ROTQBYBIv16i8_r32
    2434U,	// ROTQBYBIv2i64_r32
    2434U,	// ROTQBYBIv4i32_r32
    2434U,	// ROTQBYBIv8i16_r32
    33557077U,	// ROTQBYIi128
    33557077U,	// ROTQBYIv16i8
    33557077U,	// ROTQBYIv2i64
    33557077U,	// ROTQBYIv4f32
    33557077U,	// ROTQBYIv4i32
    33557077U,	// ROTQBYIv8i16
    33557077U,	// ROTQBYIvfi64
    2951U,	// ROTQBYi128
    2951U,	// ROTQBYv16i8
    2951U,	// ROTQBYv2f64
    2951U,	// ROTQBYv2i64
    2951U,	// ROTQBYv4f32
    2951U,	// ROTQBYv4i32
    2951U,	// ROTQBYv8i16
    50334168U,	// ROTQMBIIr128
    50334168U,	// ROTQMBIIr64
    50334168U,	// ROTQMBIIv16i8
    50334168U,	// ROTQMBIIv2i64
    50334168U,	// ROTQMBIIv4i32
    50334168U,	// ROTQMBIIv8i16
    2352U,	// ROTQMBIr128
    2352U,	// ROTQMBIr64
    2352U,	// ROTQMBIv16i8
    2352U,	// ROTQMBIv2i64
    2352U,	// ROTQMBIv4i32
    2352U,	// ROTQMBIv8i16
    2413U,	// ROTQMBYBIr128
    2413U,	// ROTQMBYBIv16i8
    2413U,	// ROTQMBYBIv2i64
    2413U,	// ROTQMBYBIv4i32
    2413U,	// ROTQMBYBIv8i16
    50334274U,	// ROTQMBYIr128
    50334274U,	// ROTQMBYIr128_zext_r16
    50334274U,	// ROTQMBYIr128_zext_r32
    50334274U,	// ROTQMBYIr128_zext_r64
    50334274U,	// ROTQMBYIr128_zext_r8
    50334274U,	// ROTQMBYIr64
    50334274U,	// ROTQMBYIv16i8
    50334274U,	// ROTQMBYIv2i64
    50334274U,	// ROTQMBYIv4i32
    50334274U,	// ROTQMBYIv8i16
    2934U,	// ROTQMBYr128
    2934U,	// ROTQMBYr64
    2934U,	// ROTQMBYv16i8
    2934U,	// ROTQMBYv2i64
    2934U,	// ROTQMBYv4i32
    2934U,	// ROTQMBYv8i16
    2823U,	// ROTr32
    2823U,	// ROTr32_r16_anyext
    2823U,	// ROTr32_r8_anyext
    2823U,	// ROTv4i32
    67110999U,	// SELBf32_cond
    67110999U,	// SELBf64_cond
    67110999U,	// SELBr128
    67110999U,	// SELBr16
    67110999U,	// SELBr16_cond
    67110999U,	// SELBr32
    67110999U,	// SELBr32_cond
    67110999U,	// SELBr64
    67110999U,	// SELBr64_cond
    67110999U,	// SELBr8
    67110999U,	// SELBr8_cond
    67110999U,	// SELBv16i8
    67110999U,	// SELBv16i8_cond
    67110999U,	// SELBv16i8_vcond
    67110999U,	// SELBv2i64
    67110999U,	// SELBv2i64_cond
    67110999U,	// SELBv2i64_vcond
    67110999U,	// SELBv4f32_cond
    67110999U,	// SELBv4i32
    67110999U,	// SELBv4i32_cond
    67110999U,	// SELBv4i32_vcond
    67110999U,	// SELBv8i16
    67110999U,	// SELBv8i16_cond
    67110999U,	// SELBv8i16_vcond
    8391079U,	// SFHIr16
    8391079U,	// SFHIvec
    2277U,	// SFHr16
    2277U,	// SFHvec
    8391058U,	// SFIr32
    8391058U,	// SFIvec
    2898U,	// SFXr32
    2898U,	// SFXr64
    2898U,	// SFXv2i64
    2898U,	// SFXv4i32
    2246U,	// SFr32
    2246U,	// SFvec
    33556909U,	// SHLHIr16
    33556909U,	// SHLHIv8i16
    2289U,	// SHLHr16
    2289U,	// SHLHr16_r32
    2289U,	// SHLHv8i16
    33556980U,	// SHLIr32
    33556980U,	// SHLIv4i32
    33556962U,	// SHLQBIIv16i8
    33556962U,	// SHLQBIIv2f64
    33556962U,	// SHLQBIIv2i64
    33556962U,	// SHLQBIIv4f32
    33556962U,	// SHLQBIIv4i32
    33556962U,	// SHLQBIIv8i16
    2375U,	// SHLQBIr128
    2375U,	// SHLQBIv16i8
    2375U,	// SHLQBIv2f64
    2375U,	// SHLQBIv2i64
    2375U,	// SHLQBIv4f32
    2375U,	// SHLQBIv4i32
    2375U,	// SHLQBIv8i16
    2424U,	// SHLQBYBIr128
    2424U,	// SHLQBYBIv16i8
    2424U,	// SHLQBYBIv2f64
    2424U,	// SHLQBYBIv2i64
    2424U,	// SHLQBYBIv4f32
    2424U,	// SHLQBYBIv4i32
    2424U,	// SHLQBYBIv8i16
    33557068U,	// SHLQBYIr128
    33557068U,	// SHLQBYIv16i8
    33557068U,	// SHLQBYIv2f64
    33557068U,	// SHLQBYIv2i64
    33557068U,	// SHLQBYIv4f32
    33557068U,	// SHLQBYIv4i32
    33557068U,	// SHLQBYIv8i16
    2943U,	// SHLQBYr128
    2943U,	// SHLQBYv16i8
    2943U,	// SHLQBYv2f64
    2943U,	// SHLQBYv2i64
    2943U,	// SHLQBYv4f32
    2943U,	// SHLQBYv4i32
    2943U,	// SHLQBYv8i16
    2666U,	// SHLr32
    2666U,	// SHLv4i32
    67110986U,	// SHUFBgprc
    67110986U,	// SHUFBv16i8
    67110986U,	// SHUFBv16i8_m32
    67110986U,	// SHUFBv2f64
    67110986U,	// SHUFBv2f64_m32
    67110986U,	// SHUFBv2i64
    67110986U,	// SHUFBv2i64_m32
    67110986U,	// SHUFBv4f32
    67110986U,	// SHUFBv4f32_m32
    67110986U,	// SHUFBv4i32
    67110986U,	// SHUFBv4i32_m32
    67110986U,	// SHUFBv8i16
    67110986U,	// SHUFBv8i16_m32
    1837100U,	// STQAf32
    1837100U,	// STQAf64
    1837100U,	// STQAr128
    1837100U,	// STQAr16
    1837100U,	// STQAr32
    1837100U,	// STQAr64
    1837100U,	// STQAr8
    1837100U,	// STQAv16i8
    1837100U,	// STQAv2f64
    1837100U,	// STQAv2i64
    1837100U,	// STQAv4f32
    1837100U,	// STQAv4i32
    1837100U,	// STQAv8i16
    1968295U,	// STQDf32
    1968295U,	// STQDf64
    1968295U,	// STQDr128
    1968295U,	// STQDr16
    1968295U,	// STQDr32
    1968295U,	// STQDr64
    1968295U,	// STQDr8
    1968295U,	// STQDv16i8
    1968295U,	// STQDv2f64
    1968295U,	// STQDv2i64
    1968295U,	// STQDv4f32
    1968295U,	// STQDv4i32
    1968295U,	// STQDv8i16
    265062U,	// STQXf32
    265062U,	// STQXf64
    265062U,	// STQXr128
    265062U,	// STQXr16
    265062U,	// STQXr32
    265062U,	// STQXr64
    265062U,	// STQXr8
    265062U,	// STQXv16i8
    265062U,	// STQXv2f64
    265062U,	// STQXv2i64
    265062U,	// STQXv4f32
    265062U,	// STQXv4i32
    265062U,	// STQXv8i16
    2147U,	// SUMB
    16779607U,	// XORBIr8
    16779607U,	// XORBIv16i8
    8391099U,	// XORHIr16
    16779707U,	// XORHIv8i16
    8391189U,	// XORIr32
    8391189U,	// XORIv4i32
    2729U,	// XORfneg32
    2729U,	// XORfneg64
    2729U,	// XORfnegvec
    2729U,	// XORr128
    2729U,	// XORr16
    2729U,	// XORr32
    2729U,	// XORr64
    2729U,	// XORr8
    2729U,	// XORv16i8
    2729U,	// XORv2i64
    2729U,	// XORv4i32
    2729U,	// XORv8i16
    4196575U,	// XSBHr16
    4196575U,	// XSBHr32
    4196575U,	// XSBHr64
    4196575U,	// XSBHr8
    4196575U,	// XSBHv16i8
    4197180U,	// XSHWr16
    4197180U,	// XSHWr32
    4197180U,	// XSHWr64
    4197180U,	// XSHWv4i32
    4196544U,	// XSWDr64
    4196544U,	// XSWDr64_inreg
    4196544U,	// XSWDv2i64
    0U
  };

  const char AsmStrs[] = {
  /* 0 */ 'd', 'f', 'a', 9, 0,
  /* 5 */ 'm', 'p', 'y', 'h', 'h', 'a', 9, 0,
  /* 13 */ 'i', 'l', 'a', 9, 0,
  /* 18 */ 'd', 'f', 'm', 'a', 9, 0,
  /* 24 */ 'd', 'f', 'n', 'm', 'a', 9, 0,
  /* 31 */ 'r', 'o', 't', 'm', 'a', 9, 0,
  /* 38 */ 'l', 'q', 'a', 9, 0,
  /* 43 */ 's', 't', 'q', 'a', 9, 0,
  /* 49 */ 'h', 'b', 'r', 'a', 9, 0,
  /* 55 */ 'm', 'p', 'y', 'a', 9, 0,
  /* 61 */ 'g', 'b', 'b', 9, 0,
  /* 66 */ 'a', 'b', 's', 'd', 'b', 9, 0,
  /* 73 */ 's', 'h', 'u', 'f', 'b', 9, 0,
  /* 80 */ 'a', 'v', 'g', 'b', 9, 0,
  /* 86 */ 's', 'e', 'l', 'b', 9, 0,
  /* 92 */ 'f', 's', 'm', 'b', 9, 0,
  /* 98 */ 's', 'u', 'm', 'b', 9, 0,
  /* 104 */ 'c', 'e', 'q', 'b', 9, 0,
  /* 110 */ 'c', 'g', 't', 'b', 9, 0,
  /* 116 */ 'c', 'l', 'g', 't', 'b', 9, 0,
  /* 123 */ 'c', 'n', 't', 'b', 9, 0,
  /* 129 */ 'a', 'n', 'd', 'c', 9, 0,
  /* 135 */ 'o', 'r', 'c', 9, 0,
  /* 140 */ 'c', 'b', 'd', 9, 0,
  /* 145 */ 'c', 'd', 'd', 9, 0,
  /* 150 */ 'c', 'h', 'd', 9, 0,
  /* 155 */ 'n', 'a', 'n', 'd', 9, 0,
  /* 161 */ 'l', 'q', 'd', 9, 0,
  /* 166 */ 's', 't', 'q', 'd', 9, 0,
  /* 172 */ 'f', 's', 'c', 'r', 'r', 'd', 9, 0,
  /* 180 */ 'f', 'e', 's', 'd', 9, 0,
  /* 186 */ 'c', 'w', 'd', 9, 0,
  /* 191 */ 'x', 's', 'w', 'd', 9, 0,
  /* 197 */ 's', 'f', 9, 0,
  /* 201 */ 'b', 'g', 9, 0,
  /* 205 */ 'c', 'g', 9, 0,
  /* 209 */ 'r', 'o', 't', 'm', 'a', 'h', 9, 0,
  /* 217 */ 'g', 'b', 'h', 9, 0,
  /* 222 */ 'x', 's', 'b', 'h', 9, 0,
  /* 228 */ 's', 'f', 'h', 9, 0,
  /* 233 */ 'm', 'p', 'y', 'h', 'h', 9, 0,
  /* 240 */ 's', 'h', 'l', 'h', 9, 0,
  /* 246 */ 'i', 'l', 'h', 9, 0,
  /* 251 */ 'f', 's', 'm', 'h', 9, 0,
  /* 257 */ 'c', 'e', 'q', 'h', 9, 0,
  /* 263 */ 'c', 'g', 't', 'h', 9, 0,
  /* 269 */ 'c', 'l', 'g', 't', 'h', 9, 0,
  /* 276 */ 'r', 'o', 't', 'h', 9, 0,
  /* 282 */ 'm', 'p', 'y', 'h', 9, 0,
  /* 288 */ 'r', 'o', 't', 'm', 'a', 'i', 9, 0,
  /* 296 */ 'a', 'n', 'd', 'b', 'i', 9, 0,
  /* 303 */ 'r', 'o', 't', 'q', 'm', 'b', 'i', 9, 0,
  /* 312 */ 'f', 's', 'm', 'b', 'i', 9, 0,
  /* 319 */ 'c', 'e', 'q', 'b', 'i', 9, 0,
  /* 326 */ 's', 'h', 'l', 'q', 'b', 'i', 9, 0,
  /* 334 */ 'r', 'o', 't', 'q', 'b', 'i', 9, 0,
  /* 342 */ 'x', 'o', 'r', 'b', 'i', 9, 0,
  /* 349 */ 'c', 'g', 't', 'b', 'i', 9, 0,
  /* 356 */ 'c', 'l', 'g', 't', 'b', 'i', 9, 0,
  /* 364 */ 'r', 'o', 't', 'q', 'm', 'b', 'y', 'b', 'i', 9, 0,
  /* 375 */ 's', 'h', 'l', 'q', 'b', 'y', 'b', 'i', 9, 0,
  /* 385 */ 'r', 'o', 't', 'q', 'b', 'y', 'b', 'i', 9, 0,
  /* 395 */ 'a', 'n', 'd', 'i', 9, 0,
  /* 401 */ 's', 'f', 'i', 9, 0,
  /* 406 */ 'r', 'o', 't', 'm', 'a', 'h', 'i', 9, 0,
  /* 415 */ 'a', 'n', 'd', 'h', 'i', 9, 0,
  /* 422 */ 's', 'f', 'h', 'i', 9, 0,
  /* 428 */ 's', 'h', 'l', 'h', 'i', 9, 0,
  /* 435 */ 'c', 'e', 'q', 'h', 'i', 9, 0,
  /* 442 */ 'x', 'o', 'r', 'h', 'i', 9, 0,
  /* 449 */ 'c', 'g', 't', 'h', 'i', 9, 0,
  /* 456 */ 'c', 'l', 'g', 't', 'h', 'i', 9, 0,
  /* 464 */ 'r', 'o', 't', 'h', 'i', 9, 0,
  /* 471 */ 'r', 'o', 't', 'q', 'm', 'b', 'i', 'i', 9, 0,
  /* 481 */ 's', 'h', 'l', 'q', 'b', 'i', 'i', 9, 0,
  /* 490 */ 'r', 'o', 't', 'q', 'b', 'i', 'i', 9, 0,
  /* 499 */ 's', 'h', 'l', 'i', 9, 0,
  /* 505 */ 'r', 'o', 't', 'h', 'm', 'i', 9, 0,
  /* 513 */ 'r', 'o', 't', 'm', 'i', 9, 0,
  /* 520 */ 'c', 'e', 'q', 'i', 9, 0,
  /* 526 */ 'h', 'e', 'q', 'i', 9, 0,
  /* 532 */ 'x', 'o', 'r', 'i', 9, 0,
  /* 538 */ 'c', 'g', 't', 'i', 9, 0,
  /* 544 */ 'h', 'g', 't', 'i', 9, 0,
  /* 550 */ 'c', 'l', 'g', 't', 'i', 9, 0,
  /* 557 */ 'h', 'l', 'g', 't', 'i', 9, 0,
  /* 564 */ 'r', 'o', 't', 'i', 9, 0,
  /* 570 */ 'm', 'p', 'y', 'u', 'i', 9, 0,
  /* 577 */ 'r', 'o', 't', 'q', 'm', 'b', 'y', 'i', 9, 0,
  /* 587 */ 's', 'h', 'l', 'q', 'b', 'y', 'i', 9, 0,
  /* 596 */ 'r', 'o', 't', 'q', 'b', 'y', 'i', 9, 0,
  /* 605 */ 'm', 'p', 'y', 'i', 9, 0,
  /* 611 */ 'i', 'o', 'h', 'l', 9, 0,
  /* 617 */ 's', 'h', 'l', 9, 0,
  /* 622 */ 'i', 'l', 9, 0,
  /* 626 */ 'd', 'f', 'm', 9, 0,
  /* 631 */ 'r', 'o', 't', 'h', 'm', 9, 0,
  /* 638 */ 'f', 's', 'm', 9, 0,
  /* 643 */ 'r', 'o', 't', 'm', 9, 0,
  /* 649 */ 'f', 'c', 'e', 'q', 9, 0,
  /* 655 */ 'h', 'e', 'q', 9, 0,
  /* 660 */ 'f', 'c', 'm', 'e', 'q', 9, 0,
  /* 667 */ 'b', 'r', 9, 0,
  /* 671 */ 'l', 'r', 9, 0,
  /* 675 */ 'n', 'o', 'r', 9, 0,
  /* 680 */ 'x', 'o', 'r', 9, 0,
  /* 685 */ 'f', 's', 'c', 'r', 'w', 'r', 9, 0,
  /* 693 */ 'f', 'r', 'd', 's', 9, 0,
  /* 699 */ 'd', 'f', 's', 9, 0,
  /* 704 */ 'd', 'f', 'm', 's', 9, 0,
  /* 710 */ 'd', 'f', 'n', 'm', 's', 9, 0,
  /* 717 */ 'c', 'f', 'l', 't', 's', 9, 0,
  /* 724 */ 'm', 'p', 'y', 's', 9, 0,
  /* 730 */ 'f', 'c', 'g', 't', 9, 0,
  /* 736 */ 'h', 'g', 't', 9, 0,
  /* 741 */ 'c', 'l', 'g', 't', 9, 0,
  /* 747 */ 'h', 'l', 'g', 't', 9, 0,
  /* 753 */ 'f', 'c', 'm', 'g', 't', 9, 0,
  /* 760 */ 'c', 's', 'f', 'l', 't', 9, 0,
  /* 767 */ 'c', 'u', 'f', 'l', 't', 9, 0,
  /* 774 */ 'r', 'o', 't', 9, 0,
  /* 779 */ 'f', 'r', 'e', 's', 't', 9, 0,
  /* 786 */ 'm', 'p', 'y', 'h', 'h', 'a', 'u', 9, 0,
  /* 795 */ 'm', 'p', 'y', 'h', 'h', 'u', 9, 0,
  /* 803 */ 'i', 'l', 'h', 'u', 9, 0,
  /* 809 */ 'c', 'f', 'l', 't', 'u', 9, 0,
  /* 816 */ 'm', 'p', 'y', 'u', 9, 0,
  /* 822 */ 'e', 'q', 'v', 9, 0,
  /* 827 */ 'x', 's', 'h', 'w', 9, 0,
  /* 833 */ 'c', 'b', 'x', 9, 0,
  /* 838 */ 'c', 'd', 'x', 9, 0,
  /* 843 */ 'a', 'd', 'd', 'x', 9, 0,
  /* 849 */ 's', 'f', 'x', 9, 0,
  /* 854 */ 'b', 'g', 'x', 9, 0,
  /* 859 */ 'c', 'h', 'x', 9, 0,
  /* 864 */ 'l', 'q', 'x', 9, 0,
  /* 869 */ 's', 't', 'q', 'x', 9, 0,
  /* 875 */ 'o', 'r', 'x', 9, 0,
  /* 880 */ 'c', 'w', 'x', 9, 0,
  /* 885 */ 'r', 'o', 't', 'q', 'm', 'b', 'y', 9, 0,
  /* 894 */ 's', 'h', 'l', 'q', 'b', 'y', 9, 0,
  /* 902 */ 'r', 'o', 't', 'q', 'b', 'y', 9, 0,
  /* 910 */ 'm', 'p', 'y', 9, 0,
  /* 915 */ 'b', 'r', 'h', 'z', 9, 0,
  /* 921 */ 'c', 'l', 'z', 9, 0,
  /* 926 */ 'b', 'r', 'h', 'n', 'z', 9, 0,
  /* 933 */ 'b', 'r', 'n', 'z', 9, 0,
  /* 939 */ 'b', 'r', 'z', 9, 0,
  /* 944 */ 'd', 'f', 'a', 9, 32, 0,
  /* 950 */ 'd', 'f', 'm', 'a', 9, 32, 0,
  /* 957 */ 'd', 'f', 'n', 'm', 'a', 9, 32, 0,
  /* 965 */ 'c', 'e', 'q', 'b', 9, 32, 0,
  /* 972 */ 'c', 'g', 't', 'b', 9, 32, 0,
  /* 979 */ 'c', 'l', 'g', 't', 'b', 9, 32, 0,
  /* 987 */ 'a', 'd', 'd', 'c', 9, 32, 0,
  /* 994 */ 'a', 'n', 'd', 'c', 9, 32, 0,
  /* 1001 */ 'n', 'a', 'n', 'd', 9, 32, 0,
  /* 1008 */ 'c', 'e', 'q', 'h', 9, 32, 0,
  /* 1015 */ 'c', 'g', 't', 'h', 9, 32, 0,
  /* 1022 */ 'c', 'l', 'g', 't', 'h', 9, 32, 0,
  /* 1030 */ 'a', 'n', 'd', 'b', 'i', 9, 32, 0,
  /* 1038 */ 'c', 'e', 'q', 'b', 'i', 9, 32, 0,
  /* 1046 */ 'x', 'o', 'r', 'b', 'i', 9, 32, 0,
  /* 1054 */ 'c', 'g', 't', 'b', 'i', 9, 32, 0,
  /* 1062 */ 'c', 'l', 'g', 't', 'b', 'i', 9, 32, 0,
  /* 1071 */ 'a', 'n', 'd', 'i', 9, 32, 0,
  /* 1078 */ 'a', 'n', 'd', 'h', 'i', 9, 32, 0,
  /* 1086 */ 'c', 'e', 'q', 'h', 'i', 9, 32, 0,
  /* 1094 */ 'x', 'o', 'r', 'h', 'i', 9, 32, 0,
  /* 1102 */ 'c', 'g', 't', 'h', 'i', 9, 32, 0,
  /* 1110 */ 'c', 'l', 'g', 't', 'h', 'i', 9, 32, 0,
  /* 1119 */ 'c', 'e', 'q', 'i', 9, 32, 0,
  /* 1126 */ 'x', 'o', 'r', 'i', 9, 32, 0,
  /* 1133 */ 'c', 'g', 't', 'i', 9, 32, 0,
  /* 1140 */ 'c', 'l', 'g', 't', 'i', 9, 32, 0,
  /* 1148 */ 'd', 'f', 'm', 9, 32, 0,
  /* 1154 */ 'f', 'c', 'e', 'q', 9, 32, 0,
  /* 1161 */ 'f', 'c', 'm', 'e', 'q', 9, 32, 0,
  /* 1169 */ 'n', 'o', 'r', 9, 32, 0,
  /* 1175 */ 'x', 'o', 'r', 9, 32, 0,
  /* 1181 */ 'd', 'f', 's', 9, 32, 0,
  /* 1187 */ 'd', 'f', 'm', 's', 9, 32, 0,
  /* 1194 */ 'd', 'f', 'n', 'm', 's', 9, 32, 0,
  /* 1202 */ 'f', 'c', 'g', 't', 9, 32, 0,
  /* 1209 */ 'c', 'l', 'g', 't', 9, 32, 0,
  /* 1216 */ 'f', 'c', 'm', 'g', 't', 9, 32, 0,
  /* 1224 */ 'b', 'i', 's', 'l', 'e', 'd', 9, '$', 'l', 'r', ',', 32, 0,
  /* 1237 */ 'b', 'r', 'a', 's', 'l', 9, '$', 'l', 'r', ',', 32, 0,
  /* 1249 */ 'b', 'i', 's', 'l', 9, '$', 'l', 'r', ',', 32, 0,
  /* 1260 */ 'b', 'r', 's', 'l', 9, '$', 'l', 'r', ',', 32, 0,
  /* 1271 */ 'm', 'p', 'y', 'h', 'h', 'a', 32, 0,
  /* 1279 */ 'm', 'p', 'y', 'a', 32, 0,
  /* 1285 */ 's', 'f', 32, 0,
  /* 1289 */ 'b', 'g', 32, 0,
  /* 1293 */ 'c', 'g', 32, 0,
  /* 1297 */ 'a', 'h', 32, 0,
  /* 1301 */ 's', 'f', 'h', 32, 0,
  /* 1306 */ 'm', 'p', 'y', 'h', 'h', 32, 0,
  /* 1313 */ 'm', 'p', 'y', 'h', 32, 0,
  /* 1319 */ 'a', 'i', 32, 0,
  /* 1323 */ 's', 'f', 'i', 32, 0,
  /* 1328 */ 'a', 'h', 'i', 32, 0,
  /* 1333 */ 's', 'f', 'h', 'i', 32, 0,
  /* 1339 */ 'm', 'p', 'y', 'u', 'i', 32, 0,
  /* 1346 */ 'm', 'p', 'y', 'i', 32, 0,
  /* 1352 */ 'm', 'p', 'y', 's', 32, 0,
  /* 1358 */ 'm', 'p', 'y', 'h', 'h', 'a', 'u', 32, 0,
  /* 1367 */ 'm', 'p', 'y', 'h', 'h', 'u', 32, 0,
  /* 1375 */ 'm', 'p', 'y', 'u', 32, 0,
  /* 1381 */ 'a', 'd', 'd', 'x', 32, 0,
  /* 1387 */ 's', 'f', 'x', 32, 0,
  /* 1392 */ 'b', 'g', 'x', 32, 0,
  /* 1397 */ 'c', 'g', 'x', 32, 0,
  /* 1402 */ 'm', 'p', 'y', 32, 0,
  /* 1407 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1420 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1427 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1437 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1452 */ 'l', 'n', 'o', 'p', 0,
  /* 1457 */ 'b', 'i', 9, '$', 'l', 'r', 0,
  };

  O << "\t";

  // Emit the opcode for the instruction.
  uint32_t Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 2047)-1;


  // Fragment 0 encoded into 3 bits for 7 unique commands.
  switch ((Bits >> 11) & 7) {
  default:   // unreachable.
  case 0:
    // DBG_VALUE, BUNDLE, LIFETIME_START, LIFETIME_END, ENOP, LNOP, RET
    return;
    break;
  case 1:
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHIr16, AHIvec, AHr16, ...
    printOperand(MI, 0, O); 
    break;
  case 2:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP
    PrintSpecial(MI, O, "comment"); 
    break;
  case 3:
    // BISLED_00, BISLED_0D, BISLED_E0, BISLED_ED, BRASL
    printCallOperand(MI, 0, O); 
    return;
    break;
  case 4:
    // BR, BRA, BRSL
    printPCRelativeOperand(MI, 0, O); 
    return;
    break;
  case 5:
    // FSCRWf32
    printOperand(MI, 1, O); 
    return;
    break;
  case 6:
    // HBRA, HBR_LABEL
    printHBROperand(MI, 0, O); 
    break;
  }


  // Fragment 1 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 14) & 7) {
  default:   // unreachable.
  case 0:
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHIr16, AHIvec, AHr16, ...
    O << ", "; 
    break;
  case 1:
    // ADJCALLSTACKDOWN
    O << " ADJCALLSTACKDOWN"; 
    return;
    break;
  case 2:
    // ADJCALLSTACKUP
    O << " ADJCALLSTACKUP"; 
    return;
    break;
  case 3:
    // BI, BISL, FSCRRf32
    return;
    break;
  case 4:
    // BRHNZr16, BRHNZv8i16, BRHZr16, BRHZv8i16, BRNZr32, BRNZv4i32, BRZr32, ...
    O << ','; 
    printPCRelativeOperand(MI, 1, O); 
    return;
    break;
  case 5:
    // HBR_LABEL
    O << ":\t"; 
    PrintSpecial(MI, O, "comment"); 
    O << "branch hint target"; 
    return;
    break;
  }


  // Fragment 2 encoded into 4 bits for 16 unique commands.
  switch ((Bits >> 17) & 15) {
  default:   // unreachable.
  case 0:
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHIr16, AHIvec, AHr16, ...
    printOperand(MI, 1, O); 
    break;
  case 1:
    // CBD, CDD, CDDf64, CHD, CWD, CWDf32
    printShufAddr(MI, 1, O); 
    return;
    break;
  case 2:
    // CBX, CDX, CDXf64, CHX, CWX, CWXf32, LQXf32, LQXf64, LQXr128, LQXr16, L...
    printMemRegReg(MI, 1, O); 
    return;
    break;
  case 3:
    // CellSDKahi, CellSDKai, CellSDKsfhi, CellSDKsfi, IOHLf32, IOHLr32
    printOperand(MI, 2, O); 
    break;
  case 4:
    // FSMBIv16i8, FSMBIv2i64, FSMBIv4i32, FSMBIv8i16, ILHUf32, ILHUr32, ILHU...
    printU16ImmOperand(MI, 1, O); 
    return;
    break;
  case 5:
    // HBRA
    printPCRelativeOperand(MI, 1, O); 
    return;
    break;
  case 6:
    // HEQIr32, HGTIr32, HLGTIr32
    printS10ImmOperand(MI, 1, O); 
    return;
    break;
  case 7:
    // ILAf32, ILAf64, ILAr32, ILAr64, ILAv2i64, ILAv4i32
    printU18ImmOperand(MI, 1, O); 
    return;
    break;
  case 8:
    // ILAhi, ILHUhi
    printSymbolHi(MI, 1, O); 
    return;
    break;
  case 9:
    // ILAlo
    printSymbolLo(MI, 1, O); 
    return;
    break;
  case 10:
    // ILAlsa
    printSymbolLSA(MI, 1, O); 
    return;
    break;
  case 11:
    // ILHr16, ILHr8, ILHv8i16, ILf32, ILf64, ILr32, ILr64, ILv2i64, ILv4i32
    printS16ImmOperand(MI, 1, O); 
    return;
    break;
  case 12:
    // IOHLlo
    printSymbolLo(MI, 2, O); 
    return;
    break;
  case 13:
    // IOHLv2i64, IOHLv4i32
    printU16ImmOperand(MI, 2, O); 
    return;
    break;
  case 14:
    // LQAf32, LQAf64, LQAr128, LQAr16, LQAr32, LQAr64, LQAr8, LQAv16i8, LQAv...
    printAddr256K(MI, 1, O); 
    return;
    break;
  case 15:
    // LQDf32, LQDf64, LQDr128, LQDr16, LQDr32, LQDr64, LQDr8, LQDv16i8, LQDv...
    printDFormAddr(MI, 1, O); 
    return;
    break;
  }


  // Fragment 3 encoded into 2 bits for 3 unique commands.
  switch ((Bits >> 21) & 3) {
  default:   // unreachable.
  case 0:
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHIr16, AHIvec, AHr16, ...
    O << ", "; 
    break;
  case 1:
    // CFSif32, CFSiv4f32, CFUif32, CFUiv4f32, CSiFf32, CSiFv4f32, CUiFf32, C...
    O << ", 0"; 
    return;
    break;
  case 2:
    // CLZr32, CLZv4i32, CNTBv16i8, CNTBv4i32, CNTBv8i16, FESDf32, FESDvec, F...
    return;
    break;
  }


  // Fragment 4 encoded into 3 bits for 7 unique commands.
  switch ((Bits >> 23) & 7) {
  default:   // unreachable.
  case 0:
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHr16, AHv8i16, ANDCr12...
    printOperand(MI, 2, O); 
    break;
  case 1:
    // AHIr16, AHIvec, AIf32, AIr32, AIv4f32, AIv4i32, ANDHIv8i16, ANDIi16i32...
    printS10ImmOperand(MI, 2, O); 
    return;
    break;
  case 2:
    // ANDBIr8, ANDBIv16i8, ANDHIi8i16, ANDHIr16, CellSDKandbi, CellSDKceqbi,...
    printU10ImmOperand(MI, 2, O); 
    return;
    break;
  case 3:
    // CellSDKahi, CellSDKai, CellSDKsfhi, CellSDKsfi
    printS10ImmOperand(MI, 1, O); 
    return;
    break;
  case 4:
    // ROTHIr16, ROTHIr16_r32, ROTHIv8i16, ROTIr32, ROTIr32_i16, ROTIr32_i8, ...
    printU7ImmOperand(MI, 2, O); 
    return;
    break;
  case 5:
    // ROTHMIr16, ROTHMIv8i16, ROTMAHIr16, ROTMAHIv8i16
    printROTHNeg7Imm(MI, 2, O); 
    return;
    break;
  case 6:
    // ROTMAIr32_i32, ROTMAIr64_i32, ROTMAIv2i64_i32, ROTMAIv4i32_i32, ROTMIr...
    printROTNeg7Imm(MI, 2, O); 
    return;
    break;
  }


  // Fragment 5 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 26) & 1) {
    // CellSDKfma, CellSDKfms, CellSDKfnms, CellSDKmpya, FMAf32, FMAv4f32, FM...
    O << ", "; 
    printOperand(MI, 3, O); 
    return;
  } else {
    // ABSDB, ADDXr32, ADDXr64, ADDXv2i64, ADDXv4i32, AHr16, AHv8i16, ANDCr12...
    return;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *SPUAsmPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 129 && "Invalid register number!");

  static const char AsmStrs[] = {
  /* 0 */ '$', '1', '0', '0', 0,
  /* 5 */ '$', '1', '0', 0,
  /* 9 */ '$', '1', '1', '0', 0,
  /* 14 */ '$', '2', '0', 0,
  /* 18 */ '$', '1', '2', '0', 0,
  /* 23 */ '$', '3', '0', 0,
  /* 27 */ '$', '4', '0', 0,
  /* 31 */ '$', '5', '0', 0,
  /* 35 */ '$', '6', '0', 0,
  /* 39 */ '$', '7', '0', 0,
  /* 43 */ '$', '8', '0', 0,
  /* 47 */ '$', '9', '0', 0,
  /* 51 */ '$', '1', '0', '1', 0,
  /* 56 */ '$', '1', '1', 0,
  /* 60 */ '$', '1', '1', '1', 0,
  /* 65 */ '$', '2', '1', 0,
  /* 69 */ '$', '1', '2', '1', 0,
  /* 74 */ '$', '3', '1', 0,
  /* 78 */ '$', '4', '1', 0,
  /* 82 */ '$', '5', '1', 0,
  /* 86 */ '$', '6', '1', 0,
  /* 90 */ '$', '7', '1', 0,
  /* 94 */ '$', '8', '1', 0,
  /* 98 */ '$', '9', '1', 0,
  /* 102 */ '$', '2', 0,
  /* 105 */ '$', '1', '0', '2', 0,
  /* 110 */ '$', '1', '2', 0,
  /* 114 */ '$', '1', '1', '2', 0,
  /* 119 */ '$', '2', '2', 0,
  /* 123 */ '$', '1', '2', '2', 0,
  /* 128 */ '$', '3', '2', 0,
  /* 132 */ '$', '4', '2', 0,
  /* 136 */ '$', '5', '2', 0,
  /* 140 */ '$', '6', '2', 0,
  /* 144 */ '$', '7', '2', 0,
  /* 148 */ '$', '8', '2', 0,
  /* 152 */ '$', '9', '2', 0,
  /* 156 */ '$', '3', 0,
  /* 159 */ '$', '1', '0', '3', 0,
  /* 164 */ '$', '1', '3', 0,
  /* 168 */ '$', '1', '1', '3', 0,
  /* 173 */ '$', '2', '3', 0,
  /* 177 */ '$', '1', '2', '3', 0,
  /* 182 */ '$', '3', '3', 0,
  /* 186 */ '$', '4', '3', 0,
  /* 190 */ '$', '5', '3', 0,
  /* 194 */ '$', '6', '3', 0,
  /* 198 */ '$', '7', '3', 0,
  /* 202 */ '$', '8', '3', 0,
  /* 206 */ '$', '9', '3', 0,
  /* 210 */ '$', '4', 0,
  /* 213 */ '$', '1', '0', '4', 0,
  /* 218 */ '$', '1', '4', 0,
  /* 222 */ '$', '1', '1', '4', 0,
  /* 227 */ '$', '2', '4', 0,
  /* 231 */ '$', '1', '2', '4', 0,
  /* 236 */ '$', '3', '4', 0,
  /* 240 */ '$', '4', '4', 0,
  /* 244 */ '$', '5', '4', 0,
  /* 248 */ '$', '6', '4', 0,
  /* 252 */ '$', '7', '4', 0,
  /* 256 */ '$', '8', '4', 0,
  /* 260 */ '$', '9', '4', 0,
  /* 264 */ '$', '5', 0,
  /* 267 */ '$', '1', '0', '5', 0,
  /* 272 */ '$', '1', '5', 0,
  /* 276 */ '$', '1', '1', '5', 0,
  /* 281 */ '$', '2', '5', 0,
  /* 285 */ '$', '1', '2', '5', 0,
  /* 290 */ '$', '3', '5', 0,
  /* 294 */ '$', '4', '5', 0,
  /* 298 */ '$', '5', '5', 0,
  /* 302 */ '$', '6', '5', 0,
  /* 306 */ '$', '7', '5', 0,
  /* 310 */ '$', '8', '5', 0,
  /* 314 */ '$', '9', '5', 0,
  /* 318 */ '$', '6', 0,
  /* 321 */ '$', '1', '0', '6', 0,
  /* 326 */ '$', '1', '6', 0,
  /* 330 */ '$', '1', '1', '6', 0,
  /* 335 */ '$', '2', '6', 0,
  /* 339 */ '$', '1', '2', '6', 0,
  /* 344 */ '$', '3', '6', 0,
  /* 348 */ '$', '4', '6', 0,
  /* 352 */ '$', '5', '6', 0,
  /* 356 */ '$', '6', '6', 0,
  /* 360 */ '$', '7', '6', 0,
  /* 364 */ '$', '8', '6', 0,
  /* 368 */ '$', '9', '6', 0,
  /* 372 */ '$', '7', 0,
  /* 375 */ '$', '1', '0', '7', 0,
  /* 380 */ '$', '1', '7', 0,
  /* 384 */ '$', '1', '1', '7', 0,
  /* 389 */ '$', '2', '7', 0,
  /* 393 */ '$', '1', '2', '7', 0,
  /* 398 */ '$', '3', '7', 0,
  /* 402 */ '$', '4', '7', 0,
  /* 406 */ '$', '5', '7', 0,
  /* 410 */ '$', '6', '7', 0,
  /* 414 */ '$', '7', '7', 0,
  /* 418 */ '$', '8', '7', 0,
  /* 422 */ '$', '9', '7', 0,
  /* 426 */ '$', '8', 0,
  /* 429 */ '$', '1', '0', '8', 0,
  /* 434 */ '$', '1', '8', 0,
  /* 438 */ '$', '1', '1', '8', 0,
  /* 443 */ '$', '2', '8', 0,
  /* 447 */ '$', '3', '8', 0,
  /* 451 */ '$', '4', '8', 0,
  /* 455 */ '$', '5', '8', 0,
  /* 459 */ '$', '6', '8', 0,
  /* 463 */ '$', '7', '8', 0,
  /* 467 */ '$', '8', '8', 0,
  /* 471 */ '$', '9', '8', 0,
  /* 475 */ '$', '9', 0,
  /* 478 */ '$', '1', '0', '9', 0,
  /* 483 */ '$', '1', '9', 0,
  /* 487 */ '$', '1', '1', '9', 0,
  /* 492 */ '$', '2', '9', 0,
  /* 496 */ '$', '3', '9', 0,
  /* 500 */ '$', '4', '9', 0,
  /* 504 */ '$', '5', '9', 0,
  /* 508 */ '$', '6', '9', 0,
  /* 512 */ '$', '7', '9', 0,
  /* 516 */ '$', '8', '9', 0,
  /* 520 */ '$', '9', '9', 0,
  /* 524 */ '$', 's', 'p', 0,
  /* 528 */ '$', 'l', 'r', 0,
  };

  static const uint32_t RegAsmOffset[] = {
    528, 524, 102, 156, 210, 264, 318, 372, 426, 475, 5, 56, 110, 164, 
    218, 272, 326, 380, 434, 483, 14, 65, 119, 173, 227, 281, 335, 389, 
    443, 492, 23, 74, 128, 182, 236, 290, 344, 398, 447, 496, 27, 78, 
    132, 186, 240, 294, 348, 402, 451, 500, 31, 82, 136, 190, 244, 298, 
    352, 406, 455, 504, 35, 86, 140, 194, 248, 302, 356, 410, 459, 508, 
    39, 90, 144, 198, 252, 306, 360, 414, 463, 512, 43, 94, 148, 202, 
    256, 310, 364, 418, 467, 516, 47, 98, 152, 206, 260, 314, 368, 422, 
    471, 520, 0, 51, 105, 159, 213, 267, 321, 375, 429, 478, 9, 60, 
    114, 168, 222, 276, 330, 384, 438, 487, 18, 69, 123, 177, 231, 285, 
    339, 393, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}