#include <iostream>
#include <stdio.h>
using namespace std;

#include "SimulationDriver.h"
#include "LoadFlowAlg.h"
#include "DynamicsAlgorithm.h"
#include "OPASim.h"

int main() {
	
	OPASim opaSim = OPASim();

	opaSim.run(100);

	cout << "Hello World\n";

	return 0;

}