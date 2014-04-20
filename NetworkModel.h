#pragma once

#include "SimulationDriver.h"
#include "NetworkFactory.h"
#include "Network.h"

class NetworkModel : public SimulationDriver
{
protected:
	Network * network;
	NetworkFactory networkFactory;
public:
	NetworkModel(void);
	~NetworkModel(void);
};
