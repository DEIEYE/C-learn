#include <stdio.h>

int main() {
    int l[10][10] = {0};
    l[0][0] = 1;
    for (int i=1; i<10; i++) {
        l[i][0] = 1;
        l[i][i] = 1;
        for (int j=1; j<i; j++) {
            l[i][j] = l[i-1][j] + l[i-1][j-1];
        }
    }
    for (int i=0; i<10; i++) {
        for (int j=0; j<=i; j++) {
            printf("%-4d ", l[i][j]);
        }
        printf("\n");
    }
    return 0;
}