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


#ifndef __DRV_NV_DEF_H__
#define __DRV_NV_DEF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include "nv_id_drv.h"

/*lint --e{959}*/
/*****************************************************************************
 �ṹ��    : nv_protocol_base_type
 �ṹ˵��  : nv_protocol_base_type�ṹ ID= en_NV_Item_Modem_Log_Path 148
            MBB��̬ modem log·��������������������̬��modem log·����
*****************************************************************************/
/*NV ID = 50018*/
#pragma pack(push)
#pragma pack(1)
    typedef struct
    {
        signed int        nvStatus;
        signed char         nv_version_info[30];
    }NV_SW_VER_STRU;
#pragma pack(pop)

/*NV ID  = 0xd10b*/

typedef struct ST_PWC_SWITCH_STRU_S {

    /*����NV���ڵ͹��ĵ�������ƣ�������ЩBIT��ʱδ�ã�������ʱ�������Ϊ׼ȷ������*/
    unsigned int deepsleep  :1; /*bit0*/
    unsigned int lightsleep :1; /*bit1*/
    unsigned int dfs        :1; /*bit2*/
    unsigned int hifi       :1; /*bit3*/
    unsigned int drxAbb     :1; /*bit4*/
    unsigned int drxZspCore :1; /*bit5*/
    unsigned int drxZspPll  :1; /*bit6*/
    unsigned int drxWLBbpPll  :1; /*bit7*/
    unsigned int drxGBbpPll   :1; /*bit8*/
    unsigned int drxRf      :1; /*bit9*/
    unsigned int drxPa      :1; /*bit10*/
    unsigned int drxGuBbpPd   :1; /*bit11*/
    unsigned int drxDspPd     :1; /*bit12*/
    unsigned int drxLBbpPd    :1; /*bit13*/
    unsigned int drxPmuEco    :1; /*bit14*/
    unsigned int drxPeriPd    :1; /*bit15*/
    unsigned int l2cache_mntn  :1; /*bit16*/
    unsigned int bugChk     :1; /*bit17*/
    unsigned int pmuSwitch     :1; /*bit18*/
    unsigned int drxLdsp      :1;  /*bit 19*/
    unsigned int matserTDSpd  :1; /*bit20*/
    unsigned int tdsClk    :1;  /*bit21*/
    unsigned int slaveTDSpd   :1; /*bit22*/
    unsigned int slow         :1;/*bit23*/
    unsigned int ccpu_hotplug_suspend      :1;/*bit24 �˷����κ�ʱ�����γ���cpu��suspend��������ʱ�ϳ�*/
    unsigned int ccpu_hotplug_crg      :1;/*bit25 �˷����κ�ʱ�����κ˽���l1cache��remove smp��������ʱ�ж̣����ǵ͹���˯��ʱ��Ҫ�Ȱѱ��γ���cpu����*/
    unsigned int ccpu_tickless          :1;/*bit26 ccpu tickless*/
    unsigned int reserved  :4; /*bit27-30*/
    unsigned int ddrdfs    :1; /*bit31*/

    /*����NV����DEBUG���µ�Ϳ�����*/
    unsigned int drx_pa_pd        :1; /*bit0 ���ڿ���PA�����µ�*/
    unsigned int drx_rfic_pd      :1; /*bit1 ���ڿ���RFIC�����µ�*/
    unsigned int drx_rfclk_pd     :1; /*bit2 ���ڿ���RFIC CLK�����µ�*/
    unsigned int drx_fem_pd       :1; /*bit3 ���ڿ���FEM�����µ�*/
    unsigned int drx_cbbe16_pd    :1; /*bit4 ���ڿ���CBBE16�����µ�*/
    unsigned int drx_bbe16_pd     :1; /*bit5 ���ڿ���BBE16�����µ�*/
    unsigned int drx_abb_pd       :1; /*bit6 ���ڿ���ABB�����µ�*/
    unsigned int drx_bbp_init     :1; /*bit7 ���ڿ���BBPĬ�Ͻ��ӵ�ȫ������*/
    unsigned int drx_bbppwr_pd    :1; /*bit8 ���ڿ���BBP��Դ�е����µ�*/
    unsigned int drx_bbpclk_pd    :1; /*bit9 ���ڿ���BBPʱ���еĿ�����*/
    unsigned int drx_bbp_pll      :1; /*bit10 ���ڿ���BBP_PLL�Ŀ�����*/
    unsigned int drx_cbbe16_pll   :1; /*bit11 ���ڿ���CBBE16_PLL�Ŀ�����*/
    unsigned int drx_bbe16_pll    :1; /*bit12 ���ڿ���BBE16_PLL�Ŀ�����*/
    unsigned int drx_bbp_reserved :1; /*bit13 bbpԤ��*/
    unsigned int drx_abb_gpll     :1; /*bit14 ���ڿ���ABB_GPLL�Ŀ�����*/
    unsigned int drx_abb_scpll    :1; /*bit15 ���ڿ���ABB_SCPLL�Ŀ�����*/
    unsigned int drx_abb_reserved1:1;
    unsigned int drx_abb_reserved2:1;
    unsigned int reserved2        :14; /*bit18-31 δ��*/
}ST_PWC_SWITCH_STRU;

typedef struct ST_PWC_NR_POWERCTRL_STRU_S {

    /*����NV����NR�͹��ĵ�������ƣ�������ЩBIT��ʱδ�ã�������ʱ�������Ϊ׼ȷ������*/
    unsigned char nrcpudeepsleep;/*lixiaojie*/
    unsigned char l2hacdeepsleep;/*lixiaojie*/
    unsigned char cpubusdfs;/*yangqiang*/
    unsigned char hotplug;/*lixiaojie*/
    unsigned char tickless;/*lixiaojie*/
    unsigned char drxnrbbpinit;/*ningzhaoke*/
    unsigned char dxrbbppwr;/*ningzhaoke*/
    unsigned char drxnrbbpclk;/*ningzhaoke*/
    unsigned char drxnrbbppll;/*ningzhaoke*/
    unsigned char drxnrbbppmu;/*ningzhaoke*/
    unsigned char drxbbainit;/*ningzhaoke*/
    unsigned char drxbbapwr;/*ningzhaoke*/
    unsigned char drxbbaclk;/*ningzhaoke*/
    unsigned char drxbbapll;/*ningzhaoke*/
    unsigned char drxbbapmu;/*ningzhaoke*/
    unsigned char drxl1c;/*chenquan*/
    unsigned char drxl1cpll;/*chenquan*/
    unsigned char reserved;
}ST_PWC_NR_POWERCTRL_STRU;

typedef struct ST_DDR_TMON_PROTECT_STRU_S{
	unsigned int ddr_tmon_protect_on :1;
	unsigned int ddr_vote_dvfs_alone  :1;
	unsigned int reserved1 : 6;
	unsigned int ddr_tmon_protect_enter_threshold :3; //�±������threshold
	unsigned int ddr_tmon_protect_exit_threshold :3; //�±��˳�threshold
	unsigned int ddr_tmon_protect_freq_threshold:2;//�����±���DDR�������Ƶ��
	unsigned int ddr_tmon_protect_upper:3; //ddr ���¸�λ����
	unsigned int ddr_tmon_protect_downer:3; //ddr���¸�λ����
	unsigned int reserved2:10;
}ST_DDR_TMON_PROTECT_STRU;

typedef struct ST_CHR_REPORT_STRU_S {
    unsigned int pm_monitor_time;/*pm monitor time,Unit:minute,1 means if cp not sleep ,CHR will report the pm state*/
    unsigned int reserved1;
    unsigned int reserved2;
    unsigned int reserved3;
}ST_CHR_REPORT_STRU;

/*NV ID = 0xd10c*/
typedef struct ST_PWC_DFS_STRU_S {
    unsigned int CcpuUpLimit;
    unsigned int CcpuDownLimit;
    unsigned int CcpuUpNum;
    unsigned int CcpuDownNum;
    unsigned int AcpuUpLimit;
    unsigned int AcpuDownLimit;
    unsigned int AcpuUpNum;
    unsigned int AcpuDownNum;
    unsigned int DFSTimerLen;
    unsigned int DFSHifiLoad;
    unsigned int Strategy;/*ʹ�ú��ֲ���bit0:1->200ms���ؼ��,bit0:0->4s���ؼ��;bit1:1/0��/�رո���DDR��Ƶ*/
    unsigned int DFSDdrUpLimit;
    unsigned int DFSDdrDownLimit;
    unsigned int DFSDdrprofile;
    unsigned int reserved;
}ST_PWC_DFS_STRU;

/*ID=0xd111 begin */
typedef struct
{
    unsigned int dump_switch    : 2; /* 00: excdump, 01: usbdump, 1x: no dump */
    unsigned int ARMexc         : 1; /* 2 ARM�쳣��⿪��*/
    unsigned int stackFlow      : 1; /* 3 ��ջ�����⿪��*/
    unsigned int taskSwitch     : 1; /* 4 �����л���¼����*/
    unsigned int intSwitch      : 1; /* 5 �жϼ�¼����*/
    unsigned int intLock        : 1; /* 6 ���жϼ�¼����*/
    unsigned int appRegSave1    : 1; /* 7 �Ĵ�����1��¼���� */
    unsigned int appRegSave2    : 1; /* 8 �Ĵ�����2��¼����*/
    unsigned int appRegSave3    : 1; /* 9 �Ĵ�����3��¼����*/
    unsigned int commRegSave1   : 1; /* 10 �Ĵ�����1��¼���� */
    unsigned int commRegSave2   : 1; /* 11 �Ĵ�����2��¼����*/
    unsigned int commRegSave3   : 1; /* 12 �Ĵ�����3��¼����*/
    unsigned int sysErrReboot   : 1; /* 13 systemError��λ����*/
    unsigned int reset_log      : 1; /* 14 ǿ�Ƽ�¼���أ���δʹ��*/
    unsigned int fetal_err      : 1; /* 15 ǿ�Ƽ�¼���أ���δʹ��*/
    unsigned int log_ctrl       : 2; /* bsp_trsce �������*/
    unsigned int dumpTextClip   : 1; /* ddr����ʱtext�βü�����*/
	unsigned int secDump        : 1;
    unsigned int reserved1      : 12;
} DUMP_CFG_STRU;

typedef struct
{
    union
    {
        unsigned int         uintValue;
        DUMP_CFG_STRU   Bits;
    } dump_cfg;

    unsigned int appRegAddr1;    /* ACORE����Ĵ������ַ1*/
    unsigned int appRegSize1;    /* ACORE����Ĵ����鳤��1*/
    unsigned int appRegAddr2;    /* ACORE����Ĵ������ַ2*/
    unsigned int appRegSize2;    /* ACORE����Ĵ����鳤��2*/
    unsigned int appRegAddr3;    /* ACORE����Ĵ������ַ3*/
    unsigned int appRegSize3;    /* ACORE����Ĵ����鳤��3*/

    unsigned int commRegAddr1;   /* CCORE����Ĵ������ַ1*/
    unsigned int commRegSize1;   /* CCORE����Ĵ����鳤��1*/
    unsigned int commRegAddr2;   /* CCORE����Ĵ������ַ2*/
    unsigned int commRegSize2;   /* CCORE����Ĵ����鳤��2*/
    unsigned int commRegAddr3;   /* CCORE����Ĵ������ַ3*/
    unsigned int commRegSize3;   /* CCORE����Ĵ����鳤��3*/

    unsigned int traceOnstartFlag;           /* 0:��������Trace, ��0:����������Trace */
    unsigned int traceCoreSet;               /* 0:�ɼ�A��Trace, 1:�ɼ�C��Trace, 2:�ɼ�˫��Trace */
    unsigned int busErrFlagSet;             /* 0:���������������߹�������, ��0:�������������߹������� */
} NV_DUMP_STRU;
/*ID=0xd111 end */

/*NV ID = 0xd115 start*/
typedef struct {
    unsigned int index;           /*Ӳ���汾����ֵ(��汾��1+��汾��2)�����ֲ�ͬ��Ʒ*/
    unsigned int hwIdSub;        /*Ӳ���Ӱ汾�ţ����ֲ�Ʒ�Ĳ�ͬ�İ汾*/
    char  name[32];           /*�ڲ���Ʒ��*/
    char    namePlus[32];       /*�ڲ���Ʒ��PLUS*/
    char    hwVer[32];          /*Ӳ���汾����*/
    char    dloadId[32];        /*������ʹ�õ�����*/
    char    productId[32];      /*�ⲿ��Ʒ��*/
}PRODUCT_INFO_NV_STRU;

/* product support module nv define */
typedef struct
{
    unsigned int sdcard      : 1;//1: support; 0: not support
    unsigned int charge      : 1;
    unsigned int wifi        : 1;
    unsigned int oled        : 1;
    unsigned int hifi        : 1;
    unsigned int onoff       : 1;
    unsigned int hsic        : 1;
    unsigned int localflash  : 1;
    unsigned int reserved    : 24;
} DRV_MODULE_SUPPORT_STRU;

/*���ؼƵ�ѹ������У׼����*/
typedef struct
{
    unsigned int v_offset_a;         /* ��ѹУ׼���Բ��� */
    signed int v_offset_b;         /* ��ѹУ׼����ƫ��*/
    unsigned int c_offset_a;         /* ����У׼���Բ��� */
    signed int c_offset_b;         /* ����У׼����ƫ�� */
}COUL_CALI_NV_TYPE;

/*E5���ڸ���*/
typedef struct
{
    unsigned int wait_usr_sele_uart : 1;//[bit 0-0]1: await user's command for a moment; 0: do not wait
    unsigned int a_core_uart_num    : 2;//[bit 1-2]the number of uart used by a core
    unsigned int c_core_uart_num    : 2;//[bit 3-4]the number of uart used by c core
    unsigned int m_core_uart_num    : 2;//[bit 5-6]the number of uart used by m core
    unsigned int a_shell            : 1;//[bit 7-7]0:ashell is not used; 1:ashell is used
    unsigned int c_shell            : 1;//[bit 8-8]0:cshell is not used; 1:cshell is used
    unsigned int uart_at            : 1;//[bit 9-9]uart at control
    unsigned int extendedbits       : 22;//[b00]1:open cshell_auart; 0:close
}DRV_UART_SHELL_FLAG;

typedef struct
{
    unsigned int wdt_enable;
    unsigned int wdt_timeout;
    unsigned int wdt_keepalive_ctime;
    unsigned int wdt_suspend_timerout;
    unsigned int wdt_reserve;
}DRV_WDT_INIT_PARA_STRU;

/* pm om���� NV�� = 0xd145 */
typedef struct
{
    unsigned int mem_ctrl:1;       /* ����bitλ:ʹ���������͵�memory */
    unsigned int reserved:31;      /* ����bitλ:���� */
    unsigned char  log_threshold[4]; /* acore/ccore/mcore����д�ļ��ķ�ֵ, ��ֵ��ʾ�ٷֱ� */
    unsigned char  mod_sw[8];        /* ����ģ��log���ܿ��ƿ��� */
}DRV_PM_OM_CFG_STRU;

/* watchpoint = 0xd148 begin */
typedef struct
{
    unsigned int enable;     /* ʹ�ܱ�־��0��ȥʹ�ܣ�1��ʹ�ܣ� ����ñ�־Ϊȥʹ�ܣ����ý�ֱ�Ӻ��� */
    unsigned int type;       /* �������: 1������2��д��3����д */
    unsigned int start_addr; /* �����ʼ��ַ */
    unsigned int end_addr;   /* ��ؽ�����ַ */
}WATCHPOINT_CFG;

typedef struct
{
    WATCHPOINT_CFG  ap_cfg[4];  /* A�����ã����֧��4��watchpoint */
    WATCHPOINT_CFG  cp_cfg[4];  /* A�����ã����֧��4��watchpoint */
}DRV_WATCHPOINT_CFG_STRU;
/* watchpoint = 0xd148 end */

/* 0xD194, for tsensor start*/
#define TSENSOR_ID_MAX 4
struct DRV_TSENSOR_NV_TEMP_UNIT {
    signed int high_temp;
    signed int low_temp;
};

struct DRV_TSENSOR_NV_TEMP_INFO {
    unsigned int temp_unit_nums;                                     /*�����¶���ֵʵ�ʵ�Ԫ��*/
    struct DRV_TSENSOR_NV_TEMP_UNIT temp_threshold_init[5]; /*���֧��5����¶���ֵ*/
};

typedef struct
{
    unsigned int enable_reset_hreshold;                                         /*ʹ�ܸ�λ���ޱ�־,0,ȥʹ�ܣ�1,ʹ��*/
    unsigned int reset_threshold_temp;                                          /*��λ�¶���ֵ*/
    unsigned int timer_value_s;                                                 /*��ʱ����ʱֵ*/
    unsigned int enable_print_temp;                                             /*ʹ��10s��ӡһ���¶�*/
    unsigned int enable_htemp_protect;                                          /*�����±�ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    struct DRV_TSENSOR_NV_TEMP_INFO htemp_threshold[TSENSOR_ID_MAX];  /*�����±���ֵ*/
    unsigned int enable_ltemp_protect;                                          /*�����±�ʹ�ܱ�־, 0, ȥʹ��;  1, ʹ��*/
    struct DRV_TSENSOR_NV_TEMP_INFO ltemp_threshold[TSENSOR_ID_MAX];  /*�����±���ֵ*/
}DRV_TSENSOR_TEMP_PROTECT_CONTROL_NV_STRU;
/* 0xD194, for tsensor end*/

typedef struct
{
    unsigned int DialupEnableCFG;
    unsigned int DialupACShellCFG;
}DRV_DIALUP_HSUART_STRU;

/* TEST support module nv define */
typedef struct
{
    unsigned int lcd         : 1;//1: support; 0: not support
    unsigned int emi         : 1;
    unsigned int pwm         : 1;
    unsigned int i2c         : 1;
    unsigned int leds        : 1;
    unsigned int reserved    : 27;
} DRV_MODULE_TEST_STRU;

typedef struct
{
    unsigned int ulResumeMode;       /*��NV���ݳ��ִ���ʱ�Ĵ���ʽ,1:����ģʽ,2:�û�ģʽ*/
}NV_SELF_CTRL_STRU;

/*0xd158*/
typedef struct
{
    unsigned int pmu_enable_cfg;     /*pmu �򿪹رտ���nv*/
    unsigned int protocol_sel;       /*pmu ssi spmiЭ��ѡ��*/
    unsigned int reserved;
}DRV_PMU_CFG_STRU;

/*0xd183*/
typedef struct
{
	unsigned int sim_volt_flag;
	unsigned int reserved;
}DRV_NV_PMU_TYPE;

/*0xd168*/
typedef struct
{
    unsigned int ap_enable:1;        /*AP coresight enable flag*/
    unsigned int cp_enable:1;        /*CP coresight enable flag*/
    unsigned int ap_store :1;        /*AP coresight store flag*/
    unsigned int cp_store :1;        /*CP coresight store flag*/
    unsigned int reserved :28;
}DRV_CORESIGHT_CFG_STRU;

typedef struct
{
    unsigned char normalwfi_flag;
    unsigned char deepsleep_flag;
    unsigned char buck3off_flag;
    unsigned char peridown_flag;
    unsigned int deepsleep_Tth;
    unsigned int TLbbp_Tth;
}DRV_NV_PM_TYPE;

typedef struct
{
    unsigned int enPortNum;         /* ά��ʹ�õ�����ͨ������ */
}DIAG_CHANNLE_PORT_CFG_STRU;

typedef struct {
unsigned int deflate_enable:1;      /*0 deflate���Թر� 1 deflate���Դ�*/
unsigned int reservd:31;
}DRV_DEFLATE_CFG_STRU;

typedef struct {
    unsigned int iqi_enable:1;      /*0 iqi���Թر� 1 iqi���Դ�*/
    unsigned int serial_enable:1;   /*serial ���� 1�� 0 �ر�*/
    //unsigned int debug_enable:1;    /*debug����ʹ��*/
    unsigned int reservd:30;
}DRV_IQI_CFG_STRU;

typedef struct
{
    unsigned char  cMasterSwitch;  /* Range:[0,1] *//* ����log�ܿ���1:��0:�� */
    unsigned char  cBufUsable;     /* Range:[0,1] *//* ����log�ڴ����1:��0:�� */
    unsigned char  cBufEnable;     /* Range:[0,1] *//* ����log�ڴ�ʹ��1ʹ�� 0:��ʹ�� */
    unsigned char  cswACPUBsp;     /* Range:[0,3] *//* ACPU Bsp����log profile */
    unsigned char  cswACPUDiag;    /* Range:[0,3] *//* ACPU Diag����log profile */
    unsigned char  cswACPUHifi;    /* Range:[0,3] *//* ACPU Hifi����log profile */
    unsigned char  cswLRMBsp;      /* Range:[0,3] *//* 4G Modem Bsp����log profile */
    unsigned char  cswLRMDiag;     /* Range:[0,3] *//* 4G Modem Diag����log profile */
    unsigned char  cswLRMTLPhy;    /* Range:[0,3] *//* 4G Modem LPHY����log profile */
    unsigned char  cswLRMGUPhy;    /* Range:[0,3] *//* 4G Modem GUPHY����log profile */
    unsigned char  cswLRMCPhy;     /* Range:[0,3] *//* 4G Modem CPHY����log profile */
    unsigned char  cswLRMEasyRf;   /* Range:[0,3] *//* 4G Modem easyRf����log profile */
    unsigned char  cswNRMBsp;      /* Range:[0,3] *//* 5G Modem Bsp����log profile */
    unsigned char  cswNRMDiag;     /* Range:[0,3] *//* 5G Modem CCPU����log profile */
    unsigned char  cswNRMHAC;      /* Range:[0,3] *//* 5G Modem L2HAC����log profile */
    unsigned char  cswNRMPhy;      /* Range:[0,3] *//* 5G Modem NRPHY����log profile */
    unsigned char  cswNRMHL1C;     /* Range:[0,3] *//* 5G Modem HL1C����log profile */
    unsigned char  cswNRMPDE;      /* Range:[0,3] *//* 5G Modem PDE����log profile */
    unsigned char  cReserved[6];   /* �����ֶ� */
}DRV_NV_POWER_ON_LOG_SWITCH_STRU;


typedef struct
{
    signed int temperature;
    unsigned short code;
    unsigned short reserved;
} DRV_CONVERT_TABLE_TYPE;
#define XO_TABLE_SIZE 166
typedef struct
{
    DRV_CONVERT_TABLE_TYPE convert_table[XO_TABLE_SIZE];
} DRV_XO_CONVERT_TABLE;
#define PA_TABLE_SIZE 32
typedef struct
{
    DRV_CONVERT_TABLE_TYPE convert_table[PA_TABLE_SIZE];
} DRV_PA_CONVERT_TABLE;


#ifndef LPHY_UT_MODE//lint !e553
typedef struct convert_table
{
    signed int temperature;
    unsigned short code;
    unsigned short reserved;
} convert_table;
#define XO_TBL_SIZE 166
typedef struct xo_convert_table_array
{
    convert_table convert_table[XO_TBL_SIZE];
} xo_convert_table_array;
#define PA_TBL_SIZE 32
typedef struct pa_convert_table_array
{
    convert_table convert_table[PA_TBL_SIZE];
} pa_convert_table_array;
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
