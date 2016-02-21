#include <iostream>
#include <vector>
#include "railroadticket.h"
#include "railroadpassenger.h"

using namespace std;

int main(int argc, char *argv[])
{
    RailroadTicket ticket("Andrey Bulat", "Kiev", "chernivtsi", "Platzkart", 118, 1, 48);

    cout << endl << endl
         << "Output of get* methods:" << endl << endl
         << ticket.getPassengerName() << endl
         << ticket.getFromLocation() << endl
         << ticket.getToLocation() << endl
         << ticket.getTicketType() << endl
         << ticket.getTrainNumber() << endl
         << ticket.getCoachNumber() << endl
         << ticket.getSeatNumber() << endl << endl;

    cout << "Output of toString() method:" << endl << endl;
    cout << ticket.toString() << endl << endl;

    vector<RailroadTicket> tickets;
    tickets.push_back(ticket);
    tickets.push_back(RailroadTicket("Olexiy Miroshnik", "Kiev", "Lviv", "Platzkart", 404, 4, 2));
    tickets.push_back(RailroadTicket("Billy Milligan", "Somewhere", "Nowhere", "Deluxe", 42, 42, 42));

    cout << "Example of work with vector<RailroadTicket>:" << endl << endl;
    for (int i = 0; i < tickets.size(); i++)
    {
        cout << "Ticket #" << i + 1 << endl;
        cout << tickets[i].toString() << endl << endl;
    }

    RailroadPassenger p1;
    p1.firstName = "Andrew";
    p1.lastName = "Bulat";
    p1.ticketId = 0;

    cout << endl << "Working with structures:" << endl;
    cout << "First name: " + p1.firstName << endl
         << "Last name: " + p1.lastName << endl
         << "Ticket ID: " << p1.ticketId << endl;

    return 0;
}
