#include "Real.hpp"
#include <iostream>
using namespace std;

Real::Real() : Literal<double>(0){

}

Real::Real(double value) : Literal<double>(value){

}

void Real::print(){
	cout << value;
}