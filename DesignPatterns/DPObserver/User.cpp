#include<iostream>
#include "User.h"
using namespace std;

User::User(char* name)
{
	uname = name;
	std::cout << "����User ��" << name << std::endl;
}

User::~User()
{
	std::cout << "����User" << uname << std::endl;
}

void User::update(char* story)
{
	std::cout << "User ��" << uname << " ���� �� "<< story << std::endl;
}
