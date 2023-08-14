#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
        if (num%i==0)
        {
            sum=i;
        }  
    }
    printf("%d",sum);
    
}