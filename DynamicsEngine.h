#pragma once

#include "DynamicsAlgorithm.h"
#include "DynamicsObject.h"
#include "Observer.h"

class DynamicsEngine : Observer
{
private:
	DynamicsObject **dynamicsObjectList;
	DynamicsAlgorithm **dynamicsAlgorithmList;
	int count;
	int countObj;
public:
	DynamicsEngine(void);
	~DynamicsEngine(void);
	void registerAlgorithm(DynamicsAlgorithm *dynAlg);
	void registerObject(DynamicsObject *dynObj);
	void run(void);
	
	// Implementation of Observer Interface
	void update(void);
};
