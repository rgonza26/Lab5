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
