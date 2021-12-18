#include "Managment.h"

Managment::Managment()
{
	currentBudget = 0;
}

void Managment::addPatient(Turn t)
{
	patients.push(t);
}

Turn Managment::servicePatient()
{
	Turn frontMan = patients.front();

	currentBudget += frontMan.getService()->getPrice();
	patients.pop();

	return frontMan;
}

int Managment::getQueueLength()
{
	return patients.size();
}
int Managment::getCurrentBudget()
{
	return currentBudget;
}