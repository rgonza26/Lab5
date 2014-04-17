#ifndef __STRING_HPP__
#define __STRING_HPP__

#include "Literal.hpp"

class String : public Literal<string>{
	public:
		String();
		String(string value);
		
		void print();
};


#endif
