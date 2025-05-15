#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Odd numbers from 1 to %d are:\n", num);
    for(int i = 1; i <= num; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
