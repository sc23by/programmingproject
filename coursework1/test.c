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

// input is a map name, opens it, and checks some requirements
int getMap (char* mapName) { 
    // print selected mapName 
    // open file mapName
    printf("%s selected.",mapName);

    char line[MAX_LENGTH];
    FILE *file;
    file = fopen(mapName, "r");

    // if file mapName = NULL
    if (file == NULL) {
        printf("Error: Bad filename");
        return 2;
    }
    // print error code
    // return 2

    // check map is not too small or big
    int countColumns = 0;
    int countRows = 0;

    while (fgets(line, MAX_LENGTH, file) != NULL) {
        countRows++;
        if (strlen(line) - 1 < 5 || strlen(line) - 1 > 100) {
            printf("Error: Map invalid format");
        }
    }

    if (countRows < MIN_LENGTH || countRows > MAX_LENGTH) {
        printf("Error: Map invalid format");
        return 2;
    }

    //storing in struct
    maze.rows = countRows;
    maze.columns = countColumns;

    rewind (file);
    while (fgets(line, MAX_LENGTH, file) != NULL) {
        for (int i = 0; i < countRows; i++) {
            for (int j = 0; j < countColumns; j++) {
                maze.mapCharacters[i][j] = 
            }
        }
    }


    // read file mapName and 
    // if length < 5 or length > 100
    // print error code
    // return 2



    // check map contains exactly one 'S' and 'E'
    // if map does not contain one 'S' or one 'E'
    // print error code
    // return 2

    // check map has all rows same length and columns same length
    // if not all rows are the same length
    // print error code
    // return 2

    // check map only contains characters 'S','E','#',' '
    // if not, print error code
    //return 2

    // number of rows and columns, then store struct 
    // and store map in 2d array in the struct
    

    //return 0
}

int main (int argc, char* argv[])  {
    if (argc != 2) { 
        printf("Usage: mazeGame <filename>\n");
        return 1;
    }

    getMap (argv[1]);

    // show intructions and map first:
    // showInstructions ()
    // showMap ()
}

