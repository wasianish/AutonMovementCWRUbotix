/*
 * Localization.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */
#ifndef LOCALIZATION_HPP_
#define LOCALIZATION_HPP_

using namespace std;

namespace Auton {

class Localization {
private:
	static vector<Rot> detObstRot;
	static vector<double> detObstR;
	static vector<bool> detObstCheck;

	static int newObstacle(Rot rot, double r);
	static Rot calcRot(int x, int y);
public:
	static ObstPos * obstaclePositions;
	static int numObstacles;
	static RobotPos robotPosEstimate;
	static RobotPos robotPosCalc;

	static void calcLoc();
	static void updateLocEstimate(MotorStatus status);
	static void scanForObstacles();
	static void scanForBalls();
	static void scanForAll();
};
}
#endif /* LOCALIZATION_HPP_ */
