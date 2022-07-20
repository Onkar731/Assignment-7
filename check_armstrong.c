/* WAP to check whether a given number is Armstrong number or not */

#include<stdio.h>
int main() {

    int num, rem, sum = 0, temp;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;
    while(num){
        rem = num % 10;
        sum += rem*rem*rem;
        num /= 10;
    }

    if(temp == sum){
        printf("%d is Armstrong number", temp);
    }
    else{  
        printf("%d is Not Armstrong number",temp);
    }

    return 0;
}