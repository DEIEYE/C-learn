#include <stdio.h>

int main() {
    int A[5];
    for (int i=0;i<5;i++) {
        if (A[i]>=0) {
            scanf("%d",&A[i]);
        }
    }
    int sum = 0;
    for (int i=0;i<5;i++) {
        sum += A[i];
    }
    printf("所有整数的和是%d",sum);
    scanf("%d",&sum);
    return 0;
}