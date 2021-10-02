// A piece of c code that gets a time in from the user in 24hr format,
// and prints it out, formatted as 12 hour time
// written by T17A, 28/09/21

#include <stdio.h>

//     name of the struct
struct time {
    // fields of the struct (can later acces using <var_name>.hour, .minute etc.
    int hour;
    int minute;
    char meridian; // whether it's am or pm
};

int main(void) {
    printf("Enter 24 hour time: ");
    int time_24;
    
    scanf("%d", &time_24);
    
    // turn the 24 hour time into 12 hour time to store into a time struct
    // initialise the struct ("struct time" is our type)
    struct time time_12;
    
    // fill in fields:
    int hour_24 = time_24 / 100;
    
    time_12.hour = hour_24 % 12;
    // adjust for 12 o'clock
    if (time_12.hour == 0) {
        time_12.hour = 12;
    }
    
    time_12.minute = time_24 % 100;
    
    // check if time is in the morning
    if (hour_24 < 12) {
        time_12.meridian = 'a';
    } else {
        time_12.meridian = 'p';
    }
    
    // printf time as hh:mm [ap]m
    printf("The time is %02d:%02d %cm\n", 
           time_12.hour, time_12.minute, time_12.meridian);

    return 0;
}

