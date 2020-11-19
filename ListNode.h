#include <iostream>
using namespace std;

template <class temp> http://www.cplusplus.com/doc/tutorial/templates/
class ListNode{
  public:
    ListNode();
    ListNode(temp d);
    ~ListNode();

    ListNode *next;
    ListNode *prev;

    temp data;
};

ListNode::ListNode(){

}

ListNode::ListNode(temp d){
  next = NULL;
  prev = NULL;
  data = d
}

ListNode::~ListNode(temp d){
  delete data;
};
