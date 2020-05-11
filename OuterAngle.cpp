/*
 * OuterAngle.cpp
 *
 *  Created on: 11-May-2020
 *      Author: zenmonk
 */
#ifndef _IO_
#define _IO_
#include <iostream>
#endif

float outerAngle(float innerAngle){
	return (float(180) - innerAngle);
}

int getSides(float innerAngle){
	static float side = 360/(outerAngle(innerAngle));
	if (side - float(int(side)) != 0.0) {
		return 0;
	}
	return int(360/(outerAngle(innerAngle)));
}



