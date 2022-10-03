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
