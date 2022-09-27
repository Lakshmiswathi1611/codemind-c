#include<stdio.h>
int main()
{
    int a,r,i, sum=0;
    scanf("%d", &a);
    for(i=0;i<a;i++)
    {
        sum=0;
        while(a!=0)
        {
            r=a%10;
            sum=sum+r;
            a=a/10;
        }
        a=sum;
    }
    printf("%d",sum);
}