#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include <string>
#include <iostream>
class Node
{
public:
Node() : data(0), prev(nullptr), next(nullptr) {}
Node(int theData, Node* prevLink, Node* nextLink)
: data(theData), prev(prevLink), next(nextLink) {}
int getData() const { return data; }
Node* getPrev() const { return prev; }
Node* getNext() const { return next; }
void setData(int theData) { data = theData; }
void setPrev(Node* prevLink) { prev = prevLink; }
void setNext(Node* nextLink) { next = nextLink; }
~Node(){}
private:
int data;   // To simplify, we are using only one piece of data.
Node* prev;
Node* next;
};
class DoublyList
{
public:
DoublyList() : first(nullptr), last(nullptr), count(0) {}
void insertFront(int newData);
void printForward() const;
void printReverse() const;
void clearList();

// for Question #1
void insertNewNode( int );

// #7
void deleteFirstNode();

// #18
void swapFirstLastNodes();

// 37
void swapFirstNodes( DoublyList& );

// #79
void swapLists( DoublyList& );

// #39
void swapFirstCallNodeLastParamNode( DoublyList& );

~DoublyList();
private:
    // Pointer to the first node on the list.
Node *first;
    // Pointer to the last node on the list.
Node *last;
// Number of nodes in the list.
int count;
};
#endif