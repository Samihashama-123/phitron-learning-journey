#include<stdio.h>
int main(){
    int A,B,C;
    char Q,eq;
    scanf("%d %c %d %c %d", &A,&Q,&B,&eq,&C);
    int ans;
    if(Q== '+'){
        ans = A+B;
    }
    else if(Q == '-'){
        ans = A-B;
    }
    else if(Q == '*'){
        ans = A*B;
    }
    if( ans == C){
        printf("Yes");
    }
    else{
        printf("%d", ans);
    }
    return 0;
}