#include<stdio.h>
int main(){
    char a[50];
    // gets(a);
    fgets(a,19,stdin);
    printf("%s", a);
    return 0;
}