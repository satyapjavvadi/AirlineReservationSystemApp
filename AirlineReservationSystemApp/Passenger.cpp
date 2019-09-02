#include<iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Passenger::Passenger(const std::string& firstName, const std::string& lastName) : pFirstName(firstName), pLastName(lastName)
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

	bool Passenger::reserveSeat() const
	{
		return pSeatNumber;
	}

	
	void Passenger::makeReservation() const
	{
		cout << "Passenger: " << getLastName() << ", " << getFirstName() << endl;
		cout << "-------------------------" << endl;		
		cout << "Passenger EmailAddress: " << getEmailAddress() << endl;
		cout << "Passenger PassportNumber: " << getPassportNumber() << endl;
		cout << (reserveSeat() ? "seat number alloted" : "seat number is not assigned") << endl;
		cout << endl;
	}
}