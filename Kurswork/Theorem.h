#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "Lemma.h"

using namespace std;

class Theorem
{
public:
	Theorem();
	~Theorem();
	Theorem(string statement_, string proof_);
	void SetProof(string filename);
	void SetStatement(string filename);
	void PutToFile(string filename);
	string GetProof();
	string GetStatement();
	void operator= (Lemma obj);
private:
	string statement, proof;
};

