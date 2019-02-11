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

string Lemma::GetProof()
{
	return this->proof;
}

Lemma Lemma::operator+(Lemma obj)
{
	return Lemma(this->statement + obj.statement,
		this->proof + obj.proof);
}
