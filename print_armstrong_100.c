/* WAP to print all Armstrong numbers under 1000 */

#include<stdio.h>
int main() {

    int num, rem, sum, temp;

    for(num = 0; num <= 1000; num++){
        temp = num;
        sum = 0;
        while(num){
            rem = num % 10;
            sum += rem*rem*rem;
            num /= 10;
        }
        if(sum == temp){
            printf("%d ", sum);
        }
        num = temp;
    }

    return 0;
}