#include "Concept.h"



Concept::Concept()
{
}


Concept::~Concept()
{
}

Concept::Concept(string statement_)
{
	this->statement = statement_;
}

void Concept::SetStatement(string filename)
{
	ofstream out(filename);
	string temp_statement;
	cout << "Enter a statement:\n";
	cin >> temp_statement;
	out << "Statement:\n" + temp_statement;
	this->statement = temp_statement;
	out.close();
}

string Concept::GetStatement()
{
	return this->statement;
}
