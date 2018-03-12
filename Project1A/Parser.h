#pragma once
#include <string>
#include <stack>
#include <cctype>
#include <iostream>
#include <iomanip>

using namespace std;

class Parser {
public:
	Parser();
	void GetInput();
	void Parse();
	void Calculate();
	void DisplayResult();

private:
	string infExpr;
	stack<int> operandStack;
	stack<char> operatorStack;
}

