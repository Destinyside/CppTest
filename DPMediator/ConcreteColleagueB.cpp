#include "ConcreteColleagueB.h"

#include "Mediator.h"


ConcreteColleagueB::ConcreteColleagueB(Mediator* mdr)
{
	mediator = mdr;
	cout << "����ConcreteColleagueB" << endl;
}


ConcreteColleagueB::~ConcreteColleagueB()
{
	cout << "����ConcreteColleagueB" << endl;
}

void ConcreteColleagueB::Changed()
{
	Notify();
}

void ConcreteColleagueB::Update()
{
	cout << "ConcreteColleagueB���յ���������" << endl;
}

void ConcreteColleagueB::Notify()
{
	cout << "ConcreteColleagueB֪ͨ�н��߸���" << endl;
	mediator->ColleagueChanged();
}