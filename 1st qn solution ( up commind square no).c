// QN 1:
#include<stdio.h>
#include<math.h>
int nextPerfectSquare();
int main()
{
    nextPerfectSquare( );

}
int nextPerfectSquare( )
{
    int n,i;
    printf(" How many time you wnat to enter differnt number??\n");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {   
        int icheck,num;
        float fcheck;

        printf("Enter  the number to print upcoming perfect square number\t");
        scanf("%d",&num);
        if (num>=0)
        {
            fcheck= sqrt(num);
            icheck = fcheck;
            if(icheck==fcheck)
            {
                printf("\n%d\n",(icheck+1)*(icheck+1));
            }
            else
            {
                printf("\n%d\n",(icheck+1)*(icheck+1));
            }
        }
        else 
        {
            printf("\n0\n");
        }
    
    }

    
}