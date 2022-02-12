#include "key.h"
/***************************************
 *
 * initialize KEY
 *
 * @param	none.
 *
 * @return	node.
 *
 * @note	KEY_UP-->PA0.
 *          KEY0-->PE4.
 *          KEY1-->PE3.
 *          KEY2-->PE2.
 **************************************/
void key_init(void)
{
	RCC->APB2ENR |= 1<<0;
    RCC->APB2ENR |= 1<<6;

    GPIO_A->CRL &= 0xFFFFFFF0;
    GPIO_A->CRL |= 0x00000008;
    GPIO_E->CRL &= 0xFFF000FF;
    GPIO_E->CRL |= 0x00088800;

    GPIO_A->ODR &= ~(1<<0);
    GPIO_E->ODR |= 7<<2;
}

/***************************************
 *
 * KEY debounce
 *
 * @param	none.
 *
 * @return	which key
 *
 * @note	
 **************************************/
u8 key_debounce(void)
{
    //static u8 key_flag = 0;
    if(WAKE_UP)
    {
		
    }
	return 0;
}
