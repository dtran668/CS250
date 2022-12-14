#include "DoublyList.h"
#include <iostream>
using namespace std;

int main()
{
     DoublyList emptyList;

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

    /* // TEST CASE FOR QUESTION #45
    cout << "TEST CASE FOR QUESTION #45:\n"
         << "Calling List: 8 9 4 2 5\n"
         << "Parameter List: 16 12 11 13 10\n"
         << "Swap the second calling node with first parameter node...\n\n"
         << "Expected Calling List: 8 16 4 2 5\n";
    myList.swapSecondNodeCallingFirstNodeParam(otherList);

    cout << "Result Calling List foward: ";
    myList.printForward();

    cout << "\nResult Calling list backward: ";
    myList.printReverse();

    cout << "\n\nExpected Parameter List: 9 12 11 13 10\n"
         << "Result Parameter List forward: ";
    otherList.printForward();
    
    cout << "\nResult Parameter List backward: ";
    otherList.printReverse(); */

    /* // TEST CASE FOR QUESTION #73
    cout << "TEST CASE FOR QUESTION #73:\n"
        << "Calling List:\n"
        << "Parameter List: 16 12 11 13 10\n"
        << "Copying elements of parameter list to calling list..\n\n"
        << "Expected Calling List: 16 12 11 13 10\n";
    emptyList.copyParamToCalling( otherList );

    cout << "Result Calling List foward: ";
    emptyList.printForward();

    cout << "\nResult Calling list backward: ";
    emptyList.printReverse(); */

    /* // TEST CASE FOR QUESTION #77
    cout << "TEST CASE FOR QUESTION #77:\n"
         << "Calling List: 8 9 4 2 5\n"
         << "Parameter List: 16 12 11 13 10\n"
         << "Append elements of calling list to parameter list...\n\n"
         << "Expected Calling List: 8 9 4 2 5\n";
    myList.addCallingToParam(otherList);

    cout << "Result Calling List foward: ";
    myList.printForward();

    cout << "\nResult Calling list backward: ";
    myList.printReverse();

    cout << "\n\nExpected Parameter List: 16 12 11 13 10 8 9 4 2 5\n"
         << "Result Parameter List forward: ";
    otherList.printForward();
    
    cout << "\nResult Parameter List backward: ";
    otherList.printReverse();
 */
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

    int arr[7] =  { 4, 9, 11, 5, 6, 13, 1 };
    int numOfElements = 7;

    /* // TEST CASE FOR QUESTION #81
    cout << "TEST CASE FOR QUESTION #81:\n"
        << "Calling List is empty...\n"
        << "Copy array elements into calling list...\n"
        << "Parameter Array: 4 9 11 5 6 13 1\n"
        << "Expected: \nCalling List: 4 9 11 5 6 13 1\n";
    cout << "\nResult:";
    emptyList.copyArrToList( arr, numOfElements );

    cout << "\nResult Calling List foward: ";
    emptyList.printForward();

    cout << "\nResult Calling list backward: ";
    emptyList.printReverse(); */


    cout << "\n"
         << endl;
    system("pause");
    return 0;
}