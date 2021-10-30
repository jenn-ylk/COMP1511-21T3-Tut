// a program that uses getchar to scan in characters, until end of input
// and calculates the number and sum of digits entered

// tutorial F11B - 29/10/2021

#include <stdio.h>

int main() {
  
    int letter = getchar();
    
    int sum = 0;
    int n_digits = 0;
    
    while (letter != EOF) {
        // putchar takes in a character, and puts i on the terminal
	// like printf("%c", letter);
        // putchar(letter);
        // check whether the character was a digit
        if (letter >= '0' && letter <= '9') {
            sum += letter - '0';
            n_digits++;
        }
        
        // scan the next letter
        letter = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", n_digits, sum);
    
    return 0;
}
