#pragma once
#include "Lemma.h"

class Theorem
{
private:
	string statement, proof;
	Lemma lemma1;
public:
	Theorem();
	~Theorem();
	Theorem(string statement, string proof);
	void Class—omposition(string lemma_statement, string lemma_proof);
	void SetStatement(string filename);
	void SetProof(string filename);
	void PutToFile(string filename);
	void SetLemma(string statement, string proof);
	string GetStatement();
	string GetProof();
	void operator=(Lemma obj);
};