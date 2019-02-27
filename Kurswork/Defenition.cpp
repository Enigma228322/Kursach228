#include "Defenition.h"



Defenition::Defenition()
{
}


Defenition::~Defenition()
{
}

Defenition::Defenition(string statement_)
{
	this->statement = statement_;
}

void Defenition::SetStatement(string statement_)
{
	statement = statement_;
}

void Defenition::SetStr(string str_)
{
	str = str_;
}

string Defenition::GetStr()
{
	return str;
}

string Defenition::GetStatement()
{
	return statement;
}
