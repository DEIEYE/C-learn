#include <stdio.h>

int main() {
    char ch,prev,next;
    ch = getchar();
    getchar();
    if (!(ch >= 'A' && ch <= 'Z')) {
        printf("wrong text");
        return 1;
    }
    prev = (ch-3 >= 'A') ? ch-3 : '?';
    next = (ch+3 <= 'Z') ? ch+3 : '?';
    for (int i = 0; i<3; i++) {
        if (i == 0) {
            putchar(prev);
        } else if (i == 1) {
            putchar(ch);
        } else {
            putchar(next);
        }
    }
    return 0;
}