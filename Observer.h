#pragma once

class Observer
{
public:
	Observer(void);
	~Observer(void);
	virtual void update(void)=0;
};
