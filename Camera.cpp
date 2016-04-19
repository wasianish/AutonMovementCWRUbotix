/*
 * Camera.cpp
 *
 *  Created on: Apr 18, 2016
 *      Author: anno
 */
#include "Camera.hpp"

namespace Auton {
// Initializes the Camera and takes a first capture
// Return zero if completed
int Camera::initialize() {
	if(!cap.open(0)) {
		return 1;
	}
	cap >> img;
	return 0;
}
// Releases the capture
int Camera::close() {
	cap.release();
	return 0;
}
// Captures an image into the private field
int Camera::capture() {
	cap >> img;
	return 0;
}
int Camera::process() {

	return 0;
}
}

