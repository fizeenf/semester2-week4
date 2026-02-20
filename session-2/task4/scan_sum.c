
#include <stdio.h>

int main( void ) {

    // define suitable data
    int a, b;
    char plus, equals; 

    int count = scanf("%d %c %d %c", &a, &plus, &b, &equals);

    // use scanf to read from the terminal

    // print the output from scanf and the data values 
    printf("Read %d values\n", count);
    printf("a= %d, plus = %c, b= %d, equals= %c\n", a, plus, b, equals);

    return 0;
}