#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk>=5000){
        printf("Cox's Bazar jabo\n");
        if(tk>=10000){
        printf("Saint martin jabo\n");
        }
        else{
            printf("ferot chole asbo\n");
        }
    }
    else{
        printf("Kothau jabo na");
    }
    return 0;
}