// Project1A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stack>
#include <cctype>
#include <iostream>
#include <iomanip>
#include "Parser.h"

using namespace std;

int main()
{
	Parser infix;
	string infixExpr;

	infix.GetInput();

	infix.Parse();

	infix.DisplayResult();

	return 0;
}

