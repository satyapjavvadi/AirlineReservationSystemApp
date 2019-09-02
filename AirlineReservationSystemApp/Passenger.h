#pragma once
#include<string>

namespace AirlineReservationSystemApp
{
	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName);
		
		void makeReservation() const;

		//getters and setters
		void setFirstName(const std::string firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string lastName);
		const std::string& getLastName() const;

		void setEmailAddress(const std::string emailAddress);
		const std::string& getEmailAddress() const;

		void setPassportNumber(const std::string passportNumber);
		const std::string& getPassportNumber() const;
		
		bool reserveSeat() const;


	private:
		std::string pFirstName;
		std::string pLastName;
		std::string pEmailAddress;
		std::string pPassportNumber;
		bool pSeatNumber = false;
	};

}