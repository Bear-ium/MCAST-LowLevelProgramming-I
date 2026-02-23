#include <stdio.h>

int main(void){
    printf("Enter a number: ");
    int num;
    int check = scanf("%d", &num);

    // if(check) is the same like saying if check is not zero
    if (check){ //if scanf was successful it will return a value greater than 0
        printf("You entered %d and the value of the check is %d \n", num, check);
    } else { //if scanf is not successful maybe because of a type mysmatch it returns a 0
        printf("Invalid input");
    }

    // how do we solve arithmetic overflow issue with scanf??
    //limit the number of digits read frm the buffer
    // int check = scanf("%3d", &num); //this will accept only a number with 3 digits

    
}