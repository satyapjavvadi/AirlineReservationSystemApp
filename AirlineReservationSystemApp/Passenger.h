#pragma once
#include<string>

namespace AirlineReservationSystemApp
{	
	const int kDefaultStartingSeatnumber = 1;
	class Passenger
	{
	public:

		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& passportNumber);
		
		void display() const;

		//getters and setters
		void setFirstName(const std::string firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string lastName);
		const std::string& getLastName() const;

		void setEmailAddress(const std::string emailAddress);
		const std::string& getEmailAddress() const;

		void setPassportNumber(const std::string passportNumber);
		const std::string& getPassportNumber() const;

		void setSeatNumber(int newSeatNumber);
		int getSeatNumber() const;	

		bool isReserved() const;

	private:

		// passenger info

		std::string pFirstName;
		std::string pLastName;
		std::string pEmailAddress;
		std::string pPassportNumber;
		int pSeatNumber = kDefaultStartingSeatnumber;	
		bool pReservation = false;
	};
}