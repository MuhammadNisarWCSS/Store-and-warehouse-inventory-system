#include "WHLocation.h"
#include "defs.h"

const char WHLocation::code = 'B';
const int WHLocation::capacity = WHLOC_CAPACITY;
int WHLocation::nextId = 1;

//Constructor
WHLocation::WHLocation() : Location(code, nextId) {

  nextId++;
}

//Other functions
int WHLocation::getCapacity() {

  return WHLocation::capacity;
}

bool WHLocation::add(const string& productName, int amount) {

  if (this->isAvailable() && this->getCapacity() >= amount) {

    this->product = productName;
    this->quantity = amount;
    return true;
  }

  return false;
}

bool WHLocation::remove(int amount) {

  if (amount > this->quantity) {

    return false;
  }

  this->quantity -= amount;

  if (this->getQuantity() == 0 ) {

    this->product = NONE;
  }

  return true;
}
