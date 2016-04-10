/*
 * LocalNode.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "LocalNode.hpp"
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"

namespace Auton {
	LocalNode::LocalNode() {

	}

	LocalNode::~LocalNode() {

	}

	Robos::MessageBasePtr& LocalNode::MainCallbackImpl(Robos::MessageBasePtr& pMessage) {
		return 0;
	}
}



