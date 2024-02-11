//
//  Inventory.cpp
//  ModifiedInventoryProject
//
//  Created by Mustafa on 2019-09-24.
//  Copyright © 2019 Mustafa. All rights reserved.
//

#include "Inventory.hpp"
#include <iostream>
using namespace std;


Inventory::Inventory( )
{
    size = 100;
    for( int row=0; row < size; row++ )
    {
        for( int col = 0; col < 2; col++ )
        {
            quantity_array[row][col] = 0.0;
            if ( col == 0 )
                name_array[row][0] = '\0';
            
        }
    }
    no_of_products = 0;
}

int Inventory::row_no(char *product_name)
{
    for( int row=0; row < size; row++ )
    {
        char temp ='\0';
        for( int col = 0; product_name[col] == name_array[row][col] ; col++ )
        {
            if ( product_name[col] ==temp)
                return row;
        }
    }
    // The function returns size value if product couldnot be found.
            return size;
}




int Inventory::get_stock (char *product_name)
{
    int row = row_no(product_name);
    return quantity_array[row][0];
}





double Inventory:: order(char *product_name, int quantity)
{
    double cost = 0;
    int row = row_no(product_name);
    if ( row < size)
    {
        if( quantity_array[row][0] >= quantity)
        {
            cost = quantity_array[row][1]*quantity;
            quantity_array[row][0]=quantity_array[row][0]-quantity;
        }
    }
        return cost;
}
    
    
    
    
    bool Inventory :: new_product( char *product_name, int quantity, double price)
    {
        char temp = '\0';
        
        // Check if there is space in the table.
        if(no_of_products < size)
        {
        
        for( int row=0; row < size; row++ )
        {
           
            if ( name_array[row][0] == temp )
            {
                // This row is empty, insert the product to this row
                int i = 0;
                while ( product_name[i] != temp )
                {   name_array[row][i] = product_name[i];
                    i++;
                }
                // Copy also the null character
                name_array[row][i] = product_name[i];
                quantity_array[row][0] = quantity;
                quantity_array[row][1] = price;
                no_of_products++;
                
                
                return true;
            }
        }
        }
        return false;
    }
    
    
    
    void Inventory::discontinued_product( char *product_name)
    {
        int row = row_no(product_name);
        if (row < size)
        {
            name_array[row][0] = '\0';
            quantity_array[row][0] = 0;
            quantity_array[row][1] = 0;
            no_of_products--;
       }
        return;
    }

int Inventory::get_no_of_products()
{
    return no_of_products;
}
    
    
   
    
    
    
    
    
