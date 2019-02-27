#pragma once
#include "Lemma.h"
#include <vector>

class Theorem
{
private:
	string statement, proof;
	vector <Lemma> lemma;
public:
	Theorem();
	~Theorem();
	Theorem(string statement, string proof);
	void AddLemma(string statement, string proof);
	void SetStatement(string statement_);
	void SetProof(string proof_);
	void PutToFile(string filename);
	string GetStatement();
	string GetProof();
};