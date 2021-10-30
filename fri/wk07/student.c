// introduction to struct pointers!
// why might you eventually want a struct pointer?
// - pass it to functions to easily modify the struct
// - eventually make a linked list

// tutorial F11B - 29/10/2021

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
  // pointer to next (linked lists)
  // struct student *next;
};

int main(void) {
    // make a struct student, and a pointer to the student
    struct student stu;
    struct student *stu_pointer = &stu;
    // (*stu_pointer).zID = 5123456;
    
    stu_pointer->zID = 5123456;
    stu_pointer->wam = 74.7;
    
    // strcpy copies a string to our destination
    // (without us writing character by character)
    strcpy(stu_pointer->name, "Frankie");
    
    printf("%s (z%d): %lf\n", 
           stu_pointer->name, stu_pointer->zID, stu_pointer->wam);
    
    return 0;
}

