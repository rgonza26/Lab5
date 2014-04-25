/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
//
//  IdentifierBinaryTree.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#include "IdentifierBinaryTree.h"
#include "LineNumberList.h"

using namespace std;

IdentifierBinaryTree::IdentifierBinaryTree()
{
    this->treeRoot = NULL;
}
IdentifierBinaryTree::~IdentifierBinaryTree()
{
    Identifier *root = getTreeRoot();
    
    if (root != NULL)
    {
        depthFirstDeleteTree(root);
    }
}
void IdentifierBinaryTree::depthFirstDeleteTree(Identifier *tok)
{
    if (tok->getLeftChild() != NULL)
    {
        depthFirstDeleteTree(tok->getLeftChild());
    }
//    cout << tok->getTokenString() << "\n";
    if (tok->getRightChild() != NULL)
    {
        depthFirstDeleteTree(tok->getRightChild());
    }
    delete tok;
}
void IdentifierBinaryTree::setTreeRoot(Identifier *root)
{
    this->treeRoot = root;
}
Identifier *IdentifierBinaryTree::getTreeRoot()
{
    return this->treeRoot;
}
bool IdentifierBinaryTree::addIdentifier(Identifier *tok, int lineNum)
{
	/*
    bool success = false;
    LineNumberList *listItem = new LineNumberList();
    
    listItem->setLineNumber(lineNum);
    if (getTreeRoot() == NULL)
    {
		//========= THISSSSSS
        setTreeRoot(tok);
        tok->addToLineNumberList(listItem);
        success = true;
    }
    else
    {
        string tokenName = tok->getTokenString();
        Identifier *parentNode = getTreeRoot();
        string treeNodeName;
        int stringComparison;
        
        while (parentNode != NULL)
        {
            treeNodeName = parentNode->getTokenString();
            stringComparison = tokenName.compare(treeNodeName);
            if (stringComparison == 0)
            {
			//=========SAME .:. > ADD LINE NUMBER
                //They are the same identifier token we just need to add a new line number to the list.
                parentNode->addToLineNumberList(listItem);
                parentNode = NULL; //Exit the loop
                delete tok;         //We won't need tok and it won't be deleted in main.
                success = true;
            }
			//=========LEFT
            else if (stringComparison < 0)
            {
                //Go to the left.
                if (parentNode->getLeftChild() == NULL)
                {
                    //Add tok to the left
                    tok->addToLineNumberList(listItem);
                    parentNode->setLeftChild(tok);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getLeftChild();
                }
            }
            else
			//=========RIGHT
            {
                //Go to the right.
                if (parentNode->getRightChild() == NULL)
                {
                    //Add tok to the right
                    tok->addToLineNumberList(listItem);
                    parentNode->setRightChild(tok);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getRightChild();
                }
            }
        }
    }
    return success;
	*/
	return addIdentifier2(this->treeRoot, tok, lineNum);
}

bool IdentifierBinaryTree::addIdentifier2(Identifier* &head, Identifier* tok, int lineNum){
	bool success = false;
	LineNumberList* newList = new LineNumberList();
	newList->setLineNumber(lineNum);
	newList->setNextLineNumber(NULL);

	if(head == NULL){
		head = tok;
		head->addToLineNumberList(newList);
		success = true;
	}else{
		if(tok->getTokenString() == head->getTokenString()){
			head->addToLineNumberList(newList);
			success = true;
		}else if(tok->getTokenString() < head->getTokenString()){
			addIdentifier2(head->leftChild, tok, lineNum);
			success = true;
		}else if(tok->getTokenString() > head->getTokenString()){
			addIdentifier2(head->rightChild, tok, lineNum);
			success = true;
		}
	}
	return success;
}