#include<stdio.h>
int main(){
    int n,star=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int i=1; i<=star; i++){
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}