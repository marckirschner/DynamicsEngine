#pragma once
#include "NetworkModel.h"
#include "Network.h"
#include "NetworkFactory.h"

class OPASim : public NetworkModel
{
public:
	OPASim(void);
	~OPASim(void);

	// When this is implemented, I will extend the Observer interface
	// and register this with a Threaded Timer. Then run this method in the 
	// update method
	void start();
};
