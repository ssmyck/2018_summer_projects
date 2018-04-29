#include <stdio.h>
#include <string.h>

char string[100];

int main(int argc, char** argv)
{
    char* character = argv[1];

    printf("You entered in %d words!\n", (argc-1));

    printf("Char 1 is %s\n", character);

    //string[argv] = argv;
}