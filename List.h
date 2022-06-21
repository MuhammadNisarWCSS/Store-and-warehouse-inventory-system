#ifndef LIST_H
#define LIST_H

#include "Product.h"

/*  Class purpose: Handles the List.

            Class functions: A list that stores Product objects.

            Variables:  Node* head
*/

class List{

    //private by default
    class Node {

        public:
            Product* data;
            Node*    next;
    };

    public:
        List();

        // Any data left in the List gets destroyed
        ~List();
        //we have unlimited size, so add always succeeds
        void add(Product*);
        //return false if name not found
        void findProduct(const string& name, Product**);
        //double pointer for a return parameter of a pointer
        void remove(const string& name, Product**);

        void removeUpTo(const string& name);

        void print() const;  //not modify this List object

        bool isEmpty();


    private:
        Node* head;

};

#endif
