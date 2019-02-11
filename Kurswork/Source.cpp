#include <iostream>
#include <fstream>
#include <string>
#include "Lemma.h"
#include "Theorem.h"
#include "Axiom.h"
#include "Concept.h"
#include "Defenition.h"

#define DefenitionFile "Defenition.txt"
#define ConceptFile "Concept.txt"
#define AxiomFile "Axiom.txt"
#define LemmaFile "Lemma.txt"
#define TheoremFile "Theorem.txt"
#define Lemma1 "lemma1.txt"
#define Lemma2 "lemma2.txt"

using namespace std;

struct Pair
{
	Pair(string st, string pr)
	{
		statement = st;
		proof = pr;
	}
	string statement, proof;
};

Pair ReadFile(string filename)
{
	ifstream in(filename);
	string statement, proof, temp;
	int read = 0;
	while (read != -1)
	{
		in >> temp;
		if (temp == "Statement:" ||
			temp == "Statement")
		{
			read = 1;
			continue;
		}
		
		if (temp == "Proof:" ||
			temp == "Proof")
		{
			read = 2;
			continue;
		}

		if (read == 1) statement += temp + " ";
		if (read == 2) proof += temp + " ";
		if (in.eof()) read = -1; // break
	}
	return Pair(statement, proof);
}

int main()
{
	Pair temp1 = ReadFile(Lemma1);
	Pair temp2 = ReadFile(Lemma2);
	Lemma l1(temp1.statement, temp1.proof), l2(temp2.statement, temp2.proof);
	Theorem t;
	t = l1 + l2;
	cout << t.GetStatement() << "\n" << t.GetProof() << "\n";
	t.PutToFile(TheoremFile);
	system("pause");
	return 0;
}