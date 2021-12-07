#include <stdio.h>

int main() {
    int curr;
    int i;
    int max = 0;
    for (i = 0; i < 10; i++) {
        printf("Input the next number: ");
        scanf("%d", &curr);
        if(curr > max){
            max = curr;
        }
    }
    printf("The highest number entered was: %i", max);
    return 0;
}
