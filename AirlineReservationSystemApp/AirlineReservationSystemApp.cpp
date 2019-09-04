// AirlineReservationSystemApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"


using namespace std;
using namespace AirlineReservationSystemApp;

int displayMenu();
void makeReservation(Database& db);

int main()
{
	Database passengerDB;

	while (true)
	{
		int choice = displayMenu();
		switch (choice)
		{
		case 0: 
			return 0;
		case 1:
			makeReservation(passengerDB);
			break;
		case 2:
			//showFlightSchedule();
			break;
		case 3:
			//showPassengerDetails();
			break;
		case 4:
			//showFlightDetails();
			break;
		case 5:
			//showPassengerTicketDetails();
			break;
		default :
			cerr << "Unknown command" << endl;
			break;
		}
	}
	return 0;
}

int displayMenu()
{
	int choice;

	cout << endl;
	cout << "Airline Reservation System" << endl;
	cout << "---------------------------" << endl;
	cout << "1. Reserve a seat" << endl;
	cout << "2. Flight schedule" << endl;
	cout << "3. Passenger details" << endl;
	cout << "4. Flight details" << endl;
	cout << "5. Passenger ticket information" << endl;
	cout << "0. Quit" << endl;
	cout << "-----------------------" << endl;
	cout << endl;

	cin >> choice;

	return choice;

}

void makeReservation(Database& db)
{
	string firstName;
	string lastName;
	string emailAddress;
	string passportNumber;
	 
	cout << " firstName? ";
	cin >> firstName;
	cout << " lastName? ";
	cin >> lastName;
	cout << "emailAddress? ";
	cin >> emailAddress;
	cout << "passportNumber? ";
	cin >> passportNumber;

	db.makeReservation(firstName, lastName, emailAddress, passportNumber);

}