#include "LoadFlowAlg.h"
#include <iostream>
using namespace std;

LoadFlowAlg::LoadFlowAlg(Network network)
{
	this->network = network;
}

LoadFlowAlg::~LoadFlowAlg(void)
{
}

void LoadFlowAlg::execute(void) {
	Node ** nodeNet = network.getNodeNet();
	int nodeCount = network.getNodeCount();

	for (int i=0; i<nodeCount; i++) {
		double p = nodeNet[i]->getState()->getCurrentPower();
		cout << p << "\n";
		//for (int j=0; j<nodeCount; j++) {
			if (nodeNet[i]->getNodeType() == GENERATOR) {
					double power = nodeNet[i]->getState()->getCurrentPower();
					double p2 = power/50.0;
					
					Node ** nodeList = nodeNet[i]->getNodeList();
					for (int x=0; x<nodeNet[i]->getNodeCount(); x++) {
						if (nodeList[x]->getNodeType() == CONSUMER && 
							nodeList[x]->getState()->getCurrentPower() <
							nodeNet[i]->getState()->getCurrentPower()) 
						{
							nodeList[x]->getState()->setCurrentPower(
								nodeList[x]->getState()->getCurrentPower()+p2);
							nodeNet[i]->getState()->setCurrentPower(power-p2);

						}
					}
				
			}
		//}
	}
}	

