/*
 * MotorControl.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "AutonUtil.hpp"
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
#define	CMD_W		0x04
#define	CMD_INDV	0x05
#define CMD_TLTD	0x06
#define CMD_TLTU	0x07
#define CMD_TRAD	0x08
#define CMD_TRAU	0x09
#define CMD_BF		0x0A
#define CMD_BB		0x0B

namespace Auton {
class MotorControl {
private:
	static char rampType = 0x01;
	static double rampFactor = 2.0;
public:
	// Speed
	static void forward(double speed, bool ovr);
	static void forward(double speed, double distance, bool ovr);
	static void backward(double speed, bool ovr);
	static void backward(double speed, double distance, bool ovr);
	static void turnLeft(double speed, bool ovr);
	static void turnLeft(double speed, double angle, bool ovr);
	static void turnRight(double speed, bool ovr);
	static void turnRight(double speed, double angle, bool ovr);
	static void openWheels(bool ovr);
	static void closeWheels(bool ovr);

	static void tiltArmDown(double angle);
	static void tiltArmUp(double angle);
	static void translateArmDown(double speed, double dist);
	static void translateArmDown(double speed);
	static void translateArmUp(double speed, double dist);
	static void translateArmUp(double speed);
	static void forwardBucket(double speed);
	static void backwardBucket(double speed);

	static void setMotorVelocities(char * motors, char * speeds, int num, bool ovr);

	static MotorStatus getMotorStatus();

	static void setRampType(char type, double factor);
};
}




#endif /* MOTORCONTROL_HPP_ */
