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

void Axiom::SetStatement(string filename)
{
	ofstream out(filename);
	string temp_statement;
	cout << "Enter a statement:\n";
	cin >> temp_statement;
	out << "Statement:\n" + temp_statement;
	this->statement = temp_statement;
	out.close();
}

string Axiom::GetStatement()
{
	return this->statement;
}
