/*
 * Localization.cpp
 *
 *  Created on: Apr 19, 2016
 *      Author: anno
 */
#include "Localization.hpp"
#include "AutonUtil.hpp"
#include "Camera.hpp"

namespace Auton {
void Localization::calcLoc() {

}
void Localization::updateLocEstimate(MotorStatus status) {

}
void Localization::scanForObstacles() {
	Rot cr = Looky::currentRot;
	cr.pitch = -60;
	Looky::rotateTo(cr);
	int totalScans = ((int) 360.0/(Camera::fov-Camera::fov_overlap)) + 1;
	for(int i = 0; i < totalScans; i++) {
		Camera::capture();
		Camera::process();
		if(Camera::processed.numRocks) {

		}
		cr.yaw += Camera::fov-Camera::fov_overlap;
		Looky::rotateTo(cr);
	}


}
Rot Localization::calcRot(int x, int y) {
	double yawOff = AutonUtil::fov*(x - 960)/1920;
	double pitchOff = (AutonUtil::fov*1080/1920)*(y-540)/1080;
	Rot r;
	r.yaw = Looky::currentRot.yaw + yawOff;
	r.pitch = Looky::currentRot.pitch + pitchOff;
	return r;
}
int Localization::newObstacle(Rot rot, double r) {
	for(int i = 0; i < detObstRot.size(); i++) {
		if(detObstRot.at(i).pitch - rot.pitch < 5*M_PI/180) {

		}
	}
}
void Localization::scanForBalls() {

}
void Localization::scanForAll() {

}
}



