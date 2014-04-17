//Implement Literal as a template class for +25 pt extra credit
#ifndef __LITERAL_HPP__
#define __LITERAL_HPP__

#include <string>
using namespace std;

template <typename T> class Literal{
	public:
		//Methods
		Literal();
		Literal(T value);
		~Literal();

		T getValue();
		void setValue(T);

		virtual void print() = 0;

		//Members
		T value;

	private:

};



#endif