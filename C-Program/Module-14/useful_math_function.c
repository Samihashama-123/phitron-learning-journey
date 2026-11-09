#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d", &a);
    int c = ceil(4.2);
    int f = floor(a);
    int r = round(a);
    int ans = abs(-10);
    int p = pow(3,2);
    int sq = sqrt(64);
    printf("%d\n %d\n %d\n %d\n %d\n %d\n", c,f,r,ans,p,sq);
    return 0;
}