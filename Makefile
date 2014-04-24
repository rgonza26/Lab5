#CSE 220 - Lab 5

#!/bin/bash
# File: makefile

CrossReference: Identifier.o IdentifierBinaryTree.o Integer.o LineNumberList.o main.o Print.o Real.o Scanner.o String.o Token.o
	g++ Identifier.o IdentifierBinaryTree.o Integer.o LineNumberList.o main.o Print.o Real.o Scanner.o String.o Token.o -o CrossReference

Identifier.o: Identifier.cpp
	g++ -c Identifier.cpp
IdentifierBinaryTree.o: IdentifierBinaryTree.cpp
	g++ -c IdentifierBinaryTree.cpp
Integer.o: Integer.cpp
	g++ -c Integer.cpp
LineNumberList.o: LineNumberList.cpp
	g++ -c LineNumberList.cpp
main.o: main.cpp
	g++ -c main.cpp
Print.o: Print.cpp
	g++ -c Print.cpp
Real.o: Real.cpp
	g++ -c Real.cpp
Scanner.o: Scanner.cpp
	g++ -c Scanner.cpp
String.o: String.cpp
	g++ -c String.cpp
Token.o: Token.cpp
	g++ -c Token.cpp
