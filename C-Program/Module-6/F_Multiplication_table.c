#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int multi=1;
    for(int i=1; i<=12; i++){
        multi = N * i;
        printf("%d * %d = %d\n", N,i,multi);
    }
    return 0;
}