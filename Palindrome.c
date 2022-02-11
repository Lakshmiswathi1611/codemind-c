#include<stdio.h>
int main()
{
    int n,x,r,pal=0;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        pal=pal*10+r;
        n=n/10;
    }
    if(x==pal)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}