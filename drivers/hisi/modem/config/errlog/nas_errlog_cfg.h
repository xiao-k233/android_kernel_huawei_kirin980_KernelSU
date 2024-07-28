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

#ifndef __NAS_ERRLOG_CFG_H__
#define __NAS_ERRLOG_CFG_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "product_config.h"

/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
 ö����    : NAS_ERR_LOG_ALM_ID_ENUM
 ö��˵��  : ���ϸ澯ID
 1.��    ��   : 2013��08��27��
   �޸�����   : �½�
 2.��    ��   : 2014��09��16��
   �޸�����   : CS ERRLOG��Ŀ�����澯ID
*****************************************************************************/
enum NAS_ERR_LOG_ALM_ID_ENUM
{
    NAS_ERR_LOG_ALM_CS_REG_FAIL                             = 0x01,             /* CS��ע��ʧ�� */
    NAS_ERR_LOG_ALM_PS_REG_FAIL                             = 0x02,             /* PS��ע��ʧ�� */
    /* Modified for SEARCH_NW_CHR_OPT, 2015-8-22, begin */
    NAS_ERR_LOG_ALM_OOS_NW_SRCH_PROC_INFO                   = 0x03,             /* ��������������������Ϣ */
    /* Modified for SEARCH_NW_CHR_OPT, 2015-8-22, end */
    NAS_ERR_LOG_ALM_CS_CALL_FAIL                            = 0x04,             /* CS����ʧ�ܼ��쳣�Ҷ� */
    NAS_ERR_LOG_ALM_PS_CALL_FAIL                            = 0x05,             /* PS����ʧ�ܼ��쳣�Ҷ� */
    NAS_ERR_LOG_ALM_SMS_FAIL                                = 0x06,             /* ����ʧ�� */
    NAS_ERR_LOG_ALM_VC_OPT_FAIL                             = 0x07,             /* VC����ʧ�� */
    /* Added for cs_err_log, 2014-09-16 Begin */
    NAS_ERR_LOG_ALM_CS_PAGING_FAIL                          = 0x08,             /* CS PAGING fail */
    NAS_ERR_LOG_ALM_CS_MT_CALL_FAIL                         = 0x09,             /* CS MT fail */
    NAS_ERR_LOG_ALM_CSFB_MT_CALL_FAIL                       = 0x0a,             /* CSFB MT fail */
    NAS_ERR_LOG_ALM_MNTN                                    = 0x0b,             /* ���ϸ澯�Ŀ�ά�ɲ� */
    NAS_ERR_LOG_ALM_NW_DETACH_IND                           = 0x0c,             /* ���緢���DETACHָʾ */
    /* Added for cs_err_log, 2014-09-16 End */

    NAS_ERR_LOG_ALM_PS_SRV_REG_FAIL                         = 0x0d,             /* PS SERVICE���� */
    /* Added for CHR optimize, 2015-03-10 begin */
    NAS_ERR_LOG_ALM_CM_SRV_REJ_IND                          = 0x0e,             /* CS SERVICE�ܾ� */
    NAS_ERR_LOG_ALM_MO_DETACH_IND                           = 0x0f,             /* ���ط����DETACH */
    NAS_ERR_LOG_ALM_RAT_FREQUENTLY_SWITCH                   = 0x10,             /* 4G��2/3GƵ���л� */
    /* Added for CHR optimize, 2015-03-10 end */

    /* Added for SEARCH_NW_CHR_OPT, 2015-8-13, begin */
    NAS_ERR_LOG_ALM_OOS_BEGIN                               = 0x11,             /* �޷���ʼ */
    NAS_ERR_LOG_ALM_OOS_END                                 = 0x12,             /* �޷������ */
    /* Added for SEARCH_NW_CHR_OPT, 2015-8-13, end */

    NAS_ERR_LOG_ALM_PROCESS_INFO_IND                        = 0x13,             /* ������Ϣָʾ */

    /* Added for CHR of FFT Find MCC, 2015-10-30, begin */
    NAS_ERR_LOG_ALM_FFT_SRCH_MCC_INFO                       = 0x14,             /* FFT����MCC�Ľ�� */
    /* Added for CHR of FFT Find MCC, 2015-10-30, end */

    NAS_ERR_LOG_ALM_GET_CARD_IMSI_FAIL                      = 0x15,             /* ��ȡ����IMSIʱʧ�� */

    /* Added for srvcc_imsRedial_chr, 2015-12-5, begin */
    NAS_ERR_LOG_ALM_SRVCC_FAIL_INFO                         = 0x16,             /* FFT����MCC�Ľ�� */
    /* Added for srvcc_imsRedial_chr, 2015-12-5, end */

    /* Added for LTE_LOST_CHR, 2016-03-24, begin */
    NAS_ERR_LOG_ALM_LTE_LOST                                = 0x17,             /* �����ϱ���ʱ�䲻��LTE���¼� */
    NAS_ERR_LOG_ALM_LTE_LOST_DETAIL_INFO                    = 0x18,             /* д��������Ĳ���4G�ļ�¼����ϸ��Ϣ */
    /* Added for LTE_LOST_CHR, 2016-03-24, end */

    /* Added for cs_call_chr_improve, 2016-4-26, begin */
    NAS_ERR_LOG_ALM_MM_CSFB_INFO                            = 0x19,             /* MM��CSFB��Ϣ */
    NAS_ERR_LOG_ALM_PROCESS_INFO_MM_RCV_CALL_SRV            = 0x1A,             /* MM���յ�����ҵ��Ĺ�����Ϣ */
    NAS_ERR_LOG_ALM_PROCESS_INFO_MM_AUTH                    = 0x1B,             /* MM��Ȩ�Ĺ�����Ϣ */
    NAS_ERR_LOG_ALM_PROCESS_INFO_CC_ALERTING                = 0x1C,             /* CC ALERTING�Ĺ�����Ϣ */
    NAS_ERR_LOG_ALM_PROCESS_INFO_CC_PROGRESS_IND            = 0x1D,             /* Progress Indicator�Ĺ�����Ϣ */
    NAS_ERR_LOG_ALM_CC_ABNORNAL_HANGUP                      = 0x1E,             /* CC���쳣�Ҷ� */
    NAS_ERR_LOG_ALM_CC_REEST                                = 0x1F,             /* CCҵ���ؽ� */
    NAS_ERR_LOG_ALM_TAF_CALL_INFO_STATS                     = 0x20,             /* TAF CALL�ĺ���ͳ����Ϣ */
    /* Added for cs_call_chr_improve, 2016-4-26, end */

    /* Modified for  CHR framework optimize, 2017-4-18, begin */
    NAS_ERR_LOG_ALM_MM_PAGING_RSP_RETRY_SUCC                = 0x21,             /* ����Ѱ����Ӧ�ط������ɹ���Ϣ */
    /* Modified for  CHR framework optimize, 2017-4-18, end */

    NAS_ERR_LOG_ALM_INTER_SYSTIM_RESUME_TIMER_ABNORMAL      = 0x22,             /* ��ϵͳresume��ʱ������� */

    NAS_ERR_LOG_ALM_MM_PAGING_CACHE_RETRY_SUCC              = 0x23,             /* ����Ѱ�����淢�ɹ���Ϣ */

    /* Added for SMS_INIT_READ_PROJECT, 2016-10-13, begin */
    NAS_ERR_LOG_ALM_CHECK_SMS_STATUS_TIMEOUT                = 0x24,             /* TAF��ȡ����״̬�б�ʱ */
    /* Added for SMS_INIT_READ_PROJECT, 2016-10-13, end */

    /* Added for NetWork Lost CHR for power save, 2016-10-28, begin */
    NAS_ERR_LOG_ALM_OOS_STATS_INFO                          = 0x25,           /* �����ĵĶ���CHR��ͳ�ƶ�����Ϣ */
    /* Added for NetWork Lost CHR for power save, 2016-10-28, begin */

    NAS_ERR_LOG_ALM_CC_DECODE_FAIL                          = 0x26,             /* CC����ʧ�� */

    NAS_ERR_LOG_ALM_MM_MT_S12_DISCARD_SYSINFO_INFO          = 0x28,             /* ������S12ʱ����ϵͳ��Ϣ�ĳ�����¼ */

    NAS_ERR_LOG_ALM_CC_INCOMPATIBLE_INFO                    = 0x29,             /* ��ͻ�����ϱ� */

    /* Added for  CHR framework optimize, 2017-4-19, begin */
    NAS_ERR_LOG_ALM_DOMAIN_CAPABILITY                       = 0x2a,             /* �����������ϱ� */
    /* Added for  CHR framework optimize, 2017-4-19, end */

    /* Added for  CHR framework optimize, 2017-4-25, begin */
    NAS_ERR_LOG_ALM_TIMER_ERR                               = 0x2b,             /* ��ʱ���쳣 */
    /* Added for  CHR framework optimize, 2017-4-25, end */

    /* Added for chr_network_para_collect, 2017-8-9, begin */
    NAS_ERR_LOG_ALM_NETWORK_PARA_CLT                        = 0x2c,             /* ��������ռ� */
    /* Added for chr_network_para_collect, 2017-8-9, end */

    /*Added for neetwork_para_in_sim_collect,2017-10-18, begin */
    NAS_ERR_LOG_ALM_SIM_INFO_CLT                            = 0x2d,            /* ���ļ������������Ϣ�ռ� */
    /*Added for network_para_in_sim_collect, 2017-10-18, end */

    /* Added for RELATIVE_STILL Mode Save power, 2018-04-08, begin */
    NAS_ERR_LOG_ALM_RELATIVE_STILL_MODE_INFO                = 0x2e,            /* ΢��ģʽ��Ϣ�ռ� */
    /* Added for RELATIVE_STILL Mode Save power, 2017-04-08, end */

    /* Added for OOS_Cell_Route_CHR, 2018-8-11, begin */
    NAS_ERR_LOG_ALM_CELL_CHANGE_PATH_BEFORE_OOS             = 0x2f,             /* ����ǰ���л�·���ϱ� */
    NAS_ERR_LOG_ALM_LTE_RECOVERY_TIME_FROM_GW               = 0X30,             /* ��GU�ϻָ�������ʼ�����ٴ�GU�ָ���L��ʱ�� */
    /* Added for OOS_Cell_Route_CHR, 2018-8-11, end */

    NAS_ERR_LOG_ALM_ID_RES_INFO_IND                         = 0X31,             /* NAS 19�ֲ�ID RESPONSE ��¼ */
    /****************************************************************************************************************************
    **********************************    GUNAS ��CNAS CHRԭ��ֵ�ֽ���    *******************************************************
    ****************************************************************************************************************************/

    /* Added for CDMA Iteration 20, 2016-02-24, begin */
    NAS_ERR_LOG_ALM_1X_COMMON_INFO                          = 0x40,              /*1x������Ϣ*/
    NAS_ERR_LOG_ALM_1X_OOS_REPORT                           = 0x41,              /*1x����ʧ���ϱ�*/
    NAS_ERR_LOG_ALM_1X_OOS_RECOVERY                         = 0x42,              /*1x����ʧ�ָܻ��ϱ�*/
    NAS_ERR_LOG_ALM_1X_OOS_SEARCH                           = 0x43,              /*1x����ʧ����������*/
    NAS_ERR_LOG_ALM_1X_CS_MO_CALL_EXCEPTION                 = 0x44,              /*1x CS����ʧ��*/
    NAS_ERR_LOG_ALM_1X_MT_SERVICE_EXCEPTION                 = 0x45,              /*1x����ʧ��*/
    NAS_ERR_LOG_ALM_1X_CS_CONVERSATION_EXCEPTION            = 0x46,              /*1x CS����*/
    /* Added for CDMA_MODEM_CODEC_FAIL_CHR,2016-06-20,begin */
    NAS_ERR_LOG_ALM_1X_CODEC_FAIL                           = 0x47,              /* 1X�տ���Ϣ�����ʧ�� */
    /* Added for CDMA_MODEM_CODEC_FAIL_CHR,2016-06-20,end */
    NAS_ERR_LOG_ALM_1X_QPCH_SUPPORT                         = 0x48,             /* 1x QPCH����֧����Ϣ */

    /* Added for CL network lost chr for power save 2016-11-28 begin */
    NAS_ERR_LOG_ALM_1X_OOS_PROCESS_INFO                     = 0x49,             /* CL����Ƶ���ϱ�����:1x �����ָ���Ϣ */
    /* Added for CL network lost chr for power save 2016-11-28 end */

    /* Added for XCC_MT_PAGING_REEST, 2017-01-04, begin */
    NAS_ERR_LOG_ALM_1X_MT_REEST_INFO                        = 0x4a,             /* 1x����������Ϣ */
    /* Added for XCC_MT_PAGING_REEST, 2017-01-04, end */

    NAS_ERR_LOG_ALM_HRPD_COMMON_INFO                        = 0x80,              /*Hrpd������Ϣ*/
    NAS_ERR_LOG_ALM_CDMA_PS_CALL_FAIL                       = 0x81,              /*Hrpd PS ����ʧ��*/
    NAS_ERR_LOG_ALM_CDMA_PS_DISC_EXCEPTION                  = 0x82,              /*Hrpd PS ����*/
    NAS_ERR_LOG_ALM_HRPD_UATI_FAIL                          = 0x83,              /*Uatiʧ��*/
    NAS_ERR_LOG_ALM_HRPD_SESSION_FAIL                       = 0x84,              /*Sessionʧ��*/
    NAS_ERR_LOG_ALM_HRPD_SESSION_EXCEP_DEACT                = 0x85,              /*Session�쳣ȥ����*/
    NAS_ERR_LOG_ALM_CL_OOS_SEARCH                           = 0x86,              /*CL��ģ������������*/
    /* Added for CDMA Iteration 20, 2016-02-24, end */
    /* Modified for CHR_PHASE_II,2015-04-07,begin */
    NAS_ERR_LOG_ALM_HRPD_OR_LTE_OOS_REPORT                  = 0x87,             /* CLģʽ��HRPD��LTE�����ϱ� */
    NAS_ERR_LOG_ALM_HRPD_OR_LTE_OOS_RECOVERY                = 0x88,              /* CLģʽ��HRPD��LTE�����ָ��ϱ� */
    /* Modified for CHR_PHASE_II,2015-04-07,end */
    NAS_ERR_LOG_ALM_HRPD_OOS_SEARCH                         = 0x89,              /* HRPD����ʧ���������� */
    NAS_ERR_LOG_ALM_XREG_FAIL_INFO                          = 0x8A,
    NAS_ERR_LOG_ALM_XSMS_SND_FAIL                           = 0x8B,
    NAS_ERR_LOG_ALM_XSMS_RCV_FAIL                           = 0x8C,
    /* Modified for CHR_PHASE_II,2015-04-15,begin */
    NAS_ERR_LOG_ALM_CL_LTE_COMMON_INFO                      = 0x8D,           /* CLģʽ�£�LTE������Ϣ */
    /* Modified for CHR_PHASE_II,2015-04-15,end */

    /* Modified for  CHR framework optimize, 2017-4-25, begin */
    NAS_ERR_LOG_ALM_RESERVED                                = 0x8E,              /* ALARMID����λ����ǰû��ʹ�ã�������CNAS ALARM ID����ֱ��ʹ�� */
    /* Modified for  CHR framework optimize, 2017-4-25, end */

    /* Added for CDMA No_Back_4G, 2016-06-01, begin */
    NAS_ERR_LOG_ALM_CL_LEAVE_LTE_REPORT                     = 0X8F,              /* ��ʱ�䲻��LTE�����ϱ� */
    NAS_ERR_LOG_ALM_CL_LEAVE_LTE_INFO                       = 0X90,              /* ��ʱ�䲻��LTE��Ϣ */
    /* Added for CDMA No_Back_4G, 2016-06-01, end */
    /* Added for CDMA_MODEM_CODEC_FAIL_CHR,2016-06-20,begin */
    NAS_ERR_LOG_ALM_HRPD_CODEC_FAIL                         = 0x91,            /* HRPD�տ���Ϣ�����ʧ�� */
    /* Added for CDMA_MODEM_CODEC_FAIL_CHR,2016-06-20,end */

    NAS_ERR_LOG_ALM_HRPD_SESSION_CLOSE_PROT_NEG_ERR         = 0x92,            /* HRPD SessionCloseԭ��ֵΪPROT_NEG_ERR����Ϣ */
    /* Added for DO_BACK_TO_LTE_OPT, 2016-08-11, begin */
    NAS_ERR_LOG_ALM_QUICK_BACK_TO_4G_STATISTIC_INFO         = 0x93,            /* APS������3G�¿��4G��Ϣͳ�� */
    /* Added for DO_BACK_TO_LTE_OPT, 2016-08-11, end */

    /* Added for CDMA VoLTE, 2016-8-11, begin */
    NAS_ERR_LOG_ALM_CSCALL_IMS_FAIL_1X_REDIAL_INFO          = 0x95,             /* ����VOLTE IMS����ʧ�ܺ����ز�����Ϣ */
    /* Added for CDMA VoLTE, 2016-8-11, end */

    /* Added for CL network lost chr for power save 2016-11-28 begin */
    NAS_ERR_LOG_ALM_DO_LTE_OOS_PROCESS_INFO                 = 0x96,             /* CL����Ƶ���ϱ�����:DO_LTE �����ָ���Ϣ */
    /* Added for CL network lost chr for power save 2016-11-28 end */

    /* Added for DSDS Modem Control, 2017-2-13, begin */
    NAS_ERR_LOG_MODEM_RESTART_ABORT_SERVICE                 = 0x97,               /* Modem�쳣�������ҵ���ϱ�chr��Ϣ */
    /* Added for DSDS Modem Control, 2017-2-13, end */

    /* Added for CHR, 2017-3-7, begin */
    NAS_ERR_LOG_ALM_CL_RAT_MODE_FREQUENTLY_SWITCH_INFO      = 0x98,             /* GUL��CLģʽƵ���л��쳣CHR��Ϣ */

    NAS_ERR_LOG_ALM_CL_GUL_SWITCH_PUNISH_PHASE_INFO         = 0x99,             /* GUL��CL�л�ʱ��ƹ�ҳͷ���ʱ����Ϣ */
    /* Added for CHR, 2017-3-7, end */

    /* Added for CHR_HEY_PARAMETER, 2017-08-18, begin */
    NAS_ERR_LOG_ALM_CNAS_KEY_PARAMETER_INFO                 = 0x9a,             /*  CNASģ��ؼ�������Ϣ */
    /* Added for CHR_HEY_PARAMETER, 2017-08-18, end */

    NAS_ERR_LOG_ALM_CNAS_1X_RESEL_INFO                      = 0x9b,             /*  CNASģ��1x Resel ������Ϣ */
    /* Added for CNAS REQ PACK, 2017-9-13, begin */
    NAS_ERR_LOG_ALM_CNAS_ENC_VOICE_FAIL_INFO                = 0x9c,             /* ��������ʧ����Ϣ*/
    /* Added for CNAS REQ PACK, 2017-9-14, end */
    /* Added for EMC_CHR, 2018-2-11, begin */
    NAS_ERR_LOG_ALM_CALL_TYPE_EMC                           = 0x9d,             /* �����ϱ���ǰ��������Ϊ EMC */
    NAS_ERR_LOG_ALM_EMC_DOMAIN_SEL_AND_RETRY                = 0x9e,             /* ����AP���ѯ���� EMC��ѡ��������Ϣ */
    /* Added for EMC_CHR, 2018-2-11, end */

    /* Added for LOCK optimization, 2018-3-20 begin */
    NAS_ERR_LOG_ALM_CNAS_LOCK_UNLOCK_COUNT                  = 0x9f,             /* �����ͽ�����¼ */
    NAS_ERR_LOG_ALM_CNAS_UNLOCK_MTMO_COUNT                  = 0xa0,             /* ����������������м�¼ */
    /* Added for LOCK optimization, 2018-3-20 end */

    /* Modified for ClVolte_CHR 2018-5-11 begin */
    /* Modified for ctcc_volte_normal_switch_opt, 2018-6-11 begin */
    NAS_ERR_LOG_ALM_CL_IMS_INFO                             = 0xa1,             /* clģʽ�£�����ims��Ϣͳ�ƣ������ֶ��к��Զ���*/
    /* Modified for ctcc_volte_normal_switch_opt, 2018-6-11 end */
    /* Modified for ClVolte_CHR 2018-5-11 end */

    /* Added for EHRPD_PDN_CHR, 2018-7-3, begin */
    NAS_ERR_LOG_ALM_EVDO_ATTACH_FAIL_INFO                   = 0xa2,             /* clģʽ�£�EHRPDע��ʧ�ܻ���PDN����ʧ����Ϣ */
    /* Added for EHRPD_PDN_CHR, 2018-7-3, end */
    NAS_ERR_LOG_ALM_ID_BUTT
};
typedef VOS_UINT16  NAS_ERR_LOG_ALM_ID_ENUM_U16;

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/

/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/

/*****************************************************************************
  7 STRUCT����
*****************************************************************************/

/*****************************************************************************
  8 UNION����
*****************************************************************************/

/*****************************************************************************
  9 OTHERS����
*****************************************************************************/

/*****************************************************************************
  10 ��������
*****************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
