// Functions to perform some linked lists operations
// Written by Patrick Chambers (z5264081) on 9/11/21


#include <stdio.h>
#include <stdlib.h>

#define IDENTICAL 1
#define NOT_IDENTICAL 0


struct node {
    int          data;
    struct node *next;
};


// Helper functions
struct node *new_node(int data);
struct node *new_list(int data_1, int data_2, int data_3);
void print_list(struct node *head);
void free_list(struct node *head);

// Tutorial functions
struct node *copy(struct node *old_head);
struct node *list_append(struct node *first_list, struct node *second_list);
int identical(struct node *first_list, struct node *second_list);
struct node *set_intersection(struct node *set1, struct node *set2);


int main(void) {

    // Creating a single node
    // struct node *node_one = new_node(5);
    // printf("Node data: %d\n", node_one->data);


    // LIST COPY
    
    struct node *list_one = new_list(1, 2, 3);
    printf("List 1: ");
    print_list(list_one);

    // Creating a copy of list 1
    struct node *copy_one = copy(list_one);
    printf("Copy of list 1: ");
    print_list(copy_one);

    // Changing a value in list 1
    list_one->data = 15;
    printf("\n");
    printf("After changing list 1: \n");
    printf("List 1: ");
    print_list(list_one);
    printf("Copy of list 1: ");
    print_list(copy_one);
    free_list(list_one);
    free_list(copy_one);
    

    // LIST APPEND
    /*
    struct node *list_one = new_list(1, 2, 3);
    struct node *list_two = new_list(4, 5, 6);
    printf("List 1: ");
    print_list(list_one);
    printf("List 2: ");
    print_list(list_two);

    // // Appending the two lists
    struct node *appended = list_append(list_one, list_two);
    printf("Appended list: ");
    print_list(appended);

    // Appending NULL to list_two
    struct node *appended_null_one = list_append(NULL, list_two);
    printf("Appended list (list one is NULL): ");
    print_list(appended_null_one);

    // Appending list_one to NULL
    struct node *appended_null_two = list_append(list_one, NULL);
    printf("Appended list (list two is NULL): ");
    print_list(appended_null_two);

    // Changing values in list 1 and 2
    list_one->next->data = 202;
    list_two->next->data = 505;
    printf("\n");
    printf("After changing list 1 and 2: \n");
    printf("List 1: ");
    print_list(list_one);
    printf("List 2: ");
    print_list(list_two);
    printf("Appended list: ");
    print_list(appended);
    */

    // IDENTICAL
    /*
    // Making new lists to check that identical function works
    struct node *list_one = new_list(1, 2, 3);
    struct node *list_two = new_list(4, 5, 6);
    struct node *list_three = list_append(list_one, list_two);
    struct node *list_four = new_list(1, 2, 3);
    printf("List 1: ");
    print_list(list_one);
    printf("List 2: ");
    print_list(list_two);
    printf("List 3: ");
    print_list(list_three);
    printf("List 4: ");
    print_list(list_four);

    // Checking which lists are counted as identical
    printf("List 1 and list 2 are identical: %d\n", identical(list_one, list_two));
    printf("List 2 and list 3 are identical: %d\n", identical(list_two, list_three));
    printf("List 1 and list 3 are identical: %d\n", identical(list_one, list_three));
    printf("List 1 and list 4 are identical: %d\n", identical(list_one, list_four));
    */
    return 0;
}


////////////////////////
// TUTORIAL FUNCTIONS //
////////////////////////

// Creates a copy of a linked list and returns the head of the copy list
struct node *copy(struct node *old_head) {

    // If old_head is NULL, there's nothing to copy
    if (old_head == NULL) {
        return NULL;
    }

    // Preserve the head of the new list so it can be returned
    struct node *new_head = new_node(old_head->data);
    struct node *new_curr = new_head;
    // Start at the second node since the first node has been copied into new_head
    struct node *old_curr = old_head->next;

    // Loop through the list from the second node to copy all the remaining nodes
    while (old_curr != NULL) {
        new_curr->next = new_node(old_curr->data);

        new_curr = new_curr->next;
        old_curr = old_curr->next;
    }


    return new_head;
}

// Creates a new list by appending the second list to the first list
// Returns the head of the new list
struct node *list_append(struct node *first_list, struct node *second_list) {

    // When the first list is empty
    if (first_list == NULL) {
        return copy(second_list);
    }

    // These have to be copies so they don't affect the original lists
    struct node *first_curr = copy(first_list); 
    struct node *appended_list = first_curr; 

    // Loops through to the last node of the copied first list
    while (first_curr->next != NULL) {
        first_curr = first_curr->next;
    }

    first_curr->next = copy(second_list); 

    return appended_list;
}

// Returns 1 if first and second list are identical (have the same data)
// Returns 0 otherwise
int identical(struct node *first_list, struct node *second_list) {
    
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;

    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data != second_curr->data) {
            return NOT_IDENTICAL;
        }
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }

    // If we get here, we know that at least one list has ended
    if (first_curr != NULL || second_curr != NULL) {
        return NOT_IDENTICAL;
    }

    return IDENTICAL;
}

// Creates a new list in strictly increasing order that contains all elements 
// that are found in both lists. The lists must also be in strictly increasing 
// order. 
// Returns the head of the intersection list. 
struct node *set_intersection(struct node *set1, struct node *set2) {
    
    return NULL;
}



//////////////////////
// HELPER FUNCTIONS //
//////////////////////

// Creates a new node with the given data and returns it
// 9. What's wrong with this function?
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}




// Prints out the data in a linked list, ending with a newline
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
    return;
}

// Creates a new linked list with 3 pieces of data 
// Returns the head of the list
struct node *new_list(int data_1, int data_2, int data_3) {
    // This isn't done in an adaptable way :(
    struct node *head = new_node(data_1);
    head->next = new_node(data_2);
    head->next->next = new_node(data_3);
    return head;
}

// Free the memory for a list
void free_list(struct node *head) {

    if (head == NULL) {
        return;
    }

    struct node *curr = head;
    struct node *prev = NULL;
    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }

    return;
}