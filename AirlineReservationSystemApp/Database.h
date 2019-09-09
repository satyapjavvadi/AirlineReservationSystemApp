#pragma once
#include<iostream>
#include<vector>
#include "Passenger.h"
#include "Flight.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	const int kMaxFlightCapacity = 100;
	const int kFirstTicketNumber = 1;

	class Database
	{
	public:
		vector<Flight>& getAllFlights();
		Flight& addFlight(int flightNumber, const std::string& departureCity, const std::string& arrivalCity);
		Flight& getFlight(int flightNumber);
		
		vector<Passenger>& getAllPasssengers();
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& passportNumber, const string& dateofJourney, int flightNumber, int seatNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName);

		int getNextTicketNumber();

	private:
		// list of all flights
		vector<Flight> mFlights;

		// list of all passengers who made a reservation
		vector<Passenger> mPassengers;

		int mNextTicketNumber = kFirstTicketNumber;
	};
}