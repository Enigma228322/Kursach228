#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "Axiom.h"

using namespace std;

class Lemma : public Axiom
{
public:
	Lemma();
	~Lemma();
	Lemma(string statement_, string proof_);
	void SetProof(string filename);
	string GetProof();
	Lemma operator+(Lemma obj);
private:
	string statement, proof;
};

