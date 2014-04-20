#include "NetworkFactory.h"

NetworkFactory::NetworkFactory(void)
{
}

NetworkFactory::~NetworkFactory(void)
{
}

Network * NetworkFactory::buildNetwork() {
	Network * network = new Network();

	int nodeCount = 2;
	Node ** nodeNet = new Node*[nodeCount];
	for (int i=0; i<nodeCount; i++) {
		nodeNet[i] = new Node();
	}
	nodeNet[0]->connectIO(nodeNet[1]);
	nodeNet[0]->setNodeType(CONSUMER);
	nodeNet[1]->setNodeType(GENERATOR);
	nodeNet[1]->getState()->setCurrentPower(100.0);
	network->setNodeNet(nodeNet);
	network->setNodeCount(nodeCount);
	return network;
}