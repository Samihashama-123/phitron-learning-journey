#include<stdio.h>
int aschii(char c){
    int ans = c;
    return ans;
}
int main(){
    char c;
    scanf("%c", &c);
    int ans = aschii(c); 
    printf("%d", ans);
    return 0;
}