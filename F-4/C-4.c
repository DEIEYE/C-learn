#include <stdio.h>

int f(int a){
    return a?a*f(a-1):1;
}
int sf(int a,int b){
    return f(a)+f(b);
}

int main() {
    int a,b,s;
    while (1) {
        printf("please enter 2 numbers");
        scanf("%d %d\n", &a, &b);
        if (a == 0 && b == 0) return 0;
        s = sf(a,b);
        printf("sum:%d\n", s);
    }
}