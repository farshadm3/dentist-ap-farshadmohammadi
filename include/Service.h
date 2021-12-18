#pragma once

#ifndef __SERVICE_H__
#define _SERVICE__

#include <iostream>
#include <string>

using namespace std;

class Service
{
protected:
	string type;
	double price;
public:
	Service();
	Service(string,double);
	virtual void setType(string);
	virtual void setPrice(double);

	virtual double getPrice();
	virtual string getType();
};


class Ortodensi :public Service
{
public:
	Ortodensi();
};

class JermGiri :public Service
{
public:
	JermGiri();
};

class Implant :public Service
{
public:
	Implant();
};

class Lamineyt :public Service
{
public:
	Lamineyt();
};
#endif