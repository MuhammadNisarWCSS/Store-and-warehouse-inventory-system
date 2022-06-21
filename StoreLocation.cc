
#include "StoreLocation.h"
#include "defs.h"

const char StoreLocation::code = 'A';
const int StoreLocation::capacity = SLOC_CAPACITY;
int StoreLocation::nextId = 1;

//Constructor
StoreLocation::StoreLocation() : Location(code, nextId) {

  nextId++;
}

//Other functions
void StoreLocation::setProduct(const string& productName) {

  this->product = productName;
}

int StoreLocation::getFreeSpace() {

  return capacity - this->quantity;
}

int StoreLocation::getCapacity() {

  return StoreLocation::capacity;
}

bool StoreLocation::add(const string& productName, int amount) {

  if (this->product == "Empty" && amount <= capacity) {

    this->product = productName;
    this->quantity = amount;
    return true;
  }

  if (this->product != productName || getFreeSpace() < amount) {

    return false;
  }

  this->quantity += amount;
  return true;
}

bool StoreLocation::remove(int amount) {

  if (amount > this->quantity) {

    return false;
  }

  this->quantity -= amount;
  return true;
}
