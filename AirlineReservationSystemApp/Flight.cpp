#include<iostream>
#include "Flight.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Flight::Flight(const std::string& flightNumber, const std::string& departureCity, const std::string& arrivalCity, int seatNumber) : 
		           fFlightNumber(flightNumber), fDepartureCity(departureCity), fArrivalCity(arrivalCity), fFlightSeatNumber(seatNumber)
	{
		
	}

	void Flight::setFlightNumber(const std::string flightNumber)
	{
		fFlightNumber = flightNumber;
	}

	const string& Flight::getFlightNumber() const
	{
		return fFlightNumber;
	}

	void Flight::setDepartureCity(const std::string departureCity)
	{
		fDepartureCity = departureCity;
	}

	const string& Flight::getDepartureCity() const
	{
		return fDepartureCity;
	}

	void Flight::setArrivalCity(const std::string arrivalCity)
	{
		fArrivalCity = arrivalCity;
	}

	const string& Flight::getArrivalCity() const
	{
		return fArrivalCity;
	}

	void Flight::setDepartureTime(const std::string departureTime)
	{
		fDepartureTime = departureTime;
	}

	const string& Flight::getDepartureTime() const
	{
		return fDepartureTime;
	}

	void Flight::setArrivalTime(const std::string arrivalTime)
	{
		fArrivalTime = arrivalTime;
	}

	const string& Flight::getArrivalTime() const
	{
		return fArrivalTime;
	}

	void Flight::setAvailableSeats(int availableSeats)
	{
		fAvailableSeats = availableSeats;
	}

	int Flight::getAvailableSeats() const
	{
		return fAvailableSeats;
	}

	void Flight::setTicketPrice(int ticketPrice)
	{
		fTicketPrice = ticketPrice;
	}

	int Flight::getTicketPrice() const
	{
		return fTicketPrice;
	}

	void Flight::setFlightSeatNumber(int seatNumber)
	{
		fFlightSeatNumber = seatNumber;
	}

	int Flight::getFlightSeatNumber() const
	{
		return fFlightSeatNumber;
	}

	void Flight::displayFlightSchedule() const
	{	
		cout << "Available flights to reserve a seat" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Flight number" << "\t" << "Departure city" << "\t" << "Arrival city" << "\t" << "Departure time" << "\t" << "Arrival time" << "\t" << "Available seats" << "\t" << endl;
		cout << "111" << "\t\t" << "Seattle" << "\t\t" << "Chicago" << "\t\t" << "8:00 am" << "\t\t" << "6:00 pm" << "\t\t" << " 1, 2, 3, 4, 5" << "\t" << endl;
		cout << "222" << "\t\t" << "Phoenix" << "\t\t" << "Seattle" << "\t\t" << "9:00 am" << "\t\t" << "11:00 am" << "\t" << " 11, 12, 13, 14, 15" << "\t" << endl;
		cout << "333" << "\t\t" << "New york" << "\t" << "LAs vegas" << "\t" << "6:00 am" << "\t\t" << "9:00 pm" << "\t\t" << " 21, 22, 23, 24, 25" << "\t" << endl;
		cout << "444" << "\t\t" << "Sanfransico" << "\t" << "Idaho" << "\t\t" << "10:00 am" << "\t" << "2:00 pm" << "\t\t" << " 31, 32, 33, 34, 35" << "\t" << endl;

		cout << "Please enter the flight details to reserve a seat " << endl;
	}
}
