#include "ConcreteColleagueC.h"

#include "Mediator.h"


ConcreteColleagueC::ConcreteColleagueC(Mediator* mdr)
{
	mediator = mdr;
	cout << "����ConcreteColleagueC" << endl;
}


ConcreteColleagueC::~ConcreteColleagueC()
{
	cout << "����ConcreteColleagueC" << endl;
}

void ConcreteColleagueC::Changed()
{
	Notify();
}

void ConcreteColleagueC::Update()
{
	cout << "ConcreteColleagueC���յ���������" << endl;
}

void ConcreteColleagueC::Notify()
{
	cout << "ConcreteColleagueC֪ͨ�н��߸���" << endl;
	mediator->ColleagueChanged();
}