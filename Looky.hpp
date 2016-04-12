/*
 * Looky.hpp
 *
 *  Created on: Apr 12, 2016
 *      Author: Anno
 */

#ifndef LOOKY_HPP_
#define LOOKY_HPP_

namespace Auton
{
class Looky
{
private:
	double currentYaw;
	double currentPitch;
public:
	static void rotYaw(double degrees);
	static void rotPitch(double degrees);
	static double getDistance();
};
}



#endif /* LOOKY_HPP_ */
