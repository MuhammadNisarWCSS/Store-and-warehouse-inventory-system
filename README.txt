
Author : Muhammad Nisar 

An inventory system for a store that helps manage product inventory and allows the store to request more products from their warehouse if they are low on stock.

This store will sell a number of Products. Each product has a StoreLocation. 
These locations are in the main store area where shoppers shop. 
Each product may have zero or more overstock locations in the warehouse. 
The products in the warehouse are stored on skids. 
Each skid consists of a single type of Product wrapped in plastic. 
The places where skids are stored will be called WHLocations (warehouse locations). 
Because WHLocations can only accept skids, they will be treated differently than StoreLocations, 
and inheritance will be used to implement the two different styles of Locations.

Data structures used :
        - Linked List
        - Queue
        - Arrays


At the moment, this application is only supported on linux.



Files : Control.h Control.cc (Handles the Control class)
        defs.h (Contains standard definitions)
        List.h List.cc (Handles the list)
        Location.h Location.cc (Handles the Location class)
        main.cc (Main function is in here)
        Makefile (Used to compile and create the executable)
        Product.h Product.cc (Handles the Product objects)
        Queue.h Queue.cc (Handles the Queue class)
        Store.h Store.cc (Handles the Store class)
        StoreLocation.h StoreLocation.cc (Handles the StoreLocation class)
        View.h View.cc (Handles the View class)
        WHLocation.h WHLocation.cc (Handles the WHLocation class)



To compile : Open up the terminal. Type "make".
To launch executable : Type "./inventorySystem" in terminal.
To launch executable with valgrind : Type "valgrind ./inventorySystem" in terminal.
