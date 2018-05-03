/* FTM.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: FTM example code.
 * 28 Sept 2015 Osvaldo Romero: Initial version
 */


#ifndef FTM_H_
#define FTM_H_

void init_FTM (void);
void FTM2_IRQHandler(void); //initializing PWM pins, timers, and interrupts
void init_PWM();
void output_compare_FTM2_ch1 (void);
void input_capture_FTM2_ch5 (void);


#endif /* FTM_H_ */
