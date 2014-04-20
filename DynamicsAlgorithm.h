#pragma once

class DynamicsAlgorithm
{
public:
	DynamicsAlgorithm(void);
	~DynamicsAlgorithm(void);
	virtual void execute(void)=0;
};
