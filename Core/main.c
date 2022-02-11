#include "led.h"
#include "beep.h"
int main(void)
{
	led_init();
	beep_init();
	while(1)
	{
		;
	}
}
