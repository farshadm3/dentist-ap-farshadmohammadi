#pragma once

#ifndef __PATIENT_H__
#define _PATIENT_H__

#include <string>

using namespace std;

class Patient
{
private:
	string name;
	int age;
	bool haveHeartProblem;
public:
	Patient();
	Patient(string, int, bool);

	void setName(string);
	void setAge(int);
	void setHeartProblem(bool);

	string getName();
	int getAge();
	bool getHeartProblem();

	friend ostream& operator << (ostream&, const Patient&);
	friend istream& operator >> (istream&, Patient&);
};
#endif