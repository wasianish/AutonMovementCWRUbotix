/*
 * MotorUtil.hpp
 *
 *  Created on: Apr 10, 2016
 *      Author: Anno
 */

#ifndef MOTORUTIL_HPP_
#define MOTORUTIL_HPP_

namespace Auton {
	class MotorUtil {
	public:
		static double charToDoubleDistance(char dist);
		static double charToDoubleAngle(char dist);
		static char doubleToCharDistance(double dist);
		static char doubleToCharAngle(double dist);
	};
}



#endif /* MOTORUTIL_HPP_ */
