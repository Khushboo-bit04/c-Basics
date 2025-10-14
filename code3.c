#include<stdio.h> //preprocessor directive 
int main() { //starting point 
    int a,b,sum; //local variables 
    printf ("Enter two numbers:  ");
    scanf ("%d %d", &a,&b);
    sum=a+b; //Logic
    printf("sum=%d", sum);
    return 0; //End of program 
}