#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    long long int arr[N];
    long long int sum =0;
    for(int i=0; i<N; i++){
        scanf("%lld", &arr[i]);
    }
    for(int i=0; i<N; i++){
       sum += arr[i];
    }
    if(sum < 0){
        sum *= -1;
    }
    printf("%lld", sum);
    return 0;
}