#include<stdio.h>
int add(int i,int n,int count)
{
    if(i>n)
    {
        return count;
    }
    if(i%2==1)
    count=count+1;
    add(i+1,n,count);
}
int main()
{
    int m,n;
    printf("enter the start and end values");
    scanf("%d%d",&m,&n);
    int res=add(m,n,0);
    printf("the count of odd numbers is %d",res);
}