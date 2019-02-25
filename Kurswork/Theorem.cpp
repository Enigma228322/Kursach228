#include "Theorem.h"


Theorem::Theorem()
{
}

Theorem::Theorem(string statement, string proof)
{
	this->statement = statement;
	this->proof = proof;
}


void Theorem::Class—omposition(string lemma_statement, string lemma_proof)
{
	Lemma lemma2 = Lemma(lemma_statement, lemma_proof); 
	*this = lemma1 + lemma2;
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

void Theorem::SetLemma(string statement, string proof)
{
	lemma1 = Lemma(statement, proof);
}

string Theorem::GetStatement()
{
	return statement;
}

string Theorem::GetProof()
{
	return proof;
}

void Theorem::operator=(Lemma obj)
{
	this->statement = obj.GetStatement();
	this->proof = obj.GetProof();
}

