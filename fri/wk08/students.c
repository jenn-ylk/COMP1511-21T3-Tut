// code that allows us to make a list of people (students)
// creates a linked list out of student structs
// with some modification
// written on 29/10/21 for f11b

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
    
    struct student *charlie = create_student(5111111, 65.9, "Charlie");
    frankie->next = charlie;
    printf("%s (z%d): %lf\n", charlie->name, charlie->zID, charlie->mark);
    printf("Using the next pointer\n");
    printf(
        "%s (z%d): %lf\n", 
        frankie->next->name, frankie->next->zID, frankie->next->mark
    );
    
    struct student *fatima = create_student(5222222, 85.3, "Fatima");
    charlie->next = fatima;
    
    struct student *carlos = create_student(5333333, 84.7, "Carlos");
    fatima->next = carlos;
    
    // accessing carlos' information (the long way around)
    /*
    printf(
        "%s (z%d): %lf\n", 
        frankie->next->next->next->name, 
        frankie->next->next->next->zID, 
        frankie->next->next->next->mark
    );
    */
    
    printf("Printing the students with a while loop:\n");
    struct student *curr = frankie;
    while (curr != NULL) {
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
