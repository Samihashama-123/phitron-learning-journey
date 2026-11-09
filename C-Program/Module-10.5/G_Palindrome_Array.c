#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int temp;
    int i = 0;
    int j=n-1;
    int flag =1;
    while(i<j){
        temp =arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        if(arr[i]!=arr[j]){
            printf("NO");
            flag = 0;
            break;
         }
    }
    if(flag ==1 ){
              printf("YES");
    }
         
          
         
    return 0;
}
