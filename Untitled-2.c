#include<stdio.h>
int main(){
    printf("enter marks :");
    int marks=0;
    scanf("%d",&marks) ;
    
    if(marks>85 && marks<100)
    {
        printf("grade A  good,keep it up"); 
    }
    else if(marks>70 && marks<84)
    {printf("grade B  nice,keep going");} 
    else if(marks>55 && marks<69){
        printf("grade C  keep working hard");
    }
    else if(marks>40 && marks<54)
    {
        printf("grade C  gonna work hard next time");
    }
    else{
        printf("better luck next time");
    }
    
}