#include<stdio.h>
char aschii(char c){
    char ans = c-32;
    return ans;
}
int main(){
    char c;
    scanf("%c", &c);
    char ans = aschii(c); 
    printf("%c", ans);
    return 0;
}