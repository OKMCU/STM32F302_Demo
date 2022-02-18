/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : usbd_composite.h
  * @version        : v2.0_Cube
  * @brief          : Header for usbd_composite.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_COMPOSITE_H__
#define __USBD_COMPOSITE_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include  "usbd_msc.h"
#include  "usbd_cdc.h"
#include "usbd_storage_if.h"    //TOCHECK:
#include "usbd_cdc_if.h"        //TOCHECK:

#define USBD_IAD_DESC_SIZE           0x08
#define USBD_IAD_DESCRIPTOR_TYPE     0x0B

#define USBD_CDC_FIRST_INTERFACE     0          /* CDC FirstInterface */
#define USBD_CDC_INTERFACE_NUM       2          /* CDC Interface NUM */
#define USBD_CDC_CMD_INTERFACE       0
#define USBD_CDC_DATA_INTERFACE      1
#define USBD_MSC_FIRST_INTERFACE     2          /* MSC FirstInterface */
#define USBD_MSC_INTERFACE_NUM       1          /* MSC Interface NUM */
#define USBD_MSC_INTERFACE           2

#define MSC_INDATA_NUM              (MSC_EPIN_ADDR & 0x0F)
#define MSC_OUTDATA_NUM             (MSC_EPOUT_ADDR & 0x0F)
#define CDC_INDATA_NUM              (CDC_IN_EP & 0x0F)
#define CDC_OUTDATA_NUM             (CDC_OUT_EP & 0x0F)
#define CDC_OUTCMD_NUM              (CDC_CMD_EP & 0x0F)

#define USBD_COMPOSITE_DESC_SIZE    (7+USB_MSC_CONFIG_DESC_SIZ+USB_CDC_CONFIG_DESC_SIZ ) //TOCHECK:

extern USBD_ClassTypeDef    USBD_COMPOSITE;
#ifdef __cplusplus
}
#endif

#endif /* __USBD_COMPOSITE_H__ */

