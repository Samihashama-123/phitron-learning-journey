#include<stdio.h>
int main(){
    int x =10;
    printf("%d\n", x);
    int* ptr;
    ptr = &x;
    printf("%p\n", &x); //x er address
    printf("%p\n", &ptr); // pointer er address
    *ptr = 200; //dereferences kore x er value change korlam
    printf("%d", *ptr); //deferences maddhome x er value print krlam
    return 0;
}