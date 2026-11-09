#include<stdio.h>
int main(){
    int n;
    int star = 1; 
    scanf("%d", &n);
        int space = n-1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int i=1; i<=star; i++){
            printf("*");
        }
        printf("\n");
        space--;
        star = star+2;
    }
    return 0;
}