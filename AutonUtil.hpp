/*
 * MotorUtil.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */

#ifndef MOTORUTIL_HPP_
#define MOTORUTIL_HPP_

namespace Auton {
	struct Pos {
		double x,y;
	};
	class MotorUtil {
	public:
		static double charToDoubleVelocity(char vel);
		static double charToDoubleDistance(char dist);
		static double charToDoubleAngle(char dist);
		static char doubleToCharVelocity(char vel);
		static char doubleToCharDistance(double dist);
		static char doubleToCharAngle(double dist);
	};
}

#endif /* MOTORUTIL_HPP_ */
