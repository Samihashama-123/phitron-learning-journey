#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int size = strlen(s);
    int i = 0;
    int j = size - 1;
    int flag =0;
    while (i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
        if(s[i] != s[j]){
            printf("NO");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("YES");
    }
    return 0;
}