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
class PathPlanning {
public:
	static Path pathFrom(RobotPos start, RobotPos end);
};
}




#endif /* PATHPLANNING_HPP_ */
