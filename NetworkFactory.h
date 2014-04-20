#pragma once

#include "Network.h"
#include "Node.h"

class NetworkFactory
{
public:
	NetworkFactory(void);
	~NetworkFactory(void);
    Network * buildNetwork();
};
