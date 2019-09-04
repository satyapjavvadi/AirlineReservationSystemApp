#pragma once
#include<iostream>
#include<vector>
#include "Passenger.h"

namespace AirlineReservationSystemApp
{
	const int kFirstPassengerNumber = 100;

	class Database
	{
	public:
		Passenger& makeReservation(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& passportNumber);
		Passenger& getPassenger(int passengerNumber);
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& passportNumber);

		void displayAll() const;
		void displayAvailableseats() const;
		void displayBookedSeats() const;

	private:
		std::vector<Passenger> pPassenger;
		int mNextPassengerNumber = kFirstPassengerNumber;

	};
}