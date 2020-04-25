
#include "stm32f3xx_hal.h"

#ifndef wh1602
#define wh1602

#define     PIN_RS            GPIO_PIN_7          // PD7
#define     PIN_RS_PORT       GPIOD               
#define     PIN_EN            GPIO_PIN_6          // PD6
#define     PIN_EN_PORT       GPIOD               
#define     PIN_D7            GPIO_PIN_1          // PD1
#define     PIN_D7_PORT       GPIOD               
#define     PIN_D6            GPIO_PIN_2          // PD2
#define     PIN_D6_PORT       GPIOD               
#define     PIN_D5            GPIO_PIN_3          // PD3
#define     PIN_D5_PORT       GPIOD               
#define     PIN_D4            GPIO_PIN_4          // PD4
#define     PIN_D4_PORT       GPIOD               


void PulseLCD(void);
void SendByte(char ByteToSend, int IsData);
void Cursor(char Row, char Col);
void ClearLCDScreen(void);
void InitializeLCD(void);
void PrintStr(char *Text);
#endif
