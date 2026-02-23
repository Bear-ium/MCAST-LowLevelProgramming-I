#include <stdio.h>

int main(void)
{
    char ch = 'A';
    short int sNum = -5;
    int iNum = 12345;
    long int lNum = 15789323; // use L to force to compiler to read the num as long
    long long int llNum = 123423411234LL;

    // similary with real numbers with a dp, the compiler stores it as a double
    // use f to force the number to be truncated to a float
    float fNum = 1.5f; // 1.5 is double, place f at the end to force it to become a float

    double dNum = 1.2345e02; // this means 1.2345 x 10 to the power of 2

    long double ldNum = 1.2345e22;

    // display the numbers
    printf("The letter is %c and its code is %d\n", ch, ch);
    printf("The value in short int is %hd\n", sNum);
    printf("The value in int is %d\n", iNum);
    printf("The value in long int is %ld\n", lNum);
    printf("The value in long long int is %lld\n", llNum);

    printf("The value of the float is %5.3f\n", fNum);
    printf("The value of double is %e and %lf\n", dNum, dNum);
    printf("The value in long double is %Lf\n", ldNum);

    // What is the size of each type? use sizeof()
    printf("Type character has %zu bytes\n", sizeof(char)); // or sizeof(ch)
    printf("Type short int has %zu bytes\n", sizeof(short int));
    printf("Type int has %zu bytes\n", sizeof(int));
    printf("Type long int has %zu bytes\n", sizeof(long int));
    printf("Type long long int has %zu bytes\n", sizeof(long long int));
    printf("Type float has %zu bytes\n", sizeof(float));
    printf("Type double has %zu bytes\n", sizeof(double));
    printf("Type long double has %zu bytes\n", sizeof(long double));
    printf("Type _Bool has %zu bytes\n", sizeof(_Bool));
}