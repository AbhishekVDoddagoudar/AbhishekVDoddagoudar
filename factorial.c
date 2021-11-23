#include <stdio.h>
int n,fact=1,i,x;
int factorial(n)
{
        for(i=n;i>0;i--)
                fact = fact*i;
        return fact;
       
}
int main()
{
        printf("Enter a number\n");
        scanf("%d",&n);
        x= factorial(n);
        printf("Factorial of %d = %d",n,fact);
}
