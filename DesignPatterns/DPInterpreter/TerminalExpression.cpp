#include "TerminalExpression.h"



TerminalExpression::TerminalExpression()
{
	cout << "����TerminalExpression" << endl;
}


TerminalExpression::~TerminalExpression()
{
	cout << "����TerminalExpression" << endl;
}

void TerminalExpression::Interpret(Context * ctx)
{
	cout << "�ս�� �� " << ctx->exp << endl;
}
