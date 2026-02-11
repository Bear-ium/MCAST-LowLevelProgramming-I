#include <stdio.h>

/*
Write a program to ask the user for the name and dispaly a greeting
Enter Name: RandomName
Output: Good morning, RandomName!
*/

int main(void)
{
    /*
    in C, there is no string type,
    you need to use either;
    - an array of Characters
    - or pointer to char(see later)
    */
    char name[50];

    printf("Enter your name: ");   // Display message
    int check = scanf("%s", name); // Get string from keyboard

    if (check) // if check is not zero, continue
    {
        printf("Good morning, %s\n", name);
    }

    /*
    A string in C always ends with a NULL char \0
    This is needed so that the compiler will know where the last
    char of the string is.

    If the name is Bob, then in memory the string is Bob\0

    String handling functions assume that your string ends with \0
    otherwise it won't work

    You do not need to worry about attaching NULL when reading
    a string, because the compiler attaches it for you
    */
    for (int i = 0; i < 50; i++)
    {
        int code = (int)name[i];
        if (code == 0) // if it is the NULL char, display \0
        {
            printf("# ");
        }
        else
            printf("%c ", name[i]);
    }
    /*
    To solve this overflow issue with strings, we need to use
    scanf() correctly.
    LIMIT the number of characters enter by using the field with
    >> scanf("%9s", name) <<

    scanf("%9s", name) this will tell the compiler to only get the first
    9 characters from the buffer. WHY 9 and not 10?
    Because we need to leave space for the NULL character.
    */

    return 0;
}