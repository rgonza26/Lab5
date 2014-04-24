//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{

}
Token::~Token()
{

}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}

void Token::setTokenString(string val){
	this->tokenString = val;
}

string Token::getTokenString(){
	return this->tokenString;
}