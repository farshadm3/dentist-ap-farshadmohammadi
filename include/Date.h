#pragma once

#ifndef __DATE_H__
#define _DATE_H__

#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int, int, int);

	friend ostream& operator << (ostream&, const Date&);
	friend istream& operator >> (istream&, Date&);

};
#endif