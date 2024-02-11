//
//  main.cpp
//  ModifiedStringProject
//
//  Created by Mustafa on 2019-09-24.
//  Copyright © 2019 Mustafa. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    

    
    using namespace std;
    
    
    
  
        char mystring[50] = "pencil";
        
    
        cout << " The original string is " << mystring << endl;
        
    char *temp_ptr=mystring;
        
      
    
    
    // This function modifies the input string as required
 
    
        char *shift_ptr ;
        char *last_ptr;
        char tempstorage ;
        char *w;
        
        last_ptr = temp_ptr;
        
    while (*last_ptr != '\0') { last_ptr++;}
            
            last_ptr--;   // This pointer always points to the last character of the
            // string that hasnot been checked for a vowel.
            
            while ( temp_ptr !=  last_ptr) {
                // Search string for vowels
                w=temp_ptr;
                if ( *w == 'a' || *w == 'e' || *w == 'i' || *w == 'o' || *w == 'u' ) {
                    // Has  found a vowel
                    
                    tempstorage = *temp_ptr;  // Store the vowel temporarily.
                    shift_ptr = temp_ptr;
                    
                    
                    // Move the string from this point on one position to the left
                    
                    while ( *(shift_ptr+1) != '\0' ) {
                        
                        * shift_ptr  = *(shift_ptr+ 1);
                        shift_ptr++;
                    }
                    
                    // Store the new found vowel at the end of the string immediately before
                    // the null character.
                    
                    *shift_ptr= tempstorage;
                    last_ptr--; //move the pointer to the last unchecked
                    // character a position to the left.
                }
                    else {
                        
                        // temp_ptr pointer is incremented only if a vowel had not been found
                        
                        ++temp_ptr;
                }
                }
                
    
                
                cout << " The modified string is " << mystring << endl;
            
                    
                
                
                
                
    
    return 0;
}
