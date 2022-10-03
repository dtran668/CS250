#include "DoublyList.h"
#include <iostream>
using namespace std;

int main()
{
    DoublyList myList;

    myList.insertFront(5);
    myList.insertFront(2);
    myList.insertFront(4);
    myList.insertFront(9);
    myList.insertFront(8);

    /*  // TEST CASE FOR QUESTION #1
     cout << "TEST CASE FOR QUESTION #1:\n"
         << "Current List: 8 9 4 2 5\n"
         << "Insert to Front: 3\n"
         << "Expected List Forwards: 3 8 9 4 2 5\n";
     myList.insertNewNode(5);
     cout << "Result Forwards: ";
     myList.printForward();
     cout << "\nExpected List Backwards: 5 2 4 9 8 3\n"
         << "Result Backwards: ";
     myList.printReverse(); */

    DoublyList otherList;

    otherList.insertFront(10);
    otherList.insertFront(13);
    otherList.insertFront(11);
    otherList.insertFront(12);
    otherList.insertFront(16);

    /* // TEST CASE FOR QUESTION #17
    cout << "TEST CASE FOR QUESTION #17:\n"
         << "Current List: 8 9 4 2 5\n"
         << "Delete the first node...\n"
         << "Expected List Forwards: 9 4 2 5\n";
     myList.deleteFirstNode();
     cout << "Result Forwards: ";
     myList.printForward();
     cout << "\nExpected List Backwards: 5 2 4 9\n"
         << "Result Backwards: ";
     myList.printReverse(); */

    /* // TEST CASE FOR QUESTION #18
    cout << "TEST CASE FOR QUESTION #18:\n"
         << "Current List: 8 9 4 2 5\n"
         << "Swap the first and last node...\n"
         << "Expected List Forwards: 5 9 4 2 8\n";
    myList.swapFirstLastNodes();
    cout << "Result Forwards: ";
    myList.printForward();
    cout << "\nExpected List Backwards: 8 2 4 9 5\n"
         << "Result Backwards: ";
    myList.printReverse(); */

    // TEST CASE FOR QUESTION #37
    cout << "TEST CASE FOR QUESTION #37:\n"
         << "Calling List: 8 9 4 2 5\n"
         << "Parameter List: 16 12 11 13 10\n"
         << "Swap the first nodes in each list...\n\n"
         << "Expected Calling List: 16 9 4 2 5\n";
    myList.swapFirstNodes(otherList);

    cout << "Result Calling List foward: ";
    myList.printForward();

    cout << "\nResult Calling list backward: ";
    myList.printReverse();

    cout << "\n\nExpected Parameter List: 8 12 11 13 10\n"
         << "Result Parameter List forward: ";
    otherList.printForward();
    
    cout << "\nResult Parameter List backward: ";
    otherList.printReverse();

    /* // TEST CASE FOR QUESTION #79
    cout << "TEST CASE FOR QUESTION #79:\n"
        << "Calling List: 8 9 4 2 5\n"
        << "Parameter List: 16 12 11 13 10\n"
        << "Swaps the first node in each list...\n"
        << "Expected:\nCalling List: 16 12 11 13 10\n"
        << "Parameter List: 8 9 4 2 5\n";
    cout << "\nResult:\n";
    myList.swapLists( otherList );
    cout << "Calling List: ";
    myList.printForward();
    cout << "\nParameter List: ";
    otherList.printForward(); */

    cout << "\n"
         << endl;
    system("pause");
    return 0;
}