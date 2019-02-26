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
	void Class—omposition();
	void AddLemma(string statement, string proof);
	void SetStatement(string filename);
	void SetProof(string filename);
	void PutToFile(string filename);
	string GetStatement();
	string GetProof();
};