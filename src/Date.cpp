#include "Date.h"

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1400;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

ostream& operator << (ostream& output, const Date& date)
{
	output << date.day << "/" << date.month << "/" << date.year << endl;
	return output;
}

istream& operator >> (istream& input, Date& date)
{
	cout << "enter day month year inorder(seperate with 'space' or 'Enter')\n";;
	input >> date.day >> date.month >> date.year;

	return input;
}