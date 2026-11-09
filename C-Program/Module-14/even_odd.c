#include<stdio.h>
int find(int a){
    int flag =0;
    if(a%2 == 0){
        return flag =1;
    }
    else{
        return flag =0;
    }
}
int main(){
    int a;
    scanf("%d", &a);
    int val = find(a);
    if(val == 1){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}