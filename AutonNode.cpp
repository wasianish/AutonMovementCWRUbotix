/*
 * AutonNode.cpp
 *
 *  Created on: Apr 9, 2016
 *      Author: Anno
 */
#include "AutonNode.hpp"
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"

namespace Auton {
	AutonNode::AutonNode() {

	}

	AutonNode::~AutonNode() {

	}

	Robos::MessageBasePtr& AutonNode::MainCallbackImpl(Robos::MessageBasePtr& pMessage) {
		return 0;
	}
}


