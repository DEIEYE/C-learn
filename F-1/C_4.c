#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            sum += i;
        }
        i++;
    }
    printf("Sum of even numbers from 1 to 100 is: %d\n", sum);
    return 0;
}