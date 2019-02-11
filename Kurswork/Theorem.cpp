#include "Theorem.h"



Theorem::Theorem()
{
}


Theorem::~Theorem()
{
}

Theorem::Theorem(string statement_, string proof_)
{
	this->statement = statement_;
	this->proof = proof_;
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

string Theorem::GetProof()
{
	return this->proof;
}

string Theorem::GetStatement()
{
	return this->statement;
}

void Theorem::operator=(Lemma obj)
{
	this->statement = obj.GetStatement();
	this->proof = obj.GetProof();
}

void Theorem::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement;
	out << "\nProof:\n" << this->proof;
	out.close();
}