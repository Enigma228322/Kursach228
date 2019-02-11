#pragma once
#include <string>
using namespace std;
class IApproval
{
public:
	virtual void SetStatement(string filename) = 0;
	virtual void SetProof(string str) = 0;
	virtual void PutToFile(string str) = 0;
	virtual string GetStatement() = 0;
	virtual string GetProof() = 0;
};

