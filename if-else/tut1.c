#include<stdio.h>
int main(){
    int cp, sp, n;
    printf("enter selling price :");
    scanf("%d", &sp);
    printf("enter cost price :");
    scanf("%d", &cp);
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");

    }
    if(cp==sp){
        printf("no profit no loss");
    }
    return 0;
}