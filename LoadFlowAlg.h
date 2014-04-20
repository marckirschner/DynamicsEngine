#pragma once
#include <iostream>
#include <stdio.h>

#include "DynamicsAlgorithm.h"
#include "Network.h"

class LoadFlowAlg : DynamicsAlgorithm
{
private:
	Network network;
public:
	LoadFlowAlg(Network network);
	~LoadFlowAlg(void);
	
	// Implementation of DynamicsAlgorithm Interface
	void execute(void);
};
