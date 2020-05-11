/*
 * mainPrgm.cpp
 *
 *  Created on: 11-May-2020
 *      Author: zenmonk
 */
#ifndef _IO_
#define _IO_
#include <iostream>
#endif

#include "OuterAngle.h"

int main(){
	float angle{0.0};
	std::cout << "Enter angle :";
	std::cin >> angle;
	if (angle == 0.0){
		std::cerr << "\nCannot have angle as 0";
		return EXIT_FAILURE;
	}
	if (getSides(angle) == 0){
		std::cerr << "\nAngle given cannot create a perfect polygon";
		return EXIT_FAILURE;
	}
	std::cout << "Number of sides is " << getSides(angle);
	return EXIT_SUCCESS;
}



