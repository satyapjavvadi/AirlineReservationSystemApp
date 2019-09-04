#include<iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& passportNumber) 
		: pFirstName(firstName), pLastName(lastName), pEmailAddress(emailAddress), pPassportNumber(passportNumber)
	{
		//pFirstName = firstName;
		//pLastName = lastName;
	}

	void Passenger::setFirstName(const std::string firstName)
	{
		pFirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return pFirstName;
	}

	void Passenger::setLastName(const std::string lastName)
	{
		pLastName = lastName;
	}

	const string& Passenger::getLastName() const
	{
		return pLastName;
	}

	void Passenger::setEmailAddress(const std::string emailAddress)
	{
		pEmailAddress = emailAddress;
	}

	const string& Passenger::getEmailAddress() const
	{
		return pEmailAddress;
	}

	void Passenger::setPassportNumber(const std::string passportNumber)
	{
		pPassportNumber = passportNumber;
	}

	const string& Passenger::getPassportNumber() const
	{
		return pPassportNumber;
	}

	void Passenger::setPassengerSeatNumber(int seatNumber)
	{
		pPassengerSeatNumber = seatNumber;
	}

	int Passenger::getPassengerSeatNumber() const
	{
		return pPassengerSeatNumber;
	}

	bool Passenger::reserveSeat() const
	{
		return pSeatNumber;
	}

	
	void Passenger::makeReservation() const
	{
		cout << "Reservation Details:" << endl;
		cout << "-------------------------" << endl;	
		cout << "Name: " << getLastName() << ", " << getFirstName() << endl;			
		cout << "EmailAddress: " << getEmailAddress() << endl;
		cout << "PassportNumber: " << getPassportNumber() << endl;
		cout << "Alloted seat number: " << getPassengerSeatNumber() << endl;
		//cout << (reserveSeat() ? "seat number alloted" : "seat number is not assigned") << endl;
		cout << endl;
	}
}