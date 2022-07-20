/* WAP to print next Prime number of a given number */

#include<stdio.h>
int main() {

    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(1){
        num++;
        i = 2;
        while(i < num){
            if(num % i == 0){
                break;
            }
            i++;
        }
        if(i == num){
            printf("%d", num);
            break;
        }
    }

    return 0;
}