#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m<40)
    {
     printf("Failed");
    }
    elseif(m>=40 && m<60)
    {
     printf("Second class");
    }
    
    elseif(m>=60 && m<70)
    {
    printf("First class");
    }
    
    
    else
    {
    printf("Distinction");
    
}
}
