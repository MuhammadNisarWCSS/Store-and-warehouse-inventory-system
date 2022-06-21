#ifndef STORELOCATION_H
#define STORELOCATION_H

#include "Location.h"


/*  Class purpose: Handles the StoreLocation object.

            Class functions: Allows the ability to set products to the store.

            Variables:  static const char code, static const int capacity, static int nextId
*/

class StoreLocation: public Location {


public:
  StoreLocation();
  void setProduct(const string& productName);
  int getFreeSpace();

  virtual int getCapacity();
  virtual bool add(const string& productName, int amount);
  virtual bool remove(int amount);

private:
  static const char code;
  static const int capacity;
  static int nextId;

};

#endif
