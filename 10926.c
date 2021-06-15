#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    scanf("%s", name);
    strcat(name,"??!");
    printf("%s",name);
    return 0;
}