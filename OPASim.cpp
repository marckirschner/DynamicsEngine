#include "OPASim.h"
#include "LoadFlowAlg.h"
#include "NetworkFactory.h"

OPASim::OPASim(void)
{
	network = networkFactory.buildNetwork();
	LoadFlowAlg * loadFlow = new LoadFlowAlg(*network);
	this->add((DynamicsAlgorithm*)loadFlow);
}

OPASim::~OPASim(void)
{
}

