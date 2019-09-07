#pragma once
#include<iostream>
#include<vector>
#include "Passenger.h"
#include "Flight.h"

namespace AirlineReservationSystemApp
{
	const int kFirstPassengerNumber = 100;
	const int kFirstSeatNumber = 1;

	class Database
	{
	public:
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& passportNumber, const std::string& emailAddress);
		Passenger& getPassenger(int newSeatNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName, const std::string& passportNumber, const std::string& emailAddress);

		Flight& addFlight(const std::string& flightNumber, const std::string& departureCity, const std::string& arrivalCity, int availableSeats);
		Flight& getFlight(int seatNumber);

		void displayFlightSchedule() const;

	private:
		std::vector<Passenger> pPassengers;
		int mNextPassengerNumber = kFirstPassengerNumber;

		std::vector<Flight> fFlight;
		int mNextSeatNumber = kFirstSeatNumber;

	};
}