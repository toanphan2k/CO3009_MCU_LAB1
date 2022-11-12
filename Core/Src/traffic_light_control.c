/*
 * traffic_light_control.c
 *
 *  Created on: Sep 26, 2022
 *      Author: pmt12
 */

#include "traffic_light_control.h"
#include "led_segment_control.h"

void trafficCountdownControl_1(int counter){
	display7SEG_1(counter/100 + 1);
}

void trafficCountdownControl_2(int counter){
	display7SEG_2(counter/100 + 1);
}


