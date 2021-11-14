// Program to do various linked list exercises, including freeing a linked list
// written on 12/11/21 for f11b

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {
    struct node *list1 = NULL;
    list1 = add_last(list1, 1);
    list1 = add_last(list1, 2);
    list1 = add_last(list1, 3);
    printf("list1: \n");
    print_list(list1);
    
    // make a copy of a linked list
    struct node *list1_copy = copy(list1);
    printf("list1_copy\n");
    print_list(list1_copy);
    // ttest that changes to the copy won't change the original
    /*
    add_last(list1_copy, 4);
    printf("list1 (after list1_copy change):\n");
    print_list(list1);
    printf("list1_copy\n");
    print_list(list1_copy);
    */
    
    struct node *list2 = add_last(NULL, 4);
    list2 = add_last(list2, 5);
    list2 = add_last(list2, 6);
    printf("list2: \n");
    print_list(list2);
    
    struct node *result = list_append(list1, list2);
    
    printf("result:\n");
    // print_list(list1);
    // print_list(list2);
    print_list(result);
    
    printf("\nidentical(list1, list1_copy) returned %d\n", identical(list1, list1_copy));
    printf("identical(list1, list2) returned %d\n", identical(list1, list2));
    printf("identical(list1, result) returned %d\n", identical(list1, result));
    printf("identical(result, list1) returned %d\n", identical(result, list1));
    printf("identical(list2, result) returned %d\n", identical(list2, result));
    printf("identical(result, list2) returned %d\n", identical(result, list2));
    printf("identical(NULL, result) returned %d\n", identical(NULL, result));
    
    
    free_list(list1);
    free_list(list1_copy);
    free_list(list2);
    free_list(result);
    
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *new = NULL;
    struct node *curr = list;
    while (curr != NULL) {
        // use functions from above to do this
        new = add_last(new, curr->data);
        curr = curr->next;
    }
    return new;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // we do need to make a whole copy of the memory (can't just move the pointers)
    if (first_list != NULL) {
        // the first list we are given isn't null
        struct node *new_list = copy(first_list);
        
        // search for the pointer to the last node of the list
        struct node *last = new_list;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = copy(second_list);
        return new_list;
    } else {
        return copy(second_list);
    }
}

int identical(struct node *first_list, struct node *second_list) {
    struct node *curr1 = first_list;
    struct node *curr2 = second_list;
    while (curr1 != NULL && curr2 != NULL) {
        // compare the data inside curr
        if (curr1->data != curr2->data) {
            return 0;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    // check that the lists have both ended (both pointing to NULL)
    if (curr1 == curr2) {
        return 1;
    } else {
        return 0;
    }
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}

/** REVISION FUNCTIONS **/

struct node *delete_last(struct node *head) {
    return NULL;
}

int ordered(struct node *head) {
    return 42;
}

struct node *set_union(struct node *first_list, struct node *second_list) {
    return NULL;
}

void free_list(struct node *head) {
    // using a while loop to free a list
    struct node *curr = head;
    while (curr != NULL) {
        struct node *prev = curr;
        curr = curr->next;
        free(prev);
    }
}

int num_items(struct node *head) {
    return 42;
}

