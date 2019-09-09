#include<iostream>
#include "Database.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	// make reservation
	Passenger& Database::addPassenger(const string& firstName, const string& lastName, const string& passportNumber, const string& dateofJourney, int flightNumber, int seatNumber)
	{
		Passenger newPassenger(firstName, lastName, passportNumber, getNextTicketNumber(), dateofJourney, flightNumber, seatNumber);
		mPassengers.push_back(newPassenger);

		return mPassengers[mPassengers.size() - 1];
	}

	Passenger& Database::getPassenger(const std::string& firstName,	const std::string& lastName)
	{
		for (auto& passenger : mPassengers)
		{
			if (passenger.getFirstName() == firstName && passenger.getLastName() == lastName)
			{
				return passenger;
			}
		}

		throw logic_error("No passenger found");
	}	

	Flight& Database::addFlight(int flightNumber, const string& departureCity, const string& arrivalCity)
	{
		Flight newFlight(flightNumber, departureCity, arrivalCity, kMaxFlightCapacity);
		mFlights.push_back(newFlight);

		return newFlight;
	}

	vector<Flight>& Database::getAllFlights()
	{
		return mFlights;
	}

	Flight& Database::getFlight(int flightNumber)
	{
		for (auto& flight : mFlights)
		{
			if (flight.getFlightNumber() == flightNumber)
				return flight;
		}

		throw logic_error("No flight found");
	}

	vector<Passenger>& Database::getAllPasssengers()
	{
		return mPassengers;
	}

	int Database::getNextTicketNumber()
	{
		return mNextTicketNumber++;
	}
}