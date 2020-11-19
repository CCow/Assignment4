int DoublyLinkedList::removeFront(){
  //check to make sure list is not empty before attempting to remove
  ListNode *nodeToDelete = front;

  if(front->next = NULL){
    back = NULL;
  }
  else{
    //list has more than one node
    front->next->prev = NULL;
  }
  front = front->next;
  nodeToDelete->next = NULL
  int temp = nodeToDelete->data;
  size--;

  delete nodeToDelete;
  return temp;

}

//you need to implement removeBack();

int DoublyLinkedList::removeBack(){
  ListNode *nodeToDelete = back;
  if(back->prev = NULL){
    front = NULL;
  }
  else{

  }
  back = back->prev;
}

void DoublyLinkedList::printList(){

}

int DoublyLinkedList::find(int value){
  int pos = -1;
  ListNode *curr = front;

  while(curr != NULL){
    ++pos;
    if(curr->data == value){
      break;
    }
    curr = curr->next;
  }
  if (curr == NULL){
    pos = -1;
  }
}
