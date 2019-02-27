#pragma once
#include "Axiom.h"

class Lemma : public Axiom
{
private:
	string statement, proof;
public:
	Lemma();
	~Lemma();
	Lemma(string statement, string proof);
	void SetStatement(string statement_);
	void SetProof(string proof_);
	string GetStatement();
	string GetProof();
	void PutToFile(string filename);
	Lemma operator+(Lemma obj);
};