#pragma once
#include<string>
#include <vector>

namespace AirlineReservationSystemApp
{
	class Flight
	{
	public:	
		Flight() = default;
		Flight(int flightNumber, const std::string& departureCity, const std::string& arrivalCity, int availableSeats);
		
		void display() const;

		//getters and setters
		void setFlightNumber(int flightNumber);
		int getFlightNumber() const;

		void setDepartureCity(const std::string departureCity);
		const std::string& getDepartureCity() const;

		void setArrivalCity(const std::string arrivalCity);
		const std::string& getArrivalCity() const;			

		void setAvailableSeats(int availableSeats);
		int getAvailableSeats() const;		

	private:
		int mFlightNumber;
		std::string mDepartureCity;
		std::string mArrivalCity;		
		int mAvailableSeats;		
	};
}
