#include "library.h"

int getMap (char mapName) // input is a map name, opens it, and checks some requirements
{ 
    char line[MAX_LENGTH];
    FILE *file;
    // print selected mapName 
    // open file mapName
    file = fopen(mapName, "r");

    // if file mapName = NULL
    if (file == NULL) {
        printf("Error: Bad filename");
        return 2;
    }
    // print error code
    // return 2

    // check map is not too small or big
    int countColumns = 0
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
    for (int i = 0; i < countRows; i++) {
        for (int j = 0; j < countColumns; j++) {
            maze.mapCharacters[i][j] = {}
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

void showInstructions () //shows instructions
{ 
    // print instructions on w,a,s,d,m,q
}

void showMap () //shows map
{ 
    //print map
    //using nested for loops to print a 2d array
}

int checkMovement (char input, int placeHolder) { 
    // input goes to switch then does some checks to see if valid 
    // then goes to movement function to do the movements if they are valid
    // then new placeHolder value is returned
    
    // read current position of X in maze [i][j] 
    // store as [i] = int oldi and [j] = int oldj


    // switch (input)

        //case w
        // in 2d array [j] (column) increase by 1
        // store [i] = int new i and [j] = int new j
        // read character (newPlace = character)
        // return newPlace

        //case a
        // in 2d array [i] (column) decreases by 1
        // store [i] = int new i and [j] = int new j
        //read character (newPlace = character)
        //return newPlace

        //case s
        // in 2d array [j] (column) decreases by 1
        // store [i] = int new i and [j] = int new j
        //read character (newPlace = character)
        //return newPlace

        //case d
        // in 2d array [i] (column) increase by 1
        // store [i] = int new i and [j] = int new j
        //read character (newPlace = character)
        //return newPlace


    //if int newi < 0 or newi > maze int columns
        //print error code

    //if int newj < 0 or newj > maze int rows
        //print error code


    // if newPlace = '#' 
        // print error code

    // if newPlace ' '
        // movement(oldi,oldj,newi,newj,placeHolder)
        // int placeHolder = 0

    // if newPlace = 'S' 
        // movement(oldi,oldj,newi,newj,placeHolder)
        // int placeHolder = 1

    // if newPlace = 'E'
        // print finish maze string
        // exits program

    //return placeHolder
}

void move (int newi, int newj, int oldi, int oldj, int placeHolder) //executes the movement 
{
    // in 2d array set maze[newi][newj] = 'X'

    // if placeHolder = 0
    // maze[oldi][oldj] = ' '  

    // if placeHolder = 1
    // maze [oldi][oldj] = 'S'
}



/* list of error codes/ print statements to use:

for wrong number of arguments entered:
Usage: mazeGame <filename>

for files that dont exist
Error: Bad filename

for when a wall is in the way:
Error: Cannot move there

for invalid input errors:
Error: Invalid input

for any map formatting errors:
Error: Map invalid format

for when map is selected:
"mapName" selected:

for displaying instructions:
-- Instructions --
W to move up
A to move left
S to move down
D to move right
M to view the map
Q to quit

-- Rules --
# are walls, you cant go through them
S is the starting point
E is the finishing point
X is your position

------------------------------

Make your way to the E to win!

------------------------------

for when the map is displayed:
-- Map --
(MAP)....
.........


for when they get to 'E':
Congratulations you finished the maze!
*/

