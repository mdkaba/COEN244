//
//  Inventory.hpp
//  InventoryProject
//
//  Created by Mustafa on 2019-09-24.
//  Copyright © 2019 Mustafa. All rights reserved.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include <stdio.h>

#endif /* Inventory_hpp */

//   Inventory.h

class Inventory

{
public:
    Inventory( );
    int row_no(char *);
    int get_stock ( char *);
    double order( char *, int );
    bool new_product( char *, int, double);
    void discontinued_product( char *);
    int get_no_of_products();
    
private:
    int size;
    int  no_of_products;              // the total number of products in the inventory.
    char name_array[100][15] ;        // stores names of products
    double quantity_array [100][2];    // In the first column quantity of the product and in the
    // second column the price per item of the product is stored.
    
};

