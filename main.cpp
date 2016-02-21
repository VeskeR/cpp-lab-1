#include <iostream>
#include <vector>
#include "railroadticket.h"

using namespace std;

int main(int argc, char *argv[])
{
    RailroadTicket ticket("Andrey Bulat", "Kiev", "chernivtsi", "Platzkart", 118, 1, 48);

    cout << endl << endl;
    cout << "Output of get* methods:" << endl << endl;
    cout << ticket.getPassengerName() << endl;
    cout << ticket.getFromLocation() << endl;
    cout << ticket.getToLocation() << endl;
    cout << ticket.getTicketType() << endl;
    cout << ticket.getTrainNumber() << endl;
    cout << ticket.getCoachNumber() << endl;
    cout << ticket.getSeatNumber() << endl << endl;

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
    return 0;
}
