// Part 1
int AnyList::getLastElem() const
{
   Node* current = ptrToFirst;
   
   while( current != nullptr )
   {
      if( current->getPtrToNext() == nullptr )
      {
         return current->getData();
      }
      current = current->getPtrToNext();
   }
}

// Part 2
bool AnyList::allOdds() const
{
   Node* current = ptrToFirst;
   
   while( current != nullptr )
   {
      if( current->getData() % 2 == 0 )
      {
         return false;
      }
      current = current->getPtrToNext();
   }
   return true;
}

// Part 3
void AnyList::deleteFirstNode()
{
   if( ptrToFirst == nullptr )
   {
      cerr << "Cannot delete from an empty list." << endl;
   }
   else
   {
      Node* current = ptrToFirst;
      ptrToFirst = current->getPtrToNext();
      
      delete current;
      
      current = nullptr;
      
   }
}

// Part 4
bool AnyList::compareLists( const AnyList& compare ) const
{
   if( count != compare.count )
   {
      return false;
   }
   else
   {
      Node* currentOfList = ptrToFirst;
      Node* currentOfCompareList = compare.ptrToFirst;
      
      while( currentOfList != nullptr )
      {
         if( currentOfList->getData() != currentOfCompareList->getData() )
         {
            return false;
         }
         currentOfList = currentOfList->getPtrToNext();
         currentOfCompareList = currentOfCompareList->getPtrToNext();
      }
      return true;
   }
}

