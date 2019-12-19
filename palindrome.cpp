/* Armstrong number or not*/
#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter the n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	printf("\n armstrong");
	else 
	printf("\n not armstrong");
}


