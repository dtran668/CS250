// Part 1
bool DoublyList::search( int value ) const
{
   Node* current = first;
   bool found = false;
   
   while( !found && current != nullptr )
   {
      if( current->getData() == value )
      {
         found = true;
      }
      else
      {
         current = current->getNext();
      }
   }
   return found;
}

// Part 2
void DoublyList::swapLists( DoublyList& compare )
{
   //Swap count
   int tempNum = count;
   count = compare.count;
   compare.count = tempNum;
   
   //Swap first pointer
   Node* tempNode = first;
   first = compare.first;
   compare.first = tempNode;
   
   //Swap last pointer
   tempNode = last;
   last = compare.last;
   compare.last = tempNode;
}

// Part 3
void DoublyList::insertInOrder( int value )
{
   if( first == nullptr ) //if list is empty
   {
      first = new Node( value, nullptr, nullptr);
      last = first; //reset pointer last
   }
   else if( first->getData() >= value) //if value is less than first node
   {
      first = new Node( value, nullptr, first);
      first->getNext()->setPrev(first); //connect second node to new first node
   }
   else if( last->getData() <= value ) //if value is greater than last node
   {
      last->setNext( new Node( value, last, nullptr ) );
      last = last->getNext(); //set last to new last node
   }
   else
   {
      Node* current = first;
      
      while( current->getData() <= value )
      {
         current = current->getNext();
      }
      
      Node *insertNode = new Node( value, current->getPrev(), current );
      
      current->getPrev()->setNext( insertNode ); //previous node points to new inserted node
      current->setPrev( insertNode ); //node ahead sets previous to new inserted node
   }
   
   ++count;
}
