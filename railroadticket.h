#ifndef RAILROADTICKET_H
#define RAILROADTICKET_H

#include <string>

using namespace std;

class RailroadTicket
{
public:
    RailroadTicket(string passengerName, string from, string to, string type,
                   int trainNumber, int coachNumber, int seatNumber);
    ~RailroadTicket();

    string getPassengerName();
    string getFromLocation();
    string getToLocation();
    string getTicketType();
    int getTrainNumber();
    int getCoachNumber();
    int getSeatNumber();
    int getTicketId();

    string toString();

private:
    string _passengerName;
    string _from;
    string _to;
    string _type;
    int _train;
    int _coach;
    int _seat;
    int _id;

    static int _ticketCount;
};

#endif // RAILROADTICKET_H
