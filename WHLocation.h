#ifndef WHLOCATION_H
#define WHLOCATION_H

#include "Location.h"
/*  Class purpose: Handles the WHLocation object.

            Class functions: Allows the ability to add and remove products to the warehouse.

            Variables:  static const char code, static const int capacity, static int nextId
*/


class WHLocation: public Location {


public:
  WHLocation();

  virtual int getCapacity();
  virtual bool add(const string& productName, int amount);
  virtual bool remove(int amount);

private:
  static const char code;
  static const int capacity;
  static int nextId;

};

#endif
