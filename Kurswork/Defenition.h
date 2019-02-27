#pragma once
#include "Concept.h"
using namespace std;

class Defenition : public Concept
{
public:
	Defenition();
	~Defenition();
	Defenition(string statement);
	void SetStatement(string statement_);
	void SetStr(string str_);
	string GetStr();
	string GetStatement();
private:
	string statement, str;
};

