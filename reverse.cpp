/* to print no of digits*/
#include<stdio.h>
main()
{
	int count=0,n,r;
	printf("\n enter the n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	printf("\n no of digits :%d",count);
}

