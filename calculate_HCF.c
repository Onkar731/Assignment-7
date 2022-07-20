/* WAP to calculate HCF of two numbers */

#include<stdio.h>
int main() {

    int num1, num2, hcf;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    for(hcf = (num1 > num2? num1: num2); hcf >= 1; hcf--){
        if(num1 % hcf == 0 && num2 % hcf == 0){
            printf("HCF of %d and %d is %d", num1, num2, hcf);
            break;
        }
    }

    return 0;
}