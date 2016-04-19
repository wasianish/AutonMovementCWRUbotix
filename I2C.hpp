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
	void begin();
	int requestFrom(char address, int quantity);
	int requestFrom(char address, int quantity, bool stop);
	void beginTransmission(char address);
	void endTransmission();
	void write(char value);
	void write(char * data, int length);
	int available();
	char read();
	void read(char& buffer, int len);
};
}



#endif /* I2C_HPP_ */
