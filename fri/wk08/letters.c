// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

int check_letter(char ch) {
    // return whether the character is a letter
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
