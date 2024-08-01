#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Grow Engineering"
#define PRODUCT_NAME "Axis_Basic"
#define VOLUME_LABEL "AXISBASIC"
#define INDEX_URL ""
#define BOARD_ID "SAMD51J19A-AxisBasic-v0"

#define USB_VID 0x23FF
#define USB_PID 0x0000

#define CRYSTALLESS 1

#define LED_PIN PIN_PB13

#define BOARD_NEOPIXEL_PIN PIN_PB05
#define BOARD_NEOPIXEL_COUNT 1

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_PA07D_SERCOM0_PAD3
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
