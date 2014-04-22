#ifndef __IDENTIFIER_HPP__
#define __IDENTIFIER_HPP__

#include <iostream>

#include "common.h"
#include "Literal.hpp"
#include "LineNumberList.h"
#include "Token.h"
#include "String.hpp"

using namespace std;

class Identifier : public Token{
private:
    TokenCode code;
    String literal;
    string tokenString;
	
    //What variables and methods am I missing to implement a binary tree.
    Identifier *leftChild;
    Identifier *rightChild;
	
    LineNumberList *list;
    
public:
    Identifier();
    ~Identifier();

    void setLeftChild(Identifier *tok);
    Identifier *getLeftChild();
    void setRightChild(Identifier *tok);
    Identifier *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();

	void print();
};







#endif


