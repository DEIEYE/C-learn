#include <stdio.h>

double avr(int arr[],int len) {
    double result = 0;
    for (int i=len;i;i--) result+=arr[i-1];
    return result/len;
}
int main() {
    int arr[] = {1,2,3,4,5};
    printf("%lf",avr(arr,sizeof(arr)/sizeof(arr[0])));
    return 0;
}