/*
 * LocalNode.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"
#ifndef LOCALNODE_HPP_
#define LOCALNODE_HPP_

namespace Auton {
class LocalNode : public Robos::NodeBase {
private:
	Robos::MessageBasePtr& MainCallbackImpl(Robos::MessageBasePtr& pMessage) ;
public:
	LocalNode();
	~LocalNode();
};
}




#endif /* LOCALNODE_HPP_ */
