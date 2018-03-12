#include "stdafx.h"
#include <string>
#include <stack>
#include <cctype>
#include <iostream>
#include <iomanip>
#include "Parser.h"

using namespace std;


Parser::Parser()
{
}

void Parser::GetInput()
{
	// prompt user for input
	// check for errors
	// assign to private variable
	return;
}

void Parser::Parse()
{
	int 	finalResult;  // not sure if this is going to be used here or not
	char	currChar;

	for (int i = 0; i < infExpr.length(); i++)
	{
		currChar = infExpr[i];
		if (isdigit(currChar)
		{
			operandStack.push(currChar);
			cout << currChar << " pushed to Operand Stack." << endl;
		}
		// push operators to operator stack. refer to source code on blackboard
		// build switch statement to push, as well as to call "Calculate" function based on precedence
	}
 
	return;
}

void Parser::Calculate()
{
	int 	rightOperand, leftOperand, result;
	char	op;

	rightOperand = operandStack.top();
	operandStack.pop();

	leftOperand = operandStack.top();
	operandStack.pop();

	op = operatorStack.top();
	operatorStack.pop();

	switch (op)			//cases: ^, *, /, +, - Add error checking
	{
	case('^'): 	result = leftOperand ^ rightOperand;
			operandStack.push(result);
			break;
	case('*'): 	result = leftOperand * rightOperand;
			operandStack.push(result);
			break;
	case('/'): 	result = leftOperand / rightOperand;
			operandStack.push(result);
			break;
	case('+'): 	result = leftOperand + rightOperand;
			operandStack.push(result);
			break;
	case('-'): 	result = leftOperand - rightOperand;
			operandStack.push(result);
			break;
	}
}

void Parser::DisplayResult()
{
	// print results
	return;
}