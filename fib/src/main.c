/*
===============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Copyright (C) 
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC11xx.h"
#endif

#include <cr_section_macros.h>
#include <NXP/crp.h>

// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

#include "driver_config.h"
#include "target_config.h"

#include "timer32.h"
#include "gpio.h"

extern int fibonacci(int index, int a, int b);

int translateFib(int fibNum) {

}

int main(void) {
	  init_timer32(0, TIME_INTERVAL);
	  enable_timer32(0);
	  GPIOInit();
	  GPIOSetDir( LED_PORT, LED_BIT, 1 );

	
	fibonacci(20, 0, 1);
	while(1){}
	return 0 ;
}
