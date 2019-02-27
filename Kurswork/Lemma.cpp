#include "Lemma.h"



Lemma::Lemma()
{
}


Lemma::~Lemma()
{
}

Lemma::Lemma(string statement, string proof)
{
	this->statement = statement;
	this->proof = proof;
}

void Lemma::SetStatement(string statement_)
{
	statement = statement_;
}

void Lemma::SetProof(string proof_)
{
	proof = proof_;
}

string Lemma::GetStatement()
{
	return statement;
}

string Lemma::GetProof()
{
	return proof;
}

void Lemma::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement << "\n";
	out << "Proof:\n" << this->statement << "\n";
	out.close();
}

Lemma Lemma::operator+(Lemma obj)	
{
	return Lemma(this->statement + " " + obj.GetStatement(),
		this->proof + " " + obj.GetProof());
}

