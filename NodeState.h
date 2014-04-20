#pragma once

class NodeState
{
private:
	double maxPower;
	double maxLoad;
	double currentPower;
	double currentLoad;
public:
	NodeState(void);
	~NodeState(void);

	double getMaxPower(void);
	double getMaxLoad(void);
	double getCurrentPower(void);
	double getCurrentLoad(void);

	void setMaxPower(double maxPower);
	void setMaxLoad(double maxLoad);
	void setCurrentPower(double currentPower);
	void setCurrentLoad(double currentLoad);

};
