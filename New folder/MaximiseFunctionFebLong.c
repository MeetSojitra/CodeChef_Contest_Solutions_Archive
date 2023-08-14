#include<stdio.h>

int main()
{
    int te,i=1;
    scanf("%d",&te);
    for ( i = 1; i <= te; i++)
    {
        long int n,j=0;
        scanf("%ld",&n);
        long int num[n];
        for ( ; j < n; j++)
        {
            
            scanf("%ld",&num[j]);
        }
        
        long int min,max,sum,sum1;
        min=max=num[0];
        for(j=0;j<n; j++)
        {
            if(min>num[j])
            {
                min=num[j];
            }   
            if(max<num[j])
            {
                max=num[j];
            }     
        } 
        sum=max-min;
        sum1=sum*2;

        printf("%ld\n",sum1);
    }
    return 0;
}

