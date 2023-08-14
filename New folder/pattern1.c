#include<stdio.h>
void main()
{
    int te,i=1;
    scanf("%d",&te);
    for ( i = 1; i <= te; i++)
    {
        int num,j=1;
        scanf("%d",&num);
        for (  j= 1 ; j<num; num--)
        {
            for ( j = 1; j < num; j++)
            {
                printf("%d",j);
            }
            
			for ( j = 1; j < num-(num-1); j++)
            {
                printf("*");
            }
            
            
            for ( j = num-1; j>0 ; j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
    ///return 0;
}
