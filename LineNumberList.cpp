/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
//
//  LineNumberList.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#include "LineNumberList.h"

LineNumberList::LineNumberList()
{
    this->lineNumber = 0;
	this->nextLineNumber = NULL;
}
LineNumberList::~LineNumberList()
{
    
}
void LineNumberList::setLineNumber(int num)
{
    this->lineNumber = num;
}
int LineNumberList::getLineNumber()
{
    return this->lineNumber;
}
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    this->nextLineNumber = next;
}
LineNumberList *LineNumberList::getNextLineNumber()
{
    return this->nextLineNumber;
}
