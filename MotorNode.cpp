/*
 * MotorNode.cpp
 *
 *  Created on: Apr 9, 2016
 *      Author: Anno
 */
#include "MotorNode.hpp"
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"

namespace Auton {
	MotorNode::MotorNode() {

	}

	MotorNode::~MotorNode() {

	}

	Robos::MessageBasePtr& MotorNode::MainCallbackImpl(Robos::MessageBasePtr& pMessage) {
		return 0;
	}
}






