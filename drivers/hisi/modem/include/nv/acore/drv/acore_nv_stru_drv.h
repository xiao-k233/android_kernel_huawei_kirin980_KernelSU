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

#ifndef __DRV_NV_DEF_ACORE_H__
#define __DRV_NV_DEF_ACORE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include "acore_nv_id_drv.h"

/*****************************************************************************
 �ṹ��    : NV_SECBOOT_ENABLE_FLAG
 �ṹ˵��  : NV_SECBOOT_ENABLE_FLAG�ṹ ID=50201
*****************************************************************************/
typedef struct
{
    unsigned short usNVSecBootEnableFlag; /*Range:[0,1]*/
}NV_SECBOOT_ENABLE_FLAG;

/* USB Feature for usb id:50075 */
typedef struct
{
    unsigned char flags;
    unsigned char reserve1;
    unsigned char hibernation_support;/**/
    unsigned char pc_driver;
    unsigned char detect_mode;/*0=pmu detect; 1=no detect(for fpga&cpe); 2=car module vbus detect */
    unsigned char enable_u1u2_workaround;
    unsigned char usb_gpio_support:4;
    unsigned char usb_mode:4;
    unsigned char network_card;
} NV_USB_FEATURE;

typedef struct
{
    unsigned int smp_sch; 
}DRV_USB_DBG_STRU;

/* C�˵�����λ���迪����������NV�� = 0xd134 */
typedef struct
{
    unsigned int is_feature_on:1;         /* bit0, ����C�˵�����λ�����Ƿ�� */
    unsigned int is_connected_ril:1;      /* bit1, �Ƿ��RIL�Խ� */
    unsigned int reserve:30;              /* bit 2-31*/
} DRV_CCORE_RESET_STRU;

/* NVID=0xd144 begin */
typedef struct
{
    unsigned int mdm_dump     :1;     /* modem_dump.bin */
    unsigned int mdm_sram     :1;     /* modem_sram.bin */
    unsigned int mdm_share    :1;     /* modem_share.bin */
    unsigned int mdm_ddr      :1;     /* modem_ddr.bin */
    unsigned int lphy_tcm     :1;     /* lphy_tcm.bin */
    unsigned int lpm3_tcm     :1;     /* lpm3_tcm.bin */
    unsigned int ap_etb       :1;     /* ap_etb.bin */
    unsigned int mdm_etb      :1;     /* modem_etb.bin */
    unsigned int reset_log    :1;     /*reset.log*/
    unsigned int cphy_tcm     :1;     /* cphy_tcm.bin */
    unsigned int mdm_secshare :1;     /* secshare.bin */
    unsigned int mdm_dts      :1;     /* modem_dts.bin */    
    unsigned int llram_share  :1;     /* modem_llram.bin */
    unsigned int reserved2   :19;
}DUMP_FILE_BITS;

typedef struct
{
    union
    {
        unsigned int         file_value;
        DUMP_FILE_BITS  file_bits;
    } file_list;
    unsigned int             file_cnt; /* ��¼�쳣�ļ����� */
}DUMP_FILE_CFG_STRU;

typedef struct
{
    unsigned int enable;        /*���߹����Ĵ�������ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    unsigned int reset_enable;  /*��λʹ�ܱ�־, 0, ȥʹ��; 1, ʹ��*/
}DRV_PDLOCK_AP_CFG_STRU;

typedef struct
{
    unsigned int enable;        /*���߹����Ĵ�������ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    unsigned int reset_enable;  /*��λʹ�ܱ�־, 0, ȥʹ��; 1, ʹ��*/
}DRV_DLOCK_CFG_STRU;
/* dlock = 0xd155 */

/*end rse mipi ���÷�ʽ*/

/* 0xD14d */
typedef struct
{
    unsigned int product         :2;
    unsigned int reset           :1;
    unsigned int save_bakup      :1;
    unsigned int save_image      :1;
    unsigned int save_ddr        :1;
    unsigned int resume_bakup    :1;  /*Range:[0,1]*/
    unsigned int resume_img      :1;  /*Range:[0,1]*/
    unsigned int reserved        :24;
}NV_DEBUG_CFG_STRU;

/*NV ID = 0xd157 DVSʹ�ܿ��Ƽ�hpm��ֵ����*/
//[NV elf������Ŀ] �ṹ�����ظ�
#ifndef NV_DEFINE
typedef struct {
    unsigned int dvs_en;
    unsigned int hpm_delay;
}ST_DVS_CONFIG_STRU;
#endif

typedef struct
{
    unsigned int enable;         /*mbb ap��noc err probe����ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    unsigned int reset_enable;   /*mbb ap�ิλʹ�ܱ�־, 0, ȥʹ��; 1, ʹ��*/
}DRV_NOC_AP_CFG_STRU;

typedef struct
{
    unsigned int enable;         /*mbb ap��bus err probe����ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
	unsigned int reset_enable;   /*mbb ap�ิλʹ�ܱ�־, 0, ȥʹ��; 1, ʹ��*/
}DRV_BUS_ERR_AP_CFG_STRU;

typedef struct
{
    unsigned int enable;        /*mbb ap��dmss����ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    unsigned int reset_enable;  /*mbb ap��dmss��λʹ�ܱ�־, 0, ��ʹ��;  1, ʹ��*/
}DRV_DMSS_CFG_STRU;

typedef struct {
    unsigned int ulRatePeriod;   /* �������ڵ�λms , ȡֵ����1~0xFFFFFFFF */
    unsigned int ulRateEn[2];    /* ��������ʹ�ܣ�ÿ��bit��Ӧ1��ͨ����ulFlowEn[0]��Ӧchannel 0~31 bit0 :channel 0��ulFlowEn[1]��Ӧchannel 32~63 bit32:chan32��0��ʹ�ܣ�1ʹ�� */
    unsigned int ulRateThr[64];  /* ����������ֵ����Ӧ64��ͨ����ȡֵ0~0xFFFFFFFF��0��ͨ��ʼ�ս���������ͨ�����ȼ�ʼ�ձ������ */
}DRV_DIAG_RATE_STRU;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

