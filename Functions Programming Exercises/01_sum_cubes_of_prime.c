// To print the sum of cubes of prime numbers upto n using function
/* 1 is  neither a prime nor a composite number */

#include <stdio.h>
#include <math.h>
int SumCubesOfPrime(int n);
void main()
{
    int n,sum;
    printf("Enter the number(upper limit):");
    scanf("%d",&n);
    sum=SumCubesOfPrime(n);
    if(sum==-1)
        printf("Invalid Input");
    else
        printf("%d",sum);
}
int SumCubesOfPrime(int n)
{
    int i,j,c,sum=0;
    if(n<0)
        return (-1);
    else
    {
        for(i=2;i<=n;i++)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==2)
                sum=sum+pow(i,3);
        }
        return sum;
    }
}