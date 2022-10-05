#include "DoublyList.h"
#include <iostream>
using namespace std;

void DoublyList::insertNewNode( int newValue )
{
    first = new Node( newValue, nullptr, first );
    first->getNext()->setPrev( first ); // Remember to link the second node to the first node

    ++count;
}

// 17. Delete the first node of the calling object
void DoublyList::deleteFirstNode()
{
    if( count == 0 )
    {
        cerr << "List is empty.\n";
    }
    else
    {
        Node *secondNode = first->getNext();
        delete first;

        first = secondNode;
        first->setPrev( nullptr );

        --count;
    }
}

// 18. Swap the first node with the last node
void DoublyList::swapFirstLastNodes()
{
    if( count < 2 )
    {
        cerr << "List is too small.\n";
    }
    else
    {
        Node *tempFirst = first;
        Node *tempLast = last;
        first = last;
        last = tempFirst;

        //Adjust pointers
        tempFirst->getNext()->setPrev( first );
        first->setNext( tempFirst->getNext() );

        tempLast->getPrev()->setNext( last );
        last->setPrev( tempLast->getPrev() );

        first->setPrev( nullptr );
        last->setNext( nullptr );
        //Not sure why, but if these two lines are put first, it breaks the code.
        //So just nullptr lines at the end
    }
}

// 37. Swap the first node of the calling object with the first node of the parameter object.
void DoublyList::swapFirstNodes( DoublyList& otherList )
{
    if( count == 0 || otherList.count == 0)
    {
        cerr << "List is empty.\n";
    }
    else
    {
        Node *tempCallingNode = first->getNext();
        Node *tempParameterNode = otherList.first->getNext();

        first = otherList.first;
        otherList.first = tempCallingNode->getPrev();

        first->setNext( tempCallingNode );
        otherList.first->setNext( tempParameterNode );

        tempCallingNode->setPrev( first );
        tempParameterNode->setPrev( otherList.first );

        first->setPrev( nullptr );
        otherList.first->setPrev( nullptr );
    } //***not sure if else-block works with count = 1 for either list
}

// 39. Swap the first node of the calling object with the last node of the parameter object.
void DoublyList::swapFirstCallNodeLastParamNode( DoublyList& otherList )
{
    if( count == 0 || otherList.count == 0 )
    {
        cerr << "List is empty.\n";
    }
    else
    {
        Node *tempCallingNode = first->getNext();
        Node *tempParamNode = otherList.last->getPrev();

        first = otherList.last;
        otherList.last = tempCallingNode;

        
    }
}

// 45. Swap the second node of the calling object with the first node of the parameter object.
void DoublyList::swapSecondNodeCallingFirstNodeParam( DoublyList& parameterList )
{
    if( count < 2 || parameterList.count < 1 )
    {
        cerr << "One of the lists is too small.\n";
    }
    else
    {
        Node *callingSecondNodeTemp = first->getNext();
        Node *callingSecondNodeHead = first->getNext()->getNext();
        Node *parameterFirstNodeHead = parameterList.first->getNext();

        first->setNext( parameterList.first );
        first->getNext()->setNext( callingSecondNodeHead );
        first->getNext()->setPrev( first );
        callingSecondNodeHead->setPrev( first->getNext() );

        parameterList.first = callingSecondNodeTemp;
        parameterList.first->setNext( parameterFirstNodeHead );
        parameterList.first->setPrev( nullptr );
        parameterFirstNodeHead->setPrev( parameterList.first );
        

        /* Node *callingSecondNode = first->getNext();
        Node *callingSecondNodeHead = callingSecondNode->getNext();

        Node *parameterFirstNode = parameterList.first;
        Node *parameterFirstNodeHead = parameterList.first->getNext();

        Node *temp = callingSecondNode;
        callingSecondNode = parameterFirstNode;
        parameterList.first = temp;

        cout << "\n*************" << callingSecondNodeHead->getData() << "************" << endl;
        callingSecondNode->setNext( callingSecondNodeHead );
        parameterList.first->setNext( parameterFirstNodeHead ); */


    }
}

// 73. Given an empty calling object, copy one or more elements
// of the parameter object into the calling object.
void DoublyList::copyParamToCalling( DoublyList& parameterList )
{
    if( parameterList.count == 0 )
    {
        cerr << "The parameter list is empty.\n";
    }
    else
    {
        first = new Node( parameterList.first->getData(), nullptr, nullptr );
        last = first;

        if( parameterList.count > 1 )
        {
            Node *current = first;
            Node *parameterCurrent = parameterList.first->getNext();
            for( int i = 0; i < parameterList.count - 1; ++i )
            {
                current->setNext( new Node( parameterCurrent->getData(), current, nullptr) );
                current->getNext()->setPrev( current );

                current = current->getNext();
                parameterCurrent = parameterCurrent->getNext();
            }

            last = current;
        }

        count = parameterList.count;
    }
}

// 77. Given a non-empty calling object and a non-empty parameter object, append (add to the end) one or more
// elements of the calling object to the end of the parameter object.
void DoublyList::addCallingToParam( DoublyList& parameterList )
{
    Node *current = first;
    for( int i = 0; i < count; ++i )
    {
        parameterList.last = new Node( current->getData(), parameterList.last, nullptr );
        parameterList.last->getPrev()->setNext( parameterList.last ); //connect pointer forward

        current = current->getNext();
    }

    parameterList.count += count;
}

// 79. Swap calling object and parameter object. Think how to implement this one efficiently without any loops.
void DoublyList::swapLists( DoublyList& compareList )
{
   //Swap count
   int tempNum = count;
   count = compareList.count;
   compareList.count = tempNum;
   
   //Swap first pointer
   Node* tempNode = first;
   first = compareList.first;
   compareList.first = tempNode;
   
   //Swap last pointer
   tempNode = last;
   last = compareList.last;
   compareList.last = tempNode;
}

// 81. Given an empty calling object, copy one or more elements
// of the array into the calling object.
void DoublyList::copyArrToList( int arr[] , int numOfElements )
{
    if( numOfElements == 0 )
    {
        cout << "Array is empty.\n";
    }
    else
    {
        /* first = new Node( arr[0], nullptr, nullptr );
        first->setNext( new Node( arr[1], first, nullptr ) );
        
        Node *current = first->getNext();
        Node *trailCurrent = first;

        for( int i = 2; i < numOfElements; ++i )
        {
            trailCurrent->setNext( current);
            trailCurrent = current;

            current->setNext( new Node( arr[i], trailCurrent , nullptr ) );

            current = current->getNext();

            last = current;
        } */ 


        // Second version: more compact and efficient
        first = new Node( arr[0], nullptr, nullptr );
        last = first;

        if( numOfElements > 1 )
        {
            Node *current = first;
            for( int i = 1; i < numOfElements; ++i )
            {
                current->setNext( new Node( arr[i], current, nullptr ) );

                current = current->getNext();
            }

            last = current;
        }

        count = numOfElements;
    }
}

