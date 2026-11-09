#include<stdio.h>
#include<stdbool.h>
int main(){
    int num1 =10;
    num1 =20;
    float f = 4.56;
    char c = '@';
    bool a = true;
    bool b = false;
    printf("%d\n", num1);
        printf("%f\n", f);
            printf("%c\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
            int p;
            float ff;
            char cc;
            scanf("%d %f %c", &p,&ff,&cc);
            printf("%d %.2f %c",p,ff,cc);


    
    return 0;
}