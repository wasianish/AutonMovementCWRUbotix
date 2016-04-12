/*
 * PathPlanning.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#include "MotorControl.hpp"
#include "AutonUtil.hpp"
#ifndef PATHPLANNING_HPP_
#define PATHPLANNING_HPP_

namespace Auton {
	struct Path {
		Pos * nodes;
		int numNodes;
	};
	class PathPlanning {
	public:
		static Path pathFrom(Pos start, Pos end);
	};
}




#endif /* PATHPLANNING_HPP_ */
