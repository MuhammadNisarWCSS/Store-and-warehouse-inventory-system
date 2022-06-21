#include "Location.h"
#include "defs.h"


const string Location::NONE = "Empty";

//Constructor
Location::Location(char letter, int number) {

  this->id = letter + to_string(number);
  this->product = NONE;
  this->quantity = 0;
}

//Other functions
const string& Location::getId() {

  return this->id;
}

const string& Location::getProduct() {

  return this->product;
}

int Location::getQuantity() {

  return this->quantity;
}

bool Location::isEmpty() {

  return this->quantity == 0;
}

bool Location::isAvailable() {

  return this->product == NONE;
}

void Location::print() {

  cout << "Location : " << this->getId() << endl << "The product is : " << this->getProduct() << endl << "The quantity is : " << this->getQuantity() << endl << endl;
}
