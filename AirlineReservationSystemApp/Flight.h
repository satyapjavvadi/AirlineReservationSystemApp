#pragma once
#include<string>

namespace AirlineReservationSystemApp
{
	class Flight
	{
	public:	
		Flight() = default;
		Flight(const std::string& flightNumber, const std::string& departureCity, const std::string& arrivalCity, int seatNumber);
		
		void displayFlightSchedule() const;

		//getters and setters
		void setFlightNumber(const std::string flightNumber);
		const std::string& getFlightNumber() const;

		void setDepartureCity(const std::string departureCity);
		const std::string& getDepartureCity() const;

		void setArrivalCity(const std::string arrivalCity);
		const std::string& getArrivalCity() const;

		void setDepartureTime(const std::string departureTime);
		const std::string& getDepartureTime() const;

		void setArrivalTime(const std::string arrivalTime);
		const std::string& getArrivalTime() const;

		void setAvailableSeats(int availableSeats);
		int getAvailableSeats() const;

		void setTicketPrice(int ticketPrice);
		int getTicketPrice() const;

		void setFlightSeatNumber(int seatNumber);
		int getFlightSeatNumber() const;

	private:
		std::string fFlightNumber;
		std::string fDepartureCity;
		std::string fArrivalCity;
		std::string fDepartureTime;
		std::string fArrivalTime;
		int fAvailableSeats;
		int fFlightSeatNumber = -1;
		int fTicketPrice;
	};
}
