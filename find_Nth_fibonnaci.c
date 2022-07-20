/* WAP to find the Nth term of the Fibonnaci series */

#include<stdio.h>
int main() {

    int i, n, temp;
    long a = 0, b = 1, add = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    // if user enter 1
   if(n == 1) {
    printf("%d term is %d", n, a);
   }
   // if user enter 2
   else if(n == 2) {
    printf("%d term is %d", n, b);
   }
   // if user enter other than 1 and 2
   else {
    temp = n - 2;
    while(temp){
        add = a + b;
        a = b;
        b = add;
        temp--;
    }
    printf("%d term is %d", n, add);
   }

    return 0;
}