#include "Identifier.hpp"

Identifier::Identifier() : Token(){

}

Identifier::~Identifier(){

}


//What methods am I missing to implement a binary tree.
void Identifier::setLeftChild(Identifier *tok)
{
    this->leftChild = tok;
}
Identifier *Identifier::getLeftChild()
{
    return this->leftChild;
}
void Identifier::setRightChild(Identifier *tok)
{
    this->rightChild = tok;
}
Identifier *Identifier::getRightChild()
{
    return this->rightChild;
}


void Identifier::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();
    
    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
LineNumberList *Identifier::getLineNumberList()
{
    return this->list;
}
