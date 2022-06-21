
#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Product.h"
#include "List.h"
#include "StoreLocation.h"
#include "WHLocation.h"


using namespace std;

/*  Class purpose: Handles the store object.

            Class functions: Allows the ability to find, receive and fill an order.

            Variables:  string name, StoreLocation storeLocations, WHLocation whLocations, List *products
*/

class Store {

	public:
		//constructor
		Store(const string& name);

		//destructor
		~Store();

		//other
		void findAvailableSLoc(StoreLocation**);
		void findAvailableWHLoc(WHLocation**);

		void printStoreStock();
		void printWareHouseStock();
		void printProducts();

		//these are done for you
		void findProduct(const string&, Product**);
		void receiveProduct(const string&, int quantity);
		void fillOrder(const string&, int &quantity);
		void print();

	private:
		string name;
		StoreLocation storeLocations[SLOCS];
		WHLocation whLocations[WHLOCS];
		List *products;

};
#endif
