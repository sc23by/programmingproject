#ifndef LIBRARY_H
#define LIBRARY_H

//include guards use in evry header file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defines
#define MAX_LENGTH 100
#define MIN_LENGTH 5

// struct for maze maps
typedef struct {
    int rows;
    int columns;
    char mapCharacters[100][100];
} maze;
// map size max 100 rectangle

#endif  
