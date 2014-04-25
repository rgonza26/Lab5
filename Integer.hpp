/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#ifndef __INTEGER_HPP__
#define __INTEGER_HPP__

#include "Literal.hpp"

class Integer : public Literal<int>{
	public:
		Integer();
		Integer(int value);

		string print();
};


#endif