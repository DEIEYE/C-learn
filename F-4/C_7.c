#include <stdio.h>

int max(int a,int b) {
    return (a>b)?a:b;
}
int min(int a,int b) {
    return (a<b)?a:b;
}

int main() {
    int n1,n2,choice,reuslt=0;
    int (*fp)(int,int) = NULL;
    scanf("%d %d %d",&n1,&n2,&choice);
    fp = (choice == 1) ? max : min;
    reuslt = fp(n1,n2);
    printf("%d\n",reuslt);
    return 0;
}