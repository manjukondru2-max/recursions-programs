#include<stdio.h>
int output(inti,int fact)
{
    if(i<1)
    {
        return fact;
    }
    fact=fact*i;
    output(i-1,fact);
}
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int res=output(n,1);
    printf("the factorial of %d is %d",n,res);
}