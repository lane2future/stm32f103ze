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

    GPIOA->CRL &= 0xFFFFFFF0;
    GPIOA->CRL |= 0x00000008;
    GPIOE->CRL &= 0xFFF000FF;
    GPIOE->CRL |= 0x00088800;

    GPIOA->ODR &= ~(1<<0);
    GPIOE->ODR |= 7<<2;
}
