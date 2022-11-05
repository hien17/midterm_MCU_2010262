/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: MY-PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "input_reading.h"
#include "main.h"

#define INIT 1
#define RESET 2
#define INC 3
#define DEC 4
#define INC2 5
#define DEC2 6

extern int status ;
extern int counter;
extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;


#endif /* INC_GLOBAL_H_ */
