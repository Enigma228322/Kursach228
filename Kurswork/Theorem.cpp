#include "Theorem.h"


Theorem::Theorem()
{
}

Theorem::Theorem(string statement, string proof)
{
	this->statement = statement;
	this->proof = proof;
}

void Theorem::AddLemma(string statement, string proof)
{
	lemma.push_back(Lemma(statement, proof));
}


void Theorem::Class—omposition()
{
	Lemma temp_lemma;
	for (int i = 0; i < lemma.size(); i++)
	{
		temp_lemma = temp_lemma + lemma[i];	
	}
	this->statement = temp_lemma.GetStatement();
	this->proof = temp_lemma.GetProof();
}

Theorem::~Theorem()
{
}

void Theorem::SetStatement(string filename)
{
	ofstream out(filename);
	string temp_statement;
	cout << "Enter a statement:\n";
	cin >> temp_statement;
	out << "Statement:\n" + temp_statement;
	this->statement = temp_statement;
	out.close();
}

void Theorem::SetProof(string filename)
{
	ofstream out(filename);
	string temp_proof;
	cout << "Enter the lemma's proof:\n";
	cin >> temp_proof;
	out << "Proof:\n" + temp_proof;
	this->proof = temp_proof;
	out.close();
}

void Theorem::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement;
	out.close();
}

string Theorem::GetStatement()
{
	return statement;
}

string Theorem::GetProof()
{
	return proof;
}

//Lemma Theorem::operator+(Lemma obj)
//{
//	return Lemma(this->lemma1.GetStatement() + " " + obj.GetStatement(),
//		this->lemma1.GetProof() + " " + obj.GetProof());
//}