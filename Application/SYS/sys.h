#ifndef _SYS_H
#define _SYS_H
#include "lane_stm32f10x.h"
#include "stm32f10x.h"

/* BITBAND formula */
#define BITBAND(addr, bitnum) ((addr & 0xF0000000) + 0x2000000 + ((addr & 0xFFFFF)<<5) + (bitnum << 2))
#define MEM_ADDR(addr) *((volatile u32 *)(0x40010800))

//#define PAout(addr,bitnum) MEM_ADDR(BITBAND(addr, bitnum)) 以下是优化后的宏定义
#define PAout(bitnum)	MEM_ADDR(BITBAND(GPIO_A->ODR, bitnum)) 
#define PAin(bitnum)	MEM_ADDR(BITBAND(GPIO_A->IDR, bitnum))
#define PBout(bitnum)   MEM_ADDR(BITBAND(GPIO_B->ODR, bitnum))
#define PBin(bitnum)    MEM_ADDR(BITBAND(GPIO_B->IDR, bitnum))
#define PCout(bitnum)   MEM_ADDR(BITBAND(GPIO_C->ODR, bitnum))
#define PCin(bitnum)    MEM_ADDR(BITBAND(GPIO_C->IDR, bitnum))
#define PDout(bitnum)   MEM_ADDR(BITBAND(GPIO_D->ODR, bitnum))
#define PDin(bitnum)    MEM_ADDR(BITBAND(GPIO_D->IDR, bitnum))
#define PEout(bitnum)   MEM_ADDR(BITBAND(GPIO_E->ODR, bitnum))
#define PEin(bitnum)    MEM_ADDR(BITBAND(GPIO_E->IDR, bitnum))
#define PFout(bitnum)   MEM_ADDR(BITBAND(GPIO_F->ODR, bitnum))
#define PFin(bitnum)    MEM_ADDR(BITBAND(GPIO_F->IDR, bitnum))
#define PGout(bitnum)   MEM_ADDR(BITBAND(GPIO_G->ODR, bitnum))
#define PGin(bitnum)    MEM_ADDR(BITBAND(GPIO_G->IDR, bitnum))





#endif
