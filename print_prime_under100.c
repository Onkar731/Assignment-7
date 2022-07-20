/* WAP to print all prime numbers under 100 */

#include<stdio.h>
int main() {

    int i, n;

    for(n = 1; n <= 100; n++){
        for(i = 2; i < n; i++){
            if(n % i == 0){
                break;
            }
        }
        if(i == n){
            printf("%d ", n);
        }
    }

    return 0;
}