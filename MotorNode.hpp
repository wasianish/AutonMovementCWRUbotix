/*
 * MotorNode.hpp
 *
 *  Created on: Apr 9, 2016
 *      Author: Anno
 */
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"
#ifndef MOTORNODE_HPP_
#define MOTORNODE_HPP_

namespace Auton {
	class MotorNode : public Robos::NodeBase {
	private:
		Robos::MessageBasePtr& MainCallbackImpl(Robos::MessageBasePtr& pMessage) override;
	public:
		MotorNode();
		~MotorNode();
	};
}

#endif /* MOTORNODE_HPP_ */
