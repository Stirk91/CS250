#include "project1_LinkedList.hpp"

Node::Node()
{
	m_ptrNext = nullptr;
	m_ptrPrev = nullptr;
    
	
	//throw runtime_error( "Node() not yet implemented" );
}

LinkedList::LinkedList()
{
	m_ptrFirst = nullptr; // initialize to nullptr
	m_ptrLast = nullptr; // initialize to nullptr

	m_itemCount = 0;

   // throw runtime_error( "LinkedList() not yet implemented" );
}

LinkedList::~LinkedList()
{
	// de-allocate memory for all Node items
	Clear();

    // throw runtime_error( "~LinkedList() not yet implemented" );
}

void LinkedList::Clear() // deletes everything one node at a time
{
	while ( ! IsEmpty() )
	{
		PopFront();
	}

    // throw runtime_error( "Clear() not yet implemented" );
}

void LinkedList::PushFront( CustomerData newData )
{
	Node* newNode = new Node;
	newNode->m_data = newData;

	if ( IsEmpty() )
	{
		m_ptrFirst = newNode;
		m_ptrLast = newNode;
	}
	else
	{
		m_ptrFirst->m_ptrPrev = newNode;
		newNode->m_ptrNext = m_ptrFirst;
		m_ptrFirst = newNode;
	}
	m_itemCount++;

    // throw runtime_error( "PushFront() not yet implemented" );
}

void LinkedList::PushBack( CustomerData newData )
{
	Node* newNode = new Node;
	newNode->m_data = newData;

	if ( IsEmpty() )
	{
		m_ptrFirst = newNode;
		m_ptrLast = newNode;
	}
	else
	{
		m_ptrLast->m_ptrNext = newNode;
		newNode->m_ptrPrev = m_ptrLast;
		m_ptrLast = newNode;
	}

	m_itemCount++;

    // throw runtime_error( "PusBack() not yet implemented" );
}

void LinkedList::PopFront() noexcept
{
	//If it is the last item
	if (m_ptrFirst == m_ptrLast)
	{
		delete m_ptrFirst;
		m_ptrFirst = nullptr;
		m_ptrLast = nullptr;		
	}
	else
	{
		Node* ptrSecond = m_ptrFirst->m_ptrNext;
		ptrSecond->m_ptrPrev = nullptr;
		delete m_ptrFirst;
		m_ptrFirst = ptrSecond;
	}
	
	m_itemCount--;
}

void LinkedList::PopBack() noexcept
{
	//If it is the last item
	if (m_ptrFirst == m_ptrLast)
	{
		delete m_ptrFirst;
		m_ptrFirst = nullptr;
		m_ptrLast = nullptr;
	}
	else
	{
		Node* ptrSecondToLast = m_ptrLast->m_ptrPrev;
		ptrSecondToLast->m_ptrNext = nullptr;
		delete m_ptrLast;
		m_ptrLast = ptrSecondToLast;
	}

	m_itemCount--;
}

CustomerData LinkedList::GetFront()
{
	if (m_ptrFirst == nullptr)
	{
		throw logic_error("The list is empty!");
	}
	else
	{
		return m_ptrFirst->m_data;
	}


   // throw runtime_error( "GetFront() not yet implemented" );
}

CustomerData LinkedList::GetBack()
{
	if (m_ptrLast == nullptr)
	{
		throw logic_error("Garbage data!");
	}
	else
	{
		return m_ptrLast->m_data;
	}

   // throw runtime_error( "GetBack() not yet implemented" );
}

CustomerData& LinkedList::operator[]( const int index )
{
	int counter = 0;
	Node* ptrCurrent = m_ptrFirst;

	// Checks if index is in range
	if (index >= m_itemCount || index < 0)
	{
		throw out_of_range("Index is out of range!");
	}
	else
	{
		while (counter != index)
		{
			// step to next node
			ptrCurrent = ptrCurrent->m_ptrNext;
			counter++;
		}
		return ptrCurrent->m_data;
	}

   // throw runtime_error( "operator[]() not yet implemented" );
}


bool LinkedList::IsEmpty()
{
	if (m_itemCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

   // throw runtime_error( "IsEmpty() not yet implemented" );
}

int LinkedList::Size()
{
	return m_itemCount;
   // throw runtime_error( "Size() not yet implemented" );
}

