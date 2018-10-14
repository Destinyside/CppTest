#include "ConcreteColleagueA.h"

#include "Mediator.h"

ConcreteColleagueA::ConcreteColleagueA(Mediator* mdr)
{
	mediator = mdr;
	cout << "����ConcreteColleagueA" << endl;
}


ConcreteColleagueA::~ConcreteColleagueA()
{
	cout << "����ConcreteColleagueA" << endl;
}

void ConcreteColleagueA::Changed()
{
	Notify();
}

void ConcreteColleagueA::Update()
{
	cout << "ConcreteColleagueA���յ���������" << endl;
}

void ConcreteColleagueA::Notify()
{
	cout << "ConcreteColleagueA֪ͨ�н��߸���" << endl;
	mediator->ColleagueChanged();
}

