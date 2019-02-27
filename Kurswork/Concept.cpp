#include "Concept.h"



Concept::Concept()
{
	statement = "";
}


Concept::~Concept()
{
}

Concept::Concept(string statement_)
{
	this->statement = statement_;
}

void Concept::SetStatement(string statement)
{
	this->statement = statement;
}

void Concept::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << statement;
	out.close();
}

string Concept::GetStatement()
{
	return this->statement;
}
