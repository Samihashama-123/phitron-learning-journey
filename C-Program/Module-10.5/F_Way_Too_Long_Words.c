#include<stdio.h>
#include<string.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        char a[101];
        scanf("%s", &a);
         int size = strlen(a);
         if(size<=10){
        printf("%s\n", a);
       }
       if(size>10){
        printf("%c%d%c\n",a[0],size-2,a[size-1]);
       }
    }
   
    return 0;
}