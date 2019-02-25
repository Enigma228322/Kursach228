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
	return proof;
}

Lemma Lemma::operator+(Lemma obj)
{
	return Lemma(this->statement + " " + obj.GetStatement(),
		this->proof + " " + obj.GetProof());
}
