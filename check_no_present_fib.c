/* WAP to check whether a given number is there in the Fibonacci series or not */

#include<stdio.h>
int main() {

    int num, a = 0, b = 1, add = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    // performing looping till value of add variable is lessthan equal to the num
    while(add <= num) {

        if(add == num) {
            printf("%d is present in Fibonacci series", num);
            break;
        }
        add = a + b;   
        a = b;
        b = add;        
    }
    // checking if add has larger value than entered value by user
    if(add > num){
        printf("%d is not present in Fibonacci series",num);
    }
    return 0;
}