#ifndef LIB_NVIC_H_
#define LIB_NVIC_H_

extern void SysTick_Init(void);
extern void SysTick_Wait(uint32_t delay);
extern void SysTick_Wait10ms(uint32_t delay);

#endif