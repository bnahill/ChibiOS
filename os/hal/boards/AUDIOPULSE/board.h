/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*
 * Setup for STMicroelectronics STM32F746G-Discovery board.
 */

/*
 * Board identifier.
 */
#define BOARD_AUDIOPULSE
#define BOARD_NAME                  "AUDIOPULSE DPOAE"

/*
 * Ethernet PHY type.
 */
//// NO PHY
//#define BOARD_PHY_ID                MII_LAN8742A_ID
//#define BOARD_PHY_RMII

/*
 * ULPI USB PHY.
 */
//// NO EXTERNAL USB PHY
//#define BOARD_OTG2_USES_ULPI

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

//#define STM32_HSE_BYPASS

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F722xx

/*
 * IO pins assignments.
 */
#define GPIOA_CODEC_SDIN            0U
#define GPIOA_PIN1                  1U
#define GPIOA_CODEC_BCLK            2U
#define GPIOA_ANALOG_EN             3U
#define GPIOA_PIN4                  4U
#define GPIOA_PIN5                  5U
#define GPIOA_PIN6                  6U
#define GPIOA_PIN7                  7U
#define GPIOA_PIN8                  8U
#define GPIOA_OTG_VBUS              9U
#define GPIOA_OTG_FS_ID             10U
#define GPIOA_OTG_FS_DM             11U
#define GPIOA_OTG_FS_DP             12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_CLK_EN                15U

#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_SWO                   3U
#define GPIOB_CODEC_PDN             4U
#define GPIOB_PIN5                  5U
#define GPIOB_PIN6                  6U
#define GPIOB_HP_NSD                7U
#define GPIOB_I2C_SCL               8U
#define GPIOB_I2C_SDA               9U
#define GPIOB_UART_TX               10U
#define GPIOB_UART_RX               11U
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_CODEC_LRCK            0U
#define GPIOC_CODEC_SDO             1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_LED1                  6U
#define GPIOC_LED2                  7U
#define GPIOC_LED3                  8U
#define GPIOC_CODEC_MCLK            9U
#define GPIOC_SPI_SCK               10U
#define GPIOC_SPI_MISO              11U
#define GPIOC_SPI_MOSI              12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_SPI_CS_CODEC          2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOH_OSC_IN                0U
#define GPIOH_OSC_OUT               1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U
/*
 * IO lines assignments.
 */

#define LINE_CODEC_SDIN             PAL_LINE(GPIOA, 0U)
//#define LINE_PIN1                   PAL_LINE(GPIOA, 1U)
#define LINE_CODEC_BCLK             PAL_LINE(GPIOA, 2U)
#define LINE_ANALOG_EN              PAL_LINE(GPIOA, 3U)
//#define LINE_PIN4                   PAL_LINE(GPIOA, 4U)
//#define LINE_PIN5                   PAL_LINE(GPIOA, 5U)
//#define LINE_PIN6                   PAL_LINE(GPIOA, 6U)
//#define LINE_PIN7                   PAL_LINE(GPIOA, 7U)
//#define LINE_PIN8                   PAL_LINE(GPIOA, 8U)
#define LINE_OTG_VBUS               PAL_LINE(GPIOA, 9U)
#define LINE_OTG_FS_ID              PAL_LINE(GPIOA, 10U)
#define LINE_OTG_FS_DM              PAL_LINE(GPIOA, 11U)
#define LINE_OTG_FS_DP              PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_CLK_EN                 PAL_LINE(GPIOA, 15U)

//#define LINE_PIN0                   PAL_LINE(GPIOB, 0U)
//#define LINE_PIN1                   PAL_LINE(GPIOB, 1U)
//#define LINE_PIN2                   PAL_LINE(GPIOB, 2U)
#define LINE_SWO                    PAL_LINE(GPIOB, 3U)
#define LINE_CODEC_PDN              PAL_LINE(GPIOB, 4U)
//#define LINE_PIN5                   PAL_LINE(GPIOB, 5U)
//#define LINE_PIN6                   PAL_LINE(GPIOB, 6U)
#define LINE_HP_NSD                 PAL_LINE(GPIOB, 7U)
#define LINE_I2C_SCL                PAL_LINE(GPIOB, 8U)
#define LINE_I2C_SDA                PAL_LINE(GPIOB, 9U)
#define LINE_UART_TX                PAL_LINE(GPIOB, 10U)
#define LINE_UART_RX                PAL_LINE(GPIOB, 11U)
//#define LINE_PIN12                  PAL_LINE(GPIOB, 12U)
//#define LINE_PIN13                  PAL_LINE(GPIOB, 13U)
//#define LINE_PIN14                  PAL_LINE(GPIOB, 14U)
//#define LINE_PIN15                  PAL_LINE(GPIOB, 15U)

#define LINE_CODEC_LRCK             PAL_LINE(GPIOC, 0U)
#define LINE_CODEC_SDO              PAL_LINE(GPIOC, 1U)
#define LINE_ULPI_DIR               PAL_LINE(GPIOC, 2U)
#define LINE_FMC_SDCKE0             PAL_LINE(GPIOC, 3U)
#define LINE_RMII_RXD0              PAL_LINE(GPIOC, 4U)
#define LINE_RMII_RXD1              PAL_LINE(GPIOC, 5U)
#define LINE_LED1                   PAL_LINE(GPIOC, 6U)
#define LINE_LED2                   PAL_LINE(GPIOC, 7U)
#define LINE_LED3                   PAL_LINE(GPIOC, 8U)
#define LINE_SD_D1                  PAL_LINE(GPIOC, 9U)
#define LINE_SD_D2                  PAL_LINE(GPIOC, 10U)
#define LINE_SD_D3                  PAL_LINE(GPIOC, 11U)
#define LINE_SD_CLK                 PAL_LINE(GPIOC, 12U)
#define LINE_SD_DETECT              PAL_LINE(GPIOC, 13U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)

#define LINE_FMC_D2                 PAL_LINE(GPIOD, 0U)
#define LINE_FMC_D3                 PAL_LINE(GPIOD, 1U)
#define LINE_SPI1_CS_CODEC          PAL_LINE(GPIOD, 2U)
#define LINE_DCMI_D5                PAL_LINE(GPIOD, 3U)
#define LINE_OTG_FS_OVER_CURRENT    PAL_LINE(GPIOD, 4U)
#define LINE_OTG_FS_PWR_SW_ON       PAL_LINE(GPIOD, 5U)
#define LINE_AUDIO_INT              PAL_LINE(GPIOD, 6U)
#define LINE_SPDIF_RX0              PAL_LINE(GPIOD, 7U)
#define LINE_FMC_D13                PAL_LINE(GPIOD, 8U)
#define LINE_FMC_D14                PAL_LINE(GPIOD, 9U)
#define LINE_FMC_D15                PAL_LINE(GPIOD, 10U)
#define LINE_QSPI_D0                PAL_LINE(GPIOD, 11U)
#define LINE_QSPI_D1                PAL_LINE(GPIOD, 12U)
#define LINE_QSPI_D3                PAL_LINE(GPIOD, 13U)
#define LINE_FMC_D0                 PAL_LINE(GPIOD, 14U)
#define LINE_FMC_D1                 PAL_LINE(GPIOD, 15U)

#define LINE_FMC_NBL0               PAL_LINE(GPIOE, 0U)
#define LINE_FMC_NBL1               PAL_LINE(GPIOE, 1U)
#define LINE_QSPI_D2                PAL_LINE(GPIOE, 2U)
#define LINE_OTG_HS_OVER_CURRENT    PAL_LINE(GPIOE, 3U)
#define LINE_LCD_B0                 PAL_LINE(GPIOE, 4U)
#define LINE_DCMI_D6                PAL_LINE(GPIOE, 5U)
#define LINE_DCMI_D7                PAL_LINE(GPIOE, 6U)
#define LINE_FMC_D4                 PAL_LINE(GPIOE, 7U)
#define LINE_FMC_D5                 PAL_LINE(GPIOE, 8U)
#define LINE_FMC_D6                 PAL_LINE(GPIOE, 9U)
#define LINE_FMC_D7                 PAL_LINE(GPIOE, 10U)
#define LINE_FMC_D8                 PAL_LINE(GPIOE, 11U)
#define LINE_FMC_D9                 PAL_LINE(GPIOE, 12U)
#define LINE_FMC_D10                PAL_LINE(GPIOE, 13U)
#define LINE_FMC_11                 PAL_LINE(GPIOE, 14U)
#define LINE_FMC_D12                PAL_LINE(GPIOE, 15U)

#define LINE_FMC_A0                 PAL_LINE(GPIOF, 0U)
#define LINE_FMC_A1                 PAL_LINE(GPIOF, 1U)
#define LINE_FMC_A2                 PAL_LINE(GPIOF, 2U)
#define LINE_FMC_A3                 PAL_LINE(GPIOF, 3U)
#define LINE_FMC_A4                 PAL_LINE(GPIOF, 4U)
#define LINE_FMC_A5                 PAL_LINE(GPIOF, 5U)
#define LINE_ARD_A5                 PAL_LINE(GPIOF, 6U)
#define LINE_ARD_A4                 PAL_LINE(GPIOF, 7U)
#define LINE_ARD_A3                 PAL_LINE(GPIOF, 8U)
#define LINE_ARD_A2                 PAL_LINE(GPIOF, 9U)
#define LINE_ARD_A1                 PAL_LINE(GPIOF, 10U)
#define LINE_FMC_SDNRAS             PAL_LINE(GPIOF, 11U)
#define LINE_FMC_A6                 PAL_LINE(GPIOF, 12U)
#define LINE_FMC_A7                 PAL_LINE(GPIOF, 13U)
#define LINE_FMC_A8                 PAL_LINE(GPIOF, 14U)
#define LINE_FMC_A9                 PAL_LINE(GPIOF, 15U)

#define LINE_FMC_A10                PAL_LINE(GPIOG, 0U)
#define LINE_FMC_A11                PAL_LINE(GPIOG, 1U)
#define LINE_RMII_RXER              PAL_LINE(GPIOG, 2U)
#define LINE_EXT_RST                PAL_LINE(GPIOG, 3U)
#define LINE_FMC_BA0                PAL_LINE(GPIOG, 4U)
#define LINE_FMC_BA1                PAL_LINE(GPIOG, 5U)
#define LINE_ARD_D2                 PAL_LINE(GPIOG, 6U)
#define LINE_ARD_D4                 PAL_LINE(GPIOG, 7U)
#define LINE_FMC_SDCLK              PAL_LINE(GPIOG, 8U)
#define LINE_DCMI_VSYNC             PAL_LINE(GPIOG, 9U)
#define LINE_SAI2_SDB               PAL_LINE(GPIOG, 10U)
#define LINE_RMII_TX_EN             PAL_LINE(GPIOG, 11U)
#define LINE_LCD_B4                 PAL_LINE(GPIOG, 12U)
#define LINE_RMII_TXD0              PAL_LINE(GPIOG, 13U)
#define LINE_RMII_TXD1              PAL_LINE(GPIOG, 14U)
#define LINE_FMC_SDNCAS             PAL_LINE(GPIOG, 15U)

#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)
#define LINE_TP1                    PAL_LINE(GPIOH, 2U)
#define LINE_FMC_SDNE0              PAL_LINE(GPIOH, 3U)
#define LINE_ULPI_NXT               PAL_LINE(GPIOH, 4U)
#define LINE_FMC_SDNWE              PAL_LINE(GPIOH, 5U)
#define LINE_ARD_D6                 PAL_LINE(GPIOH, 6U)
#define LINE_LCD_SCL                PAL_LINE(GPIOH, 7U)
#define LINE_LCD_SDA                PAL_LINE(GPIOH, 8U)
#define LINE_DCMI_D0                PAL_LINE(GPIOH, 9U)
#define LINE_DCMI_D1                PAL_LINE(GPIOH, 10U)
#define LINE_DCMI_D2                PAL_LINE(GPIOH, 11U)
#define LINE_DCMI_D3                PAL_LINE(GPIOH, 12U)
#define LINE_DCMI_PWR_EN            PAL_LINE(GPIOH, 13U)
#define LINE_DCMI_D4                PAL_LINE(GPIOH, 14U)
#define LINE_TP_PH15                PAL_LINE(GPIOH, 15U)

#define LINE_ARD_D10                PAL_LINE(GPIOI, 0U)
#define LINE_ARD_D13                PAL_LINE(GPIOI, 1U)
#define LINE_ARD_D8                 PAL_LINE(GPIOI, 2U)
#define LINE_ARD_D7                 PAL_LINE(GPIOI, 3U)
#define LINE_SAI2_MCLKA             PAL_LINE(GPIOI, 4U)
#define LINE_SAI2_SCKA              PAL_LINE(GPIOI, 5U)
#define LINE_SAI2_SDA               PAL_LINE(GPIOI, 6U)
#define LINE_SAI2_FSA               PAL_LINE(GPIOI, 7U)
#define LINE_TP2                    PAL_LINE(GPIOI, 8U)
#define LINE_LCD_VSYNC              PAL_LINE(GPIOI, 9U)
#define LINE_LCD_HSYNC              PAL_LINE(GPIOI, 10U)
#define LINE_BUTTON_USER            PAL_LINE(GPIOI, 11U)
#define LINE_LCD_DISP               PAL_LINE(GPIOI, 12U)
#define LINE_LCD_INT                PAL_LINE(GPIOI, 13U)
#define LINE_LCD_CLK                PAL_LINE(GPIOI, 14U)
#define LINE_LCD_R0                 PAL_LINE(GPIOI, 15U)

#define LINE_LCD_R1                 PAL_LINE(GPIOJ, 0U)
#define LINE_LCD_R2                 PAL_LINE(GPIOJ, 1U)
#define LINE_LCD_R3                 PAL_LINE(GPIOJ, 2U)
#define LINE_LCD_R4                 PAL_LINE(GPIOJ, 3U)
#define LINE_LCD_R5                 PAL_LINE(GPIOJ, 4U)
#define LINE_LCD_R6                 PAL_LINE(GPIOJ, 5U)
#define LINE_LCD_R7                 PAL_LINE(GPIOJ, 6U)
#define LINE_LCD_G0                 PAL_LINE(GPIOJ, 7U)
#define LINE_LCD_G1                 PAL_LINE(GPIOJ, 8U)
#define LINE_LCD_G2                 PAL_LINE(GPIOJ, 9U)
#define LINE_LCD_G3                 PAL_LINE(GPIOJ, 10U)
#define LINE_LCD_G4                 PAL_LINE(GPIOJ, 11U)
#define LINE_OTG_FS_VBUS            PAL_LINE(GPIOJ, 12U)
#define LINE_LCD_B1                 PAL_LINE(GPIOJ, 13U)
#define LINE_LCD_B2                 PAL_LINE(GPIOJ, 14U)
#define LINE_LCD_B3                 PAL_LINE(GPIOJ, 15U)

#define LINE_LCD_G5                 PAL_LINE(GPIOK, 0U)
#define LINE_LCD_G6                 PAL_LINE(GPIOK, 1U)
#define LINE_LCD_G7                 PAL_LINE(GPIOK, 2U)
#define LINE_LCD_BL_CTRL            PAL_LINE(GPIOK, 3U)
#define LINE_LCD_B5                 PAL_LINE(GPIOK, 4U)
#define LINE_LCD_B6                 PAL_LINE(GPIOK, 5U)
#define LINE_LCD_B7                 PAL_LINE(GPIOK, 6U)
#define LINE_LCD_DE                 PAL_LINE(GPIOK, 7U)

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
  #define GPIOA_CODEC_SDIN            0U  alt 10
  #define GPIOA_PIN1                  1U  
  #define GPIOA_CODEC_BCLK            2U  alt 8
  #define GPIOA_ANALOG_EN             3U  out low
  #define GPIOA_PIN4                  4U  
  #define GPIOA_PIN5                  5U
  #define GPIOA_PIN6                  6U
  #define GPIOA_PIN7                  7U
  #define GPIOA_PIN8                  8U
  #define GPIOA_OTG_VBUS              9U  input float?
  #define GPIOA_OTG_FS_ID             10U alt 10
  #define GPIOA_OTG_FS_DM             11U alt 10
  #define GPIOA_OTG_FS_DP             12U alt 10
  #define GPIOA_SWDIO                 13U alt 0
  #define GPIOA_SWCLK                 14U alt 0
  #define GPIOA_CLK_EN                15U out low

 */
#define VAL_GPIOA_MODER             (PIN_MODE_ALTERNATE(GPIOA_CODEC_SDIN) |         \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |\
                                     PIN_MODE_ALTERNATE(GPIOA_CODEC_BCLK) |  \
                                     PIN_MODE_OUTPUT(GPIOA_ANALOG_EN) |    \
                                     PIN_MODE_INPUT(GPIOA_PIN4) |     \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |    \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |     \
                                     PIN_MODE_INPUT(GPIOA_PIN7) |\
                                     PIN_MODE_INPUT(GPIOA_PIN8) |        \
                                     PIN_MODE_INPUT(GPIOA_OTG_VBUS) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_ID) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_CLK_EN))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_CODEC_SDIN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_CODEC_BCLK) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ANALOG_EN) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN7) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_VBUS) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_ID) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DP) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CLK_EN))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_CODEC_SDIN) |        \
                                     PIN_OSPEED_HIGH(GPIOA_PIN1) |  \
                                     PIN_OSPEED_HIGH(GPIOA_CODEC_BCLK) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_ANALOG_EN) |       \
                                     PIN_OSPEED_HIGH(GPIOA_PIN4) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PIN5) |       \
                                     PIN_OSPEED_HIGH(GPIOA_PIN6) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PIN7) |\
                                     PIN_OSPEED_HIGH(GPIOA_PIN8) |        \
                                     PIN_OSPEED_HIGH(GPIOA_OTG_VBUS) |        \
                                     PIN_OSPEED_HIGH(GPIOA_OTG_FS_ID) |     \
                                     PIN_OSPEED_HIGH(GPIOA_OTG_FS_DM) |     \
                                     PIN_OSPEED_HIGH(GPIOA_OTG_FS_DP) |     \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_VERYLOW(GPIOA_CLK_EN))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_CODEC_SDIN) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN1) |\
                                     PIN_PUPDR_FLOATING(GPIOA_CODEC_BCLK) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_ANALOG_EN) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN4) |   \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN5) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN6) |   \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN7) |\
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_VBUS) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_ID) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_CLK_EN))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_CODEC_SDIN) |       \
                                     PIN_ODR_HIGH(GPIOA_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOA_CODEC_BCLK) |       \
                                     PIN_ODR_LOW(GPIOA_ANALOG_EN) |         \
                                     PIN_ODR_HIGH(GPIOA_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOA_OTG_VBUS) |         \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_ID) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DM) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DP) |        \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_LOW(GPIOA_CLK_EN))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_CODEC_SDIN, 10U) |   \
                                     PIN_AFIO_AF(GPIOA_PIN1, 11U) |         \
                                     PIN_AFIO_AF(GPIOA_CODEC_BCLK, 8U) |    \
                                     PIN_AFIO_AF(GPIOA_ANALOG_EN, 0U) |     \
                                     PIN_AFIO_AF(GPIOA_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN7, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_OTG_VBUS, 0U) |      \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_ID, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DM, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DP, 10U) |    \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_CLK_EN, 0U))

/*
 * GPIOB setup:
 *
#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_SWO                   3U   alt 0
#define GPIOB_CODEC_PDN             4U   out low
#define GPIOB_PIN5                  5U
#define GPIOB_PIN6                  6U
#define GPIOB_HP_NSD                7U   out low
#define GPIOB_I2C_SCL               8U   alt 4
#define GPIOB_I2C_SDA               9U   alt 4
#define GPIOB_UART_TX               10U  alt 7
#define GPIOB_UART_RX               11U  alt 7
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_PIN0) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN1) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |       \
                                     PIN_MODE_ALTERNATE(GPIOB_SWO) |        \
                                     PIN_MODE_OUTPUT(GPIOB_CODEC_PDN) |         \
                                     PIN_MODE_INPUT(GPIOB_PIN5) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN6) |       \
                                     PIN_MODE_OUTPUT(GPIOB_HP_NSD) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SCL) |        \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SDA) |        \
                                     PIN_MODE_ALTERNATE(GPIOB_UART_TX) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_UART_RX) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN12) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN13) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN14) |        \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CODEC_PDN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_HP_NSD) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SCL) |    \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SDA) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_PIN0) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN1) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN2) |        \
                                     PIN_OSPEED_HIGH(GPIOB_SWO) |         \
                                     PIN_OSPEED_HIGH(GPIOB_CODEC_PDN) |   \
                                     PIN_OSPEED_HIGH(GPIOB_PIN5) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN6) |        \
                                     PIN_OSPEED_HIGH(GPIOB_HP_NSD) |      \
                                     PIN_OSPEED_HIGH(GPIOB_I2C_SCL) |     \
                                     PIN_OSPEED_HIGH(GPIOB_I2C_SDA) |     \
                                     PIN_OSPEED_HIGH(GPIOB_UART_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOB_UART_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOB_PIN12) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN13) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN14) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOB_PIN0) |     \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN1) |     \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN2) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_SWO) |      \
                                     PIN_PUPDR_PULLUP(GPIOB_CODEC_PDN) |  \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN5) |     \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN6) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_HP_NSD) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SCL) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SDA) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_UART_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_UART_RX) |  \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN12) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN13) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN14) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN1) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |           \
                                     PIN_ODR_HIGH(GPIOB_SWO) |            \
                                     PIN_ODR_LOW(GPIOB_CODEC_PDN) |       \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |           \
                                     PIN_ODR_LOW(GPIOB_HP_NSD) |          \
                                     PIN_ODR_HIGH(GPIOB_I2C_SCL) |        \
                                     PIN_ODR_HIGH(GPIOB_I2C_SDA) |        \
                                     PIN_ODR_HIGH(GPIOB_UART_TX) |        \
                                     PIN_ODR_HIGH(GPIOB_UART_RX) |        \
                                     PIN_ODR_HIGH(GPIOB_PIN12) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN13) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_SWO, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_CODEC_PDN, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_PIN5, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_PIN6, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_HP_NSD, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_I2C_SCL, 4U) |    \
                                     PIN_AFIO_AF(GPIOB_I2C_SDA, 4U) |    \
                                     PIN_AFIO_AF(GPIOB_UART_TX, 7U) |    \
                                     PIN_AFIO_AF(GPIOB_UART_RX, 7U) |    \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0U))

/*
 * GPIOC setup:
 *
#define GPIOC_CODEC_LRCK            0U
#define GPIOC_CODEC_SDO             1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_LED1                  6U
#define GPIOC_LED2                  7U
#define GPIOC_LED3                  8U
#define GPIOC_CODEC_MCLK            9U
#define GPIOC_SPI_SCK               10U
#define GPIOC_SPI_MISO              11U
#define GPIOC_SPI_MOSI              12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U
 * PC0  - CODEC_LRCK                  (alternate 10).
 * PC1  - CODEC_SDO                  (alternate 11).
 * PC2  - ULPI_DIR                  (alternate 10).
 * PC3  - FMC_SDCKE0                (alternate 12).
 * PC4  - RMII_RXD0                 (alternate 11).
 * PC5  - RMII_RXD1                 (alternate 11).
 * PC6  - ARD_D1                    (input pullup).
 * PC7  - ARD_D0                    (input floating).
 * PC8  - SD_D0                     (alternate 12).
 * PC9  - SD_D1                     (alternate 12).
 * PC10 - SD_D2                     (alternate 12).
 * PC11 - SD_D3                     (alternate 12).
 * PC12 - SD_CLK                    (alternate 12).
 * PC13 - SD_DETECT                 (input pullup).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ALTERNATE(GPIOC_CODEC_LRCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOC_CODEC_SDO) |   \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |   \
                                     PIN_MODE_INPUT(GPIOC_PIN3) | \
                                     PIN_MODE_INPUT(GPIOC_PIN4) |  \
                                     PIN_MODE_INPUT(GPIOC_PIN5) |  \
                                     PIN_MODE_OUTPUT(GPIOC_LED1) |         \
                                     PIN_MODE_OUTPUT(GPIOC_LED2) |         \
                                     PIN_MODE_OUTPUT(GPIOC_LED3) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_CODEC_MCLK) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_SCK) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_MISO) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_MOSI) |     \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |      \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |       \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_CODEC_LRCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CODEC_SDO) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED3) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CODEC_MCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_SCK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_MISO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_MOSI) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_CODEC_LRCK) |      \
                                     PIN_OSPEED_HIGH(GPIOC_CODEC_SDO) |      \
                                     PIN_OSPEED_HIGH(GPIOC_PIN2) |      \
                                     PIN_OSPEED_HIGH(GPIOC_PIN3) |    \
                                     PIN_OSPEED_HIGH(GPIOC_PIN4) |     \
                                     PIN_OSPEED_HIGH(GPIOC_PIN5) |     \
                                     PIN_OSPEED_HIGH(GPIOC_LED1) |        \
                                     PIN_OSPEED_HIGH(GPIOC_LED2) |        \
                                     PIN_OSPEED_HIGH(GPIOC_LED3) |         \
                                     PIN_OSPEED_HIGH(GPIOC_CODEC_MCLK) |         \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_SCK) |         \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_MISO) |         \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_MOSI) |        \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |     \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN14) |   \
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_CODEC_LRCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_CODEC_SDO) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN2) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN3) | \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN4) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN5) |  \
                                     PIN_PUPDR_PULLUP(GPIOC_LED1) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_LED2) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_LED3) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_CODEC_MCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_SCK) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_MISO) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_MOSI) |     \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN14) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_CODEC_LRCK) |         \
                                     PIN_ODR_HIGH(GPIOC_CODEC_SDO) |         \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |         \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |       \
                                     PIN_ODR_HIGH(GPIOC_PIN4) |        \
                                     PIN_ODR_HIGH(GPIOC_PIN5) |        \
                                     PIN_ODR_LOW(GPIOC_LED1) |           \
                                     PIN_ODR_LOW(GPIOC_LED2) |           \
                                     PIN_ODR_LOW(GPIOC_LED3) |            \
                                     PIN_ODR_HIGH(GPIOC_CODEC_MCLK) |            \
                                     PIN_ODR_HIGH(GPIOC_SPI_SCK) |            \
                                     PIN_ODR_HIGH(GPIOC_SPI_MISO) |            \
                                     PIN_ODR_HIGH(GPIOC_SPI_MOSI) |           \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |        \
                                     PIN_ODR_HIGH(GPIOC_PIN14) |         \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_CODEC_LRCK, 10U) |     \
                                     PIN_AFIO_AF(GPIOC_CODEC_SDO, 11U) |     \
                                     PIN_AFIO_AF(GPIOC_PIN2, 10U) |     \
                                     PIN_AFIO_AF(GPIOC_PIN3, 12U) |   \
                                     PIN_AFIO_AF(GPIOC_PIN4, 11U) |    \
                                     PIN_AFIO_AF(GPIOC_PIN5, 11U) |    \
                                     PIN_AFIO_AF(GPIOC_LED1, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_LED2, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_LED3, 12U) |        \
                                     PIN_AFIO_AF(GPIOC_CODEC_MCLK, 12U) |        \
                                     PIN_AFIO_AF(GPIOC_SPI_SCK, 12U) |        \
                                     PIN_AFIO_AF(GPIOC_SPI_MISO, 12U) |        \
                                     PIN_AFIO_AF(GPIOC_SPI_MOSI, 12U) |       \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |     \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0U))



/*
 * GPIOD setup:

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_SPI_CS_CODEC          2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U
 
*
 * GPIOD setup:
 *
 * PD0  - FMC_D2                    (alternate 12).
 * PD1  - FMC_D3                    (alternate 12).
 * PD2  - SD_CMD                    (alternate 12).
 * PD3  - DCMI_D5                   (input pullup).
 * PD4  - OTG_FS_OVER_CURRENT       (input floating).
 * PD5  - OTG_FS_PWR_SW_ON          (output pushpull maximum).
 * PD6  - AUDIO_INT                 (input pullup).
 * PD7  - SPDIF_RX0                 (input pullup).
 * PD8  - FMC_D13                   (alternate 12).
 * PD9  - FMC_D14                   (alternate 12).
 * PD10 - FMC_D15                   (alternate 12).
 * PD11 - QSPI_D0                   (input pullup).
 * PD12 - QSPI_D1                   (input pullup).
 * PD13 - QSPI_D3                   (input pullup).
 * PD14 - FMC_D0                    (alternate 12).
 * PD15 - FMC_D1                    (alternate 12).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |     \
                                     PIN_MODE_OUTPUT(GPIOD_SPI_CS_CODEC) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |        \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |\
                                     PIN_MODE_INPUT(GPIOD_PIN5) |\
                                     PIN_MODE_INPUT(GPIOD_PIN6) |      \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |      \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |        \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |        \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |        \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_SPI_CS_CODEC) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_PIN0) |        \
                                     PIN_OSPEED_HIGH(GPIOD_PIN1) |        \
                                     PIN_OSPEED_HIGH(GPIOD_SPI_CS_CODEC) |        \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN4) |\
                                     PIN_OSPEED_HIGH(GPIOD_PIN5) |\
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |     \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |     \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |        \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_PIN0) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN1) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_SPI_CS_CODEC) |     \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN4) |\
                                     PIN_PUPDR_FLOATING(GPIOD_PIN5) |\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN8) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN9) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN10) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |      \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) |      \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN14) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |           \
                                     PIN_ODR_HIGH(GPIOD_SPI_CS_CODEC) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |\
                                     PIN_ODR_HIGH(GPIOD_PIN5) | \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |        \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |        \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |          \
                                     PIN_ODR_LOW(GPIOD_PIN12) |           \
                                     PIN_ODR_LOW(GPIOD_PIN13) |           \
                                     PIN_ODR_LOW(GPIOD_PIN14) |            \
                                     PIN_ODR_LOW(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN1, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_SPI_CS_CODEC, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |\
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |\
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN9, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN10, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN14, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN15, 12U))


/*
 * GPIOE setup:
 *
 * PE0  - FMC_NBL0                  (alternate 12).
 * PE1  - FMC_NBL1                  (alternate 12).
 * PE2  - QSPI_D2                   (input pullup).
 * PE3  - OTG_HS_OVER_CURRENT       (input floating).
 * PE4  - LCD_B0                    (alternate 14).
 * PE5  - DCMI_D6                   (input pullup).
 * PE6  - DCMI_D7                   (input pullup).
 * PE7  - FMC_D4                    (alternate 12).
 * PE8  - FMC_D5                    (alternate 12).
 * PE9  - FMC_D6                    (alternate 12).
 * PE10 - FMC_D7                    (alternate 12).
 * PE11 - FMC_D8                    (alternate 12).
 * PE12 - FMC_D9                    (alternate 12).
 * PE13 - FMC_D10                   (alternate 12).
 * PE14 - FMC_11                    (alternate 12).
 * PE15 - FMC_D12                   (alternate 12).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_FMC_NBL0) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_NBL1) |   \
                                     PIN_MODE_INPUT(GPIOE_QSPI_D2) |        \
                                     PIN_MODE_INPUT(GPIOE_OTG_HS_OVER_CURRENT) |\
                                     PIN_MODE_ALTERNATE(GPIOE_LCD_B0) |     \
                                     PIN_MODE_INPUT(GPIOE_DCMI_D6) |        \
                                     PIN_MODE_INPUT(GPIOE_DCMI_D7) |        \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D4) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D5) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D6) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D7) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D8) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D9) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D10) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_11) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_FMC_D12))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_FMC_NBL0) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_NBL1) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_QSPI_D2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_OTG_HS_OVER_CURRENT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_LCD_B0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_DCMI_D6) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_DCMI_D7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D9) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_11) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FMC_D12))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_FMC_NBL0) |      \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_NBL1) |      \
                                     PIN_OSPEED_HIGH(GPIOE_QSPI_D2) |       \
                                     PIN_OSPEED_HIGH(GPIOE_OTG_HS_OVER_CURRENT) |\
                                     PIN_OSPEED_HIGH(GPIOE_LCD_B0) |        \
                                     PIN_OSPEED_HIGH(GPIOE_DCMI_D6) |       \
                                     PIN_OSPEED_HIGH(GPIOE_DCMI_D7) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D4) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D5) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D6) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D7) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D8) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D9) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D10) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_11) |        \
                                     PIN_OSPEED_HIGH(GPIOE_FMC_D12))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_FMC_NBL0) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_NBL1) |   \
                                     PIN_PUPDR_PULLUP(GPIOE_QSPI_D2) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_OTG_HS_OVER_CURRENT) |\
                                     PIN_PUPDR_FLOATING(GPIOE_LCD_B0) |     \
                                     PIN_PUPDR_PULLUP(GPIOE_DCMI_D6) |      \
                                     PIN_PUPDR_PULLUP(GPIOE_DCMI_D7) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D4) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D5) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D6) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D7) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D8) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D9) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D10) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_11) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_FMC_D12))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_FMC_NBL0) |         \
                                     PIN_ODR_HIGH(GPIOE_FMC_NBL1) |         \
                                     PIN_ODR_HIGH(GPIOE_QSPI_D2) |          \
                                     PIN_ODR_HIGH(GPIOE_OTG_HS_OVER_CURRENT) |\
                                     PIN_ODR_HIGH(GPIOE_LCD_B0) |           \
                                     PIN_ODR_HIGH(GPIOE_DCMI_D6) |          \
                                     PIN_ODR_HIGH(GPIOE_DCMI_D7) |          \
                                     PIN_ODR_HIGH(GPIOE_FMC_D4) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D5) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D6) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D7) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D8) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D9) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D10) |          \
                                     PIN_ODR_HIGH(GPIOE_FMC_11) |           \
                                     PIN_ODR_HIGH(GPIOE_FMC_D12))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_FMC_NBL0, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_FMC_NBL1, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_QSPI_D2, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_OTG_HS_OVER_CURRENT, 0U) |\
                                     PIN_AFIO_AF(GPIOE_LCD_B0, 14U) |       \
                                     PIN_AFIO_AF(GPIOE_DCMI_D6, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_DCMI_D7, 0U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D4, 12U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_FMC_D5, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D6, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D7, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D8, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D9, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D10, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FMC_11, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_FMC_D12, 12U))

/*
 * GPIOF setup:
 *
 * PF0  - FMC_A0                    (alternate 12).
 * PF1  - FMC_A1                    (alternate 12).
 * PF2  - FMC_A2                    (alternate 12).
 * PF3  - FMC_A3                    (alternate 12).
 * PF4  - FMC_A4                    (alternate 12).
 * PF5  - FMC_A5                    (alternate 12).
 * PF6  - ARD_A5                    (input pullup).
 * PF7  - ARD_A4                    (input pullup).
 * PF8  - ARD_A3                    (input pullup).
 * PF9  - ARD_A2                    (input pullup).
 * PF10 - ARD_A1                    (input pullup).
 * PF11 - FMC_SDNRAS                (alternate 12).
 * PF12 - FMC_A6                    (alternate 12).
 * PF13 - FMC_A7                    (alternate 12).
 * PF14 - FMC_A8                    (alternate 12).
 * PF15 - FMC_A9                    (alternate 12).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ALTERNATE(GPIOF_FMC_A0) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A1) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A2) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A3) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A4) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A5) |     \
                                     PIN_MODE_INPUT(GPIOF_ARD_A5) |         \
                                     PIN_MODE_INPUT(GPIOF_ARD_A4) |         \
                                     PIN_MODE_INPUT(GPIOF_ARD_A3) |         \
                                     PIN_MODE_INPUT(GPIOF_ARD_A2) |         \
                                     PIN_MODE_INPUT(GPIOF_ARD_A1) |         \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_SDNRAS) | \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A6) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A7) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A8) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_FMC_A9))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_FMC_A0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_A5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_A4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_A3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_A2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_A1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_SDNRAS) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FMC_A9))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_FMC_A0) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A1) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A2) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A3) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A4) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A5) |        \
                                     PIN_OSPEED_HIGH(GPIOF_ARD_A5) |        \
                                     PIN_OSPEED_HIGH(GPIOF_ARD_A4) |        \
                                     PIN_OSPEED_HIGH(GPIOF_ARD_A3) |        \
                                     PIN_OSPEED_HIGH(GPIOF_ARD_A2) |        \
                                     PIN_OSPEED_HIGH(GPIOF_ARD_A1) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_SDNRAS) |    \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A6) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A7) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A8) |        \
                                     PIN_OSPEED_HIGH(GPIOF_FMC_A9))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_FMC_A0) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A1) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A2) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A3) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A4) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A5) |     \
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_A5) |       \
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_A4) |       \
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_A3) |       \
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_A2) |       \
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_A1) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_SDNRAS) | \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A6) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A7) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A8) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_FMC_A9))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_FMC_A0) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A1) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A2) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A3) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A4) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A5) |           \
                                     PIN_ODR_HIGH(GPIOF_ARD_A5) |           \
                                     PIN_ODR_HIGH(GPIOF_ARD_A4) |           \
                                     PIN_ODR_HIGH(GPIOF_ARD_A3) |           \
                                     PIN_ODR_HIGH(GPIOF_ARD_A2) |           \
                                     PIN_ODR_HIGH(GPIOF_ARD_A1) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_SDNRAS) |       \
                                     PIN_ODR_HIGH(GPIOF_FMC_A6) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A7) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A8) |           \
                                     PIN_ODR_HIGH(GPIOF_FMC_A9))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_FMC_A0, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A1, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A2, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A3, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A4, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A5, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_ARD_A5, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_ARD_A4, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_ARD_A3, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_ARD_A2, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_ARD_A1, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_FMC_SDNRAS, 12U) |   \
                                     PIN_AFIO_AF(GPIOF_FMC_A6, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A7, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A8, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_FMC_A9, 12U))

/*
 * GPIOG setup:
 *
 * PG0  - FMC_A10                   (alternate 12).
 * PG1  - FMC_A11                   (alternate 12).
 * PG2  - RMII_RXER                 (input pullup).
 * PG3  - EXT_RST                   (input pullup).
 * PG4  - FMC_BA0                   (alternate 12).
 * PG5  - FMC_BA1                   (alternate 12).
 * PG6  - ARD_D2                    (input pullup).
 * PG7  - ARD_D4                    (input pullup).
 * PG8  - FMC_SDCLK                 (input floating).
 * PG9  - DCMI_VSYNC                (input pullup).
 * PG10 - SAI2_SDB                  (input pullup).
 * PG11 - RMII_TX_EN                (alternate 11).
 * PG12 - LCD_B4                    (alternate 9).
 * PG13 - RMII_TXD0                 (alternate 11).
 * PG14 - RMII_TXD1                 (alternate 11).
 * PG15 - FMC_SDNCAS                (alternate 12).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_ALTERNATE(GPIOG_FMC_A10) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_FMC_A11) |    \
                                     PIN_MODE_INPUT(GPIOG_RMII_RXER) |      \
                                     PIN_MODE_INPUT(GPIOG_EXT_RST) |        \
                                     PIN_MODE_ALTERNATE(GPIOG_FMC_BA0) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_FMC_BA1) |    \
                                     PIN_MODE_INPUT(GPIOG_ARD_D2) |         \
                                     PIN_MODE_INPUT(GPIOG_ARD_D4) |         \
                                     PIN_MODE_INPUT(GPIOG_FMC_SDCLK) |      \
                                     PIN_MODE_INPUT(GPIOG_DCMI_VSYNC) |     \
                                     PIN_MODE_INPUT(GPIOG_SAI2_SDB) |       \
                                     PIN_MODE_ALTERNATE(GPIOG_RMII_TX_EN) | \
                                     PIN_MODE_ALTERNATE(GPIOG_LCD_B4) |     \
                                     PIN_MODE_ALTERNATE(GPIOG_RMII_TXD0) |  \
                                     PIN_MODE_ALTERNATE(GPIOG_RMII_TXD1) |  \
                                     PIN_MODE_ALTERNATE(GPIOG_FMC_SDNCAS))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_FMC_A10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FMC_A11) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_RMII_RXER) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_EXT_RST) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FMC_BA0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FMC_BA1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ARD_D2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ARD_D4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FMC_SDCLK) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_DCMI_VSYNC) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_SAI2_SDB) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_RMII_TX_EN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_LCD_B4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_RMII_TXD0) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_RMII_TXD1) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FMC_SDNCAS))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_HIGH(GPIOG_FMC_A10) |       \
                                     PIN_OSPEED_HIGH(GPIOG_FMC_A11) |       \
                                     PIN_OSPEED_HIGH(GPIOG_RMII_RXER) |     \
                                     PIN_OSPEED_HIGH(GPIOG_EXT_RST) |       \
                                     PIN_OSPEED_HIGH(GPIOG_FMC_BA0) |       \
                                     PIN_OSPEED_HIGH(GPIOG_FMC_BA1) |       \
                                     PIN_OSPEED_HIGH(GPIOG_ARD_D2) |        \
                                     PIN_OSPEED_HIGH(GPIOG_ARD_D4) |        \
                                     PIN_OSPEED_HIGH(GPIOG_FMC_SDCLK) |     \
                                     PIN_OSPEED_HIGH(GPIOG_DCMI_VSYNC) |    \
                                     PIN_OSPEED_HIGH(GPIOG_SAI2_SDB) |      \
                                     PIN_OSPEED_HIGH(GPIOG_RMII_TX_EN) |    \
                                     PIN_OSPEED_HIGH(GPIOG_LCD_B4) |        \
                                     PIN_OSPEED_HIGH(GPIOG_RMII_TXD0) |     \
                                     PIN_OSPEED_HIGH(GPIOG_RMII_TXD1) |     \
                                     PIN_OSPEED_HIGH(GPIOG_FMC_SDNCAS))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_FMC_A10) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_FMC_A11) |    \
                                     PIN_PUPDR_PULLUP(GPIOG_RMII_RXER) |    \
                                     PIN_PUPDR_PULLUP(GPIOG_EXT_RST) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_FMC_BA0) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_FMC_BA1) |    \
                                     PIN_PUPDR_PULLUP(GPIOG_ARD_D2) |       \
                                     PIN_PUPDR_PULLUP(GPIOG_ARD_D4) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_FMC_SDCLK) |  \
                                     PIN_PUPDR_PULLUP(GPIOG_DCMI_VSYNC) |   \
                                     PIN_PUPDR_PULLUP(GPIOG_SAI2_SDB) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_RMII_TX_EN) | \
                                     PIN_PUPDR_FLOATING(GPIOG_LCD_B4) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_RMII_TXD0) |  \
                                     PIN_PUPDR_FLOATING(GPIOG_RMII_TXD1) |  \
                                     PIN_PUPDR_FLOATING(GPIOG_FMC_SDNCAS))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_FMC_A10) |          \
                                     PIN_ODR_HIGH(GPIOG_FMC_A11) |          \
                                     PIN_ODR_HIGH(GPIOG_RMII_RXER) |        \
                                     PIN_ODR_HIGH(GPIOG_EXT_RST) |          \
                                     PIN_ODR_HIGH(GPIOG_FMC_BA0) |          \
                                     PIN_ODR_HIGH(GPIOG_FMC_BA1) |          \
                                     PIN_ODR_HIGH(GPIOG_ARD_D2) |           \
                                     PIN_ODR_HIGH(GPIOG_ARD_D4) |           \
                                     PIN_ODR_HIGH(GPIOG_FMC_SDCLK) |        \
                                     PIN_ODR_HIGH(GPIOG_DCMI_VSYNC) |       \
                                     PIN_ODR_HIGH(GPIOG_SAI2_SDB) |         \
                                     PIN_ODR_HIGH(GPIOG_RMII_TX_EN) |       \
                                     PIN_ODR_HIGH(GPIOG_LCD_B4) |           \
                                     PIN_ODR_HIGH(GPIOG_RMII_TXD0) |        \
                                     PIN_ODR_HIGH(GPIOG_RMII_TXD1) |        \
                                     PIN_ODR_HIGH(GPIOG_FMC_SDNCAS))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_FMC_A10, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_FMC_A11, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_RMII_RXER, 0U) |     \
                                     PIN_AFIO_AF(GPIOG_EXT_RST, 0U) |       \
                                     PIN_AFIO_AF(GPIOG_FMC_BA0, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_FMC_BA1, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_ARD_D2, 0U) |        \
                                     PIN_AFIO_AF(GPIOG_ARD_D4, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_FMC_SDCLK, 0U) |     \
                                     PIN_AFIO_AF(GPIOG_DCMI_VSYNC, 0U) |    \
                                     PIN_AFIO_AF(GPIOG_SAI2_SDB, 0U) |      \
                                     PIN_AFIO_AF(GPIOG_RMII_TX_EN, 11U) |   \
                                     PIN_AFIO_AF(GPIOG_LCD_B4, 9U) |        \
                                     PIN_AFIO_AF(GPIOG_RMII_TXD0, 11U) |    \
                                     PIN_AFIO_AF(GPIOG_RMII_TXD1, 11U) |    \
                                     PIN_AFIO_AF(GPIOG_FMC_SDNCAS, 12U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - TP1                       (input pullup).
 * PH3  - FMC_SDNE0                 (alternate 12).
 * PH4  - ULPI_NXT                  (alternate 10).
 * PH5  - FMC_SDNWE                 (alternate 12).
 * PH6  - ARD_D6                    (input pullup).
 * PH7  - LCD_SCL                   (alternate 4).
 * PH8  - LCD_SDA                   (alternate 4).
 * PH9  - DCMI_D0                   (input pullup).
 * PH10 - DCMI_D1                   (input pullup).
 * PH11 - DCMI_D2                   (input pullup).
 * PH12 - DCMI_D3                   (input pullup).
 * PH13 - DCMI_PWR_EN               (input pullup).
 * PH14 - DCMI_D4                   (input pullup).
 * PH15 - TP_PH15                   (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |            \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |  \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |   \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |  \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |         \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |    \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |    \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |    \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |     \
                                     PIN_OTYPE_OPENDRAIN(GPIOH_PIN7) |   \
                                     PIN_OTYPE_OPENDRAIN(GPIOH_PIN8) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |\
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN2) |           \
                                     PIN_OSPEED_HIGH(GPIOH_PIN3) |     \
                                     PIN_OSPEED_HIGH(GPIOH_PIN4) |      \
                                     PIN_OSPEED_HIGH(GPIOH_PIN5) |     \
                                     PIN_OSPEED_HIGH(GPIOH_PIN6) |        \
                                     PIN_OSPEED_HIGH(GPIOH_PIN7) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN8) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN9) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN10) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN11) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN12) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN13) |   \
                                     PIN_OSPEED_HIGH(GPIOH_PIN14) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |          \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN3) |  \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN4) |   \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN5) |  \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN7) |    \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN8) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |      \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |      \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |      \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |      \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |  \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |      \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |              \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |        \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |         \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |        \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |           \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |      \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |           \
                                     PIN_AFIO_AF(GPIOH_PIN3, 12U) |    \
                                     PIN_AFIO_AF(GPIOH_PIN4, 10U) |     \
                                     PIN_AFIO_AF(GPIOH_PIN5, 12U) |    \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_PIN7, 4U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 4U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |   \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - ARD_D10                   (input pullup).
 * PI1  - ARD_D13                   (input pullup).
 * PI2  - ARD_D8                    (input pullup).
 * PI3  - ARD_D7                    (input pullup).
 * PI4  - SAI2_MCLKA                (input pullup).
 * PI5  - SAI2_SCKA                 (input pullup).
 * PI6  - SAI2_SDA                  (input pullup).
 * PI7  - SAI2_FSA                  (input pullup).
 * PI8  - TP2                       (input pullup).
 * PI9  - LCD_VSYNC                 (alternate 14).
 * PI10 - LCD_HSYNC                 (alternate 14).
 * PI11 - BUTTON_USER               (input floating).
 * PI12 - LCD_DISP                  (alternate 14).
 * PI13 - LCD_INT                   (alternate 14).
 * PI14 - LCD_CLK                   (alternate 14).
 * PI15 - LCD_R0                    (alternate 14).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_ARD_D10) |        \
                                     PIN_MODE_INPUT(GPIOI_ARD_D13) |        \
                                     PIN_MODE_INPUT(GPIOI_ARD_D8) |         \
                                     PIN_MODE_INPUT(GPIOI_ARD_D7) |         \
                                     PIN_MODE_INPUT(GPIOI_SAI2_MCLKA) |     \
                                     PIN_MODE_INPUT(GPIOI_SAI2_SCKA) |      \
                                     PIN_MODE_INPUT(GPIOI_SAI2_SDA) |       \
                                     PIN_MODE_INPUT(GPIOI_SAI2_FSA) |       \
                                     PIN_MODE_INPUT(GPIOI_TP2) |            \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_VSYNC) |  \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_HSYNC) |  \
                                     PIN_MODE_INPUT(GPIOI_BUTTON_USER) |    \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_DISP) |   \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_INT) |    \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_CLK) |    \
                                     PIN_MODE_ALTERNATE(GPIOI_LCD_R0))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_ARD_D10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOI_ARD_D13) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOI_ARD_D8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOI_ARD_D7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SAI2_MCLKA) | \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SAI2_SCKA) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SAI2_SDA) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOI_SAI2_FSA) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOI_TP2) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_VSYNC) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_HSYNC) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOI_BUTTON_USER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_DISP) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_INT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_CLK) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOI_LCD_R0))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_HIGH(GPIOI_ARD_D10) |       \
                                     PIN_OSPEED_HIGH(GPIOI_ARD_D13) |       \
                                     PIN_OSPEED_HIGH(GPIOI_ARD_D8) |        \
                                     PIN_OSPEED_HIGH(GPIOI_ARD_D7) |        \
                                     PIN_OSPEED_HIGH(GPIOI_SAI2_MCLKA) |    \
                                     PIN_OSPEED_HIGH(GPIOI_SAI2_SCKA) |     \
                                     PIN_OSPEED_HIGH(GPIOI_SAI2_SDA) |      \
                                     PIN_OSPEED_HIGH(GPIOI_SAI2_FSA) |      \
                                     PIN_OSPEED_HIGH(GPIOI_TP2) |           \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_VSYNC) |     \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_HSYNC) |     \
                                     PIN_OSPEED_HIGH(GPIOI_BUTTON_USER) |   \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_DISP) |      \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_INT) |       \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_CLK) |       \
                                     PIN_OSPEED_HIGH(GPIOI_LCD_R0))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_ARD_D10) |      \
                                     PIN_PUPDR_PULLUP(GPIOI_ARD_D13) |      \
                                     PIN_PUPDR_PULLUP(GPIOI_ARD_D8) |       \
                                     PIN_PUPDR_PULLUP(GPIOI_ARD_D7) |       \
                                     PIN_PUPDR_PULLUP(GPIOI_SAI2_MCLKA) |   \
                                     PIN_PUPDR_PULLUP(GPIOI_SAI2_SCKA) |    \
                                     PIN_PUPDR_PULLUP(GPIOI_SAI2_SDA) |     \
                                     PIN_PUPDR_PULLUP(GPIOI_SAI2_FSA) |     \
                                     PIN_PUPDR_PULLUP(GPIOI_TP2) |          \
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_VSYNC) |  \
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_HSYNC) |  \
                                     PIN_PUPDR_FLOATING(GPIOI_BUTTON_USER) |\
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_DISP) |   \
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_INT) |    \
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_CLK) |    \
                                     PIN_PUPDR_FLOATING(GPIOI_LCD_R0))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_ARD_D10) |          \
                                     PIN_ODR_HIGH(GPIOI_ARD_D13) |          \
                                     PIN_ODR_HIGH(GPIOI_ARD_D8) |           \
                                     PIN_ODR_HIGH(GPIOI_ARD_D7) |           \
                                     PIN_ODR_HIGH(GPIOI_SAI2_MCLKA) |       \
                                     PIN_ODR_HIGH(GPIOI_SAI2_SCKA) |        \
                                     PIN_ODR_HIGH(GPIOI_SAI2_SDA) |         \
                                     PIN_ODR_HIGH(GPIOI_SAI2_FSA) |         \
                                     PIN_ODR_HIGH(GPIOI_TP2) |              \
                                     PIN_ODR_HIGH(GPIOI_LCD_VSYNC) |        \
                                     PIN_ODR_HIGH(GPIOI_LCD_HSYNC) |        \
                                     PIN_ODR_HIGH(GPIOI_BUTTON_USER) |      \
                                     PIN_ODR_HIGH(GPIOI_LCD_DISP) |         \
                                     PIN_ODR_HIGH(GPIOI_LCD_INT) |          \
                                     PIN_ODR_HIGH(GPIOI_LCD_CLK) |          \
                                     PIN_ODR_HIGH(GPIOI_LCD_R0))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_ARD_D10, 0U) |       \
                                     PIN_AFIO_AF(GPIOI_ARD_D13, 0U) |       \
                                     PIN_AFIO_AF(GPIOI_ARD_D8, 0U) |        \
                                     PIN_AFIO_AF(GPIOI_ARD_D7, 0U) |        \
                                     PIN_AFIO_AF(GPIOI_SAI2_MCLKA, 0U) |    \
                                     PIN_AFIO_AF(GPIOI_SAI2_SCKA, 0U) |     \
                                     PIN_AFIO_AF(GPIOI_SAI2_SDA, 0U) |      \
                                     PIN_AFIO_AF(GPIOI_SAI2_FSA, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_TP2, 0U) |           \
                                     PIN_AFIO_AF(GPIOI_LCD_VSYNC, 14U) |    \
                                     PIN_AFIO_AF(GPIOI_LCD_HSYNC, 14U) |    \
                                     PIN_AFIO_AF(GPIOI_BUTTON_USER, 0U) |   \
                                     PIN_AFIO_AF(GPIOI_LCD_DISP, 14U) |     \
                                     PIN_AFIO_AF(GPIOI_LCD_INT, 14U) |      \
                                     PIN_AFIO_AF(GPIOI_LCD_CLK, 14U) |      \
                                     PIN_AFIO_AF(GPIOI_LCD_R0, 14U))

/*
 * GPIOJ setup:
 *
 * PJ0  - LCD_R1                    (alternate 14).
 * PJ1  - LCD_R2                    (alternate 14).
 * PJ2  - LCD_R3                    (alternate 14).
 * PJ3  - LCD_R4                    (alternate 14).
 * PJ4  - LCD_R5                    (alternate 14).
 * PJ5  - LCD_R6                    (alternate 14).
 * PJ6  - LCD_R7                    (alternate 14).
 * PJ7  - LCD_G0                    (alternate 14).
 * PJ8  - LCD_G1                    (alternate 14).
 * PJ9  - LCD_G2                    (alternate 14).
 * PJ10 - LCD_G3                    (alternate 14).
 * PJ11 - LCD_G4                    (alternate 14).
 * PJ12 - OTG_FS_VBUS               (input floating).
 * PJ13 - LCD_B1                    (alternate 14).
 * PJ14 - LCD_B2                    (alternate 14).
 * PJ15 - LCD_B3                    (alternate 14).
 */
#define VAL_GPIOJ_MODER             (PIN_MODE_ALTERNATE(GPIOJ_LCD_R1) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R2) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R3) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R4) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R5) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R6) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_R7) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_G0) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_G1) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_G2) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_G3) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_G4) |     \
                                     PIN_MODE_INPUT(GPIOJ_OTG_FS_VBUS) |    \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_B1) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_B2) |     \
                                     PIN_MODE_ALTERNATE(GPIOJ_LCD_B3))
#define VAL_GPIOJ_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_R7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_G0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_G1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_G2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_G3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_G4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_OTG_FS_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_B1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_B2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_LCD_B3))
#define VAL_GPIOJ_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOJ_LCD_R1) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R2) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R3) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R4) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R5) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R6) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_R7) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_G0) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_G1) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_G2) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_G3) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_G4) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_OTG_FS_VBUS) |\
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_B1) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_B2) |     \
                                     PIN_OSPEED_VERYLOW(GPIOJ_LCD_B3))
#define VAL_GPIOJ_PUPDR             (PIN_PUPDR_FLOATING(GPIOJ_LCD_R1) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R2) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R3) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R4) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R5) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R6) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_R7) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_G0) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_G1) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_G2) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_G3) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_G4) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_OTG_FS_VBUS) |\
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_B1) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_B2) |     \
                                     PIN_PUPDR_FLOATING(GPIOJ_LCD_B3))
#define VAL_GPIOJ_ODR               (PIN_ODR_HIGH(GPIOJ_LCD_R1) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R2) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R3) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R4) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R5) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R6) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_R7) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_G0) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_G1) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_G2) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_G3) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_G4) |           \
                                     PIN_ODR_HIGH(GPIOJ_OTG_FS_VBUS) |      \
                                     PIN_ODR_HIGH(GPIOJ_LCD_B1) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_B2) |           \
                                     PIN_ODR_HIGH(GPIOJ_LCD_B3))
#define VAL_GPIOJ_AFRL              (PIN_AFIO_AF(GPIOJ_LCD_R1, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R2, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R3, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R4, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R5, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R6, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_R7, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_G0, 14U))
#define VAL_GPIOJ_AFRH              (PIN_AFIO_AF(GPIOJ_LCD_G1, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_G2, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_G3, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_G4, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_OTG_FS_VBUS, 0U) |   \
                                     PIN_AFIO_AF(GPIOJ_LCD_B1, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_B2, 14U) |       \
                                     PIN_AFIO_AF(GPIOJ_LCD_B3, 14U))

/*
 * GPIOK setup:
 *
 * PK0  - LCD_G5                    (alternate 14).
 * PK1  - LCD_G6                    (alternate 14).
 * PK2  - LCD_G7                    (alternate 14).
 * PK3  - LCD_BL_CTRL               (output pushpull minimum).
 * PK4  - LCD_B5                    (alternate 14).
 * PK5  - LCD_B6                    (alternate 14).
 * PK6  - LCD_B7                    (alternate 14).
 * PK7  - LCD_DE                    (alternate 14).
 * PK8  - PIN8                      (input floating).
 * PK9  - PIN9                      (input floating).
 * PK10 - PIN10                     (input floating).
 * PK11 - PIN11                     (input floating).
 * PK12 - PIN12                     (input floating).
 * PK13 - PIN13                     (input floating).
 * PK14 - PIN14                     (input floating).
 * PK15 - PIN15                     (input floating).
 */
#define VAL_GPIOK_MODER             (PIN_MODE_ALTERNATE(GPIOK_LCD_G5) |     \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_G6) |     \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_G7) |     \
                                     PIN_MODE_OUTPUT(GPIOK_LCD_BL_CTRL) |   \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_B5) |     \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_B6) |     \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_B7) |     \
                                     PIN_MODE_ALTERNATE(GPIOK_LCD_DE) |     \
                                     PIN_MODE_INPUT(GPIOK_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN15))
#define VAL_GPIOK_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOK_LCD_G5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_G6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_G7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_BL_CTRL) |\
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_B5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_B6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_B7) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_LCD_DE) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN15))
#define VAL_GPIOK_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOK_LCD_G5) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_G6) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_G7) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_BL_CTRL) |\
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_B5) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_B6) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_B7) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_LCD_DE) |     \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN15))
#define VAL_GPIOK_PUPDR             (PIN_PUPDR_FLOATING(GPIOK_LCD_G5) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_G6) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_G7) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_BL_CTRL) |\
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_B5) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_B6) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_B7) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_LCD_DE) |     \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOK_PIN15))
#define VAL_GPIOK_ODR               (PIN_ODR_HIGH(GPIOK_LCD_G5) |           \
                                     PIN_ODR_HIGH(GPIOK_LCD_G6) |           \
                                     PIN_ODR_HIGH(GPIOK_LCD_G7) |           \
                                     PIN_ODR_LOW(GPIOK_LCD_BL_CTRL) |       \
                                     PIN_ODR_HIGH(GPIOK_LCD_B5) |           \
                                     PIN_ODR_HIGH(GPIOK_LCD_B6) |           \
                                     PIN_ODR_HIGH(GPIOK_LCD_B7) |           \
                                     PIN_ODR_HIGH(GPIOK_LCD_DE) |           \
                                     PIN_ODR_HIGH(GPIOK_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOK_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOK_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOK_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOK_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOK_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOK_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOK_PIN15))
#define VAL_GPIOK_AFRL              (PIN_AFIO_AF(GPIOK_LCD_G5, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_G6, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_G7, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_BL_CTRL, 0U) |   \
                                     PIN_AFIO_AF(GPIOK_LCD_B5, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_B6, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_B7, 14U) |       \
                                     PIN_AFIO_AF(GPIOK_LCD_DE, 14U))
#define VAL_GPIOK_AFRH              (PIN_AFIO_AF(GPIOK_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN15, 0U))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
