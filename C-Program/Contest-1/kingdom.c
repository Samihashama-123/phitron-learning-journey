#include<stdio.h>
int main(){
    int A,I,P,E;
    scanf("%d\n%d\n%d\n%d", &A,&I,&P,&E);
    if(21<=A<=35){
    if( 21<=A<30 && I>=80  && P>=70 && E>=2){
            printf("Selected");
        }
   if(30<=A<=35 && I>=95 && P>=90){
            printf("Selected");
        }
}
    else  {
        printf("Rejected");
    }
    
    return 0;
}