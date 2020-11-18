class DoublyList{
  private:
    ListNode *front;
    ListNode *back;
    unsigned int size;
  public:
    DoublyList();
    ~DoublyList();
    void insertFront(int d);
    void insertBack(int d);
    int removeFront();
    int removeBack();
    int find(int value);
    int deletePos(int pos);

    void printList();
    bool isEmpty();
    unsigned int getSize();
};
