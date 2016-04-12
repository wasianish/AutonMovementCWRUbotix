/*
 * MotorControl.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */

#ifndef MOTORCONTROL_HPP_
#define MOTORCONTROL_HPP_

#define RAMP_EXPONENTIAL 0x01
#define RAMP_LINEAR 0x02

#define MOTOR_FR 0x00
#define MOTOR_FL 0x01
#define MOTOR_BR 0x02
#define MOTOR_BL 0x03

#define COMMAND_FORWARD 0x00
#define COMMAND_BACKWARD 0x01
#define COMMAND_TURNL 0x02
#define COMMAND_TURNR 0x03
#define COMMAND_OPENW 0x04
#define COMMAND_CLOSEW 0x05
#define COMMAND_INDV 0x06

namespace Auton {
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
	};
	struct MotorMovement {
		char command;
		char speed;
		char distance;
	};

	class MotorControl {
	private:
		static char rampType = 0x01;
		static double rampFactor = 2.0;
	public:
		// Speed
		static void forward(char speed, bool ovr);
		static void forward(char speed, char distance, bool ovr);
		static void backward(char speed, bool ovr);
		static void backward(char speed, char distance, bool ovr);
		static void turnLeft(char speed, bool ovr);
		static void turnLeft(char speed, char angle, bool ovr);
		static void turnRight(char speed, bool ovr);
		static void turnRight(char speed, char angle, bool ovr);
		static void openWheels(bool ovr);
		static void closeWheels(bool ovr);

		static void setMotorVelocities(char * motors,int * speeds, int num, bool ovr);

		static MotorStatus getMotorStatus();

		static void setRampType(char type, double factor);
	};
}




#endif /* MOTORCONTROL_HPP_ */
