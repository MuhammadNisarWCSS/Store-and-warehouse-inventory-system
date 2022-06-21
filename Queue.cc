#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"

//Constructor
Queue::Queue() {

  this->head == NULL;
  this->tail == NULL;
}

//Destructor
Queue::~Queue(){
    Node* currNode = head;
    Node* nextNode = NULL;

    while(currNode!=NULL){
        nextNode = currNode->next;
        delete currNode;
        currNode = nextNode;
    }
}

//Other functions
bool Queue::isEmpty() {

  return (this->head == NULL);
}

void Queue::peekFirst(WHLocation** loc) {

  if (this->head != NULL) {

    *loc = this->head->data;
  }

  else {

    *loc = NULL;
  }
}

void Queue::popFirst(WHLocation** loc) {

  if (this->head != NULL) {

    Node* tempNode = this->head->next;
    *loc = this->head->data;

    this->head->data->print();
    delete this->head;
    this->head = tempNode;
  }

  else {

    *loc = NULL;
  }
}

void Queue::addLast(WHLocation* loc) {

  Node* newNode = new Node();
  newNode->data = loc;
  newNode->next = NULL;

  if (this->head == NULL) {

    this->head = newNode;
    this->tail = newNode;
    this->head->data->print();
  }

  else {

    this->tail->next = newNode;
    this->tail = newNode;
    this->tail->data->print();
  }
}

void Queue::print() {

  Node* currNode = head;
  Node* nextNode = NULL;

  while(currNode!=NULL){

      currNode->data->print();
      nextNode = currNode->next;


      currNode = nextNode;
  }
}
