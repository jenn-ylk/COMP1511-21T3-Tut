// A piece of c code that gets a time in from the user in 24hr format,
// and prints it out, formatted as 12 hour time
// written by F11B, 01/10/21

#include <stdio.h>

#define MIDDAY 12

// make a struct here for the time
struct time {
    int hour;
    int minute;
    char a_p;
};

int main(void) {
    printf("Enter 24 hour time: ");
    int time_24;
    
    // add something that ensures invalid times can't be entered
    scanf("%d", &time_24);
    
    // initialise the time_12 as 12AM - our type is struct time
    struct time time_12 = {12, 0, 'a'};
    /* 
    // same as this:
    time_12.hour = 12;
    time_12.minute = 0;
    time_12.a_p = 'a';
    */
    // since we initialise the fields later, this could also just be:
    // struct time time_12;

    int hour = time_24 / 100;
    // select am or pm
    if (hour >= MIDDAY) {
        time_12.a_p = 'p';
    } else {
        time_12.a_p = 'a';
    }
    
    // set the hour (change to 12 if needed)
    time_12.hour = hour;
    if (time_12.hour == 0) {
        time_12.hour = 12;
    }
    
    time_12.minute = time_24 % 100;
    
    // print out the time as hh:mm [ap]m
    printf("%02d:%02d %cm\n", time_12.hour, time_12.minute, time_12.a_p);

    return 0;
}

