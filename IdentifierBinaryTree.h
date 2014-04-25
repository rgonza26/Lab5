/////////////////////////////////////////////////////////////////
//Team 4
//Peter Johnson
//Roberto Gonzalez
/////////////////////////////////////////////////////////////////
//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "Identifier.hpp"

class IdentifierBinaryTree
{
    
    void depthFirstDeleteTree(Identifier *tok);
    
	public:
		Identifier *treeRoot;

		IdentifierBinaryTree();
		~IdentifierBinaryTree();
		void setTreeRoot(Identifier *root);
		Identifier *getTreeRoot();
		bool addIdentifier(Identifier *tok, int lineNum);
		bool addIdentifier2(Identifier* &head, Identifier* tok, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
