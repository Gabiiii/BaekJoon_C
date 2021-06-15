#include <stdio.h>

int main(){
    int peo, size;
    int arr[5]={};

    scanf("%d %d", &peo, &size);

    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
        arr[i]=arr[i]-(peo*size);
    }

    for(int i=0;i<5;i++)
        printf("%d ", arr[i]);
    
    return 0;
}