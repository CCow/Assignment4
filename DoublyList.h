//Doubly Linked List file - https://www.geeksforgeeks.org/queue-cpp-stl/ for structure setup
//Template type elements (member types)- https://www.tutorialspoint.com/cpp_standard_library/queue.htm
#include <iostream>
#include "ListNode.h"
using namespace std;

template <class temp> //http://www.cplusplus.com/doc/tutorial/templates/ - "template <class T>"
class DoublyList{
  public:
    DoublyList();
    ~DoublyList();

    void insertFront(temp d);
    void insertBack();
    void printList();

    temp find(temp value);
    int deletePOS(int pos);

    int removeFront();
    int removeBack();

  private:
    ListNode <temp> *front;
    ListNode <temp> *back;
    int size; //change so only a + number
};

template <class temp>
DoublyList<temp>::DoublyList(){
  front = NULL;
  back = NULL;
  size = 0;
}

template <class temp>
DoublyList<temp>::~DoublyList(){
  delete ;
}

template <class temp>
void DoublyList<temp>::insertFront(int d){
    ListNode *node = new ListNode(d);
    if(size == 0){
      back = node;
    }
    else{
      front->prev = node;
      node->next = front;
    }
    front = node;
    ++size;
}

template <class temp>
void DoublyList<temp>::insertBack(int d){
  ListNode *node = new ListNode(d);
  if(front == NULL){
    front = back;
  }
  else{
    node->prev = back;
    back->next = node;
  }
  back = node;
  ++size;
}

template <class temp>
void DoublyList<temp>::printList(){
  ListNode *curr = front;
  while (curr != NULL){
      cout << curr->data << endl;
      curr = curr->next;
  }
}

template <class temp>
int DoublyList<temp>::find(temp value){
  int pos = -1;
  ListNode *curr = front;

  while(curr != NULL){
    ++pos;
    if(curr->data == value){
      break;
    }
    curr = curr->next;
  }
  if(curr == NULL){
    pos = -1;
  }
  return pos;
}

template <class temp>
int DoublyList<temp>::deletePos(int pos){
  if(size > 0){
    int p = 0;
    ListNode *curr = front;
    ListNode * prev = front;
    while(p != pos){
      prev = curr;
      curr = curr->next;
      p++;
    }
  }
  else{
    //hope this doesn't happen
    return 0;
  }
  //found correct position, continue with removal
  prev->next = curr->next;
  curr->next = NULL;
  int temp = curr->data;
  size--;

  delete curr;
  return temp;
}

template <class temp>
int DoublyList<temp>::removeFront(){
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
  nodeToDelete->next = NULL;
  int temp = nodeToDelete->data;
  size--;

  delete nodeToDelete;
  return temp;
}

template <class temp>
int DoublyList<temp>::removeBack(){
  ListNode *nodeToDelete = back;
  if(back->prev = NULL){
    front = NULL;
  }
  else{
	//
  }
  back = back->prev;
}
