
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"
struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {

    // check that the genre exists:
    struct genre *curr_genre = cinema->genres;
    struct genre *match = NULL;
    while (curr_genre != NULL && match == NULL) {
        if (strcmp(genre_name, curr_genre->name) == 0) {
            // the names match
            match = curr_genre;
        }
        curr_genre = curr_genre->next;
    }
    
    if (match == NULL) {
        return NOT_FOUND;
    }
    
    // allocate a movie struct
    struct movie *new = malloc(sizeof(struct movie));
    strcpy(new->title, movie_name);
    new->length = length;
    new->rating = rating;
    new->next = NULL;
    
    // TODO: put this into the genre
    struct movie *curr_movie = match->movies;
    // no movies in the genre
    if (curr_movie == NULL) {
        match->movies = new;
    } else {
        // loop to end of movie list
        while (curr_movie->next != NULL) {
            curr_movie = curr_movie->next;
        }
        curr_movie-> next = new;
    }
    
    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    // TODO: Finish this function
    struct genre *curr_genre = cinema->genres;
    struct genre *match = NULL;
    while (curr_genre != NULL && match == NULL) {
        if (strcmp(genre_name, curr_genre->name) == 0) {
            // the names match
            match = curr_genre;
        }
        curr_genre = curr_genre->next;
    }
    
    if (match != NULL) {
        struct movie *curr_movie = match->movies;
        while (curr_movie != NULL) {
            // <movie1-title>, <movie1-rating>/10 (<movie1-length>)
            printf("%s, %lf/10 %d\n", curr_movie->title, curr_movie->rating, curr_movie->length);
            curr_movie = curr_movie->next;
        }
    }
}
