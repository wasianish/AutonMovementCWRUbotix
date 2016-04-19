/*
 * Localization.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */

#ifndef LOCALIZATION_HPP_
#define LOCALIZATION_HPP_

namespace Auton {
class Localization {
private:
public:
	static ObstPos * obstaclePositions;
	static int numObstacles;
	static RobotPos robotPosEstimate;
	static RobotPos robotPosCalc;

	static void calcLoc();
	static void updateLocEstimate(MotorStatus status);
};
}
#endif /* LOCALIZATION_HPP_ */
