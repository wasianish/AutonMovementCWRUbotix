/*
 * Looky.hpp
 *
 *  Created on: Apr 12, 2016
 *      Author: Anno
 */
#import "AutonUtil.hpp"
#ifndef LOOKY_HPP_
#define LOOKY_HPP_

namespace Auton
{
class Looky
{
private:
public:
	static Rot currentRot;
	static void rotate(Rot rot);
	static void rotateTo(Rot rot);
	static double getDistance();
	static void resetAngleCounter();
	static Rot getCurrentRotation();
};
}



#endif /* LOOKY_HPP_ */
