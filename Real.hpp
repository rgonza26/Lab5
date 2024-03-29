/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#ifndef __REAL_HPP__
#define __REAL_HPP__

#include "Literal.hpp"

class Real : public Literal<double>{
	public:
		Real();
		Real(double value);

		string print();
};


#endif