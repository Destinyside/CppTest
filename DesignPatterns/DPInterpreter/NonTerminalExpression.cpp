#include "NonTerminalExpression.h"



NonTerminalExpression::NonTerminalExpression()
{
	cout << "����NonTerminalExpression" << endl;
}


NonTerminalExpression::~NonTerminalExpression()
{
	delete aexp;
	cout << "����NonTerminalExpression" << endl;
}


void NonTerminalExpression::Interpret(Context * ctx)
{
	if (ctx != NULL) {
		if (ctx->exp == 0) {
			delete aexp;
			aexp = new TerminalExpression;
			aexp->Interpret(ctx);
		}
		else {
			cout << "���ս�� �� " << ctx->exp << endl;
			if (ctx->next != NULL) {
				delete aexp;
				aexp = new NonTerminalExpression;
				aexp->Interpret(ctx->next);
			}
		}
	}
	else {
		cout << "������������" << endl;
	}
}
