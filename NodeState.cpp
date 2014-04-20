#include "NodeState.h"

NodeState::NodeState(void)
{
	maxPower=0.0;
	maxLoad=0.0;
	currentPower=0.0;
	currentLoad=0.0;
}

NodeState::~NodeState(void)
{
}

// Getters
double NodeState::getMaxPower(void) {
	return this->maxPower;
}
double NodeState::getMaxLoad(void) {
	return this->maxLoad;
}
double NodeState::getCurrentPower(void) {
	return this->currentPower;
}
double NodeState::getCurrentLoad(void) {
	return this->currentLoad;
}
// Setters
void NodeState::setMaxPower(double maxPower) {
	this->maxPower = maxPower;
}
void NodeState::setMaxLoad(double maxLoad) {
	this->maxLoad = maxLoad;
}
void NodeState::setCurrentPower(double currentPower) {
	this->currentPower = currentPower;
}
void NodeState::setCurrentLoad(double currentLoad) {
	this->currentLoad = currentLoad;
}
