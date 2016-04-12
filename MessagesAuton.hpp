/*
 * MessagesAuton.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "Robos/MessageBase.hpp"
#ifndef MESSAGESAUTON_HPP_
#define MESSAGESAUTON_HPP_

#define DRIVE_OPEN_WHEELS 0x22
#define DRIVE_CLOSE_WHEELS 0x23
#define DRIVE_FORWARD 0x00
#define DRIVE_BACKWARD 0x01
#define DRIVE_TURN_LEFT 0x02
#define DRIVE_TURN_RIGHT 0x03

#define MOTORMOVE_FR 0x00
#define MOTORMOVE_FL 0x01
#define MOTORMOVE_BR 0x02
#define MOTORMOVE_BL 0x03

namespace Auton {
struct MessageDrive : public Robos::MessageBase {
	char action, speed, dist;
};
struct MessageMotorMove : public Robos::MessageBase {
	char * motors;
	char * speeds;
	int num;
};
struct MessageRobPositionUpdate : public Robos::MessageBase {
	double posX, posY, theta;
};
struct MessageObstPositionUpdate : public Robos::MessageBase {
	double * posX, posY, radius;
	int num;
};
struct MessagePathUpdate : public Robos::MessageBase {
	bool block; // If true, then stop and start new.  If false, append

};
}



#endif /* MESSAGESAUTON_HPP_ */
