#include <stdio.h> 

int main() {

    int num1 = 1;
    int num2 = 6;
    int sum, diff;
   
    sum = num1 + num2;

    if ( num1 > num2){
        diff = num1 - num2; 
    } else {
        diff = num2 - num1;
    }
    printf("The sum of the numbers are %d and the difference between them are %d ", sum, diff);
    return 0;
}