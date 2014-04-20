#include "Network.h"
#include "NodeType.h"
#include <iostream>
using namespace std;

Network::Network(void)
{

}

Network::~Network(void)
{
}

Node ** Network::getNodeNet(void)
{
	return this->nodeNet;
}
int Network::getNodeCount() 
{
	return this->nodeCount;
}

void Network::setNodeNet(Node ** nodeList) {
	this->nodeNet = nodeList;
}

void Network::setNodeCount(int count) {
	this->nodeCount = count;
}