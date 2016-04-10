/*
 * PathNode.cpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "PathNode.hpp"
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"

namespace Auton {
	PathNode::PathNode() {

	}

	PathNode::~PathNode() {

	}

	Robos::MessageBasePtr& PathNode::MainCallbackImpl(Robos::MessageBasePtr& pMessage) {
		return 0;
	}
}



