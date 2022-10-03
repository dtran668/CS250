#ifndef ANYLIST_H
#define ANYLIST_H
#include <string> // Need to include for nullptr.
class Node
{
public:
Node() : data(0), ptrToNext(nullptr) {}
Node(int theData, Node *newPtrToNext) 
: data(theData), ptrToNext(newPtrToNext){}
Node* getPtrToNext() const { return ptrToNext; }
int getData( ) const { return data; }
     void setData(int theData) { data = theData; }
void setPtrToNext(Node *newPtrToNext) 
{ ptrToNext = newPtrToNext; }
~Node(){}
private:
     int data;
     Node *ptrToNext; // Pointer that points to next node.
};
class AnyList
{
public:
AnyList() : ptrToFirst(nullptr), count(0) {}
void insertFront(int);
void print() const;
void clearList();

// for Question #1
void insertNewNode( int );
// #2
void insertNodeAtEnd( int );
// #3
void insertBetween( int );
// #4
void insertSecondToLast( int );
// #5
void insertBeforeValue( int, int );
// #6
void insertAfterValue( int, int );
// #7
void deleteFirstNode();
// #8
void deleteSecondNode();
// #9
void deleteLastNode();
// #10
void deleteSecondLastNode();
// #11
void replaceFirstNode( int );
// #12
void replaceLastNode( int );
// #13
void replaceSecondNode( int );
// #14
void replaceSecondLastNode( int );
// #15
void replaceFirstOccurence( int, int );
// #16
void replaceAllOldValues( int , int );
// #17
bool inList( int ) const;
// #18
void swapFirstLastNode();
// #19
void swapFirstLastNodeValues();
// #20
void swapFirstSecondNode();
// #21
void swapFirstSecondNodeValues();
// #22
void swapFirstSecondLastNode();
// #23
void swapFirstSecondLastNodeValues();
// #24
void swapSecondNodeLastNode();
// #25
void swapSecondNodeLastNodeValues();
// Skipping #26 - #36 ... 

// #37
void swapFirstNodes( AnyList& );
// #38
void swapFirstNodeValues( AnyList& );
// #39
void swapFirstCallLastParam( AnyList& );


~AnyList();
private:
Node *ptrToFirst;
// Pointer to point to the first node in the list.
int count;
// Variable to keep track of number of nodes in the list.
};
#endif