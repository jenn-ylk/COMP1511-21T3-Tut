// introduction to struct pointers!
// why might you eventually want a struct pointer?
// - mostly, we use this for passing between functions
// - later, linked lists

// Class T17A, 26/10/2021

#include <stdio.h>

#define MAX_NAME_LENGTH 256

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main(void) {
    // make a struct student, and a pointer to the student
    struct student stu = {5555555, 67.5, "Frankie"};
    
    struct student *stu_pointer = &stu;
    stu_pointer->zID = 5123456;
    stu_pointer->wam = 74.7;
    
    printf("%s (z%d): %lf\n", stu_pointer->name, stu_pointer->zID, stu_pointer->wam);
    
    return 0;
}

