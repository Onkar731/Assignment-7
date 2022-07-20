/* WAP to print all prime numbers between two given numbers */

#include<stdio.h>
int main() {

    int num1, num2, i;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1,&num2);

    while(num1 <= num2){
        for(i = 2; i < num1; i++){
            if(num1 % i == 0){
                break;
            }
        }
        if(i == num1){
            printf("%d ", num1);
        }
        num1++;
    }

    return 0;
}