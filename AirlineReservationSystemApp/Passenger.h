#pragma once
#include<string>

namespace AirlineReservationSystemApp
{		
	class Passenger
	{
	public:

		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName, const std::string& passportNumber, int ticketNumber, const std::string& dateofJourney, int flightNumber, int seatNumber);
		
		//getters and setters
		void setFirstName(const std::string firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string lastName);
		const std::string& getLastName() const;	

		void setPassportNumber(const std::string passportNumber);
		const std::string& getPassportNumber() const;

		void setTicketNumber(int ticketNumber);
		int getTicketNumber() const;

		void setDateofJourney(const std::string dateofJourney);
		const std::string& getDateofJourney() const;

		void setFlightNumber(int flightNumber);
		int getFlightNumber() const;

		void setSeatNumber(int seatNumber);
		int getSeatNumber() const;	


	private:
		// passenger info
		std::string mFirstName;
		std::string mLastName;
		std::string mPassportNumber;
		int mTicketNumber;
		std::string mDateofJourney;
		int mFlightNumber;		
		int mSeatNumber;
	};
}