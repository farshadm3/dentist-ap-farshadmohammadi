#include "Patient.h"
#include <iostream>

Patient::Patient()
{
	this->name = "";
	this->age = 18;
	this->haveHeartProblem = false;
}

Patient::Patient(string name, int age, bool haveHeartProblem)
{
	this->name = name;
	this->age = age;
	this->haveHeartProblem = haveHeartProblem;
}

void Patient::setName(string name)
{
	this->name = name;
}
void Patient::setAge(int)
{
	this->age = age;
}
void Patient::setHeartProblem(bool)
{
	this->haveHeartProblem = haveHeartProblem;
}

string Patient::getName()
{
	return name;
}
int Patient::getAge()
{
	return age;
}
bool Patient::getHeartProblem()
{
	return haveHeartProblem;
}


ostream& operator << (ostream&output, const Patient&patient)
{
	output << patient.name << "," << patient.age << endl;
	output << "have heart problem?";

	if (patient.haveHeartProblem)
		output << "yes\n";
	else
		output << "no\n";

	return output;
}

istream& operator >> (istream&input, Patient&patient)
{
	cout << "enter name:\t";
	getline(cin, patient.name);

	cout << "enter age:\t";
	input >> patient.age;

	cin.ignore();

	cout << "have heartProblem?(y/n)\t";
	char ans;
	input >> ans;

	if (ans == 'y')
		patient.haveHeartProblem = true;
	else
		patient.haveHeartProblem = false;


	return input;
}