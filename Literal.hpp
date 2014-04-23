//Implement Literal as a template class for +25 pt extra credit
#ifndef __LITERAL_HPP__
#define __LITERAL_HPP__

#include <string>
#include "Token.h"
using namespace std;

template <typename T> class Literal : public Token{
	public:
		//Methods
		Literal();
		Literal(T value);
		~Literal();

		T getValue();
		void setValue(T);

		virtual string print() = 0;

		//Members
		T value;

	private:

};



#endif