/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#include "Integer.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Integer::Integer():Literal<int>(0){

}

Integer::Integer(int value):Literal<int>(value){

}

string Integer::print(){
	ostringstream ss;
	ss << value << " (integer)";
	return ss.str();
}