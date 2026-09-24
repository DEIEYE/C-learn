#include <stdio.h>

int *get_arr() {
    static int arr[]={1,2,3,4,5};
    return &arr[0];
}
int main() {
    int sum = 0;
    int *ptr = get_arr();
    for (int i = 0;i<5;i++) {
        sum += *(ptr+i);
    }
    printf("%d\n",sum);
    return 0;
}