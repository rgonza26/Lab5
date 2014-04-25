/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#include "String.hpp"
#include <iostream>
using namespace std;

String::String() : Literal<string>(""){

}

String::String(string value) : Literal<string>(value){

}

void String::setString(string value){
	this->value = value;
}

string String::print(){
	return value;
}