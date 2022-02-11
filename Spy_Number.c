#include<stdio.h>
int main()
{
    int r,n,pro=1,sum=0,temp;
    scanf("%d", &n);
    while(n>0)
    {
       r=n%10;
       sum=sum+r;
       pro=pro*r;
       n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}