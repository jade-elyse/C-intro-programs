#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input your longest side: ");
    scanf("%d", &a); // A is biggest.
    printf("Input your second longest side: ");
    scanf("%d", &b); // b is next
    printf("Input your smallest side: ");
    scanf("%d", &c); // c is smallest!

    // Your code here. Assume a > b > c.
    int a2 = a*a; 
    int b2 = b*b;
    int c2 = c*c;

    if(a2=b2+c2){
        printf("\nThe triangle is right angled");
    } else {
        printf("\nThe triangle is not right angled");
    }

}