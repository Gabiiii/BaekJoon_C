#include <stdio.h>

void main(){
    int no=0,i,min=10000,max=0;
    scanf("%d", &no);
    int arr[no];
    for(i=0;i<no;i++){
        scanf("%d", &arr[i]);
        if(min>arr[i])  min=arr[i];
        if(max<arr[i])  max=arr[i];
    }
    printf("%d", min*max);
}