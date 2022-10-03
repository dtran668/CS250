#include "AnyList.h"
#include <iostream>
using namespace std;

// 1. Insert a new node, storing a given value, to the front of the calling object.
// (Example given in the mock exam for both singly- and doubly- lists.)
void AnyList::insertNewNode( int newValue )
{
    ptrToFirst = new Node( newValue, ptrToFirst );

    ++count;
}


// 2. Insert a new node, storing a given value, at the end of the calling object.
void AnyList::insertNodeAtEnd( int newValue )
{
    Node *current = ptrToFirst;
    
    if( ptrToFirst == nullptr)
    {
        ptrToFirst = new Node( newValue, nullptr );
    }
    else
    {
        for( int i = 0; i < count - 1; ++i ) // while( current->getPtrToNext() != nullptr )
        {
            current = current->getPtrToNext();
        }
        current->setPtrToNext( ( new Node( newValue, nullptr ) ) );
    }

    ++count;
}

// 3. Insert a new node, storing a given value, between the first and second node in the calling object.
void AnyList::insertBetween( int newValue )
{
    ptrToFirst->setPtrToNext( new Node( newValue, ptrToFirst->getPtrToNext() ) );
    ++count;
} //**does not tests for all possible cases (empty list, etc.)

// 4. Insert a new node, storing a given value, before the last node of the calling object.
void AnyList::insertSecondToLast( int newValue )
{
    Node *current = ptrToFirst;

    for( int i = 0; i < count - 2; ++i )
    {
        current = current->getPtrToNext();
    }
    current->setPtrToNext( new Node( newValue, current->getPtrToNext() ) );

    ++count;
} //**does not tests for all possible cases (empty list, etc.)

// 5. Given two int parameters, value1 and value2, insert a new node, storing value1, before the node that stores value2.
void AnyList::insertBeforeValue( int newValue, int storedValue )
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else if( ptrToFirst->getData() == storedValue )
    {
        ptrToFirst = new Node( newValue, ptrToFirst );
    }
    else
    {
        bool found = false;
        Node *current = ptrToFirst;
        while( !found && current != nullptr )
        {
            if( current->getPtrToNext() != nullptr && current->getPtrToNext()->getData() == storedValue )
            {
                current->setPtrToNext( new Node( newValue, current->getPtrToNext() ) );
                ++count;

                found = true;
            }
            else
            {
                current = current->getPtrToNext();
            }
        }
        if( !found )
        {
            cout << "Stored value not in list.\n";
        }
    }

    ++count;
}

// 6. Given two int parameters, value1 and value2, insert a new node, storing value1, after the node that stores value2.
void AnyList::insertAfterValue( int insertValue, int storedValue )
{

    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else if( ptrToFirst->getData() == storedValue )
    {
        ptrToFirst->setPtrToNext( new Node( insertValue, ptrToFirst->getPtrToNext() ) );
    }
    else
    {
        bool found = false;
        Node *current = ptrToFirst;

        while( !found && current != nullptr )
        {
            if( current->getData() == storedValue )
            {
                current->setPtrToNext( new Node( insertValue, current->getPtrToNext() ) );
                ++count;

                found = true;
            }
            else
            {
                current = current->getPtrToNext();
            }
        }
        if( !found )
        {
            cout << "Stored value not in list.\n";
        }
    }
}

// 7. Delete the first node of the calling object.
void AnyList::deleteFirstNode()
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else
    {
        Node *current = ptrToFirst;
        ptrToFirst = ptrToFirst->getPtrToNext();

        delete current;
        current = nullptr;

        --count;
    }
}


// 8. Delete the second node of the calling object.
void AnyList::deleteSecondNode()
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else if( count < 2 )
    {
        cerr << "List is too small for a second node.\n";
    }
    else
    {
        Node *current = ptrToFirst->getPtrToNext(); //point to node 2

        ptrToFirst->setPtrToNext( current->getPtrToNext() );

        delete current;
        current = nullptr;

        --count;
    }
}

// 9. Delete the last node of the calling object.
void AnyList::deleteLastNode()
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else if( count == 1 )
    {
        delete ptrToFirst;
        ptrToFirst = nullptr;

        --count;
    }
    else
    {
        Node *current = ptrToFirst->getPtrToNext();
        Node *trailCurrent = ptrToFirst;

        int currentCount = 0;
        while( currentCount < count - 2)
        {
            trailCurrent = current;
            current = current->getPtrToNext();

            ++currentCount;
        }

        trailCurrent->setPtrToNext( nullptr );
        delete current;
        current = nullptr;

        --count;
    }
}

// 10. Delete the node before-last of the calling object.
void AnyList::deleteSecondLastNode()
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else if( count < 2 )
    {
        cerr << "List is too small for a second node.\n";
    }
    else
    {
        Node *current = ptrToFirst->getPtrToNext();
        Node *trailCurrent = ptrToFirst;

        for( int i = 0; i < count - 3; ++i )
        {
            trailCurrent = current;
            current = current->getPtrToNext();
        }
        trailCurrent->setPtrToNext( current->getPtrToNext() );
        delete current;
        current = nullptr;
        --count;
    }
}

// 11. Replace the value of the first node of the calling object with the value passed by the parameter.
void AnyList::replaceFirstNode( int newValue )
{
    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else
    {
        ptrToFirst->setData( newValue );
    }
}

// 12. Replace the value of the last node of the calling object with the value passed by the parameter.
void AnyList::replaceLastNode( int newValue )
{
    if( ptrToFirst == nullptr) 
    {
        cerr << "List is empty.\n";
    }
    else if( count == 1 )
    {
        ptrToFirst->setData( newValue );
    }
    else
    {
        Node *current = ptrToFirst;
        
        for( int i = 0; i < count - 1; ++i )
        {
            current = current->getPtrToNext();
        }

        current->setData( newValue );
    }
}

// 13. Replace the value of the second node of the calling object with the value passed by the parameter.
void AnyList::replaceSecondNode( int newValue )
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        ptrToFirst->getPtrToNext()->setData( newValue );
    }
}

// 14. Replace the value of the second-to-last node of the calling object with the value passed by the parameter.
void AnyList::replaceSecondLastNode( int newValue )
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else if( count == 2 )
    {
        ptrToFirst->setData( newValue );
    }
    else
    {
        Node *current = ptrToFirst;

        for( int i = 0; i < count - 2; ++i )
        {
            current = current->getPtrToNext();
        }

        current->setData( newValue );
    }
}

// 15. Given two int parameters, oldValue and newValue, replace the first occurrence of the oldValue with the newValue.
void AnyList::replaceFirstOccurence( int oldValue, int newValue)
{
    bool found = false;

    Node *current = ptrToFirst;
    while( !found && current != nullptr )
    {
        if( current->getData() == oldValue )
        {
            current->setData( newValue );

            found = true;
        }
        else
        {
            current = current->getPtrToNext();
        }
    }
    if( !found )
    {
        cout << "Target value is not in list.\n";
    }
}

// 16. Given two int parameters, oldValue and newValue, replace all occurrences of the oldValue with the newValue.
void AnyList::replaceAllOldValues( int oldValue, int newValue)
{
    bool found = false;

    Node *current = ptrToFirst;
    while( current != nullptr )
    {
        if( current->getData() == oldValue )
        {
            current->setData( newValue );

            found = true;
        }
        else
        {
            current = current->getPtrToNext();
        }
    }
    if( !found )
    {
        cout << "Target value is not in list.\n";
    }
}

// 17. Traverse the calling object and search for the value passed by the parameter; return true if found and false
// if not found. Make sure you stop the loop if the value is found; no need to keep on iterating.
bool AnyList::inList( int searchValue ) const
{
    bool found = false;

    if( ptrToFirst == nullptr )
    {
        cerr << "List is empty.\n";
    }
    else
    {
        Node *current = ptrToFirst;
        while( !found && current != nullptr )
        {
            if( current->getData() == searchValue )
            {
                found = true;
            }
            else
            {
                current = current->getPtrToNext();
            }
        }
    }

    return found;
}

// 18. Swap the first node with the last node
void AnyList::swapFirstLastNode()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *current = ptrToFirst->getPtrToNext();
        Node *trailCurrent = ptrToFirst;

        for( int i = 0; i < count - 2; ++i )
        {
            trailCurrent = current;
            current = current->getPtrToNext();
        }

        Node *tempFirstValue = ptrToFirst;

        ptrToFirst = current;
        ptrToFirst->setPtrToNext( tempFirstValue->getPtrToNext() );

        current = tempFirstValue;
        trailCurrent->setPtrToNext( current );
        current->setPtrToNext( nullptr );

    }
}

// 19. Swap the value of the first node with the value of the last node.
void AnyList::swapFirstLastNodeValues()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *lastNode = ptrToFirst;
        for( int i = 0 ; i < count - 1; ++ i)
        {
            lastNode = lastNode->getPtrToNext();
        }

        int tempFirstValue = ptrToFirst->getData();
        ptrToFirst->setData( lastNode->getData() );
        lastNode->setData( tempFirstValue );
    }
}

// 20. Swap the first node with the second node.
void AnyList::swapFirstSecondNode()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *secondNode = ptrToFirst->getPtrToNext();
        Node *tempSecondNode = ptrToFirst->getPtrToNext();

        secondNode = ptrToFirst;
        secondNode->setPtrToNext( ptrToFirst->getPtrToNext()->getPtrToNext() );

        ptrToFirst = tempSecondNode;
        tempSecondNode->setPtrToNext( secondNode );

        //ptrToFirst = ptrToFirst->getPtrToNext();
        //ptrToFirst->setPtrToNext( secondNode );

    }
}

// 21. Swap the value of the first node with the value of the second node.
void AnyList::swapFirstSecondNodeValues()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        int tempFirstValue = ptrToFirst->getData();
        ptrToFirst->setData( ptrToFirst->getPtrToNext()->getData() );
        ptrToFirst->getPtrToNext()->setData( tempFirstValue );
    }
}

// 22. Swap the first node with the node before last.
void AnyList::swapFirstSecondLastNode()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *current = ptrToFirst->getPtrToNext();
        Node *trailCurrent = ptrToFirst;

        for( int i = 0; i < count - 3; ++i )
        {
            trailCurrent = current;
            current = current->getPtrToNext();
        }

        Node *tempFirstNode = ptrToFirst;
        Node *tempLastNode = current->getPtrToNext();

        ptrToFirst = current;
        ptrToFirst->setPtrToNext( tempFirstNode->getPtrToNext() );

        current = tempFirstNode;
        trailCurrent->setPtrToNext( current );
        current->setPtrToNext( tempLastNode );
    }
}

// 23. Swap the value of the first node with the value of the node before last.
void AnyList::swapFirstSecondLastNodeValues()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *current = ptrToFirst;

        for( int i = 0; i < count - 2; ++i )
        {
            current = current->getPtrToNext();
        }

        int tempFirstValue = ptrToFirst->getData();
        ptrToFirst->setData( current->getData() );
        current->setData( tempFirstValue );
    }
}

// 24. Swap the second node with the last node.
void AnyList::swapSecondNodeLastNode()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else if( count == 2 )
    {
        cout << "No changes needed.\n";
    }
    else
    {
        Node *lastNode = ptrToFirst->getPtrToNext();
        Node *trailNode = ptrToFirst;

        for( int i = 0; i < count - 2; ++i )
        {
            trailNode = lastNode;
            lastNode = lastNode->getPtrToNext();
        }

        Node *secondNode = ptrToFirst->getPtrToNext();
        Node *tempSecondNode = secondNode;

        secondNode = lastNode;
        secondNode->setPtrToNext( tempSecondNode->getPtrToNext() );
        ptrToFirst->setPtrToNext( secondNode );

        lastNode = tempSecondNode;
        lastNode->setPtrToNext( nullptr );

        trailNode->setPtrToNext( lastNode );
    } //**might be inefficient; too lazy to check
}

// 25. Swap the value of the second node with the value of the last node.
void AnyList::swapSecondNodeLastNodeValues()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else if( count == 2 )
    {
        cout << "No changes needed.\n";
    }
    else
    {
        Node *lastNode = ptrToFirst;
        
        for( int i = 0; i < count - 1; ++i )
        {
            lastNode = lastNode->getPtrToNext();
        }

        int tempSecondValue = ptrToFirst->getPtrToNext()->getData();
        ptrToFirst->getPtrToNext()->setData( lastNode->getData() );
        lastNode->setData( tempSecondValue );
    }
}

// Skipping #26 - #36 ... 

// 37. Swap the first node of the calling object with the first node of the parameter object.
void AnyList::swapFirstNodes( AnyList& otherList )
{
    if( count == 0 || otherList.count == 0 )
    {
        cerr << "One of the Lists is empty.\n";
    }
    else
    {
        Node *tempCallingNode = ptrToFirst;
        Node *tempParameterNode = otherList.ptrToFirst->getPtrToNext();

        ptrToFirst = otherList.ptrToFirst;
        ptrToFirst->setPtrToNext( tempCallingNode->getPtrToNext() );

        otherList.ptrToFirst = tempCallingNode;
        otherList.ptrToFirst->setPtrToNext( tempParameterNode );
    }
}

// 38. Swap the value of the first node of the calling object with the
// value of the first node of the parameter object.
void AnyList::swapFirstNodeValues( AnyList& otherList )
{
    if( count == 0 || otherList.count == 0 )
    {
        cerr << "One of the lists is empty.\n";
    }
    else
    {
        int tempFirstNodeValue = ptrToFirst->getData();

        ptrToFirst->setData( otherList.ptrToFirst->getData() );
        otherList.ptrToFirst->setData( tempFirstNodeValue );
    }
}

// 39. Swap the first node of the calling object with the last node of the parameter object.