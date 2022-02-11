#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,r,result;
    scanf("%d",&n);
    while(n>0)
    {
       r=n%10;
       sum=sum+r;
       pro=pro*r;
       n=n/10;
    }
    result=pro-sum;
    printf("%d", result);
}