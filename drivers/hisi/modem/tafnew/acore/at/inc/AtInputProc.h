/*
* Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
* foss@huawei.com
*
* If distributed as part of the Linux kernel, the following license terms
* apply:
*
* * This program is free software; you can redistribute it and/or modify
* * it under the terms of the GNU General Public License version 2 and
* * only version 2 as published by the Free Software Foundation.
* *
* * This program is distributed in the hope that it will be useful,
* * but WITHOUT ANY WARRANTY; without even the implied warranty of
* * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* * GNU General Public License for more details.
* *
* * You should have received a copy of the GNU General Public License
* * along with this program; if not, write to the Free Software
* * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
*
* Otherwise, the following license terms apply:
*
* * Redistribution and use in source and binary forms, with or without
* * modification, are permitted provided that the following conditions
* * are met:
* * 1) Redistributions of source code must retain the above copyright
* *    notice, this list of conditions and the following disclaimer.
* * 2) Redistributions in binary form must reproduce the above copyright
* *    notice, this list of conditions and the following disclaimer in the
* *    documentation and/or other materials provided with the distribution.
* * 3) Neither the name of Huawei nor the names of its contributors may
* *    be used to endorse or promote products derived from this software
* *    without specific prior written permission.
*
* * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
*/
#ifndef _AT_INPUT_PROC_H_
#define _AT_INPUT_PROC_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#include "ImmInterface.h"
#include "mdrv.h"
#include "ATCmdProc.h"
#include "product_config.h"
#include "TafOamInterface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

/*Begin - yaochaoqun - 2009-4-2 - for new PNP*/
#define  SCSI_CMD_LEN                       (31)
/*End - yaochaoqun - 2009-4-2 - for new PNP*/

/* 向底软最大重传次数 */
#define AT_NDIS_MAX_RESEND_TIMES            (60)

/*AT数据初始长度*/
#define AT_INIT_DATA_LEN                    (0)

#define AT_MODEM_UL_DATA_BUFF_SIZE      (1536)
#define AT_MODEM_UL_DATA_BUFF_NUM       (16)

#define AT_UART_UL_DATA_BUFF_SIZE       (1536)
#define AT_UART_UL_DATA_BUFF_NUM        (16)

/* HSIC AT通道，底软向协议栈发送数据的上行缓存规格 */
#define AT_HSIC_UL_DATA_BUFF_SIZE       (5*1024)
#define AT_HSIC_UL_DATA_BUFF_NUM        (2)

/* 来电RI管脚电平控制定时器名称 */
#define AT_SET_VOICE_RI_TMR_NAME(ulTmrName)\
            (ulTmrName)  = AT_VOICE_RI_TIMER;\
            (ulTmrName) |= AT_INTERNAL_PROCESS_TYPE

/* 来电RI管脚电平控制定时器参数 */
#define AT_SET_VOICE_RI_TMR_PARAM(ulTmrParam, ucIndex, ucCallId)\
            ((ulTmrParam) = ((ucCallId) << 8) | (ucIndex))

/* 从来电RI管脚电平控制定时器超时消息中获取CALLID */
#define AT_GET_VOICE_RI_CALLID_FROM_TMR_PARAM(ulTmrParam)\
            ((VOS_UINT8)(((ulTmrParam) & 0x0000FF00) >> 8))

/* 从来电RI管脚电平控制定时器超时消息中获取端口ID */
#define AT_GET_VOICE_RI_CLIENTID_FROM_TMR_PARAM(ulTmrParam)\
            ((VOS_UINT8)((ulTmrParam) & 0x000000FF))

/* 新短信RI管脚电平控制定时器名称 */
#define AT_SET_SMS_RI_TMR_NAME(ulTmrName)\
            (ulTmrName)  = AT_SMS_RI_TIMER;\
            (ulTmrName) |= AT_INTERNAL_PROCESS_TYPE

/* 新短信RI管脚电平控制定时器参数 */
#define AT_SET_SMS_RI_TMR_PARAM(ulTmrParam, ucIndex)\
            ((ulTmrParam) = (ucIndex))

/* 从新短信RI管脚电平控制定时器超时消息中获取端口ID */
#define AT_GET_SMS_RI_CLIENTID_FROM_TMR_PARAM(ulTmrParam)\
            ((VOS_UINT8)((ulTmrParam) & 0x000000FF))

/* UART端口数据帧格式映射表指针和大小 */
#define AT_UART_GET_FORMAT_TBL_PTR()    (g_astAtUartFormatTab)
#define AT_UART_GET_FORMAT_TBL_SIZE()   (AT_ARRAY_SIZE(g_astAtUartFormatTab))


/*****************************************************************************
  3 枚举定义
*****************************************************************************/

enum AT_MEM_SOURCE_TYPE_ENUM
{
    AT_MEM_SOURCE_UDI_UL_BUF,                                                   /*MODEM设备buffer内存*/
    AT_MEM_SOURCE_UDI_DL_BUF,                                                   /*使用的DDR内存*/

    AT_MEM_SOURCE_TYPE_BUTT
};
typedef VOS_UINT32 AT_MEM_SOURCE_TYPE_ENUM_UINT32;

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/
extern  VOS_UINT32  g_ATNdisSendSem;

/*USB NCM的UDI句柄*/
extern UDI_HANDLE                              g_ulAtUdiNdisHdl;

/* UDI句柄 */
extern UDI_HANDLE                              g_alAtUdiHandle[AT_CLIENT_BUTT];


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

extern VOS_INT OM_RcvDiagCmdFromPC(VOS_UINT8 ucPortNo, VOS_UINT8 *pData, VOS_UINT16 uslength);
#if (VOS_WIN32 == VOS_OS_VER)
extern VOS_INT32 Sock_RecvCallbackRegister(VOS_UINT8 ucPortNo, pSockRecv pCallback);
#endif

extern int  App_VcomRecvCallbackRegister(unsigned char  uPortNo, pComRecv pCallback);
extern VOS_INT32 AT_AppComEst(VOS_VOID);
extern VOS_INT32 AT_AppSockComEst(VOS_UINT8 ucPortNo);
extern VOS_UINT32 AT_CheckAppUser(VOS_UINT8 ucIndex);
extern VOS_UINT32 AT_CheckNdisUser(VOS_UINT8 ucIndex);
extern VOS_UINT32 AT_CheckModemUser(VOS_UINT8 ucIndex);
extern VOS_UINT32 AT_CheckHsUartUser(VOS_UINT8 ucIndex);
extern VOS_UINT32 AT_CheckUserType(
    VOS_UINT8                               ucIndex,
    AT_USER_TYPE                            enUserType
);

extern VOS_VOID AT_CleanAtChdataCfg(
    VOS_UINT16                          usClientId,
    VOS_UINT8                           ucCid,
    VOS_UINT8                           ucCallId,
    TAF_PS_APN_DATA_SYS_ENUM_UINT8      enDataSys
);
extern VOS_VOID AT_CloseUsbNdis(VOS_VOID);
extern VOS_UINT32 At_CmdStreamPreProc(VOS_UINT8 ucIndex,VOS_UINT8* pData, VOS_UINT16 usLen);
extern VOS_UINT32  AT_CsdDataModeRcvModemMsc(
           VOS_UINT8                           ucIndex
       );
extern TAF_UINT32 At_DataStreamPreProc (TAF_UINT8 ucIndex,TAF_UINT8 DataMode,TAF_UINT8* pData, TAF_UINT16 usLen);
extern VOS_VOID AT_VcomCmdStreamEcho(
           VOS_UINT8                           ucIndex,
           VOS_UINT8                          *pData,
           VOS_UINT16                          usLen
       );
extern VOS_VOID AT_GetAtMsgStruMsgLength(
           VOS_UINT32                          ulInfoLength,
           VOS_UINT32                         *pulMsgLength
       );
extern VOS_VOID AT_GetUserTypeFromIndex(
           VOS_UINT8                           ucIndex,
           VOS_UINT8                          *pucUserType
       );
extern VOS_VOID AT_InitFcMap(VOS_VOID);
extern VOS_VOID AT_InitUartLink(VOS_UINT8 ucIndex);
extern VOS_UINT32  AT_IpDataModeRcvModemMsc(
           VOS_UINT8                           ucIndex,
           AT_DCE_MSC_STRU                     *pMscStru
       );
extern VOS_UINT32 AT_IsConcurrentPorts(
           VOS_UINT8                           ucIndexOne,
           VOS_UINT8                           ucIndexTwo
       );

extern VOS_VOID AT_ModemSetCtlStatus(
           VOS_UINT8                           ucIndex,
           AT_DCE_MSC_STRU                    *pMscStru
       );
extern VOS_UINT32 At_OmDataProc (
           VOS_UINT8                           ucPortNo,
           VOS_UINT8                          *pData,
           VOS_UINT16                          usLen
       );
extern VOS_VOID AT_OpenUsbNdis(VOS_VOID);
extern VOS_UINT32  AT_PppDataModeRcvModemMsc(
           VOS_UINT8                           ucIndex,
           AT_DCE_MSC_STRU                     *pMscStru
       );
extern VOS_INT AT_RcvFromAppCom(
           VOS_UINT8                           ucVcomId,
           VOS_UINT8                          *pData,
           VOS_UINT16                          uslength
       );
extern VOS_INT AT_RcvFromAppSock(
           VOS_UINT8                           ucPortNo,
           VOS_UINT8                          *pData,
           VOS_UINT16                          uslength
       );
extern VOS_INT AT_RcvFromNdisCom(
           VOS_UINT8                           *pucData,
           VOS_UINT16                          uslength
       );
extern VOS_INT AT_RcvFromSock(
           VOS_UINT8                          *pData,
           VOS_UINT32                         uslength
       );
extern VOS_INT At_RcvFromUsbCom(
           VOS_UINT8                           ucPortNo,
           VOS_UINT8                          *pData,
           VOS_UINT16                          uslength
       );
extern TAF_UINT32 At_SendCmdMsg (TAF_UINT8 ucIndex,TAF_UINT8* pData, TAF_UINT16 usLen,TAF_UINT8 ucType);
extern VOS_UINT32 AT_SendCtrlDataFromOm(
    VOS_UINT8                          *pucVirAddr,
    VOS_UINT8                          *pucPhyAddr,
    VOS_UINT32                          ulLength
       );
extern VOS_UINT32 AT_SendDataToModem(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                          *pucDataBuf,
    VOS_UINT16                          usLen
   );
extern VOS_UINT32 AT_SendDiagCmdFromOm(
           VOS_UINT8                           ucPortNo,
           VOS_UINT8                           ucType,
           VOS_UINT8                          *pData,
           VOS_UINT16                          uslength
       );
extern VOS_UINT32 AT_SendPcuiDataFromOm(
    VOS_UINT8                          *pucVirAddr,
    VOS_UINT8                          *pucPhyAddr,
    VOS_UINT32                          ulLength
       );

extern VOS_UINT32 AT_SendCsdZcDataToModem(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                        *pstDataBuf
);
extern VOS_VOID AT_SetAtChdataCidActStatus(
           VOS_UINT16                          usClientId,
           VOS_UINT8                           ucCallId,
           VOS_UINT8                           ucCid
       );
extern VOS_UINT32 AT_SetModemStatus(
           VOS_UINT8                           ucIndex,
           AT_DCE_MSC_STRU                    *pstMsc
       );


extern VOS_INT32 AT_SockComEst(VOS_UINT8 ucPortNo);
extern VOS_VOID AT_StopFlowCtrl(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_UsbCtrEst(VOS_UINT8 ucPortNo);
extern VOS_UINT32 At_UsbGetWwanMode(VOS_VOID);
extern VOS_VOID AT_UsbModemClose(VOS_VOID);
extern VOS_UINT32 At_ModemDataInd(
           VOS_UINT8                           ucIndex,
           VOS_UINT8                           ucDlci,
           IMM_ZC_STRU                        *pstData
       );
extern VOS_VOID AT_UsbModemEnableCB( PS_BOOL_ENUM_UINT8 ucEnable );
VOS_UINT32 At_ModemEst (
    VOS_UINT8                           ucIndex,
    AT_CLIENT_ID_ENUM_UINT16            usClientId,
    VOS_UINT8                           ucPortNo
);
extern VOS_VOID AT_ModemeEnableCB(
    VOS_UINT8                           ucIndex,
    PS_BOOL_ENUM_UINT8                  ucEnable
);

extern VOS_VOID AT_ModemFreeDlDataBuf(
    IMM_ZC_STRU                        *pstBuf
);
extern VOS_UINT32 AT_ModemFreeUlDataBuf(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU *pstBuf
);
extern VOS_UINT32 AT_ModemGetUlDataBuf(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                       **ppstBuf
);
extern VOS_VOID AT_UsbModemInit( VOS_VOID );
extern VOS_UINT32 AT_ModemInitUlDataBuf(
    VOS_UINT8                           ucIndex,
    VOS_UINT32                          ulEachBuffSize,
    VOS_UINT32                          ulTotalBuffNum
);
extern VOS_UINT32 At_ModemMscInd (
    VOS_UINT8                           ucIndex,
    VOS_UINT8                           ucDlci,
    AT_DCE_MSC_STRU                    *pMscStru
);
extern VOS_VOID AT_UsbModemReadDataCB( VOS_VOID );
extern VOS_VOID AT_UsbModemReadMscCB( AT_DCE_MSC_STRU *pstRcvedMsc );
extern VOS_UINT32 AT_ModemStatusPreProc (VOS_UINT8 ucIndex, AT_DCE_MSC_STRU *pMscStru);
extern VOS_UINT32 AT_ModemWriteData(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                        *pstBuf
);
extern VOS_UINT32 AT_UsbNdisEst(VOS_VOID);
extern VOS_UINT32 At_UsbPcuiEst(VOS_UINT8 ucPortNo);
extern VOS_UINT32 At_UsbPcui2Est(VOS_UINT8 ucPortNo);
extern VOS_UINT32 AT_IsApPort(VOS_UINT8 ucIndex);

VOS_VOID AT_UsbNcmConnStatusChgCB(NCM_IOCTL_CONNECT_STUS_E enStatus, VOS_VOID *pBuffer);

VOS_VOID AT_MODEM_ProcDtrChange(VOS_UINT8 ucIndex, AT_DCE_MSC_STRU *pstDceMsc);
VOS_UINT32 AT_MODEM_WriteMscCmd(
    VOS_UINT8                           ucIndex,
    AT_DCE_MSC_STRU                    *pstDceMsc
);
VOS_UINT32 AT_MODEM_StartFlowCtrl(
    VOS_UINT32                          ulParam1,
    VOS_UINT32                          ulParam2
);
VOS_UINT32 AT_MODEM_StopFlowCtrl(
    VOS_UINT32                          ulParam1,
    VOS_UINT32                          ulParam2
);

VOS_UINT32 AT_UART_GetUlDataBuff(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                         **ppucData,
    VOS_UINT32                         *pulLen
);
VOS_UINT32 AT_UART_WriteDataSync(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                          *pucData,
    VOS_UINT32                          ulLen
);
VOS_UINT32 AT_UART_SendDlData(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                          *pucData,
    VOS_UINT16                          usLen
);
VOS_UINT32 AT_UART_SendRawDataFromOm(
    VOS_UINT8                          *pucVirAddr,
    VOS_UINT8                          *pucPhyAddr,
    VOS_UINT32                          ulLen
);
VOS_VOID AT_UART_UlDataReadCB(VOS_VOID);
VOS_VOID AT_UART_InitLink(VOS_UINT8 ucIndex);
VOS_VOID AT_UART_InitPort(VOS_VOID);

#if (FEATURE_ON == FEATURE_AT_HSUART)
VOS_UINT32 AT_HSUART_IsBaudRateValid(AT_UART_BAUDRATE_ENUM_UINT32 enBaudRate);
VOS_UINT32 AT_HSUART_IsFormatValid(AT_UART_FORMAT_ENUM_UINT8 enFormat);
VOS_UINT32 AT_HSUART_IsParityValid(AT_UART_PARITY_ENUM_UINT8 enParity);
VOS_UINT32 AT_HSUART_ValidateFlowCtrlParam(
    AT_UART_FC_DCE_BY_DTE_ENUM_UINT8    enFcDceByDte,
    AT_UART_FC_DTE_BY_DCE_ENUM_UINT8    enFcDteByDce
);
VOS_UINT32 AT_HSUART_ValidateCharFrameParam(
    AT_UART_FORMAT_ENUM_UINT8           enFormat,
    AT_UART_PARITY_ENUM_UINT8           enParity
);
AT_UART_FORMAT_PARAM_STRU *AT_HSUART_GetFormatParam(
    AT_UART_FORMAT_ENUM_UINT8           enFormat
);
VOS_UINT32 AT_HSUART_GetUdiValueByDataLen(
    AT_UART_DATA_LEN_ENUM_UINT8         enDataLen,
    VOS_UINT32                         *pulUdiValue
);
VOS_UINT32 AT_HSUART_GetUdiValueByStopLen(
    AT_UART_STOP_LEN_ENUM_UINT8         enStopLen,
    VOS_UINT32                         *pulUdiValue
);
VOS_UINT32 AT_HSUART_GetUdiValueByParity(
    AT_UART_PARITY_ENUM_UINT8           enParity,
    VOS_UINT32                         *pulUdiValue
);

VOS_UINT32 AT_HSUART_WriteMscCmd(
    VOS_UINT8                           ucIndex,
    AT_DCE_MSC_STRU                    *pstDceMsc
);

VOS_UINT32 AT_HSUART_FreeUlDataBuff(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                        *pstImmZc
);
VOS_VOID AT_HSUART_FreeDlDataBuff(IMM_ZC_STRU *pstImmZc);
VOS_UINT32 AT_HSUART_ClearDataBuff(VOS_UINT8 ucIndex);
VOS_UINT32 AT_HSUART_GetUlDataBuff(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                       **pstImmZc,
    VOS_UINT32                         *pulLen
);
VOS_UINT32 AT_HSUART_WriteDataAsync(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                        *pstImmZc
);
VOS_UINT32 AT_HSUART_SendDlData(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                          *pucData,
    VOS_UINT16                          usLen
);
VOS_VOID AT_HSUART_ProcUlData(
    VOS_UINT8                           ucIndex,
    IMM_ZC_STRU                        *pstImmZc
);

VOS_UINT32 AT_HSUART_ProcDtrChange(VOS_UINT8 ucIndex, AT_DCE_MSC_STRU *pMscStru);
VOS_UINT32 AT_HSUART_ProcDtrCtrlMode(VOS_VOID);

VOS_UINT32 AT_HSUART_StartFlowCtrl(
    VOS_UINT32                          ulParam1,
    VOS_UINT32                          ulParam2
);
VOS_UINT32 AT_HSUART_StopFlowCtrl(
    VOS_UINT32                          ulParam1,
    VOS_UINT32                          ulParam2
);

VOS_UINT32 AT_HSUART_SendRawDataFromOm(
    VOS_UINT8                          *pucVirAddr,
    VOS_UINT8                          *pucPhyAddr,
    VOS_UINT32                          ulLen
);

VOS_VOID AT_HSUART_UlDataReadCB( VOS_VOID );
VOS_VOID AT_HSUART_MscReadCB(AT_DCE_MSC_STRU *pstDceMsc);
VOS_VOID AT_HSUART_SwitchCmdDetectCB(VOS_VOID);
VOS_VOID AT_HSUART_WaterDetectCB(water_level enLevel);
VOS_UINT32 AT_HSUART_InitPort(VOS_VOID);
VOS_UINT32 AT_HSUART_ConfigFlowCtrl(
    VOS_UINT8                           ucIndex,
    VOS_UINT32                          ulRtsFlag,
    VOS_UINT32                          ulCtsFlag
);

VOS_UINT32 AT_HSUART_ConfigCharFrame(
    VOS_UINT8                           ucIndex,
    AT_UART_FORMAT_ENUM_UINT8           enFormat,
    AT_UART_PARITY_ENUM_UINT8           enParity
);

VOS_UINT32 AT_HSUART_ConfigBaudRate(
    VOS_UINT8                           ucIndex,
    AT_UART_BAUDRATE_ENUM_UINT32        enBaudRate
);

VOS_VOID AT_HSUART_InitLink(VOS_UINT8 ucIndex);
VOS_VOID AT_HSUART_RegCallbackFunc(VOS_UINT8 ucIndex);
#endif

AT_IO_LEVEL_ENUM_UINT8 AT_GetIoLevel(
    VOS_UINT8                           ucIndex,
    VOS_UINT8                           ucIoCtrl
);
VOS_VOID AT_CtrlDCD(
    VOS_UINT8                           ucIndex,
    AT_IO_LEVEL_ENUM_UINT8              enIoLevel
);
VOS_VOID AT_CtrlDSR(
    VOS_UINT8                           ucIndex,
    AT_IO_LEVEL_ENUM_UINT8              enIoLevel
);
VOS_VOID AT_CtrlCTS(
    VOS_UINT8                           ucIndex,
    AT_IO_LEVEL_ENUM_UINT8              enIoLevel
);
VOS_VOID AT_CtrlRI(
    VOS_UINT8                           ucIndex,
    AT_IO_LEVEL_ENUM_UINT8              enIoLevel
);

#if (FEATURE_ON == FEATURE_AT_HSUART)
VOS_UINT32 AT_IsSmsRingingTe(VOS_VOID);
VOS_VOID AT_SmsRingOn(VOS_VOID);
VOS_VOID AT_SmsRingOff(VOS_VOID);
VOS_VOID AT_SmsStartRingTe(VOS_UINT32 ulNewSmsFlg);
VOS_VOID AT_SmsStopRingTe(VOS_VOID);
VOS_VOID AT_RcvTiSmsRiExpired(REL_TIMER_MSG *pstTmrMsg);
VOS_UINT32 AT_IsVoiceRingingTe(VOS_VOID);
AT_UART_RI_STATUS_ENUM_UINT8 AT_GetRiStatusByCallId(VOS_UINT8 ucCallId);
VOS_VOID AT_VoiceRingOn(VOS_UINT8 ucCallId);
VOS_VOID AT_VoiceRingOff(VOS_UINT8 ucCallId);
VOS_VOID AT_VoiceStartRingTe(VOS_UINT8 ucCallId);
VOS_VOID AT_VoiceStopRingTe(VOS_UINT8 ucCallId);
VOS_VOID AT_RcvTiVoiceRiExpired(REL_TIMER_MSG *pstTmrMsg);
#endif

VOS_VOID AT_ProcFormatResultMsc(VOS_UINT8 ucIndex, VOS_UINT32 ulReturnCode);



typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    AT_INTER_MSG_ID_ENUM_UINT32         enMsgId;            /* 消息类型     */  /* _H2ASN_Skip */
    VOS_UINT32                          ulPortId;           /* 端口ID */
    AT_DCE_MSC_STRU                     stDceMscInfo;       /* 管脚信号信息 */

} AT_MNTN_MSC_STRU;

/*****************************************************************************
 函 数 名  : AT_MNTN_TraceInputMsc
 功能描述  : 管脚信号输入可维可测
 输入参数  : ucIndex   - 端口索引
             pstDceMsc - 管脚信号信息(调用者保证非空)
 输出参数  : 无
 返 回 值  : VOS_VOID
*****************************************************************************/
VOS_VOID AT_MNTN_TraceInputMsc(
    VOS_UINT8                           ucIndex,
    AT_DCE_MSC_STRU                    *pstDceMsc
);

/*****************************************************************************
 函 数 名  : AT_MNTN_TraceOutputMsc
 功能描述  : 管脚信号输出可维可测
 输入参数  : ucIndex   - 端口索引
             pstDceMsc - 管脚信号信息(调用者保证非空)
 输出参数  : 无
 返 回 值  : VOS_VOID
*****************************************************************************/
VOS_VOID AT_MNTN_TraceOutputMsc(
    VOS_UINT8                           ucIndex,
    AT_DCE_MSC_STRU                    *pstDceMsc
);

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtInputProc */

