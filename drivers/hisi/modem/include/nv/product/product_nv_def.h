/******************************************************************************

    Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       :   product_nv_def.h
  Description     :   ����NV �ṹ�嶨��
  History         :
******************************************************************************/

#ifndef __PRODUCT_NV_DEF_H__
#define __PRODUCT_NV_DEF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define MAX_SINGLE_GUC_BAND_CHECK_NUM       28
#define MAX_SINGLE_TL_BAND_CHECK_NUM        12
#define MAX_NV_GUC_CHECK_ITEM_NUM           32
#define MAX_NV_TL_CHECK_ITEM_NUM            64

/*��ο��ṹ������*/
typedef struct
{
    int reserved;  /*note */
}PRODUCT_MODULE_STRU;

typedef struct
{
    unsigned int uwGucCrcResult;                     		/* GUc����NV��У���� */
    unsigned int uwTlCrcResult;                      		/* TL����NV��У���� */
    unsigned int uwGucM2CrcResult;                   		/* GUC����NV��У���� */
}NV_CRC_CHECK_RESULT_STRU;

typedef struct
{
    unsigned short uhwTransmitMode;                       		/* ָʾ����ķ���ģʽ */
    unsigned short uhwBand;                              		/* ָʾ�����BAND�� */
    unsigned short uhwEnable;                              	/* ָʾ�Ƿ���Ч */
    unsigned short uhwValidCount;                              	/* ָʾ��Ч���ݵĸ��� */
    unsigned short auhwNeedCheckID[MAX_SINGLE_GUC_BAND_CHECK_NUM]; /* ������Ҫ����NV_IDֵ */
}SINGLE_GUC_BAND_NV_ID_STRU;

typedef struct
{
    unsigned short uhwTransmitMode;                       		/* ָʾ����ķ���ģʽ */
    unsigned short uhwBand;                              		/* ָʾ�����BAND�� */
    unsigned short uhwEnable;                              	/* ָʾ�Ƿ���Ч */
    unsigned short uhwValidCount;                              	/* ָʾ��Ч���ݵĸ��� */
    unsigned short auhwNeedCheckID[MAX_SINGLE_TL_BAND_CHECK_NUM]; 	/* ������Ҫ����NV_IDֵ */
}SINGLE_TL_BAND_NV_ID_STRU;

typedef struct
{
    SINGLE_GUC_BAND_NV_ID_STRU astNVIDCheckItem[MAX_NV_GUC_CHECK_ITEM_NUM];  	/* ������Ҫ����NV_IDֵ */
}NV_GUC_CHECK_ITEM_STRU;

typedef struct
{
    SINGLE_TL_BAND_NV_ID_STRU astNVIDCheckItem[MAX_NV_TL_CHECK_ITEM_NUM];   	/* ������Ҫ����NV_IDֵ */
}NV_TL_CHECK_ITEM_STRU;

typedef struct
{
    unsigned short uhwWorkStationNum;
    unsigned short auhwNV50001InsertPoint[5];
    unsigned short auhwNV50002InsertPoint[5];
    unsigned short auhwNV50003InsertPoint[5];
    unsigned int rsv;
}NV_WORKSTATION_INFO_STRU;

typedef struct
{
    NV_CRC_CHECK_RESULT_STRU astCRCResultTemp[6];
}NV_CRCRESULT_TEMP_STRU;

/*****************************************************************************
 �ṹ��    : CHG_BATTERY_LOW_TEMP_PROTECT_NV
 �ṹ˵��  : CHG_BATTERY_LOW_TEMP_PROTECT_NV�ṹ ID=52005
*****************************************************************************/
typedef struct
{
    unsigned int  ulIsEnable;
    signed int  lCloseAdcThreshold;
    unsigned int  ulTempLowCount;
}CHG_BATTERY_LOW_TEMP_PROTECT_NV;


typedef struct
{
    unsigned int                          ulIsEnable;
    signed int                           lCloseADCHold;
    unsigned int                          ulTempOverMax;
}OM_BATTREY_TEMP_CFG_STRU;

/*****************************************************************************
 �ṹ��    : nvi_cust_pid_type
 �ṹ˵��  : nvi_cust_pid_type�ṹ
*****************************************************************************/
typedef struct
{
    unsigned int  nv_status;
    unsigned short  cust_first_pid;
    unsigned short  cust_rewind_pid;
}nvi_cust_pid_type;

/*****************************************************************************
 �ṹ��    : NV_WEBNAS_SD_WORKMODE_STRU
 �ṹ˵��  : NV_WEBNAS_SD_WORKMODE�ṹ
*****************************************************************************/
typedef struct
{
    unsigned int ulSDWorkMode;
}NV_WEBNAS_SD_WORKMODE_STRU;

/*****************************************************************************
 �ṹ��    : NV_OLED_TEMP_ADC_STRU
 �ṹ˵��  : NV_OLED_TEMP_ADC�ṹ
*****************************************************************************/
typedef struct
{
    signed short       sTemp;
    signed short       sADC;
}NV_OLED_TEMP_ADC_STRU;

/*****************************************************************************
 �ṹ��    : NV_OLED_TEMP_ADC_STRU_ARRAY
 �ṹ˵��  : NV_OLED_TEMP_ADC_STRU_ARRAY�ṹ  ID=49
*****************************************************************************/
typedef struct
{
    NV_OLED_TEMP_ADC_STRU          stNV_OLED_TEMP_ADC[28];
}NV_OLED_TEMP_ADC_STRU_ARRAY;

/*****************************************************************************
 �ṹ��    : TEMP_ADC_STRU
 �ṹ˵��  : TEMP_ADC�ṹ
*****************************************************************************/
typedef struct
{
    signed short    sTemp;
    unsigned short    usADC;
}TEMP_ADC_STRU;

/*****************************************************************************
 �ṹ��    : TEMP_ADC_STRU_ARRAY
 �ṹ˵��  : TEMP_ADC_STRU_ARRAY�ṹ
*****************************************************************************/
typedef struct
{
    TEMP_ADC_STRU    stTempAdc[28];
}TEMP_ADC_STRU_ARRAY;

/*****************************************************************************
 �ṹ��    : USB_SN_NV_INFO_STRU
 �ṹ˵��  : USB_SN_NV_INFO�ṹ
*****************************************************************************/
typedef struct
{
    unsigned int    usbSnNvStatus;
    unsigned int    usbSnNvSucFlag;
    unsigned int    usbSnReserved1;
    /*unsigned int    usbSnReserved2;*/
}USB_SN_NV_INFO_STRU;

/*****************************************************************************
 �ṹ��    : LIVE_TIME_STRU
 �ṹ˵��  : LIVE_TIME�ṹ
*****************************************************************************/
typedef struct
{
    unsigned int    ulLiveTime;
}LIVE_TIME_STRU;

/*****************************************************************************
 �ṹ��    : LIVE_TIME_CONTROL_STRU
 �ṹ˵��  : LIVE_TIME_CONTROL�ṹ
*****************************************************************************/
typedef struct
{
    unsigned int    ulEnable;
    unsigned int    ulCycle;
} LIVE_TIME_CONTROL_STRU;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif


