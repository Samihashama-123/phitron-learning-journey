#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int val =1;
    int space = n-1;
    for(int i=1; i<=n; i++){
        for(int i=1; i<=space; i++){
            printf(" ");
        }
        for(int i=1; i<=val; i++){
            printf(" %d", i);
        }
        printf("\n");
        val++;
        space--;
    }
    return 0;
}