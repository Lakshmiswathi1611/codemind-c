#include<stdio.h>
int main()
{
    int n,i,sum=0,sr,r;
    scanf("%d", &n);
    i=n*n;
    while(i>0)
    {
        r=i%10;
        sum=sum+r;
        i=i/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}