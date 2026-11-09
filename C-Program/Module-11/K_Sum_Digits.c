#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char a[n];
    int sum =0;
    for(int i=0; i<n; i++){
        scanf("%s", a);
        int val = a[i]-48;
         sum = sum+val;
    }
    printf("%d", sum);
    return 0;
}