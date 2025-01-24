#ifndef NODE_H
#define NODE_H

class Node{
  private:
    Node* prevPtr, nextPtr;
    int value;
  public:
    Node();
    Node(Node*, Node*, int);
    Node(const Node&);

    Node* getPrevPtr();
    Node* getNextPtr();
    int getValue();

    void setPrevPtr(Node*);
    void setNextPtr(Node*);
    void setValue(int);
};

#endif
