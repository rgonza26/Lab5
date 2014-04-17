#include "Integer.hpp"
#include <iostream>
using namespace std;

Integer::Integer():Literal<int>(0){

}

Integer::Integer(int value):Literal<int>(value){

}

void Integer::print(){
	cout << value;
}