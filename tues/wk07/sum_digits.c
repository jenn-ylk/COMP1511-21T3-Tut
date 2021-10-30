// a program that uses getchar to scan in characters, until end of input
// and calculates the number and sum of digits entered

// tutorial T17A - 26/10/2021

#include <stdio.h>

int main() {
    int letter;
    
    int n_digits = 0;
    int sum = 0;
    // use scanf to get a character
    // as long as something is scanned in, scanf returns 1
    // scanf("%c", &letter) == 1
    
    // getchar returns an int to allow for eof
    letter = getchar();
    while (letter != EOF) {
        // putchar(letter);
        
        if (letter >= '0' && letter <= '9') {
            n_digits++;
            sum += letter - '0';
        }
        
        // get the next character
        letter =  getchar();
    }
    
    printf("There were %d digits, adding to %d\n", n_digits, sum);
    
    
    return 0;
}
