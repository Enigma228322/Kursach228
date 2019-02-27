#include "Axiom.h"



Axiom::Axiom()
{
}


Axiom::~Axiom()
{
}

Axiom::Axiom(string statement_)
{
	this->statement = statement_;
}

void Axiom::SetStatement(string statement_)
{
	statement = statement_;
}

void Axiom::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement;
}

string Axiom::GetStatement()
{
	return statement;
}
