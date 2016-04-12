/*
 * PathNode.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "Robos/NodeBase.hpp"
#include "Robos/MessageBase.hpp"
#ifndef PATHNODE_HPP_
#define PATHNODE_HPP_

namespace Auton {
class PathNode : public Robos::NodeBase {
private:
	Robos::MessageBasePtr& MainCallbackImpl(Robos::MessageBasePtr& pMessage) ;
public:
	PathNode();
	~PathNode();
};
}



#endif /* PATHNODE_HPP_ */
