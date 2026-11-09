#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s", &a,&b);
    int len = strlen(a);
    int size = strlen(b);
    for(int i=0; i<=size; i++){
        a[i+len]=b[i];
    }
    printf("%s %s", a,b);
    return 0;
}