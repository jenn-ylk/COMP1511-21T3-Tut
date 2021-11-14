// code that allows us to make a list of people (students)
// creates a linked list out of student structs
// with some modification of the struct student from week 7
// written on 26/10/21. for t17a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 32

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);

int main (void) {
    struct student *frankie = create_student(5123456, 74.5, "Frankie");
    printf("%s (z%d): %lf\n", frankie->name, frankie->zID, frankie->mark);
    
    struct student *lucy = create_student(5111111, 62.9, "Lucy");
    printf("%s (z%d): %lf\n", lucy->name, lucy->zID, lucy->mark);
    
    frankie->next = lucy;
    printf("Accessing Lucy from the pointer to Frankie\n");
    printf("%s (z%d): %lf\n", frankie->next->name, frankie->next->zID, frankie->next->mark);
    
    struct student *charlie = create_student(5222222, 76.3, "Charlie");
    lucy->next = charlie;
    
    printf("Printing the whole linked list\n");
    struct student *curr = frankie;
    while (curr != NULL) {
        // print the student name
        printf("%s (z%d): %lf\n", curr->name, curr->zID, curr->mark);
        
        curr = curr->next;
    }
    
    return 0;
}

struct student *create_student(int zID, double mark, char *name) {
    struct student *stu = malloc(sizeof(struct student));
    stu->zID = zID;
    stu->mark = mark;
    strcpy(stu->name, name);
    
    stu->next = NULL;
    
    return stu;
}
