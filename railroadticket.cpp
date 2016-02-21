#include "railroadticket.h"

RailroadTicket::RailroadTicket(string passengerName, string from, string to, string type,
                               int trainNumber, int coachNumber, int seatNumber)
{
    _passengerName = passengerName;
    _from = from;
    _to = to;
    _type = type;
    _train = trainNumber;
    _coach = coachNumber;
    _seat = seatNumber;
    _id = _ticketCount++;
}

RailroadTicket::~RailroadTicket()
{

}

string RailroadTicket::getPassengerName()
{
    return _passengerName;
}

string RailroadTicket::getFromLocation()
{
    return _from;
}

string RailroadTicket::getToLocation()
{
    return _to;
}

string RailroadTicket::getTicketType()
{
    return _type;
}

int RailroadTicket::getTrainNumber()
{
    return _train;
}

int RailroadTicket::getCoachNumber()
{
    return _coach;
}

int RailroadTicket::getSeatNumber()
{
    return _seat;
}

int RailroadTicket::getTicketId()
{
    return _id;
}

string RailroadTicket::toString()
{
    return "Ticket ID: " + to_string(getTicketId()) + "\nPassenger name: " + getPassengerName()
            + "\nFrom: " + getFromLocation() + "\nTo: " + getToLocation()
            + "\nTicket type: " + getTicketType()
            + "\nTrain number: " + to_string(getTrainNumber())
            + "\nCoach number: " + to_string(getCoachNumber())
            + "\nSeat number: " + to_string(getSeatNumber());
}

int RailroadTicket::_ticketCount = 0;
