#include "led.h"
#include "beep.h"
#include "key.h"

int main(void)
{
	led_init();
	beep_init();
	key_init();
	while(1)
	{
		
		;
	}
}
