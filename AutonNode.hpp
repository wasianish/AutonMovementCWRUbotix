/*
 * AutonNode.hpp
 *
 *  Created on: Apr 9, 2016
 *      Author: Anno
 */
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"
#ifndef AUTONNODE_HPP_
#define AUTONNODE_HPP_

namespace Auton {
class AutonNode : public Robos::NodeBase {
private:
	Robos::MessageBasePtr& MainCallbackImpl(Robos::MessageBasePtr& pMessage) override;
public:
	AutonNode();
	~AutonNode();
};
}

#endif /* AUTONNODE_HPP_ */
