
/*Proiectul este realizat pe cablajul BluePill (MCU stm32f103c8t6)
 * In acest proiect voi seta in 1 toate pinurile MCU*/
/*Documentation Home page
https://www.st.com/en/microcontrollers-microprocessors/stm32f103c8.html
 *Datasheet
https://www.st.com/resource/en/datasheet/stm32f103c8.pdf
 * Reference manual
https://www.st.com/resource/en/reference_manual/cd00171190-stm32f101xx-stm32f102xx-stm32f103xx-stm32f105xx-and-stm32f107xx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf
 *
 * */

/*BluePill pinout
 *
 * PC13		PB9
 * PC14		PB8
 * PC15		PB7
 * PA0		PB6
 * PA1		PB5
 * PA2		PB4
 * PA3		PB3
 * PA4		PA15
 * PA5		PA12
 * PA6		PA11
 * PA7		PA10
 * PB0		PA9
 * PB1		PA8
 * PB10		PB15
 * PB11		PB14
 * 			PB13
 * 			PB12
 **/

#include <stdint.h>
#include <stdio.h>
extern void initialise_monitor_handles(void);

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
    initialise_monitor_handles();
	printf("Hello World\n");
	/* Loop forever */
	for(;;);
}



