//
//  main.cpp
//  InventoryProject
//
//  Created by Mustafa on 2019-09-24.
//  Copyright © 2019 Mustafa. All rights reserved.
//

#include "Inventory.hpp"
#include <iostream>


  using namespace std;

// int main(int argc, const char * argv[]) {

int main() {
        char my_order[]="camera";
        Inventory inventory;
    
        cout<<inventory.get_no_of_products()<<endl;
        inventory.new_product(my_order, 10, 625.00);
    
        cout<<inventory.get_no_of_products()<<endl;
        cout<<  inventory.get_stock(my_order)<<endl;
        inventory.order( my_order, 2);
        inventory.discontinued_product(my_order);
        cout<<inventory.get_no_of_products()<<endl;
        
        return 0;
    }
    
