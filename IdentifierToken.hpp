/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
#ifndef __IDENTIFIERTOKEN_HPP__
#define __IDENTIFIERTOKEN_HPP__

#include <iostream>

#include "common.h"
#include "Literal.hpp"
#include "LineNumberList.h"
#include "Token.h"
#include "String.hpp"

using namespace std;

class Token
{
private:
    TokenCode code;
    String literal;
    string tokenString;
    //What variables and methods am I missing to implement a binary tree.
    Token *leftChild;
    Token *rightChild;
    LineNumberList *list;
    
public:
    Token();
    ~Token();

    void setLeftChild(Token *tok);
    Token *getLeftChild();
    void setRightChild(Token *tok);
    Token *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();

	void print();
};







#endif


