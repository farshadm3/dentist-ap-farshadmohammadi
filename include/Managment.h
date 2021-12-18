#pragma once

#ifndef __MANAGMENT_H__
#define _MANAGMENT__

#include <queue>
#include "Turn.h"

using namespace std;

class Managment
{
private:
	queue<Turn>patients;
	double currentBudget;
public:
	Managment();

	void addPatient(Turn);
	Turn servicePatient();

	int getQueueLength();
	int getCurrentBudget();
};
#endif