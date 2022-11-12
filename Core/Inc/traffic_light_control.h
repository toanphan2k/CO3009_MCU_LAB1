/*
 * traffic_light_control.h
 *
 *  Created on: Sep 26, 2022
 *      Author: pmt12
 */

#ifndef INC_TRAFFIC_LIGHT_CONTROL_H_
#define INC_TRAFFIC_LIGHT_CONTROL_H_

#include "main.h"
#include "led_segment_control.h"

#define STOP_DURATION 500
#define STAND_BY_DURATION 300
#define GO_DURATION 200

void trafficCountdownControl_1(int counter);

void trafficCountdownControl_2(int counter);



#endif /* INC_TRAFFIC_LIGHT_CONTROL_H_ */
