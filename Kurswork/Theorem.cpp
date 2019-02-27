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

Theorem::~Theorem()
{
}

void Theorem::SetStatement(string statement_)
{
	statement = statement_;
}

void Theorem::SetProof(string proof_)
{
	proof = proof_;
}

void Theorem::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement << "\n";
	out << "Proof:\n" << this->statement << "\n";
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