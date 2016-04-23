/*
 * MotorUtil.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include <cmath>
#ifndef MOTORUTIL_HPP_
#define MOTORUTIL_HPP_

namespace Auton {
struct ImgData {
	int * xBalls;
	int * yBalls;
	int * rBalls;
	int numBalls;
	int * xRocks;
	int * yRocls;
	int numRocks;
};
struct RobotPos {
	double x,y,heading;
};
struct ObstPos {
	double x,y,radius;
};
struct Rot {
	double yaw,pitch;
} homeRot;
struct Path {
	RobotPos * nodes;
	int numNodes;
};
struct MotorStatus {
	// COMMAND_*
	char command;
	// The speed of each motor mapped from -128 to 127
	char * speeds;
	// The power draw of each motor mapped from 0 to 255
	char * powerDraw;
	// The distance each motor needs to travel mapped from 0 to 255
	char * distances;
	// Number of motors
	int numMotors;
	// Estimated time to completion in millis
	long estCompletion;
	// Time since last status
	long dt;
};
struct MotorMovement {
	char command;
	char speed;
	char distance;
};
class AutonUtil {
public:
	const static double robotWidth = .75;
	const static int cameraResolutionWidth = 1920;
	const static int cameraResolutionHeight = 1080;
	const static double fov = 78*180/M_PI;

	static double charToDoubleVelocity(char vel);
	static double charToDoubleDistance(char dist);
	static double charToDoubleAngularVelocity(char avel);
	static double charToDoubleAngle(char dist);
	static double charToDoubleArmVelocity(char dist);
	static double charToDoubleArmDistance(char dist);
	static char doubleToCharVelocity(double vel);
	static char doubleToCharDistance(double dist);
	static char doubleToCharAngularVelocity(double avel);
	static char doubleToCharAngle(double dist);
	static char doubleToCharArmVelocity(double dist);
	static char doubleToCharArmDistance(double dist);
	static char doubleToCharBucketSpeed(double speed);
};
}

#endif /* MOTORUTIL_HPP_ */
