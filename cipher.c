// Author: Catherine Cheng
// Date: 06/06/2015

#include <stdio.h>

char c;

int main() {
    do {
        // Read a character from stdin
        c = fgetc(stdin);
        
        // End of file? Nothing left to read...
        if (feof(stdin)) {
            // Exit loop
            break;
        }
        
        // Set no. of shift character
        int shift = 13;

        // Is an uppercase character
        if ((c >= 'A') && (c <= 'Z')) {
            if (c + shift > 90) {
            	c = c + shift - 90 + 64;              	
            }
            else
            	c += shift;
        }
            
        // Is a lowercase letter
        else if ((c >= 'a') && (c <= 'z')) {
            if (c + shift > 122) {
            	c = c + shift - 122 + 96;              	
            }
            else
            	c += shift;
        }
        	
        // Print the character to stdout (default)
        printf("%c", c);        
    } while (1);
    
    // Exit cleanly
    return 0;
}
