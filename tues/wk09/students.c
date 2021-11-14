// modified week 8 linked list code, to demonstrate freeing a list of students
// written on 9/11/21 for class t17a

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

struct student *add_student(
    int zID, double mark, char *name, struct student *head
);

// frees a whole linked list of students
void free_students(struct student *head);

int main (void) {

    // build up the linked list of students
    struct student *head = add_student(5123456, 74.5, "Frankie", NULL);
    add_student(5111111, 62.9, "Lucy", head);
    add_student(5222222, 76.3, "Charlie", head);
    add_student(5333333, 81.3, "Fatima", head);
    
    printf("Printing the whole linked list\n");
    struct student *curr = head;
    while (curr != NULL) {
        // print the student name
        printf("%s (z%d): %lf\n", curr->name, curr->zID, curr->mark);
        
        curr = curr->next;
    }
    
    // TODO: now, free the list of students
    free_students(head);
    
    return 0;
}

// add a student to the linked list of students
struct student *add_student(
    int zID, double mark, char *name, struct student *head
) {
    struct student *stu = malloc(sizeof(struct student));
    stu->zID = zID;
    stu->mark = mark;
    strcpy(stu->name, name);
    
    stu->next = NULL;
    
    struct student *new_head = head;
    
    // insert the student at the end
    if (head == NULL) {
        new_head = stu;
    } else {
        struct student *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = stu;
    }
    
    return new_head;
}

// frees all the memory from a linked list
void free_students(struct student *head) {
    struct student *curr = head;
    struct student *prev = NULL;
    while (curr != NULL) {
        // use after free would occur if we just freed curr
        // use another pointer to store the address of what we're going to free
	// then move curr along, and free what came before
        prev = curr;
        // move current along
        curr = curr->next;
        free(prev);
    }
}

