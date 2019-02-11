#include "Lemma.h"



Lemma::Lemma()
{
}


Lemma::~Lemma()
{
}

Lemma::Lemma(string statement_, string proof_)
{
	this->statement = statement_;
	this->proof = proof_;
}

void Lemma::SetProof(string filename)
{
	ofstream out(filename);
	string temp_proof;
	cout << "Enter the lemma's proof:\n";
	cin >> temp_proof;
	out << "Proof:\n" + temp_proof;
	this->proof = temp_proof;
	out.close();
}

void Lemma::PutToFile(string filename)
{
	ofstream out(filename);
	out << "Statement:\n" << this->statement;
	out << "Proof:\n" << this->proof;
	out.close();
}

string Lemma::GetProof()
{
	return this->proof;
}

string Lemma::GetStatement()
{
	return this->statement;
}

Lemma Lemma::operator+(Lemma obj)
{
	return Lemma(this->statement + "\n" + obj.statement,
		this->proof + "\n" + obj.proof);
}
