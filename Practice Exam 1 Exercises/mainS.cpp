#include "AnyList.h"
#include <iostream>
using namespace std;

int main()
{
    //For Singly-Linked Lists
    AnyList myList;

    myList.insertFront(2);
    myList.insertFront(4);
    myList.insertFront(9);
    myList.insertFront(8);

    /* // TEST CASE FOR QUESTION #1
    cout << "TEST CASE FOR QUESTION #1:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert to Front: 5\n"
        << "Expected List: 5 8 9 4 2\n";
    myList.insertNewNode(5);
    cout << "Result: ";
    myList.print(); */

    // TEST CASE FOR QUESTION #2
    /* cout << "TEST CASE FOR QUESTION #2:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert to Back: 5\n"
        << "Expected List: 8 9 4 2 5\n";
    myList.insertNodeAtEnd(5);
    cout << "Result: ";
    myList.print(); */

    // TEST CASE FOR QUESTION #3
    /* cout << "TEST CASE FOR QUESTION #3:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert between Node 1 and 2: 5\n"
        << "Expected List: 8 5 9 4 2\n";
    myList.insertBetween(5);
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #4
    cout << "TEST CASE FOR QUESTION #4:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert to Second to Last: 5\n"
        << "Expected List: 8 9 4 5 2\n";
    myList.insertSecondToLast(5);
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #5
    cout << "TEST CASE FOR QUESTION #5:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert new value before stored value: 5 4\n"
        << "Expected List: 8 9 5 4 2\n";
    myList.insertBeforeValue( 5, 4 );
    cout << "Result: ";
    myList.print(); */

    // TEST CASE FOR QUESTION #6
    /* cout << "TEST CASE FOR QUESTION #6:\n"
        << "Current List: 8 9 4 2\n"
        << "Insert new value after stored value: 5 4\n"
        << "Expected List: 8 9 4 5 2\n";
    myList.insertAfterValue( 5, 4 );
    cout << "Result: ";
    myList.print(); */

    // TEST CASE FOR QUESTION #7
    cout << "TEST CASE FOR QUESTION #7:\n"
        << "Current List: 8 9 4 2\n"
        << "Delete first node in list...\n"
        << "Expected List: 9 4 2\n";
    myList.deleteFirstNode();
    cout << "Result: ";
    myList.print();

    /* // TEST CASE FOR QUESTION #8
    cout << "TEST CASE FOR QUESTION #8:\n"
        << "Current List: 8 9 4 2\n"
        << "Delete second node in list...\n"
        << "Expected List: 8 4 2\n";
    myList.deleteSecondNode();
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #9
    cout << "TEST CASE FOR QUESTION #9:\n"
        << "Current List: 8 9 4 2\n"
        << "Delete last node in list...\n"
        << "Expected List: 8 9 4\n";
    myList.deleteLastNode();
    cout << "Result: ";
    myList.print();  */

    /* // TEST CASE FOR QUESTION #10
    cout << "TEST CASE FOR QUESTION #10:\n"
        << "Current List: 8 9 4 2\n"
        << "Delete second last node in list...\n"
        << "Expected List: 8 9 2\n";
    myList.deleteSecondLastNode();
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #11
    cout << "TEST CASE FOR QUESTION #11:\n"
        << "Current List: 8 9 4 2\n"
        << "Replace first node in list with: 5\n"
        << "Expected List: 5 9 4 2\n";
    myList.replaceFirstNode(5);
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #12
    cout << "TEST CASE FOR QUESTION #12:\n"
        << "Current List: 8 9 4 2\n"
        << "Replace last node in list with: 5\n"
        << "Expected List: 8 9 4 5\n";
    myList.replaceLastNode(5);
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #13
    cout << "TEST CASE FOR QUESTION #13:\n"
        << "Current List: 8 9 4 2\n"
        << "Replace second node in list with: 5\n"
        << "Expected List: 8 5 4 2\n";
    myList.replaceSecondNode(5);
    cout << "Result: ";
    myList.print();  */

    /* // TEST CASE FOR QUESTION #14
    cout << "TEST CASE FOR QUESTION #14:\n"
        << "Current List: 8 9 4 2\n"
        << "Replace second last node in list with: 5\n"
        << "Expected List: 8 9 5 2\n";
    myList.replaceSecondLastNode(5);
    cout << "Result: ";
    myList.print();  */

    /* // TEST CASE FOR QUESTION #15
    cout << "TEST CASE FOR QUESTION #15:\n"
        << "Current List: 8 9 4 2\n"
        << "Replace first occurence of first value in list with second value: 9 5\n"
        << "Expected List: 8 5 4 2\n";
    myList.replaceFirstOccurence( 9, 5 );
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #16 ***Modify default list for this test case
    cout << "TEST CASE FOR QUESTION #16:\n"
        << "Current List: 8 9 4 8 2\n"
        << "Replace all occurences of first value in list with second value: 9 5\n"
        << "Expected List: 5 9 4 5 2\n";
    myList.replaceAllOldValues( 8, 5 );
    cout << "Result: ";
    myList.print(); */

    /* // TEST CASE FOR QUESTION #17
    cout << "TEST CASE FOR QUESTION #17:\n"
        << "Current List: 8 9 4 2\n"
        << "Returns true if value is in list: 2\n"
        << "Expected: 1 (True)\n";
    cout << "Result: " << myList.inList(2); */

    /* // TEST CASE FOR QUESTION #18
    cout << "TEST CASE FOR QUESTION #18:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and last node...\n"
        << "Expected: 2 9 4 8\n";
    cout << "Result: ";
    myList.swapFirstLastNode();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #19
    cout << "TEST CASE FOR QUESTION #19:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and last node value...\n"
        << "Expected: 2 9 4 8\n";
    cout << "Result: ";
    myList.swapFirstLastNodeValues();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #20
    cout << "TEST CASE FOR QUESTION #20:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and second node...\n"
        << "Expected: 9 8 4 2\n";
    cout << "Result: ";
    myList.swapFirstSecondNode();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #21
    cout << "TEST CASE FOR QUESTION #21:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and second node value...\n"
        << "Expected: 9 8 4 2\n";
    cout << "Result: ";
    myList.swapFirstSecondNodeValues();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #22
    cout << "TEST CASE FOR QUESTION #22:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and second to last node...\n"
        << "Expected: 4 9 8 2\n";
    cout << "Result: ";
    myList.swapFirstSecondLastNode();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #23
    cout << "TEST CASE FOR QUESTION #23:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps first and second to last node value...\n"
        << "Expected: 4 9 8 2\n";
    cout << "Result: ";
    myList.swapFirstSecondLastNodeValues();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #24
    cout << "TEST CASE FOR QUESTION #24:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps second and last node value...\n"
        << "Expected: 8 2 4 9\n";
    cout << "Result: ";
    myList.swapSecondNodeLastNode();
    myList.print(); */

    /* // TEST CASE FOR QUESTION #25
    cout << "TEST CASE FOR QUESTION #25:\n"
        << "Current List: 8 9 4 2\n"
        << "Swaps second and last node value...\n"
        << "Expected: 8 2 4 9\n";
    cout << "Result: ";
    myList.swapSecondNodeLastNodeValues();
    myList.print(); */

    // *** SKIPPING #26 - #36 *** Became redundant



    AnyList otherList;

    otherList.insertFront(10);
    otherList.insertFront(13);
    otherList.insertFront(11);
    otherList.insertFront(12);
    otherList.insertFront(16);

    /* // TEST CASE FOR QUESTION #37
    cout << "TEST CASE FOR QUESTION #37:\n"
        << "Calling List: 8 9 4 2\n"
        << "Parameter List: 16 12 11 13 10\n"
        << "Swaps the first node in each list...\n"
        << "Expected:\nCalling List: 16 9 4 2\n"
        << "Parameter List: 8 12 11 13 10\n";
    cout << "\nResult:\n";
    myList.swapFirstNodes( otherList );
    cout << "Calling List: ";
    myList.print();
    cout << "\nParameter List: ";
    otherList.print(); */

    /* // TEST CASE FOR QUESTION #38
    cout << "TEST CASE FOR QUESTION #38:\n"
        << "Calling List: 8 9 4 2\n"
        << "Parameter List: 16 12 11 13 10\n"
        << "Swaps the first node value in each list...\n"
        << "Expected:\nCalling List: 16 9 4 2\n"
        << "Parameter List: 8 12 11 13 10\n";
    cout << "\nResult:\n";
    myList.swapFirstNodeValues( otherList );
    cout << "Calling List: ";
    myList.print();
    cout << "\nParameter List: ";
    otherList.print(); */



    cout << "\n" << endl;
    system( "pause" );
    return 0;
}