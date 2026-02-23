#include <stdio.h>
#include <limits.h>

int main (void){
    short int sNum;
    int iNum;

    // what happens when we try to store an integer in a shot int?
    // the compiler will not give a warning
    // the assignment statement will store the correct result as long as
    // the value in the integer is not larger than the largest value it can fit in the short int

    iNum = 50;
    sNum = iNum;
    printf("Short int: %hd \n", sNum);

    iNum = 75757558;
    sNum = iNum;
    printf("Short int: %hd \n", sNum);

    // For this it requires gcc version 15 or later
    // printf("Integer Bit pattern: %b \n", iNum);
    // printf("Short Integer Bit pattern: %b \n", sNum);

    // How do we solve this issue?
    // Does typecasting solve the problem of overflow? No
    //sNum = (short int)iNum;

    // Good programming practice requires the programmer to check if the value fits before assigning the value
    if (iNum <= SHRT_MAX){
        sNum = (short int)iNum;
    } else {
        printf("Number is too large");
    }

    // What happens when you store a float in an integer
    float fNum = 1.5f;

    iNum = fNum; //iNum = (int)fNum is the better way to code
    printf("\nInteger: %d ", iNum);
}