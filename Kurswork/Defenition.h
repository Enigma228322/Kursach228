#pragma once
#include "Concept.h"
using namespace std;

class Defenition : public Concept
{
public:
	Defenition();
	~Defenition();
	Defenition(string statement_);
private:
	string statement;
};

