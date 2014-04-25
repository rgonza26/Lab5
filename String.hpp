/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#ifndef __STRING_HPP__
#define __STRING_HPP__

#include "Literal.hpp"

class String : public Literal<string>{
	public:
		String();
		String(string value);
		
		void setString(string value);
		string print();
};


#endif
