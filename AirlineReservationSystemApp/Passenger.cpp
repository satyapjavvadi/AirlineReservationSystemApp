#include<iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservationSystemApp
{
	Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& passportNumber)
		: pFirstName(firstName), pLastName(lastName), pEmailAddress(emailAddress), pPassportNumber(passportNumber)
	{

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

	void Passenger::setSeatNumber(int newSeatNumber)
	{
		pSeatNumber = newSeatNumber;
	}

	int Passenger::getSeatNumber() const
	{
		return pSeatNumber;
	}

	bool Passenger::isReserved() const
	{
		return pReservation;
	}


	void Passenger::display() const
	{
		cout << "Reservation Details:" << endl;
		cout << "-------------------------" << endl;
		cout << "Name: " << getLastName() << ", " << getFirstName() << endl;
		cout << "EmailAddress: " << getEmailAddress() << endl;
		cout << "PassportNumber: " << getPassportNumber() << endl;
		cout << "Alloted seat number: " << getSeatNumber() << endl;
		cout << endl;
	}
}


	/*Flight::Flight(const std::string& flightNumber, const std::string& departureCity, const std::string& arrivalCity, const std::string& departureTime,
		const std::string& arrivalTime, int availableSeats, int seatNumber) : fFlightNumber(flightNumber), fDepartureCity(departureCity), fArrivalCity(arrivalCity),
		fDepartureTime(departureTime), fArrivalTime(arrivalTime), fAvailableSeats(availableSeats), fFlightSeatNumber(seatNumber)
	{
		//fFlightNumber = flightNumber;
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

	void Flight::showFlightSchedule() const
	{
		cout << "Flight schedule:" << endl;
		cout << "-------------------------" << endl;
		cout << "Flight number: " << getFlightNumber() << endl;
		cout << "Departure city: " << getDepartureCity() << endl;
		cout << "Arrival city " << getArrivalCity() << endl;
		cout << "Departure time " << getDepartureTime() << endl;
		cout << "Arrival time" << getArrivalTime() << endl;
		cout << "Available seats" << getAvailableSeats() << endl;
		cout << "Ticket price" << getTicketPrice() << endl;
		cout << "";
		cout << endl;
	}
} */