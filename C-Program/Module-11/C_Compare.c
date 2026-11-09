#include<stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s", &a,&b);
    int val = strcmp(a,b);
    if(val>0){
        printf("%s", b);
    }
    else if (val<0){
        printf("%s", a);
    }
    else if(val == 0){
        printf("%s", a);
    }
    
    
    // int i =0;
    // while(1){
    //     if(a[i]=='\0' && b[i]=='\0'){
    //         printf("%s", a);
    //         break;
    //     }
    //     else if(a[i]=='\0'){
    //         printf("%s", a);
    //         break;
    //     }
    //     else if(b[i]=='\0'){
    //         printf("%s", b);
    //         break;
    //     }
    //     else if(a[i]<b[i]){
    //         printf("%s", a);
    //         break;
    //     }
    //     else if(a[i]>b[i]){
    //         printf("%s", b[i]);
    //         break;
    //     }
    //     else if(a[i] == b[i]){
    //         i++;
    //     }
    // }
    return 0;
}