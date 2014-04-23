#include "Real.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Real::Real() : Literal<double>(0){

}

Real::Real(double value) : Literal<double>(value){

}

string Real::print(){
	ostringstream ss;
	ss << value << " (real)";
	return ss.str();
}