/* swis.h. SWI support header file for C libraries.  */


#ifndef __SWIS_H
#define __SWIS_H

#include "kernel.h"

#ifdef __cplusplus
extern "C"
{
#endif

extern int _swi (int swi_no, unsigned int, ...);

extern _kernel_oserror *_swix (int swi_no, unsigned int, ...);

#ifdef __cplusplus
}
#endif

#define _FLAGS     0x10 /*use with _RETURN() or _OUT()*/
#define _IN(i)     (1U << (i))
#define _INR(i,j)  (~0 << (i) ^ ~0 << ((j) + 1))
#define _OUT(i)    ((i) != _FLAGS? (1U << (31 - (i))): 1U << 21)
#define _OUTR(i,j) (~0U >> (i) ^ ~0U >> ((j) + 1))
#define _BLOCK(i)  (1U << 11 | (unsigned) (i) << 12)
#define _RETURN(i) ((i) != _FLAGS? (unsigned) (i) << 16: 0xFU << 16)
#define _VFLAG     (1U << 28)
#define _CFLAG     (1U << 29)
#define _ZFLAG     (1U << 30)
#define _NFLAG     (1U << 31)
#define STDIN_FILENO    0       /* standard input file descriptor */
#define STDOUT_FILENO   1       /* standard output file descriptor */
#define STDERR_FILENO   2       /* standard error file descriptor */

#define XOS_Bit                        0x020000

#define OS_WriteI                      0x000100

#define OS_WriteC                      0x000000
#define OS_WriteS                      0x000001
#define OS_Write0                      0x000002
#define OS_NewLine                     0x000003
#define OS_ReadC                       0x000004
#define OS_CLI                         0x000005
#define OS_Byte                        0x000006
#define OS_Word                        0x000007
#define OS_File                        0x000008
#define OS_Args                        0x000009
#define OS_BGet                        0x00000a
#define OS_BPut                        0x00000b
#define OS_GBPB                        0x00000c
#define OS_Find                        0x00000d
#define OS_ReadLine                    0x00000e
#define OS_Control                     0x00000f
#define OS_GetEnv                      0x000010
#define OS_Exit                        0x000011
#define OS_SetEnv                      0x000012
#define OS_IntOn                       0x000013
#define OS_IntOff                      0x000014
#define OS_CallBack                    0x000015
#define OS_EnterOS                     0x000016
#define OS_BreakPt                     0x000017
#define OS_BreakCtrl                   0x000018
#define OS_UnusedSWI                   0x000019
#define OS_UpdateMEMC                  0x00001a
#define OS_SetCallBack                 0x00001b
#define OS_Mouse                       0x00001c
#define OS_Heap                        0x00001d
#define OS_Module                      0x00001e
#define OS_Claim                       0x00001f
#define OS_Release                     0x000020
#define OS_ReadUnsigned                0x000021
#define OS_GenerateEvent               0x000022
#define OS_ReadVarVal                  0x000023
#define OS_SetVarVal                   0x000024
#define OS_GSInit                      0x000025
#define OS_GSRead                      0x000026
#define OS_GSTrans                     0x000027
#define OS_BinaryToDecimal             0x000028
#define OS_FSControl                   0x000029
#define OS_ChangeDynamicArea           0x00002a
#define OS_GenerateError               0x00002b
#define OS_ReadEscapEState             0x00002c
#define OS_EvaluateExpression          0x00002d
#define OS_SpriteOp                    0x00002e
#define OS_ReadPalette                 0x00002f
#define OS_ServiceCall                 0x000030
#define OS_ReadVduVariables            0x000031
#define OS_ReadPoint                   0x000032
#define OS_UpCall                      0x000033
#define OS_CallAVector                 0x000034
#define OS_ReadModeVariable            0x000035
#define OS_RemoveCursors               0x000036
#define OS_RestoreCursors              0x000037
#define OS_SWINumberToString           0x000038
#define OS_SWINumberFromString         0x000039
#define OS_ValidateAddress             0x00003a
#define OS_CallAfter                   0x00003b
#define OS_CallEvery                   0x00003c
#define OS_RemoveTickerEvent           0x00003d
#define OS_InstallKeyHandler           0x00003e
#define OS_CheckModeValid              0x00003f
#define OS_ChangeEnvironment           0x000040
#define OS_ClaimScreenMemory           0x000041
#define OS_ReadMonotonicTime           0x000042
#define OS_SubstituteArgs              0x000043
#define OS_PrettyPrint                 0x000044
#define OS_Plot                        0x000045
#define OS_WriteN                      0x000046
#define OS_AddToVector                 0x000047
#define OS_WriteEnv                    0x000048
#define OS_ReadArgs                    0x000049
#define OS_ReadRAMFsLimits             0x00004a
#define OS_ClaimDeviceVector           0x00004b
#define OS_ReleaseDeviceVector         0x00004c
#define OS_DelinkApplication           0x00004d
#define OS_RelinkApplication           0x00004e
#define OS_HeapSort                    0x00004f
#define OS_ExitAndDie                  0x000050
#define OS_ReadMemMapInfo              0x000051
#define OS_ReadMemMapEntries           0x000052
#define OS_SetMemMapEntries            0x000053
#define OS_AddCallBack                 0x000054
#define OS_ReadDefaultHandler          0x000055
#define OS_SetECFOrigin                0x000056
#define OS_SerialOp                    0x000057
#define OS_ReadSysInfo                 0x000058
#define OS_Confirm                     0x000059
#define OS_ChangedBox                  0x00005a
#define OS_CRC                         0x00005b
#define OS_ReadDynamicArea             0x00005c
#define OS_PrintChar                   0x00005d
#define OS_ChangeRedirection           0x00005e
#define OS_RemoveCallBack              0x00005f
#define OS_FindMemMapEntries           0x000060
#define OS_SetColour                   0x000061
#define OS_ClaimSWI                    0x000062
#define OS_ReleaseSWI                  0x000063
#define OS_Pointer                     0x000064
#define OS_ScreenMode                  0x000065
#define OS_DynamicArea                 0x000066
#define OS_AbortTrap                   0x000067
#define OS_Memory                      0x000068
#define OS_ClaimProcessorVector        0x000069
#define OS_Reset                       0x00006a
#define OS_MMUControl                  0x00006b
#define OS_PlatformFeatures	       0x00006d
#define OS_SynchroniseCodeAreas	       0x00006e
#define OS_CallASWI		       0x00006f
#define OS_CallASWIR12		       0x000071
#define OS_ConvertStandardDateAndTime  0x0000c0
#define OS_ConvertDateAndTime          0x0000c1
#define OS_ConvertHex1                 0x0000d0
#define OS_ConvertHex2                 0x0000d1
#define OS_ConvertHex4                 0x0000d2
#define OS_ConvertHex6                 0x0000d3
#define OS_ConvertHex8                 0x0000d4
#define OS_ConvertCardinal1            0x0000d5
#define OS_ConvertCardinal2            0x0000d6
#define OS_ConvertCardinal3            0x0000d7
#define OS_ConvertCardinal4            0x0000d8
#define OS_ConvertInteger1             0x0000d9
#define OS_ConvertInteger2             0x0000da
#define OS_ConvertInteger3             0x0000db
#define OS_ConvertInteger4             0x0000dc
#define OS_ConvertBinary1              0x0000dd
#define OS_ConvertBinary2              0x0000de
#define OS_ConvertBinary3              0x0000df
#define OS_ConvertBinary4              0x0000e0
#define OS_ConvertSpacedCardinal1      0x0000e1
#define OS_ConvertSpacedCardinal2      0x0000e2
#define OS_ConvertSpacedCardinal3      0x0000e3
#define OS_ConvertSpacedCardinal4      0x0000e4
#define OS_ConvertSpacedInteger1       0x0000e5
#define OS_ConvertSpacedInteger2       0x0000e6
#define OS_ConvertSpacedInteger3       0x0000e7
#define OS_ConvertSpacedInteger4       0x0000e8
#define OS_ConvertFixedNetStation      0x0000e9
#define OS_ConvertNetStation           0x0000ea
#define OS_ConvertFixedFileSize        0x0000eb
#define OS_ConvertFileSize             0x0000ec

#define IIC_Control                    0x000240

#define Font_CacheAddr                 0x040080
#define Font_FindFont                  0x040081
#define Font_LoseFont                  0x040082
#define Font_ReadDefn                  0x040083
#define Font_ReadInfo                  0x040084
#define Font_StringWidth               0x040085
#define Font_Paint                     0x040086
#define Font_Caret                     0x040087
#define Font_ConverttoOS               0x040088
#define Font_Converttopoints           0x040089
#define Font_SetFont                   0x04008a
#define Font_CurrentFont               0x04008b
#define Font_FutureFont                0x04008c
#define Font_FindCaret                 0x04008d
#define Font_CharBBox                  0x04008e
#define Font_ReadScaleFactor           0x04008f
#define Font_SetScaleFactor            0x040090
#define Font_ListFonts                 0x040091
#define Font_SetFontColours            0x040092
#define Font_SetPalette                0x040093
#define Font_ReadThresholds            0x040094
#define Font_SetThresholds             0x040095
#define Font_FindCaretJ                0x040096
#define Font_StringBBox                0x040097
#define Font_ReadColourTable           0x040098
#define Font_MakeBitmap                0x040099
#define Font_UnCacheFile               0x04009a
#define Font_SetFontMax                0x04009b
#define Font_ReadFontMax               0x04009c
#define Font_ReadFontPrefix            0x04009d
#define Font_SwitchOutputToBuffer      0x04009e
#define Font_ReadFontMetrics           0x04009f
#define Font_DecodeMenu                0x0400a0
#define Font_ScanString                0x0400a1
#define Font_SetColourTable            0x0400a2
#define Font_CurrentRGB                0x0400a3
#define Font_FutureRGB                 0x0400a4
#define Font_ReadEncodingFilename      0x0400a5
#define Font_FindField                 0x0400a6
#define Font_ApplyFields               0x0400a7
#define Font_LookupFont                0x0400a8

#define Wimp_Initialise                0x0400c0
#define Wimp_CreateWindow              0x0400c1
#define Wimp_CreateIcon                0x0400c2
#define Wimp_DeleteWindow              0x0400c3
#define Wimp_DeleteIcon                0x0400c4
#define Wimp_OpenWindow                0x0400c5
#define Wimp_CloseWindow               0x0400c6
#define Wimp_Poll                      0x0400c7
#define Wimp_RedrawWindow              0x0400c8
#define Wimp_UpdateWindow              0x0400c9
#define Wimp_GetRectangle              0x0400ca
#define Wimp_GetWindowState            0x0400cb
#define Wimp_GetWindowInfo             0x0400cc
#define Wimp_SetIconState              0x0400cd
#define Wimp_GetIconState              0x0400ce
#define Wimp_GetPointerInfo            0x0400cf
#define Wimp_DragBox                   0x0400d0
#define Wimp_ForceRedraw               0x0400d1
#define Wimp_SetCaretPosition          0x0400d2
#define Wimp_GetCaretPosition          0x0400d3
#define Wimp_CreateMenu                0x0400d4
#define Wimp_DecodeMenu                0x0400d5
#define Wimp_WhichIcon                 0x0400d6
#define Wimp_SetExtent                 0x0400d7
#define Wimp_SetPointerShape           0x0400d8
#define Wimp_OpenTemplate              0x0400d9
#define Wimp_CloseTemplate             0x0400da
#define Wimp_LoadTemplate              0x0400db
#define Wimp_ProcessKey                0x0400dc
#define Wimp_CloseDown                 0x0400dd
#define Wimp_StartTask                 0x0400de
#define Wimp_ReportError               0x0400df
#define Wimp_GetWindowOutline          0x0400e0
#define Wimp_PollIdle                  0x0400e1
#define Wimp_PlotIcon                  0x0400e2
#define Wimp_SetMode                   0x0400e3
#define Wimp_SetPalette                0x0400e4
#define Wimp_ReadPalette               0x0400e5
#define Wimp_SetColour                 0x0400e6
#define Wimp_SendMessage               0x0400e7
#define Wimp_CreateSubMenu             0x0400e8
#define Wimp_SpriteOp                  0x0400e9
#define Wimp_BaseOfSprites             0x0400ea
#define Wimp_BlockCopy                 0x0400eb
#define Wimp_SlotSize                  0x0400ec
#define Wimp_ReadPixTrans              0x0400ed
#define Wimp_ClaimFreeMemory           0x0400ee
#define Wimp_CommandWindow             0x0400ef
#define Wimp_TextColour                0x0400f0
#define Wimp_TransferBlock             0x0400f1
#define Wimp_ReadSysInfo               0x0400f2
#define Wimp_SetFontColours            0x0400f3
#define Wimp_GetMenuState              0x0400f4
#define Wimp_RegisterFilter            0x0400f5
#define Wimp_AddMessages               0x0400f6
#define Wimp_RemoveMessages            0x0400f7
#define Wimp_SetColourMapping          0x0400f8
#define Wimp_TextOp                    0x0400f9
#define Wimp_SetWatchdogState          0x0400fa
#define Wimp_Extend                    0x0400fb
#define Wimp_ResizeIcon                0x0400fc

#define Sound_Configure                0x040140
#define Sound_Enable                   0x040141
#define Sound_Stereo                   0x040142
#define Sound_Speaker                  0x040143
#define Sound_Volume                   0x040180
#define Sound_SoundLog                 0x040181
#define Sound_LogScale                 0x040182
#define Sound_InstallVoice             0x040183
#define Sound_RemoveVoice              0x040184
#define Sound_AttachVoice              0x040185
#define Sound_ControlPacked            0x040186
#define Sound_Tuning                   0x040187
#define Sound_Pitch                    0x040188
#define Sound_Control                  0x040189
#define Sound_AttachNamedVoice         0x04018a
#define Sound_ReadControlBlock         0x04018b
#define Sound_WriteControlBlock        0x04018c
#define Sound_QInit                    0x0401c0
#define Sound_QSchedule                0x0401c1
#define Sound_QRemove                  0x0401c2
#define Sound_QFree                    0x0401c3
#define Sound_QSDispatch               0x0401c4
#define Sound_QTempo                   0x0401c5
#define Sound_QBeat                    0x0401c6
#define Sound_QInterface               0x0401c7

#define ADFS_DiscOp                    0x040240
#define ADFS_HDC                       0x040241
#define ADFS_Drives                    0x040242
#define ADFS_FreeSpace                 0x040243
#define ADFS_Retries                   0x040244
#define ADFS_DescribeDisc              0x040245
#define ADFS_VetFormat                 0x040246
#define ADFS_FlpProcessDCB             0x040247
#define ADFS_ControllerType            0x040248
#define ADFS_PowerControl              0x040249
#define ADFS_SetIDEController          0x04024a
#define ADFS_IDEUserOp                 0x04024b
#define ADFS_MiscOp                    0x04024c
#define ADFS_ECCSAndRetries            0x040250

#define Podule_ReadID                  0x040280
#define Podule_ReadHeader              0x040281
#define Podule_EnumerateChunks         0x040282
#define Podule_ReadChunk               0x040283
#define Podule_ReadBytes               0x040284
#define Podule_WriteBytes              0x040285
#define Podule_CallLoader              0x040286
#define Podule_RawRead                 0x040287
#define Podule_RawWrite                0x040288
#define Podule_HardwareAddress         0x040289
#define Podule_EnumerateChunksWithInfo 0x04028a
#define Podule_HardwareAddresses       0x04028b
#define Podule_ReturnNumber            0x04028c
#define Podule_ReadInfo                0x04028d
#define Podule_SetSpeed                0x04028e

#define Debugger_Disassemble           0x040380

#define FPEmulator_Version             0x040480

#define FileCore_DiscOp                0x040540
#define FileCore_Create                0x040541
#define FileCore_Drives                0x040542
#define FileCore_FreeSpace             0x040543
#define FileCore_FloppyStructure       0x040544
#define FileCore_DescribeDisc          0x040545
#define FileCore_DiscardReadSectorsCache 0x040546
#define FileCore_DiscFormat            0x040547
#define FileCore_LayoutStructure       0x040548
#define FileCore_MiscOp                0x040549

#define Shell_Create                   0x0405c0
#define Shell_Destroy                  0x0405c1

#define Hourglass_On                   0x0406c0
#define Hourglass_Off                  0x0406c1
#define Hourglass_Smash                0x0406c2
#define Hourglass_Start                0x0406c3
#define Hourglass_Percentage           0x0406c4
#define Hourglass_LEDs                 0x0406c5
#define Hourglass_Colours              0x0406c6

#define Draw_ProcessPath               0x040700
#define Draw_ProcessPathFP             0x040701
#define Draw_Fill                      0x040702
#define Draw_FillFP                    0x040703
#define Draw_Stroke                    0x040704
#define Draw_StrokeFP                  0x040705
#define Draw_StrokePath                0x040706
#define Draw_StrokePathFP              0x040707
#define Draw_FlattenPath               0x040708
#define Draw_FlattenPathFP             0x040709
#define Draw_TransformPath             0x04070a
#define Draw_TransformPathFP           0x04070b

#define ColourTrans_SelectTable        0x040740
#define ColourTrans_SelectGCOLTable    0x040741
#define ColourTrans_ReturnGCOL         0x040742
#define ColourTrans_SetGCOL            0x040743
#define ColourTrans_ReturnColourNumber 0x040744
#define ColourTrans_ReturnGCOLForMode  0x040745
#define ColourTrans_ReturnColourNumberForMode 0x040746
#define ColourTrans_ReturnOppGCOL      0x040747
#define ColourTrans_SetOppGCOL         0x040748
#define ColourTrans_ReturnOppColourNumber 0x040749
#define ColourTrans_ReturnOppGCOLForMode 0x04074a
#define ColourTrans_ReturnOppColourNumberForMode 0x04074b
#define ColourTrans_GCOLToColourNumber 0x04074c
#define ColourTrans_ColourNumberToGCOL 0x04074d
#define ColourTrans_ReturnFontColours  0x04074e
#define ColourTrans_SetFontColours     0x04074f
#define ColourTrans_InvalidateCache    0x040750
#define ColourTrans_SetCalibration     0x040751
#define ColourTrans_ReadCalibration    0x040752
#define ColourTrans_ConvertDeviceColour 0x040753
#define ColourTrans_ConvertDevicePalette 0x040754
#define ColourTrans_ConvertRGBToCIE    0x040755
#define ColourTrans_ConvertCIEToRGB    0x040756
#define ColourTrans_WriteCalibrationToFile 0x040757
#define ColourTrans_ConvertRGBToHSV    0x040758
#define ColourTrans_ConvertHSVToRGB    0x040759
#define ColourTrans_ConvertRGBToCMYK   0x04075a
#define ColourTrans_ConvertCMYKToRGB   0x04075b
#define ColourTrans_ReadPalette        0x04075c
#define ColourTrans_WritePalette       0x04075d
#define ColourTrans_SetColour          0x04075e
#define ColourTrans_MiscOp             0x04075f
#define ColourTrans_WriteLoadingsToFile 0x040760
#define ColourTrans_SetTextColour      0x040761
#define ColourTrans_SetOppTextColour   0x040762
#define ColourTrans_GenerateTable      0x040763

#define Super_Sample90                 0x040d80
#define Super_Sample45                 0x040d81

#define FilerAction_SendSelectedDirectory 0x040f80
#define FilerAction_SendSelectedFile   0x040f81
#define FilerAction_SendStartOperation 0x040f82

#define NFS_Mount                      0x0410c0
#define NFS_MountList                  0x0410c1
#define NFS_SetUser                    0x0410c2
#define NFS_Dismount                   0x0410c3
#define NFS_MountInfo                  0x0410c4
#define NFS_FreeSpace                  0x0410c5

#define Socket_Creat                   0x041200
#define Socket_Bind                    0x041201
#define Socket_Listen                  0x041202
#define Socket_Accept                  0x041203
#define Socket_Connect                 0x041204
#define Socket_Recv                    0x041205
#define Socket_Recvfrom                0x041206
#define Socket_Recvmsg                 0x041207
#define Socket_Send                    0x041208
#define Socket_Sendto                  0x041209
#define Socket_Sendmsg                 0x04120a
#define Socket_Shutdown                0x04120b
#define Socket_Setsockopt              0x04120c
#define Socket_Getsockopt              0x04120d
#define Socket_Getpeername             0x04120e
#define Socket_Getsockname             0x04120f
#define Socket_Close                   0x041210
#define Socket_Select                  0x041211
#define Socket_Ioctl                   0x041212
#define Socket_Read                    0x041213
#define Socket_Write                   0x041214
#define Socket_Stat                    0x041215
#define Socket_Readv                   0x041216
#define Socket_Writev                  0x041217
#define Socket_Gettsize                0x041218
#define Socket_Sendtosm                0x041219

#define MessageTrans_FileInfo          0x041500
#define MessageTrans_OpenFile          0x041501
#define MessageTrans_Lookup            0x041502
#define MessageTrans_MakeMenus         0x041503
#define MessageTrans_CloseFile         0x041504
#define MessageTrans_EnumerateTokens   0x041505
#define MessageTrans_ErrorLookup       0x041506
#define MessageTrans_GSLookup          0x041507
#define MessageTrans_CopyError         0x041508
#define MessageTrans_Dictionary        0x041509

#define ResourceFS_RegisterFiles       0x041b40
#define ResourceFS_DeregisterFiles     0x041b41

#define DragASprite_Start              0x042400
#define DragASprite_Stop               0x042401

#define DDEUtils_Prefix                0x042580
#define DDEUtils_SetCLSize             0x042581
#define DDEUtils_SetCL                 0x042582
#define DDEUtils_GetCLSize             0x042583
#define DDEUtils_GetCl                 0x042584
#define DDEUtils_ThrowbackRegister     0x042585
#define DDEUtils_ThrowbackUnRegister   0x042586
#define DDEUtils_ThrowbackStart        0x042587
#define DDEUtils_ThrowbackSend         0x042588
#define DDEUtils_ThrowbackEnd          0x042589

#define Filter_RegisterPreFilter       0x042640
#define Filter_RegisterPostFilter      0x042641
#define Filter_DeRegisterPreFilter     0x042642
#define Filter_DeRegisterPostFilter    0x042643

#define TaskManager_TaskNameFromHandle 0x042680
#define TaskManager_EnumerateTasks     0x042681
#define TaskManager_Shutdown           0x042682

#define Squash_Compress                0x042700
#define Squash_Decompress              0x042701

#define DeviceFS_Register              0x042740
#define DeviceFS_Deregister            0x042741
#define DeviceFS_RegisterObjects       0x042742
#define DeviceFS_DeregisterObjects     0x042743
#define DeviceFS_CallDevice            0x042744
#define DeviceFS_Threshold             0x042745
#define DeviceFS_ReceivedCharacter     0x042746
#define DeviceFS_TransmitCharacter     0x042747

#define Buffer_Create                  0x042940
#define Buffer_Remove                  0x042941
#define Buffer_Register                0x042942
#define Buffer_Deregister              0x042943
#define Buffer_ModifyFlags             0x042944
#define Buffer_LinkDevice              0x042945
#define Buffer_UnlinkDevice            0x042946
#define Buffer_GetInfo                 0x042947
#define Buffer_Threshold               0x042948
#define Buffer_InternalInfo            0x042949

#define BASICTrans_HELP                0x042c80
#define BASICTrans_Error               0x042c81
#define BASICTrans_Message             0x042c82

#define Parallel_HardwareAddress       0x042ec0
#define Parallel_Op                    0x042ec1

#define Territory_Number               0x043040
#define Territory_Register             0x043041
#define Territory_Deregister           0x043042
#define Territory_NumberToName         0x043043
#define Territory_Exists               0x043044
#define Territory_AlphabetNumberToName 0x043045
#define Territory_SelectAlphabet       0x043046
#define Territory_SetTime              0x043047
#define Territory_ReadCurrentTimeZone  0x043048
#define Territory_ConvertTimeToUTCOrdinals 0x043049
#define Territory_ReadTimeZones        0x04304a
#define Territory_ConvertDateAndTime   0x04304b
#define Territory_ConvertStandardDateAndTime 0x04304c
#define Territory_ConvertStandardDate  0x04304d
#define Territory_ConvertStandardTime  0x04304e
#define Territory_ConvertTimeToOrdinals 0x04304f
#define Territory_ConvertTimeStringToOrdinals 0x043050
#define Territory_ConvertOrdinalsToTime 0x043051
#define Territory_Alphabet             0x043052
#define Territory_AlphabetIdentifier   0x043053
#define Territory_SelectKeyboardHandler 0x043054
#define Territory_WriteDirection       0x043055
#define Territory_CharacterPropertyTable 0x043056
#define Territory_LowerCaseTable       0x043057
#define Territory_UpperCaseTable       0x043058
#define Territory_ControlTable         0x043059
#define Territory_PlainTable           0x04305a
#define Territory_ValueTable           0x04305b
#define Territory_RepresentationTable  0x04305c
#define Territory_Collate              0x04305d
#define Territory_ReadSymbols          0x04305e
#define Territory_ReadCalendarInformation 0x04305f
#define Territory_NameToNumber         0x043060
#define Territory_TransformString      0x043061
#define Territory_ConvertTextToString  0x043075

#define ScreenBlanker_Control          0x043100

#define TaskWindow_TaskInfo            0x043380

#define VProtect_FI                    0x044300
#define VProtect_OF                    0x044301
#define VProtect_LU                    0x044302
#define VProtect_MM                    0x044303
#define VProtect_CF                    0x044304

#define Free_Register                  0x0444c0
#define Free_DeRegister                0x0444c1

#define FSLock_Version                 0x044780

#define DOSFS_DiscFormat               0x044b00
#define DOSFS_LayoutStructure          0x044b01

#define DrawFile_Render                0x045540
#define DrawFile_BBox                  0x045541
#define DrawFile_DeclareFonts          0x045542

#define Internet_GetHostByName         0x046000
#define Internet_GetHostByAddr         0x046001

#define DMA_RegisterChannel            0x046140
#define DMA_DeregisterChannel          0x046141
#define DMA_QueueTransfer              0x046142
#define DMA_TerminateTransfer          0x046143
#define DMA_SuspendTransfer            0x046144
#define DMA_ResumeTransfer             0x046145
#define DMA_ExamineTransfer            0x046146

#define ColourPicker_RegisterModel     0x047700
#define ColourPicker_DeregisterModel   0x047701
#define ColourPicker_OpenDialogue      0x047702
#define ColourPicker_CloseDialogue     0x047703
#define ColourPicker_UpdateDialogue    0x047704
#define ColourPicker_ReadDialogue      0x047705
#define ColourPicker_SetColour         0x047706
#define ColourPicker_HelpReply         0x047707
#define ColourPicker_ModelSWI          0x047708

#define ZapRedraw_RedrawArea           0x048480
#define ZapRedraw_GetPaletteEntry      0x048481
#define ZapRedraw_RedrawRaster         0x048482
#define ZapRedraw_ConvertBitmap        0x048483
#define ZapRedraw_PrepareDataLine      0x048484
#define ZapRedraw_AddCursor            0x048485
#define ZapRedraw_FindCharacter        0x048486
#define ZapRedraw_MoveBytes            0x048487
#define ZapRedraw_CachedCharSize       0x048488
#define ZapRedraw_ConvBitmapChar       0x048489
#define ZapRedraw_CreatePalette        0x04848a
#define ZapRedraw_InsertChar           0x04848b
#define ZapRedraw_ReadSystemChars      0x04848c
#define ZapRedraw_ReverseBitmaps       0x04848d
#define ZapRedraw_ReadVduVars          0x04848e
#define ZapRedraw_GetRectangle         0x04848f
#define ZapRedraw_AddVduBitmaps        0x048490
#define ZapRedraw_CacheFontChars       0x048491
#define ZapRedraw_SpriteSize           0x048492
#define ZapRedraw_RedrawWindow         0x048493

#define ScreenModes_ReadInfo           0x0487c0

#define ArcFSMemMan_ClaimWorkspace     0x048a00
#define ArcFSMemMan_ResizeWorkspace    0x048a01
#define ArcFSMemMan_ReleaseWorkspace   0x048a02
#define ArcFSMemMan_ClaimFileCache     0x048a03
#define ArcFSMemMan_ResizeFileCache    0x048a04
#define ArcFSMemMan_ReleaseFileCache   0x048a05
#define ArcFSMemMan_Init               0x048a06
#define ArcFSMemMan_Final              0x048a07
#define ArcFSMemMan_Slide              0x048a08
#define ArcFSMemMan_LookupBlock        0x048a09

#define Omni_EnumerateMounts           0x04a200
#define Omni_RegisterClient            0x04a201
#define Omni_DeregisterClient          0x04a202
#define Omni_MessageLookup             0x04a203
#define Omni_ConvertClientToAcorn      0x04a204
#define Omni_ConvertAcornToClient      0x04a205
#define Omni_ConvertTime               0x04a206
#define Omni_Printers                  0x04a207
#define Omni_CreateJob                 0x04a208
#define Omni_SendJob                   0x04a209
#define Omni_EndJob                    0x04a20a
#define Omni_AbortJob                  0x04a20b
#define Omni_JobStatus                 0x04a20c
#define Omni_ClearJob                  0x04a20d
#define Omni_PrinterInfo               0x04a20e
#define Omni_EnumerateJobs             0x04a20f
#define Omni_NameLookup                0x04a210
#define Omni_TraceFile                 0x04a211

#define Internet_Syslog                0x04a240
#define Internet_LogFile               0x04a241
#define Internet_LogLevel              0x04a242
#define Internet_ReadErrorMessage      0x04a243

#define OmniNFS_OmniOp                 0x04a480

#endif
