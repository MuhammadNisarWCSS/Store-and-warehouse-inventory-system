#include <iostream>
#include <string>
using namespace std;

#include "List.h"

//Constructor
List::List(): head(NULL){}

//Destructor
List::~List(){
    Node* currNode = head;
    Node* nextNode = NULL;

    while(currNode!=NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

//Other functions
//add in sorted order by name
void List::add(Product* pro){
    Node* newNode = new Node();
    newNode->data = pro;
    newNode->next = NULL;

    Node* currNode = head;
    Node* prevNode = NULL;

    while(currNode!=NULL){
        if (newNode->data->getName() < currNode->data->getName()){
            break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    //insert currNode
    if (prevNode == NULL){
        head = newNode;
    }else{
        prevNode->next = newNode;
    }
    newNode->next = currNode;
}

void List::remove(const string& name, Product** pro){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (currNode->data->getName() == name){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (currNode == NULL){
        *pro = NULL;
        return;
    }
    //currNode is not NULL
    if (prevNode == NULL){
        head = currNode->next;
    }else{
        prevNode->next = currNode->next;
    }
    *pro = currNode->data;
    delete currNode;
}

void List::findProduct(const string& name, Product** pro){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (currNode->data->getName() == name){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (currNode == NULL){
        *pro = NULL;
        return;
    }
    //currNode is not NULL
    *pro = currNode->data;
}

void List::removeUpTo(const string& name){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (name < currNode->data->getName()){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
        delete prevNode->data;
        delete prevNode;
    }

    head = currNode;
}

void List::print() const{
    Node* currNode = head;

    if (currNode == NULL){
        return;
    }


    while(currNode != NULL){
        currNode->data->print();
        currNode = currNode->next;
    }
}


bool List::isEmpty() {

  return this->head == NULL;
}
