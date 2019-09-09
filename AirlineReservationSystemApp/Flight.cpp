#include<iostream>
#include "Flight.h"
#include "Passenger.h"
#include "Database.h"
#include<iomanip>

using namespace std;

namespace AirlineReservationSystemApp
{
	Flight::Flight(int flightNumber, const std::string& departureCity, const std::string& arrivalCity, int availableSeats) : 
		           mFlightNumber(flightNumber), mDepartureCity(departureCity), mArrivalCity(arrivalCity), mAvailableSeats(availableSeats)
	{	
	}

	void Flight::setFlightNumber(int flightNumber)
	{
		mFlightNumber = flightNumber;
	}

	int Flight::getFlightNumber() const
	{
		return mFlightNumber;
	}

	void Flight::setDepartureCity(const std::string departureCity)
	{
		mDepartureCity = departureCity;
	}

	const string& Flight::getDepartureCity() const
	{
		return mDepartureCity;
	}

	void Flight::setArrivalCity(const std::string arrivalCity)
	{
		mArrivalCity = arrivalCity;
	}

	const string& Flight::getArrivalCity() const
	{
		return mArrivalCity;
	}	
	
	void Flight::setAvailableSeats(int availableSeats)
	{
		mAvailableSeats = availableSeats;
	}

	int Flight::getAvailableSeats() const
	{
		return mAvailableSeats;
	}

	void Flight::display() const
	{	
		/*cout << "Flight number" << "\t" << "Departure city" << "\t" << "Arrival city" << "\t" "Available seats" << "\t" << endl;*/

		cout.setf(ios::left);
		cout << setw(15) << getFlightNumber() << "\t" << setw(15) << getDepartureCity() << "\t" << setw(15) << getArrivalCity() << "\t"  << setw(15) << getAvailableSeats() << endl;
	}
}
