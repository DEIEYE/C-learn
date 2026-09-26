#include <stdio.h>

int main() {
    for (int i=0;i<5;i++) {
        printf("开始");
        char str[20];
        scanf("%5s",&str);
        printf("%s",str);
    }
    return 0;
}