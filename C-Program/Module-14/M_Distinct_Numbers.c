#include<stdio.h>
#include<stdbool.h>
void count(int a[ ], int n){
    int count =0;
    for(int i=0; i<n; i++){
    bool flag = true;

        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            count++;
        }
    }
    printf("%d", count);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    count(a,n);
    return 0;
}