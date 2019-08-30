// AirlineReservationSystemApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int displayMenu();

int main()
{
	while (true)
	{
		int choice = displayMenu();
		switch (choice)
		{
		case 0: 
			return 0;
		case 1:
			//reserveSeat();
			break;
		case 2:
			//showFlightSchedule();
			break;
		case 3:
			//showPassengerDetails();
			break;
		case 4:
			//showFlightDetails();
			break;
		case 5:
			//showPassengerTicketDetails();
			break;
		default :
			cerr << "Unknown command" << endl;
			break;
		}
	}
	return 0;
}

int displayMenu()
{
	int choice;

	cout << endl;
	cout << "Airline Reservation System" << endl;
	cout << "---------------------------" << endl;
	cout << "1. Reserve a seat" << endl;
	cout << "2. Flight schedule" << endl;
	cout << "3. Passenger details" << endl;
	cout << "4. Flight details" << endl;
	cout << "5. Passenger ticket information" << endl;
	cout << "0. Quit" << endl;
	cout << "-----------------------" << endl;
	cout << endl;

	cin >> choice;

	return choice;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
