//Implement Literal as a template class for +25 pt extra credit
#ifndef __LITERAL_HPP__
#define __LITERAL_HPP__

#include <string>

#include "Token.h"

using namespace std;

template <typename T> class Literal : public Token{
	public:
		//Methods
		Literal() : Token(){this->value = 0x0;}
		Literal(T value) : Token(){this->value = value;}
		~Literal(){}

		T getValue(){return this->value;}
		void setValue(T){this->value = value;}


		virtual string print() = 0;

		//Members
		T value;

	private:

};


#endif