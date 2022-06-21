#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>

using namespace std;

/*  Class purpose: Handles the Location objects.

            Class functions: Stores information about the location.

            Variables:  string id, string product, int quantity, static const string NONE
*/

class Location {

public:

  Location(char letter, int number);

  const string& getId();
  const string& getProduct();
  int getQuantity();
  bool isEmpty();
  bool isAvailable();
  void print();

  virtual int getCapacity() = 0;
  virtual bool add(const string& productName, int amount) = 0;
  virtual bool remove(int amount) = 0;

protected:
  string id;
  string product;
  int quantity;
  static const string NONE;
};

#endif
