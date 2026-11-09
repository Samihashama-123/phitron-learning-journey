#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star=n;
    for(int j=1; j<=n; j++){
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}