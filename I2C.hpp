/*
 * I2C.hpp
 *
 *  Created on: Apr 19, 2016
 *      Author: Anno
 */
#ifndef I2C_HPP_
#define I2C_HPP_

#define ADDRESS_MOV	0x08
#define ADDRESS_LOC	0x09

namespace Auton {
class I2C {
private:
	;
public:
	static void begin();
	static int requestFrom(char address, int quantity);
	static int requestFrom(char address, int quantity, bool stop);
	static void beginTransmission(char address);
	static void endTransmission();
	static void write(char value);
	static void write(char * data, int length);
	static int available();
	static char read();
	static void read(char& buffer, int len);
	static void sendCommand(char command, char * data, int len);
};
}



#endif /* I2C_HPP_ */
