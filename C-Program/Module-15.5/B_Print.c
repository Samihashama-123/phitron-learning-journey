#include<stdio.h>
int fun(int n){
    return n;
}
int main(){
    int n;
    scanf("%d", &n);
    fun(n);
    for(int i=1; i<n; i++){
        printf("%d ",i);
    }
    printf("%d", n);
    return 0;
}