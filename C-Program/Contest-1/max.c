#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    int max = INT_MIN;
    for(int i=0; i<N; i++){
      if(A[i]>max){
        max = A[i];
      }       
}
printf("%d", max);
}