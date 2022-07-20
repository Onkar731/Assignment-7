/* WAP to print the N terms of the Fibonnaci series */

#include<stdio.h>
int main() {

    int i, n;
    long a = 0, b = 1, add = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    // Fibonnaci series ==> Sum of previous two terms is the next term in series 
    for(i = 1; i < n-1; i++) {
        add = a + b;
        printf("%ld ", add);
        a = b;
        b = add;
    }
    return 0;
}