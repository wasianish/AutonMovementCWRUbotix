/*
 * MotorUtil.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */

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
struct Rot {
	double yaw,pitch;
};
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
class MotorUtil {
public:
	static double charToDoubleVelocity(char vel);
	static double charToDoubleDistance(char dist);
	static double charToDoubleAngle(char dist);
	static char doubleToCharVelocity(double vel);
	static char doubleToCharDistance(double dist);
	static char doubleToCharAngle(double dist);
};
}

#endif /* MOTORUTIL_HPP_ */
