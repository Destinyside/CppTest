#include "Colleague.h"

#include "Mediator.h"

Colleague::Colleague()
{
	cout << "����Colleague" << endl;
}


Colleague::~Colleague()
{
	cout << "����Colleague" << endl;
}

void Colleague::Notify()
{
	Changed();
}
