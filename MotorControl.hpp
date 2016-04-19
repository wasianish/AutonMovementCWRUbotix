/*
 * MotorControl.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#import "AutonUtil.hpp"
#ifndef MOTORCONTROL_HPP_
#define MOTORCONTROL_HPP_

#define	RAMP_EXP	0x01
#define	RAMP_LIN	0x02

#define	MOT_FR		0x00
#define	MOT_FL		0x01
#define	MOT_BR		0x02
#define	MOT_BL		0x03
#define	ACT_L		0x04
#define	ACT_R		0x05
#define ACT_ARML	0x06
#define ACT_ARMR	0x07

#define	CMD_FWD		0x00
#define	CMD_BWD		0x01
#define	CMD_TL		0x02
#define	CMD_TR		0x03
#define	CMD_OPNW	0x04
#define	CMD_CLW		0x05
#define	CMD_INDV	0x06

namespace Auton {
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

	static void tiltArmDown(char angle);
	static void tiltArmUp(char angle);
	static void translateArmDown(char speed, char dist);
	static void translateArmDown(char speed);
	static void translateArmUp(char speed, char dist);
	static void translateArmUp(char speed);
	static void forwardBucket(char speed);
	static void backwardBucket(char speed);

	static void setMotorVelocities(char * motors, int * speeds, int num, bool ovr);

	static MotorStatus getMotorStatus();

	static void setRampType(char type, double factor);
};
}




#endif /* MOTORCONTROL_HPP_ */
