#include <stdio.h>
/*
Introduction to Pointers

What is a pointer?
    = a pointer is a special variable that stores a memory address
    = if a pointer stores a memory address we say the pointer is POINTING to that memory address
How do you declare a pointer?
    = the reserved word pointer does not exist!!
    = a pointer has a DERIVED TYPE, it depends on the type of variable it will point to
    = a pointer can point to anything, int | char | long long int | and even another pointer
    = to declare a pointer use a * AFTER the pointer type
How do you fill a pointer
Accessing the memory to which the pointer is pointing (DEREFERECNING) using
how do you display a pointer
*/

int main(void){
    //declare a pointer to char
    char* charptr;

    //declare a pointer to int
    int* intptr;

    //declare a pointer to a pointer to int
    int** doubleptr;

    //declare a char variable called ch and fill it up with the value 'A'
    char ch = 'A';

    //declare a pointer called ptr to point to the char variable, ch
    char* ptr;
    
    //set the pointer to point to ch - store the address of ch in the pointer
    ptr = &ch; // here & is the address opreator, it will return the adress of ch

    printf("The value of ch is %c \n", ch);
    printf("The address of ch is %p \n", &ch);

    
    // change the value of the character, using the pointer
    // remember that if the ptr is pointing to a cell, the cell is *ptr
    *ptr = 'B'; // dereferening the pointer, p is an address        *p is a character

    
    printf("The address stored in the pointer is %p \n", ptr);
    printf("The new value of the character is %c \n", ch);
}