#include "DynamicsEngine.h"
#include "DynamicsAlgorithm.h"


DynamicsEngine::DynamicsEngine(void)
{
	dynamicsAlgorithmList = new DynamicsAlgorithm*[2];
	dynamicsObjectList = new DynamicsObject*[2];
	count=0;
	countObj++;
}

DynamicsEngine::~DynamicsEngine(void)
{
}

void DynamicsEngine::registerAlgorithm(DynamicsAlgorithm *dynAlg) 
{
	dynamicsAlgorithmList[count] = dynAlg;
	count++;
}

void DynamicsEngine::run(void) {
	for (int i=0; i<count; i++) {
		dynamicsAlgorithmList[i]->execute();
	}
}

void DynamicsEngine::registerObject(DynamicsObject *dynObj) {
	dynamicsObjectList[countObj] = dynObj;
	countObj++;
}

void DynamicsEngine::update(void) {
	this->run();
}