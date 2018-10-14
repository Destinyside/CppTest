#include "Composite.h"

Composite::Composite(char* name)
{
	cname = name;
	std::cout << "����Composite �� " << name << std::endl;
}

Composite::~Composite()
{
	list<Component*> tmp = this->CList;
	for each (Component* c in tmp)
	{
		delete c;
	}
	std::cout << "����Composite �� " << cname << std::endl;
}

void Composite::Operation()
{
	std::cout << "Composite �� " << cname << " ��Operation" << std::endl;
	list<Component*> tmp = this->CList;
	for each (Component* c in tmp)
	{
		c->Operation();
	}
}

void Composite::Add(Component * c)
{
	this->CList.push_back(c);
	std::cout << this->CList.size() << endl;
}

void Composite::Remove(Component * c)
{
	this->CList.remove(c);
}

void Composite::getChild(int index)
{
	;
}