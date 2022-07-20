/* WAP to check whether two given numbers are co prime or not */

#include<stdio.h>
int main(){

    int num1, num2, hcf;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    for(hcf = (num1 > num2? num1: num2); hcf >= 1; hcf--){
        if(num1 % hcf == 0 && num2 % hcf == 0){
            if(hcf == 1){
                printf("%d and %d are co-prime", num1,num2);
                break;
            }
            printf("%d and %d are not co-prime", num1,num2);
            break;
        }
    }

    return 0;
}