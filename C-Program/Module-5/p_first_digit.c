#include<stdio.h>
int main(){
    int X;
    scanf("%d", &X);
    int div = X/1000;
    if(div%2 == 0){
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}