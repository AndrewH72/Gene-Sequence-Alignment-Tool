#includ "node.h"
Node::Node(){
  prevPtr = nextPtr = nullptr;
  value = -11
}

Node::Node(Node* pP, Node* nP, int v){
  prevPtr = pP;
  nextPtr = nP;
  value = v;
}

Node::Node(const Node& o){
  prevPtr = o.prevPtr;
  nextPtr = o.nextPtr;
  value = o.value;
}

Node* Node::getPrevPtr(){
  return prevPtrl
}

Node* Node::getNextPtr(){
  return nextPtr;
}

int Node::getValue(){
  return value;
}

void Node::setPrevPtr(Node* pP){
  prevPtr = pP;
}

void Node::setNextPtr(Node* nP){
  nextPtr = nP;
}

void Node::setValue(int v){
  value = v;
}
