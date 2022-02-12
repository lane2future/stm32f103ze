#include "led.h"
#include "beep.h"
#include "key.h"
#include "sys.h"

int main(void)
{
	led_init();
	beep_init();
	key_init();
	u8 key = 0, i = 0, j = 0;
	while(1)
	{
		key = key_debounce();
		if(key == 1)
		{
			LED0 = 0;LED1 = 0;
			DelayMs(500);
			LED0 = 1;LED1 = 1;
			DelayMs(500);
			LED0 = 0;LED1 = 0;
			DelayMs(500);
			LED0 = 1;LED1 = 1;
			DelayMs(500);
			LED0 = 0;LED1 = 0;
			DelayMs(500);
			LED0 = 1;LED1 = 1;
		}
		else if(key == 2)
		{
			for(i = 0; i <500; i++)
			{
				LED0 = 0;LED1 = 0;
				DelayMs(500 - i);
				LED0 = 1;LED1 = 1;
				DelayMs(i);
			}
			for(i = 0; i <500; i++)
			{
				LED0 = 1;LED1 = 1;
				DelayMs(500 - i);
				LED0 = 0;LED1 = 0;
				DelayMs(i);
			}
		}
	}
}
