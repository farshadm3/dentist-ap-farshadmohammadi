#include "Service.h"


Service::Service()
{
	type = "";
	price = 0;
}
Service::Service(string type, double price)
{
	this->type = type;
	this->price = price;
}

void Service::setType(string type)
{
	this->type=type;

}
void Service::setPrice(double price)
{
	this->price = price;
}

double Service::getPrice()
{
	return price;
}
string Service::getType()
{
	return type;
}

Ortodensi::Ortodensi()
{
	setType("ortidensi");
	setPrice(1000000);
}

JermGiri::JermGiri()
{
	setType("jermgiri");
	setPrice(500000);
}

Implant::Implant()
{
	setType("implant");
	setPrice(1500000);
}

Lamineyt::Lamineyt()
{
	setType("lamineyt");
	setPrice(2000000);
}