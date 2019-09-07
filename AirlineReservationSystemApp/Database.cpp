#include<iostream>
#include "Database.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	// make reservation
	Passenger& Database::addPassenger(const string& firstName, const string& lastName, const string& emailAddress, const string& passportNumber)
	{
		Passenger thePassenger(firstName, lastName, emailAddress, passportNumber);
		thePassenger.setSeatNumber(mNextPassengerNumber++);
		pPassengers.push_back(thePassenger);

		return pPassengers[pPassengers.size() - 1];
	}

	Passenger& Database::getPassenger(int newSeatNumber)
	{
		for (auto& passenger : pPassengers)
		{
			if (passenger.getSeatNumber() == newSeatNumber)
			{
				return passenger;
			}
		}
		throw logic_error("No passenger found");

	}	

	Flight& Database::addFlight(const std::string& flightNumber, const string& departureCity, const string& arrivalCity, int seatNumber)
	{
		Flight theFlight (flightNumber, departureCity, arrivalCity, seatNumber);
		theFlight.setFlightSeatNumber(mNextSeatNumber++);		
		fFlight.push_back(theFlight);

		return fFlight[fFlight.size() - 1];
	}
}