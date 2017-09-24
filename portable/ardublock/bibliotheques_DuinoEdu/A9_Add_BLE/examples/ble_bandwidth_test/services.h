/* 
* Copyright (c) 2013, Nordic Semiconductor ASA
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
* 
* - Redistributions of source code must retain the above copyright notice, this
*   list of conditions and the following disclaimer.
* 
* - Redistributions in binary form must reproduce the above copyright notice, this
*   list of conditions and the following disclaimer in the documentation and/or
*   other materials provided with the distribution.
* 
* - The name of Nordic Semiconductor ASA may not be used to endorse or promote
*   products derived from this software without specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/**
* This file is autogenerated by nRFgo Studio 1.16.1.3119 
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h" 
#include "aci.h"


#define SETUP_ID 0
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 181

/* Service: Gap - Characteristic: Device name - Pipe: SET */
#define PIPE_GAP_DEVICE_NAME_SET          1
#define PIPE_GAP_DEVICE_NAME_SET_MAX_SIZE 7

/* Service: Device Information - Characteristic: Hardware Revision String - Pipe: SET */
#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET          2
#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET_MAX_SIZE 9

/* Service: UART over BTLE - Characteristic: UART RX - Pipe: RX */
#define PIPE_UART_OVER_BTLE_UART_RX_RX          3
#define PIPE_UART_OVER_BTLE_UART_RX_RX_MAX_SIZE 20

/* Service: UART over BTLE - Characteristic: UART TX - Pipe: TX */
#define PIPE_UART_OVER_BTLE_UART_TX_TX          4
#define PIPE_UART_OVER_BTLE_UART_TX_TX_MAX_SIZE 20


#define NUMBER_OF_PIPES 4

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_SET},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
}

#define GAP_PPCP_MAX_CONN_INT 0x12 /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0x6 /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xa /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 21
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x41,0xfe,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x04,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x14,0x03,0x90,0x01,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x0e,0x03,0x00,0x00,0x2a,0x04,0x14,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x04,0x00,0x03,0x2a,0x00,0x01,0x55,0x41,0x52,0x54,0x69,0x63,0x73,0x04,0x04,0x05,\
            0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,0x06,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x04,0x03,0x02,0x00,0x05,0x2a,0x01,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x06,\
            0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,0x08,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x00,0x07,0x2a,0x04,0x01,0x06,0x00,0x12,0x00,0x00,0x00,0x0a,0x00,0x04,0x04,0x02,\
            0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x02,0x02,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x00,0x09,0x28,0x00,0x01,0x0a,0x18,0x04,0x04,0x05,0x05,0x00,0x0a,0x28,0x03,0x01,\
            0x02,0x0b,0x00,0x27,0x2a,0x04,0x04,0x09,0x01,0x00,0x0b,0x2a,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x27,0x01,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x10,0x10,0x00,\
            0x0c,0x28,0x00,0x01,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,0xe0,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x93,0xf3,0xa3,0xb5,0x01,0x00,0x40,0x6e,0x04,0x04,0x13,0x13,0x00,0x0d,0x28,0x03,\
            0x01,0x04,0x0e,0x00,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,0xe0,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x93,0xf3,0xa3,0xb5,0x02,0x00,0x40,0x6e,0x44,0x10,0x14,0x00,0x00,0x0e,0x00,0x02,\
            0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x13,0x13,0x00,0x0f,0x28,\
            0x03,0x01,0x10,0x10,0x00,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0xe0,0x93,0xf3,0xa3,0xb5,0x03,0x00,0x40,0x6e,0x14,0x00,0x14,0x00,0x00,0x10,0x00,\
            0x03,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x19,0x06,0x21,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x14,0x03,0x02,0x00,0x11,\
            0x29,0x02,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0x2a,0x00,0x01,0x00,0x80,0x04,0x00,0x03,0x00,0x00,0x2a,0x27,0x01,0x00,0x80,0x04,\
            0x00,0x0b,0x00,0x00,0x00,0x02,0x02,0x00,0x08,0x04,0x00,0x0e,\
        },\
    },\
    {0x00,\
        {\
            0x0f,0x06,0x40,0x1c,0x00,0x00,0x00,0x03,0x02,0x00,0x02,0x04,0x00,0x10,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x13,0x06,0x50,0x00,0x9e,0xca,0xdc,0x24,0x0e,0xe5,0xa9,0xe0,0x93,0xf3,0xa3,0xb5,0x00,0x00,0x40,0x6e,\
        },\
    },\
    {0x00,\
        {\
            0x0f,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x54,0xb2,\
        },\
    },\
}

#endif