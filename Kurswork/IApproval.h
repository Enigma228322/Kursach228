#pragma once
#include <string>
using namespace std;
class IApproval
{
public:
	virtual void SetStatement(string filename) = 0;
	virtual void SetProof(string filename) = 0;
	virtual void PutToFile(string filename) = 0;
	virtual string GetStatement() = 0;
	virtual string GetProof() = 0;
};

