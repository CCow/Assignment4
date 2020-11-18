#include <iostream>
#include <fstream>
#include "DoublyList.h"

using namespace std;

int main(int argc, char **argv){
	int studentMean = 0;
	int studentMedian = 0;
	int studentTime = 0;
	int studentTimeTen = 0;
	int windowMean = 0;
	int windowTime = 0;
	int windowTimeFive = 0;
    cout << "The mean student wait time is: " << studentMean << endl;
    cout << "The median student wait time is: " << studentMedian << endl;
    cout << "The longest student wait time is: " << studentTime << endl;
    cout << "The number of students waiting over 10 minutes is: " << studentTimeTen << endl;
    cout << "The mean window idle time is: " << windowMean << endl;
    cout << "The longest window idle time is: " << windowTime << endl;
    cout << "The number of windows idle for over 5 minutes is: " << windowTimeFive << endl;
    return 0;
}

DoublyList::DoublyList(){
  front = NULL;
  back = NULL;
  size = 0;
}

DoublyList::~DoublyList(){
//to fill
}

void DoublyList::insertFront(int d){
    ListNode *node = new ListNode(d);
    if(size == 0){
      back = node;
    }
    node->next = front;
    front = node;
    ++size;
}

void DoublyList::insertBack(int d){
  ListNode *node = new ListNode(d);
  if(front ++ NULL){
    front = back;
  }
  else{
    back->next = node;
  }
  back = node;
  ++size;
}

void DoublyList::printList(){
  ListNode *curr = front;

  while (curr != NULL){
      cout << curr->data << endl;
      curr = curr->next;
  }
}

int DoublyList::find(int value){
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

int DoublyList::deletePos(int pos){
  int p = 0;
  ListNode *curr = front;
  ListNode * prev = front;
  while(p != pos){
    prev = curr;
    curr = curr->next;
    p++;
  }
  //found correct position, continue with removal

  prev->next = curr->next;
  curr->next = NULL;
  int temp = curr->data;
  size--;

  delete curr;
  return temp;
}

int DoublyList::removeFront(){
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

int DoublyList::removeBack(){
  ListNode *nodeToDelete = back;
  if(back->prev = NULL){
    front = NULL;
  }
  else{
	//
  }
  back = back->prev;
}
