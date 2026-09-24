#include <stdio.h>
int pow2(int x,int n) {
    int r =1;
    for (;n>0;n>>=1,x*=x){
        if (n & 1) r *= x;
    }
    return r;
}
int main() {
    printf("%d",pow2(12,3));
    return 0;
}