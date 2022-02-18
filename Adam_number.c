#include<stdio.h>
int main()
{
    int n,r,rev=0,sq,sqrev;
    scanf("%d",&n);//12
    sq=n*n;//sq=144
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    sqrev=rev*rev;//sqrev=21*21=441
    int rev1=0,rem;
    while(sqrev>0)
    {
        rem=sqrev%10;
        rev1=rev1*10+rem;
        sqrev=sqrev/10;
    }
    if(sq==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }    
    
}