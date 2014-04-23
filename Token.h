//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>

#include "common.h"
#include "LineNumberList.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    TokenCode code;
    string tokenString;
    
public:
    Token();
    ~Token();

    void setCode(TokenCode newCode);
    TokenCode getCode();

	virtual string print() = 0;
};

#endif /* defined(__Lab4__Token__) */
