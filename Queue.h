#ifndef Queue_H
#define Queue_H

#include "WHLocation.h"

/*  Class purpose: Handles the Queue object.

            Class functions: A queue that stores WHLocation objects in its nodes.

            Variables:  Node* head, Node* tail
*/

class Queue{


    //private by default
    class Node {

        public:
            WHLocation* data;
            Node*    next;
    };

    public:
        Queue();
        ~Queue();
        bool isEmpty();
        void peekFirst(WHLocation** loc);
        void popFirst(WHLocation** loc);
        void addLast(WHLocation* loc);
        void print();



    private:
        Node* head;
        Node* tail;

};


#endif
