#include <stdio.h>

int main() {
    for (int y = 1; y<10; y++) {
        for (int x = 1; x<=(10-y); x++) {
            printf("%d*%d=%d",y,x,x*y);
            printf("\t|");
        }
        printf("\n");
    }
    return 0;
}