/*
===============================================================================


 Description : Led Blinking program using Board layer

 
 Layered Architecture used for this project
 ************************************
 Application layer-05_Day24_17092021_GPIO005.c
 ************************************
 Board layer - led.c/.h
 ************************************
 Low level drivers or chip level - gpio.c/.h
 ************************************
 Hardware
 ************************************


/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "led.h"
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  Crude Delay
  * @retval none
  */
void vAppDelay(uint32_t count)
{
	int i,j;
	for(i=0;i<count;i++)
		for(j=0;j<0xA00;j++);
}

/**
  * @brief  Initialize all the hardware connected
  * @retval none
  */
void vAppHardwareInit(void)
{
	vLedInitialize();
}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

   uint8_t num=0;
  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */
   vAppHardwareInit();

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {
	  	  vLedOn(LED_0);
	  	  vAppDelay(1000);
	  	  vLedOff(LED_0);
	  	  vAppDelay(1000);

	  	  vLedDisplayNum(num);
	  	  num++;

  }
  /* End of Application entry point */
}




