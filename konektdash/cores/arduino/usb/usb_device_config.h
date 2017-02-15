/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : usb_device_config.h
**     Project     : cdc_1_2
**     Processor   : MK22FN512VLH12
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-12-12, 16:48, # CodeGen: 1
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc.
**     All Rights Reserved.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file usb_device_config.h
** @version 01.00
*/
/*!
**  @addtogroup usb_device_config_module usb_device_config module documentation
**  @{
*/
#ifndef __usb_device_config_h__
#define __usb_device_config_h__

/* Enable KHCI controller driver (full speed) */
#define USBCFG_DEV_KHCI                (1)
/* Enable EHCI controller driver (high speed) */
#define USBCFG_DEV_EHCI                (0)

#define USBCFG_DEV_KHCI_NUM            (1)
#define USBCFG_DEV_EHCI_NUM            (0)

/* Device instance number */
#define USBCFG_DEV_NUM                 (USBCFG_DEV_KHCI_NUM + USBCFG_DEV_EHCI_NUM)

/* Enable/disable HID device driver */
#define USBCFG_DEV_HID                 (0)

/* Enable/disable PHDC device driver */
#define USBCFG_DEV_PHDC                (0)

/* Enable/disable AUDIO device driver */
#define USBCFG_DEV_AUDIO               (0)

/* Enable/disable AUDIO 2.0 device driver */
#if USBCFG_DEV_AUDIO
#define USBCFG_AUDIO_CLASS_2_0         (0)
#endif

/* Enable/disable CDC device driver */
#define USBCFG_DEV_CDC                 (1)

/* Enable/disable RNDIS device driver */
#if USBCFG_DEV_CDC
#define USBCFG_DEV_RNDIS_SUPPORT       (0)
#endif

/* Enable/disable MSC device driver */
#define USBCFG_DEV_MSC                 (0)

/* Enable/disable MSC device driver */
#define USBCFG_DEV_COMPOSITE           (0)

/* USB device power mode */
#define USBCFG_DEV_SELF_POWER          (0)

/* USB device remote wakeup */
#define USBCFG_DEV_REMOTE_WAKEUP       (0)

/* How many endpoints are supported */
#define USBCFG_DEV_MAX_ENDPOINTS       (6)

/* How many XDs are supported at most */
#define USBCFG_DEV_MAX_XDS             (12)

/* How many instance should be supported for one class type device */
#define USBCFG_DEV_MAX_CLASS_OBJECT    (1)

#if USBCFG_DEV_KHCI
  /* 4 byte buffer align */
  #define USBCFG_KHCI_4BYTE_ALIGN_FIX  (1)

  #if USBCFG_KHCI_4BYTE_ALIGN_FIX
    /* The aligned buffer size for IN transactions */
    #define USBCFG_DEV_KHCI_SWAP_BUF_MAX (64)
  #endif

  #define USBCFG_DEV_KHCI_ADVANCED_ERROR_HANDLING (0)
#endif

/* USB keep alive */
#define USBCFG_DEV_KEEP_ALIVE_MODE     (0)

/* Buffer property cacheable */
#define USBCFG_BUFF_PROPERTY_CACHEABLE (0)

/* Advance suspend resume */
#define USBCFG_DEV_ADVANCED_SUSPEND_RESUME (0)

/* Advance cancel */
#define USBCFG_DEV_ADVANCED_CANCEL_ENABLE (1)

/* Detach */
#define USBCFG_DEV_DETACH_ENABLE       (0)

#endif /* __usb_device_config_h__ */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/