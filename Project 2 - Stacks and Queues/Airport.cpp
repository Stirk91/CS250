#include "Airport.hpp"

//! Add an item into the queue to get on the airplane
/**
    For the Traveller pointer passed in as the parameter,
    push them into the line queue.

    @param <Traveller*> traveller
    @return <void>
*/
void Airport::LineUp(Traveller* traveller)
{
	airportQueue.Push(traveller);
}

//! Get the person at the front of the line
/**
    Get the person at the front of the queue and return them.

    @return <Traveller*>
*/
Traveller* Airport::NextInLine()
{
	Traveller* nextTraveller = airportQueue.Front();
	airportQueue.Pop();
	return nextTraveller;
    //return nullptr; // placeholder
}

//! Returns whether the waiting room is empty
/**
    Return whether the airport (waiting room) is empty.
    It is empty if the size of the queue is 0.

    @return <bool>
*/
bool Airport::IsEmpty()
{
	if (airportQueue.Size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
    //return false; // placeholder
}

//! Get the amount of people waiting in the queue
/**
    Return the amount of people in the waiting queue

    @return <int>
*/
int Airport::WaitingCount()
{
	return airportQueue.Size();
    //return -1; // placeholder
}

//! Set the maximum amount of people allowed on an airplane
/**
    Set the value of the m_maxCapacity member variable
    to the size passed in as a prameter.

    @param <int> size
    @return <void>
*/
void Airport::SetMaxCapacity(int size)
{
	m_maxCapacity = size;
}

//! Return the maximum capacity of an airplane
/**
    Return the value of m_maxCapacity

    @return <int>
*/
int Airport::GetMaxCapacity()
{
	return m_maxCapacity;
    //return -1; // placeholder
}
