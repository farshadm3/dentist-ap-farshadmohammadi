#include <iostream>

#include "Patient.h"
#include "Date.h"
#include "Service.h"
#include "Turn.h"
#include "Managment.h"

using namespace std;

void showServiceMenu()
{
	Ortodensi d;
	JermGiri j;
	Lamineyt l;
	Implant i;
	Service* service = new Service();

	service = &d;
	cout <<"1."<< service->getType() << " " << service->getPrice() << endl;

	service = &j;
	cout <<"2." << service->getType() << " " << service->getPrice() << endl;

	service = &i;
	cout <<"3." << service->getType() << " " << service->getPrice() << endl;

	service = &l;
	cout <<"4." << service->getType() << " " << service->getPrice() << endl;
}

void addPatient(Managment& manage ,vector<Turn>&patients)
{
	Patient p;
	cin >> p;
	cout << "entered infos:\n";
	cout << p;

	Date date;
	cin >> date;
	cout << "entered date:\n";
	cout << date;

	Service* service = new Service();

	while (true)
	{
		bool flag = false;
		showServiceMenu();
		cout << "enter service:\n";
		int opt;
		cin >> opt;
		if (opt > 4 || opt < 1)
			cout << "invalid choose!try again\n";
		else
		{
			switch (opt)
			{
				case 1: 
				{
					Ortodensi* d = new Ortodensi();
					service = d;
					flag = true;
				}break;

				case 2:
				{
					JermGiri* j = new JermGiri();
					service = j;
					flag = true;
				}break;

				case 3:
				{
					Lamineyt* l = new Lamineyt();
					service = l;
					flag = true;
				}break;

				case 4:
				{
					Implant* i = new Implant();
					service = i;
					flag = true;
				}break;
			}
		}

		if (flag)
			break;
	}

	//nobat ha
	Turn t(p, date, service);
	manage.addPatient(t);
	patients.push_back(t);
	
}


void servicePatient(Managment&manage)
{
	if (manage.getQueueLength() == 0)
	{
		cout << "no one in the queue!\n";
		return;
	}

	Turn patient = manage.servicePatient();

	cout << patient;

	cout << manage.getQueueLength() << " patient are in the queue\n";
}

void showAllPatiens(vector<Turn>const&patients)
{
	int size = patients.size();
	for (int i = 0; i < size; i++)
		cout << patients[i];
}

void showStock(Managment manage)
{
	cout << "current stock:\t";
	cout << manage.getCurrentBudget() << endl;
}

int main()
{
	Managment manage;
	
	vector<Turn>patients;

	while (true)
	{
		cout << "1.add patient\n2.service patient\n3.total patients\n4.total stock\n5.exit\n";
		cout << "enter option:\t";
		
		int opt;
		cin >> opt;
		
		cin.clear();
		cin.ignore();

		switch (opt)
		{
			case 1:addPatient(manage,patients); break;
			case 2:servicePatient(manage); break;
			case 3:showAllPatiens(patients); break;
			case 4:showStock(manage); break;
			case 5:exit(0); break;
			default:cout << "invalid option!\n";
		}

	}
}