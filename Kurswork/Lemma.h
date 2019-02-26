#pragma once
#include "Axiom.h"

class Lemma : public Axiom
{
private:
	string statement, proof;
public:
	Lemma();
	~Lemma();// Вызвать конструктор Lemma в классе Theorem
	Lemma(string statement, string proof);
	void SetProof(string filename);
	string GetStatement();
	string GetProof();
	Lemma operator+(Lemma obj);
};