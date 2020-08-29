#include <stdio.h>

// To build this file run the following
// cl main.c

int main(int argc, char const *argv[])
{
    char *name1 = "Joshua Van Daalen";

    // print the string by using %s
    printf("%s\n\n", name1);
    
    char *name2 = name1;

    // print the memory value using %p
    printf("name1 --> %p\n", name1);
    printf("name2 --> %p\n", name2);

    name2 += 2;

    printf("name1 --> %p\n", name1);
    printf("name2 --> %p\n\n", name2);

    // replace the value of s with $
    *name2 = '$';

    printf("%s\n", name1);

    return 0;
}
