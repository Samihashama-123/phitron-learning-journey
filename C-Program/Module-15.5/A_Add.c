#include<stdio.h>
void sum(int a,int b){
    int add = a+b;
    printf("%d", add);
}
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    sum(x,y);
    return 0;
}