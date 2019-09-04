#include<iostream>
#include "Database.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Passenger& Database::makeReservation(const string& firstName, const string& lastName, const string& emailAddress, const string& passportNumber)
	{
		Passenger thePassenger(firstName, lastName, emailAddress, passportNumber);
		thePassenger.setPassengerSeatNumber(mNextPassengerNumber++);
		thePassenger.makeReservation();
		pPassenger.push_back(thePassenger);

		return pPassenger[pPassenger.size() - 1];
	}

	Passenger& Database::getPassenger(int passengerSeatNumber)
	{
		for (auto& Passenger : pPassenger)
		{
			if (Passenger.reserveSeat() == passengerSeatNumber)
			{
				return Passenger;
			}
		}
		throw logic_error("No passenger found");
	}

	Passenger& Database::getPassenger(const string& firstName, const string& lastName, const string& emailAddress, const string& passportNumber)
	{
		for (auto& Passenger : pPassenger)
		{
			if (Passenger.getFirstName() == firstName && Passenger.getLastName() == lastName)
			{
				return Passenger;
			}
		}
		throw logic_error("No passneger found");
	}

	void Database::displayAll() const
	{
		for (const auto& Passenger : pPassenger)
		{
			Passenger.makeReservation();
		}

	}

	void Database::displayAvailableseats() const
	{
		for (const auto& Passenger : pPassenger)
		{
			if (Passenger.reserveSeat())
				Passenger.makeReservation();
		}
	}

	void Database::displayBookedSeats() const
	{
		for (const auto& Passenger : pPassenger)
		{
			if (!Passenger.reserveSeat())
				Passenger.makeReservation();
		}
	}
}