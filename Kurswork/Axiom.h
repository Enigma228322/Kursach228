#pragma once

#include <string>
#include "IApproval.h"
#include <iostream>
#include <fstream>

using namespace std;

class Axiom : public IApproval
{
public:
	Axiom();
	~Axiom();
	Axiom(string statement_);
	void SetStatement(string filename)override;
	void PutToFile(string filename)override;
	string GetStatement()override;
private:
	string statement;
};

