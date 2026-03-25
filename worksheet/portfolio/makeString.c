
/*
Name: Fizeen Farooq
Student ID: 201877255
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer

    char buffer[100];

    strcpy(buffer, "");


    for (int i = 1; i < argc; i++) {

        strcat(buffer, argv[i]);

        if (i < argc -1) {

            strcat(buffer, " ");

        }
        
    }


    // process the command-line data using appropriate string functions

    printf("%s\n", buffer); // use only this single print statement in your submitted code

    return 0;
}