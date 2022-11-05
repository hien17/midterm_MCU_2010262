/*
 * input_reading.h
 *
 *  Created on: Nov 5, 2022
 *      Author: MY-PC
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_


#include "main.h"
#include "software_timer.h"
#include "global.h"

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);
int button_flag[3];
int check_button_flag(int);
unsigned char is_button_pressed_3s(unsigned char);
#endif /* INC_INPUT_READING_H_ */
