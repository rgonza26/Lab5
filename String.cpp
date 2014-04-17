#include "String.hpp"
#include <iostream>
using namespace std;

String::String() : Literal<string>(""){

}

String::String(string value) : Literal<string>(value){

}

void String::print(){
	cout << value;
}