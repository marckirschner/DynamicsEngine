#pragma once
#include "Node.h"
#include "DynamicsObject.h"

class Network : DynamicsObject
{
private:
	Node ** nodeNet;
	int nodeIndex;
	int nodeCount;
public:
	Network(void);
	~Network(void);

	Node ** getNodeNet(void);
	int getNodeCount();
	void setNodeNet(Node ** nodeList);
	void setNodeCount(int count);
};
