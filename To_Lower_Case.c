#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],i;
    fgets(a,1000,stdin);
    while(a[i]!=NULL)
    {
    	if(a[i]>=65 && a[i]<=90)
    	{
    	    a[i]=a[i]+32;
		}
		i++;
	}
	printf("%s",a);
}
