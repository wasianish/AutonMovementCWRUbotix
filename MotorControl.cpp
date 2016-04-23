/*
 * MotorControl.cpp
 *
 *  Created on: Apr 23, 2016
 *      Author: anno
 */
#include "MotorControl.hpp"
#include "I2C.hpp"
#include "AutonUtil.hpp"

namespace Auton {
void MotorControl::forward(double speed, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharVelocity(speed),
					 (char)ovr};
	I2C::sendCommand(CMD_FWD, buffer, 2);
}
void MotorControl::forward(double speed, double distance, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharVelocity(speed),
					 AutonUtil::doubleToCharDistance(distance),
					 (char)ovr};
	I2C::sendCommand(CMD_FWD, buffer, 3);
}
void MotorControl::backward(double speed, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharVelocity(speed),
					 (char)ovr};
	I2C::sendCommand(CMD_BWD, buffer, 2);
}
void MotorControl::backward(double speed, double distance, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharVelocity(speed),
					 AutonUtil::doubleToCharDistance(distance),
					 (char)ovr};
	I2C::sendCommand(CMD_BWD, buffer, 3);
}
void MotorControl::turnLeft(double aspeed, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharAngularVelocity(aspeed),
					 (char)ovr};
	I2C::sendCommand(CMD_TL, buffer, 2);
}
void MotorControl::turnLeft(double aspeed, double angle, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharAngularVelocity(aspeed),
					 AutonUtil::doubleToCharAngle(angle),
					 (char)ovr};
	I2C::sendCommand(CMD_TL, buffer, 3);
}
void MotorControl::turnRight(double aspeed, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharAngularVelocity(aspeed),
					 (char)ovr};
	I2C::sendCommand(CMD_TR, buffer, 2);
}
void MotorControl::turnRight(double aspeed, double angle, bool ovr) {
	char * buffer = {AutonUtil::doubleToCharAngularVelocity(aspeed),
					 AutonUtil::doubleToCharAngle(angle),
					 (char)ovr};
	I2C::sendCommand(CMD_TR, buffer, 3);
}
void MotorControl::openWheels(bool ovr) {
	char * buffer = {(char)1, (char)ovr};
	I2C::sendCommand(CMD_W, buffer, 1);
}
void MotorControl::closeWheels(bool ovr) {
	char * buffer = {(char)0, (char)ovr};
	I2C::sendCommand(CMD_W, buffer, 1);
}
void MotorControl::tiltArmDown(double angle) {
	char * buffer = {AutonUtil::doubleToCharAngle(angle)};
	I2C::sendCommand(CMD_TLTD, buffer, 1);
}
void MotorControl::tiltArmUp(double angle) {
	char * buffer = {AutonUtil::doubleToCharAngle(angle)};
	I2C::sendCommand(CMD_TLTU, buffer, 1);
}
void MotorControl::translateArmDown(double speed) {
	char * buffer = {AutonUtil::doubleToCharArmVelocity(speed)};
	I2C::sendCommand(CMD_TRAD, buffer, 1);
}
void MotorControl::translateArmDown(double speed, double dist) {
	char * buffer = {AutonUtil::doubleToCharArmVelocity(speed),
					 AutonUtil::doubleToCharArmDistance(dist)};
	I2C::sendCommand(CMD_TRAD, buffer, 2);
}
void MotorControl::translateArmUp(double speed) {
	char * buffer = {AutonUtil::doubleToCharArmVelocity(speed)};
	I2C::sendCommand(CMD_TRAU, buffer, 1);
}
void MotorControl::translateArmUp(double speed, double dist) {
	char * buffer = {AutonUtil::doubleToCharArmVelocity(speed),
					 AutonUtil::doubleToCharArmDistance(dist)};
	I2C::sendCommand(CMD_TRAU, buffer, 2);
}
void MotorControl::forwardBucket(double speed) {
	char * buffer = {AutonUtil::doubleToCharBucketSpeed(speed)};
	I2C::sendCommand(CMD_BF, buffer, 1);
}
void MotorControl::backwardBucket(double speed) {
	char * buffer = {AutonUtil::doubleToCharBucketSpeed(speed)};
	I2C::sendCommand(CMD_BB, buffer, 1);
}
void MotorControl::setMotorVelocities(char * motors, char * speeds, int num, bool ovr) {
	char * buffer;
	buffer = (char *) malloc(2 * num);
	memcpy(buffer, motors, num);
	memcpy(buffer + num, speeds, num);
}
}

