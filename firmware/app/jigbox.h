/*************************************************************************
 * Jigsaw GGHC project defines.
 * This file should contain all the definitions that are specific to the
 * project including the hardware connection definitions.
 *
 **************************************************************************/

#ifndef  __JIGBOX_H
#define  __JIGBOX_H

#include "stm32f10x_map.h"
#include "stm32f10x_gpio.h"

/* PUSH BUTTONS
 * There are 5 buttons for the pentatonic scale notes. As the mapping of 
 * buttons to notes maybe dynamic, the buttons are named 1-5 for the hardware 
 * access firmware.
 * Buttons are connected as follows:
 * BUTTON_1 PC0/ADC10
 * BUTTON_2 PC1/ADC11/CP
 * BUTTON_3 PC2/ADC12/WP
 * BUTTON_4 PB13/SPI2_SCK
 * BUTTON_5 PB12/SPI2_NSS
 */

#define BUTTON_1_PORT GPIOC
#define BUTTON_1_BIT GPIO_Pin_0
#define BUTTON_2_PORT GPIOC
#define BUTTON_2_BIT GPIO_Pin_1
#define BUTTON_3_PORT GPIOC
#define BUTTON_3_BIT GPIO_Pin_2
#define BUTTON_4_PORT GPIOB
#define BUTTON_4_BIT GPIO_Pin_13
#define BUTTON_5_PORT GPIOB
#define BUTTON_5_BIT GPIO_Pin_12

/* LEDS
 * There are three LEDs each contains Red Green and Blue chips. So there
 * are a total of 9 control outputs.
 * The outputs are:
 * RED1 -> PA3/USART2_RX/ ADC3/TIM2_CH4
 * GRN1 -> PA9/USART1_TX/ TIM1_CH2
 * BLU1 -> PA7/SPI2_MOSI/ADC7/TIM3_CH2
 * RED2 -> PA2/USART2_TX/ ADC2/TIM2_CH3
 * GRN2 -> PB0/ADC8/TIM3_CH3
 * BLU2 -> PB1/ADC9/TIM3_CH4
 * RED3 -> PB8/TIM4_CH3
 * GRN3 -> PB9/TIM4_CH4
 * BLU3 -> PA6/SPI2_MISO/ADC6/TIM3_CH1
 */
#define LED1_RED_PORT GPIOA
#define LED1_RED_PIN GPIO_Pin_3
#define LED1_BLU_PORT GPIOA
#define LED1_BLU_PIN GPIO_Pin_9
#define LED1_GRN_PORT GPIOA
#define LED1_GRN_PIN GPIO_Pin_7
#define LED2_RED_PORT GPIOA
#define LED2_RED_PIN GPIO_Pin_2
#define LED2_BLU_PORT GPIOB
#define LED2_BLU_PIN GPIO_Pin_0
#define LED2_GRN_PORT GPIOB
#define LED2_GRN_PIN GPIO_Pin_1
#define LED3_RED_PORT GPIOB
#define LED3_RED_PIN GPIO_Pin_8
#define LED3_BLU_PORT GPIOB
#define LED3_BLU_PIN GPIO_Pin_9
#define LED3_GRN_PORT GPIOA
#define LED3_GRN_PIN GPIO_Pin_6

/* ACCELEROMETER
 * The accelerometer is connected to the second I2C port
 * Two interrupts can be generated from the accelerometer
 * one on port PC3 and the other on PC4
 */
#define ACCEL_INT1_PORT GPIOC
#define ACCEL_INT1_PIN GPIO_Pin_3
#define ACCEL_INT1_PORT GPIOC
#define ACCEL_INT1_PIN GPIO_Pin_3

#define LED_RATE 20 /* 20 ticks of TIM1 which is 1/5 second */

#endif  /* __JIGBOX_H */
