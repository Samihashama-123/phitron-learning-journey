#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for( int i=1; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    int min_idx;
    for(int i=1; i<N; i++){
        if(min > arr[i] ){
            min = arr[i];
            min_idx = i;
        }
         
    }
    printf("%d %d", min, min_idx);
   
    return 0;
}