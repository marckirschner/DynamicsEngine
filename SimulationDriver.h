#pragma once

#include "DynamicsEngine.h"
#include "Subject.h"

class SimulationDriver : Subject
{
private:
	DynamicsEngine * dynamicsEngine;
	Observer ** observerList;
	int observerCount;
public:
	SimulationDriver(void);
	~SimulationDriver(void);
	void add(DynamicsAlgorithm * dynamicsAlgorithm);
	void add(DynamicsObject * dynamicsObject);
	
	// Implementation of Subject Interface
	void registerObserver(Observer *observer);
    void removeObserver(Observer *observer);
    void notifyObservers(); 
	void run(int time);
};
