#include <stdio.h>

int main() {
    int n = getchar()-'0';
    getchar();
    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i); j++) putchar(' ');
        for (int j=0; j<(i*2+1); j++) putchar('*');
        putchar('\n');
    }
    printf("\n\n");
    while (1) {
        n = getchar()-'0';
        if (n % 2 == 0) {
            for (int i=0; i<n/2; i++) {
                for (int j=0; j<(n/2-i); j++) putchar(' ');
                for (int j=0; j<(i*2+1); j++) putchar('*');
                putchar('\n');
            }
            for (int i=n/2-1; i>=0; i--) {
                for (int j=0; j<(n/2-i); j++) putchar(' ');
                for (int j=0; j<(i*2+1); j++) putchar('*');
                putchar('\n');
            }
        } else {
            for (int i=0; i<n/2+1; i++) {
                for (int j=0; j<(n/2-i); j++) putchar(' ');
                for (int j=0; j<(i*2+1); j++) putchar('*');
                putchar('\n');
            }
            for (int i=n/2-1; i>=0; i--) {
                for (int j=0; j<(n/2-i); j++) putchar(' ');
                for (int j=0; j<(i*2+1); j++) putchar('*');
                putchar('\n');
            }
        }
    }
    return 0;
}