#include <stdio.h>
// version1
int cpr(char s[],int left,int right) {
    return (s[left]==s[right])?((left<=right)?cpr(s,++left,--right):1):0;
}
// version2
int cpr2(char s[]){
    int len=0;
    while (s[len+1]) len++;
    for (int i=0;i<len;i++,len--) {
        if (s[i]!=s[len]) return 0;
    }
    return 1;
}
int main() {
    char str[50];
    int len=0;
    scanf("%45s",str);
    while (str[len]) len++;
    printf("%d\n",--len);
    int result=cpr(str,0,len);
    printf("%d\n",result);
    return 0;
}