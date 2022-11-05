/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: MY-PC
 */
#include "software_timer.h"
#include "fsm_automatic.h"
#include "global.h"

void fsm_simple_buttons_run() {
	switch (status) {
		case INIT:
			if (check_button_flag(0)){
				status = RESET;
			}
			if (check_button_flag(1)){
				status = INC;
			}
			if (check_button_flag(2)){
				status = DEC;
			}
			break;
		case RESET:
			counter=0;
			status = INIT;
			break;
		case INC:
			counter++;
			if (counter == 10) counter = 0;
				status = INC2;
			break;
		case DEC:
			counter--;
			if (counter == -1) counter = 9;
				status = DEC2;
			break;
		case INC2:
			if (is_button_pressed(1)){
				if (is_button_pressed_3s(1)){
					if(timer1_flag==1){
						setTimer1(1000);
						status = INC;
					}
				}
				else status = INC2;
			}
			else
				status = INIT;
			break;
		case DEC2:
			if (is_button_pressed(2)){
				if (is_button_pressed_3s(2)){
					if(timer1_flag==1){
						setTimer1(1000);
						status = DEC;
					}
				}
				else status = DEC2;
			}
			else
				status = INIT;
			break;
		default:
			break;
	}
}
