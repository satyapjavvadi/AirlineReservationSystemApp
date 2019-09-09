#include<iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& passportNumber, int ticketNumber, const std::string& dateofJourney, int flightNumber, int seatNumber)
		: mFirstName(firstName), mLastName(lastName), mPassportNumber(passportNumber), mTicketNumber(ticketNumber), mDateofJourney(dateofJourney), mFlightNumber(flightNumber), mSeatNumber(seatNumber)
	{
	}

	void Passenger::setFirstName(const std::string firstName)
	{
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return mFirstName;
	}

	void Passenger::setLastName(const std::string lastName)
	{
		mLastName = lastName;
	}

	const string& Passenger::getLastName() const
	{
		return mLastName;
	}

	void Passenger::setPassportNumber(const std::string passportNumber)
	{
		mPassportNumber = passportNumber;
	}

	const std::string& Passenger::getPassportNumber() const
	{
		return mPassportNumber;
	}

	void Passenger::setTicketNumber(int ticketNumber)
	{
		mTicketNumber = ticketNumber;
	}

	int Passenger::getTicketNumber() const
	{
		return mTicketNumber;
	}

	void Passenger::setDateofJourney(const std::string dateofJourney)
	{
		mDateofJourney = dateofJourney;
	}

	const std::string& Passenger::getDateofJourney() const
	{
		return mDateofJourney;
	}

	void Passenger::setFlightNumber(int flightNumber)
	{

		mFlightNumber = flightNumber;
	}

	int Passenger::getFlightNumber() const
	{
		return mFlightNumber;
	}

	void Passenger::setSeatNumber(int seatNumber)
	{
		mSeatNumber = seatNumber;
	}

	int Passenger::getSeatNumber() const
	{
		return mSeatNumber;
	}
}