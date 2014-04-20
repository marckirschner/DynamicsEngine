#include "SimulationDriver.h"

SimulationDriver::SimulationDriver(void)
{
	observerCount=0;
	dynamicsEngine = new DynamicsEngine();
	observerList = new Observer*[10];

	registerObserver((Observer*)dynamicsEngine);
}

SimulationDriver::~SimulationDriver(void)
{
}

void SimulationDriver::add(DynamicsAlgorithm * dynamicsAlgorithm) {
	this->dynamicsEngine->registerAlgorithm(dynamicsAlgorithm);
}

void SimulationDriver::add(DynamicsObject * dynamicsObject) {
	this->dynamicsEngine->registerObject(dynamicsObject);
}

void SimulationDriver::registerObserver(Observer *observer) 
{
	this->observerList[observerCount]=observer;
	observerCount++;
}

void SimulationDriver::removeObserver(Observer *observer) 
{
	for (int i=0; i<observerCount; i++) {
		if (observerList[i] == observer) {
			observerList[i]->~Observer();
			delete [] observer;
			observerCount--;
		}
	}
}

void SimulationDriver::notifyObservers() 
{
	for (int i=0; i<observerCount; i++) {
		this->observerList[i]->update();
	}
}

void SimulationDriver::run(int time)
{
	for (int i=0; i<time; i++) {
		notifyObservers();
	}
}