#include <stdio.h>
#include <stdlib.h>

int ();
{
    //STRING LENGTH
    //identify the character and identify variable
    //identify length required
    char name[50];
    //now we ask user for name
    printf("enter your name: ");
    scanf("%s", name);
    //we print the entered name back
    printf("hello, %s!\n",name);
    //find and print the length of the string
    printf("your name has %lu characters.\n",strlen(name));

    return 0;
}
