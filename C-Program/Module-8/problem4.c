#include<stdio.h>
int main(){
    int N,v;
     int sum1 =0;
    int sum2 =0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &v);
        if(v>0){
            sum1 = sum1+v;
        }
        else{
            sum2 = sum2+v;
        }
    }
   
    printf("%d %d", sum1,sum2);
}
