#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk>=5000){
        printf("Dhaka jabo\n");
    }
    if(tk>=10000){
        printf("Bogura jabo\n");
    }
    if(tk>=12000){
        printf("Khulna jabo\n");
    }
    else{
        printf("ferot chole asbo");
    }
    
    return 0;
}