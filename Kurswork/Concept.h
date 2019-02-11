#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "IApproval.h"

using namespace std;
class Concept : public IApproval
{
public:
	Concept();
	~Concept();
	Concept(string statement_);
	void SetStatement(string filename)override;
	void PutToFile(string filename)override;
	string GetStatement()override;
private:
	string statement;
};

