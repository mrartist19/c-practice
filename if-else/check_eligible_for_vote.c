#include<stdio.h>
int main(){
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    printf("you are entered %d as your age\n", age);

    if(age>=18){
        printf("you are eligible for vote\n");

    }
    else if(age>=10){
        printf("you are a kid so you are not eligible for vote\n");
    }
    else{
        printf("you are not eligible for vote\n");
    }
    
   return 0;

}
