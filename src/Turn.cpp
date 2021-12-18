#include "Turn.h"

Patient Turn::getPatient()
{
	return patient;
}
Date Turn::getDate()
{
	return date;
}
Service* Turn::getService()
{
	return service;
}

Turn::Turn(Patient patient, Date date, Service* service)
{
	this->patient = patient;
	this->date = date;
	this->service = service;
}

ostream& operator << (ostream& output, const Turn& turn)
{
	output << "\n----------------------\n";

	output << "patient info:\n";
	output << turn.patient;
	output << "patient date:\n";
	output << turn.date;
	output << "patient service:\n";
	output << turn.service->getType();

	output << "\n----------------------\n";

	return output;
}