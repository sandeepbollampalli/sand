/* strong number or not*/
#include<stdio.h>
main()
{
	int n,r,sum=0,temp,fact,i;
	printf("\n enter the n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
	    fact=1;
	    for(i=1;i<=r;i++)
	    {
	    	fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("\n strong");
	else 
	printf("\n not strong");
}


