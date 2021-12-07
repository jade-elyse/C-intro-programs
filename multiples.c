#include <stdio.h>

int main() {
    int limit;
    int factor;
    int num;
    printf("What's the limit on the iteration you want printing?  ");
    scanf("%d", &limit);
    printf("What factor would you like multiples of?  ");
    scanf("%d", &factor);


    for(int i = 1; i <= limit; i++){
        num = factor*i;
        printf("%d\n", num);
    }
    
}