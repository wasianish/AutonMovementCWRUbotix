/*
 * Camera.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: anno
 */
#include "Camera.hpp"

namespace Auton {
int Camera::initialize() {
	if(!cap.open(0)) {
		return 1;
	}
	cap >> img;
	return 0;
}
int Camera::close() {
	cap.release();
	return 0;
}
int Camera::capture() {

	return 0;
}
}

