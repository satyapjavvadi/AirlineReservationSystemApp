// AirlineReservationSystemApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"
#include "Flight.h"

using namespace std;
using namespace AirlineReservationSystemApp;


int displayMenu();
void makeReservation(Database& db);
void displayAllFlights(Database& db);
void showPassengerDetails(Database& db);
void showFlightDetails(Database& db);
void showPassengerTicketDetails(Database& db);

int main()
{
	Database db;

	db.addFlight( 1 , "Seattle", "Chicago");
	db.addFlight( 2 , "Dallas", "Phoenix");

	while (true)
	{
		int choice = displayMenu();
		switch (choice)
		{
		case 0: 
			return 0;
		case 1:
			displayAllFlights(db);
			break;
		case 2:
			displayAllFlights(db);
			makeReservation(db);
			break;
		case 3:
			showPassengerDetails(db);
			break;
		case 4:
			showFlightDetails(db);
			break;
		case 5:
			showPassengerTicketDetails(db);
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
	cout << "1. Flight schedule" << endl;
	cout << "2. Reserve a seat" << endl;
	cout << "3. Passenger details" << endl;
	cout << "4. Flight details" << endl;
	cout << "5. Passenger ticket information" << endl;
	cout << "0. Quit" << endl;
	cout << "-----------------------" << endl;
	cout << endl;

	cout << "Enter a choice: ";
	cin >> choice;

	return choice;
}

void displayAllFlights(Database& db)
{
	std::vector<Flight> flights =  db.getAllFlights();
	cout << "All flights" << endl << endl;
	cout << "Flight number" << "\t" << "Departure city" << "\t" << "Arrival city" << "\t" << "Available seats" << "\t" << endl;

	for (const auto& flight : flights)
	{
		flight.display();
	}
}

void makeReservation(Database& db)
{
	string firstName;
	string lastName;
	int flightNumber;
	int seatNumber;
	string passportNumber;
	string dateofJourney;

	cout << endl << "FlightNumber: ";
	cin >> flightNumber;
	
	// check for availability
	Flight& flight = db.getFlight(flightNumber);
	int availableSeats = flight.getAvailableSeats();
	if (availableSeats < 1)
	{
		cout << "No avaialable seats in the flight";
		return;
	}
	
	cout << "First name: ";
	cin >> firstName;
	cout << "Last name: ";
	cin >> lastName;	
	cout << "Passport number: ";
	cin >> passportNumber;
	cout << "Date of journey: ";
	cin >> dateofJourney;
	
    seatNumber = kMaxFlightCapacity - availableSeats + 1;
	db.addPassenger(firstName, lastName, passportNumber, dateofJourney, flightNumber, seatNumber);

	// update flight's available seats
	flight.setAvailableSeats(availableSeats - 1);

	cout << endl << "Reservation is successful" << endl;
}

void showPassengerDetails(Database& db)
{
	string firstName;
	string lastName;

	cout << "FirstName: ";
	cin >> firstName;
	cout << "LastName: ";
	cin >> lastName;

	Passenger& passenger = db.getPassenger(firstName, lastName);
	cout << endl << "Passenger Details: " << endl;
	cout << "------------------------" << endl;
	cout << "First name: " << passenger.getFirstName() << endl;
	cout << "Last name: " << passenger.getLastName() << endl;
	cout << "Passport number: " << passenger.getPassportNumber() << endl;
}


void showPassengerTicketDetails(Database& db)
{
	string firstName;
	string lastName;

	cout << "FirstName: ";
	cin >> firstName;
	cout << "LastName: ";
	cin >> lastName;

	Passenger& passenger = db.getPassenger(firstName, lastName);
	cout << endl << "Passenger Ticket Details: " << endl;
	cout << "------------------------" << endl;
	cout << "First name: " << passenger.getFirstName() << endl;
	cout << "Last name: " << passenger.getLastName() << endl;
	cout << "Ticket Number : " << passenger.getTicketNumber() << endl;
	cout << "Date of journey: " << passenger.getDateofJourney() << endl;
	cout << "Flight number : " << passenger.getFlightNumber() << endl;
	cout << "Seat number: " << passenger.getSeatNumber() << endl;
}

void showFlightDetails(Database& db)
{
	int flightNumber;

	cout << endl << "FlightNumber: ";
	cin >> flightNumber;

	// check for availability
	Flight& flight = db.getFlight(flightNumber);

	cout << endl << "Flight number" << "\t" << "Departure city" << "\t" << "Arrival city" << "\t" << "Available seats" << "\t" << endl;
	flight.display();

}